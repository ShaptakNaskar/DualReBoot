# Native Linux and Android engine: milestone 1 asset loader

Status: the native asset library builds and runs on Linux x86-64. This is a
source reconstruction, with no execution of the original engine instructions.
Development lives on `native-decomp`, targeting a shared native core for both
Linux and Android. No scene rendering, KDE wallpaper integration or native
Android host is implemented yet; only Linux x86-64 has been tested.

## Evidence used

- [`USerialize::Load(GEScene)`](../native/armeabi-v7a/functions/0005bb8c_STG__USerialize__Load.c):
  the scene begins with a four-byte version. Versions 24+ then contain a four-byte
  metadata count followed by string key/value pairs, before `UPreference_Scene`.
  The new reader intentionally accepts only the observed version 26.
- [`USerialize::Load<char,int>`](../native/armeabi-v7a/functions/00056928_STG__USerialize__Load_char_int_.c):
  strings have a four-byte length followed by exactly that many bytes. The
  in-memory terminator is not an extra serialized byte.
- [`GETexture::Load`](../native/armeabi-v7a/functions/00047fc8_STG__GETexture__Load.c):
  PVR v3 magic, format identifiers, dimensions, mip count and payload offset.
- [`GETexture::GetPixel`](../native/armeabi-v7a/functions/00046d98_STG__GETexture__GetPixel.c):
  RGB565 stores red in the high five bits; RGBA4444 stores red in the high nibble
  and alpha in the low nibble; RGB888 uses consecutive R, G, B bytes.
- [Imagination PVR header specification](https://docs.imgtec.com/specifications/pvr-file-format-specification/html/topics/pvr-header-format.html)
  and [texture data ordering](https://docs.imgtec.com/specifications/pvr-file-format-specification/html/topics/pvr-texture.html)
  define the container layout. The native reader preserves mip order and rejects
  unsupported flags, colour spaces, channel types, metadata and non-2D layouts.

The recovered CPU `GetPixel` helper expands packed values with shifts, leaving
the low bits zero. The native decoder instead rounds normalized channels to the
full 0–255 range, matching the intended GPU sampling of packed normalized
textures. This is not a byte-for-byte replacement of that CPU helper, and full
rendered parity still requires testing. Stored row order is preserved; the future
renderer must recover UV conventions instead of assuming a global image flip.

## Results

Release build and all three CTest suites pass:

- Synthetic fixtures validate RGB565 primary colours, RGBA4444 transparency,
  RGB888 byte order, odd-sized mip chains, every truncation of sample inputs,
  malformed header fields, excessive dimensions/counts and scene string lengths.
- Original-asset integration tests decode all 100 textures and reject truncated
  copies. Total: **748 mip levels, 16,867,312 RGBA bytes**. Totals were independently
  cross-checked from the original PVR headers using Python `struct`.
- Scene metadata: `export-date=2014-07-02_20-20-29`, `source-file=Beach_311.max`.
  Header ends at **byte 78**; **759,814 bytes** of scene body remain undecoded.
  The next four bytes contain the observed preference block version **10**.
- CLI exported 100 base-level PAM images. A contact sheet was visually inspected
  for plausible colours, image contents and transparency; this does not establish
  parity of the assembled scene, texture filtering or material blending.
- CLI export tests verify all 100 output filenames and exact PAM headers/pixel
  bytes for the original `white` and `redlight` fixtures, whose packed values
  were independently inspected. Temporary test exports are cleaned up.
- The executable links only the system C/C++ runtime and math libraries. Its build
  has no dependency on `port/`, Unicorn, JNI, Android libraries or engine binaries.

All three suites also pass in a Debug build with AddressSanitizer and
UndefinedBehaviorSanitizer (`-fsanitize=address,undefined -fno-omit-frame-pointer`).

The public decoder bounds reads, validates the complete mip payload before
allocating pixels, and limits decoded allocation to 128 MiB per texture. File
reads are limited to 64 MiB; texture dimensions to 8192 per axis. These limits
cover the supplied assets and can be revisited deliberately if the scope grows.

## Next research boundary

Implement `UPreference_Scene` version 10 from
[`000591b4_STG__USerialize__Load.c`](../native/armeabi-v7a/functions/000591b4_STG__USerialize__Load.c)
and its child serializers. Compare x86 pseudocode where ARM output is ambiguous.
Do not search for plausible floats or hardcode a mesh offset in the scene blob:
the preceding variable-length sections need to be decoded first.

Build and usage instructions: [native-port/README.md](../native-port/README.md).
