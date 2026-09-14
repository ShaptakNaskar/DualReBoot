#!/usr/bin/env python3
"""Build and sign the ARM64 wallpaper; optionally also build the x86_64 test variant."""
import argparse
import os
from pathlib import Path
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
UNICORN_COMMIT = '8028ec436f2d9376525352dd38ed9ed6b9f6be10'

def run(*args):
    subprocess.run([str(a) for a in args], cwd=ROOT, check=True)

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--sdk', type=Path, default=Path.home()/'Android/Sdk')
    parser.add_argument('--ndk-version', default='27.1.12297006')
    parser.add_argument('--with-x86-64', action='store_true')
    parser.add_argument('--jobs', type=int, default=4)
    args = parser.parse_args()
    ndk=args.sdk/'ndk'/args.ndk_version
    if not (ndk/'build/cmake/android.toolchain.cmake').is_file():
        parser.error(f'Install Android NDK {args.ndk_version} under {args.sdk}')
    dependency=ROOT/'tools/unicorn'
    if not dependency.exists():
        dependency.parent.mkdir(exist_ok=True)
        run('git','clone','--depth','1','--branch','2.1.4','https://github.com/unicorn-engine/unicorn.git',dependency)
    if (dependency/'.git').exists():
        revision=subprocess.check_output(['git','-C',str(dependency),'rev-parse','HEAD'],text=True).strip()
        if revision!=UNICORN_COMMIT:
            parser.error('Unicorn checkout does not match the verified 2.1.4 commit')
    elif (dependency/'BEACH_PINNED_COMMIT').read_text().strip()!=UNICORN_COMMIT:
        parser.error('Unicorn source bundle has an unexpected revision')
    targets=[('arm64','arm64-v8a')]
    if args.with_x86_64:targets.append(('x86_64','x86_64'))
    for directory,abi in targets:
        build=ROOT/'build'/f'port-{directory}'
        run('cmake','-S',ROOT/'port','-B',build,'-G','Ninja',
            f'-DCMAKE_TOOLCHAIN_FILE={ndk}/build/cmake/android.toolchain.cmake',
            f'-DANDROID_ABI={abi}','-DANDROID_PLATFORM=android-24',
            '-DANDROID_STL=c++_static','-DCMAKE_BUILD_TYPE=Release')
        run('cmake','--build',build,'-j',args.jobs)
    command=[sys.executable,ROOT/'scripts/build_arm64_apk.py','--sdk',args.sdk,'--ndk-version',args.ndk_version]
    if not args.with_x86_64:command.append('--arm64-only')
    run(*command)

if __name__=='__main__':main()
