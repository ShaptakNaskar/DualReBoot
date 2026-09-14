from contextlib import redirect_stderr, redirect_stdout
import io
from pathlib import Path
import subprocess
import sys
import tempfile
import unittest
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'scripts'))
import check_source_only


class SourceOnlyTests(unittest.TestCase):
    def test_binary_encoded_payload_and_key_names_are_rejected(self):
        for name, content in [('file.cpp', b'\0binary'), ('engine_bytes.hpp', b'text'),
                              ('app.apk', b'text'), ('private.jks', b'text')]:
            self.assertTrue(check_source_only.check_entry(name, content))
        self.assertFalse(check_source_only.check_entry('source.cpp', b'int main() { return 0; }\n'))

    def test_staged_binary_cannot_be_hidden_by_clean_working_copy(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            subprocess.run(['git', 'init', '-q', str(root)], check=True)
            source = root / 'source.cpp'
            source.write_bytes(b'staged\0binary')
            subprocess.run(['git', '-C', str(root), 'add', 'source.cpp'], check=True)
            source.write_text('now the working file is text\n')
            with patch.object(check_source_only, 'ROOT', root), redirect_stderr(io.StringIO()), redirect_stdout(io.StringIO()):
                self.assertEqual(check_source_only.main(), 1)
            subprocess.run(['git', '-C', str(root), 'add', 'source.cpp'], check=True)
            with patch.object(check_source_only, 'ROOT', root), redirect_stdout(io.StringIO()):
                self.assertEqual(check_source_only.main(), 0)


if __name__ == '__main__':
    unittest.main()
