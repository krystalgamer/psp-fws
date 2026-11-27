#!/usr/bin/env python3
"""Make a new firmware version evaluate like an existing one in a module's sources.

    tools/extend_version.py MODULE REF NEW [--dry-run]

Before tools/add_version.py REF NEW MODULE: every `FW_VERSION <op> N` comparison in
the module's source directory (*.c, *.h and the decls store's strings: #if lines,
macro bodies, struct layouts) whose truth for NEW differs from REF is replaced by
the equivalent condition that also holds (or not) for NEW, and NEW is added to the
`cflags[...]` / `compiler[...]` ranges that cover REF. add_version then finds where
NEW really differs. Versions are the module's config versions plus NEW.
"""
import argparse
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import fwmodel as FM  # noqa: E402
from srcdir import src_dir  # noqa: E402

ATOM = re.compile(r"FW_VERSION\s*(==|!=|<=|>=|<|>)\s*(\d+)")
OPS = {"==": lambda a, b: a == b, "!=": lambda a, b: a != b, "<=": lambda a, b: a <= b,
       ">=": lambda a, b: a >= b, "<": lambda a, b: a < b, ">": lambda a, b: a > b}


def fw(v):
    return int(re.match(r"\d+", v)[0])


def rewrite(text, ref, new, versions):
    def sub(m):
        op, n = m[1], int(m[2])
        f = lambda v: OPS[op](v, n)  # noqa: E731
        if f(new) == f(ref):
            return m[0]
        vs = {v for v in versions if v != new and f(v)} | ({new} if f(ref) else set())
        c = FM.condition(vs, versions)
        return c if " " not in c or c.startswith("FW_VERSION") and "||" not in c and "&&" not in c else f"({c})"
    return ATOM.sub(sub, text)


def ranges(text, ref, new):
    """Add NEW to cflags/compiler range lists that cover REF (if no list covers NEW yet)."""
    def covers(spec, v):
        for part in spec.replace(" ", "").split(","):
            lo, _, hi = part.partition("-")
            if int(lo) <= v <= int(hi or lo):
                return True
        return False
    for key in ("cflags", "compiler"):
        specs = re.findall(rf"/\* {key}\[([0-9,\- ]+)\]:", text)
        if any(covers(s, new) for s in specs):
            continue
        for s in specs:
            if covers(s, ref):
                text = text.replace(f"/* {key}[{s}]:", f"/* {key}[{s},{new}]:", 1)
                break
    return text


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("module")
    ap.add_argument("ref")
    ap.add_argument("new")
    ap.add_argument("--dry-run", action="store_true")
    a = ap.parse_args()
    ref, new = fw(a.ref), fw(a.new)
    versions = sorted({fw(p.parent.name) for p in (ROOT / "config").glob(f"*/{a.module}.yaml")} | {new})
    sd = src_dir(a.ref, a.module)
    changed = []
    for p in sorted(sd.iterdir()):
        if p.suffix in (".c", ".h"):
            t = p.read_text()
            n = ranges(rewrite(t, ref, new, versions), ref, new) if p.suffix == ".c" else rewrite(t, ref, new, versions)
        elif p.name.endswith("_decls.json"):
            store = json.loads(p.read_text())
            for sec, d in store.items():
                if isinstance(d, dict):
                    store[sec] = {k: rewrite(v, ref, new, versions) if isinstance(v, str) else v for k, v in d.items()}
            t, n = p.read_text(), json.dumps(store, indent=1, sort_keys=True)
            if json.loads(t) == store:
                n = t
        else:
            continue
        if n != t:
            changed.append(p.name)
            if not a.dry_run:
                p.write_text(n)
    print(f"{a.module}: {a.new} like {a.ref} in {changed or 'nothing'}")


if __name__ == "__main__":
    main()
