# Milestone 4 checkpoint: skeletons and deterministic visibility

Status: milestone 4 is **not complete**. This checkpoint decodes the skeleton
records and the scene's visibility tables, and evaluates the initial shown-model
state from them. Clocks, skinning, animation playback and the scene logic
section remain ahead; the renderer still draws one authored pose.

## Decoded layout

| Section | Start | End (exclusive) |
| --- | ---: | ---: |
| Skeleton count and three skinned meshes | 445981 | 534692 |
| Nine intersectable models | 534692 | 534732 |
| Thirteen inherited-visibility pairs | 534732 | 534840 |
| Nine inherited-intersection pairs | 534840 | 534916 |
| 103 time-of-day masks | 534916 | 535744 |
| Week-day masks (empty) | 535744 | 535748 |
| 41 date masks | 535748 | 537884 |
| Environment masks (empty) | 537884 | 537888 |

Each skeleton record is a model index followed by `GESkeleton::Mesh` v1: an
animation count, vertex-group count and vertex count, then those counts again
immediately before their elements. `GESkeleton::Animation` v1 stores a bone
count, a **root**-bone count, an animated-bone count, a root matrix, the bone
animations, one inverse-bind and one local matrix per bone, an update order and
a parent index per bone. `GESkeleton::BoneAnim` v1 holds a bone index and
two channel counts; each present channel is exactly three version-5 animation
tracks. `GESkeleton::VertexGroup` v1 stores up to three bone indices, a first
vertex and a vertex count. The mesh then stores a weight count (three) and, per
vertex, a position and that many weights.

The three skinned models are `0001r_Seagull`, `0001r_Seagull001` and
`0001r_Seagull002`: 7 bones and 171 vertices each, one root bone, parents
`[none,0,0,0,0,3,4]`, 7 vertex groups tiling all 171 vertices, and 63 bone
tracks holding 1,023 curves in total.

Two independent checks fix what the two matrix arrays mean. `MMatrix::Transform4x3`
multiplies its arguments as `out = argument x subject` in this project's
column-major convention, so `GESkeleton::Animation::Update` builds
`world = parent x local` and `skin = world x inverseBind`, the same parent-first
order the model hierarchy already uses. Consistent with that, every serialized
inverse-bind matrix in this scene is a pure translation that negates the joint
offsets summed along its parent chain: bone 5's is `-(3.6989, 0.5752, 0.7078)`,
which is exactly the sum of bone 3's and bone 5's local translations. The root
bone's is the identity, because its translation is animated rather than part of
the bind pose. The local matrices hold the pose the exporter saved, which
`Update` overwrites each frame: bone 0's three position tracks default to
`(0, 0.2223958, 2.4e-07)`, exactly the translation of its local matrix, which is
what identifies the first channel as position and the second as rotation.

Bone tracks are the same `GEAnimationTrack` v5 records the vertex blenders use,
so the existing reader is shared. A channel that never moves stores zero curves
and an empty time range; `GEAnimationTrack::Evaluate` returns early for it.
Track times here are 64-bit and the tracks carry driver 3 with the override flag
set, or driver 12 with it clear. The original loader substitutes driver 12
whenever that flag is clear; this reader stores the serialized driver as written,
which is the same value for every track in this scene, and does not execute it.

The visibility tables are parallel arrays of model index and mask. Time-of-day
masks use one bit per phase, week-day masks one byte, environment masks one
u32, and date masks **twelve u32 words, one per month, with bit (day - 1)**.

## Recovered meaning, checked against the data

`GETimeOfDay::GetTimeOfDay` matches eight phase names, in the order the
application's settings list them: midnight, night, dawn, morning, noon,
afternoon, dusk, evening. The serialized masks agree independently: `01c_Sun`
is authored for bit 4 alone, `01d_Moon` for bit 0 alone, `01a_Sunset_001` and
`03b_Sun Reflection001` for bit 6, and `04_Wave` for every phase except bit 0.

The date masks agree the same way. `0001e_Umbrella_Day_Xmas` is authored for
December bits 23 and 24 only, and the ordinary `0001e_Umbrella_Day` is authored
for every day of the year **except** those two. `0001r_Plane002_Holiday`,
`01_fireworks001` and `01_fireworks002` are authored for July bit 3, and the
regular `01d_firework_blue` for every day except July bit 3 and January bit 0.
Independence Day, New Year's Day and Christmas Eve/Day fall exactly where a
0-based month array indexed by bit (day - 1) puts them.

## Evaluated initial state

`computeShownModels` implements `GEScene::ComputeShownModelsList` over an
explicit `SceneState`. Nothing in the core reads a system clock, timezone or
location; the caller supplies the phase, environment, date and camera set.

The starting point is each model's hidden flag, which `GEScene::ApplyPreferences`
writes from the model-toggle and model-swap preferences. All 48 models whose
serialized flag is set are referenced by such a preference, and every model that
is not referenced has the flag clear, so the preference pass already determined
this scene's base state. The active camera set then hides its listed models (its
list is empty here), the four masks hide models whose bit is clear, and finally
each inherited-visibility child is ANDed with its parent, in file order.

Of the 134 models the default theme enables, the models shown per phase are
74, 73, 61, 62, 65, 62, 62 and 73 for phases 0-7 on a date with no holiday mask.
`0001x_Sky_Day` and `0001x_Sky_Night` are never shown together, which the
milestone 3 preview could not achieve. Rendering December 25 at midnight instead
of June 15 adds nine models, including the Christmas umbrella.

## Evidence

- [Scene loader section order](../native/armeabi-v7a/functions/0005bb8c_STG__USerialize__Load.c)
- [Skeleton mesh loader](../native/armeabi-v7a/functions/000519ac_STG__USerialize__Load.c)
- [Skeleton animation loader](../native/armeabi-v7a/functions/00051584_STG__USerialize__Load.c)
- [Bone animation loader](../native/armeabi-v7a/functions/0005149c_STG__USerialize__Load.c)
- [Vertex group loader](../native/armeabi-v7a/functions/00050e28_STG__USerialize__Load.c)
- [Skeleton animation update](../native/armeabi-v7a/functions/000446d4_STG__GESkeleton__Animation__Update.c)
- [Skinned mesh update](../native/armeabi-v7a/functions/00044f30_STG__GESkeleton__Mesh__Update.c)
- [Matrix composition order](../native/armeabi-v7a/functions/0004e74c_STG__MMatrix__Transform4x3.c)
- [Shown-model computation](../native/armeabi-v7a/functions/00042858_STG__GEScene__ComputeShownModelsList.c)
- [Preference application](../native/armeabi-v7a/functions/0004174c_STG__GEScene__ApplyPreferences.c)
- [Time-of-day phase names](../native/armeabi-v7a/functions/0004509c_STG__GETimeOfDay__GetTimeOfDay.c)

Section boundaries, counts and masks were independently traced with a temporary
Python reader of the original file before the C++ reader was written; the two
agree on every offset quoted here. Neither executes the original library.

## What this does not do

`GESkeleton::Animation::Update` composes each bone's local matrix from its
evaluated tracks (`SetEulerXZY` then `SetPosition`), walks the update order to
world matrices through the root matrix or the parent, and right-multiplies each
by the inverse bind matrix to produce skinning matrices for
`MSIMD::Skin3Vector4f`. None of that is implemented yet: the reader stores the
matrices and tracks, and the renderer still submits the authored vertex positions.

`GEAnimationTrack::Evaluate` resolves a track time as the driver's clock plus
the track's offset, wrapped modulo the larger of the track's end and the driver's
period, except for drivers 2 and 4, which latch on a trigger instead. No clock is
wired up, so that rule is not implemented. (This section originally said the
driver clocks came from an undecoded logic section; the [animation-table
checkpoint](NATIVE-TRACKS.md) decoded that section and found it empty. The
drivers are built at runtime by `GEScene::Internal_UpdateAnimationTime`.)
Intersectables and inherited intersection are parsed and validated but unused:
touch interaction is a later task.

## Tests

All twelve Release tests pass, and the eleven non-GPU tests also pass under
AddressSanitizer and UndefinedBehaviorSanitizer. Five suites pass without the
original assets. The core, inspection CLI and renderer still cross-compile for
Android ARM64 with NDK r27b, API 24; none of this code has run on a device.

- A synthetic skeleton and visibility fixture covers two bones, both channel
  kinds, two vertex groups, and one mask of each kind. Every truncation of it is
  rejected, along with field mutations covering unknown versions, mismatched
  repeated counts, an out-of-range or duplicated bone, a channel that is not three tracks,
  groups that do not tile the mesh, an unknown skin bone, a weight count other
  than three, a root bone with a parent, a duplicated update order, self-
  inheritance, unknown mask bits and out-of-range model references.
- Scene states outside the serialized domain, and a visibility base of the wrong
  length, are rejected rather than shifting or indexing out of range.
- Original-asset tests pin the three section boundaries, the seagull bone
  hierarchy and mesh dimensions, the inverse-bind/joint-offset relation above,
  the 63/1,023 track and curve totals, all seven table sizes, the recovered phase order, the holiday date masks, the per-phase
  shown-model counts and the December 25 umbrella swap.

See the [milestone tracker](../docs/MILESTONES.md) for remaining work.
