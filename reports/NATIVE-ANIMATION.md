# Milestone 4 checkpoint: vertex-animation reader and sampler

Status: first checkpoint implemented; milestone 4 is **not complete**. This
checkpoint reads vertex-animation data and tests interpolation. The static
renderer still uses the authored pose; no animation clocks or logic are connected.

## Recovered section

At byte **372,259**, the scene contains a u32 count of 14 vertex-blender records.
Each record has a model index, blender version 3, frame count and vertex count,
an animation track, then `frameCount * vertexCount` float4 positions. There are
228 frames in total, each containing 16 vertices. Thirteen blocks reference
firework models; the last references model 160 (`ZZZZ_LensFlare1`). Water motion
is not part of this particular section.

The records end at byte **445,981**, where the next u32 is a skeleton count of 3.
That next section is not decoded yet; 313,911 bytes remain in the scene.

Track version 5 stores a default float, curve count, u64 start/end ticks, an
override flag, driver enum and u64 offset. Each version-2 curve has four u64
times and four float values. After the curves, v5 stores explicit u64 start/end
interval pairs. The observed tracks have exactly one contiguous interval per
adjacent vertex-frame pair, with intervals matching curve endpoints. Other
interval remappings and unknown versions are rejected rather than guessed.

Time values here are explicitly 64-bit. The older serializer's 32-bit time values
were scaled by 1000, but that legacy branch does not apply to the v5/v2 data.
The API exposes raw ticks; it does not assume those values are wall-clock time.

## Native sampling

`sampleVertexAnimation` accepts a parsed animation, an **already-resolved track
tick**, and a destination model. It selects the start-inclusive/end-exclusive
interval, computes the linear fraction and blends XYZ between adjacent frames.
This vertex-blender path uses the interval index/fraction rather than evaluating
the curve's Bezier value points. Those values are retained for later analysis.

The destination W component remains unchanged, matching `BlendVector4f_SW`.
Only the observed tightly packed float4 position buffer is accepted. Out-of-range
times leave the model unchanged; invalid/non-finite sampled poses fail before
publishing a partially updated destination buffer.

Driver override, raw driver and time offset are preserved but not executed.
Clocks, looping, trigger/restart behavior, global/local offsets, skeletal updates,
visibility and renderer integration remain open tasks. Consequently this is not
yet an animated wallpaper or a faithful initial-state reconstruction.

## Evidence

- [Vertex blender loader](../native/armeabi-v7a/functions/00052390_STG__USerialize__Load.c)
- [Track loader](../native/armeabi-v7a/functions/000512b0_STG__USerialize__Load.c)
- [Curve loader](../native/armeabi-v7a/functions/00050ff8_STG__USerialize__Load.c)
- [Time-width conversion](../native/armeabi-v7a/functions/0005058c_STG__USerialize__LoadLegacyTimeValue.c)
- [Track evaluation](../native/armeabi-v7a/functions/0003524c_STG__GEAnimationTrack__Evaluate.c)
- [Visible-model animation update](../native/armeabi-v7a/functions/00042d3c_STG__GEScene__Internal_UpdateVertexAnims_Visible.c)
- [Vertex-blender update](../native/armeabi-v7a/functions/00045f48_STG__GEVertexBlender__Update.c)
- [XYZ blending with preserved W](../native/armeabi-v7a/functions/0004fad0_STG__MSIMD__BlendVector4f_SW.c)

The section boundaries and counts were independently traced with a temporary
Python reader of the original file. Neither that analysis nor the native runtime
executes the original library. Fixtures in source are newly authored; original
animation arrays remain local binary inputs.

## Tests

All ten Release tests pass with the GPU fixture enabled. Nine parser/CLI tests
pass under AddressSanitizer/UndefinedBehaviorSanitizer, and four synthetic suites
pass without original assets. The updated core and tools cross-compile for
Android ARM64; the new animation code has not been executed on an Android device.

- Synthetic tracks use ticks above 2^32 to detect truncation.
- Start/end boundaries, midpoint interpolation, preservation of a deliberately
  different destination W, and transactional failure are checked.
- Every truncation of the synthetic animation section, excessive counts,
  unsupported versions, invalid model references, interval mismatches and NaNs
  are rejected.
- All 14 original blocks are decoded and sampled. Tests pin 228 frames, the
  445,981-byte boundary, delayed starts and driver fields.

See the [milestone tracker](../docs/MILESTONES.md) for remaining work.
