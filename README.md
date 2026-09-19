# MyBeachDecompHD

**[Milestone progress tracker](docs/MILESTONES.md)** — completed phases, current work and remaining gaps for the native Linux/Android port.

A preservation, decompilation and native reconstruction project for **DualBoot Games' My Beach HD 2.2**. Previously named DualReBoot.

**Native reconstruction — milestone 4 started:** the `native-decomp` branch now renders a static beach frame directly from the original assets using native C++ and GLES2, without instruction translation or the original engine binary. It reads 167 models, 4,347 triangles, materials, cameras and parent transforms. Animation, time-driven visibility, dynamic text and platform wallpaper hosts remain ahead; the preview is not yet visually equivalent to the running original app. See [build/run instructions](native-port/) and [milestone results](reports/NATIVE-PORT.md).

MyBeachDecompHD builds an ARM64 Android live wallpaper from an APK **you supply from a legitimate source**. It runs the original ARM32 engine through a bundled Unicorn instruction translator inside a native 64-bit library, and reproduces its fixed-function graphics through OpenGL ES 2 shaders. It does not require Android's ARM32 runtime.

**Current status: functional and experimental, with measured panning improvements.** On a Nothing Phone 2 running Android 16, a controlled touch-driven preview test improved from 42.77 to 67.99 FPS, with p95 frame intervals falling from 33.34 to 22.24 ms. Perfect high-refresh pacing and full original-app parity are not established. Read the [performance measurements and limitations](docs/PERFORMANCE.md) before building.

This repository contains source and text research artifacts. APKs, native binaries, textures/images, scene binaries, screenshots, profiler recordings, downloaded tools, and signing keys are not published. There are no binary release downloads.

## Build from your own APK

The documented host is Linux x86_64, including a Linux environment under WSL2. Install Java 17+, Python 3.10+, Git, CMake 3.22+, Ninja, and Android SDK components as described in the [step-by-step build guide](docs/BUILD.md).

```sh
git clone https://github.com/ShaptakNaskar/MyBeachDecompHD.git
cd MyBeachDecompHD
python3 scripts/build.py \
  --apk "/path/to/your/legitimately-obtained/My Beach HD 2.2.apk" \
  --sdk "/path/to/Android/Sdk"
```

The script validates the input, downloads checksum-pinned Apktool and revision-pinned Unicorn from their official repositories, decodes the app locally, compiles the ARM64 runtime, applies the compatibility patches, and signs/verifies the result.

Output: `dist/my-beach-hd-arm64.apk`, plus `dist/my-beach-hd-arm64.json` with provenance and verification details. The supplied APK never gets uploaded. Hash checks identify a compatible payload; they do not establish ownership or authorization.

## Read the project

| Topic | Location |
| --- | --- |
| Installation, supported APK, troubleshooting | [Build guide](docs/BUILD.md) |
| Engine, JNI, memory, graphics, packaging details | [Technical deep dive](docs/TECHNICAL-DEEP-DIVE.md) |
| Chronology, discoveries, tradeoffs and observations | [Research journal](docs/RESEARCH-JOURNAL.md) |
| Current panning regression, measurements and hypotheses | [Performance investigation](docs/PERFORMANCE.md) |
| Tests, evidence and limits of validation | [Verification](docs/VERIFICATION.md) |
| What was included, excluded or sanitized for publication | [Repository contents](docs/REPOSITORY-CONTENTS.md) |
| Native reconstruction for Linux and Android | [native-port/](native-port/) |
| Original native interface and shader/runtime implementation | [port/](port/) and [native/jni/](native/jni/) |
| Original Java decompilation and fallback output | [decompiled/](decompiled/) |
| Original manifest, XML resources, settings text and smali | [decoded/](decoded/) |
| Ghidra reference pseudocode, indexed per function and ABI | [native/](native/) |
| Symbol/ELF/string inventories, logs and measurements | [reports/](reports/) |
| Archived scripts from the initial private workspace | [research/legacy-scripts/](research/legacy-scripts/) |

The `decoded/` tree is **text-only reference material**, not a complete build input. The builder creates a separate complete extraction at `build/work/decoded/` from your APK. Ghidra pseudocode and JADX output are reference material, not recovered original source ready for compilation.

## Development checks

```sh
python3 -m unittest discover -s tests -v
python3 scripts/check_source_only.py
```

CI runs these checks without an APK. The full APK build requires a supported local input and the Android SDK; it is not performed in public CI. Do not commit your APK, generated `engine_bytes.hpp`, build directory, signing key, phone preferences, or raw private device logs.

## Ownership and licensing

The newly authored runtime and build tooling are offered under [GPL v2](LICENSE). Unicorn and recovered third-party material retain their respective licenses/notices. Original DualBoot application code and assets are not relicensed by this project. Decompiled references are identified as recovered material. See [NOTICE.md](NOTICE.md).

This is an independent project, not an official DualBoot Games release. Original purchase/licensing behavior has not been bypassed. Obtain the input app legitimately; this repository provides no APK download or source for obtaining unauthorized copies.
