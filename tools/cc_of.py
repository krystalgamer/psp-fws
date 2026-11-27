#!/usr/bin/env python3
"""Compiler and options for one C file and firmware version.

    tools/cc_of.py FILE FW_VERSION         ->   "cc1-<compiler> <cflags>" (cc1plus- for C++)
    tools/cc_of.py FILE FW_VERSION --cpp   ->   extra preprocessor flags

The file header names them; entries with a version list override the default
for those versions (FW numbers, ranges inclusive):

    /* compiler: 1.7.1 */                    default (1.7.1 if absent)
    /* compiler[100-152]: 1.5.1 */      versions 1.00 to 1.52
    /* cflags: -O2 -frename-registers */      default (-O2 if absent)
    /* cflags[100,150]: -Os */

Without either compiler header, a module binary whose .comment names a single
psp-gcc release we have a cc1 for (KNOWN) uses that cc1.
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


ROOT = Path(__file__).resolve().parent.parent
# psp-gcc release named in a binary's .comment -> cc1 we have for it
KNOWN = {"1.3.1": "1.3.1", "1.5.1": "1.5.1", "1.5.1.internal": "1.5.1",
         "1.6.1": "1.6.1", "1.6.1.internal": "1.6.1",
         # psp-gcc 1.8.x generates 1.7.1's code (psp-compiler-ground FINDINGS; 1.8.4 checked
         # against every 1.51/1.52 C file built with 1.7.1: identical)
         "1.7.1": "1.7.1", "1.8.0": "1.7.1", "1.8.0.internal": "1.7.1", "1.8.3": "1.7.1",
         "1.8.3.internal": "1.7.1", "1.8.4": "1.7.1", "1.8.4.internal": "1.7.1"}


def from_comment(mod, ver):
    """cc1 for a module binary built by one psp-gcc release we have, else None."""
    prx = ROOT / "tmp/baserom" / str(ver) / f"{mod}.prx"
    if not mod or not prx.exists():
        return None
    rel = set(re.findall(rb"\+allegrex-[\d.]+-psp-(\d+(?:\.\d+)*(?:\.internal)?)", prx.read_bytes()))
    cc = {KNOWN.get(r.decode()) for r in rel}
    return cc.pop() if len(cc) == 1 and None not in cc else None


def setting(text, ver, mod=None):
    vnum = int(re.match(r"\d+", str(ver))[0]) if ver is not None else None
    if vnum is None:
        m = re.search(r"/\* compiler: ([\w.\-]+) \*/", text)
        f = re.search(rf"/\* cflags: ({FLAGS}) \*/", text)
        return (m[1] if m else "1.7.1"), (f[1] if f else "-O2")
    explicit = re.search(r"/\* compiler: ([\w.\-]+) \*/", text)
    default = explicit[1] if explicit else (from_comment(mod, ver) or "1.7.1")
    return _pick(text, "compiler", r"[\w.\-]+", vnum, default), _pick(text, "cflags", FLAGS, vnum, "-O2")


def is_cxx(text):
    """A `/* lang: c++ */` unit is C++, built by cc1plus."""
    return "/* lang: c++ */" in text


if __name__ == "__main__":
    p = Path(sys.argv[1])
    text = p.read_text()
    if "--cpp" in sys.argv:  # extra preprocessor flags
        print("-D__cplusplus=1" if is_cxx(text) else "")
    else:
        c, f = setting(text, sys.argv[2], p.parent.name)
        # SCE's C++ was built without exceptions (.eh_frame holds only crt's terminator) and RTTI (vtables
        # have a 0 typeinfo slot);
        # -fpermissive only relaxes diagnostics for the decompiled C-style code
        print(("cc1plus-" if is_cxx(text) else "cc1-") + c, f + (" -fno-exceptions -fno-rtti -fpermissive" if is_cxx(text) else ""))
