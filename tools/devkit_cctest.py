#!/usr/bin/env python3
"""Check a cc1 against Sony's compiler: compile the devkit 0.6.0 library sources
(md5, sha1, mt19937, fpu, vfpu; built with psp-1.4.0.internal -O4 -G0) and compare
every function with the shipped objects (relocated words masked).

    tools/devkit_cctest.py tmp/toolchains/bin/cc1-1.7.1 [-O3]

tools/devkit_cc/ holds minimal libc headers for these sources. Results so far:
cc1-1.3.1 287/288, cc1-1.5.1 286/288, cc1-1.6.1 and cc1-1.7.1 285/288
(lwl/lwr: 1.4.0 is -mno-ulsw like 1.3.1/1.5.1).
"""
import io
import re
import struct
import subprocess
import sys
from pathlib import Path

from elftools.elf.elffile import ELFFile
ROOT = Path(__file__).resolve().parents[1]
DK = ROOT / "tmp/devkit/devkit 0 6 0"
sys.path.insert(0, str(ROOT / "tools"))
from dwarf_dump import ar_members
cc1 = sys.argv[1]; opt = sys.argv[2] if len(sys.argv) > 2 else "-O3"
AS = ROOT / "tmp/toolchains/bin/psp-as-1.3.1"

def funcs(obj):
    e = ELFFile(io.BytesIO(obj)); t = e.get_section_by_name(".text")
    if not t: return {}
    rel = e.get_section_by_name(".rel.text")
    rp = {r["r_offset"] for r in rel.iter_relocations()} if rel else set()
    ti = next(i for i, s in enumerate(e.iter_sections()) if s.name == ".text")
    d = t.data(); out = {}
    for s in e.get_section_by_name(".symtab").iter_symbols():
        if s["st_info"]["type"] == "STT_FUNC" and s["st_shndx"] == ti and s["st_size"]:
            o = s["st_value"]
            out[s.name] = tuple(None if o + i in rp else (struct.unpack_from("<I", d, o + i)[0] & (0xFC000000 if struct.unpack_from("<I", d, o + i)[0] >> 26 in (2, 3) else 0xFFFFFFFF))
                                for i in range(0, s["st_size"], 4))
    return out

tot = same = 0
for lib, srcdir in [("libmd5.a", "md5"), ("libsha1.a", "sha1"), ("libmt19937.a", "mt19937"), ("libfpu.a", "fpu"), ("libvfpu.a", "vfpu")]:
    ref = {}
    for name, body in ar_members((DK / "lib" / lib).read_bytes()):
        ref.update(funcs(body))
    for c in sorted((DK / "src" / srcdir).glob("*.c")):
        if c.name == "prxexport.c": continue
        pre = subprocess.run(["cpp", "-P", "-undef", "-nostdinc", "-I", str(DK / "include"), "-I", str(c.parent), "-I", str(ROOT / "tools/devkit_cc"),
                              "-D__GNUC__=3", "-D__psp__", "-D__mips__", "-D_LANGUAGE_C", "-D__STDC_VERSION__=199901L", str(c)],
                             capture_output=True, text=True).stdout
        r = subprocess.run([cc1, opt, "-G0", "-std=iso9899:1999", "-quiet", "-o", "/tmp/devkit_cct.s"], input=pre, capture_output=True, text=True)
        if r.returncode:
            print(f"  {srcdir}/{c.name}: compile error {r.stderr.strip().splitlines()[-1][:100] if r.stderr.strip() else ''}"); continue
        subprocess.run([str(AS), "-EL", "-G0", "-mulsw", "-o", "/tmp/devkit_cct.o", "/tmp/devkit_cct.s"], capture_output=True)
        mine = funcs(Path("/tmp/devkit_cct.o").read_bytes())
        ok = [n for n in mine if n in ref and all(a is None or b is None or a == b for a, b in zip(ref[n], mine[n])) and len(ref[n]) == len(mine[n])]
        both = [n for n in mine if n in ref]
        tot += len(both); same += len(ok)
        print(f"  {srcdir}/{c.name}: {len(ok)}/{len(both)} identical")
print(f"TOTAL {same}/{tot}")

