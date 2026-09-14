# Verification status

## Public build pipeline

The active entry point is `scripts/build.py`. It was run with the local reference APK supplied from **outside** the public tree, an initially empty `build/work/` and an initially empty dependency/tool cache.

The command successfully:

- Validated the complete supported payload profile.
- Downloaded/checksummed official Apktool 3.0.3 and fetched the pinned Unicorn 2.1.4 source.
- Decoded the full app locally rather than using the published text-only reference extraction.
- Built the AArch64 runtime with NDK 27.1.12297006.
- Applied the exact EGL, RGBA8888, SDK, manifest and resource patches in temporary staging.
- Generated a local development signing key, signed the APK and verified its signature.
- Checked all required JNI exports, ELF64/AArch64 type and 16 KB LOAD alignment.
- Checked APK alignment/CRC, included only the selected 64-bit ABI, and preserved the original 102 assets byte for byte.

A fresh local Git clone also completed the full build. Its checkout path contained spaces; the build used explicit whitespace-free work/cache/SDK paths, exercising the documented Unicorn workaround. It used a fresh decode and native build, reusing the already verified tool/dependency cache. See [the resulting provenance report](../reports/public-clean-checkout-build.json). These packaging checks do not assert smoothness or feature parity.

## Automated source/build-tool checks

Run:

```sh
python3 -m unittest discover -s tests -v
python3 scripts/check_source_only.py
```

The test suite currently contains 17 tests covering supported/repacked inputs, altered or missing code/assets, extra payloads, traversal and duplicate entries, unsupported ZIP entry types, exact renderer patch sites, EGL color parameters, quoted/numeric SDK metadata, component contracts, ELF architecture/alignment, toolchain path validation, and staged binary publication prevention.

The source-only checker reads **Git's indexed blobs**. A clean text working copy cannot hide a previously staged binary from this check. It also rejects private-key material, likely GitHub credentials, generated engine-payload headers and prohibited filenames/extensions.

CI runs these source/tool tests without an APK or Android SDK. Full native/APK compilation requires a local legitimate input and is not falsely represented as a public CI build.

## Earlier runtime validation

Desktop tests exercised original engine creation, scene/texture loading, frame updates and destruction. A real desktop OpenGL readback rendered the scene without a GL error in the tested view.

An Android 16 emulator rendered the ARM64-only APK through its ARM64 native bridge. Its advertised ARM32 ABI list was empty. Preview, home-screen use, day/night settings and resume were exercised. Original binary artifacts/screenshots are excluded from the public repository; textual historical reports remain in `reports/`.

The owner subsequently confirmed the build worked on their physical Nothing Phone 2. They also reported severe panning stutter. ADB presentation measurements reproduced that regression; see [PERFORMANCE.md](PERFORMANCE.md). The emulator's functional success did not establish the phone's frame pacing.

## Known limits

- **Panning stutter remains unresolved in the initial public version.**
- No claim of parity across every holiday, effect, optional purchase or user-image path.
- No battery/thermal certification or unbiased performance result after a fix.
- The binary has 16 KB-compatible LOAD alignment, but execution on a physical 16 KB-page device has not been tested.
- The app retains legacy Java/UI behavior and target SDK 24.
- Ghidra/JADX output is reference material with known inference/control-flow limitations, not recovered original compilable source.
- Original purchase/licensing behavior is preserved and has not been comprehensively validated.
