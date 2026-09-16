# Panning performance — measured improvements

**Status: the severe regression is reduced by measured CPU optimizations. Perfect high-refresh pacing and complete original-app parity remain unverified.**

The original publication documented an unresolved regression. The current source caches graphics function addresses, removes unnecessary emulator exits at imports, and keeps guest heap/stack pages non-executable. Six small math routines also have native C++ implementations with differential tests; their isolated FPS benefit has not been established.

## Controlled comparison after optimization

On the same Nothing Phone 2, with Noon selected and automatic time-of-day temporarily disabled, the current harness waits for a fresh, advancing surface, restarts the preview sweep after loading, and injects alternating 900 ms horizontal swipes. The Android compositor changes refresh cadence. `input swipe` is repeatable stress input, not a calibrated physical finger replay. No CPU profiler or differential test ran during the two fresh comparison rows below.

| Build | Average FPS | p95 interval | Maximum interval | Intervals over 25 ms |
| --- | ---: | ---: | ---: | ---: |
| Original ARM64 bridge, fresh repeat | 42.77 | 33.34 ms | 33.35 ms | 14.86% |
| Current optimized build, fresh repeat | 67.99 | 22.24 ms | 22.24 ms | 0% |

That is roughly 59% more presented frames per second in this specific stress test. It does not imply a locked 68 FPS mode or an equivalent speedup on every device. Intervals still alternate around 11.1 and 22.2 ms during high-refresh touch input; average FPS alone does not prove perfectly even motion. Neither build had intervals over 50 ms in these controlled repeats.

Evidence: [baseline repeat](../reports/panning/baseline-noon-touch-repeat.json), [optimized repeat](../reports/panning/final-noon-touch-repeat.json). These are more reliable comparisons than the historical initial sweeps below, whose surface/lifecycle selection was later improved.

The original criterion could accept a consistently slow ~47 FPS run. The current assertion additionally requires average FPS of at least 55, alongside p95 below 25 ms and no more than 1% of intervals over 50 ms. This remains a coarse regression gate, not a high-refresh smoothness guarantee.

```sh
python3 scripts/measure_panning.py \
  --serial YOUR_DEVICE_SERIAL --warm-sweep --touch-swipes --seconds 18 \
  --output local/panning-test.json --assert-smooth
```

For an already applied, visible wallpaper, replace `--warm-sweep` with `--current-surface`. Set `--swipes-per-direction 6` when testing manual panning across seven home screens. The script changes the foreground activity in preview mode and injects touches when requested; use only on an authorized device that is not being used for other work.

## Applied-wallpaper checks

The cleaned optimized APK was also applied to the actual home screen, outside preview. Home-screen panning used the owner's original mode. Manual panning was then enabled temporarily with the existing seven-home-screen setting, six swipes per direction, and a 24-second capture.

| Current build, controlled Noon | Average FPS | p95 interval | Maximum | Intervals over 50 ms |
| --- | ---: | ---: | ---: | ---: |
| Home-screen mode | 64.47 | 22.23 ms | 33.34 ms | 0% |
| Manual mode | 66.78 | 22.22 ms | 33.32 ms | 0% |

Evidence: [home screen](../reports/panning/final-home-noon.json), [manual](../reports/panning/final-manual-noon.json). These exercise the actual modes, but their injected gestures are still a stress protocol. A matching original-bridge home/manual run was not captured in this round, so use the preview A/B for the quantified speedup. User-perceived residual jitter at variable refresh still needs confirmation.

After testing, the original home-screen pan mode and automatic time-of-day were restored. A [final run with those restored settings](../reports/panning/final-restored-home.json) measured 64.66 FPS, p95 22.23 ms, maximum 33.34 ms, and no intervals over 50 ms. The 30-minute screen timeout was retained as requested. Updates/force-stops had cleared the live selection during testing; the optimized wallpaper was reapplied to the home screen.

## Isolated experiments

| Candidate | FPS in Noon touch sweep | Decision |
| --- | ---: | --- |
| Baseline | 42.84 | Reference |
| Cached graphics function targets | 55.71 | Keep |
| Existing guest `bx lr` returns | 60.68 | Keep |
| Uniform upload cache | 57.50 | Revert; worse tail intervals |
| Native math subset | 59.86 | Keep as tested reconstruction; no isolated speed claim |
| Restricted executable memory | 67.67 | Keep; code-invalidation hotspot removed |
| Virtual TLB experiment | 46.83 | Revert; CPU frame time rose to about 20 ms |

These are sequential single-run experiments, not a randomized benchmark. Raw sanitized JSON for each is in `reports/panning/`. The fresh baseline/current repeat above checks that the overall gain persists.

Temporary thread CPU-time probes measured roughly 14 ms of CPU work in 14–15 ms of wall time during touch-driven panning before the memory permission change. This supports CPU overhead as a load-bearing bottleneck. A later CPU sample no longer showed `dlsym` or the executable-page invalidation routine among the major hotspots. Sampling was kept separate from the final presentation comparison; temporary probes were removed.

## Historical initial investigation


The user reports that the original app panned smoothly, but the ARM64 compatibility build stutters heavily during home-screen and manual panning, especially between the umbrella and the far-right part of the scene.

## Reproduction and measurements

Device supplied by the user: Nothing Phone 2, Snapdragon 8+ Gen 1, Android 16, ARM64-only OS. Physical display resolution: 1080 × 2412. The reported peak-refresh setting was approximately 120 Hz; compositor refresh cadence can change dynamically. The screen timeout was set to 30 minutes at the user's request.

The tested APK SHA-256 was `5ac05925155edc6747b4164bee72fb2d11fff49bce5f8daf615a5d229b650add`. Its binaries are not included here.

The measurement script observes **actual presentation timestamps** from SurfaceFlinger's active wallpaper buffer layer during the preview camera sweep. It deduplicates timestamps across overlapping samples; intervals are not merely native `Update()` execution times.

| Metric | Initial unprofiled sweep | Repeat while CPU profiling |
| --- | ---: | ---: |
| Samples / duration | 660 frames / 18.07 s | 377 frames / 17.80 s |
| Average presentation rate | 36.47 FPS | 21.12 FPS |
| Median frame interval | 16.68 ms | 33.36 ms |
| 95th percentile interval | 66.70 ms | 116.76 ms |
| 99th percentile interval | 83.39 ms | 166.80 ms |
| Maximum interval | 116.78 ms | 233.48 ms |
| Intervals over 25 ms | 37.33% | 72.61% |
| Intervals over 50 ms | 16.69% | 40.69% |

The second run was disturbed by sampling and call-stack recording. **Do not treat it as an equivalent unprofiled baseline, an improvement/regression comparison, or a stable device benchmark.** The first run establishes that the symptom occurs without the profiler.

Raw sanitized measurements: [baseline.json](../reports/panning/baseline.json), [baseline-repeat.json](../reports/panning/baseline-repeat.json). The private serial was replaced with `DEVICE_SERIAL`.

The initial pass/fail criterion is p95 below 25 ms and at most 1% of frame intervals above 50 ms. It is a regression-detection threshold, not a guarantee of perfect 60/120 Hz pacing.

The original measurement command, retained for reproducibility:

```sh
python3 research/legacy-scripts/measure_panning.py \
  --serial YOUR_DEVICE_SERIAL --seconds 18 \
  --output local/panning-test.json --assert-smooth
```

It changes the foreground activity by restarting the system live-wallpaper picker. Run it only on your own authorized test device, while you are not using the phone for anything else. It is calibrated to the observed `Wallpaper BBQ wrapper` layer names; other Android builds may require an updated layer selector. The script's exact layer selection and lifecycle behavior still need review before treating it as a general benchmark.

## CPU sampling findings

Simpleperf recorded approximately 12 seconds of the wallpaper service using 500 Hz user-space CPU-clock sampling with frame-pointer call graphs. It recorded 4,693 samples and reported no lost samples.

| Sampled CPU time | Shared object |
| --- | --- |
| 54.76% | `libdbgengine.so`, including bridge and Unicorn runtime |
| 15.21% | Android dynamic linker |
| 10.74% | Unresolved/unknown samples, including potentially generated code |
| 8.57% | libc |
| 6.18% | Adreno GLES driver |

Notable symbols included `do_dlsym` (8.69%), `helper_check_exit_request_arm` (5.37%), `flatview_translate_arm` (4.43%), `tb_invalidate_phys_page_fast_arm` (3.32%) and `helper_lookup_tb_ptr_arm` (2.83%).

Evidence: [cpu-dso.txt](../reports/panning/cpu-dso.txt), [cpu-symbols.txt](../reports/panning/cpu-symbols.txt), [recording summary](../reports/panning/simpleperf-record.log). The binary profiler recording and installed APK backup are deliberately excluded.

These are **on-CPU samples**. They do not measure GPU execution or establish how much wall time was spent blocked in the driver, waiting for a frame, waiting for the shared runtime mutex, or sleeping. Some vendor symbols could not be resolved.

## Ranked hypotheses and falsifiable next tests

1. **Graphics dispatch overhead:** `port/graphics.cpp` resolves host graphics entry points with `dlsym` repeatedly. Cache these addresses and measure the same sweep without changing shaders, render resolution, camera behavior or frame pacing. Prediction: linker CPU share falls; presentation cadence improves if that cost is load-bearing.
2. **Translation/callback overhead:** imported functions repeatedly cross Unicorn hooks and read/write guest registers. Profile the minimized hot path, guest memory permissions and translated-block invalidation. Prediction: reducing these costs reduces CPU frame time at the problem camera positions.
3. **Shader/GPU or driver-state cost:** the compatibility shader handles several texture-combiner modes with uniforms/branches and uploads substantial state per draw. GPU timing and state-change profiling should distinguish this from CPU translation. Prediction: equivalent specialized/cached material paths improve heavy views without removing visual effects.
4. **Frame pacing:** the original Java render loop combines its own sleep policy with EGL buffer swaps, while the phone changes refresh cadence. Measure frame deadlines/presentation versus native work time. Prediction: pacing remains irregular despite work finishing within budget if sleep/vsync interaction dominates.
5. **Wallpaper-instance contention:** several render threads were present during repeated preview use. All native entry points share one recursive mutex and one emulated runtime. Compare a clean single-engine run with preview plus home-screen instances. Multiple threads alone are **not proof** that they were all rendering or leaking.

The original investigation required validating both home-screen and manual pan; those checks are now recorded above. Preserve the original user preferences and app data, report cold and warmed runs separately, and avoid presenting profiler-disturbed results as an unbiased baseline.

## Remaining limits after this revision

- Whether the remaining variable-refresh cadence is perceptually smooth enough at the umbrella/far-right transition.
- Whether first-use shader/translation compilation contributes to the worst spikes.
- How much of the observed work comes from concurrently active wallpaper instances.
- Whether explicit frame scheduling is needed for evenly paced 60 FPS or a higher display mode.
- Battery, thermal and long-session behavior of this revision.

The earlier successful emulator rendering tests did not establish smooth panning on the phone. That limitation is now confirmed by the user's report and the physical-device reproduction.

The final APK tested in this revision had SHA-256 `b50b23a84308e36196915161e2cc725fe54f397f32806219bb8238f079f0ba28`. It used the owner's existing local development certificate for an in-place update. Other local builds have different APK hashes when signed with different keys. No APK is published here.
