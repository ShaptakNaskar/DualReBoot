# Repository contents and publication policy

The public tree was exported from the working research directory as text only. The inventory of original text files and binary exclusions is [publication-inventory.json](publication-inventory.json).

Included:

- Portable native C++ asset loader, inspection tool and tests for the Linux/Android reconstruction.

- Buildable C++ compatibility runtime, shader implementation, JNI declarations and source-generation script.
- Active APK validation/build/packaging tools and tests.
- Decompiled Java, fallback Java-like output, original smali, readable manifest/resources and settings text.
- ARMv7, ARM and x86 Ghidra reference pseudocode, per-function indices and export summaries.
- ELF layouts, symbol/string tables, hashes, inventories and textual reports.
- Sanitized technical logs and physical-device panning measurements/profiler text summaries.
- Historical scripts from the original local workflow, archived under `research/legacy-scripts/`.

Excluded:

- APKs/AABs, DEX, ELF/native libraries, static/object/class/JAR files.
- Textures, images, scene data, screenshots, recordings, compressed archives and binary profiler traces.
- The generated `engine_bytes.hpp`: although it looks like C++ text, it encodes the original binary and is not published.
- Signing keys, credentials, private phone preference backups and device-setting backups.
- Downloaded SDK/decompiler installations, third-party checkout/build caches, Ghidra databases and generated build directories. The active build fetches its pinned required dependencies instead.

The original technical text is retained where possible. Published copies replace local user paths and the connected phone's ADB serial with placeholders. Log lines containing network/device identities, ADB public-key dumps, or credential-shaped data were removed/redacted. The unredacted working files were not modified or uploaded. The app's original public license-verification key, where present in recovered code, is public verification material rather than a signing/private key.

The `decoded/` tree is intentionally incomplete as a runtime artifact: it contains text references only. `scripts/build.py --apk ...` creates the actual decode, including missing binary assets, under an ignored work directory. Builds never depend on the public reference tree to supply an image, scene or original native library.

References to local APKs/screenshots in historical reports describe artifacts produced during development; those binary files are not available in the public tree. The original historical scripts may assume the old workspace layout and are not supported entry points. Follow `docs/BUILD.md` for the current workflow.

The source-only checker runs in CI and inspects tracked file contents as well as extensions. It rejects binary/NUL data, generated payload headers, private keys, likely GitHub credentials and prohibited artifact types. It is a guard against accidental publication, not a claim that arbitrary future logs can safely be uploaded without review.
