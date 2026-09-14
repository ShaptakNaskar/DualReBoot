#!/usr/bin/env python3
"""Package the 64-bit translation runtime with the original wallpaper and assets."""
import argparse
import hashlib
import json
from pathlib import Path
import re
import shutil
import struct
import subprocess
import tempfile
import zipfile

ROOT = Path(__file__).resolve().parents[1]

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--sdk', type=Path, default=Path('/path/to/Android/Sdk'))
    parser.add_argument('--arm64-only', action='store_true')
    parser.add_argument('--ndk-version', default='27.1.12297006')
    args = parser.parse_args()
    sdk = args.sdk / 'build-tools/36.0.0'
    build = ROOT / 'build'
    build.mkdir(exist_ok=True)
    output = ROOT / 'dist'
    output.mkdir(exist_ok=True)
    abis = {'arm64-v8a': ROOT/'build/port-arm64/libdbgengine.so'}
    if not args.arm64_only:
        abis['x86_64'] = ROOT/'build/port-x86_64/libdbgengine.so'
    for abi,path in abis.items():
        data=path.read_bytes()
        if data[:5] != b'\x7fELF\x02' or struct.unpack_from('<H',data,18)[0] != (183 if abi=='arm64-v8a' else 62):
            raise RuntimeError(f'Wrong ELF architecture: {path}')
        symbols=subprocess.check_output(['readelf','--dyn-syms','--wide',str(path)],text=True)
        declarations=json.loads((ROOT/'reports/inventory.json').read_text())['jni_declarations']
        for method in declarations:
            if f"Java_com_dualboot_engine_EngineInterface_{method['name']}" not in symbols:
                raise RuntimeError(f"Missing JNI implementation: {method['name']}")
    with tempfile.TemporaryDirectory(prefix='arm64-apk-',dir=build) as temp:
        stage=Path(temp)/'decoded'
        shutil.copytree(ROOT/'decoded',stage,ignore=shutil.ignore_patterns('build','dist'))
        shutil.rmtree(stage/'lib')
        for abi,path in abis.items():
            target=stage/'lib'/abi/'libdbgengine.so'
            target.parent.mkdir(parents=True)
            shutil.copy2(path,target)
            strip_tool=args.sdk/'ndk'/args.ndk_version/'toolchains/llvm/prebuilt/linux-x86_64/bin/llvm-strip'
            subprocess.run([str(strip_tool),'--strip-unneeded',str(target)],check=True)
        # The new GPU bridge implements the legacy pipeline using GLES 2 shaders.
        renderer=stage/'smali/com/dualboot/c/g.smali'
        render_text=renderer.read_text()
        original_enum='sget-object v6, Lcom/dualboot/c/b;->b:Lcom/dualboot/c/b;'
        if render_text.count(original_enum)!=9:
            raise RuntimeError('Unexpected EGL config selection sites')
        render_text=render_text.replace(original_enum,'sget-object v6, Lcom/dualboot/c/b;->c:Lcom/dualboot/c/b;')
        # EGL_RENDERABLE_TYPE is a bitmask. The old code only recognizes exact
        # values 1 and 4; modern configs advertise several bits (e.g. 0x45).
        branch='if-ne v0, v1, :cond_13'
        if render_text.count(branch)!=1:
            raise RuntimeError('Unexpected EGL context creation branch')
        render_text=render_text.replace(branch,'nop  # Always request EGL_CONTEXT_CLIENT_VERSION=2')
        renderer.write_text(render_text)
        chooser=stage/'smali/com/dualboot/c/a.smali'
        chooser_text=chooser.read_text()
        constructor='.method public constructor <init>(IIIIILcom/dualboot/c/b;)V'
        before,separator,after=chooser_text.partition(constructor)
        if not separator:
            raise RuntimeError('Missing EGL configuration constructor')
        after,count=re.subn(r'(\s+\.locals \d+)',r'\1\n\n    const/16 p1, 0x8\n    const/16 p2, 0x8\n    const/16 p3, 0x8\n    const/16 p4, 0x8',after,count=1)
        if count!=1:raise RuntimeError('Missing EGL configuration registers')
        chooser.write_text(before+separator+after)
        styles=stage/'res/values/styles.xml'
        styles.write_text(styles.read_text().replace('parent="@android:attr/buttonStyleSmall"','parent="@android:style/Widget.Button.Small"'))
        metadata=stage/'apktool.yml'
        text=metadata.read_text().replace('minSdkVersion: 9','minSdkVersion: 24').replace('targetSdkVersion: 19','targetSdkVersion: 24')
        metadata.write_text(text)
        manifest=stage/'AndroidManifest.xml'
        text=manifest.read_text().replace('<application ', '<application android:extractNativeLibs="true" android:debuggable="true" ')
        # Explicit export flags make the existing wallpaper/launcher discoverable.
        text=text.replace('android:name=".BeachService"','android:name=".BeachService" android:exported="true"')
        text=text.replace('android:name=".Main$Activity"','android:name=".Main$Activity" android:exported="true"')
        text=text.replace('android:name=".Main$Settings"','android:name=".Main$Settings" android:exported="true"')
        text=text.replace('android:name=".Main$Dream"','android:name=".Main$Dream" android:permission="android.permission.BIND_DREAM_SERVICE"')
        manifest.write_text(text)
        license_dir=stage/'assets/arm64-runtime'
        license_dir.mkdir()
        shutil.copy2(ROOT/'tools/unicorn/COPYING',license_dir/'UNICORN-COPYING.txt')
        (license_dir/'NOTICE.txt').write_text('Experimental 64-bit runtime using Unicorn 2.1.4.\nThe original ARM32 engine is translated inside a 64-bit process.\nRuntime source and build instructions accompany this APK in port/ and scripts/.\nOriginal app and artwork remain their respective owners\' content.\n')
        unsigned=Path(temp)/'unsigned.apk'
        aligned=Path(temp)/'aligned.apk'
        with (ROOT/'reports/arm64-apk-build.log').open('w') as log:
            subprocess.run(['apktool','b',str(stage),'-o',str(unsigned)],stdout=log,stderr=subprocess.STDOUT,check=True)
        subprocess.run([str(sdk/'zipalign'),'-P','16','-f','4',str(unsigned),str(aligned)],check=True)
        key=build/'keys/beach-local.jks'
        if not key.exists():
            key.parent.mkdir(exist_ok=True)
            subprocess.run(['keytool','-genkeypair','-keystore',str(key),'-storepass','android','-keypass','android','-alias','beach-local','-keyalg','RSA','-keysize','2048','-validity','10000','-dname','CN=Beach local compatibility build','-noprompt'],check=True)
        apk=output/('my-beach-hd-arm64.apk' if args.arm64_only else 'my-beach-hd-64bit.apk')
        subprocess.run([str(sdk/'apksigner'),'sign','--ks',str(key),'--ks-key-alias','beach-local','--ks-pass','pass:android','--key-pass','pass:android','--out',str(apk),str(aligned)],check=True)
        subprocess.run([str(sdk/'apksigner'),'verify','--verbose',str(apk)],check=True)
        subprocess.run([str(sdk/'zipalign'),'-c','-P','16','4',str(apk)],check=True)
        with zipfile.ZipFile(ROOT/'00237-My-Beach-HD-v2-2.apk') as original,zipfile.ZipFile(apk) as result:
            for name in original.namelist():
                if name.startswith('assets/') and not name.endswith('/'):
                    if original.read(name)!=result.read(name):
                        raise RuntimeError(f'Original asset changed: {name}')
            libs=[name for name in result.namelist() if name.startswith('lib/') and name.endswith('.so')]
            assert set(libs)=={f'lib/{abi}/libdbgengine.so' for abi in abis}
        summary={'apk':str(apk.relative_to(ROOT)),'sha256':hashlib.sha256(apk.read_bytes()).hexdigest(),'abis':list(abis),'original_assets_verified':102,'min_sdk':24,'target_sdk':24,'debuggable':True,'implementation':'Unicorn instruction translation in a 64-bit native process'}
        (output/(apk.stem+'.json')).write_text(json.dumps(summary,indent=2)+'\n')
        print(json.dumps(summary,indent=2))

if __name__=='__main__':
    main()
