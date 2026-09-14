"""Input validation and reproducible tool setup for the local-only APK build."""
from __future__ import annotations

import hashlib
import json
from pathlib import Path, PurePosixPath
import shutil
import stat
import subprocess
import urllib.request
import zipfile

ROOT = Path(__file__).resolve().parents[1]
PROFILE = ROOT / "profiles/my-beach-hd-2.2.json"
APKTOOL_VERSION = "3.0.3"
APKTOOL_SHA256 = "dbf930b076c6b9be08d57c449cacefc3bdd6b71ebd59b3066fc0e1f5b14f9423"
APKTOOL_URL = f"https://github.com/iBotPeaches/Apktool/releases/download/v{APKTOOL_VERSION}/apktool_{APKTOOL_VERSION}.jar"
UNICORN_COMMIT = "8028ec436f2d9376525352dd38ed9ed6b9f6be10"
MAX_UNCOMPRESSED = 256 * 1024 * 1024
MAX_ENTRY = 64 * 1024 * 1024


def sha256(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as stream:
        for block in iter(lambda: stream.read(1024 * 1024), b""):
            digest.update(block)
    return digest.hexdigest()


def load_profile() -> dict:
    return json.loads(PROFILE.read_text())


def validate_apk(apk: Path, profile: dict) -> dict:
    """Accept identical supported payloads despite ZIP compression/signature changes.

    Hashes identify compatibility, not ownership or authorization. The caller must
    obtain the APK legitimately. No APK is downloaded or sent to a server.
    """
    required = profile["required_entries"]
    optional = profile.get("optional_entries", {})
    allowed = {**required, **optional}
    with zipfile.ZipFile(apk) as archive:
        entries = archive.infolist()
        if len(entries) > 10000:
            raise ValueError("Too many APK entries")
        seen: set[str] = set()
        total = 0
        for entry in entries:
            name = entry.filename
            normalized = str(PurePosixPath(name))
            if (not name or name.startswith("/") or "\\" in name
                    or ".." in PurePosixPath(name).parts
                    or normalized != name.rstrip("/")):
                raise ValueError(f"Unsafe/noncanonical APK path: {name!r}")
            if name in seen:
                raise ValueError(f"Duplicate APK entry: {name}")
            seen.add(name)
            if stat.S_ISLNK(entry.external_attr >> 16) or entry.flag_bits & 1:
                raise ValueError(f"Unsupported APK entry type: {name}")
            total += entry.file_size
            if entry.file_size > MAX_ENTRY or total > MAX_UNCOMPRESSED:
                raise ValueError("APK exceeds the supported extraction size limit")
            if entry.is_dir() or name.startswith("META-INF/"):
                continue
            expected = allowed.get(name)
            if expected is None:
                raise ValueError(f"Unexpected payload entry in this APK: {name}")
            if entry.file_size != expected["bytes"]:
                raise ValueError(f"Unsupported My Beach HD payload: size differs for {name}")
            digest = hashlib.sha256(archive.read(entry)).hexdigest()
            if digest != expected["sha256"]:
                raise ValueError(f"Unsupported My Beach HD payload: SHA-256 differs for {name}")
        missing = set(required) - seen
        if missing:
            raise ValueError("Missing required APK entries: " + ", ".join(sorted(missing)))
    return {"input_sha256": sha256(apk), "profile": profile["name"],
            "version": profile["version_name"], "required_entries_verified": len(required)}


def run(command: list, *, log: Path | None = None, cwd: Path = ROOT) -> None:
    command = [str(arg) for arg in command]
    if log is None:
        subprocess.run(command, cwd=cwd, check=True)
    else:
        log.parent.mkdir(parents=True, exist_ok=True)
        with log.open("w") as stream:
            try:
                subprocess.run(command, cwd=cwd, stdout=stream,
                               stderr=subprocess.STDOUT, check=True)
            except subprocess.CalledProcessError as error:
                raise RuntimeError(f"Command failed; inspect {log}") from error


def find_command(name: str) -> str:
    found = shutil.which(name)
    if not found:
        raise RuntimeError(f"Required command not found: {name}")
    return found


def apktool_command(cache: Path, override: Path | None = None) -> list[str]:
    java = find_command("java")
    jar = override.resolve() if override else cache / f"apktool_{APKTOOL_VERSION}.jar"
    if override:
        if not jar.is_file():
            raise RuntimeError(f"Apktool JAR not found: {jar}")
    else:
        jar.parent.mkdir(parents=True, exist_ok=True)
        if not jar.exists():
            print(f"Downloading Apktool {APKTOOL_VERSION} from its official release...", flush=True)
            partial = jar.with_suffix(".download")
            try:
                with urllib.request.urlopen(APKTOOL_URL, timeout=90) as response, partial.open("wb") as out:
                    shutil.copyfileobj(response, out)
                if sha256(partial) != APKTOOL_SHA256:
                    raise RuntimeError("Downloaded Apktool checksum does not match the pinned release")
                partial.replace(jar)
            finally:
                partial.unlink(missing_ok=True)
        if sha256(jar) != APKTOOL_SHA256:
            raise RuntimeError(f"Cached Apktool checksum mismatch: {jar}")
    return [java, "-jar", str(jar)]


def fetch_unicorn(cache: Path) -> Path:
    dependency = cache / "unicorn"
    if not dependency.exists():
        find_command("git")
        print("Fetching pinned Unicorn 2.1.4 source...", flush=True)
        run(["git", "clone", "--depth", "1", "--branch", "2.1.4",
             "https://github.com/unicorn-engine/unicorn.git", dependency])
    revision = subprocess.check_output(
        ["git", "-C", str(dependency), "rev-parse", "HEAD"], text=True).strip()
    if revision != UNICORN_COMMIT:
        raise RuntimeError("Unicorn checkout does not match the pinned revision")
    run(["git", "-C", dependency, "diff", "--quiet", "HEAD"])
    return dependency
