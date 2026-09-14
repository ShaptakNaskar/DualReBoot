#!/usr/bin/env python3
"""Inventory the supplied APK and verify that decoded native libraries/assets match."""
import collections
import hashlib
import json
from pathlib import Path
import re
import struct
import subprocess
import zipfile

ROOT = Path(__file__).resolve().parents[1]
APK = ROOT / "00237-My-Beach-HD-v2-2.apk"
REPORTS = ROOT / "reports"


def digest(data):
    return hashlib.sha256(data).hexdigest()


def main():
    REPORTS.mkdir(exist_ok=True)
    inventory = {"apk": APK.name, "sha256": digest(APK.read_bytes()), "libraries": [], "assets": []}
    with zipfile.ZipFile(APK) as archive:
        for entry in archive.infolist():
            name = entry.filename
            if not name.startswith(("assets/", "lib/")) or entry.is_dir():
                continue
            data = archive.read(name)
            extracted = ROOT / "decoded" / name
            if not extracted.is_file() or extracted.read_bytes() != data:
                raise RuntimeError(f"Decoded file differs from APK: {name}")
            item = {"path": name, "size": len(data), "sha256": digest(data)}
            if name.startswith("lib/"):
                abi = Path(name).parts[1]
                item.update(abi=abi, elf_class=data[4] * 32,
                            machine=struct.unpack_from("<H", data, 18)[0])
                symbols = subprocess.check_output(["readelf", "--dyn-syms", "--wide", str(extracted)], text=True)
                demangled = subprocess.check_output(["c++filt"], input=symbols, text=True)
                (REPORTS / f"symbols-{abi}.txt").write_text(demangled)
                (REPORTS / f"elf-{abi}.txt").write_text(subprocess.check_output(
                    ["readelf", "-h", "-l", "-d", "-S", "--wide", str(extracted)], text=True))
                (REPORTS / f"strings-{abi}.txt").write_text(subprocess.check_output(
                    ["strings", "-a", "-t", "x", str(extracted)], text=True))
                item["jni_exports"] = sorted(set(re.findall(r"\bJava_\w+", symbols)))
                item["defined_dynamic_functions"] = sum(
                    " FUNC " in line and " UND " not in line for line in symbols.splitlines())
                item["dependencies"] = re.findall(r"Shared library: \[(.*?)\]", subprocess.check_output(
                    ["readelf", "-d", str(extracted)], text=True))
                inventory["libraries"].append(item)
            else:
                if name.endswith(".pvr") and data[:4] == b"PVR\x03":
                    fields = struct.unpack_from("<IIQ9I", data)
                    pixel_format = fields[2]
                    channels = (pixel_format & 0xffffffff).to_bytes(4, "little").rstrip(b"\0").decode("ascii")
                    bits = list((pixel_format >> 32).to_bytes(4, "little"))
                    item["pvr"] = dict(version=3, pixel_format=hex(pixel_format), channels=channels,
                                       bits=bits, height=fields[5], width=fields[6], depth=fields[7],
                                       surfaces=fields[8], faces=fields[9], mip_levels=fields[10],
                                       metadata_bytes=fields[11])
                inventory["assets"].append(item)
    source = (ROOT / "decoded/smali/com/dualboot/engine/EngineInterface.smali").read_text()
    methods = re.findall(r"^\.method public static native (\w+)(\([^\n]+)", source, re.M)
    inventory["jni_declarations"] = [{"name": name, "descriptor": descriptor} for name, descriptor in methods]
    for lib in inventory["libraries"]:
        expected = {"Java_com_dualboot_engine_EngineInterface_" + name for name, _ in methods}
        lib["missing_jni_exports"] = sorted(expected - set(lib["jni_exports"]))
        if lib["missing_jni_exports"]:
            raise RuntimeError(f"Missing exports in {lib['abi']}")
    java_files = list((ROOT / "decompiled/sources").rglob("*.java"))
    inventory["java_files"] = len(java_files)
    inventory["java_methods_not_decompiled"] = []
    for path in java_files:
        for number, line in enumerate(path.read_text().splitlines(), 1):
            if '"Method not decompiled:' in line:
                inventory["java_methods_not_decompiled"].append(
                    {"file": str(path.relative_to(ROOT)), "line": number, "text": line.strip()})
    (REPORTS / "inventory.json").write_text(json.dumps(inventory, indent=2) + "\n")
    print(f"Verified {len(inventory['assets'])} assets and {len(inventory['libraries'])} native libraries byte for byte.")
    print(f"Java files: {len(java_files)}; unreconstructed methods: {len(inventory['java_methods_not_decompiled'])}")
    print(f"JNI declarations: {len(methods)}; all present in every ABI.")
    print("Texture formats:", dict(collections.Counter(
        x["pvr"]["pixel_format"] for x in inventory["assets"] if "pvr" in x)))


if __name__ == "__main__":
    main()
