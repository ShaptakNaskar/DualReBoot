# Milestone 4 checkpoint: animation tables and the complete scene file

Status: milestone 4 is **not complete**. This checkpoint decodes the scene's
eight animation-track tables and its logic-scene array, which finishes the file:
the native reader now consumes all **759,892** bytes with nothing left over. It
also evaluates a track to a value. No clock drives those values yet, so the
preview is still a single static frame.

## Decoded layout

| Section | Start | End (exclusive) |
| --- | ---: | ---: |
| Scene duration and eight table counts | 537888 | 537928 |
| 50 model-position records | 537928 | 566374 |
| 42 model-rotation records | 566374 | 604856 |
| Camera-position records (none) | 604856 | 604856 |
| 2 camera-target records | 604856 | 605934 |
| 68 texture records | 605934 | 731666 |
| Interact records (none) | 731666 | 731666 |
| 50 visibility records | 731666 | 759888 |
| Local time-offset records (none) | 759888 | 759888 |
| Logic-scene array (count 0) | 759888 | 759892 |

A 64-bit scene duration of 12,000,000 ticks precedes eight u32 counts. **The
counts are not in table order**: they are model position, camera position,
texture, interact, visibility, model rotation, camera target and local time
offset, while the tables that follow are in the order above. Reading them in one
order for both desynchronises the rest of the file, so the reader keeps the two
orders separate and a test pins each table's own record count.

Every record is a track count, a target index, and that many version-5 animation
tracks — the same records the vertex blenders and skeleton bones use, so the
reader is shared. Texture records carry two extra indices between the target and
the tracks. The original loader keeps a fixed number of tracks per table and
discards the rest, so this reader accepts at most that many and rejects more
rather than silently dropping data: three for the position, rotation and camera
tables, four for texture and interact, one for visibility and local time offset.
Every record in this scene fills its capacity exactly.

Totals: **212 records, 604 tracks and 2,867 curves**. 377 tracks keep the default
driver 12 (338 of them hold no curves at all), 172 use driver 3, 43 driver 4,
11 driver 0 and one driver 1.

## What each table drives

`GEScene::UpdateSimulation` shows what the tables mean, and each is gated on the
model being shown, so the visibility work in the previous checkpoint feeds it.

- **Model position** and **model rotation**: three tracks each, evaluated against
  driver 0 and the model's local time, then written to the model's matrix with
  `SetPosition` and `SetEulerXZY` — the same Euler order the skeleton bones use.
- **Camera position** and **camera target**: three tracks feeding
  `GECamera::SetLookAtParams`. This scene animates only the camera target, for
  both cameras.
- **Texture**: the record names a model, one of its surfaces and one of that
  surface's two texture layers. Its four tracks are U offset, V offset, U scale
  and V scale; the layer's texture matrix gets `SetScale(su, sv, 1)` and the
  position `(u + 0.5 - su/2, v + 0.5 - sv/2, 0)`, which scales about the centre
  of the texture rather than its corner. These 68 records are what move the
  water, drift the clouds and animate the twinklers and light flares.
- **Visibility**: one track per model, 50 of them, including the fireworks, the
  lighthouse beam and the shooting stars.
- **Local time offset**: one track evaluated against driver 4; the positive part
  of its value, scaled by the frame duration, accumulates into that model's own
  clock. This scene stores none.
- **Interact**: none in this scene.

## Evaluating a track

`GEAnimationTrack::Evaluate` returns the track's default value when it holds no
curves or when the resolved tick is outside `[start, end)`. Otherwise it selects
the segment containing the tick, computes the fraction
`(tick - segment start) / (t3 - t0)`, and returns a cubic Bezier over the
segment's four value control points:

```
u = 1 - t
value = u*u*(u*v0 + 3*t*v1) + t*t*(t*v3 + 3*u*v2)
```

`evaluateTrack` implements exactly that for an already-resolved tick. The shark
fin is a clear example: its position tracks are empty until tick 180,000,000 and
run to 192,000,000, so the fin sits at its default position for most of the cycle
and then travels across the bay. The plane's X track runs from 120,000,000 to
216,000,000 in three passes from x=1148 to x=-1445.

Tick values are consistent with microseconds — the lighthouse beam's track is
1,000,000 ticks long, the seagull wing cycle about 6,070,000, the scene duration
12,000,000 — and the legacy 32-bit time path multiplies by 1000. That is an
observation, not a measurement: nothing has been run against a clock yet.

## What is still missing, and it is no longer the file

The previous checkpoint recorded that the driver clocks came from an undecoded
logic section. That was wrong, and this checkpoint corrects it: the logic-scene
array is present and **empty**, so this scene has no scripted logic at all.
`GEScene::Internal_UpdateAnimationTime` builds the twelve `GEAnimationTimeData`
driver entries, each a time and a period, from the scene's own clock fields —
elapsed time, the time of day and the trigger state — not from the file.

So what remains for animation is a runtime clock model, not more parsing:
reconstructing those twelve drivers, the wrap rule in
`GEAnimationTrack::Evaluate` (`tick = driver time + track offset`, taken modulo
the larger of the track's end and the driver's period, except for drivers 2 and
4 which latch on a trigger), the per-model local time offsets, and then applying
the evaluated values to matrices, texture layers and visibility. Vertex skinning
is likewise implementation, not decoding.

## Evidence

- [Scene loader section order](../native/armeabi-v7a/functions/0005bb8c_STG__USerialize__Load.c)
- [Animation table allocation](../native/armeabi-v7a/functions/0003dc7c_STG__GEScene__InitializeAnimations.c)
- [Table application](../native/armeabi-v7a/functions/000431fc_STG__GEScene__UpdateSimulation.c)
- [Track evaluation to a value](../native/armeabi-v7a/functions/00035414_STG__GEAnimationTrack__Evaluate.c)
- [Segment and fraction selection](../native/armeabi-v7a/functions/0003524c_STG__GEAnimationTrack__Evaluate.c)
- [Driver time data](../native/armeabi-v7a/functions/000423e8_STG__GEScene__Internal_UpdateAnimationTime.c)
- [Local time offsets](../native/armeabi-v7a/functions/00042c44_STG__GEScene__Internal_UpdateLocalTimeOffsets.c)
- [Logic-scene array](../native/armeabi-v7a/functions/0004c990_STG__LLogicScene__Load.c)
- Table names come from `GEScene::GetValidAnimCount_Model_Pos`, `_Model_Rot`,
  `_Camera_Pos`, `_CameraTarget_Pos`, `_Texture`, `_Interact`, `_Visibility` and
  `_LocalTimeOffset`, each of which also pins its table's stride and capacity.

Offsets, counts and field meanings were independently traced with a temporary
Python reader before the C++ reader was written; the two agree on every number
quoted here, and both end at byte 759,892.

## Tests

All twelve Release tests pass, the eleven non-GPU tests also pass under
AddressSanitizer and UndefinedBehaviorSanitizer, and five suites pass without
the original assets. The core, inspection CLI and renderer still cross-compile
for Android ARM64 with NDK r27b, API 24.

- The synthetic fixture now carries one record in five of the eight tables,
  including a texture record naming a surface and layer, and a Bezier track
  whose midpoint value is exactly 1. Every truncation of the fixture is rejected,
  along with 48 field mutations across both behaviour checkpoints: mismatched
  counts, a track count above a table's capacity, unknown model, camera, surface
  and layer references, and a non-empty logic-scene array.
- Evaluation is checked outside the track, at the segment start, at the midpoint
  and at a track with no curves.
- Original-asset tests pin all four section boundaries, the scene duration, all
  eight record counts, the 604/2,867 track and curve totals, the seven models
  that animate both texture layers, and the shark fin's window. Every segment
  boundary in all 604 original tracks is checked to evaluate to that segment's
  first control value.

See the [milestone tracker](../docs/MILESTONES.md) for remaining work.
