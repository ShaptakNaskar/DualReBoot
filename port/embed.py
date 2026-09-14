import hashlib
from pathlib import Path
import sys
raw = Path(sys.argv[1]).read_bytes()
if hashlib.sha256(raw).hexdigest() != '0a999e618e846b81da79d8dda68c17e14d1527ba1128a684ac843e9117db1831':
    raise SystemExit("Unexpected original engine: refusing to embed unverified input")
Path(sys.argv[2]).write_text('#pragma once\nstatic const unsigned char engine_bytes[] = {\n' + ',\n'.join(','.join(str(c) for c in raw[i:i+32]) for i in range(0,len(raw),32)) + '\n};\n')
