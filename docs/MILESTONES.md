# Native port milestone tracker

**Current phase: milestone 4 — animation and scene behavior (in progress).**
Branch: `native-decomp`. Goal: one native C++ engine shared by Linux/KDE and
Android, with no instruction translation or original engine binary at runtime.
Update this file with each phase's implementation, validation and remaining gaps.

| Milestone | What it delivers | Status | Evidence |
| --- | --- | --- | --- |
| 1. Assets | Read original textures, mip levels and scene metadata | Complete — `3249ff4` | 100 textures / 748 mip levels; [asset results](../reports/NATIVE-PORT.md) |
| 2. Scene structure | Preferences, environment, fonts and texture resources | Complete — `e03cca1` | 57 preferences; [format notes](../reports/NATIVE-SCENE-FORMAT.md) |
| 3. Static rendering | Geometry, materials, cameras, parent transforms and a native rendered frame | Prototype committed — `2d9a3b6`; visual parity still open | 167 models / 4,347 triangles; [render results](../reports/NATIVE-GEOMETRY.md) |
| 4. Animation and behavior | Correct initial visibility, time of day, water/object motion, effects and dynamic text | In progress — vertex animations, skeletons and initial visibility delivered | 14 vertex-animation blocks / 228 frames, 3 skeletons, 103 time-of-day masks; [animation](../reports/NATIVE-ANIMATION.md) and [skeleton/visibility](../reports/NATIVE-SKELETON.md) notes |
| 5. Platform integration | KDE wallpaper plugin and Android live-wallpaper host using the shared core | Not started | Android core/renderer cross-build already passes; no native wallpaper app yet |

## What works now

- The original scene and textures load in native C++ without executing the old engine.
- A standalone EGL/GLES2 tool exports a static beach frame for a chosen time of
  day and date, with the serialized visibility masks applied.
- Linux tests cover parsing, malformed inputs, hierarchy/matrix math, evaluated
  visibility and GPU pixels.
- The core and renderer compile/link for Android ARM64; on-device execution is untested.

## What the current preview does not prove

The preview is a static-render prototype, not a visually faithful finished port.
Day and night models no longer appear together, but nothing moves: no clock is
wired up, skinning is not implemented, and dynamic signs, camera motion and
effects remain incomplete. A fixed-camera/time comparison with the running
original engine is still required. These gaps are not counted as finished.

## Milestone 4 tasks

- [x] Decode vertex-animation records and their model references (14 blocks, 228 frames).
- [x] Test native XYZ interpolation at resolved track times, preserving destination W.
- [x] Decode skeletal data: 3 skinned meshes, 21 bones, 63 bone tracks, 1,023 curves.
- [x] Evaluate deterministic initial scene state, including time-driven visibility,
      and apply it to the renderer.
- [ ] Decode the remaining animation-track tables and the scene logic section.
- [ ] Resolve clock drivers, looping, triggers and local offsets; connect animation to rendering.
- [ ] Implement bone matrix composition and vertex skinning.
- [ ] Add a clock and evaluate water, material and object motion.
- [ ] Reconstruct text composition, effects, interactions and preference behavior.
- [ ] Compare frames at matched camera/settings/time, then measure frame cost.

Milestone 4 is complete when these behaviors are implemented and tested; parsing
an animation table alone does not make the scene animated. Publish incremental
checkpoints with explicit evidence and keep unimplemented items unchecked.

Current boundary: byte **537,888** in the original scene, where the animation
track tables begin; 222,004 bytes remain. Visibility is connected to the
renderer, which now takes a time-of-day phase and date. The vertex-animation
sampler and the skeleton tracks are still not connected to rendering, because
their driver clocks live in the undecoded logic section.

## Milestone 5 tasks

- [ ] KDE Plasma wallpaper host: settings, resizing, pause/resume and multiple monitors.
- [ ] Android NDK/WallpaperService host: assets, lifecycle, input and context recreation.
- [ ] Device tests, performance/power checks and reproducible packaging for both hosts.

## Where to find things

- [Build and render commands](../native-port/README.md)
- [Detailed milestone results](../reports/NATIVE-PORT.md)
- [Scene format](../reports/NATIVE-SCENE-FORMAT.md), [geometry](../reports/NATIVE-GEOMETRY.md),
  [vertex animation](../reports/NATIVE-ANIMATION.md) and
  [skeletons/visibility](../reports/NATIVE-SKELETON.md) evidence
- [Current native source](../native-port/)
- Preview outputs stay local in ignored `build/native-port/`; original artwork is
  not published to GitHub. Generate the PNG using the documented ImageMagick command.

Last updated: 2026-09-19.
