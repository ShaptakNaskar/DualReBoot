#include "runtime.hpp"
#include <cstdlib>
#include <cstring>
#include <dlfcn.h>
#include <stdexcept>
#include <string_view>
#include <type_traits>
#include <unordered_map>
#ifndef BEACH_HOST_TEST
#include "fixed_pipeline.hpp"
#include <android/log.h>
#endif

namespace {
bool mockGraphics() {
#ifdef BEACH_HOST_TEST
  return std::getenv("BEACH_REAL_GL") == nullptr;
#else
  return false;
#endif
}
// Android's exported GLES stubs dispatch through the calling thread's EGL
// context. Their addresses (and our fixed-pipeline entry points) do not change
// per material, frame or context, so resolve once and share an immutable table.
void *resolveGraphicsFunction(std::string_view name) {
  static const auto functions = [] {
    void *library = dlopen(
#ifdef BEACH_HOST_TEST
        "libGL.so.1",
#else
        "libGLESv2.so",
#endif
        RTLD_NOW | RTLD_LOCAL);
    if (!library)
      throw std::runtime_error("Cannot open graphics library");
    const char *names[] = {"glNormalPointer",
                           "glBlendFunc",
                           "glAlphaFunc",
                           "glEnable",
                           "glDisable",
                           "glCullFace",
                           "glFrontFace",
                           "glDepthFunc",
                           "glDepthMask",
                           "glColor4f",
                           "glColorMask",
                           "glLogicOp",
                           "glClientActiveTexture",
                           "glDisableClientState",
                           "glEnableClientState",
                           "glDrawElements",
                           "glClearColor",
                           "glClear",
                           "glFinish",
                           "glFlush",
                           "glMatrixMode",
                           "glLoadMatrixf",
                           "glLoadIdentity",
                           "glGenTextures",
                           "glDeleteTextures",
                           "glBindTexture",
                           "glActiveTexture",
                           "glTexParameteri",
                           "glTexEnvi",
                           "glTexEnvf",
                           "glTexParameterf",
                           "glTexEnvfv",
                           "glFogf",
                           "glFogfv",
                           "glCopyTexImage2D",
                           "glGenBuffers",
                           "glDeleteBuffers",
                           "glBindBuffer",
                           "glBufferData",
                           "glBufferSubData",
                           "glGetError",
                           "glDepthRangef",
                           "glViewport",
                           "glReadPixels",
                           "glTexImage2D",
                           "glCompressedTexImage2D",
                           "glGetString",
                           "glGetFloatv",
                           "glVertexPointer",
                           "glColorPointer",
                           "glTexCoordPointer"};
    std::unordered_map<std::string_view, void *> result;
    result.reserve(sizeof(names) / sizeof(names[0]));
    for (const char *entry : names) {
      void *address = nullptr;
#ifndef BEACH_HOST_TEST
      address = fixedPipelineProc(entry);
#endif
      if (!address)
        address = dlsym(library, entry);
      // Optional/unused legacy functions can be absent from GLES 2. Keep the
      // same explicit error if one is actually invoked; do not fail at startup.
      result.emplace(entry, address);
    }
    return result;
  }();
  auto found = functions.find(name);
  if (found == functions.end() || !found->second)
    throw std::runtime_error("Missing graphics function " + std::string(name));
  return found->second;
}

template <class R, class... A> R gl(const char *name, A... args) {
  if (mockGraphics()) {
    if constexpr (!std::is_void_v<R>)
      return R{};
    else
      return;
  }
  auto fn = reinterpret_cast<R (*)(A...)>(resolveGraphicsFunction(name));
  if constexpr (std::is_void_v<R>)
    fn(args...);
  else
    return fn(args...);
}
} // namespace
void BeachRuntime::graphics(const std::string &n) {
  auto a = [&](unsigned i) { return arg(i); };
  auto f = [&](unsigned i) { return farg(i); };
  auto p = [&](uint32_t address) -> void * {
    return address ? memory(address) : nullptr;
  };
  // Bindings belong to this emulated engine/context, never to a process-wide
  // cache.
  if (n == "glBindBuffer") {
    if (a(0) == 0x8892)
      threadValues[0xffff0001] = a(1);
    if (a(0) == 0x8893)
      threadValues[0xffff0002] = a(1);
    gl<void>(n.c_str(), a(0), a(1));
    return;
  }
  if (n == "glGenTextures" || n == "glGenBuffers") {
    auto count = a(0), address = a(1);
    if (count > 65536)
      throw std::runtime_error("Invalid GL object count");
    if (mockGraphics()) {
      for (uint32_t i = 0; i < count; i++)
        write32(address + 4 * i, ++threadValues[0xffff0003]);
    } else
      gl<void>(n.c_str(), int(count),
               static_cast<uint32_t *>(memory(address, count * 4)));
    return;
  }
  if (n == "glDeleteTextures" || n == "glDeleteBuffers") {
    gl<void>(n.c_str(), int(a(0)),
             static_cast<const uint32_t *>(memory(a(1), uint64_t(a(0)) * 4)));
    return;
  }
  if (n == "glGetString") {
    auto key = a(0);
    uint32_t address = threadValues[0xfffe0000 + key];
    if (!address) {
      const char *text =
          mockGraphics()
              ? (key == 0x1f03 ? "" : "OpenGL ES-CM 1.1 Beach host mock")
              : reinterpret_cast<const char *>(
                    gl<const unsigned char *>(n.c_str(), key));
      if (!text) {
        result(0);
        return;
      }
      address = allocate(strlen(text) + 1);
      memcpy(memory(address, strlen(text) + 1), text, strlen(text) + 1);
      threadValues[0xfffe0000 + key] = address;
    }
    result(address);
    return;
  }
  if (n == "glGetFloatv") {
    if (mockGraphics()) {
      float v = 4096;
      memcpy(memory(a(1), 4), &v, 4);
    } else
      gl<void>(n.c_str(), a(0), static_cast<float *>(memory(a(1), 64)));
    return;
  }
  if (n == "glGetError") {
    result(gl<unsigned>(n.c_str()));
    return;
  }
  if (n == "glFinish" || n == "glFlush" || n == "glLoadIdentity") {
    gl<void>(n.c_str());
    return;
  }
  if (n == "glEnable" || n == "glDisable" || n == "glCullFace" ||
      n == "glFrontFace" || n == "glDepthFunc" || n == "glLogicOp" ||
      n == "glClientActiveTexture" || n == "glDisableClientState" ||
      n == "glEnableClientState" || n == "glClear" || n == "glMatrixMode" ||
      n == "glActiveTexture") {
    gl<void>(n.c_str(), a(0));
    return;
  }
  if (n == "glDepthMask") {
    gl<void>(n.c_str(), uint8_t(a(0)));
    return;
  }
  if (n == "glBlendFunc" || n == "glBindTexture") {
    gl<void>(n.c_str(), a(0), a(1));
    return;
  }
  if (n == "glAlphaFunc" || n == "glFogf") {
    gl<void>(n.c_str(), a(0), f(1));
    return;
  }
  if (n == "glDepthRangef") {
    gl<void>(n.c_str(), f(0), f(1));
    return;
  }
  if (n == "glClearColor" || n == "glColor4f") {
    gl<void>(n.c_str(), f(0), f(1), f(2), f(3));
    return;
  }
  if (n == "glColorMask") {
    gl<void>(n.c_str(), uint8_t(a(0)), uint8_t(a(1)), uint8_t(a(2)),
             uint8_t(a(3)));
    return;
  }
  if (n == "glLoadMatrixf") {
    gl<void>(n.c_str(), static_cast<const float *>(memory(a(0), 64)));
    return;
  }
  if (n == "glFogfv") {
    gl<void>(n.c_str(), a(0), static_cast<const float *>(memory(a(1), 16)));
    return;
  }
  if (n == "glTexParameteri" || n == "glTexEnvi") {
    gl<void>(n.c_str(), a(0), a(1), int(a(2)));
    return;
  }
  if (n == "glTexParameterf" || n == "glTexEnvf") {
    gl<void>(n.c_str(), a(0), a(1), f(2));
    return;
  }
  if (n == "glTexEnvfv") {
    gl<void>(n.c_str(), a(0), a(1),
             static_cast<const float *>(memory(a(2), 16)));
    return;
  }
  if (n == "glViewport") {
    gl<void>(n.c_str(), int(a(0)), int(a(1)), int(a(2)), int(a(3)));
    return;
  }
  if (n == "glVertexPointer" || n == "glColorPointer" ||
      n == "glTexCoordPointer") {
    void *ptr = threadValues[0xffff0001]
                    ? reinterpret_cast<void *>(uintptr_t(a(3)))
                    : p(a(3));
    gl<void>(n.c_str(), int(a(0)), a(1), int(a(2)),
             static_cast<const void *>(ptr));
    return;
  }
  if (n == "glNormalPointer") {
    void *ptr = threadValues[0xffff0001]
                    ? reinterpret_cast<void *>(uintptr_t(a(2)))
                    : p(a(2));
    gl<void>(n.c_str(), a(0), int(a(1)), static_cast<const void *>(ptr));
    return;
  }
  if (n == "glDrawElements") {
    void *ptr = threadValues[0xffff0002]
                    ? reinterpret_cast<void *>(uintptr_t(a(3)))
                    : p(a(3));
    gl<void>(n.c_str(), a(0), int(a(1)), a(2), static_cast<const void *>(ptr));
    return;
  }
  if (n == "glBufferData") {
    gl<void>(n.c_str(), a(0), ptrdiff_t(a(1)),
             static_cast<const void *>(a(2) ? memory(a(2), a(1)) : nullptr),
             a(3));
    return;
  }
  if (n == "glBufferSubData") {
    gl<void>(n.c_str(), a(0), ptrdiff_t(a(1)), ptrdiff_t(a(2)),
             static_cast<const void *>(memory(a(3), a(2))));
    return;
  }
  if (n == "glTexImage2D") {
    gl<void>(n.c_str(), a(0), int(a(1)), int(a(2)), int(a(3)), int(a(4)),
             int(a(5)), a(6), a(7), static_cast<const void *>(p(a(8))));
    return;
  }
  if (n == "glCompressedTexImage2D") {
    gl<void>(n.c_str(), a(0), int(a(1)), a(2), int(a(3)), int(a(4)), int(a(5)),
             int(a(6)), static_cast<const void *>(memory(a(7), a(6))));
    return;
  }
  if (n == "glCopyTexImage2D") {
    gl<void>(n.c_str(), a(0), int(a(1)), a(2), int(a(3)), int(a(4)), int(a(5)),
             int(a(6)), int(a(7)));
    return;
  }
  if (n == "glReadPixels") {
    gl<void>(n.c_str(), int(a(0)), int(a(1)), int(a(2)), int(a(3)), a(4), a(5),
             p(a(6)));
    return;
  }
  throw std::runtime_error("Unhandled graphics import " + n);
}

void BeachRuntime::traceGraphics(const std::string &name) {
  unsigned error = gl<unsigned>("glGetError");
  if (!error)
    return;
#ifndef BEACH_HOST_TEST
  __android_log_print(ANDROID_LOG_WARN, "BeachArm64",
                      "GL error 0x%x after %s(%x,%x,%x,%x)", error,
                      name.c_str(), arg(0), arg(1), arg(2), arg(3));
#else
  fprintf(stderr, "GL error 0x%x after %s\n", error, name.c_str());
#endif
}
