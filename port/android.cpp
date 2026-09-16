#include "../native/jni/com_dualboot_engine_EngineInterface.h"
#include "engine_bytes.hpp"
#include "fixed_pipeline.hpp"
#include "runtime.hpp"
#include <android/asset_manager.h>
#include <android/asset_manager_jni.h>
#include <android/log.h>
#include <chrono>
#include <cstring>
#include <jni.h>
#include <memory>
#include <mutex>
#include <stdexcept>
#include <thread>

namespace {
std::recursive_mutex mutex;
std::unique_ptr<BeachRuntime> runtime;
AAssetManager *assets = nullptr;
BeachRuntime &vm() {
  if (!runtime)
    runtime = std::make_unique<BeachRuntime>(
        engine_bytes, sizeof(engine_bytes), [](const std::string &name) {
          if (!assets)
            throw std::runtime_error("Asset manager not initialized");
          AAsset *file =
              AAssetManager_open(assets, name.c_str(), AASSET_MODE_BUFFER);
          if (!file)
            throw std::runtime_error("Asset not found: " + name);
          auto size = AAsset_getLength64(file);
          if (size < 0 || size > 64 * 1024 * 1024) {
            AAsset_close(file);
            throw std::runtime_error("Invalid asset length");
          }
          std::vector<uint8_t> data(size);
          size_t offset = 0;
          while (offset < data.size()) {
            int n =
                AAsset_read(file, data.data() + offset, data.size() - offset);
            if (n <= 0) {
              AAsset_close(file);
              throw std::runtime_error("Asset read failed: " + name);
            }
            offset += n;
          }
          AAsset_close(file);
          return data;
        });
  return *runtime;
}
void fail(JNIEnv *env, const std::exception &error) {
  __android_log_print(ANDROID_LOG_ERROR, "BeachArm64", "%s", error.what());
  if (!env->ExceptionCheck()) {
    jclass type = env->FindClass("java/lang/IllegalStateException");
    if (type) {
      env->ThrowNew(type, error.what());
      env->DeleteLocalRef(type);
    }
  }
}
template <class F> jint guarded(JNIEnv *env, F function) {
  std::lock_guard<std::recursive_mutex> guard(mutex);
  try {
    return function();
  } catch (const std::exception &error) {
    fail(env, error);
    return 0;
  }
}
struct GuestString {
  uint32_t id = 0;
  GuestString(JNIEnv *env, jstring s) {
    if (!s)
      throw std::runtime_error("Null JNI string");
    const char *utf8 = env->GetStringUTFChars(s, nullptr);
    if (!utf8)
      throw std::runtime_error("Cannot acquire UTF8 string");
    std::string text(utf8);
    env->ReleaseStringUTFChars(s, utf8);
    const jchar *chars = env->GetStringChars(s, nullptr);
    if (!chars)
      throw std::runtime_error("Cannot acquire UTF16 string");
    std::u16string wide(reinterpret_cast<const char16_t *>(chars),
                        env->GetStringLength(s));
    env->ReleaseStringChars(s, chars);
    id = vm().string(text, wide);
  }
  ~GuestString() {
    if (id)
      vm().releaseString(id);
  }
};
uint32_t bits(float f) {
  uint32_t value;
  memcpy(&value, &f, 4);
  return value;
}
void setAssets(JNIEnv *env, jobject object) {
  assets = AAssetManager_fromJava(env, object);
  if (!assets)
    throw std::runtime_error("Invalid Android AssetManager");
}
} // namespace
extern "C" JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *, void *) {
  return JNI_VERSION_1_6;
}
#define JNI_METHOD(name) Java_com_dualboot_engine_EngineInterface_##name
extern "C" JNIEXPORT jint JNICALL JNI_METHOD(Recreate)(JNIEnv *e, jclass,
                                                       jint id) {
  return guarded(e, [&] {
    resetFixedPipeline();
    return vm().invoke("Recreate", {uint32_t(id)});
  });
}
extern "C" JNIEXPORT jint JNICALL JNI_METHOD(Destroy)(JNIEnv *e, jclass,
                                                      jint id) {
  return guarded(e, [&] { return vm().invoke("Destroy", {uint32_t(id)}); });
}
extern "C" JNIEXPORT jboolean JNICALL JNI_METHOD(GetNeedsReload)(JNIEnv *e,
                                                                 jclass,
                                                                 jint id) {
  return guarded(e,
                 [&] { return vm().invoke("GetNeedsReload", {uint32_t(id)}); });
}
extern "C" JNIEXPORT jint JNICALL JNI_METHOD(LoadFile)(JNIEnv *e, jclass,
                                                       jint id, jobject manager,
                                                       jstring filename) {
  return guarded(e, [&] {
    setAssets(e, manager);
    GuestString name(e, filename);
    return vm().invoke("LoadFile", {uint32_t(id), 2, name.id});
  });
}
extern "C" JNIEXPORT jint JNICALL JNI_METHOD(LoadResources)(JNIEnv *e, jclass,
                                                            jint id,
                                                            jobject manager) {
  return guarded(e, [&] {
    setAssets(e, manager);
    return vm().invoke("LoadResources", {uint32_t(id), 2});
  });
}
extern "C" JNIEXPORT jboolean JNICALL JNI_METHOD(SetStateLocation)(
    JNIEnv *e, jclass, jint id, jfloat lat, jfloat lon) {
  return guarded(e, [&] {
    return vm().invoke("SetStateLocation",
                       {uint32_t(id), bits(lat), bits(lon)});
  });
}
extern "C" JNIEXPORT jint JNICALL JNI_METHOD(Update)(
    JNIEnv *e, jclass, jint id, jint width, jint height, jfloat x, jfloat y,
    jlong time, jdouble pan, jfloat fade, jboolean vignette) {
  return guarded(e, [&] {
    uint64_t p;
    memcpy(&p, &pan, 8);
    auto start = std::chrono::steady_clock::now();
    // AAPCS32: pad guest word 7 so the jlong occupies aligned words 8 and 9.
    auto value = vm().invoke(
        "Update",
        {uint32_t(id), uint32_t(width), uint32_t(height), bits(x), bits(y), 0,
         uint32_t(time), uint32_t(uint64_t(time) >> 32), uint32_t(p),
         uint32_t(p >> 32), bits(fade), uint32_t(vignette)});
    if (++vm().frames % 300 == 0)
      __android_log_print(
          ANDROID_LOG_INFO, "BeachArm64",
          "Frame %llu: %.1f ms, guest heap %u, native vertices %llu, native "
          "matrices %llu",
          static_cast<unsigned long long>(vm().frames),
          std::chrono::duration<double, std::milli>(
              std::chrono::steady_clock::now() - start)
              .count(),
          vm().heapBytes(),
          static_cast<unsigned long long>(vm().nativeMathVertices),
          static_cast<unsigned long long>(
              vm().nativeMathCalls[2] + vm().nativeMathCalls[3] +
              vm().nativeMathCalls[4] + vm().nativeMathCalls[5]));
    return value;
  });
}
extern "C" JNIEXPORT jboolean JNICALL JNI_METHOD(Sleep)(JNIEnv *, jclass,
                                                        jlong ms) {
  if (ms > 0)
    std::this_thread::sleep_for(
        std::chrono::milliseconds(std::min<jlong>(ms, 1000)));
  return JNI_TRUE;
}
#define PREFERENCE(name)                                                       \
  extern "C" JNIEXPORT jboolean JNICALL JNI_METHOD(name)(                      \
      JNIEnv * e, jclass, jint id, jstring key, jstring value) {               \
    return guarded(e, [&] {                                                    \
      GuestString k(e, key), v(e, value);                                      \
      return vm().invoke(#name, {uint32_t(id), k.id, v.id});                   \
    });                                                                        \
  }
PREFERENCE(SetPreferenceCameraSet)
PREFERENCE(SetPreferenceEnvironment)
PREFERENCE(SetPreferenceFontMessage)
PREFERENCE(SetPreferenceModelSwap)
PREFERENCE(SetPreferenceModelToggle)
PREFERENCE(SetPreferenceTextureGroup)
PREFERENCE(SetPreferenceTimeOfDay)
PREFERENCE(SetPreferenceTimeOfDayAuto)
PREFERENCE(SetPreferenceUserImage)
extern "C" JNIEXPORT jboolean JNICALL JNI_METHOD(AddBitmapData)(
    JNIEnv *e, jclass, jint id, jstring filename, jobject buffer, jint width,
    jint height, jint format) {
  return guarded(e, [&] {
    GuestString name(e, filename);
    void *data = e->GetDirectBufferAddress(buffer);
    auto size = e->GetDirectBufferCapacity(buffer);
    if (!data || size < 0 || size > 64 * 1024 * 1024)
      throw std::runtime_error("Invalid bitmap buffer");
    auto object = vm().buffer(data, size);
    try {
      auto value = vm().invoke("AddBitmapData",
                               {uint32_t(id), name.id, object, uint32_t(width),
                                uint32_t(height), uint32_t(format)});
      vm().releaseBuffer(object);
      return value;
    } catch (...) {
      vm().releaseBuffer(object);
      throw;
    }
  });
}
