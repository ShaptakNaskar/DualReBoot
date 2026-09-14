# Build My Beach HD 2.2 for ARM64

This guide produces an **experimental, locally signed ARM64 APK**. Panning stutter remains an open issue; building successfully does not fix that regression. The build uses instruction translation rather than a complete native reimplementation of the engine.

## 1. Prepare a Linux build environment

The tested host is Linux x86_64. WSL2 users need Linux versions of Java, CMake, Ninja and the Android SDK/NDK inside the Linux environment. Do not point a Linux build at the Windows NDK executables.

On Ubuntu/Debian, install the basic tools:

```sh
sudo apt update
sudo apt install git python3 openjdk-17-jdk cmake ninja-build
java -version
cmake --version
```

Required versions/components:

| Tool | Version |
| --- | --- |
| Python | 3.10 or newer |
| Java | JDK 17 or newer, including `keytool` |
| CMake | 3.22 or newer |
| Ninja, Git | Available on `PATH` |
| Android SDK Build Tools | 36.0.0 |
| Android NDK | 27.1.12297006 |
| Apktool | 3.0.3; downloaded and checksum-verified by the builder |
| Unicorn | 2.1.4, commit `8028ec436f2d9376525352dd38ed9ed6b9f6be10`; fetched and verified by the builder |

No Python packages from PyPI are needed.

## 2. Install the Android SDK components

Use Android Studio's SDK Manager or the official Android command-line tools. Find your SDK directory; a common Linux location is `$HOME/Android/Sdk`.

With command-line tools already installed there:

```sh
export ANDROID_SDK_ROOT="$HOME/Android/Sdk"
"$ANDROID_SDK_ROOT/cmdline-tools/latest/bin/sdkmanager" --licenses
"$ANDROID_SDK_ROOT/cmdline-tools/latest/bin/sdkmanager" \
  "build-tools;36.0.0" "ndk;27.1.12297006" "platform-tools"
```

Read and accept the SDK terms yourself. If your command-line-tools directory has a different name, adjust that path. `platform-tools` supplies ADB for optional device testing; it is not needed to compile the native library.

Official references: [Android command-line tools](https://developer.android.com/studio#command-tools), [sdkmanager](https://developer.android.com/tools/sdkmanager), [installing NDK versions](https://developer.android.com/studio/projects/install-ndk).

## 3. Obtain your own My Beach HD 2.2 APK legitimately

Supply an APK you are entitled to use, such as your own legitimate backup. DualReBoot does not download an APK, distribute one, or verify your entitlement.

Keep it outside the checkout, for example `/path/to/My Beach HD 2.2.apk`. Its filename does not matter. The script recognizes the validated application's contents, not the filename.

Supported profile:

- Package: `com.dualboot.apps.beach`
- Version name/code: `2.2` / `15`
- Required original ARMv7 engine SHA-256: `0a999e618e846b81da79d8dda68c17e14d1527ba1128a684ac843e9117db1831`
- Complete required payload hashes: [profiles/my-beach-hd-2.2.json](../profiles/my-beach-hd-2.2.json)

The reference ZIP hash is recorded for provenance. Identical supported contents in a differently compressed or differently signed ZIP are accepted. The optional original `armeabi` and `x86` libraries may be absent; if present, their hashes must match. Modified code, additional executable payloads, changed assets, duplicate ZIP entries, path traversal, and unknown app revisions are rejected.

A legitimate copy can still be a different, unsupported revision. If validation fails, keep the diagnostic and compare the reported entry/hash against the profile. Do not bypass the checks just because the filename says 2.2: the embedded engine and smali patches are specific to the analyzed payload.

## 4. Clone the source repository

```sh
git clone https://github.com/ShaptakNaskar/DualReBoot.git
cd DualReBoot
```

The reference directories deliberately contain no binary assets. Do not try to run `apktool b decoded` on the published text-only tree.

## 5. Run the complete build

```sh
python3 scripts/build.py \
  --apk "/path/to/My Beach HD 2.2.apk" \
  --sdk "$ANDROID_SDK_ROOT" \
  --jobs 4
```

The first build downloads **tools/dependency source only** from the official Apktool and Unicorn GitHub repositories. It does not upload the APK or contact the phone.

The command performs:

1. ZIP layout, size-limit and supported payload hash validation.
2. Local Apktool decoding into `build/work/decoded/`.
3. Validation of extracted original assets and native libraries.
4. NDK compilation of the ARM64 runtime, with the original engine embedded locally as data.
5. Manifest/SDK, GLES 2 context, RGBA8888 and legacy resource fixes in a temporary staging copy.
6. Packaging of only `lib/arm64-v8a/libdbgengine.so`.
7. Local signing, signature verification, ELF ABI/alignment checks, ZIP alignment/CRC checks, JNI export checks and byte-for-byte original asset verification.

Output:

```text
dist/my-beach-hd-arm64.apk
dist/my-beach-hd-arm64.json
```

Logs: `build/work/logs/`. The JSON records input/output hashes, selected ABI, preserved asset count and the known performance limitation.

The original APK and tracked reference files are not modified. A successful rebuild replaces the local output file only after verification. The work directory is associated with its input APK hash; use a new `--work-dir` for a different input ZIP rather than mixing extractions.

## 6. Install and select the wallpaper

Transfer the generated APK to your phone and install it using Android's package installer. Alternatively, after you enable USB debugging and authorize your computer:

```sh
adb devices
adb -s YOUR_DEVICE_SERIAL install -r dist/my-beach-hd-arm64.apk
```

Open My Beach HD and select it in Android's live-wallpaper picker. The app still targets API 24 and Android may display an older-app warning on first launch. This is distinct from missing ARM32 support: the generated library is ARM64.

The generated APK is debuggable and signed with a local development key. It is not signed by DualBoot. If an installed copy has a different signing certificate, Android will reject an in-place update. Preserve your data before deciding how to replace such an installation; the script does not uninstall anything.

## 7. Keep your signing key for future local updates

The builder generates `build/keys/dualreboot-local.jks`, alias `dualreboot-local`, with the standard development password `android`. This is a local development identity, not a production signing setup.

Keep that file privately if you want subsequent builds to update the same installation. Copying the source checkout alone does not preserve the signing identity. A fresh key cannot update APKs signed by the earlier private prototype's different key. Keys are ignored by Git and forbidden by the source-only check.

## Optional commands

Validate and decode without a native build:

```sh
python3 scripts/build.py --apk "/path/to/My Beach HD 2.2.apk" --prepare-only
```

Use a trusted local Apktool JAR instead of downloading the pinned one:

```sh
python3 scripts/build.py --apk "/path/to/My Beach HD 2.2.apk" \
  --sdk "$ANDROID_SDK_ROOT" --apktool-jar "/path/to/apktool_3.0.3.jar"
```

Also build the x86_64 comparison runtime:

```sh
python3 scripts/build.py --apk "/path/to/My Beach HD 2.2.apk" \
  --sdk "$ANDROID_SDK_ROOT" --with-x86-64
```

That produces `dist/my-beach-hd-64bit.apk`, containing ARM64 and x86_64. It still contains no installed ARM32 library.

`--work-dir`, `--cache-dir` and `--output-dir` can relocate local generated files. The default ignored directories are recommended. Keep any custom directories outside the public checkout.

## Troubleshooting

| Failure | Action |
| --- | --- |
| `APK not found` | Check the path and quote filenames containing spaces. |
| Unsupported payload/hash | Read the exact mismatching entry; use the supported legitimate input revision. |
| Interrupted/partial decode | Choose a fresh `--work-dir`; do not reuse an unmarked partial extraction. |
| Required SDK component missing | Install the exact Build Tools/NDK versions and pass the correct Linux SDK path. |
| Cached Apktool checksum mismatch | Remove that local cached JAR after reviewing the failure, then rerun the downloader. |
| Unexpected Unicorn revision or local dependency changes | Use a clean pinned dependency checkout/cache; do not silently mix runtime versions. |
| Native compile/package failure | Inspect the log named by the error in `build/work/logs/`. |
| Signature mismatch on install | The existing APK uses a different signing key; this is not an ABI error. |
| The wallpaper works but pans badly | Known regression; see [PERFORMANCE.md](PERFORMANCE.md). |

Build checks do not establish full feature parity, smoothness, battery behavior or thermal performance. See [VERIFICATION.md](VERIFICATION.md).
