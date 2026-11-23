#!/usr/bin/env python3
"""Prototype guesses for callees m2c knows nothing about.

- Imported/exported SCE functions: the SDK headers (tmp/sdk/.../include),
  reduced to basic types (pointers -> void *, 64-bit -> s64, float -> f32).
- Functions with asm in the module: argument count from the EABI argument
  registers ($4-$11) read before being written on the straight-line entry
  path.
"""
import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
SDK_INC = ROOT / "tmp/sdk/usr/local/psp/devkit/include"
CACHE = ROOT / "tmp/sdk_protos.json"

I64 = {"long long", "SceInt64", "SceUInt64", "SceLong64", "SceULong64", "u64", "s64", "unsigned long long",
       "SceKernelSysClock", "SceRtcTick"}
F32 = {"float", "SceFloat", "SceFloat32"}


def basic(t):
    t = re.sub(r"\b(const|volatile|struct|union|enum|extern|static|inline|__inline__|register)\b", "", t).strip()
    if "*" in t or "[" in t:
        return "void *"
    t = " ".join(t.split())
    if t == "void":
        return "void"
    if t in I64:
        return "s64"
    if t in F32:
        return "f32"
    if t == "double":
        return "f64"
    if t.startswith("unsigned") or (t.startswith("SceU") and t != "SceUID") or t in ("SceSize", "u32", "u16", "u8"):
        return "u32"
    return "s32"


def sdk_protos():
    if CACHE.exists():
        return json.loads(CACHE.read_text())
    out = {}
    for h in SDK_INC.rglob("*.h"):
        t = h.read_text(errors="ignore")
        t = re.sub(r"/\*.*?\*/|//[^\n]*", " ", t, flags=re.S)
        t = re.sub(r"^\s*#.*$", " ", t, flags=re.M)
        for m in re.finditer(r"([A-Za-z_][\w \t\*]*?)\b(sce\w+)\s*\(([^;{}()]*)\)\s*;", t):
            ret, name, params = m[1].strip(), m[2], m[3].strip()
            if not ret or ret.split()[-1] in ("return", "typedef") or "typedef" in ret:
                continue
            ps = []
            if params not in ("", "void"):
                for p in params.split(","):
                    p = p.strip()
                    if p == "...":
                        ps.append("...")
                        continue
                    if "[" in p:
                        p = p[:p.index("[")] + "*"
                    if len(p.replace("*", " ").split()) > 1:
                        p = re.sub(r"\b\w+\s*$", "", p)  # drop the parameter name
                    ps.append(basic(p))
            out[name] = f"{basic(ret)} {name}({', '.join(ps) or 'void'});"
    CACHE.write_text(json.dumps(out))
    return out


ARGS = {f"${4 + i}": i for i in range(8)}  # EABI: $a0-$a3, $t0-$t3
READ_ALL = re.compile(r"^(s[bhw]|swc1|sv\.|b|jr$|jalr$|mult|div|madd|msub|mtc1|mthi|mtlo|teq|tne|tge|tlt|mtic)")
INSN = re.compile(r"^\s*/\*[^*]*\*/\s+([a-z0-9.]+)\s*(.*?)\s*(?:#.*)?$", re.M)


def asm_arity(text):
    """Number of argument registers the function reads before writing."""
    seen, read = set(), set()
    for op, ops in INSN.findall(text):
        regs = re.findall(r"\$\d+", ops)
        if op in ("jal", "j", "jr", "jalr", ".word") and op != ".word":
            for r in regs:
                if r in ARGS and r not in seen:
                    read.add(r)
            if op in ("jal", "jalr"):
                break
            if op in ("j", "jr"):
                break
            continue
        if op == ".word" or op.startswith(("v", "lv.")):
            continue
        srcs = regs if READ_ALL.match(op) else regs[1:]
        dsts = [] if READ_ALL.match(op) else regs[:1]
        for r in srcs:
            if r in ARGS and r not in seen:
                read.add(r)
        for r in dsts:
            seen.add(r)
        if op.startswith("b"):
            break
    return sorted(ARGS[r] for r in read)


def arity_params(used):
    """One s32 per argument register up to the highest one read."""
    return ["s32"] * (max(used, default=-1) + 1)


def guess(name, asm_path=None):
    p = sdk_protos().get(name)
    if p:
        return p
    if asm_path and Path(asm_path).exists():
        ps = arity_params(asm_arity(Path(asm_path).read_text()))
        return f"s32 {name}({', '.join(ps) or 'void'});"
    return None


if __name__ == "__main__":
    import sys
    if sys.argv[1].endswith(".s"):
        print(asm_arity(Path(sys.argv[1]).read_text()))
    else:
        print(sdk_protos().get(sys.argv[1]))
