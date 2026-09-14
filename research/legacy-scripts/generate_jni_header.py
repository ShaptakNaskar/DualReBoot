#!/usr/bin/env python3
"""Generate the original JNI ABI contract; this does not implement the engine."""
import argparse
from pathlib import Path
import re
import subprocess
import tempfile

ROOT = Path(__file__).resolve().parents[1]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--android-jar", type=Path, required=True)
    args = parser.parse_args()
    if not args.android_jar.is_file():
        parser.error("Android SDK android.jar not found")
    source = (ROOT / "decompiled/sources/com/dualboot/engine/EngineInterface.java").read_text()
    methods = re.findall(r"^    public static native .+;$", source, re.M)
    if len(methods) != 18:
        raise RuntimeError("Expected 18 native declarations in this APK")
    output = ROOT / "native/jni"
    output.mkdir(parents=True, exist_ok=True)
    with tempfile.TemporaryDirectory(prefix="beach-jni-") as temporary:
        path = Path(temporary) / "com/dualboot/engine/EngineInterface.java"
        path.parent.mkdir(parents=True)
        path.write_text("package com.dualboot.engine;\nimport android.content.res.AssetManager;\n"
                        "import java.nio.ByteBuffer;\npublic class EngineInterface {\n" +
                        "\n".join(methods) + "\n}\n")
        subprocess.run(["javac", "--release", "8", "-classpath", str(args.android_jar.resolve()),
                        "-h", str(output), "-d", str(Path(temporary) / "classes"), str(path)], check=True)
    print(f"Generated original JNI contract in {output}")


if __name__ == "__main__":
    main()
