#!/usr/bin/env python3
"""Read ABI/OS properties from one connected Android device. Does not install anything."""
import argparse
import json
import subprocess


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--serial", help="ADB serial when multiple devices are connected")
    args = parser.parse_args()
    adb = ["adb"] + (["-s", args.serial] if args.serial else [])
    try:
        subprocess.run(adb + ["get-state"], check=True, capture_output=True, text=True)
    except subprocess.CalledProcessError as error:
        parser.exit(1, error.stderr.strip() + "\nConnect and authorize the phone with USB debugging enabled.\n")
    names = ["ro.product.model", "ro.build.version.release", "ro.build.version.sdk",
             "ro.product.cpu.abilist", "ro.product.cpu.abilist32", "ro.product.cpu.abilist64"]
    values = {name: subprocess.check_output(adb + ["shell", "getprop", name], text=True).strip()
              for name in names}
    values["page_size"] = subprocess.check_output(adb + ["shell", "getconf", "PAGESIZE"], text=True).strip()
    print(json.dumps(values, indent=2))
    if values["ro.product.cpu.abilist32"]:
        print("A 32-bit runtime is advertised. Check the installation error before assuming an ARM64 port is required.")
    else:
        print("No 32-bit ABI is advertised. The bundled engine cannot load natively in a 64-bit-only process.")


if __name__ == "__main__":
    main()
