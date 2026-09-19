# Native Beach reconstruction

**Progress and current tasks: [milestone tracker](../docs/MILESTONES.md).**

This is the beginning of a shared native engine for Linux and Android ports of
My Beach HD 2.2, developed on the `native-decomp` branch. A standalone GLES2
tool renders one static frame for a chosen time of day and date.
**The preview does not yet reproduce the original app's complete scene state or
animation: nothing in it moves.** It compiles ordinary C++17 for the host CPU, with no instruction
translation, Unicorn, Android runtime, JNI, or original `libdbgengine.so`.

The library reads the original assets directly:

- All 100 PVR v3 textures: 80 RGB565, 11 RGBA4444, 9 RGB888.
- Every stored mip level, decoded to linear RGBA8 with straight alpha.
- The version-26 scene's metadata and the byte offset where its body starts.
- All 57 serialized preference records, environment settings for eight phases,
  eight texture-swap tables, two embedded fonts, five text textures and 48
  texture-modifier records. UTF-16 messages and signed glyph metrics are preserved.
- All 167 model records, 184 vertex buffers, 4,347 triangles and their materials,
  167 matrices, two cameras, a camera group, and the parent-first transform order.
  The geometry boundary is byte 372,259. Known references are checked.
- 14 vertex-animation blocks (228 frames) with tested native XYZ interpolation.
  The sampler takes resolved track ticks; clocks and renderer integration are pending.
- Three skinned skeletons: 21 bones, 63 bone tracks, 1,023 curves, 513 weighted
  vertices, bind and inverse-bind matrices, update order and bone parents.
- The scene's visibility tables: 103 time-of-day masks, 41 date masks, 13
  inherited-visibility pairs and 9 intersectable models. `computeShownModels`
  evaluates them for an explicit time of day, date, environment and camera set,
  with no access to a system clock or location.
- All eight animation-track tables and the logic-scene array that follows them:
  212 records, 604 tracks and 2,867 curves covering model position and rotation,
  camera targets, 68 animated texture layers and 50 visibility tracks.
  `evaluateTrack` returns a track's cubic Bezier value at a resolved tick.
  **This reads the whole scene file: 759,892 of 759,892 bytes.**
- Optional base-level PAM image exports, preserving transparency and stored row
  order. These are texture sheets, not images of the assembled beach.

Animation playback, vertex skinning, font rasterization and full preference
evaluation are not implemented: the clock that drives the decoded tracks has
still to be reconstructed. The static renderer applies the
first serialized theme, model-toggle defaults, model choices, the texture swaps
authored for the selected phase, and the evaluated visibility masks. Unknown
formats are rejected explicitly. This reader supports the subset present in this
APK, not arbitrary PVR or STG files.

## Build and inspect

From the repository root, with CMake 3.22+ and a C++17 compiler, build and test
without any original APK assets:

```sh
cmake -S native-port -B build/native-port -DCMAKE_BUILD_TYPE=Release
cmake --build build/native-port
ctest --test-dir build/native-port --output-on-failure
```

For integration tests and image exports, supply the original assets locally.
The existing [APK build workflow](../docs/BUILD.md) extracts them to
`build/work/decoded/assets`; an equivalent extraction from your own APK also
works. Neither the Android SDK nor the compatibility runtime is required to
build this native asset tool itself.

```sh
cmake -S native-port -B build/native-port -DBEACH_ASSET_DIR="$PWD/build/work/decoded/assets"
cmake --build build/native-port
ctest --test-dir build/native-port --output-on-failure
build/native-port/beach-assets-inspect build/work/decoded/assets
build/native-port/beach-assets-inspect build/work/decoded/assets --export-pam build/native-port/textures
```

The CLI accepts any asset-directory path with `beach.stg-scene` and `tex/*.pvr`.
Export writes `<texture-name>.pam` in the specified directory, replacing files
with the same names. PAM is an uncompressed image format with alpha support.
To view all exports as a contact sheet, optionally use ImageMagick:

```sh
magick montage build/native-port/textures/*.pam -background '#30343b' \
  -alpha Remove -alpha Off -thumbnail 96x96 -gravity center -extent 104x104 \
  -tile 10x -geometry +2+2 build/native-port/texture-atlas.png
```

No graphics libraries are required for this milestone. Build-time tests against
the original files are registered when `BEACH_ASSET_DIR/beach.stg-scene` exists;
the synthetic parser tests also work without the APK assets. With original
assets, CTest runs eleven tests; without them, it runs five synthetic suites.
Enabling the renderer adds a synthetic GPU test which needs a working EGL driver.

## Render a native static frame

On Linux, install the EGL and OpenGL ES 2 development headers/libraries provided
by your distribution. The parser-only build above does not require these.

```sh
cmake -S native-port -B build/native-port -DBEACH_BUILD_RENDERER=ON
cmake --build build/native-port
ctest --test-dir build/native-port --output-on-failure
build/native-port/beach-render build/work/decoded/assets build/native-port/static-beach.pam
```

The default output is 960×540 using serialized camera 1, at noon on June 15 — a
date no holiday mask selects. To choose a camera and size, append
`CAMERA WIDTH HEIGHT`; to also choose the scene state, append `PHASE MONTH DAY`,
where phase 0-7 is midnight, night, dawn, morning, noon, afternoon, dusk and
evening. For example, `1 960 540 0 12 25` renders Christmas at midnight. On a headless Mesa
setup, `EGL_PLATFORM=surfaceless` can select an offscreen display. The tool writes
one RGBA PAM image and exits; it does not install a wallpaper or start animation.
You can convert the image locally with ImageMagick:

```sh
magick build/native-port/static-beach.pam build/native-port/static-beach.png
```

This is an authored static-pose preview. Camera-relative backgrounds, parent
transforms and the serialized visibility masks are applied, so day and night
models are no longer drawn together. Skeletal and vertex animation, procedural
effects, camera motion and dynamic sign text are not: signs render untextured and
nothing moves. No model names are used to hide those discrepancies. See
[geometry/render evidence](../reports/NATIVE-GEOMETRY.md) and
[skeleton/visibility evidence](../reports/NATIVE-SKELETON.md).

## Android ARM64 build check

The same library, inspection CLI and optional GLES renderer cross-compile with NDK r27b for Android
ARM64/API 24. This checks compiler/linker portability only: no APK, wallpaper
service, Android asset adapter or on-device execution is part of this milestone.

```sh
cmake -S native-port -B build/native-port-android-arm64 \
  -DCMAKE_TOOLCHAIN_FILE=/path/to/ndk/27.1.12297006/build/cmake/android.toolchain.cmake \
  -DANDROID_ABI=arm64-v8a -DANDROID_PLATFORM=android-24 \
  -DCMAKE_BUILD_TYPE=Release -DBUILD_TESTING=OFF -DBEACH_BUILD_RENDERER=ON
cmake --build build/native-port-android-arm64
```

## Reconstruction decisions

Keep this build separate from the compatibility runtime in `../port/`. The old
runtime can serve as a visual reference, but new native code must read assets
and implement behavior itself. Building or running it must not require engine
machine code or assets dumped from an emulator. Read original assets from a local
APK extraction; never publish textures, scene binaries or the engine library.

Start with a portable C++ library shared by Linux and Android. Keep scene loading,
simulation and rendering separate from platform asset access, input, lifecycle
and presentation. Add a standalone Linux renderer before connecting KDE Plasma
and an Android NDK/live-wallpaper host. This makes it possible to validate the
same core without starting the desktop shell or an Android wallpaper service.
Runtime tests currently run on Linux x86-64; Android ARM64 is compile/link checked.
The cost is a slower path to an animated wallpaper, because the scene engine
must actually be reconstructed.

Read serialized values at their original fixed widths, never by casting bytes
to recovered C++ structs. Original pointer sizes, vtables, STL layouts and Ghidra
temporary variables are not portable engine definitions. Retain evidence links
and mark partial implementations explicitly.

## Milestones

1. **Assets — complete:** original PVR textures, mip levels and scene metadata.
2. **Scene structure — complete:** decode the preference blocks after byte 78,
   environment and texture resources, including embedded fonts, through the three
   model/matrix/camera counts. This is a partial scene reader, not a full engine.
3. **Static scene — prototype working:** decode geometry, materials, cameras and
   transform hierarchy; render a native static frame. Matched-state visual parity
   remains unverified because animation/logic establish additional initial state.
4. **Animation — in progress:** vertex-animation decoding and sampling are implemented;
   clocks, visibility and renderer integration are pending. Add water, texture motion, sky/time-of-day and object movement
   in independently checked increments; then interactions, effects and settings.
5. **Platform hosts:** connect the shared native renderer to Plasma and to an
   Android NDK/live-wallpaper host. Handle resize, visibility/pause, input,
   frame limiting and graphics-context recreation; add multiple-monitor handling
   for Plasma. The Android target must also run without instruction translation.
   Validate Android ARM64 builds and measure CPU/GPU cost on both platforms.

Do not estimate completion from the count of decompiled functions. The difficult
work is recovering their data layout, relationships and observable behavior.

See [format evidence and validation](../reports/NATIVE-PORT.md). The original
content retains the ownership/status described in the root README.
