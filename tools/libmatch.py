#!/usr/bin/env python3
"""Identify statically linked open-source library functions in a module.

Compiles upstream sources (tmp/libsrc, not committed) with our cc1/psp-as and
the given flags, then compares each library function's code (relocated fields
masked like tools/auto_decomp.py) with the module's remaining asm functions.

Usage: tools/libmatch.py VERSION MODULE [--opts "-O2" "-Os"] [--libs zlib jpeg png tiff]
Needs a fresh `make split` of the module. Writes tmp/libmatch/<ver>_<mod>.json.
"""
import argparse
import collections
import json
import re
import struct
import subprocess
import sys
import tempfile
from pathlib import Path

from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection
from elftools.elf.sections import SymbolTableSection

sys.path.insert(0, str(Path(__file__).resolve().parent))
import asfix  # noqa: E402
import auto_decomp as ad  # noqa: E402

ROOT = ad.ROOT
LIB = ROOT / "tmp/libsrc"
TC = ROOT / "tmp/toolchains/1.7.1"
SYS_INC = [next((TC / "lib/gcc-lib/psp").glob("*/include")), TC / "psp/include"]

JCONFIG = """#define HAVE_PROTOTYPES
#define HAVE_UNSIGNED_CHAR
#define HAVE_UNSIGNED_SHORT
#define HAVE_STDDEF_H
#define HAVE_STDLIB_H
#undef NEED_BSD_STRINGS
#undef NEED_SYS_TYPES_H
#undef NEED_FAR_POINTERS
#undef NEED_SHORT_EXTERNAL_NAMES
#undef INCOMPLETE_TYPES_BROKEN
"""

TIF_DEFINE = {"HAVE_ASSERT_H", "HAVE_FCNTL_H", "HAVE_LIMITS_H", "HAVE_STRING_H", "HAVE_SYS_TYPES_H",
              "HAVE_UNISTD_H", "HAVE_STDLIB_H", "HAVE_IEEEFP", "CCITT_SUPPORT", "LOGLUV_SUPPORT",
              "LZW_SUPPORT", "MDI_SUPPORT", "NEXT_SUPPORT", "PACKBITS_SUPPORT", "THUNDER_SUPPORT",
              "STRIPCHOP_DEFAULT", "SUBIFD_SUPPORT", "DEFAULT_EXTRASAMPLE_AS_ALPHA",
              "CHECK_JPEG_YCBCR_SUBSAMPLING", "HAVE_STRCASECMP"}
TIF_VALUES = {"HOST_FILLORDER": "FILLORDER_LSB2MSB", "HOST_BIGENDIAN": "0", "SIZEOF_LONG": "4",
              "STRIP_SIZE_DEFAULT": "8192"}


CPP_BASE = ["cpp", "-P", "-undef", "-nostdinc", "-D__psp__", "-D__mips__", "-D__MIPSEL__", "-D__GNUC__=3",
           "-D__GNUC_MINOR__=3", "-D__STDC__", "-D__ELF__", "-D_MIPS_SZINT=32", "-D_MIPS_SZLONG=32",
           "-D_MIPS_SZPTR=32", "-D__SIZE_TYPE__=unsigned int", "-D__PTRDIFF_TYPE__=int",
           "-D__WCHAR_TYPE__=int", "-D__WINT_TYPE__=unsigned int", "-D__CHAR_BIT__=8",
           "-D__INT_MAX__=2147483647", "-D__LONG_MAX__=2147483647L", "-D__SCHAR_MAX__=127",
           "-D__SHRT_MAX__=32767", "-D__LONG_LONG_MAX__=9223372036854775807LL"]


def prepare():
    j = LIB / "jpeg-6b/jconfig.h"
    if not j.exists():
        j.write_text(JCONFIG)
    t = LIB / "tiff-3.8.2/libtiff/tif_config.h"
    if not t.exists():
        out = []
        for line in (LIB / "tiff-3.8.2/libtiff/tif_config.h.in").read_text().splitlines():
            m = re.match(r"#undef (\w+)", line)
            if m and m[1] in TIF_DEFINE:
                line = f"#define {m[1]} 1"
            elif m and m[1] in TIF_VALUES:
                line = f"#define {m[1]} {TIF_VALUES[m[1]]}"
            out.append(line)
        t.write_text("\n".join(out) + "\n")


VERSIONS = {"zlib": "1.2.3", "png": "1.2.10"}


def lib_sources(name):
    zlib = LIB / f"zlib-{VERSIONS['zlib']}"
    if name == "zlib":
        d = zlib
        files = [d / f"{f}.c" for f in ("adler32 compress crc32 deflate gzio infback inffast inflate inftrees "
                                       "trees uncompr zutil").split()]
        return files, [d], []
    if name == "jpeg":
        d = LIB / "jpeg-6b"
        skip = {"cjpeg", "djpeg", "jpegtran", "rdjpgcom", "wrjpgcom", "ckconfig", "ansi2knr", "example",
                "jmemansi", "jmemdos", "jmemmac", "jmemname", "cdjpeg", "rdbmp", "rdgif", "rdppm", "rdrle",
                "rdtarga", "wrbmp", "wrgif", "wrppm", "wrrle", "wrtarga", "rdswitch", "rdcolmap", "transupp"}
        return [f for f in sorted(d.glob("*.c")) if f.stem not in skip], [d], []
    if name == "png":
        d = LIB / f"libpng-{VERSIONS['png']}"
        skip = {"example", "pngtest", "pnggccrd", "pngvcrd"}
        return [f for f in sorted(d.glob("*.c")) if f.stem not in skip], [d, zlib], \
            ["-DPNG_NO_MMX_CODE"]
    if name == "tiff":
        d = LIB / "tiff-3.8.2/libtiff"
        skip = {"tif_win32", "tif_win3", "tif_msdos", "tif_os2", "tif_vms", "tif_atari", "tif_apple",
                "tif_acorn", "mkg3states", "mkspans", "tif_jpeg", "tif_ojpeg", "tif_pixarlog", "tif_zip",
                "mkversion", "tif_fax3sm"}
        return [f for f in sorted(d.glob("*.c")) if f.stem not in skip] + [d / "tif_fax3sm.c"], \
            [d, zlib, LIB / "jpeg-6b"], []
    raise ValueError(name)


def compile_funcs(src, incs, defs, opt, compiler="1.7.1", addrs=None):
    """{function name: masked words} for one source file (addrs: name -> address)."""
    with tempfile.TemporaryDirectory() as td:
        i, s, o = Path(td) / "f.i", Path(td) / "f.s", Path(td) / "f.o"
        cpp = list(CPP_BASE)
        cpp += [f"-I{d}" for d in incs] + [f"-I{d}" for d in SYS_INC] + defs + [str(src)]
        r = subprocess.run(cpp, capture_output=True, text=True)
        if r.returncode:
            return None, r.stderr[-400:]
        i.write_text(r.stdout)
        r = subprocess.run([str(ad.TOOLS / f"cc1-{compiler}"), *opt.split(), "-G0", "-quiet", str(i), "-o", str(s)],
                           capture_output=True, text=True)
        if r.returncode:
            return None, r.stderr[-400:]
        s.write_text(asfix.fix(s.read_text()))
        r = subprocess.run([str(ad.TOOLS / "psp-as-1.3.1"), "-EL", "-G0", "-o", str(o), str(s)],
                           capture_output=True, text=True)
        if r.returncode:
            return None, r.stderr[-400:]
        elf = ELFFile(open(o, "rb"))
        text_idx = next(n for n, sec in enumerate(elf.iter_sections()) if sec.name == ".text")
        text = elf.get_section(text_idx).data()
        kinds = {}
        for sec in elf.iter_sections():
            if isinstance(sec, RelocationSection) and sec.name == ".rel.text":
                for rel in sec.iter_relocations():
                    t = rel["r_info_type"]
                    kinds[rel["r_offset"]] = "26" if t == 4 else "16" if t in (5, 6) else "32"
        out = {}
        for sec in elf.iter_sections():
            if not isinstance(sec, SymbolTableSection):
                continue
            for sym in sec.iter_symbols():
                if sym["st_info"]["type"] != "STT_FUNC" or sym["st_shndx"] != text_idx or not sym["st_size"]:
                    continue
                a, n = sym["st_value"], sym["st_size"]
                if addrs is not None:
                    addrs[sym.name] = a
                words = struct.unpack_from(f"<{n // 4}I", text, a)
                out[sym.name] = tuple(
                    ad.mask(w, kinds.get(a + 4 * k) or ("26" if w >> 26 in (2, 3) else None))
                    for k, w in enumerate(words))
        return out, ""


def compile_funcs_ordered(src, incs, defs, opt):
    """[(name, size in bytes)] in .text order."""
    addrs = {}
    funcs, err = compile_funcs(src, incs, defs, opt, addrs=addrs)
    if funcs is None:
        return []
    return [(n, 4 * len(funcs[n])) for n in sorted(funcs, key=addrs.get)]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("version")
    ap.add_argument("module")
    ap.add_argument("--opts", nargs="+", default=["-O2", "-Os", "-O2 -frename-registers", "-O1"])
    ap.add_argument("--libs", nargs="+", default=["zlib", "jpeg", "png", "tiff"])
    ap.add_argument("--zlib", default=VERSIONS["zlib"])
    ap.add_argument("--png", default=VERSIONS["png"])
    a = ap.parse_args()
    VERSIONS.update(zlib=a.zlib, png=a.png)
    prepare()
    mod = ad.Module(a.version, a.module)
    by_words = collections.defaultdict(list)
    for n in mod.funcs:
        by_words[tuple(mod.target_words(n))].append(n)
    found = {}
    per_opt = collections.Counter()
    for lib in a.libs:
        files, incs, defs = lib_sources(lib)
        for opt in a.opts:
            nfun = 0
            for f in files:
                funcs, err = compile_funcs(f, incs, defs, opt)
                if funcs is None:
                    print(f"  {lib} {f.name} {opt}: compile failed: {err.strip().splitlines()[-1] if err.strip() else ''}",
                          flush=True)
                    continue
                nfun += len(funcs)
                for fn, w in funcs.items():
                    for target in by_words.get(w, []):
                        if len(w) < 4:
                            continue
                        found.setdefault(target, []).append(f"{lib}:{f.name}:{fn}:{opt}")
                        per_opt[f"{lib} {opt}"] += 1
            print(f"{lib} {opt}: {nfun} functions compiled, {per_opt[f'{lib} {opt}']} matches", flush=True)
    outp = ROOT / "tmp/libmatch" / f"{a.version}_{a.module}.json"
    outp.parent.mkdir(exist_ok=True)
    outp.write_text(json.dumps(found, indent=1))
    print(f"{len(found)} module functions identified -> {outp}")


if __name__ == "__main__":
    main()
