#pragma once
#include <cstdint>
#include <cstdio>
#include <functional>
#include <map>
#include <string>
#include <unicorn/unicorn.h>
#include <unordered_map>
#include <vector>

// ARM32 addresses are guest addresses, never truncated host pointers.
class BeachRuntime {
public:
  using Assets = std::function<std::vector<uint8_t>(const std::string &)>;
  BeachRuntime(const uint8_t *elf, size_t size, Assets assets);
  ~BeachRuntime();
  BeachRuntime(const BeachRuntime &) = delete;
  uint32_t invoke(const std::string &method, std::vector<uint32_t> args = {});
  uint32_t string(const std::string &utf8, const std::u16string &utf16 = {});
  void releaseString(uint32_t object);
  uint32_t buffer(const void *data, size_t size);
  void releaseBuffer(uint32_t object);
  uint32_t allocate(uint32_t size);
  void release(uint32_t address);
  void *memory(uint32_t address, size_t size = 1);
  uint32_t read32(uint32_t address);
  void write32(uint32_t address, uint32_t value);
  uint64_t calls = 0;
  uint64_t frames = 0;
  uint32_t heapBytes() const;
  std::map<std::string, uint64_t> importsUsed;

private:
  static constexpr uint32_t Base = 0x10000, RamSize = 128 * 1024 * 1024;
  static constexpr uint32_t Trap = 0x100000, Env = 0x110000, Stack = 0x400000,
                            Heap = 0x500000;
  uc_engine *uc = nullptr;
  uint8_t *ram = nullptr;
  Assets assets;
  std::unordered_map<std::string, uint32_t> symbols, imports;
  std::unordered_map<uint32_t, std::string> traps;
  std::map<uint32_t, uint32_t> available, allocated;
  struct Object {
    uint32_t data = 0, utf16 = 0, size = 0, length = 0;
  };
  std::unordered_map<uint32_t, Object> objects;
  std::unordered_map<uint32_t, uint32_t> threadValues;
  std::unordered_map<uint32_t, std::vector<uint32_t>> assetAllocations;
  std::unordered_map<uint32_t, std::string> glStrings;
  std::unordered_map<uint32_t, FILE *> files;
  uint32_t nextObject = 0x70000000, nextTrap = Trap + 4, errnoAddress = 0,
           stackDepth = 0;
  uint64_t randomState = 0x1234abcd330eULL;
  std::string callbackError;
  static void trapHook(uc_engine *, uint64_t, uint32_t, void *);
  static bool faultHook(uc_engine *, uc_mem_type, uint64_t, int, int64_t,
                        void *);
  void check(uc_err error, const char *operation);
  uint32_t resolve(const std::string &name);
  uint32_t execute(uint32_t address, const std::vector<uint32_t> &args);
  void dispatch(const std::string &name);
  uint32_t arg(unsigned index);
  float farg(unsigned index);
  double darg(unsigned index);
  void result(uint32_t value);
  void resultDouble(double value);
  std::string cstring(uint32_t address);
  std::string format(uint32_t fmt, std::function<uint32_t(unsigned)> words,
                     unsigned start);
  void graphics(const std::string &name);
  void traceGraphics(const std::string &name);
  uint32_t object(Object value);
};
