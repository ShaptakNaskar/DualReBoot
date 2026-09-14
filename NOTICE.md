# Ownership, attribution and scope

DualReBoot is an independent compatibility/preservation project. It is not affiliated with or endorsed by DualBoot Games.

- **New runtime/build tooling:** `port/`, active `scripts/`, tests and newly written documentation are provided under GPL v2; see `LICENSE` and `port/LICENSE`.
- **Unicorn:** fetched from its official repository at the pinned 2.1.4 commit. Its own licensing and component notices apply. The builder copies its COPYING notice into the locally produced APK.
- **Recovered application material:** `decoded/`, `decompiled/`, most `native/` reference output, and extracted settings/resources derive from the analyzed My Beach HD APK. Original application and third-party ownership/notices are retained. The project's GPL statement does not relicense these recovered materials.
- **Generated JNI header:** `native/jni/` records the original Java/native interface contract.
- **Reports:** contain analysis, generated symbol/string/ELF descriptions, historical logs and measurements. Decompiled output is not guaranteed to be semantically correct or compilable.

The repository contains no APK, native library, image/texture, scene binary, generated engine byte-array header, signing key or binary release artifact. It supplies no unauthorized APK source. Provide your own legitimately obtained compatible APK to build locally. The project does not remove the app's original purchase/licensing checks.

Historical tool scripts and reports are identified separately from the active build pipeline. See `docs/REPOSITORY-CONTENTS.md` for publication exclusions and sanitization.
