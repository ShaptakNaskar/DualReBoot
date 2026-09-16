#include "native_math.hpp"
#include "runtime.hpp"
#include <array>
#include <cstring>
#include <stdexcept>
#include <unicorn/arm.h>

namespace {
bool overlaps(uint32_t a, size_t an, uint32_t b, size_t bn) {
  return uint64_t(a) < uint64_t(b) + bn && uint64_t(b) < uint64_t(a) + an;
}
} // namespace
void BeachRuntime::installNativeMath() {
  for (unsigned i = 0; i < 6; i++) {
    auto found = symbols.find(beach_math::symbols[i]);
    if (found == symbols.end())
      throw std::runtime_error("Required native math export is absent");
    uint32_t address = found->second & ~1u;
    mathEntries[address] = i;
    uc_hook hook;
    check(uc_hook_add(uc, &hook, UC_HOOK_CODE,
                      reinterpret_cast<void *>(mathHook), this, address,
                      address),
          "native math hook");
  }
}
void BeachRuntime::mathHook(uc_engine *uc, uint64_t address, uint32_t,
                            void *context) {
  auto &self = *static_cast<BeachRuntime *>(context);
  try {
    unsigned operation = self.mathEntries.at(uint32_t(address));
    if (!self.nativeMath(operation)) {
      ++self.nativeMathFallbacks;
      return; // Original instructions remain intact, including aliasing
              // behavior.
    }
    ++self.nativeMathCalls[operation];
    uint32_t lr;
    self.check(uc_reg_read(uc, UC_ARM_REG_LR, &lr), "native math return");
    self.check(uc_reg_write(uc, UC_ARM_REG_PC, &lr), "native math branch");
  } catch (const std::exception &error) {
    self.callbackError = std::string("Native math: ") + error.what();
    uc_emu_stop(uc);
  }
}
bool BeachRuntime::nativeMath(unsigned op) {
  if (op >= 2) {
    const uint32_t a = arg(0), b = arg(1), output = arg(2);
    // The original matrix routines are not consistently alias-safe. Preserve
    // their behavior for overlapping operands by running the original code.
    if (overlaps(output, 64, a, 64) || overlaps(output, 64, b, 64))
      return false;
    std::array<float, 16> left, right, result;
    std::memcpy(left.data(), memory(a, 64), 64);
    std::memcpy(right.data(), memory(b, 64), 64);
    beach_math::transform(left.data(), right.data(), result.data(),
                          static_cast<beach_math::MatrixKind>(op - 2));
    std::memcpy(memory(output, 64), result.data(), 64);
    return true;
  }
  const uint32_t count = arg(op == 0 ? 3 : 6);
  if (!count)
    return true;
  if (count > RamSize / 16)
    throw std::runtime_error("Invalid native vector count");
  const size_t bytes = size_t(count) * 16;
  const uint32_t output = arg(0), input = arg(1), third = arg(2);
  if ((output | input | third) & 3)
    return false;
  if (output != input && overlaps(output, bytes, input, bytes))
    return false;
  if (op == 0) {
    if (output != third && overlaps(output, bytes, third, bytes))
      return false;
    float weight;
    // The JNI entry points use their declared Android ABI, but this internal
    // routine uses AAPCS-VFP: weight is S0 and count is R3.
    check(uc_reg_read(uc, UC_ARM_REG_S0, &weight), "native blend weight");
    beach_math::blend(static_cast<float *>(memory(output, bytes)),
                      static_cast<const float *>(memory(input, bytes)),
                      static_cast<const float *>(memory(third, bytes)), weight,
                      count);
  } else {
    const uint32_t w0 = arg(3), w1 = arg(4), w2 = arg(5);
    if ((w0 | w1 | w2) & 3)
      return false;
    if (overlaps(output, bytes, third, 192) ||
        overlaps(output, bytes, w0, bytes) ||
        overlaps(output, bytes, w1, bytes) ||
        overlaps(output, bytes, w2, bytes))
      return false;
    beach_math::skin3(static_cast<float *>(memory(output, bytes)),
                      static_cast<const float *>(memory(input, bytes)),
                      static_cast<const float *>(memory(third, 192)),
                      static_cast<const float *>(memory(w0, bytes)),
                      static_cast<const float *>(memory(w1, bytes)),
                      static_cast<const float *>(memory(w2, bytes)), count);
  }
  nativeMathVertices += count;
  return true;
}
