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
import os
import re
import struct
import subprocess
import sys
import tempfile
from pathlib import Path

from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection

sys.path.insert(0, str(Path(__file__).resolve().parent))
import fwblocks as FB  # noqa: E402
import protos  # noqa: E402

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
        Module.VERSION = ver
        from srcdir import src_dir
        from srcdir import sharing_versions
        self.srcdir = src_dir(ver, mod)
        # the source is shared with other firmware versions: only edit code
        # compiled for this one (tools/fwblocks.py)
        self.fwvers = sorted({FB.fwnum(x) for x in sharing_versions(ver, mod)})
        self.shared = len(self.fwvers) > 1
        self.src = self.srcdir / f"{mod}.c"
        self.decls_h = self.srcdir / f"{mod}_decls.h"
        self.store_path = self.srcdir / f"{mod}_decls.json"
        self.store = json.loads(self.store_path.read_text()) if self.store_path.exists() else {"funcs": {}, "vars": {}}
        self.base = (ROOT / "tmp/baserom" / ver / f"{mod}.prx").read_bytes()
        elf = ELFFile(open(ROOT / "tmp/baserom" / ver / f"{mod}.prx", "rb"))
        self.text_off = elf.get_segment(0)["p_offset"]
        self.relocs = {}
        for line in (ROOT / "tmp/build" / ver / f"reloc_addrs.{mod}.txt").read_text().splitlines():
            m = re.match(r"rom:(0[xX][0-9A-Fa-f]+) reloc:MIPS_(\w+)", line)
            if m:
                self.relocs[int(m[1], 16)] = "16" if m[2] in ("HI16", "LO16") else m[2]
        self.funcs = self._func_ranges()
        # A module may be split into several translation units (src/<mod>/*.c),
        # each with its own `compiler:`/`cflags:` header comment.
        self.files = [self.src] + sorted(f for f in self.srcdir.glob("*.c") if f != self.src)
        self.compiler, self.setting = self.file_setting(self.src)
        self.stats = {}
        self.scores = {}
        self.setscores = {}  # name -> {setting: best score}, for version_flags without exact matches
        # Functions already defined in the source fix their own prototypes.
        for f in self.files:
            if f.exists():
                for m in re.finditer(r"^((?!static)[\w \*]+?\b(\w+)\([^;{]*\))\s*\{", f.read_text(), re.M):
                    if m[2] not in self.store["funcs"] and not m[2].startswith("__"):
                        self.store["funcs"][m[2]] = m[1].strip() + ";"

    VERSION = None  # firmware version the module is built for (per-version compiler headers)

    @staticmethod
    def file_setting(path):
        import cc_of
        text = path.read_text() if path.exists() else ""
        compiler, flags = cc_of.setting(text, Module.VERSION, path.parent.name)
        return compiler, f"{compiler} {flags}"

    def all_text(self):
        return "\n".join(f.read_text() for f in self.files if f.exists())

    def file_of(self, name):
        for f in self.files:
            t = f.read_text()
            if f", {name});" in t or (f"{name}(" in t and re.search(rf"^[^\n;]*\b{name}\([^;{{]*\)\s*{{$", t, re.M)):
                return f
        return self.src

    def defined_elsewhere(self, name):
        """A shared source still defines `name` in C (for another version)."""
        import fwmodel as FM
        return self.shared and any(e.kind == "cfunc" and e.name == name
                                   for f in self.files if f.exists()
                                   for e in FM.parse_ro(f.read_text(), self.fwvers))

    def revert_def(self, f, name):
        """Put INCLUDE_ASM back for the C definition of `name` (this version's, if shared)."""
        text = f.read_text()
        inc = f'INCLUDE_ASM("{self.folder(f)}", {name});\n'
        if self.shared:
            f.write_text(FB.put_asm(text, self.ver, self.fwvers, name, self.folder(f)))
            return
        m = re.search(rf"^[^\n;]*\b{name}\([^;{{]*\)\s*{{\n.*?^}}\n", text, re.M | re.S)
        if m:
            f.write_text(text.replace(m.group(0), inc, 1))

    def folder(self, path):
        return f"nonmatchings/{path.stem}"

    def _func_ranges(self):
        asm = (ROOT / "tmp/asm" / self.ver / self.mod / "nonmatchings")
        out = {}
        for p in asm.glob("*/*.s"):
            t = p.read_text()
            if f"glabel {p.stem}" not in t or f"endlabel {p.stem}" not in t:
                continue
            t = t[t.index(f"glabel {p.stem}"):t.index(f"endlabel {p.stem}")]
            m = re.search(r"/\* ([0-9A-F]+) ([0-9A-F]+) [0-9A-F]{8} \*/", t)
            ends = re.findall(r"/\* ([0-9A-F]+) [0-9A-F]+ [0-9A-F]{8} \*/", t)
            if m:
                out[p.stem] = (int(m[1], 16), int(ends[-1], 16) + 4, p)
        return out

    def c_range(self, name):
        """(rom, end) of a function that is already C, from the matching build's symbol table."""
        elfp = ROOT / "tmp/build" / self.ver / f"{self.mod}.elf"
        if not elfp.exists():
            return None
        symtab = ELFFile(open(elfp, "rb")).get_section_by_name(".symtab")
        for sym in symtab.iter_symbols():
            if sym.name == name and sym["st_info"]["type"] == "STT_FUNC" and sym["st_size"]:
                return self.text_off + sym["st_value"], self.text_off + sym["st_value"] + sym["st_size"]
        return None

    def target_words(self, name):
        if name not in self.funcs:
            r = self.c_range(name)
            if r is None:
                raise KeyError(f"{name}: no asm and not in tmp/build/{self.ver}/{self.mod}.elf")
            self.funcs[name] = (*r, None)
        rom, end, _ = self.funcs[name]
        words = struct.unpack_from(f"<{(end - rom) // 4}I", self.base, rom)
        out = []
        for i, w in enumerate(words):
            kind = self.relocs.get(rom + 4 * i)
            if kind is None and w >> 26 in (2, 3):
                kind = "26"
            out.append(mask(w, kind))
        return out

    def header(self, extra=""):
        """C context for m2c and test compiles: struct types, globals, prototypes."""
        import structify
        cxx = any("/* lang: c++ */" in f.read_text() for f in self.srcdir.glob("*.c"))
        structify.SRC[self.mod] = self.srcdir
        body = "\n".join(structify.decls_body(self.mod, self.store, cxx)) + "\n"
        return '#include "common.h"\n#include "k1.h"\n#include "m2c_macros.h"\n' + body + extra

    def write_decls(self):
        import structify
        structify.SRC[self.mod] = self.srcdir
        structify.write_decls(self.mod, self.store)


# 1.3.1 and 1.7.1 have never differed, so only the module's compiler is tried.
# -frename-registers (also implied by -O3) reproduces the original register
# choice in many functions (e.g. `lui $3; ori $2,$3,...` for constants).
OPTS = ("-O2", "-O1", "-Os", "-O0", "-O3", "-O2 -frename-registers", "-Os -frename-registers",
        "-O1 -frename-registers")


def compile_words(c_text, compiler="1.7.1", opt="-O2"):
    with tempfile.TemporaryDirectory() as td:
        c, s, o = Path(td) / "f.c", Path(td) / "f.s", Path(td) / "f.o"
        cxx = "/* lang: c++ */" in c_text
        pre = subprocess.run(["cpp", "-P", "-undef", "-nostdinc", f"-I{ROOT/'include'}"] + (["-D__cplusplus=1"] if cxx else []) + ["-"],
                             input=c_text, capture_output=True, text=True)
        if pre.returncode:
            return None, pre.stderr
        c.write_text(pre.stdout)
        cc, extra = (f"cc1plus-{compiler}", ["-fno-exceptions", "-fno-rtti", "-fpermissive"]) if cxx else (f"cc1-{compiler}", [])
        r = subprocess.run([str(TOOLS / cc), *opt.split(), *extra, "-G0", "-quiet", str(c), "-o", str(s)],
                           capture_output=True, text=True)
        if r.returncode or "warning: implicit" in r.stderr:
            return None, r.stderr
        r = subprocess.run([str(TOOLS / "psp-as-1.3.1"), "-EL", "-G0", "-mulsw", "-o", str(o), str(s)], capture_output=True, text=True)
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


# --fast: only compile with each file's own setting (no per-setting stats)
FAST = False
# AUTO_GOTO=1: accept m2c output with gotos (SCE code uses goto-based error paths)
ALLOW_GOTO = os.environ.get("AUTO_GOTO") == "1"

# The PSP uses the MIPS EABI ($4-$11 and $f12-$f19 for arguments), which m2c
# implements as "mipsee" with $8-$11 named a4-a7.
# Both are tried (EABI first); M2C_TARGET restricts to one.
M2C_TARGETS = [os.environ["M2C_TARGET"]] if os.environ.get("M2C_TARGET") else ["mipsee-gcc-c", "mips-gcc-c"]
EABI = ABI[:8] + ["a4", "a5", "a6", "a7"] + ABI[12:]


# Instructions split.py had to emit as raw words for modern GAS but m2c understands
# (division-by-zero `break 7`, unaligned loads/stores, sync).
UNWRAP = re.compile(r"\.word\s+0x[0-9A-Fa-f]{8}\s*#\s*((?:break|teq|tne|sync|lwl|lwr|swl|swr)\b[^\n]*)$", re.M)


K1_WRITE = re.compile(r"^(\s*/\*[^*]*\*/\s+)(?!s[bhw]\b|sw[lr]\b|b\w*\b|j\w*\b|mt\w*\b)\w[\w.]*\s+\$k1\b", re.M)
BRANCH = re.compile(r"^\s*/\*[^*]*\*/\s+(?:b\w*|j\w*)\s", re.M)


def k1_as_global(asm):
    """Show m2c $k1 as the global `k1` (a register variable in real compiles):
    load it at entry and store it after every write. A write in a branch delay
    slot is moved before the branch (with its store), leaving a nop."""
    out = []
    store = ["    lui $at, %hi(k1)", "    sw $k1, %lo(k1)($at)"]
    for line in asm.splitlines():
        if re.match(r"^\s*glabel\s", line) and not any("%lo(k1)" in o for o in out):
            out += [line, "    lui $at, %hi(k1)", "    lw $k1, %lo(k1)($at)"]
            continue
        if K1_WRITE.match(line):
            prev = max((i for i, o in enumerate(out) if o.lstrip().startswith("/*")), default=None)
            if prev is not None and BRANCH.match(out[prev]):
                out[prev:prev] = [line] + store
                out.append("    nop")
                continue
            out += [line] + store
            continue
        out.append(line)
    return "\n".join(out) + "\n"


_NEW_CTX = [0]


def _prune_ctx(cdir, keep=2000):
    """Keep the m2c context cache bounded (each context and its typemap is ~1 MB)."""
    _NEW_CTX[0] += 1
    if _NEW_CTX[0] % 200:
        return
    try:
        files = sorted(cdir.glob("*.c"), key=lambda p: p.stat().st_mtime)
    except FileNotFoundError:
        return
    for p in files[:-keep]:
        for q in (p, p.with_suffix(".c.m2c")):
            try:
                q.unlink()
            except FileNotFoundError:
                pass


def run_m2c(mod, name, ctx, target="mips-gcc-c"):
    names = EABI if target.startswith("mipsee") else ABI
    asm = UNWRAP.sub(lambda m: m[1].strip(), mod.funcs[name][2].read_text())
    asm = re.sub(r"\$(\d+)\b", lambda m: "$" + names[int(m[1])] if int(m[1]) < 32 else m[0], asm)
    if "$k1" in asm:
        asm = k1_as_global(asm)
    ctx = subprocess.run(["cpp", "-P", "-undef", "-nostdinc", "-DM2CTX", f"-I{ROOT/'include'}", "-"],
                         input=ctx, capture_output=True, text=True).stdout
    # the context lives at a path keyed by its content, so m2c's typemap cache
    # (<ctx>.m2c next to it) is reused across functions and runs
    import hashlib
    cdir = ROOT / "tmp/m2c_ctx"
    cdir.mkdir(parents=True, exist_ok=True)
    cpath = cdir / f"{hashlib.sha1(ctx.encode()).hexdigest()}.c"
    if not cpath.exists():
        tmpc = cpath.with_suffix(f".{os.getpid()}.tmp")
        tmpc.write_text(ctx)
        tmpc.replace(cpath)
        _prune_ctx(cdir)
    with tempfile.TemporaryDirectory() as td:
        (Path(td) / "f.s").write_text(asm)
        argv = ["-t", target, "--valid-syntax", "--globals", "used", "--context", str(cpath), str(Path(td) / "f.s")]
        out = m2c_inproc(argv) if not os.environ.get("M2C_SUBPROCESS") else None
        if out is None:
            r = subprocess.run([sys.executable, str(ROOT / "tools/m2c_allegrex.py")] + argv,
                               capture_output=True, text=True, timeout=120)
            out = r.stdout if r.returncode == 0 else ""
    return out if out and "M2C_ERROR" not in out else None


_M2C = {}


class _M2CTimeout(Exception):
    pass


def m2c_inproc(argv, timeout=120):
    """m2c in this process (no interpreter start-up, typemap kept in memory).
    Returns its stdout, "" on failure, or None if it cannot run here."""
    import contextlib
    import io
    import signal
    import threading
    if threading.current_thread() is not threading.main_thread():
        return None
    if not _M2C:
        sys.path.insert(0, str(ROOT / "tools"))
        import importlib.util
        spec = importlib.util.spec_from_file_location("m2c_allegrex_inproc", ROOT / "tools/m2c_allegrex.py")
        mod = importlib.util.module_from_spec(spec)
        spec.loader.exec_module(mod)  # applies the Allegrex patches
        from m2c import main as m2cmain
        _M2C["main"] = m2cmain
        sys.setrecursionlimit(max(sys.getrecursionlimit(), 10000))
    m2cmain = _M2C["main"]

    def alarm(*_):
        raise _M2CTimeout()
    buf = io.StringIO()
    old = signal.signal(signal.SIGALRM, alarm)
    signal.alarm(timeout)
    try:
        with contextlib.redirect_stdout(buf), contextlib.redirect_stderr(io.StringIO()):
            rc = m2cmain.run(m2cmain.parse_flags(argv))
        return buf.getvalue() if rc == 0 else ""
    except _M2CTimeout:
        return ""
    except SystemExit as e:
        return buf.getvalue() if not e.code else ""
    except Exception:  # noqa: BLE001
        return ""
    finally:
        signal.alarm(0)
        signal.signal(signal.SIGALRM, old)


def k1_helpers(body):
    """Rewrite m2c's view of $k1 into the inline-asm helpers of k1.h."""
    body = re.sub(r"(\w+) = k1;\n(\s*)(\w+) = \(u32\) k1 >> 0x10;\n\s*k1 = \3;\n", lambda m: f"{m[1]} = shiftK1();\n", body)
    body = re.sub(r"(\w+) = k1;\n(\s*)k1 = \(u32\) (?:k1|\1) >> 0x10;\n", lambda m: f"{m[1]} = shiftK1();\n", body)
    shifted = set(re.findall(r"(\w+) = \(u32\) k1 >> 0x10;", body))
    body = re.sub(r"\b(\w+) & 0x18\b", lambda m: "k1IsUserMode()" if m[1] in shifted | {"k1"} else m[0], body)
    body = re.sub(r"^(\s*)k1 = ([^;]+);$", r"\1setK1(\2);", body, flags=re.M)
    return re.sub(r"\bk1\b", "getK1()", body)


def stack_base_local(out, name):
    """m2c prints the address of a local at sp+0 as bare `sp` and leaves `sp0`
    undeclared; make it a declared local whose address is taken."""
    m = re.search(rf"^[^\n]*\b{name}\(.*\) {{\n", out, re.M)
    if not m:
        return out
    body = out[m.end():]
    if re.search(r"\bsp\b", body) and not re.search(r"^\s+[\w *]+\bsp0;$", body, re.M):
        body = "    void *sp0;\n" + re.sub(r"(\(\w+\) )?\bsp\b", "&sp0", body)
    return out[:m.end()] + body


def join_halves(out):
    """Rejoin 64-bit values m2c splits into _unk0/_unk4 halves (EABI register pairs)."""
    out = re.sub(r"\b(?:M2C_UNK|\?) (\w+)_unk0, (?:M2C_UNK|\?) \1_unk4\b", r"s64 \1", out)
    return re.sub(r"/\* [^*]*\+0x0 \*/ (\w+)_unk0, /\* [^*]*\+0x4 \*/ \1_unk4\b", r"\1", out)


def split_m2c(out, name):
    """Return (decl lines, function text)."""
    m = re.search(rf"^[^\n]*\b{name}\(.*\) {{$", out, re.M)
    if not m:
        return None, None
    return [l for l in out[:m.start()].splitlines() if l.strip()], out[m.start():].rstrip() + "\n"


STORE = re.compile(r"^(\s+)(M2C_FIELD\([^;]*\) = [^;=]+;|\w+ = [^;=]+;)$")


def store_runs(body):
    """Runs of consecutive simple assignments: [(start line, end line)]."""
    lines = body.split("\n")
    runs, i = [], 0
    while i < len(lines):
        j = i
        while j < len(lines) and STORE.match(lines[j]) and "(" not in lines[j].split("=", 1)[1].replace("M2C_FIELD(", ""):
            j += 1
        if j - i >= 2:
            runs.append((i, j))
        i = max(j, i + 1)
    return lines, runs


def variants(body, limit=24):
    """Source variants: reorder runs of independent assignments; merge
    consecutive stores of the same value into a chained assignment."""
    import itertools
    lines, runs = store_runs(body)
    out = []
    for a, b in runs:
        run = lines[a:b]
        if len(run) <= 4:
            for perm in itertools.permutations(run):
                if list(perm) != run:
                    out.append("\n".join(lines[:a] + list(perm) + lines[b:]))
        else:
            out.append("\n".join(lines[:a] + run[::-1] + lines[b:]))
        vals = [l.split("=", 1)[1].strip() for l in run]
        if len(set(vals)) == 1:
            targets = [l.split("=", 1)[0].strip() for l in run]
            for order in (targets, targets[::-1]):
                ind = STORE.match(run[0])[1]
                out.append("\n".join(lines[:a] + [ind + " = ".join(order) + " = " + vals[0]] + lines[b:]))
    return out[:limit]


def try_variants(text, body, target, setting):
    vs = variants(body)
    # 64-bit returns: m2c types a function s32 when the $v1 half is unused
    m = re.match(r"^(s32|u32|void) (\w+\()", body)
    if m:
        vs += [body.replace(m[0], f"{ty} {m[2]}", 1) for ty in ("s64", "u64")]
    # comparisons computed into a temporary first: `t = a > b; return t == 0;`
    mm = re.search(r"^(\s+)return \((.+?)\) (==|!=) 0;$", body, re.M)
    if mm:
        vs.append(body.replace(mm[0], f"{mm[1]}s32 cmp_tmp = {mm[2]};\n{mm[1]}return cmp_tmp {mm[3]} 0;", 1))
    for v in vs:
        words, _ = compile_words(text.replace(body, v), *setting.split(" ", 1))
        if words == target:
            return v
    return None


def guess_callees(mod, name, target="mips-gcc-c"):
    """Prototypes (SDK or asm-derived) for callees without a known one."""
    out = {}
    for c in sorted(set(re.findall(r"\b(?:jal|j)\s+(\w+)", mod.funcs[name][2].read_text())) - {name}):
        if c not in mod.store["funcs"]:
            p = protos.guess(c, mod.funcs[c][2] if c in mod.funcs else None)
            if p and not target.startswith("mipsee") and c in mod.funcs:
                p = re.sub(r"\((s32(?:, s32){4,})\)", "(s32, s32, s32, s32)", p)  # o32: 4 register args
            if not p and c not in mod.funcs and not os.environ.get("AUTO_NO_PASSTHROUGH"):
                p = passthrough_proto(c, mod.funcs[name][2].read_text())
            if p:
                out[c] = p
    return out


ARG_WRITE = re.compile(r"^\s*/\*[^*]*\*/\s+(?!s[bhw]\b|b\w*\b|j\w*\b)\w[\w.]*\s+\$([4-9]|1[01])\b")


def passthrough_proto(callee, asm):
    """Prototype for an import called with a gap in its argument registers
    (e.g. $a1/$a2 set, $a0 passed through from the caller): m2c would drop the
    unset ones. All s32, as many as the highest argument register written."""
    lines = asm.splitlines()
    top = -1
    gap = False
    for i, l in enumerate(lines):
        if not re.search(rf"\bjal\s+{callee}\b", l):
            continue
        written = set()
        for j in range(i + 1, i - 16, -1):  # delay slot, then back to the previous call/branch/label
            if j < 0 or j >= len(lines):
                break
            t = lines[j]
            if j < i and (re.search(r"\s(jal|jr|b\w*|j)\s", t) or re.match(r"^\s*\.L\w+:", t) or "glabel" in t):
                break
            m = ARG_WRITE.match(t)
            if m:
                written.add(int(m[1]) - 4)
        if written:
            hi = max(written)
            top = max(top, hi)
            gap = gap or len(written) <= hi
    if top < 1 or not gap:
        return None
    return f"s32 {callee}(" + ", ".join(["s32"] * (top + 1)) + ");"


def same_decl(a, b):
    """Declarations equal up to M2C_UNK (a typedef of s32) and whitespace."""
    norm = lambda d: re.sub(r"\s+", " ", re.sub(r"\bM2C_UNK\b", "s32", d)).strip()
    return norm(a) == norm(b)


def try_func(mod, name, header_ctx):
    """Try each m2c target, with the SDK prototype of the function first."""
    own = protos.sdk_protos().get(name) if name not in mod.store["funcs"] else None
    seen = set()
    for target in M2C_TARGETS:
        for ctx in ([header_ctx + own + "\n"] if own else []) + [header_ctx]:
            res = _try_func(mod, name, ctx, target, seen)
            if res:
                return res
    return None


def _try_func(mod, name, header_ctx, target, seen):
    guessed = guess_callees(mod, name, target)
    header_ctx += "\n".join(guessed.values()) + "\n"
    out = run_m2c(mod, name, header_ctx, target)
    if out in seen:
        return None
    seen.add(out)
    if not out:
        return None
    out = join_halves(out)
    out = stack_base_local(out, name)
    # cc1 emits its own divide-by-zero check (bnez + break 7)
    out = re.sub(r"^\s*if \([^()]+ == 0\) \{\n\s*M2C_BREAK\((?:0, )?7\);\n\s*\}\n", "", out, flags=re.M)
    decls, body = split_m2c(out, name)
    if body is not None and name in mod.store.get("dwarf", []) and "{" in body:
        # the original prototype (devkit DWARF) instead of m2c's types
        body = mod.store["funcs"][name][:-1] + " {" + body.split("{", 1)[1]
    if body is not None and re.search(r"\bk1\b", body):
        body = k1_helpers(body)
    # Unknown stack usage can't match; gotos are rejected in favour of
    # structured control flow (those functions are left for manual work).
    bad = r"\b(sp|subroutine_arg\d+|saved_reg_\w+|unksp\w*|k1)\b" if ALLOW_GOTO else \
        r"\b(sp|subroutine_arg\d+|saved_reg_\w+|unksp\w*|goto|k1)\b"
    if body is None or re.search(bad, body):
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
    for k, v in guessed.items():
        if re.search(rf"\b{k}\b", body):
            new_funcs[k] = v
    sig = body.split("{", 1)[0].strip() + ";"
    for k, v in list(new_funcs.items()) + [(name, sig)]:
        if k in mod.store["funcs"] and not same_decl(mod.store["funcs"][k], v):
            # a function may replace its own (stale) prototype only if no C
            # code already calls it under the old one
            if k != name or re.search(rf"^(?!INCLUDE_ASM).*\b{k}\(", mod.all_text(), re.M):
                return None
            # another firmware version defines it in C with the old prototype
            if mod.shared and mod.defined_elsewhere(name):
                return None
    for k, v in new_vars.items():
        if k in mod.store["vars"] and not same_decl(mod.store["vars"][k], v):
            return None
    text = header_ctx + "\n" + "\n".join(new_vars.values()) + "\n" + "\n".join(
        v for k, v in new_funcs.items() if k not in mod.store["funcs"]) + "\n" + body
    target = mod.target_words(name)
    matching = set()
    best = None
    compiler, own_setting = Module.file_setting(mod.file_of(name))
    compilers = os.environ.get("AUTO_COMPILERS", compiler).split()
    settings = [own_setting] if FAST else [f"{c} {o}" for c in compilers for o in OPTS]
    for setting in settings:
        comp, opt = setting.split(" ", 1)
        words, err = compile_words(text, comp, opt)
        if words is None:
            continue
        if words == target:
            matching.add(setting)
        sm = difflib.SequenceMatcher(None, target, words, autojunk=False)
        score = max(len(target), len(words)) - sum(b.size for b in sm.get_matching_blocks())
        best = score if best is None else min(best, score)
        ss = mod.setscores.setdefault(name, {})
        ss[setting] = min(ss.get(setting, score), score)
    mod.stats[name] = sorted(set(mod.stats.get(name, [])) | matching)
    prev = mod.scores.get(name)
    if best is not None and (not prev or prev[0] is None or best < prev[0]):
        mod.scores[name] = (best, len(target))
    elif not prev:
        mod.scores[name] = (best, len(target))
    if own_setting not in matching:
        alt = try_variants(text, body, target, own_setting)
        if alt:
            body = alt
            matching.add(own_setting)
            mod.stats[name] = sorted(set(mod.stats[name]) | {own_setting + " variant"})
    if own_setting not in matching:
        # Kernel code often reads globals through volatile accesses, which keeps
        # the address in a register (lui/addiu, then lw off(reg)).
        vbody = re.sub(r"M2C_FIELD\((&D_\w+), ([\w ]+?) \*, ", r"M2C_VFIELD(\1, \2, ", body)
        if vbody == body:
            return None
        vtext = text.replace(body, vbody)
        words, _ = compile_words(vtext, *own_setting.split(" ", 1))
        if words != target:
            return None
        body = vbody
        mod.stats[name] = sorted(set(mod.stats[name]) | {own_setting + " volatile"})
    return new_funcs, new_vars, sig, body


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("version")
    ap.add_argument("module")
    ap.add_argument("--max-size", type=lambda x: int(x, 0), default=0x200)
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--only")
    ap.add_argument("--grep", help="only functions whose asm matches this regex")
    ap.add_argument("--names", help="file with function names to try (one per line)")
    ap.add_argument("--fast", action="store_true", help="only compile with each file's own setting")
    ap.add_argument("--min-size", type=lambda x: int(x, 0), default=0)
    ap.add_argument("--jobs", type=int, default=1,
                    help="prescreen functions in parallel, then accept matches one by one")
    ap.add_argument("--no-cache", action="store_true", help="retry functions that failed in other versions")
    ap.add_argument("--stats-only", action="store_true",
                    help="only record which settings reproduce each draft (tmp/auto_stats); change nothing")
    ap.add_argument("--verify-only", action="store_true",
                    help="only build and put asm back for C functions that do not match (this version)")
    args = ap.parse_args()
    global FAST
    FAST = args.fast

    mod = Module(args.version, args.module)
    if args.verify_only:
        _verify_functions(mod, args)
        mod.write_decls()
        return
    srcs = {}
    for f in mod.files:
        s = f.read_text()
        if f'#include "{args.module}_decls.h"' not in s:
            s = s.replace('#include "common.h"\n', f'#include "common.h"\n#include "{args.module}_decls.h"\n', 1)
        srcs[f] = s
    if mod.shared:
        owner = {n: f for f, s in srcs.items() for n in FB.asm_names(s, args.version, mod.fwvers)}
    else:
        owner = {m[2]: f for f, s in srcs.items() for m in INC.finditer(s)}
    names = list(owner)
    names = [n for n in names if n in mod.funcs and args.min_size < mod.funcs[n][1] - mod.funcs[n][0] <= args.max_size]
    if args.only:
        names = [n for n in names if n == args.only]
    if args.grep:
        names = [n for n in names if re.search(args.grep, mod.funcs[n][2].read_text(), re.M)]
    if args.names:
        wanted = set(Path(args.names).read_text().split())
        names = [n for n in names if n in wanted]
    if args.limit:
        names = names[:args.limit]
    mod.write_decls()
    matched = 0
    accepted_now = []
    # shared sources: functions whose (normalised) asm already failed in another
    # version of the module are not tried again
    fail_path = ROOT / "tmp/auto_fail" / f"{args.module}.json"
    failed = set(json.loads(fail_path.read_text())) if mod.shared and fail_path.exists() and not args.no_cache else set()

    def asm_key(n):
        import hashlib
        t = re.sub(r"/\*.*?\*/", "", mod.funcs[n][2].read_text())
        t = re.sub(r"\b(?:func|D|jtbl)_[0-9A-F]{8}\b|\.L[0-9A-F]{8}\b", "@", t)
        return hashlib.sha1((t + str(mod.setting)).encode()).hexdigest()
    total = len(names)
    all_names = list(names)
    parallel = args.jobs > 1 and len(names) > args.jobs
    pending = list(names)
    while True:
        names = prescreen(mod, pending, args.jobs, failed, asm_key if mod.shared else None, args.stats_only) \
            if parallel else pending
        before = matched
        before_acc = len(accepted_now)
        for i, name in enumerate(names):
            key = asm_key(name) if mod.shared else None
            if key in failed:
                print(f"[{i+1}/{len(names)}] {name}: - (failed before)", flush=True)
                continue
            header = mod.header()
            try:
                res = try_func(mod, name, header)
            except subprocess.TimeoutExpired:
                res = None
            if args.stats_only:
                print(f"[{i+1}/{len(names)}] {name}: {'match' if res else '-'} {mod.stats.get(name, [])}", flush=True)
                continue
            if not res and key:
                failed.add(key)
                if i % 50 == 0:
                    fail_path.parent.mkdir(exist_ok=True)
                    fail_path.write_text(json.dumps(sorted(failed)))
            if res:
                new_funcs, new_vars, sig, body = res
                mod.store["funcs"].update(new_funcs)
                mod.store["funcs"][name] = sig
                mod.store["vars"].update(new_vars)
                f = owner[name]
                if mod.shared:
                    srcs[f] = FB.put_c(srcs[f], args.version, mod.fwvers, name, body)
                else:
                    srcs[f] = re.sub(rf'^INCLUDE_ASM\("[^"]+", {name}\);\n', lambda _: body, srcs[f], count=1, flags=re.M)
                if re.search(r"\b(shiftK1|k1IsUserMode|getK1|setK1)\(", body) and '#include "k1.h"' not in srcs[f]:
                    srcs[f] = srcs[f].replace('#include "common.h"\n', '#include "common.h"\n#include "k1.h"\n', 1)
                f.write_text(srcs[f])
                mod.write_decls()
                matched += 1
                accepted_now.append(name)
            print(f"[{i+1}/{len(names)}] {name}: {'MATCH' if res else '-'}", flush=True)
        if not parallel or matched == before or args.stats_only:
            break
        # newly accepted prototypes may let earlier failures match: another
        # round for the functions that reference what this round accepted
        new = set(accepted_now[before_acc:])
        pat = re.compile(r"\b(" + "|".join(map(re.escape, new)) + r")\b")
        pending = [n for n in pending if n not in accepted_now and pat.search(mod.funcs[n][2].read_text())]
        if not pending:
            break
    if parallel and mod.shared and not args.stats_only:
        failed.update(asm_key(n) for n in all_names if n not in accepted_now)
    names = [None] * total
    if mod.shared:
        fail_path.parent.mkdir(exist_ok=True)
        fail_path.write_text(json.dumps(sorted(failed)))
    print(f"matched {matched}/{len(names)}")
    stats_path = ROOT / "tmp/auto_stats" / f"{args.version}_{args.module}.json"
    stats_path.parent.mkdir(exist_ok=True)
    stats = {"compiler": mod.setting, "tried": len(names), "matched": matched, "funcs": mod.stats, "scores": mod.scores,
             "setscores": mod.setscores}
    if (args.grep or args.only or args.names) and stats_path.exists():
        old = json.loads(stats_path.read_text())
        old["funcs"].update(mod.stats)
        old["scores"].update(mod.scores)
        old.setdefault("setscores", {}).update(mod.setscores)
        stats = old
    if not FAST:  # keep the per-setting evidence of full runs
        stats_path.write_text(json.dumps(stats))
    if args.stats_only:
        return
    verify_and_revert(mod, args, accepted_now)


_PS = {}


def _prescreen_one(name):
    mod, header = _PS["mod"], _PS["header"]
    try:
        res = try_func(mod, name, header)
    except subprocess.TimeoutExpired:
        res = None
    return name, bool(res), mod.stats.get(name, []), mod.scores.get(name), mod.setscores.get(name, {})


def prescreen(mod, names, jobs, failed, key_of, stats_only):
    """Try every function in parallel against the starting header; only the
    ones that match are tried again (sequentially, against the growing header)."""
    import multiprocessing as mp
    todo = [n for n in names if not (key_of and key_of(n) in failed)]
    _PS["mod"], _PS["header"] = mod, mod.header()
    hits = set()
    with mp.get_context("fork").Pool(jobs) as pool:
        for k, (n, ok, st, sc, ss) in enumerate(pool.imap_unordered(_prescreen_one, todo, chunksize=4)):
            mod.stats[n] = sorted(set(mod.stats.get(n, [])) | set(st))
            for setting, v in ss.items():
                cur = mod.setscores.setdefault(n, {})
                cur[setting] = min(cur.get(setting, v), v)
            if sc is not None:
                mod.scores[n] = sc
            if ok:
                hits.add(n)
            if k % 100 == 0:
                print(f"prescreen {k}/{len(todo)}: {len(hits)} candidates", flush=True)
    print(f"prescreen: {len(hits)}/{len(todo)} candidates", flush=True)
    return [n for n in names if n in hits] if not stats_only else []


def revert(mod, args, names):
    if mod.shared and len(names) > 1:
        byfile = {}
        for name in names:
            byfile.setdefault(mod.file_of(name), []).append(name)
        for f, ns in byfile.items():
            f.write_text(FB.put_asm_many(f.read_text(), mod.ver, mod.fwvers, ns, mod.folder(f)))
        for name in names:
            if not mod.defined_elsewhere(name):
                mod.store["funcs"].pop(name, None)
        mod.write_decls()
        return
    for name in names:
        f = mod.file_of(name)
        mod.revert_def(f, name)
        if not mod.defined_elsewhere(name):
            mod.store["funcs"].pop(name, None)
    mod.write_decls()


def full_build_ok(args):
    r = subprocess.run(["make", f"VERSION={args.version}", f"MODULE={args.module}"], cwd=ROOT, capture_output=True, text=True)
    return ": OK" in r.stdout + r.stderr


def verify_and_revert(mod, args, accepted_now=()):
    if os.environ.get("AUTO_KEEP_BROKEN"):  # debugging: leave the unverified state
        return
    _verify_functions(mod, args)
    if full_build_ok(args):
        return
    src = mod.all_text()
    strings = [n for n in accepted_now if re.search(rf"\b{n}\([^;{{]*\)\s*{{\n(?:(?!^}}).)*\"", src, re.M | re.S)]
    if strings:
        revert(mod, args, strings)
        print(f"reverted {len(strings)} functions with string literals (data layout)")
        if full_build_ok(args):
            return
    rest = [n for n in accepted_now if n not in strings]
    culprits = find_culprits(mod, args, rest)
    if culprits is None:
        revert(mod, args, rest)
        print(f"reverted {len(rest)} more functions (full build mismatch)")
    else:
        print(f"reverted {len(culprits)} functions that change other code: {', '.join(culprits[:20])}")


def find_culprits(mod, args, names, max_builds=80):
    """Accepted functions whose removal makes the full build match, found by
    binary search over prefixes (each found culprit stays reverted); None if
    that fails. Catches e.g. a new prototype changing how existing C compiles."""
    import copy
    texts = {f: f.read_text() for f in mod.files if f.exists()}
    store = copy.deepcopy(mod.store)
    builds = 0

    def state(reverted):
        nonlocal builds
        for f, t in texts.items():
            f.write_text(t)
        mod.store = copy.deepcopy(store)
        if reverted:
            revert(mod, args, list(reverted))
        else:
            mod.write_decls()
        builds += 1
        return full_build_ok(args)
    if not state(names):
        state([])
        return None
    culprits, pool = [], list(names)
    while not state(culprits):
        lo, hi = 0, len(pool)  # reverting culprits + pool[:hi] works
        while hi - lo > 1:
            mid = (lo + hi) // 2
            if state(culprits + pool[:mid]):
                hi = mid
            else:
                lo = mid
            if builds > max_builds:
                state([])
                return None
        culprits.append(pool[hi - 1])
        pool = pool[:hi - 1]
        if not pool and not state(culprits):
            state([])
            return None
    return culprits


def first_displaced(mod, args):
    """Lowest address whose func_/D_ symbol moved in the built ELF, or None."""
    elf = ELFFile(open(ROOT / "tmp/build" / args.version / f"{args.module}.elf", "rb"))
    low = None
    shndx = next(i for i, s in enumerate(elf.iter_sections()) if s.name == f".{args.module}")
    for sym in elf.get_section_by_name(".symtab").iter_symbols():
        m = re.fullmatch(r"(?:func|D)_([0-9A-F]{8})", sym.name)
        if m and sym["st_shndx"] == shndx and int(m[1], 16) != sym["st_value"] and (low is None or int(m[1], 16) < low):
            low = int(m[1], 16)
    return low


def _verify_functions(mod, args, max_rounds=200):
    """Build the whole module and revert accepted C functions that don't match.

    If a C function compiles to a different size in the full build (e.g. a call
    to a function GCC found side-effect free in the same file is dropped), every
    symbol after it moves and everything referencing those symbols differs: revert
    the accepted function just before the first moved symbol and rebuild. Without
    moved symbols, revert the functions whose own bytes differ.
    """
    accepted = sorted(set(mod.store["funcs"]) & set(mod.funcs))
    built_path = ROOT / "tmp/build" / args.version / f"{args.module}.prx"
    for rnd in range(max_rounds):
        built_path.unlink(missing_ok=True)
        r = subprocess.run(["make", f"VERSION={args.version}", f"MODULE={args.module}"], cwd=ROOT,
                           capture_output=True, text=True)
        built = built_path.read_bytes() if built_path.exists() else b""
        src = mod.all_text()
        if built == mod.base:
            print("full build verified")
            return
        if not built:
            # compile/link error: revert the accepted functions it names
            out = r.stdout + r.stderr
            names = [n for n in accepted if re.search(rf"[`']{n}'|\b{n}\b[^\n]*(?:error|undefined)", out)
                     and (FB.has_c(mod.file_of(n).read_text(), args.version, mod.fwvers, n) if mod.shared
                          else f", {n});" not in src)]
            if not names:
                print("build failed outside accepted functions:", out[-500:])
                return
            for name in names:
                mod.revert_def(mod.file_of(name), name)
                if not mod.defined_elsewhere(name):
                    mod.store["funcs"].pop(name, None)
                print(f"reverted {name} (build error)")
            mod.write_decls()
            continue
        if mod.shared:
            live = [n for n in accepted if any(FB.has_c(f.read_text(), args.version, mod.fwvers, n) for f in mod.files if f.exists())]
        else:
            live = [n for n in accepted if f", {n});" not in src]
        moved = first_displaced(mod, args)
        why = "differs in full build"
        text_end = max(e for _, e, _ in mod.funcs.values()) - mod.text_off
        if moved is not None and moved >= text_end:
            # rodata moved: C functions with their own literals/tables are to blame
            names = [n for n in live if re.search(
                rf"^[^\n;]*\b{n}\([^;{{]*\)\s*{{\n(?:(?!^}}).)*(\"|\bswitch\b|\b\d+\.\d*f?\b)", src, re.M | re.S)]
            why = "differs in full build; moves rodata"
            if not names:
                moved = None
        if moved is not None and moved < text_end:
            before = [(mod.funcs[n][0] - mod.text_off, n) for n in live if mod.funcs[n][0] - mod.text_off < moved]
            names = [max(before)[1]] if before else []
            why = "differs in full build; moves later symbols"
        elif moved is None:
            names = [n for n in live if built[mod.funcs[n][0]:mod.funcs[n][1]] != mod.base[mod.funcs[n][0]:mod.funcs[n][1]]]
        if not names:
            print("full build differs outside accepted functions")
            return
        for name in names:
            f = mod.file_of(name)
            mod.revert_def(f, name)
            if not mod.defined_elsewhere(name):
                mod.store["funcs"].pop(name, None)
            print(f"reverted {name} ({why})")
        mod.write_decls()
    print("verification gave up")


if __name__ == "__main__":
    main()
