#!/usr/bin/env python3
"""Check Git's indexed blobs, so staged binary/key material cannot hide behind edited working files."""
from pathlib import Path
import io
import re
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
DENIED = {'.apk', '.aab', '.apks', '.dex', '.so', '.a', '.o', '.class', '.jar', '.zip', '.gz', '.7z', '.tar',
          '.png', '.jpg', '.jpeg', '.webp', '.gif', '.ico', '.pvr', '.stg-scene', '.ppm', '.mp4', '.data',
          '.idsig', '.jks', '.keystore', '.pem', '.key', '.rsa', '.dsa', '.ec'}
BASENAMES = {'engine_bytes.hpp', 'original-preferences.xml', 'original-screen-timeout.txt', '.env'}


def check_entry(name: str, raw: bytes) -> list[str]:
    path = Path(name)
    errors = []
    if path.suffix.lower() in DENIED or path.name in BASENAMES or path.name.startswith('.env.'):
        errors.append(f'{name}: prohibited artifact type')
    try:
        text = raw.decode('utf-8')
    except UnicodeDecodeError:
        return errors + [f'{name}: not UTF-8 text']
    if b'\0' in raw:
        errors.append(f'{name}: binary/NUL content')
    if re.search(r'-----BEGIN (?:RSA |EC |OPENSSH )?PRIVATE KEY-----', text):
        errors.append(f'{name}: private key material')
    if re.search(r'\b(?:gh[pousr]_[A-Za-z0-9]{30,}|github_pat_[A-Za-z0-9_]{40,})\b', text):
        errors.append(f'{name}: possible GitHub credential')
    return errors


def main() -> int:
    listing = subprocess.check_output(['git', 'ls-files', '--stage', '-z'], cwd=ROOT)
    entries = []
    errors = []
    for item in listing.split(b'\0'):
        if not item:
            continue
        metadata, raw_name = item.split(b'\t', 1)
        mode, oid, stage = metadata.split()
        name = raw_name.decode('utf-8')
        if stage != b'0' or mode not in (b'100644', b'100755'):
            errors.append(f'{name}: unsupported/unmerged Git entry')
        entries.append((name, oid))
    if not entries:
        print('No indexed files; stage the intended source before running this check.', file=sys.stderr)
        return 1
    # One batch reads the actual staged/committed blobs, not possibly different working copies.
    data = subprocess.check_output(['git', 'cat-file', '--batch'], cwd=ROOT,
                                   input=b'\n'.join(oid for _, oid in entries) + b'\n')
    stream = io.BytesIO(data)
    for name, expected_oid in entries:
        oid, kind, size = stream.readline().split()
        if oid != expected_oid or kind != b'blob':
            errors.append(f'{name}: unexpected Git object')
        raw = stream.read(int(size))
        if stream.read(1) != b'\n':
            raise RuntimeError('Invalid git cat-file batch response')
        errors.extend(check_entry(name, raw))
    if errors:
        print('\n'.join(errors), file=sys.stderr)
        return 1
    print(f'PASS: {len(entries)} indexed files are source/text; no prohibited artifacts found.')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
