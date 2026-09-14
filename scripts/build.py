#!/usr/bin/env python3
"""Turn a legitimately obtained, supported My Beach HD 2.2 APK into a local ARM64 build."""
from __future__ import annotations

import argparse
import json
import os
from pathlib import Path
import platform
import shutil
import subprocess
import sys
import zipfile

from build_support import (ROOT, apktool_command, fetch_unicorn, find_command,
                           load_profile, run, sha256, validate_apk, validate_build_paths)
from package_apk import package_apk


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--apk", type=Path, required=True, help="Your legitimately obtained My Beach HD 2.2 APK")
    parser.add_argument("--sdk", type=Path, default=None, help="Linux Android SDK directory")
    parser.add_argument("--work-dir", type=Path, default=ROOT / "build/work")
    parser.add_argument("--output-dir", type=Path, default=ROOT / "dist")
    parser.add_argument("--cache-dir", type=Path, default=ROOT / ".cache")
    parser.add_argument("--apktool-jar", type=Path, help="Optional trusted local Apktool JAR override")
    parser.add_argument("--jobs", type=int, default=4)
    parser.add_argument("--with-x86-64", action="store_true", help="Also include an x86_64 comparison runtime")
    parser.add_argument("--prepare-only", action="store_true", help="Validate/decode the input without building native code")
    args = parser.parse_args()
    if not 1 <= args.jobs <= 64:
        parser.error("--jobs must be between 1 and 64")
    apk = args.apk.expanduser().resolve()
    if not apk.is_file():
        parser.error(f"APK not found: {apk}")
    profile = load_profile()
    print("Validating your local APK against the supported payload hashes...", flush=True)
    provenance = validate_apk(apk, profile)
    work, cache, output = (p.expanduser().resolve() for p in
                           (args.work_dir, args.cache_dir, args.output_dir))
    # Never let a build directory alias published reference inputs or the source tree.
    if work == ROOT or work == ROOT / "decoded" or ROOT.is_relative_to(work):
        parser.error("Choose an isolated build directory (the default is build/work)")
    if apk in (output / "my-beach-hd-arm64.apk", output / "my-beach-hd-64bit.apk"):
        parser.error("Input APK must not be the output path; choose a separate --output-dir")
    work.mkdir(parents=True, exist_ok=True)
    cache.mkdir(parents=True, exist_ok=True)
    marker = work / "input.json"
    decoded = work / "decoded"
    if marker.exists():
        previous = json.loads(marker.read_text())
        if previous.get("input_sha256") != provenance["input_sha256"]:
            parser.error("This work directory belongs to another input APK; choose a fresh --work-dir")
    elif decoded.exists():
        parser.error("The decode directory has no provenance marker; choose a fresh --work-dir")
    apktool = apktool_command(cache, args.apktool_jar)
    if not decoded.exists():
        print("Decoding resources and smali into the private build directory...", flush=True)
        run(apktool + ["d", str(apk), "-o", str(decoded), "-p", str(work / "framework")],
            log=work / "logs/decode.log")
        marker.write_text(json.dumps(provenance, indent=2) + "\n")
    # This catches incomplete/copied/tampered local decode output on resumed builds.
    for name, expected in profile["required_entries"].items():
        if name.startswith(("assets/", "lib/")):
            path = decoded / name
            if not path.is_file() or sha256(path) != expected["sha256"]:
                raise RuntimeError(f"Decoded asset/library differs from validated input: {name}")
    if args.prepare_only:
        print(f"Validated input and decoded files: {decoded}")
        return
    if platform.system() != "Linux" or platform.machine() not in ("x86_64", "AMD64"):
        parser.error("The documented build host is Linux x86_64 (including WSL2); see docs/BUILD.md")
    sdk_value = args.sdk or os.environ.get("ANDROID_SDK_ROOT") or os.environ.get("ANDROID_HOME") or Path.home() / "Android/Sdk"
    sdk = Path(sdk_value).expanduser().resolve()
    validate_build_paths(work, cache, sdk)
    ndk = sdk / "ndk/27.1.12297006"
    toolchain = ndk / "build/cmake/android.toolchain.cmake"
    for path in [toolchain, sdk / "build-tools/36.0.0/apksigner", sdk / "build-tools/36.0.0/zipalign"]:
        if not path.is_file():
            parser.error(f"Required SDK component missing: {path}; see docs/BUILD.md")
    for command in ("cmake", "ninja", "keytool"):
        find_command(command)
    unicorn = fetch_unicorn(cache)
    libraries = {}
    abis = ["arm64-v8a"] + (["x86_64"] if args.with_x86_64 else [])
    for abi in abis:
        native_build = work / f"native-{abi}"
        print(f"Building the {abi} runtime (log: {work / 'logs' / (abi + '-build.log')})...", flush=True)
        run(["cmake", "-S", ROOT / "port", "-B", native_build, "-G", "Ninja",
             f"-DCMAKE_TOOLCHAIN_FILE={toolchain}", f"-DANDROID_ABI={abi}",
             "-DANDROID_PLATFORM=android-24", "-DANDROID_STL=c++_static", "-DCMAKE_BUILD_TYPE=Release",
             f"-DBEACH_DECODED_DIR={decoded}", f"-DBEACH_UNICORN_DIR={unicorn}"],
            log=work / "logs" / f"{abi}-configure.log")
        run(["cmake", "--build", native_build, "-j", args.jobs],
            log=work / "logs" / f"{abi}-build.log")
        libraries[abi] = native_build / "libdbgengine.so"
    result = package_apk(apk=apk, decoded=decoded, work=work, output=output, sdk=sdk,
                         ndk=ndk, unicorn=unicorn, apktool=apktool,
                         libraries=libraries, profile=profile, provenance=provenance)
    print(f"\nBuilt and signature-verified: {result}\n"
          "This experimental build still has a known panning performance regression; see docs/PERFORMANCE.md.")


if __name__ == "__main__":
    try:
        main()
    except (ValueError, RuntimeError, OSError, zipfile.BadZipFile, subprocess.CalledProcessError) as error:
        print(f"Build failed: {error}", file=sys.stderr)
        sys.exit(1)
