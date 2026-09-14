#!/usr/bin/env python3
"""Archive the buildable port and required inputs, without keys or downloaded binaries."""
from pathlib import Path
import zipfile

ROOT=Path(__file__).resolve().parents[1]

def main():
    output=ROOT/'dist/my-beach-hd-arm64-source.zip'
    output.parent.mkdir(exist_ok=True)
    roots=['port','scripts','decoded','native/jni','tools/unicorn']
    single=['00237-My-Beach-HD-v2-2.apk','reports/inventory.json','reports/ARM64-BUILD.md']
    ignored={'.git','__pycache__','build','dist'}
    files=[]
    for name in roots:
        for path in (ROOT/name).rglob('*'):
            relative=path.relative_to(ROOT/name)
            if path.is_file() and not any(p in ignored for p in relative.parts) and path.suffix not in {'.pyc','.jks','.keystore'}:
                files.append(path)
    files.extend(ROOT/name for name in single)
    with zipfile.ZipFile(output,'w',zipfile.ZIP_DEFLATED,compresslevel=6) as archive:
        archive.writestr('BeachDecomp/README.md', '# My Beach HD ARM64 build sources\n\nThis archive contains the buildable 64-bit compatibility runtime, its pinned Unicorn sources, and the original APK/decoded inputs.\n\nRead `reports/ARM64-BUILD.md` for architecture, limitations, installation, and tool requirements. From this directory, run:\n\n```sh\npython3 scripts/build_port.py --sdk /path/to/Android/Sdk\n```\n\nThe output is `dist/my-beach-hd-arm64.apk`. A fresh development signing key is generated locally; the developer\'s key is intentionally not included. Native decompiler reference output remains in the full workspace, outside this build-source archive.\n')
        for path in sorted(files):
            archive.write(path,'BeachDecomp/'+str(path.relative_to(ROOT)))
    with zipfile.ZipFile(output) as archive:
        error=archive.testzip()
        if error:raise RuntimeError(f'Corrupt source archive member: {error}')
        if any(name.endswith(('.jks','.keystore')) for name in archive.namelist()):
            raise RuntimeError('Signing key must not be packaged')
    print(f'{output}: {len(files)} files, {output.stat().st_size:,} bytes; CRC verified')

if __name__=='__main__':main()
