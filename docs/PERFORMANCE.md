# Panning regression — open investigation

**Status: reproduced on the user's physical phone; not fixed.** Publication was prioritized before optimization. No performance fix is included in this initial repository.

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

A fix should be validated against both home-screen and manual pan, not just a static scene. Preserve the original user preferences and app data, report cold and warmed runs separately, and avoid presenting profiler-disturbed results as an unbiased baseline.

## What is not yet known

- Which cause dominates the umbrella/far-right transition on the physical device.
- Whether first-use shader/translation compilation contributes to the worst spikes.
- How much of the observed work comes from concurrently active wallpaper instances.
- Whether the appropriate target is stable 60 FPS or a higher mode on this device.
- Battery, thermal and long-session behavior after any future fix.

The earlier successful emulator rendering tests did not establish smooth panning on the phone. That limitation is now confirmed by the user's report and the physical-device reproduction.
