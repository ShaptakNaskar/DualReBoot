# Milestone 3: native geometry and first static render

The scene reader and GLES2 renderer are authored C++17. Neither builds nor runs
the original engine. Static analysis of its recovered serializers and state
tables supplies format evidence; those analysis tools are not runtime dependencies.

## Decoded layout

| Section | Start | End (exclusive) |
| --- | ---: | ---: |
| 167 models, vertex/index data and materials | 100065 | 360060 |
| 167 matrices | 360060 | 370748 |
| Two cameras | 370748 | 370878 |
| One camera group | 370878 | 370919 |
| Root count and 167 transform-order pairs | 370919 | 372259 |

Models use version 16. Each starts with a surface count, vertex count and vertex
buffer count. Vertex buffer v2 declares component triples (usage/type/width),
usage, vertex count and serialized stride, followed by interleaved bytes.
Observed types are float32 and unsigned byte; usages are position (0), colour
(2), UV0 (3), UV1 (4). There are 184 buffers: several models split positions from
other attributes. Component order determines offsets; byte colours introduce no
implicit C++ struct padding. Serialized stride must match the declarations.

Index buffer v1 stores a **triangle count**, followed by three u16 indices per
triangle. Treating its count as an index count causes the following material
to be read from inside the index payload. Total: 4,347 triangles.

Material v6 contains blend/cull/depth enums, a colour and up to two texture
layers. Each layer has sampler/stage/anisotropy enums, constant colour, file
reference, two u32 fields and a column-major texture matrix. Model bounds,
camera-relative flags, depth range, colour/opacity, name and trailing flags follow
the vertex/surface data. Their order is not the recovered object's memory order.

Matrices are 16 float32 values, without a version word. Camera v2 contains type,
eye/target/up, FOV, aspect, near/far planes, aspect-adjustment value and flag.
Camera groups contain a name, counted camera/model references and another u32
field. The hierarchy has 143 roots followed by 24 child pairs in parent-first
order; root parents are `0xffffffff`. The reader rejects duplicates, cycles,
forward-parent references and indices outside the decoded collections.

References:
[model](../native/armeabi-v7a/functions/0005a9d8_STG__USerialize__Load.c),
[vertex buffer](../native/armeabi-v7a/functions/000527a8_STG__USerialize__Load.c),
[component packing](../native/armeabi-v7a/functions/00046048_STG__GEVertexBuffer__AddComponent.c),
[index buffer](../native/armeabi-v7a/functions/00050d78_STG__USerialize__Load.c),
[triangle expansion](../native/armeabi-v7a/functions/00037498_STG__GEIndexBuffer__Allocate.c),
[material](../native/armeabi-v7a/functions/0005a290_STG__USerialize__Load.c),
[matrix](../native/armeabi-v7a/functions/00050724_STG__USerialize__Load.c),
[camera](../native/armeabi-v7a/functions/0005085c_STG__USerialize__Load.c),
[camera group](../native/armeabi-v7a/functions/00057db8_STG__USerialize__Load.c),
[scene hierarchy](../native/armeabi-v7a/functions/0005bb8c_STG__USerialize__Load.c).

## Rendering reconstruction

The optional `beach-render` tool creates an EGL offscreen GLES2 context and writes
one PAM image. A small vertex/fragment shader implements the observed fixed
function colour and two-texture operations. Textures retain original UV/row
orientation; only the framebuffer readback is flipped to top-row-first PAM.
Image dimensions and camera index are explicit CLI inputs, with bounded sizes.

Blend states from the recovered table:

| Enum | Source | Destination | Other state |
| ---: | --- | --- | --- |
| 0 | ONE | ZERO | Blending disabled |
| 1 | SRC_ALPHA | ONE_MINUS_SRC_ALPHA | Blending enabled |
| 2 | ONE | ONE | Additive |
| 3 | ONE | ZERO | Blending disabled, alpha >= 0.5 |
| 4 | SRC_ALPHA | ONE | Additive with source alpha |
| 5 | DST_COLOR | ZERO | Multiply |

Cull 0 uses back-face culling with clockwise winding; cull 1 disables it. Depth 0
uses LESS and writes depth; depth 1 uses LESS without writes; depth 2 disables
testing/writes; depth 3 uses EQUAL without writes. Texture stages implement
modulate, RGB replace, interpolation with constant colour, RGB add and 2×/4×
RGB modulation. Alpha and RGB operations remain separate. Samplers use the
recovered nearest/linear/mipmap and repeat/clamp modes.
The original draw routine also rejects models whose colour alpha times opacity
is at most 1/256, independently of material blending; the native path preserves
that threshold.

The enum tables were read as static data from the locally supplied library:
Ghidra-address blend `0x79800`, cull `0x798c0`, depth `0x798d8`, sampler `0x799c4`,
texture-stage `0x79a5c`. Only the interpreted GL constants are in the new source;
no machine code or engine payload is embedded. The tables are referenced by
[GL_SetBlendState](../native/armeabi-v7a/functions/0003b450_STG__GERendererAPI__GL_SetBlendState.c),
[GL_SetCullState](../native/armeabi-v7a/functions/0003b4d0_STG__GERendererAPI__GL_SetCullState.c),
[GL_SetDepthState](../native/armeabi-v7a/functions/0003b520_STG__GERendererAPI__GL_SetDepthState.c)
and [GL_SetTexture](../native/armeabi-v7a/functions/0003b7ec_STG__GERendererAPI__GL_SetTexture.c).

The first serialized theme supplies static model and texture choices. Time-based
texture swaps select noon. Parent world matrices are composed before view and
projection, with camera-relative model offsets applied in transform order.
The existing camera interpolation/animated motion is not evaluated; CLI cameras
are direct serialized camera records. References:
[look-at](../native/armeabi-v7a/functions/0004f18c_STG__MMatrix__MakeLookAtTransform.c),
[projection](../native/armeabi-v7a/functions/0004f420_STG__MMatrix__MakePerspectiveTransform.c),
[model camera transforms](../native/armeabi-v7a/functions/00038d28_STG__GEModel__CalcRenderTransform.c),
[hierarchy update](../native/armeabi-v7a/functions/00042fb8_STG__GEScene__UpdateRendering.c).

## Verification and limits

- Eight Release CTest tests pass with the renderer enabled, including the
  synthetic red-triangle GPU fixture (known centre/background pixels and the
  model-opacity cutoff) and original
  geometry totals/offsets. The GPU fixture contains only newly authored data.
- Seven parser/CLI tests pass under AddressSanitizer and UndefinedBehaviorSanitizer
  with the GPU target disabled. The three synthetic suites pass without original
  assets. The library, inspection CLI and renderer cross-compile for Android
  ARM64/API 24 using NDK r27b; no Android runtime result is claimed.
- Parser tests exercise every truncation in a synthetic geometry body, malformed
  versions/layouts/strides/indices, non-finite vertices, invalid camera projection,
  invalid hierarchy, matrix order and inherited/camera-relative transforms.
- A 960×540 original-asset frame was rendered on the local NVIDIA GPU and visually
  inspected. Sand, water, vegetation and beach props are visible. The framebuffer
  output stays in ignored `build/`; no original images are published.
- Android ARM64 is cross-compiled only, not executed on a device.

The preview is **not a faithful frozen frame of the original app yet**. Its
authored geometry has not been updated by the animation/logic tail, so daylight
can coexist with moon/firework effects; fonts are not composited into signs;
skeletal and vertex animation remain at their authored data. No name-based
visibility heuristics hide these gaps. The available compatibility screenshot
has different camera/time state; inspection confirms recognizable assets, not
pixel parity. A matched-state comparison is still required.

The parser accepts the observed v16/v2/v1/v6 layouts and perspective cameras.
Billboard/clip-position camera transforms and adaptive FOV fail explicitly in the
renderer. Font rasterization, fog, animated material state, camera panning, logic
and platform wallpaper lifecycles remain future work. Raw interleaved GPU uploads
currently target the tested little-endian Linux x86-64 and Android ARM64 hosts.

The next section at byte 372,259 begins with 14 vertex-animation records. Continue
the sequential reconstruction there to reach the remaining visibility, animation
and logic state; never treat the current preview as final behavioral parity.
