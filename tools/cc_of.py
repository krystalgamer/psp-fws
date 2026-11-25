#!/usr/bin/env python3
"""Compiler and options for one C file and firmware version.

    tools/cc_of.py FILE FW_VERSION   ->   "<compiler> <cflags>"

The file header names them; entries with a version list override the default
for those versions (FW numbers, ranges inclusive):

    /* compiler: 1.7.1 */                    default (1.7.1 if absent)
    /* compiler[100-152]: 1.5.1-sony */      versions 1.00 to 1.52
    /* cflags: -O2 -frename-registers */      default (-O2 if absent)
    /* cflags[100,150]: -Os */
"""
import re
import sys
from pathlib import Path

FLAGS = r"-O[0-3s](?: -[fm][\w-]+)*"


def _pick(text, key, value_re, ver, default):
    best = default
    for m in re.finditer(rf"/\* {key}(?:\[([0-9,\- ]+)\])?: ({value_re}) \*/", text):
        if m[1] is None:
            best = m[2] if best is default else best
            continue
        for part in m[1].replace(" ", "").split(","):
            lo, _, hi = part.partition("-")
            if int(lo) <= ver <= int(hi or lo):
                return m[2]
    return best


def setting(text, ver):
    ver = int(re.match(r"\d+", str(ver))[0]) if ver is not None else None
    if ver is None:
        m = re.search(r"/\* compiler: ([\w.\-]+) \*/", text)
        f = re.search(rf"/\* cflags: ({FLAGS}) \*/", text)
        return (m[1] if m else "1.7.1"), (f[1] if f else "-O2")
    return _pick(text, "compiler", r"[\w.\-]+", ver, "1.7.1"), _pick(text, "cflags", FLAGS, ver, "-O2")


if __name__ == "__main__":
    c, f = setting(Path(sys.argv[1]).read_text(), sys.argv[2])
    print(c, f)
