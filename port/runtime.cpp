#include "runtime.hpp"
#include <algorithm>
#include <cctype>
#include <cerrno>
#include <chrono>
#include <climits>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwctype>
#include <elf.h>
#include <sstream>
#include <stdexcept>
#include <sys/mman.h>
#include <thread>
#include <unicorn/arm.h>

namespace {
constexpr int registers[] = {UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2,
                             UC_ARM_REG_R3};
std::string hex(uint64_t n) {
  std::ostringstream s;
  s << std::hex << n;
  return s.str();
}
} // namespace
void BeachRuntime::check(uc_err e, const char *op) {
  if (e != UC_ERR_OK)
    throw std::runtime_error(std::string(op) + ": " + uc_strerror(e));
}
void *BeachRuntime::memory(uint32_t a, size_t n) {
  if (a < Base || uint64_t(a) + n > uint64_t(Base) + RamSize)
    throw std::runtime_error("Invalid guest range 0x" + hex(a) + " length " +
                             std::to_string(n));
  return ram + (a - Base);
}
uint32_t BeachRuntime::read32(uint32_t a) {
  uint32_t v;
  memcpy(&v, memory(a, 4), 4);
  return v;
}
void BeachRuntime::write32(uint32_t a, uint32_t v) {
  memcpy(memory(a, 4), &v, 4);
}
std::string BeachRuntime::cstring(uint32_t a) {
  auto p = static_cast<const char *>(memory(a));
  size_t max = std::min<size_t>(Base + RamSize - a, 1024 * 1024);
  const char *end = static_cast<const char *>(memchr(p, 0, max));
  if (!end)
    throw std::runtime_error("Unterminated guest string");
  return {p, end};
}
uint32_t BeachRuntime::allocate(uint32_t n) {
  if (n > RamSize / 2)
    throw std::runtime_error("Guest allocation exceeds limit: " +
                             std::to_string(n));
  n = (std::max(n, 1u) + 15) & ~15u;
  for (auto i = available.begin(); i != available.end(); ++i)
    if (i->second >= n) {
      auto a = i->first, remain = i->second - n;
      available.erase(i);
      if (remain)
        available[a + n] = remain;
      allocated[a] = n;
      memset(memory(a, n), 0, n);
      return a;
    }
  throw std::runtime_error("Guest heap exhausted");
}
void BeachRuntime::release(uint32_t a) {
  if (!a)
    return;
  auto i = allocated.find(a);
  if (i == allocated.end())
    throw std::runtime_error("Invalid guest free 0x" + hex(a));
  uint32_t n = i->second;
  allocated.erase(i);
  auto next = available.lower_bound(a);
  if (next != available.end() && a + n == next->first) {
    n += next->second;
    available.erase(next);
  }
  auto previous = available.lower_bound(a);
  if (previous != available.begin()) {
    --previous;
    if (previous->first + previous->second == a) {
      a = previous->first;
      n += previous->second;
      available.erase(previous);
    }
  }
  available[a] = n;
}
uint32_t BeachRuntime::heapBytes() const {
  uint32_t n = 0;
  for (auto &p : allocated)
    n += p.second;
  return n;
}
uint32_t BeachRuntime::object(Object v) {
  uint32_t id = nextObject++;
  objects[id] = v;
  return id;
}
uint32_t BeachRuntime::string(const std::string &s,
                              const std::u16string &wide) {
  uint32_t a = allocate(s.size() + 1);
  memcpy(memory(a, s.size() + 1), s.c_str(), s.size() + 1);
  std::u16string w = wide;
  if (w.empty())
    for (unsigned char c : s) {
      if (c > 127) {
        release(a);
        throw std::runtime_error("UTF16 required for non-ASCII string");
      }
      w.push_back(c);
    }
  uint32_t b = allocate((w.size() + 1) * 2);
  memcpy(memory(b, w.size() * 2), w.data(), w.size() * 2);
  return object({a, b, uint32_t(s.size()), uint32_t(w.size())});
}
void BeachRuntime::releaseString(uint32_t id) {
  auto o = objects.at(id);
  release(o.data);
  release(o.utf16);
  objects.erase(id);
}
uint32_t BeachRuntime::buffer(const void *p, size_t n) {
  if (n > RamSize / 2)
    throw std::runtime_error("Buffer too large");
  auto a = allocate(n);
  memcpy(memory(a, n), p, n);
  return object({a, 0, uint32_t(n), 0});
}
void BeachRuntime::releaseBuffer(uint32_t id) {
  auto o = objects.at(id);
  release(o.data);
  objects.erase(id);
}
uint32_t BeachRuntime::resolve(const std::string &name) {
  auto i = imports.find(name);
  if (i != imports.end())
    return i->second;
  if (nextTrap >= Env)
    throw std::runtime_error("Too many imports");
  uint32_t a = nextTrap;
  nextTrap += 4;
  write32(a, 0xe12fff1e); // bx lr, ARM mode
  traps[a] = name;
  imports[name] = a;
  return a;
}
void BeachRuntime::trapHook(uc_engine *u, uint64_t address, uint32_t,
                            void *context) {
  auto self = static_cast<BeachRuntime *>(context);
  try {
    const auto &name = self->traps.at(uint32_t(address));
    // pthread_once can call back into guest code. Defer it to the outer loop.
    if (name == "pthread_once") {
      uc_emu_stop(u);
      return;
    }
    self->importsUsed[name]++;
    self->dispatch(name);
    // The trampoline already contains an ARM `bx lr`. Let the guest execute
    // that return, including the ARM/Thumb state change. Writing PC from the
    // hook forces Unicorn out of its translated execution loop on every import.
    // Result registers were updated by dispatch(); LR/SP remain untouched.
  } catch (const std::exception &error) {
    self->callbackError = "Import at 0x" + hex(address) + ": " + error.what();
    uc_emu_stop(u);
  }
}
bool BeachRuntime::faultHook(uc_engine *u, uc_mem_type t, uint64_t a, int n,
                             int64_t, void *context) {
  auto self = static_cast<BeachRuntime *>(context);
  self->callbackError = "Guest memory fault type=" + std::to_string(t) +
                        " at 0x" + hex(a) + " size=" + std::to_string(n);
  uc_emu_stop(u);
  return false;
}
BeachRuntime::BeachRuntime(const uint8_t *elf, size_t size, Assets reader,
                           MathBackend backend)
    : assets(std::move(reader)), mathBackend(backend) {
  if (size < sizeof(Elf32_Ehdr))
    throw std::runtime_error("Truncated ELF");
  Elf32_Ehdr h;
  memcpy(&h, elf, sizeof(h));
  if (memcmp(h.e_ident, ELFMAG, SELFMAG) || h.e_ident[EI_CLASS] != ELFCLASS32 ||
      h.e_ident[EI_DATA] != ELFDATA2LSB || h.e_machine != EM_ARM)
    throw std::runtime_error("Expected little-endian ARM32 ELF");
  auto bytes = [&](size_t a, size_t n) {
    if (a > size || n > size - a)
      throw std::runtime_error("ELF file range out of bounds");
    return elf + a;
  };
  ram = static_cast<uint8_t *>(mmap(nullptr, RamSize, PROT_READ | PROT_WRITE,
                                    MAP_PRIVATE | MAP_ANONYMOUS, -1, 0));
  if (ram == MAP_FAILED) {
    ram = nullptr;
    throw std::runtime_error("Cannot reserve guest memory");
  }
  try {
    check(uc_open(UC_ARCH_ARM, UC_MODE_ARM, &uc), "uc_open");
    check(uc_ctl_set_cpu_model(uc, UC_CPU_ARM_CORTEX_A15), "cpu model");
    // Data writes must not enter Unicorn's self-modifying-code path. Only ELF
    // code pages and import return stubs are executable; heap/stack stay RW.
    check(uc_mem_map_ptr(uc, Base, RamSize, UC_PROT_READ | UC_PROT_WRITE, ram),
          "guest memory");
    size_t pageSize = 0;
    check(uc_query(uc, UC_QUERY_PAGE_SIZE, &pageSize), "guest page size");
    check(uc_mem_protect(uc, Trap, Env - Trap, UC_PROT_READ | UC_PROT_EXEC),
          "import code permissions");
    uint32_t fpexc = 0x40000000;
    check(uc_reg_write(uc, UC_ARM_REG_FPEXC, &fpexc), "enable VFP");
    for (unsigned j = 0; j < h.e_phnum; j++) {
      Elf32_Phdr p;
      memcpy(&p, bytes(h.e_phoff + j * h.e_phentsize, sizeof(p)), sizeof(p));
      if (p.p_type == PT_LOAD) {
        if (p.p_vaddr + p.p_memsz >= Trap - Base)
          throw std::runtime_error("ELF exceeds image area");
        memcpy(memory(Base + p.p_vaddr, p.p_memsz),
               bytes(p.p_offset, p.p_filesz), p.p_filesz);
        if (p.p_flags & PF_X) {
          const uint64_t start = (Base + uint64_t(p.p_vaddr)) & ~(pageSize - 1);
          const uint64_t end = (Base + uint64_t(p.p_vaddr) + p.p_memsz +
                                pageSize - 1) & ~(pageSize - 1);
          check(uc_mem_protect(uc, start, end - start,
                               UC_PROT_READ | UC_PROT_EXEC |
                                   ((p.p_flags & PF_W) ? UC_PROT_WRITE : 0)),
                "ELF code permissions");
        }
      }
    }
    available[Heap] = Base + RamSize - Heap;
    errnoAddress = allocate(4);
    imports["__stack_chk_guard"] = allocate(4);
    write32(imports["__stack_chk_guard"], 0xabcd1234);
    imports["__sF"] = allocate(3 * 88);
    uint32_t ct = allocate(257), lower = allocate(257 * 2);
    for (int c = -1; c < 256; c++) {
      unsigned char flags = 0;
      if (c >= 0) {
        if (std::isupper(c))
          flags |= 1;
        if (std::islower(c))
          flags |= 2;
        if (std::isdigit(c))
          flags |= 4;
        if (std::isspace(c))
          flags |= 8;
        if (std::ispunct(c))
          flags |= 16;
        if (std::iscntrl(c))
          flags |= 32;
        if (std::isxdigit(c))
          flags |= 64;
        if (c == ' ' || c == '\t')
          flags |= 128;
      }
      *static_cast<uint8_t *>(memory(ct + c + 1)) = flags;
      int16_t l = c < 0 ? -1 : std::tolower(c);
      memcpy(memory(lower + (c + 1) * 2, 2), &l, 2);
    }
    imports["_ctype_"] = allocate(4);
    write32(imports["_ctype_"], ct);
    imports["_tolower_tab_"] = allocate(4);
    write32(imports["_tolower_tab_"], lower);
    std::vector<Elf32_Shdr> sections(h.e_shnum);
    for (unsigned j = 0; j < h.e_shnum; j++)
      memcpy(&sections[j],
             bytes(h.e_shoff + j * h.e_shentsize, sizeof(Elf32_Shdr)),
             sizeof(Elf32_Shdr));
    auto symbol = [&](const Elf32_Shdr &table, unsigned index) {
      Elf32_Sym s;
      memcpy(&s, bytes(table.sh_offset + index * sizeof(s), sizeof(s)),
             sizeof(s));
      return s;
    };
    auto symbolName = [&](const Elf32_Shdr &table, const Elf32_Sym &s) {
      const auto &st = sections.at(table.sh_link);
      if (s.st_name >= st.sh_size)
        throw std::runtime_error("Bad ELF string offset");
      const char *p = reinterpret_cast<const char *>(
          bytes(st.sh_offset + s.st_name, st.sh_size - s.st_name));
      auto end =
          static_cast<const char *>(memchr(p, 0, st.sh_size - s.st_name));
      if (!end)
        throw std::runtime_error("Bad ELF string");
      return std::string(p, end);
    };
    for (auto &table : sections)
      if (table.sh_type == SHT_DYNSYM)
        for (unsigned j = 1; j < table.sh_size / sizeof(Elf32_Sym); j++) {
          auto s = symbol(table, j);
          if (s.st_shndx != SHN_UNDEF)
            symbols[symbolName(table, s)] = Base + s.st_value;
        }
    for (auto &rel : sections)
      if (rel.sh_type == SHT_REL)
        for (unsigned j = 0; j < rel.sh_size / sizeof(Elf32_Rel); j++) {
          Elf32_Rel r;
          memcpy(&r, bytes(rel.sh_offset + j * sizeof(r), sizeof(r)),
                 sizeof(r));
          uint32_t a = Base + r.r_offset, v = read32(a),
                   type = ELF32_R_TYPE(r.r_info), index = ELF32_R_SYM(r.r_info);
          if (type == R_ARM_RELATIVE) {
            write32(a, Base + v);
            continue;
          }
          if (type == R_ARM_NONE)
            continue;
          auto &table = sections.at(rel.sh_link);
          auto s = symbol(table, index);
          auto name = symbolName(table, s);
          uint32_t target =
              s.st_shndx == SHN_UNDEF ? resolve(name) : Base + s.st_value;
          if (type == R_ARM_ABS32)
            write32(a, target + v);
          else if (type == R_ARM_GLOB_DAT || type == R_ARM_JUMP_SLOT)
            write32(a, target);
          else
            throw std::runtime_error("Unsupported ARM relocation " +
                                     std::to_string(type));
        }
    uint32_t table = Env + 4;
    write32(Env, table);
    for (unsigned j = 0; j < 234; j++)
      write32(table + j * 4, resolve("JNI:" + std::to_string(j)));
    uc_hook hook;
    check(uc_hook_add(uc, &hook, UC_HOOK_CODE,
                      reinterpret_cast<void *>(trapHook), this, Trap + 4,
                      Env - 1),
          "import hook");
    check(uc_hook_add(uc, &hook, UC_HOOK_MEM_INVALID,
                      reinterpret_cast<void *>(faultHook), this, 1, 0),
          "fault hook");
    if (mathBackend == MathBackend::Native)
      installNativeMath();
    for (auto &section : sections)
      if (section.sh_type == SHT_INIT_ARRAY)
        for (unsigned j = 0; j < section.sh_size; j += 4) {
          uint32_t f = read32(Base + section.sh_addr + j);
          if (f && f != UINT32_MAX)
            execute(f, {});
        }
  } catch (...) {
    if (uc)
      uc_close(uc);
    uc = nullptr;
    munmap(ram, RamSize);
    ram = nullptr;
    throw;
  }
}
BeachRuntime::~BeachRuntime() {
  for (auto &entry : files)
    fclose(entry.second);
  if (uc)
    uc_close(uc);
  if (ram)
    munmap(ram, RamSize);
}
uint32_t BeachRuntime::arg(unsigned i) {
  uint32_t v;
  if (i < 4)
    check(uc_reg_read(uc, registers[i], &v), "arg");
  else {
    uint32_t sp;
    check(uc_reg_read(uc, UC_ARM_REG_SP, &sp), "stack");
    v = read32(sp + (i - 4) * 4);
  }
  return v;
}
float BeachRuntime::farg(unsigned i) {
  uint32_t v = arg(i);
  float f;
  memcpy(&f, &v, 4);
  return f;
}
double BeachRuntime::darg(unsigned i) {
  uint64_t v = uint64_t(arg(i)) | (uint64_t(arg(i + 1)) << 32);
  double f;
  memcpy(&f, &v, 8);
  return f;
}
void BeachRuntime::result(uint32_t v) {
  check(uc_reg_write(uc, UC_ARM_REG_R0, &v), "result");
}
void BeachRuntime::resultDouble(double d) {
  uint64_t v;
  memcpy(&v, &d, 8);
  uint32_t lo = v, hi = v >> 32;
  result(lo);
  check(uc_reg_write(uc, UC_ARM_REG_R1, &hi), "double result");
}
uint32_t BeachRuntime::execute(uint32_t address,
                               const std::vector<uint32_t> &args) {
  if (stackDepth >= 16)
    throw std::runtime_error("Guest call nesting limit");
  uc_context *saved = nullptr;
  if (stackDepth) {
    check(uc_context_alloc(uc, &saved), "context alloc");
    check(uc_context_save(uc, saved), "context save");
  }
  uint32_t sp = Stack - (++stackDepth) * 0x10000, lr = Trap;
  try {
    for (unsigned i = 0; i < std::max<size_t>(4, args.size()); i++) {
      uint32_t v = i < args.size() ? args[i] : 0;
      if (i < 4)
        check(uc_reg_write(uc, registers[i], &v), "argument");
      else
        write32(sp + (i - 4) * 4, v);
    }
    check(uc_reg_write(uc, UC_ARM_REG_SP, &sp), "set stack");
    check(uc_reg_write(uc, UC_ARM_REG_LR, &lr), "set return");
    uint32_t pc = address;
    uint64_t iterations = 0;
    while (pc != Trap) {
      callbackError.clear();
      uc_err error = uc_emu_start(uc, pc, Trap, 15ULL * 1000 * 1000, 0);
      if (!callbackError.empty())
        throw std::runtime_error(callbackError);
      check(error, ("execute at 0x" + hex(pc)).c_str());
      check(uc_reg_read(uc, UC_ARM_REG_PC, &pc), "get pc");
      if (pc == Trap)
        break;
      auto t = traps.find(pc);
      if (t == traps.end())
        throw std::runtime_error("Guest execution stopped at 0x" + hex(pc) +
                                 " (timeout)");
      if (++iterations > 10000000)
        throw std::runtime_error("Guest import call limit");
      importsUsed[t->second]++;
      try {
        dispatch(t->second);
      } catch (const std::exception &e) {
        throw std::runtime_error(t->second + ": " + e.what());
      }
      check(uc_reg_read(uc, UC_ARM_REG_LR, &pc), "return pc");
    }
    uint32_t answer = arg(0);
    if (saved) {
      auto status = uc_context_restore(uc, saved);
      uc_context_free(saved);
      saved = nullptr;
      check(status, "context restore");
    }
    --stackDepth;
    return answer;
  } catch (...) {
    --stackDepth;
    if (saved) {
      uc_context_restore(uc, saved);
      uc_context_free(saved);
    }
    throw;
  }
}
uint32_t BeachRuntime::invoke(const std::string &name,
                              std::vector<uint32_t> args) {
  args.insert(args.begin(), {Env, 0x1234});
  calls++;
  auto i = symbols.find("Java_com_dualboot_engine_EngineInterface_" + name);
  if (i == symbols.end())
    throw std::runtime_error("Missing JNI export " + name);
  return execute(i->second, args);
}
std::string BeachRuntime::format(uint32_t fmt,
                                 std::function<uint32_t(unsigned)> words,
                                 unsigned cursor) {
  auto text = cstring(fmt);
  std::string out;
  for (size_t i = 0; i < text.size();) {
    if (text[i] != '%') {
      out.push_back(text[i++]);
      continue;
    }
    i++;
    if (i < text.size() && text[i] == '%') {
      out.push_back('%');
      i++;
      continue;
    }
    std::string spec = "%";
    while (i < text.size() && strchr("-+ #0", text[i]))
      spec.push_back(text[i++]);
    if (i < text.size() && text[i] == '*') {
      spec += std::to_string(int32_t(words(cursor++)));
      i++;
    } else
      while (i < text.size() && std::isdigit(text[i]))
        spec.push_back(text[i++]);
    if (i < text.size() && text[i] == '.') {
      spec.push_back(text[i++]);
      if (i < text.size() && text[i] == '*') {
        spec += std::to_string(words(cursor++));
        i++;
      } else
        while (i < text.size() && std::isdigit(text[i]))
          spec.push_back(text[i++]);
    }
    std::string length;
    while (i < text.size() && strchr("hlztLj", text[i]))
      length.push_back(text[i++]);
    if (i == text.size())
      throw std::runtime_error("Incomplete printf format");
    char type = text[i++];
    char temp[4096];
    int n = 0;
    if (type == 's') {
      auto value = cstring(words(cursor++));
      n = snprintf(temp, sizeof(temp), (spec + 's').c_str(), value.c_str());
    } else if (type == 'c')
      n = snprintf(temp, sizeof(temp), (spec + 'c').c_str(),
                   int(words(cursor++)));
    else if (strchr("fFeEgGaA", type)) {
      cursor = (cursor + 1) & ~1u;
      uint64_t v = words(cursor);
      v |= uint64_t(words(cursor + 1)) << 32;
      cursor += 2;
      double d;
      memcpy(&d, &v, 8);
      n = snprintf(temp, sizeof(temp), (spec + type).c_str(), d);
    } else if (strchr("diuoxX", type)) {
      if (length == "ll" || length == "j") {
        cursor = (cursor + 1) & ~1u;
        uint64_t v = words(cursor);
        v |= uint64_t(words(cursor + 1)) << 32;
        cursor += 2;
        if (type == 'd' || type == 'i')
          n = snprintf(temp, sizeof(temp), (spec + "ll" + type).c_str(),
                       static_cast<long long>(v));
        else
          n = snprintf(temp, sizeof(temp), (spec + "ll" + type).c_str(),
                       static_cast<unsigned long long>(v));
      } else {
        auto v = words(cursor++);
        if (type == 'd' || type == 'i')
          n = snprintf(temp, sizeof(temp), (spec + type).c_str(), int32_t(v));
        else
          n = snprintf(temp, sizeof(temp), (spec + type).c_str(), v);
      }
    } else if (type == 'p') {
      auto v = words(cursor++);
      n = snprintf(temp, sizeof(temp), "0x%x", v);
    } else
      throw std::runtime_error("Unsupported printf conversion");
    if (n < 0 || n >= int(sizeof(temp)))
      throw std::runtime_error("Formatted field too large");
    out.append(temp, n);
  }
  return out;
}
void BeachRuntime::dispatch(const std::string &n) {
  auto a = [&](unsigned i) { return arg(i); };
  if (n.rfind("gl", 0) == 0) {
    graphics(n);
    if (frames < 2 && n != "glGetError")
      traceGraphics(n);
    return;
  }
  if (n.rfind("JNI:", 0) == 0) {
    unsigned slot = std::stoul(n.substr(4));
    switch (slot) {
    case 21:
    case 25:
      result(a(1));
      return; // global/local ref; objects live for the host call
    case 22:
    case 23:
    case 166:
    case 170:
    case 217:
    case 218:
      result(0);
      return;
    case 164:
      result(objects.at(a(1)).length);
      return;
    case 165:
      result(objects.at(a(1)).utf16);
      return;
    case 168:
      result(objects.at(a(1)).size);
      return;
    case 169:
    case 230:
      result(objects.at(a(1)).data);
      return;
    case 231: {
      result(objects.at(a(1)).size);
      uint32_t hi = 0;
      uc_reg_write(uc, UC_ARM_REG_R1, &hi);
      return;
    }
    case 228:
      result(0);
      return; // no pending Java exception in the guest JNI facade
    default:
      throw std::runtime_error("Unhandled JNI slot " + std::to_string(slot));
    }
  }
  if (n == "malloc" || n == "mmap") {
    result(allocate(n == "malloc" ? a(0) : a(1)));
    return;
  }
  if (n == "free" || n == "munmap") {
    release(a(0));
    result(0);
    return;
  }
  if (n == "realloc") {
    auto old = a(0), size = a(1);
    if (!size) {
      release(old);
      result(0);
      return;
    }
    auto next = allocate(size);
    if (old) {
      memcpy(memory(next, size), memory(old),
             std::min(size, allocated.at(old)));
      release(old);
    }
    result(next);
    return;
  }
  if (n == "memcpy" || n == "memmove") {
    auto dest = a(0), src = a(1), len = a(2);
    memmove(memory(dest, len), memory(src, len), len);
    result(dest);
    return;
  }
  if (n == "memset") {
    auto dest = a(0), value = a(1), len = a(2);
    memset(memory(dest, len), value, len);
    result(dest);
    return;
  }
  if (n == "memcmp") {
    auto x = a(0), y = a(1), len = a(2);
    result(memcmp(memory(x, len), memory(y, len), len));
    return;
  }
  if (n == "strlen") {
    result(cstring(a(0)).size());
    return;
  }
  if (n == "strcmp" || n == "strcasecmp") {
    auto x = cstring(a(0)), y = cstring(a(1));
    result(n == "strcmp" ? strcmp(x.c_str(), y.c_str())
                         : strcasecmp(x.c_str(), y.c_str()));
    return;
  }
  if (n == "strncpy") {
    auto dest = a(0), len = a(2);
    auto src = cstring(a(1));
    strncpy(static_cast<char *>(memory(dest, len)), src.c_str(), len);
    result(dest);
    return;
  }
  if (n == "memchr") {
    auto start = a(0), c = a(1), len = a(2);
    auto base = static_cast<uint8_t *>(memory(start, len));
    auto p = static_cast<uint8_t *>(memchr(base, c, len));
    result(p ? start + (p - base) : 0);
    return;
  }
  if (n == "memmem") {
    auto start = a(0), len = a(1), needle = a(2), nlen = a(3);
    auto p = static_cast<uint8_t *>(memory(start, len)),
         q = static_cast<uint8_t *>(memory(needle, nlen));
    auto match = std::search(p, p + len, q, q + nlen);
    result(nlen == 0 ? start : (match == p + len ? 0 : start + (match - p)));
    return;
  }
  if (n == "atol" || n == "strtol") {
    auto start = a(0);
    auto text = cstring(start);
    char *end = nullptr;
    long long value = strtoll(text.c_str(), &end, n == "atol" ? 10 : a(2));
    if (n == "strtol" && a(1))
      write32(a(1), start + (end - text.c_str()));
    if (value > INT32_MAX) {
      value = INT32_MAX;
      write32(errnoAddress, ERANGE);
    }
    if (value < INT32_MIN) {
      value = INT32_MIN;
      write32(errnoAddress, ERANGE);
    }
    result(value);
    return;
  }
  if (n == "__errno") {
    result(errnoAddress);
    return;
  }
  if (n == "iswspace") {
    result(iswspace(a(0)));
    return;
  }
  if (n == "AAssetManager_fromJava") {
    result(2);
    return;
  }
  if (n == "AAssetManager_open") {
    auto path = cstring(a(1));
    auto bytes = assets(path);
    if (bytes.empty()) {
      result(0);
      return;
    }
    uint32_t data = allocate(bytes.size());
    memcpy(memory(data, bytes.size()), bytes.data(), bytes.size());
    result(object({data, 0, uint32_t(bytes.size()), 0}));
    return;
  }
  if (n == "AAsset_getLength") {
    result(objects.at(a(0)).size);
    return;
  }
  if (n == "AAsset_getBuffer") {
    result(objects.at(a(0)).data);
    return;
  }
  if (n == "AAsset_close") {
    releaseBuffer(a(0));
    result(0);
    return;
  }
  if (n == "__cxa_atexit" || n == "__aeabi_atexit" || n == "__cxa_finalize") {
    result(0);
    return;
  } // guest statics live until this VM is destroyed
  if (n == "pthread_once") {
    auto address = a(0), function = a(1);
    if (read32(address) == 0) {
      write32(address, 1);
      execute(function, {});
      write32(address, 2);
    }
    result(0);
    return;
  }
  if (n == "pthread_mutex_init" || n == "pthread_cond_init" ||
      n == "pthread_mutex_lock" || n == "pthread_mutex_unlock" ||
      n == "pthread_mutex_destroy" || n == "pthread_cond_broadcast") {
    result(0);
    return;
  } // host serializes all entry points; guest creates no threads
  if (n == "pthread_key_create") {
    write32(a(0), nextObject++);
    result(0);
    return;
  }
  if (n == "pthread_key_delete") {
    threadValues.erase(a(0));
    result(0);
    return;
  }
  if (n == "pthread_setspecific") {
    threadValues[a(0)] = a(1);
    result(0);
    return;
  }
  if (n == "pthread_getspecific") {
    result(threadValues[a(0)]);
    return;
  }
  if (n == "pthread_cond_timedwait_monotonic_np") {
    uint32_t address = a(2);
    timespec now{};
    clock_gettime(CLOCK_MONOTONIC, &now);
    int64_t ns = (int64_t(int32_t(read32(address))) - now.tv_sec) * 1000000000 +
                 int32_t(read32(address + 4)) - now.tv_nsec;
    if (ns > 0)
      std::this_thread::sleep_for(
          std::chrono::nanoseconds(std::min<int64_t>(ns, 1000000000)));
    result(ETIMEDOUT);
    return;
  }
  if (n == "pthread_cond_wait")
    throw std::runtime_error("Unexpected guest blocking wait");
  if (n == "sched_yield") {
    std::this_thread::yield();
    result(0);
    return;
  }
  if (n == "usleep") {
    std::this_thread::sleep_for(
        std::chrono::microseconds(std::min(a(0), 1000000u)));
    result(0);
    return;
  }
  if (n == "srand48") {
    randomState = (uint64_t(a(0)) << 16) | 0x330e;
    result(0);
    return;
  }
  if (n == "lrand48") {
    randomState = (randomState * 0x5deece66dULL + 0xb) & 0xffffffffffffULL;
    result(randomState >> 17);
    return;
  }
  if (n == "clock_gettime") {
    timespec ts{};
    int r = clock_gettime(a(0), &ts);
    if (!r) {
      write32(a(1), ts.tv_sec);
      write32(a(1) + 4, ts.tv_nsec);
    }
    result(r);
    return;
  }
  if (n == "time") {
    uint32_t t = std::time(nullptr);
    if (a(0))
      write32(a(0), t);
    result(t);
    return;
  }
  if (n == "difftime") {
    resultDouble(double(int32_t(a(0))) - double(int32_t(a(1))));
    return;
  }
  if (n == "gmtime_r" || n == "localtime_r" || n == "mktime") {
    uint32_t dest = n == "mktime" ? a(0) : a(1);
    tm t{};
    time_t timeValue = 0;
    if (n == "mktime") {
      int *fields[] = {&t.tm_sec,  &t.tm_min,  &t.tm_hour,
                       &t.tm_mday, &t.tm_mon,  &t.tm_year,
                       &t.tm_wday, &t.tm_yday, &t.tm_isdst};
      for (int i = 0; i < 9; i++)
        *fields[i] = read32(dest + i * 4);
      timeValue = std::mktime(&t);
    } else {
      timeValue = int32_t(read32(a(0)));
      if (n == "gmtime_r")
        gmtime_r(&timeValue, &t);
      else
        localtime_r(&timeValue, &t);
    }
    int fields[] = {t.tm_sec,   t.tm_min,         t.tm_hour, t.tm_mday,
                    t.tm_mon,   t.tm_year,        t.tm_wday, t.tm_yday,
                    t.tm_isdst, int(t.tm_gmtoff), 0};
    for (int i = 0; i < 11; i++)
      write32(dest + i * 4, fields[i]);
    result(n == "mktime" ? uint32_t(timeValue) : dest);
    return;
  }
  if (n == "snprintf" || n == "vsnprintf") {
    auto dest = a(0), cap = a(1), fmt = a(2), va = a(3);
    auto text = format(fmt,
                       n == "vsnprintf"
                           ? std::function<uint32_t(unsigned)>([&](unsigned i) {
                               return read32(va + i * 4 - (va & 7));
                             })
                           : std::function<uint32_t(unsigned)>(a),
                       n == "vsnprintf" ? (va & 7) / 4 : 3);
    if (cap) {
      size_t count = std::min<size_t>(text.size(), cap - 1);
      memcpy(memory(dest, count + 1), text.data(), count);
      *static_cast<char *>(memory(dest + count)) = 0;
    }
    result(text.size());
    return;
  }
  if (n == "puts" || n == "__android_log_write") {
    auto text = cstring(a(n == "puts" ? 0 : 2));
    fprintf(stderr, "[guest] %s\n", text.c_str());
    result(text.size());
    return;
  }
  if (n == "fprintf") {
    auto text = format(a(1), a, 2);
    fprintf(stderr, "[guest] %s", text.c_str());
    result(text.size());
    return;
  }
  if (n == "fflush") {
    result(0);
    return;
  }
  if (n == "fwrite") {
    auto size = a(1), count = a(2);
    if (uint64_t(size) * count > RamSize)
      throw std::runtime_error("fwrite range");
    auto f = files.find(a(3));
    result(fwrite(memory(a(0), size * count), size, count,
                  f == files.end() ? stderr : f->second));
    return;
  }
  if (n == "fopen" || n == "open") {
    // Only CPU feature probing is expected outside APK assets.
    auto path = cstring(a(0));
    if (path != "/proc/cpuinfo") {
      write32(errnoAddress, ENOENT);
      result(n == "open" ? UINT32_MAX : 0);
      return;
    }
    FILE *f = fopen(path.c_str(), "rb");
    if (!f) {
      result(n == "open" ? UINT32_MAX : 0);
      return;
    }
    auto id = nextObject++;
    files[id] = f;
    result(id);
    return;
  }
  if (n == "read" || n == "fread") {
    auto id = n == "read" ? a(0) : a(3), dest = n == "read" ? a(1) : a(0),
         size = n == "read" ? 1 : a(1), count = a(2);
    if (uint64_t(size) * count > RamSize)
      throw std::runtime_error("read range");
    result(fread(memory(dest, size * count), size, count, files.at(id)));
    return;
  }
  if (n == "fseek") {
    result(fseek(files.at(a(0)), int32_t(a(1)), a(2)));
    return;
  }
  if (n == "ftell") {
    result(ftell(files.at(a(0))));
    return;
  }
  if (n == "close" || n == "fclose") {
    auto id = a(0);
    auto f = files.at(id);
    files.erase(id);
    result(fclose(f));
    return;
  }
  if (n == "mkdir") {
    write32(errnoAddress, EACCES);
    result(UINT32_MAX);
    return;
  }
  if (n == "dlopen") {
    result(0);
    return;
  } // optional unwind/backtrace helpers; never expose host code as a guest
    // address
  if (n == "dlsym") {
    result(0);
    return;
  }
  if (n == "dlclose") {
    result(0);
    return;
  }
  if (n == "__gnu_Unwind_Find_exidx") {
    if (a(1))
      write32(a(1), 0);
    result(0);
    return;
  }
  if (n == "abort" || n == "__stack_chk_fail" || n == "__assert2" ||
      n == "raise")
    throw std::runtime_error("Engine requested fatal termination: " + n);
  throw std::runtime_error("Unimplemented import: " + n);
}

uint32_t BeachRuntime::callSymbol(const std::string &name,
                                  const std::vector<uint32_t> &args,
                                  const std::vector<float> &vfpArgs) {
  auto function = symbols.find(name);
  if (function == symbols.end())
    throw std::runtime_error("Unknown guest export: " + name);
  if (vfpArgs.size() > 16)
    throw std::runtime_error("Too many VFP test arguments");
  for (size_t i = 0; i < vfpArgs.size(); i++)
    check(uc_reg_write(uc, UC_ARM_REG_S0 + int(i), &vfpArgs[i]),
          "VFP argument");
  return execute(function->second, args);
}
