# ARM64 compatibility build

A signed ARM64-only development APK is available at `dist/my-beach-hd-arm64.apk`. The package's only installed native library is an ELF64/AArch64 `libdbgengine.so`. Android's ARM32 runtime is not required.

This is a compatibility runtime, not a reconstruction of every original C++ function into native ARM64 source. The original ARMv7 engine is embedded as data and executed by Unicorn 2.1.4 inside the 64-bit library. A C++ bridge implements its Android/JNI/libc dependencies. A new OpenGL ES 2 shader pipeline reproduces the fixed-function texture combiners, transforms, vertex colors, alpha tests, and draw calls used by the beach scene. The original scene, animation logic, preferences, and assets run through that bridge.

The phone target is the user's Nothing Phone 2 on Android 16. The user has confirmed its OS does not support ARM32; this build assumes that requirement.

## What changed

- Added `port/runtime.cpp`: ARM ELF loader, relocations, isolated 32-bit guest addresses, JNI facade, asset access, allocation, timing, and libc bridging. Guest pointers remain 32-bit addresses within emulated memory, never truncated native pointers.
- Added `port/android.cpp`: all 18 JNI entry points implemented in a native 64-bit library, with Java exceptions and Android logging for failures.
- Added `port/graphics.cpp` and `fixed_pipeline.cpp`: GLES 2 rendering with the original engine's texture/material behavior. The old GLES 1 route rendered correctly on desktop compatibility OpenGL but produced broken rendering on the Android emulator; the new shader route resolves that test failure.
- Preserved the original 102 assets byte for byte and reused the original smali/settings screens.
- Requested an RGBA8888 framebuffer to avoid severe RGB565 banding in the night sky. Day and night rendering were visually checked after this change.
- Requested GLES 2 configurations and an explicit version-2 EGL context. Fixed an old exact-value comparison of `EGL_RENDERABLE_TYPE`, which is a bitmask and can advertise multiple API versions.
- Raised minimum and target SDK to 24 for the compatibility build. The original targeted 19. This avoids the normal-install low-target block documented for Android 15+. Android 16 can still show its older-app warning because the app retains a legacy target level. [Android installation restriction](https://developer.android.com/about/versions/15/behavior-changes-all#minimum-target-api-level)
- Normalized the one legacy invalid style parent for aapt2, made the wallpaper/launcher/settings export flags explicit, and added the dream service's binding permission.
- Linked native ELF segments with 16 KB alignment, aligned the APK, and signed it using a local development key. Actual execution on a 16 KB-page device has not been tested. [Android page-size guidance](https://developer.android.com/guide/practices/page-sizes)

## Verification and limits

The runtime passed a desktop execution harness: engine creation, original scene and texture loading, frame updates, and destruction. A desktop real-OpenGL rendering test produced a correctly textured beach and no GL error at readback; `reports/bridge-render.png` records that test.

The Android 16 emulator was tested first with the x86_64 compilation of the runtime, then with the **ARM64-only APK**. Package Manager reported `primaryCpuAbi=arm64-v8a`, and Android's loader confirmed the ARM64 `libdbgengine.so` was loaded. This x86_64-hosted emulator uses its own ARM64 translation facility to execute that library; it is not a physical ARM64-phone test. The original ARM32 instructions are handled by the app's bundled runtime in both cases.

The Android tests demonstrated textured animated preview, camera panning, home-screen wallpaper installation, settings navigation, and time-of-day configuration. Screenshots and logs are in `reports/android-*.png` and `reports/android-*.log`/`.txt`. A shader-debug startup warning for legacy `GL_MULTISAMPLE` was resolved by treating it as implicit framebuffer behavior in GLES 2.

The rebuilt library's guest allocation remained stable over repeated frames in the exercised paths. This is not a comprehensive leak, thermal, battery, or performance certification. Emulator timings are not predictions for the Nothing Phone 2.

The original app still has legacy UI and service integrations. Optional purchase/licensing behavior was not bypassed or validated. User-supplied image customization and every holiday/effect combination have not been exhaustively tested. Unsupported native/graphics operations fail explicitly instead of silently substituting fake engine behavior. Full parity with the original app has not been established.

## Install on the phone

Copy `dist/my-beach-hd-arm64.apk` to the phone and open it to install. Allow installation from the file manager if Android requests it. If Android displays an older-app warning on first launch, acknowledge it. Open My Beach HD and select it in Android's live-wallpaper picker, or use the phone's wallpaper settings.

The build is locally signed and debuggable for diagnosis. It is not signed by DualBoot, so it cannot update a differently signed installation in place. No physical phone was modified during development.

## Rebuild

Required local tools: Python 3, Git, CMake, Ninja, Java/JDK with `keytool`, Apktool, Android SDK build-tools 36.0.0, and NDK 27.1.12297006. The workspace already contains the decoded APK and JNI inventory.

```sh
python3 scripts/build_port.py --sdk /path/to/Android/Sdk
```

The script fetches Unicorn 2.1.4 if absent, checks the pinned revision, compiles the ARM64 runtime, and produces the signed APK. A source bundle can include the pinned Unicorn sources for offline builds. The original engine's hash is checked before embedding it.

For a separate x86_64 emulator comparison build:

```sh
python3 scripts/build_port.py --sdk /path/to/Android/Sdk --with-x86-64
```

This produces `dist/my-beach-hd-64bit.apk` containing ARM64 and x86_64 libraries. The phone artifact is the ARM64-only file above.

The development key is stored in `build/keys/beach-local.jks`, excluded from source archives and Git. It uses the standard non-secret development password `android`. Preserve that local key if you want future builds to update this installation without a signature conflict.

Unicorn revision: `8028ec436f2d9376525352dd38ed9ed6b9f6be10` (2.1.4). The new runtime source is provided under the GPL v2 terms in `port/LICENSE`; the original app and its assets retain their original ownership. See the bundled Unicorn source notices for its component licenses. [Unicorn source and Android build support](https://github.com/unicorn-engine/unicorn/tree/2.1.4)
