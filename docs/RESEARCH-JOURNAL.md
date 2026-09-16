# Research journal and observations

This records the work in order and distinguishes completed checks from unresolved conclusions. It summarizes the development session; it is not a verbatim transcript and contains no private device identifiers.

## 1. Inspect the APK

The input was identified as My Beach HD 2.2, version code 15, package `com.dualboot.apps.beach`, minimum SDK 9 and target SDK 19. It contained ARM, ARMv7 and x86 ELF32 engine builds, not an ARM64 build.

The engine was not just a small Java helper: native symbols identified file I/O, serialization, scene resources, geometry, materials, cameras, animation, rendering, preferences and logic. Exported C++ names survived, making analysis substantially more useful than a fully stripped unnamed binary.

## 2. Decode Java/resources and analyze native code

Apktool recovered manifest/resources/smali. JADX produced 345 Java files. Three methods could not be reconstructed into structured Java; linear fallback output was saved separately, and the full smali remained available.

Ghidra exported 1,478 ARMv7, 1,501 ARM and 1,527 x86 function entries. Those counts include imports, thunks and compiler/runtime support. Every analyzed entry produced an output file, but there were inferred-type and decompilation warnings. Zero export failures did not make the output buildable or prove its correctness.

The ARMv7 Ghidra import uses a `0x10000` image bias relative to the ELF symbol addresses. Address comparisons must account for that difference.

## 3. Verify the original extraction and baseline rebuild

All 102 assets and three native libraries were verified byte for byte against the original APK. A baseline rebuild from smali worked after one legacy style parent was normalized in a temporary copy. The baseline still contained only the original 32-bit engines.

This established that the decode/repack path was usable. It did not solve ARM64 compatibility.

## 4. Establish the native boundary

The Java API had 18 native declarations; all existed in each library. An extra native `Create` export was unused by the supplied Java declarations. A JNI header was generated from the Java declarations and syntax-checked with the ARM64 NDK.

Native `Create`/`Destroy` confirmed that the Java integer handle originally stored a raw pointer. The scene reader confirmed fixed-width serialized lengths. These findings ruled out a naive native recompile without pointer/file-format work.

The owner confirmed their target OS lacked ARM32 support. Further work therefore treated ARM64-only execution as a requirement, rather than relying on an installation flag or a system compatibility runtime.

## 5. Choose and implement an in-app compatibility runtime

A full reconstruction of the original engine would be a much larger effort. The selected approach was a 64-bit native wrapper that executes the original ARM32 engine through Unicorn and implements its limited host dependency surface.

The first host harness successfully created an engine, loaded the original scene/textures, updated frames and destroyed it. Initially, stopping/restarting emulation around every imported function made the mock-GL frames roughly 97 ms each on the development host. Returning from most hooks directly reduced warmed mock-GL frames to roughly 1.5–2 ms in the exercised view. That was an isolated host measurement, not a phone FPS prediction.

## 6. Test actual rendering and revise the graphics path

A desktop real-OpenGL test rendered the beach and reported no GL error at readback. Android's legacy ES 1 route did not reproduce that success: one software emulator backend crashed, and the host graphics route produced invalid-operation errors and broken visuals.

The bridge was changed to GLES 2 shaders implementing the original texture combiners, transforms, vertex colors and alpha behavior. The old EGL bitmask/context-version bug also needed correction. After these changes, Android preview rendered a textured beach.

The first night scene showed strong banding with a RGB565 framebuffer. Requesting RGBA8888 improved the night gradients in the subsequent visual test.

## 7. Validate the ARM64-only package

The package was built and signed locally, with only an ARM64 installed library and 16 KB ELF alignment. An Android 16 x86_64 emulator selected `arm64-v8a` and loaded that library through the emulator's ARM64 native bridge. It did not provide a system ARM32 runtime; original ARM32 execution happened inside the app's bundled translator.

Preview, home-screen installation, day/night selection, panning, and resume after sleep were exercised. The original Java settings screens remained available. These checks established useful functionality but did not establish original-app performance, every optional feature, physical 16 KB compatibility, or battery behavior.

## 8. Receive the physical-device performance report

The owner confirmed that the build worked on their Nothing Phone 2, then reported severe panning stutter absent from the original app. The phone was connected for ADB testing, and its requested screen timeout was changed to 30 minutes. App preferences and the installed APK were backed up locally; those private/binary files are not public.

The preview measurement found approximately 36.47 FPS with a 66.70 ms p95 interval and 116.78 ms maximum. A simultaneous profiling run was worse and must be interpreted with profiler overhead in mind.

Simpleperf identified substantial CPU time in the compatibility library and dynamic linker. Repeated graphics symbol lookups, translated-block handling, GPU work, frame pacing and multiple wallpaper instances remained hypotheses requiring isolated tests. No optimization had been implemented or validated at this point.

## 9. Prepare public, source-only publication

The owner requested a public repository named **DualReBoot**, containing project text, reports, observations and a guide/script that starts from a legitimately supplied APK.

The publication preserves text decompilations, smali/XML references, symbols, pseudocode, research and sanitized logs. It excludes binaries, encoded engine headers, tool installations, signing material and private phone backups. A new build entry point validates an external APK, restores the complete extraction locally, fetches pinned tools/dependencies, compiles and signs the result.

The initial repository explicitly records that the panning regression remains open. Publishing a build workflow is not presented as a performance fix.

## 10. Isolate performance costs and begin native reconstruction

The measurement harness was corrected to wait for advancing timestamps on the newest wallpaper layer and restart the preview camera sweep after resource loading. A stale layer or a sweep that expired during loading can otherwise produce misleading results. Touch replay reliably exposed slower presentation; `input swipe` is stress input and is not calibrated to physical finger event frequency.

Caching all 51 graphics import targets improved a controlled Noon touch test from about 43 to 56 FPS. Letting the existing guest `bx lr` stubs return naturally improved it to about 61 FPS. Native math reconstruction passed 2,200 differential cases on the physical ARM64 phone, but did not show an isolated FPS gain. A uniform-cache experiment was slower and was reverted.

Thread CPU-time probes showed around 14 ms of CPU work in roughly 14–15 ms of wall time during panning, supporting a CPU bottleneck. A new profile confirmed repeated graphics symbol resolution had gone. Restricting executable guest memory removed the self-modifying-code invalidation hotspot and produced about 68 FPS in the touch test. An alternate virtual-TLB mode increased CPU time to roughly 20 ms and was rejected. Temporary CPU probes were removed from the final build. Detailed results and caveats are maintained in PERFORMANCE.md.
