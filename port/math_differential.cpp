#include "native_math.hpp"
#include "runtime.hpp"
#include <algorithm>
#include <cmath>
#include <cstring>
#include <fstream>
#include <iostream>
#include <random>
#include <stdexcept>

int main(int argc, char **argv) {
  try {
    if (argc != 2)
      throw std::runtime_error("Usage: math-differential "
                               "/path/to/original/armeabi-v7a/libdbgengine.so");
    std::ifstream stream(argv[1], std::ios::binary);
    std::vector<uint8_t> elf{std::istreambuf_iterator<char>(stream), {}};
    auto assets = [](const std::string &) { return std::vector<uint8_t>{}; };
    BeachRuntime guest(elf.data(), elf.size(), assets,
                       BeachRuntime::MathBackend::Guest);
    BeachRuntime native(elf.data(), elf.size(), assets,
                        BeachRuntime::MathBackend::Native);
    auto allocate = [&](uint32_t bytes) {
      auto a = guest.allocate(bytes), b = native.allocate(bytes);
      if (a != b)
        throw std::runtime_error("Unexpected guest allocation divergence");
      return a;
    };
    auto put = [&](uint32_t address, const std::vector<float> &value) {
      for (auto *vm : {&guest, &native})
        std::memcpy(vm->memory(address, value.size() * 4), value.data(),
                    value.size() * 4);
    };
    std::mt19937 random(20260915);
    std::uniform_real_distribution<float> range(-3.f, 3.f);
    auto values = [&](size_t n) {
      std::vector<float> result(n);
      for (auto &v : result)
        v = range(random);
      return result;
    };
    auto compare = [&](uint32_t address, size_t n, const char *label,
                       bool preserveW = false) {
      auto a = static_cast<const float *>(guest.memory(address, n * 4));
      auto b = static_cast<const float *>(native.memory(address, n * 4));
      for (size_t i = 0; i < n; i++) {
        if (preserveW && i % 4 == 3) {
          if (std::memcmp(a + i, b + i, 4) != 0)
            throw std::runtime_error(std::string(label) +
                                     ": fourth component changed");
        } else if (!std::isfinite(b[i]) ||
                   std::abs(a[i] - b[i]) >
                       2e-5f * std::max(1.f, std::abs(a[i]))) {
          throw std::runtime_error(std::string(label) + " mismatch at " +
                                   std::to_string(i) +
                                   ": original=" + std::to_string(a[i]) +
                                   " native=" + std::to_string(b[i]));
        }
      }
    };
    auto a = allocate(8192), b = allocate(8192), out = allocate(8192),
         matrix = allocate(192);
    auto w0 = allocate(8192), w1 = allocate(8192), w2 = allocate(8192);
    size_t cases = 0;
    for (unsigned op = 2; op < 6; op++)
      for (unsigned trial = 0; trial < 100; trial++) {
        auto left = values(32), right = values(32), initial = values(32);
        for (uint32_t destination : {out, a, b, a + 4}) {
          put(a, left);
          put(b, right);
          put(out, initial);
          std::vector<uint32_t> args = {a, b, destination};
          guest.callSymbol(beach_math::symbols[op], args);
          native.callSymbol(beach_math::symbols[op], args);
          compare(destination, 16, beach_math::symbols[op]);
          cases++;
        }
      }
    for (uint32_t count : {0u, 1u, 2u, 17u, 257u})
      for (unsigned trial = 0; trial < 20; trial++) {
        auto left = values(count * 4), right = values(count * 4),
             initial = values(count * 4);
        float weight = range(random);
        for (uint32_t destination : {out, a, b, a + 4}) {
          put(a, left);
          put(b, right);
          put(out, initial);
          std::vector<uint32_t> args = {destination, a, b, count};
          guest.callSymbol(beach_math::symbols[0], args, {weight});
          native.callSymbol(beach_math::symbols[0], args, {weight});
          compare(destination, count * 4, "blend", true);
          cases++;
        }
        for (uint32_t destination : {out, a}) {
          put(a, left);
          put(out, initial);
          put(matrix, values(48));
          put(w0, values(count * 4));
          put(w1, values(count * 4));
          put(w2, values(count * 4));
          std::vector<uint32_t> args = {destination, a,  matrix, w0,
                                        w1,          w2, count};
          guest.callSymbol(beach_math::symbols[1], args);
          native.callSymbol(beach_math::symbols[1], args);
          compare(destination, count * 4, "skin3", true);
          cases++;
        }
      }
    std::cout << "PASS: " << cases
              << " differential cases against original ARM32 instructions; "
                 "XYZ/stride, matrix variants and alias fallbacks verified.\n";
    for (unsigned i = 0; i < 6; i++)
      std::cout << beach_math::symbols[i]
                << " native calls=" << native.nativeMathCalls[i] << "\n";
    std::cout << "Fallbacks=" << native.nativeMathFallbacks
              << " vertices=" << native.nativeMathVertices << "\n";
  } catch (const std::exception &error) {
    std::cerr << "FAIL: " << error.what() << "\n";
    return 1;
  }
}
