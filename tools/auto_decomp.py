#!/usr/bin/env python3
"""Auto-decompile INCLUDE_ASM functions with m2c, keeping only exact matches.

For each candidate function: run m2c (--valid-syntax) with the module's
accepted prototypes as context, compile the output standalone with the
module's compiler, and compare the code against the original with relocated
fields masked. Matches replace the INCLUDE_ASM line; their prototypes and
global declarations go to src/<module>/<module>_decls.h.

Usage: tools/auto_decomp.py <version> <module> [--max-size 0x100] [--limit N] [--only NAME] [--grep REGEX]
"""
import argparse
import difflib
import json
import re
import struct
import subprocess
import sys
import tempfile
from pathlib import Path

from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection

ROOT = Path(__file__).resolve().parent.parent
TOOLS = ROOT / "tmp/toolchains/bin"
ABI = ["zero", "at", "v0", "v1", "a0", "a1", "a2", "a3", "t0", "t1", "t2", "t3", "t4", "t5", "t6", "t7",
       "s0", "s1", "s2", "s3", "s4", "s5", "s6", "s7", "t8", "t9", "k0", "k1", "gp", "sp", "fp", "ra"]
INC = re.compile(r'^INCLUDE_ASM\("([^"]+)", (\w+)\);\n', re.M)


def mask(word, kind):
    if kind == "26":
        return word & 0xFC000000
    if kind == "16":
        return word & 0xFFFF0000
    return word


class Module:
    def __init__(self, ver, mod):
        self.ver, self.mod = ver, mod
        self.src = ROOT / "src" / mod / f"{mod}.c"
        self.decls_h = ROOT / "src" / mod / f"{mod}_decls.h"
        self.store_path = ROOT / "src" / mod / f"{mod}_decls.json"
        self.store = json.loads(self.store_path.read_text()) if self.store_path.exists() else {"funcs": {}, "vars": {}}
        self.base = (ROOT / "tmp/baserom" / ver / f"{mod}.prx").read_bytes()
        elf = ELFFile(open(ROOT / "tmp/baserom" / ver / f"{mod}.prx", "rb"))
        self.text_off = elf.get_segment(0)["p_offset"]
        self.relocs = {}
        for line in (ROOT / "tmp/build" / ver / f"reloc_addrs.{mod}.txt").read_text().splitlines():
            m = re.match(r"rom:(0x[0-9A-Fa-f]+) reloc:MIPS_(\w+)", line)
            if m:
                self.relocs[int(m[1], 16)] = "16" if m[2] in ("HI16", "LO16") else m[2]
        self.funcs = self._func_ranges()
        m = re.search(r"compiler: ([0-9.]+)", self.src.read_text()) if self.src.exists() else None
        self.compiler = m[1] if m else "1.7.1"
        m = re.search(r"cflags: (-O[0-3s])", self.src.read_text()) if self.src.exists() else None
        self.setting = f"{self.compiler} {m[1] if m else '-O2'}"
        self.stats = {}
        self.scores = {}
        # Functions already defined in the source fix their own prototypes.
        if self.src.exists():
            for m in re.finditer(r"^((?!static)[\w \*]+?\b(\w+)\([^;{]*\))\s*\{", self.src.read_text(), re.M):
                if m[2] not in self.store["funcs"] and not m[2].startswith("__"):
                    self.store["funcs"][m[2]] = m[1].strip() + ";"

    def _func_ranges(self):
        asm = (ROOT / "tmp/asm" / self.ver / self.mod / "nonmatchings" / self.mod)
        out = {}
        for p in asm.glob("*.s"):
            t = p.read_text()
            if f"glabel {p.stem}" not in t or f"endlabel {p.stem}" not in t:
                continue
            t = t[t.index(f"glabel {p.stem}"):t.index(f"endlabel {p.stem}")]
            m = re.search(r"/\* ([0-9A-F]+) ([0-9A-F]+) [0-9A-F]{8} \*/", t)
            ends = re.findall(r"/\* ([0-9A-F]+) [0-9A-F]+ [0-9A-F]{8} \*/", t)
            if m:
                out[p.stem] = (int(m[1], 16), int(ends[-1], 16) + 4, p)
        return out

    def target_words(self, name):
        rom, end, _ = self.funcs[name]
        words = struct.unpack_from(f"<{(end - rom) // 4}I", self.base, rom)
        out = []
        for i, w in enumerate(words):
            kind = self.relocs.get(rom + 4 * i)
            if kind is None and w >> 26 in (2, 3):
                kind = "26"
            out.append(mask(w, kind))
        return out

    def write_decls(self):
        self.store_path.write_text(json.dumps(self.store, indent=1, sort_keys=True))
        lines = [f"#ifndef {self.mod.upper()}_DECLS_H", f"#define {self.mod.upper()}_DECLS_H", "",
                 '#include "common.h"', '#include "m2c_macros.h"', ""]
        lines += [self.store["vars"][k] for k in sorted(self.store["vars"])]
        lines.append("")
        lines += [self.store["funcs"][k] for k in sorted(self.store["funcs"])]
        lines += ["", "#endif", ""]
        self.decls_h.write_text("\n".join(lines))


COMPILERS = ("1.7.1", "1.3.1")
OPTS = ("-O2", "-O1", "-Os", "-O0")
SETTINGS = [f"{c} {o}" for c in COMPILERS for o in OPTS]


def compile_words(c_text, compiler="1.7.1", opt="-O2"):
    with tempfile.TemporaryDirectory() as td:
        c, s, o = Path(td) / "f.c", Path(td) / "f.s", Path(td) / "f.o"
        pre = subprocess.run(["cpp", "-P", "-undef", "-nostdinc", f"-I{ROOT/'include'}", "-"],
                             input=c_text, capture_output=True, text=True)
        if pre.returncode:
            return None, pre.stderr
        c.write_text(pre.stdout)
        r = subprocess.run([str(TOOLS / f"cc1-{compiler}"), opt, "-G0", "-quiet", str(c), "-o", str(s)],
                           capture_output=True, text=True)
        if r.returncode or "warning: implicit" in r.stderr:
            return None, r.stderr
        r = subprocess.run([str(TOOLS / "psp-as-1.3.1"), "-EL", "-G0", "-o", str(o), str(s)], capture_output=True, text=True)
        if r.returncode:
            return None, r.stderr
        elf = ELFFile(open(o, "rb"))
        text = elf.get_section_by_name(".text").data()
        kinds = {}
        for sec in elf.iter_sections():
            if isinstance(sec, RelocationSection) and sec.name == ".rel.text":
                for rel in sec.iter_relocations():
                    t = rel["r_info_type"]
                    kinds[rel["r_offset"]] = "26" if t == 4 else "16" if t in (5, 6) else "32"
        words = struct.unpack(f"<{len(text)//4}I", text)
        out = []
        for i, w in enumerate(words):
            k = kinds.get(4 * i)
            if k is None and w >> 26 in (2, 3):
                k = "26"
            out.append(mask(w, k))
        return out, ""


def run_m2c(mod, name, ctx):
    asm = re.sub(r"\$(\d+)\b", lambda m: "$" + ABI[int(m[1])] if int(m[1]) < 32 else m[0], mod.funcs[name][2].read_text())
    ctx = subprocess.run(["cpp", "-P", "-undef", "-nostdinc", "-DM2CTX", f"-I{ROOT/'include'}", "-"],
                         input=ctx, capture_output=True, text=True).stdout
    with tempfile.TemporaryDirectory() as td:
        (Path(td) / "f.s").write_text(asm)
        (Path(td) / "ctx.c").write_text(ctx)
        r = subprocess.run([sys.executable, str(ROOT / "tools/m2c_allegrex.py"), "-t", "mips-gcc-c", "--valid-syntax", "--globals", "used",
                            "--context", str(Path(td) / "ctx.c"), str(Path(td) / "f.s")],
                           capture_output=True, text=True, timeout=120)
    return r.stdout if r.returncode == 0 and "M2C_ERROR" not in r.stdout else None


def split_m2c(out, name):
    """Return (decl lines, function text)."""
    m = re.search(rf"^[^\n]*\b{name}\(.*\) {{$", out, re.M)
    if not m:
        return None, None
    return [l for l in out[:m.start()].splitlines() if l.strip()], out[m.start():].rstrip() + "\n"


def try_func(mod, name, header_ctx):
    out = run_m2c(mod, name, header_ctx)
    if not out:
        return None
    decls, body = split_m2c(out, name)
    # Unknown stack usage can't match; gotos are rejected in favour of
    # structured control flow (those functions are left for manual work).
    if body is None or re.search(r"\b(sp|subroutine_arg\d+|saved_reg_\w+|unksp\w*|goto)\b", body):
        return None
    new_funcs, new_vars = {}, {}
    for d in decls:
        d = re.sub(r"\s*/\*.*\*/\s*$", "", d).strip()
        fm = re.match(r"^(?!extern|static)[\w\s\*]+?\b(\w+)\((.*)\);$", d)
        vm = re.match(r"^(?:extern|static)\s.*?\b(\w+)(\[[^\]]*\])*;$", d)
        if fm:
            new_funcs[fm[1]] = d if d.startswith("extern") else d
        elif vm:
            new_vars[vm[1]] = d if d.startswith("extern") else "extern " + d.split(" ", 1)[1]
        else:
            return None
    sig = body.split("{", 1)[0].strip() + ";"
    for k, v in list(new_funcs.items()) + [(name, sig)]:
        if k in mod.store["funcs"] and mod.store["funcs"][k] != v:
            # a function may replace its own (stale) prototype only if no C
            # code already calls it under the old one
            if k != name or re.search(rf"^(?!INCLUDE_ASM).*\b{k}\(", mod.src.read_text(), re.M):
                return None
    for k, v in new_vars.items():
        if k in mod.store["vars"] and mod.store["vars"][k] != v:
            return None
    text = header_ctx + "\n" + "\n".join(new_vars.values()) + "\n" + "\n".join(
        v for k, v in new_funcs.items() if k not in mod.store["funcs"]) + "\n" + body
    target = mod.target_words(name)
    matching = set()
    best = None
    for setting in SETTINGS:
        comp, opt = setting.split()
        words, err = compile_words(text, comp, opt)
        if words is None:
            continue
        if words == target:
            matching.add(setting)
        sm = difflib.SequenceMatcher(None, target, words, autojunk=False)
        score = max(len(target), len(words)) - sum(b.size for b in sm.get_matching_blocks())
        best = score if best is None else min(best, score)
    mod.stats[name] = sorted(matching)
    mod.scores[name] = (best, len(target))
    if mod.setting not in matching:
        return None
    return new_funcs, new_vars, sig, body


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("version")
    ap.add_argument("module")
    ap.add_argument("--max-size", type=lambda x: int(x, 0), default=0x200)
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--only")
    ap.add_argument("--grep", help="only functions whose asm matches this regex")
    args = ap.parse_args()

    mod = Module(args.version, args.module)
    src = mod.src.read_text()
    if f'#include "{args.module}_decls.h"' not in src:
        src = src.replace('#include "common.h"\n', f'#include "common.h"\n#include "{args.module}_decls.h"\n', 1)
    names = [m[2] for m in INC.finditer(src)]
    names = [n for n in names if n in mod.funcs and mod.funcs[n][1] - mod.funcs[n][0] <= args.max_size]
    if args.only:
        names = [n for n in names if n == args.only]
    if args.grep:
        names = [n for n in names if re.search(args.grep, mod.funcs[n][2].read_text(), re.M)]
    if args.limit:
        names = names[:args.limit]
    mod.write_decls()
    matched = 0
    accepted_now = []
    for i, name in enumerate(names):
        header = f'#include "common.h"\n#include "m2c_macros.h"\n' + "\n".join(mod.store["vars"].values()) + "\n" + "\n".join(mod.store["funcs"].values()) + "\n"
        try:
            res = try_func(mod, name, header)
        except subprocess.TimeoutExpired:
            res = None
        if res:
            new_funcs, new_vars, sig, body = res
            mod.store["funcs"].update(new_funcs)
            mod.store["funcs"][name] = sig
            mod.store["vars"].update(new_vars)
            src = re.sub(rf'^INCLUDE_ASM\("[^"]+", {name}\);\n', lambda _: body, src, count=1, flags=re.M)
            mod.src.write_text(src)
            mod.write_decls()
            matched += 1
            accepted_now.append(name)
        print(f"[{i+1}/{len(names)}] {name}: {'MATCH' if res else '-'}", flush=True)
    print(f"matched {matched}/{len(names)}")
    stats_path = ROOT / "tmp/auto_stats" / f"{args.version}_{args.module}.json"
    stats_path.parent.mkdir(exist_ok=True)
    stats = {"compiler": mod.setting, "tried": len(names), "matched": matched, "funcs": mod.stats, "scores": mod.scores}
    if (args.grep or args.only) and stats_path.exists():
        old = json.loads(stats_path.read_text())
        old["funcs"].update(mod.stats)
        old["scores"].update(mod.scores)
        stats = old
    stats_path.write_text(json.dumps(stats))
    verify_and_revert(mod, args, accepted_now)


def revert(mod, args, names):
    src = mod.src.read_text()
    folder = f"tmp/asm/{args.version}/{args.module}/nonmatchings/{args.module}"
    for name in names:
        m = re.search(rf"^[^\n;]*\b{name}\([^;{{]*\)\s*{{\n.*?^}}\n", src, re.M | re.S)
        if m:
            src = src.replace(m.group(0), f'INCLUDE_ASM("{folder}", {name});\n', 1)
        mod.store["funcs"].pop(name, None)
    mod.src.write_text(src)
    mod.write_decls()


def full_build_ok(args):
    r = subprocess.run(["make", f"VERSION={args.version}", f"MODULE={args.module}"], cwd=ROOT, capture_output=True, text=True)
    return ": OK" in r.stdout + r.stderr


def verify_and_revert(mod, args, accepted_now=()):
    _verify_functions(mod, args)
    if full_build_ok(args):
        return
    src = mod.src.read_text()
    strings = [n for n in accepted_now if re.search(rf"\b{n}\([^;{{]*\)\s*{{\n(?:(?!^}}).)*\"", src, re.M | re.S)]
    if strings:
        revert(mod, args, strings)
        print(f"reverted {len(strings)} functions with string literals (data layout)")
        if full_build_ok(args):
            return
    rest = [n for n in accepted_now if n not in strings]
    revert(mod, args, rest)
    print(f"reverted {len(rest)} more functions (full build mismatch)")


def _verify_functions(mod, args):
    """Build the whole module; revert accepted C functions that don't match in place."""
    accepted = sorted(set(mod.store["funcs"]) & set(mod.funcs))
    while True:
        subprocess.run(["make", f"VERSION={args.version}", f"MODULE={args.module}"], cwd=ROOT, capture_output=True)
        src = mod.src.read_text()
        bad = []
        for name in accepted:
            if f", {name});" in src:
                continue
            r = subprocess.run([sys.executable, "tools/diff.py", name, "--version", args.version,
                                "--module", args.module, "--score"], cwd=ROOT, capture_output=True, text=True)
            if not r.stdout.startswith("score 0 "):
                bad.append(name)
        if not bad:
            print("full build verified")
            return
        for name in bad:
            m = re.search(rf"^[^\n;]*\b{name}\([^;{{]*\)\s*{{\n.*?^}}\n", src, re.M | re.S)
            folder = f"tmp/asm/{args.version}/{args.module}/nonmatchings/{args.module}"
            src = src.replace(m.group(0), f'INCLUDE_ASM("{folder}", {name});\n', 1)
            del mod.store["funcs"][name]
            print(f"reverted {name} (differs in full build)")
        mod.src.write_text(src)
        mod.write_decls()


if __name__ == "__main__":
    main()
