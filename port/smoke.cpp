#include "runtime.hpp"
#include <EGL/egl.h>
#include <GL/gl.h>
#include <chrono>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <memory>
std::vector<uint8_t> read(const std::string &p) {
  std::ifstream f(p, std::ios::binary);
  if (!f)
    return {};
  return {std::istreambuf_iterator<char>(f), {}};
}
int main(int argc, char **argv) {
  std::unique_ptr<BeachRuntime> runtime;
  try {
    std::string root = argc > 1 ? argv[1] : ".";
    auto elf = read(root + "/decoded/lib/armeabi-v7a/libdbgengine.so");
    runtime = std::make_unique<BeachRuntime>(
        elf.data(), elf.size(), [&](const std::string &name) {
          auto data = read(root + "/decoded/assets/" + name);
          if (data.empty())
            std::cerr << "Missing asset: " << name << "\n";
          return data;
        });
    auto &vm = *runtime;
    if (std::getenv("BEACH_REAL_GL")) {
      EGLDisplay display = eglGetDisplay(EGL_DEFAULT_DISPLAY);
      EGLint major, minor;
      if (!eglInitialize(display, &major, &minor))
        throw std::runtime_error("EGL initialize failed");
      if (!eglBindAPI(EGL_OPENGL_API))
        throw std::runtime_error("EGL OpenGL API unavailable");
      EGLint attributes[] = {EGL_SURFACE_TYPE,
                             EGL_PBUFFER_BIT,
                             EGL_RENDERABLE_TYPE,
                             EGL_OPENGL_BIT,
                             EGL_RED_SIZE,
                             8,
                             EGL_GREEN_SIZE,
                             8,
                             EGL_BLUE_SIZE,
                             8,
                             EGL_DEPTH_SIZE,
                             16,
                             EGL_NONE};
      EGLConfig config;
      EGLint count;
      if (!eglChooseConfig(display, attributes, &config, 1, &count) || !count)
        throw std::runtime_error("No EGL config");
      EGLint dimensions[] = {EGL_WIDTH, 540, EGL_HEIGHT, 960, EGL_NONE};
      EGLSurface surface = eglCreatePbufferSurface(display, config, dimensions);
      EGLContext context =
          eglCreateContext(display, config, EGL_NO_CONTEXT, nullptr);
      if (!eglMakeCurrent(display, surface, surface, context))
        throw std::runtime_error("EGL context failed");
      std::cerr << "Real GL: " << glGetString(GL_VERSION) << "\n";
    }
    std::cerr << "ELF loaded and constructors executed\n";
    auto engine = vm.invoke("Recreate", {0});
    if (!engine)
      throw std::runtime_error("Recreate returned zero");
    std::cerr << "Engine created: 0x" << std::hex << engine << std::dec << "\n";
    auto scene = vm.string("beach.stg-scene");
    engine = vm.invoke("LoadFile", {engine, 2, scene});
    vm.releaseString(scene);
    if (!engine)
      throw std::runtime_error("LoadFile returned zero");
    std::cerr << "Scene loaded, heap=" << vm.heapBytes() << "\n";
    engine = vm.invoke("LoadResources", {engine, 2});
    if (!engine)
      throw std::runtime_error("LoadResources returned zero");
    std::cerr << "Resources loaded, heap=" << vm.heapBytes() << "\n";
    for (int i = 0; i < 10; i++) {
      auto start = std::chrono::steady_clock::now();
      uint64_t pan;
      double p = 0.5;
      memcpy(&pan, &p, 8);
      engine = vm.invoke("Update", {engine, 540, 960, 0, 0, 0, 0, 0,
                                    uint32_t(pan), uint32_t(pan >> 32), 0, 0});
      if (!engine)
        throw std::runtime_error("Update returned zero");
      std::cerr << "Frame " << i << ": "
                << std::chrono::duration<double, std::milli>(
                       std::chrono::steady_clock::now() - start)
                       .count()
                << " ms; heap=" << vm.heapBytes() << "\n";
    }
    if (std::getenv("BEACH_REAL_GL")) {
      std::vector<uint8_t> pixels(540 * 960 * 3);
      glReadPixels(0, 0, 540, 960, GL_RGB, GL_UNSIGNED_BYTE, pixels.data());
      std::ofstream image(root + "/reports/bridge-render.ppm",
                          std::ios::binary);
      image << "P6\n540 960\n255\n";
      for (int y = 959; y >= 0; y--)
        image.write(reinterpret_cast<const char *>(pixels.data() + y * 540 * 3),
                    540 * 3);
      std::cerr << "GL error after readback: " << glGetError() << "\n";
    }
    std::cerr << "Native math calls:";
    for (auto count : vm.nativeMathCalls)
      std::cerr << " " << count;
    std::cerr << "; vertices=" << vm.nativeMathVertices
              << "; fallbacks=" << vm.nativeMathFallbacks << "\n";
    if (vm.invoke("Destroy", {engine}) != 0)
      throw std::runtime_error("Destroy did not clear engine");
    std::cout << "PASS: creation, original scene, original textures, 10 "
                 "frames, destruction; see GL mode above.\n";
    std::ofstream stats(root + "/reports/bridge-imports.tsv");
    for (auto &[name, count] : vm.importsUsed)
      stats << name << "\t" << count << "\n";
  } catch (const std::exception &e) {
    std::cerr << "FAIL: " << e.what() << "\n";
    if (runtime)
      for (auto &[name, count] : runtime->importsUsed)
        std::cerr << name << " " << count << "\n";
    return 1;
  }
}
