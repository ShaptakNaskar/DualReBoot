# ARM64 port findings — My Beach HD 2.2

**Historical decompilation assessment. A subsequent ARM64 compatibility build is now available; see [ARM64-BUILD.md](ARM64-BUILD.md). The notes below describe the original APK and a possible full source-reconstruction approach.** Changing APK metadata, moving the existing `.so` into an `arm64-v8a` directory, or recompiling the Java layer does not translate the engine's machine code. Android requires native binaries matching the process ABI. [Android ABI documentation](https://developer.android.com/ndk/guides/abis)

| Property | Observed value |
| --- | --- |
| Package | `com.dualboot.apps.beach` |
| Version | 2.2, version code 15 |
| Minimum / target SDK | 9 / 19 |
| Native library | `libdbgengine.so` |
| Bundled architectures | `armeabi` (460,020 bytes), `armeabi-v7a` (447,760 bytes), `x86` (571,140 bytes) |
| Native format | All ELF32; no ARM64 or x86-64 build |
| Native engine | Custom C++ code using the `STG` namespace |
| Assets | 100 PVR textures, `beach-settings.txt`, `beach.stg-scene` |
| Scene | 759,892 bytes; first serialized word is version 26 |
| Scene metadata | `export-date=2014-07-02_20-20-29`, `source-file=Beach_311.max` |
| Device requested | Nothing Phone 2, Snapdragon 8+ Gen 1, Android 16 |
| Device verification | No ADB device/emulator connected; actual ABI list and page size unknown |

**Recovered source map**

The wallpaper service starts at [BeachService.java](../decompiled/sources/com/dualboot/apps/beach/BeachService.java), through [beach/b.java](../decompiled/sources/com/dualboot/apps/beach/b.java), [e/l.java](../decompiled/sources/com/dualboot/e/l.java), and the wallpaper engine [e/n.java](../decompiled/sources/com/dualboot/e/n.java). The asset filenames are supplied by [beach/a.java](../decompiled/sources/com/dualboot/apps/beach/a.java).

[c/g.java](../decompiled/sources/com/dualboot/c/g.java) owns the EGL/render thread and the engine handle in field `d`. Its loop loads/reloads the scene, updates location and animation state, calls the native frame update, and swaps the EGL buffers.

[EngineInterface.java](../decompiled/sources/com/dualboot/engine/EngineInterface.java) loads `dbgengine` and declares 18 JNI methods. Its initialization helper calls `Recreate`, `SetStateLocation`, `LoadFile`, the preference setters, optional `AddBitmapData`, and `LoadResources`. Every declared JNI function exists in all three libraries. The libraries additionally export `Create`, which this Java interface does not declare.

Use [the generated JNI header](../native/jni/com_dualboot_engine_EngineInterface.h) as the ABI contract. It preserves the original `jint` handles. In particular, `Update` has Java descriptor `(IIIFFJDFZ)I`; its input `long` and `double` occupy wider slots. Ghidra's inferred ARM argument list contains artifacts from register/stack allocation and must not replace the declared JNI signature.

| Native responsibility | ARMv7 reference file |
| --- | --- |
| Engine allocation | [EngineInterfaceImpl::Create](../native/armeabi-v7a/functions/0006cf88_EngineInterfaceImpl__Create.c) |
| Engine destruction | [EngineInterfaceImpl::Destroy](../native/armeabi-v7a/functions/0006d008_EngineInterfaceImpl__Destroy.c) |
| Scene loading | [EngineInterfaceImpl::LoadFile](../native/armeabi-v7a/functions/0006dd94_EngineInterfaceImpl__LoadFile.c) |
| Resource loading | [EngineInterfaceImpl::LoadResources](../native/armeabi-v7a/functions/0006d2c0_EngineInterfaceImpl__LoadResources.c) |
| Frame simulation and rendering | [EngineInterfaceImpl::Update](../native/armeabi-v7a/functions/0006d3d8_EngineInterfaceImpl__Update.c) |
| Preference routing | [EngineInterfaceImpl::SetPreference](../native/armeabi-v7a/functions/0006e1d0_EngineInterfaceImpl__SetPreference.c) |
| Serialized scene parser | [USerialize::Load(GEScene)](../native/armeabi-v7a/functions/0005bb8c_STG__USerialize__Load.c) |
| Serialized strings | [USerialize::Load(char,int)](../native/armeabi-v7a/functions/00056928_STG__USerialize__Load_char_int_.c) |

The Ghidra ARMv7 import uses image base `0x10000`: for example, exported ELF address `0x5cf88` appears as `0x6cf88` in the saved project. Do not confuse these analysis addresses with file offsets or runtime addresses. Full symbols, ELF headers/dependencies, and strings are saved as `reports/symbols-*.txt`, `elf-*.txt`, and `strings-*.txt`.

**Specific ARM64 work required**

1. Reconstruct the C++ engine's types and implementations from the reference output. Core areas include `FFileBase`/Android asset access, `USerialize`, `GEScene`, geometry, materials, textures, cameras, simulation, animation, and the `LLogicScene` logic system. The native exports are not an original source tree, and Ghidra's `undefined` types, recovered object offsets, globals such as `DAT_*`, and compiler helper calls require manual interpretation. Compare the x86 output when ARM decompilation is ambiguous.
2. Replace the pointer-as-`int` interface. `Create` returns an allocated `EngineInterface*`; `Destroy` casts its integer argument back to that pointer. A direct ARM64 port would truncate pointers. Two viable designs are an opaque `jint` handle registry that stores full-width pointers natively (preserves the original Java/smali ABI), or an end-to-end migration to Java `long`/JNI `jlong` for handles. The latter must update field `c/g.d`, helper return/argument types, every native declaration and invocation, and smali wide-register handling. Do not widen unrelated dimensions or flags.
3. Preserve the on-disk format independently of C++ pointer width. The scene reader explicitly reads many four-byte values, and strings use a four-byte length followed by bytes. Use fixed-width file-format integers; do not turn those reads into eight-byte `unsigned long` reads on ARM64. Reconstruct memory structures separately from serialized layouts.
4. Replace old C++ runtime assumptions with a consistent modern NDK runtime. The library includes STL/compiler support and depends on `libstdc++.so`; those original machine-code routines are not portable source. Port hardware-specific `MSIMD::BlendVector4f_HW` and `Skin3Vector4f_HW`, or initially reconstruct the existing `_SW` implementations before adding ARM64 optimization.
5. Recreate graphics behavior. The inspected binary imports `libGLESv1_CM.so` and fixed-function OpenGL ES calls, despite an ES 2.0 requirement in the manifest. Preserve/test the actual EGL context and rendering path before changing graphics APIs. Other imported libraries are `libdl`, `liblog`, `libandroid`, `libm`, and `libc`.
6. Preserve texture interpretation. All 100 inspected PVR v3 files use uncompressed formats: 80 RGB565, 11 RGBA4444, and 9 RGB888. Keep channel order, mip levels, row layout, and texture transforms correct. Their full headers are in `inventory.json`.
7. Build and package a real `arm64-v8a/libdbgengine.so`, then address modern Android behavior. The existing target SDK 19 is below Android 15's documented normal-install minimum of 24. Raising the target also changes permission behavior; the current location code catches exceptions but has no modern permission request flow, and user-image loading needs review. [Android installation restriction](https://developer.android.com/about/versions/15/behavior-changes-all#minimum-target-api-level), [target SDK behavior](https://developer.android.com/guide/topics/manifest/uses-sdk-element)
8. Verify the device page size and use compatible native linking and APK alignment. NDK r27 or newer supports the documented 16 KB build configuration; do not assume a device's page size solely from its Android version. [Android page-size guidance](https://developer.android.com/guide/practices/page-sizes)
9. Sign the resulting APK with a local key and test the wallpaper preview, home-screen service, settings, time-of-day changes, image customization, interaction, visibility pause/resume, surface recreation, and process restart on the actual phone. A rebuilt APK cannot retain the original company's signing identity without its signing key.

**Java decompilation limits**

JADX emitted 345 Java files with three methods that it could not reconstruct into structured Java: `android.support.v4.app.l.d()`, `android.support.v4.view.ViewPager.d(int)`, and `com.dualboot.util.w.a(Bundle,Object,Field,String)`. Supplemental linear/goto output for those classes is in `decompiled/fallback/`. It is reference output, not compilable Java. Full smali for all methods is available in `decoded/smali/`; the successful baseline build uses that smali. Other Java methods carry inference/control-flow warnings, also retained in the output.

Ghidra emitted pseudocode for all 1,478 / 1,501 / 1,527 analyzed function entries in ARMv7 / ARM / x86. Counts include import stubs and runtime support, not just custom gameplay functions. Zero failed exports does not establish semantic correctness; warnings and incomplete external-library type information remain in the logs. No recovered native pseudocode was presented as buildable source.

**Verification completed**

- Original APK SHA-256 recorded; original file retained.
- 102 assets and 3 native libraries verified byte for byte against the supplied archive.
- 18 Java native declarations matched to library exports in every ABI; 19 JNI function entries exported by Ghidra for each ABI.
- Every indexed native pseudocode file exists; export summary saved in `native-export-validation.json`.
- Generated JNI declarations passed an NDK ARM64 C++ syntax check. This validates declarations only, not any implementation or linking.
- Apktool rebuilt the decoded smali/resources successfully. Its output preserves all 105 asset/native entries; package/version and SDK metadata were checked with `aapt2`.
- The baseline build script temporarily changes `DualBoot.Style.Button`'s parent from the legacy invalid `@android:attr/buttonStyleSmall` to `@android:style/Widget.Button.Small` for modern aapt2. This may affect button styling and has not been visually tested. Original decoded resources remain intact.
- Python helper scripts passed syntax checks. `check_device.py` correctly reports that no phone is currently available.
- No ARM64 engine library, signed ARM64 APK, on-device execution, or visual/behavioral parity result exists yet.

**Target requirement**

The user subsequently confirmed that their Android OS has no ARM32 support. The delivered compatibility build uses an ARM64 native library and bundled instruction translation. System ARM32 support is not a prerequisite.
