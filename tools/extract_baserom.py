#!/usr/bin/env python3
"""Extract a single firmware module from inputs/fws.zip into tmp/baserom/."""
import argparse
import hashlib
import sys
import zipfile
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("version", help="firmware version directory, e.g. 360")
    ap.add_argument("module", help="module path relative to F0, e.g. kd/mcctrl.prx")
    ap.add_argument("--zip", default=ROOT / "inputs" / "fws.zip", type=Path)
    ap.add_argument("--out", default=ROOT / "tmp" / "baserom", type=Path)
    args = ap.parse_args()

    member = f"fws/{args.version}/F0/{args.module}"
    dest = args.out / args.version / Path(args.module).name
    dest.parent.mkdir(parents=True, exist_ok=True)

    with zipfile.ZipFile(args.zip) as z:
        data = z.read(member)

    expected = ROOT / "config" / args.version / (Path(args.module).stem + ".sha1")
    sha1 = hashlib.sha1(data).hexdigest()
    if expected.exists() and expected.read_text().split()[0] != sha1:
        sys.exit(f"sha1 mismatch for {member}: {sha1}")

    dest.write_bytes(data)
    print(f"{dest.relative_to(ROOT)} {sha1}")


if __name__ == "__main__":
    main()
