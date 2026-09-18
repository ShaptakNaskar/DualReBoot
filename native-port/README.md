# Native Beach reconstruction

This is the beginning of a shared native engine for Linux and Android ports of
My Beach HD 2.2, developed on the `native-decomp` branch. The first
milestone is an asset library and inspection tool; **it does not render or animate
the beach yet**. It compiles ordinary C++17 for the host CPU, with no instruction
translation, Unicorn, Android runtime, JNI, or original `libdbgengine.so`.

The library reads the original assets directly:

- All 100 PVR v3 textures: 80 RGB565, 11 RGBA4444, 9 RGB888.
- Every stored mip level, decoded to linear RGBA8 with straight alpha.
- The version-26 scene's metadata and the byte offset where its body starts.
- Optional base-level PAM image exports, preserving transparency and stored row
  order. These are texture sheets, not images of the assembled beach.

The scene body, meshes, cameras, materials, preferences, animation and logic are
not implemented. Unknown formats are rejected explicitly. This reader supports
the subset present in this APK, not arbitrary PVR or STG files.

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
the synthetic parser tests also work without the APK assets.

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
Only Linux x86-64 is tested at this milestone; Android compilation is still ahead.
The cost is a slower path to an animated wallpaper, because the scene engine
must actually be reconstructed.

Read serialized values at their original fixed widths, never by casting bytes
to recovered C++ structs. Original pointer sizes, vtables, STL layouts and Ghidra
temporary variables are not portable engine definitions. Retain evidence links
and mark partial implementations explicitly.

## Next milestones

1. **Scene structure:** decode the preference blocks after byte 78, then the
   environment and texture-modifier sections. Establish tested section boundaries
   before reading model counts, geometry, cameras and material references.
2. **Static scene:** reconstruct transforms, meshes, camera projection and material
   state; draw a single original beach frame in a standalone Linux viewer. Compare
   it to reference frames for a fixed camera, settings and time of day.
3. **Animation:** add water, texture motion, sky/time-of-day and object movement
   in independently checked increments; then interactions, effects and settings.
4. **Platform hosts:** connect the shared native renderer to Plasma and to an
   Android NDK/live-wallpaper host. Handle resize, visibility/pause, input,
   frame limiting and graphics-context recreation; add multiple-monitor handling
   for Plasma. The Android target must also run without instruction translation.
   Validate Android ARM64 builds and measure CPU/GPU cost on both platforms.

Do not estimate completion from the count of decompiled functions. The difficult
work is recovering their data layout, relationships and observable behavior.

See [format evidence and validation](../reports/NATIVE-PORT.md). The original
content retains the ownership/status described in the root README.
