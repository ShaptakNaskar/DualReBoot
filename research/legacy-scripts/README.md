# Historical local-workspace scripts

These scripts are preserved as research history. They assume the initial workspace layout and tool locations, and some paths in the published copy have been anonymized. They are not the supported build interface.

Use `python3 scripts/build.py --apk ... --sdk ...` from the repository root for a fresh build.

`measure_panning.py` is a standalone ADB measurement experiment accepting a device serial/output path. Its scope and measurement caveats are documented in `docs/PERFORMANCE.md`. Other scripts can be adapted to regenerate reference output locally from an authorized APK; they do not download an application.
