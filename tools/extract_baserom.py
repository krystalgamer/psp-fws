#!/usr/bin/env python3
"""Extract a single firmware module from inputs/fws.zip into tmp/baserom/."""
import argparse
import hashlib
import sys
import zipfile
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent


# pre-release firmwares (inputs/pre_release_fws.zip): 1.02 / 1.03, flat kd/ and vsh/module/ directories
# whose files are named flash-flash0-kd-NAME.prx / flash-flash0-vsh-module-NAME.prx (or plain NAME.prx)
PRERELEASE = {"102": "102_arc", "103": "103_arc"}


def prerelease(version, module):
    import re
    with zipfile.ZipFile(ROOT / "inputs" / "pre_release_fws.zip") as z:
        name = Path(module).stem
        hits = [n for n in z.namelist() if n.startswith(PRERELEASE[version] + "/") and n.endswith(".prx")
                and re.sub(r"^flash-flash0-(?:kd|vsh-module)-", "", Path(n).stem) == name]
        if len(hits) != 1:
            sys.exit(f"expected one match for {module} in {version}, got {hits}")
        return z.read(hits[0]), f"{PRERELEASE[version]}/{name}.prx"


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("version", help="firmware version directory, e.g. 360")
    ap.add_argument("module", help="module path relative to F0 (e.g. kd/mcctrl.prx) or just a name (e.g. mcctrl)")
    ap.add_argument("--zip", default=ROOT / "inputs" / "fws.zip", type=Path)
    ap.add_argument("--out", default=ROOT / "tmp" / "baserom", type=Path)
    args = ap.parse_args()

    if args.version in PRERELEASE:
        data, member = prerelease(args.version, args.module)
    else:
        data, member = None, None
    with zipfile.ZipFile(args.zip) as z:
        if data is not None:
            pass
        elif "/" in args.module:
            member = f"fws/{args.version}/F0/{args.module}"
        else:
            prefix, fname = f"fws/{args.version}/F0/", f"/{args.module}.prx"
            hits = [n for n in z.namelist() if n.startswith(prefix) and n.endswith(fname)]
            if len(hits) != 1:
                sys.exit(f"expected one match for {args.module} in {args.version}, got {hits}")
            member = hits[0]
        if data is None:
            data = z.read(member)
    dest = args.out / args.version / Path(member).name
    dest.parent.mkdir(parents=True, exist_ok=True)

    expected = ROOT / "config" / args.version / (Path(args.module).stem + ".sha1")
    sha1 = hashlib.sha1(data).hexdigest()
    if expected.exists() and expected.read_text().split()[0] != sha1:
        sys.exit(f"sha1 mismatch for {member}: {sha1}")

    dest.write_bytes(data)
    print(f"{dest.relative_to(ROOT)} {sha1}")


if __name__ == "__main__":
    main()
