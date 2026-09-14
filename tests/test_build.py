import hashlib
import io
from pathlib import Path
import struct
import sys
import tempfile
import unittest
import warnings
import xml.etree.ElementTree as ET
import zipfile

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'scripts'))
from build_support import validate_apk
from package_apk import (ANDROID, inspect_elf, patch_color_config,
                         patch_manifest, patch_renderer, patch_sdk_metadata)


def fixture_profile(payload):
    return {'name': 'fixture', 'version_name': '2.2',
            'required_entries': {name: {'bytes': len(data), 'sha256': hashlib.sha256(data).hexdigest()}
                                 for name, data in payload.items()}, 'optional_entries': {}}


class InputValidationTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.path = Path(self.temp.name) / 'My Beach HD with spaces.apk'
        self.payload = {'classes.dex': b'synthetic fixture, not real app bytes', 'assets/example.txt': b'example'}
        self.profile = fixture_profile(self.payload)

    def write(self, entries, compression=zipfile.ZIP_STORED):
        with zipfile.ZipFile(self.path, 'w', compression) as archive:
            for name, data in entries:
                archive.writestr(name, data)

    def test_identical_payload_can_be_repacked_and_resigned(self):
        self.write(list(self.payload.items()) + [('META-INF/CUSTOM.SF', b'fixture signature metadata')])
        first = validate_apk(self.path, self.profile)
        self.write(list(reversed(list(self.payload.items()))) + [('META-INF/OTHER.SF', b'other metadata')], zipfile.ZIP_DEFLATED)
        second = validate_apk(self.path, self.profile)
        self.assertNotEqual(first['input_sha256'], second['input_sha256'])
        self.assertEqual(second['required_entries_verified'], 2)

    def test_changed_code_is_rejected(self):
        altered = dict(self.payload)
        altered['classes.dex'] = b'X' * len(altered['classes.dex'])
        self.write(altered.items())
        with self.assertRaisesRegex(ValueError, 'SHA-256 differs'):
            validate_apk(self.path, self.profile)

    def test_missing_engine_or_other_required_entry_is_rejected(self):
        self.write([('assets/example.txt', b'example')])
        with self.assertRaisesRegex(ValueError, 'Missing required'):
            validate_apk(self.path, self.profile)

    def test_extra_executable_payload_is_rejected(self):
        self.write(list(self.payload.items()) + [('classes2.dex', b'not part of supported app')])
        with self.assertRaisesRegex(ValueError, 'Unexpected payload'):
            validate_apk(self.path, self.profile)

    def test_zip_path_traversal_is_rejected_before_decode(self):
        self.write(list(self.payload.items()) + [('../outside.txt', b'do not extract')])
        with self.assertRaisesRegex(ValueError, 'Unsafe'):
            validate_apk(self.path, self.profile)

    def test_duplicate_entry_is_rejected(self):
        with warnings.catch_warnings():
            warnings.simplefilter('ignore', UserWarning)
            self.write(list(self.payload.items()) + [('classes.dex', self.payload['classes.dex'])])
        with self.assertRaisesRegex(ValueError, 'Duplicate'):
            validate_apk(self.path, self.profile)

    def test_encrypted_or_symlink_entry_is_rejected(self):
        entry = zipfile.ZipInfo('META-INF/link')
        entry.create_system = 3
        entry.external_attr = 0o120777 << 16
        with zipfile.ZipFile(self.path, 'w') as archive:
            for name, data in self.payload.items():
                archive.writestr(name, data)
            archive.writestr(entry, '../outside')
        with self.assertRaisesRegex(ValueError, 'entry type'):
            validate_apk(self.path, self.profile)


class CompatibilityPatchTests(unittest.TestCase):
    def test_actual_reference_renderer_has_exact_patch_sites(self):
        text = (ROOT / 'decoded/smali/com/dualboot/c/g.smali').read_text()
        patched = patch_renderer(text)
        self.assertNotIn('sget-object v6, Lcom/dualboot/c/b;->b:Lcom/dualboot/c/b;', patched)
        self.assertEqual(patched.count('nop  # Explicit EGL_CONTEXT_CLIENT_VERSION=2'), 1)
        self.assertIn('0x3098', patched)  # EGL_CONTEXT_CLIENT_VERSION attribute survives.
        with self.assertRaises(ValueError):
            patch_renderer(patched)

    def test_unknown_renderer_layout_fails_instead_of_partial_patch(self):
        with self.assertRaisesRegex(ValueError, 'nine'):
            patch_renderer('unrecognized smali')

    def test_color_patch_preserves_depth_and_enum_arguments(self):
        original = (ROOT / 'decoded/smali/com/dualboot/c/a.smali').read_text()
        patched = patch_color_config(original)
        for parameter in range(1, 5):
            self.assertIn(f'const/16 p{parameter}, 0x8', patched)
        self.assertNotIn('const/16 p5, 0x8', patched)
        self.assertNotIn('const/16 p6, 0x8', patched)

    def test_sdk_metadata_handles_numeric_and_quoted_values(self):
        for a, b in [('9', '19'), ("'9'", '"19"')]:
            result = patch_sdk_metadata(f'sdkInfo:\n  minSdkVersion: {a}\n  targetSdkVersion: {b}\nversionInfo:\n')
            self.assertIn('minSdkVersion: 24\n  targetSdkVersion: 24\nversionInfo:', result)
        with self.assertRaises(ValueError):
            patch_sdk_metadata('sdkInfo:\n  minSdkVersion: 21\n')

    def test_manifest_preserves_package_and_sets_component_contracts(self):
        with tempfile.TemporaryDirectory() as folder:
            path = Path(folder) / 'AndroidManifest.xml'
            path.write_text((ROOT / 'decoded/AndroidManifest.xml').read_text())
            patch_manifest(path)
            root = ET.parse(path).getroot()
            self.assertEqual(root.get('package'), 'com.dualboot.apps.beach')
            app = root.find('application')
            self.assertEqual(app.get(ANDROID + 'extractNativeLibs'), 'true')
            dream = next(n for n in app if n.get(ANDROID + 'name') == '.Main$Dream')
            self.assertEqual(dream.get(ANDROID + 'permission'), 'android.permission.BIND_DREAM_SERVICE')


class ElfContractTests(unittest.TestCase):
    def elf(self, machine=183, alignment=16384):
        ident = b'\x7fELF\x02\x01\x01' + b'\0' * 9
        header = struct.pack('<16sHHIQQQIHHHHHH', ident, 3, machine, 1, 0, 64, 0, 0, 64, 56, 1, 0, 0, 0)
        return header + struct.pack('<IIQQQQQQ', 1, 5, 0, 0, 0, 120, 120, alignment)

    def test_arm64_and_alignment(self):
        self.assertEqual(inspect_elf(self.elf(), 'arm64-v8a')['load_alignments'], [16384])

    def test_wrong_architecture_and_small_page_alignment_are_rejected(self):
        for data in (self.elf(machine=62), self.elf(alignment=4096), b'not ELF'):
            with self.assertRaises(ValueError):
                inspect_elf(data, 'arm64-v8a')


if __name__ == '__main__':
    unittest.main()
