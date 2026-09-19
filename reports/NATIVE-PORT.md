# Native Linux and Android engine: milestone progress

For a concise status table and current checklist, see the [milestone tracker](../docs/MILESTONES.md).

Status: the native asset library and static GLES2 renderer run on Linux x86-64. This is a
source reconstruction, with no execution of the original engine instructions.
Development lives on `native-decomp`, targeting a shared native core for both
Linux and Android. KDE integration and a native Android wallpaper host are not
implemented yet. Runtime tests run on Linux x86-64; the core, inspection CLI and
renderer also compile/link for Android ARM64 with NDK r27b, API 24.

## Milestone 4: vertex-animation checkpoint (in progress)

The next native reader decodes 14 vertex-animation blocks and 228 frames through
byte **445,981**. A native sampler interpolates XYZ at resolved track ticks while
preserving destination W. It is covered by synthetic and original-asset tests.
The preview renderer has not been connected to this sampler; clock drivers,
trigger/looping behavior, skeletons, visibility and later logic remain ahead.
See [animation evidence and limitations](NATIVE-ANIMATION.md).

## Milestone 3: first native static frame

The native parser now reads all 167 models, 184 vertex buffers, 4,347 triangles,
materials, 167 matrices, two cameras, one camera set and the transform order
(143 roots and 24 children). It reaches **byte 372,259**, leaving **387,633 bytes**
of animation and logic sections undecoded.

An optional EGL/GLES2 tool renders an RGBA frame from these records, applying
the first theme, static model choices, noon texture swaps, parent transforms,
camera-relative backgrounds, two texture stages, blending/culling/depth state
and the original texture matrices. The authored-frame preview rendered 134
surfaces on the local NVIDIA GPU with no reported GL errors. It loads only the
original scene and textures, never the engine binary.

This proves the native geometry/render path, **not full visual parity**. The
preview still shows time-dependent day/night effects together, and sign text,
animated props and other effects do not yet match the running app. The existing
compatibility reference was inspected, but its camera/time/simulation state is
different, so it is not a valid pixel-comparison baseline. A matched-state
comparison remains outstanding.

See [native geometry and rendering](NATIVE-GEOMETRY.md) for evidence, test results
and the next reconstruction boundary. Milestone 2 was committed and pushed as
`e03cca1`; milestone 3 is the subsequent static-render prototype checkpoint.

## Milestone 2: scene structure

`readSceneStructure` now parses the original scene sequentially through the
model-count table, stopping at byte **100,065**. It loads:

- 57 preference records across all eleven serialized categories (the file-chooser
  category is empty in this scene), preserving option lists, model indices,
  theme pairs, purchase-related metadata and multi-preference data. No settings
  or purchase rules are evaluated or changed.
- One environment group with eight time-of-day settings.
- Eight texture-swap tables, two embedded fonts (507 glyph records and 57,649
  embedded data bytes), five text textures and 48 modifier records.
- Counts of **167 models, 167 matrices and two cameras**. Their records remain
  undecoded; **659,827 bytes** remain from the model boundary to the end of file.

The reader keeps serialized fields that are not yet semantically reconstructed
as raw values, rather than inventing rendering behavior. File references are
stored as name/hash pairs, never opened as filesystem paths by the parser.

Validation: all five Release and AddressSanitizer/UndefinedBehaviorSanitizer
CTest tests pass with the original assets. The two synthetic suites also pass
without original inputs. Tests cover every truncation of an authored scene
prefix, unknown versions/tags, nested counts, invalid booleans/phases/floats,
out-of-range known references, non-ASCII UTF-16, signed glyph metrics and
variable-length fields that shift subsequent section boundaries. Original-scene
tests pin independently traced offsets, counts and representative values.

The standalone inspection tool and library cross-compile successfully to Android
ARM64 (`arm64-v8a`, API 24, NDK `27.1.12297006`). This is not an Android runtime,
wallpaper-service or performance test. The new core still has no Unicorn, JNI or
original engine binary dependency.

Detailed layouts, supported versions and reference links:
[native scene format](NATIVE-SCENE-FORMAT.md).

## Milestone 1: asset loader (historical results)

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

At byte 445,981, the scene declares **three skeletal records**. Continue
through those records and the subsequent animation/logic tables
to reconstruct the initial visible state and motion. Compare x86 pseudocode where
ARM output is ambiguous. Continue sequential parsing; measured offsets are test
expectations, never fixed offsets in production code.

Build and usage instructions: [native-port/README.md](../native-port/README.md).
