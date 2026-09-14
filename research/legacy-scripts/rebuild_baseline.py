#!/usr/bin/env python3
"""Rebuild the decoded 32-bit app for toolchain verification, not ARM64 use."""
from pathlib import Path
import shutil
import subprocess
import tempfile

ROOT = Path(__file__).resolve().parents[1]


def main():
    build = ROOT / "build"
    build.mkdir(exist_ok=True)
    (ROOT / "reports").mkdir(exist_ok=True)
    # Keep the unmodified decoded evidence separate from build compatibility changes.
    with tempfile.TemporaryDirectory(prefix="baseline-", dir=build) as temporary:
        stage = Path(temporary) / "decoded"
        shutil.copytree(ROOT / "decoded", stage, ignore=shutil.ignore_patterns("build", "dist"))
        styles = stage / "res/values/styles.xml"
        original = 'parent="@android:attr/buttonStyleSmall"'
        replacement = 'parent="@android:style/Widget.Button.Small"'
        text = styles.read_text()
        if text.count(original) != 1:
            raise RuntimeError("Expected exactly one legacy attribute-as-style parent")
        styles.write_text(text.replace(original, replacement))
        output = build / "my-beach-hd-baseline-32bit-unsigned.apk"
        with (ROOT / "reports/baseline-build.log").open("w") as log:
            subprocess.run(["apktool", "b", str(stage), "-o", str(output)],
                           stdout=log, stderr=subprocess.STDOUT, check=True)
        print(f"Built {output}\nUnsigned; still 32-bit. One legacy style parent was normalized for aapt2.")


if __name__ == "__main__":
    main()
