"""Apply explicit compatibility patches and package only freshly built 64-bit libraries."""
from __future__ import annotations

import json
from pathlib import Path
import re
import shutil
import struct
import subprocess
import tempfile
import xml.etree.ElementTree as ET
import zipfile

from build_support import ROOT, run, sha256

ANDROID = "{http://schemas.android.com/apk/res/android}"
ET.register_namespace("android", "http://schemas.android.com/apk/res/android")


def replace_once(text: str, old: str, new: str, description: str) -> str:
    if text.count(old) != 1:
        raise ValueError(f"Unexpected decoded structure: {description}")
    return text.replace(old, new)


def patch_renderer(text: str) -> str:
    old = "sget-object v6, Lcom/dualboot/c/b;->b:Lcom/dualboot/c/b;"
    if text.count(old) != 9:
        raise ValueError("Expected exactly nine legacy EGL configuration sites")
    text = text.replace(old, "sget-object v6, Lcom/dualboot/c/b;->c:Lcom/dualboot/c/b;")
    return replace_once(text, "if-ne v0, v1, :cond_13",
                        "nop  # Explicit EGL_CONTEXT_CLIENT_VERSION=2",
                        "EGL context creation branch")


def patch_color_config(text: str) -> str:
    marker = ".method public constructor <init>(IIIIILcom/dualboot/c/b;)V"
    if text.count(marker) != 1:
        raise ValueError("Missing/ambiguous EGL configuration constructor")
    before, separator, after = text.partition(marker)
    after, count = re.subn(
        r"(\s+\.locals \d+)",
        r"\1\n\n    const/16 p1, 0x8\n    const/16 p2, 0x8\n    const/16 p3, 0x8\n    const/16 p4, 0x8",
        after, count=1)
    if count != 1:
        raise ValueError("Missing EGL configuration registers")
    return before + separator + after


def patch_sdk_metadata(text: str) -> str:
    for field, old in (("minSdkVersion", 9), ("targetSdkVersion", 19)):
        pattern = rf"(?m)^(\s*{field}:\s*)['\"]?{old}['\"]?\s*$"
        text, count = re.subn(pattern, r"\g<1>24", text)
        if count != 1:
            raise ValueError(f"Expected exactly one {field}: {old} in Apktool metadata")
    return text


def patch_manifest(path: Path) -> None:
    tree = ET.parse(path)
    root = tree.getroot()
    if root.get("package") != "com.dualboot.apps.beach":
        raise ValueError("Unexpected decoded application package")
    application = root.find("application")
    if application is None:
        raise ValueError("Missing application element")
    application.set(ANDROID + "extractNativeLibs", "true")
    application.set(ANDROID + "debuggable", "true")
    for name in ("BeachService", "Main$Activity", "Main$Settings", "Main$Dream"):
        matches = [node for node in application
                   if node.get(ANDROID + "name") in ("." + name, "com.dualboot.apps.beach." + name)]
        if len(matches) != 1:
            raise ValueError(f"Missing/ambiguous component: {name}")
        if name != "Main$Dream":
            matches[0].set(ANDROID + "exported", "true")
        else:
            matches[0].set(ANDROID + "permission", "android.permission.BIND_DREAM_SERVICE")
    tree.write(path, encoding="utf-8", xml_declaration=True)


def inspect_elf(data: bytes, abi: str) -> dict:
    if len(data) < 64 or data[:6] != b"\x7fELF\x02\x01":
        raise ValueError("Expected a little-endian ELF64 library")
    header = struct.unpack_from("<16sHHIQQQIHHHHHH", data)
    expected_machine = {"arm64-v8a": 183, "x86_64": 62}[abi]
    if header[1] != 3 or header[2] != expected_machine:
        raise ValueError(f"Wrong ELF machine/type for {abi}")
    if header[9] < 56 or header[5] + header[9] * header[10] > len(data):
        raise ValueError("Invalid ELF program-header table")
    loads = []
    for index in range(header[10]):
        segment = struct.unpack_from("<IIQQQQQQ", data, header[5] + index * header[9])
        if segment[0] != 1:
            continue
        alignment = segment[7]
        if alignment < 16384 or alignment & (alignment - 1) or segment[2] % alignment != segment[3] % alignment:
            raise ValueError("Native LOAD segments are not 16 KB compatible")
        loads.append(alignment)
    if not loads:
        raise ValueError("ELF has no LOAD segments")
    return {"abi": abi, "elf_class": 64, "machine": header[2], "load_alignments": loads}


def package_apk(*, apk: Path, decoded: Path, work: Path, output: Path,
                sdk: Path, ndk: Path, unicorn: Path, apktool: list[str],
                libraries: dict[str, Path], profile: dict, provenance: dict) -> Path:
    tools = sdk / "build-tools/36.0.0"
    native_tools = ndk / "toolchains/llvm/prebuilt/linux-x86_64/bin"
    library_info = []
    for abi, path in libraries.items():
        library_info.append(inspect_elf(path.read_bytes(), abi))
        symbols = subprocess.check_output([str(native_tools / "llvm-readelf"), "--dyn-syms", "--wide", str(path)], text=True)
        exported = set(re.findall(r"\bJava_com_dualboot_engine_EngineInterface_(\w+)\b", symbols))
        missing = set(profile["jni_methods"]) - exported
        if missing:
            raise ValueError("Missing native JNI exports: " + ", ".join(sorted(missing)))
    output.mkdir(parents=True, exist_ok=True)
    print("Applying EGL/manifest patches, packaging, aligning and signing locally...", flush=True)
    with tempfile.TemporaryDirectory(prefix="package-", dir=work) as temporary:
        temp = Path(temporary)
        stage = temp / "decoded"
        shutil.copytree(decoded, stage, ignore=shutil.ignore_patterns("build", "dist"))
        shutil.rmtree(stage / "lib")  # Only our temporary staging copy.
        for abi, path in libraries.items():
            destination = stage / "lib" / abi / "libdbgengine.so"
            destination.parent.mkdir(parents=True)
            shutil.copy2(path, destination)
            run([native_tools / "llvm-strip", "--strip-unneeded", destination])
        renderer = stage / "smali/com/dualboot/c/g.smali"
        renderer.write_text(patch_renderer(renderer.read_text()))
        chooser = stage / "smali/com/dualboot/c/a.smali"
        chooser.write_text(patch_color_config(chooser.read_text()))
        styles = stage / "res/values/styles.xml"
        styles.write_text(replace_once(styles.read_text(),
            'parent="@android:attr/buttonStyleSmall"', 'parent="@android:style/Widget.Button.Small"',
            "legacy attribute-as-style parent"))
        metadata = stage / "apktool.yml"
        metadata.write_text(patch_sdk_metadata(metadata.read_text()))
        patch_manifest(stage / "AndroidManifest.xml")
        notices = stage / "assets/arm64-runtime"
        notices.mkdir()
        shutil.copy2(unicorn / "COPYING", notices / "UNICORN-COPYING.txt")
        (notices / "NOTICE.txt").write_text(
            "DualReBoot experimental 64-bit compatibility runtime, using Unicorn 2.1.4.\n"
            "The original ARM32 engine is translated inside a 64-bit process.\n"
            "Source/build instructions: https://github.com/ShaptakNaskar/MyBeachDecompHD\n"
            "Original application and artwork retain their original ownership.\n")
        unsigned, aligned = temp / "unsigned.apk", temp / "aligned.apk"
        run(apktool + ["b", str(stage), "-p", str(work / "framework"), "-o", str(unsigned)],
            log=work / "logs/package.log")
        run([tools / "zipalign", "-P", "16", "-f", "4", unsigned, aligned])
        key = ROOT / "build/keys/dualreboot-local.jks"
        if not key.exists():
            key.parent.mkdir(parents=True, exist_ok=True)
            run(["keytool", "-genkeypair", "-keystore", key, "-storepass", "android",
                 "-keypass", "android", "-alias", "dualreboot-local", "-keyalg", "RSA",
                 "-keysize", "2048", "-validity", "10000", "-dname", "CN=DualReBoot local build", "-noprompt"],
                log=work / "logs/key-generation.log")
        name = "my-beach-hd-arm64.apk" if len(libraries) == 1 else "my-beach-hd-64bit.apk"
        result = output / name
        signed = temp / "signed.apk"
        run([tools / "apksigner", "sign", "--ks", key, "--ks-key-alias", "dualreboot-local",
             "--ks-pass", "pass:android", "--key-pass", "pass:android", "--out", signed, aligned])
        run([tools / "apksigner", "verify", "--verbose", signed], log=work / "logs/signature.log")
        run([tools / "zipalign", "-c", "-P", "16", "4", signed])
        with zipfile.ZipFile(apk) as original, zipfile.ZipFile(signed) as packaged:
            if packaged.testzip() is not None:
                raise RuntimeError("Output APK CRC validation failed")
            asset_names = [n for n in original.namelist() if n.startswith("assets/") and not n.endswith("/")]
            for name in asset_names:
                if original.read(name) != packaged.read(name):
                    raise RuntimeError(f"Original asset changed: {name}")
            expected_libs = {f"lib/{abi}/libdbgengine.so" for abi in libraries}
            actual_libs = {n for n in packaged.namelist() if n.startswith("lib/") and n.endswith(".so")}
            if expected_libs != actual_libs:
                raise RuntimeError("Unexpected packaged native libraries")
            for abi in libraries:
                inspect_elf(packaged.read(f"lib/{abi}/libdbgengine.so"), abi)
        # Don't replace an existing output until the new one passes every check.
        shutil.copy2(signed, result)
        summary = {**provenance, "output": result.name, "output_sha256": sha256(result),
                   "native_libraries": library_info, "original_assets_verified": len(asset_names),
                   "min_sdk": 24, "target_sdk": 24, "debuggable": True,
                   "implementation": "ARM32 instruction translation inside a 64-bit process; GLES 2 shader bridge",
                   "known_issue": "Panning stutter on Nothing Phone 2; performance work is incomplete"}
        result.with_suffix(".json").write_text(json.dumps(summary, indent=2) + "\n")
        return result
