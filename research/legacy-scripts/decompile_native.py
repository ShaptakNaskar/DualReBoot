#!/usr/bin/env python3
"""Run Ghidra headlessly and keep a navigable project plus reference pseudocode."""
import argparse
import os
from pathlib import Path
import subprocess

ROOT = Path(__file__).resolve().parents[1]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--abi", choices=["armeabi-v7a", "armeabi", "x86"], default="armeabi-v7a")
    args = parser.parse_args()
    ghidra = Path(os.environ.get("GHIDRA_HOME", ROOT / "tools/ghidra_12.1.3_PUBLIC"))
    launcher = ghidra / "support/analyzeHeadless"
    if not launcher.is_file():
        parser.error("Install Ghidra or set GHIDRA_HOME to its directory")
    project = ROOT / "native/ghidra-projects" / args.abi
    project.mkdir(parents=True, exist_ok=True)
    output = ROOT / "native" / args.abi
    summary = output / "summary.txt"
    summary.unlink(missing_ok=True)
    (ROOT / "reports").mkdir(exist_ok=True)
    env = os.environ.copy()
    if "GHIDRA_JAVA_HOME" in env:
        env["JAVA_HOME"] = env["GHIDRA_JAVA_HOME"]
    elif Path("/usr/lib/jvm/java-21-openjdk/bin/javac").is_file():
        env["JAVA_HOME"] = "/usr/lib/jvm/java-21-openjdk"
    elif Path("/opt/android-studio/jbr/bin/javac").is_file():
        env["JAVA_HOME"] = "/opt/android-studio/jbr"
    if "JAVA_HOME" in env:
        env["PATH"] = str(Path(env["JAVA_HOME"]) / "bin") + os.pathsep + env.get("PATH", "")
    command = [str(launcher), str(project), "BeachEngine", "-import",
               str(ROOT / "decoded/lib" / args.abi / "libdbgengine.so"),
               "-overwrite", "-analysisTimeoutPerFile", "600", "-max-cpu", "4",
               "-scriptPath", str(ROOT / "scripts/ghidra"),
               "-postScript", "ExportNative.java", str(output)]
    log_path = ROOT / "reports" / f"ghidra-{args.abi}.log"
    print(f"Analyzing {args.abi}; log: {log_path}", flush=True)
    with log_path.open("w") as log:
        subprocess.run(command, env=env, stdout=log, stderr=subprocess.STDOUT, check=True)
    if not summary.exists():
        raise RuntimeError(f"Ghidra did not export results; inspect {log_path}")
    print(summary.read_text(), end="")


if __name__ == "__main__":
    main()
