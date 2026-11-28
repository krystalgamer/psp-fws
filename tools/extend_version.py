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


def chains(text):
    """[(start, end)] spans of #if ... #endif chains (top level of each nesting) in text."""
    out, stack = [], []
    for m in re.finditer(r"^\s*#\s*(if|ifdef|ifndef|endif)\b.*$", text, re.M):
        if m[1].startswith("if"):
            stack.append(m.start())
        elif stack:
            st = stack.pop()
            out.append((st, m.end()))
    return out


def top_conds(chain):
    """Conditions of the #if/#elif lines at the chain's own nesting level."""
    out, depth = [], 0
    for m in re.finditer(r"^\s*#\s*(if|ifdef|ifndef|elif|else|endif)\b(.*)$", chain, re.M):
        kw = m[1]
        if kw.startswith("if"):
            depth += 1
            if depth == 1:
                out.append(m[2].strip() if kw == "if" else "")
        elif kw == "elif" and depth == 1:
            out.append(m[2].strip())
        elif kw == "endif":
            depth -= 1
    return out


def branch(conds, v):
    return next((i for i, c in enumerate(conds) if FM.evaluate(c, v)), len(conds))


def rewrite(text, ref, new, versions):
    # a condition that names NEW explicitly was written for NEW: leave that whole line alone
    lines = text.split("\n")
    for i, ln in enumerate(lines):
        if re.match(r"^\s*#\s*(?:if|elif)\b", ln) and re.search(rf"FW_VERSION\s*(?:==|!=)\s*{new}\b", ln):
            lines[i] = ln.replace("FW_VERSION", "FW_VERSI\0ON")
    out = _rewrite("\n".join(lines), ref, new, versions)
    return out.replace("FW_VERSI\0ON", "FW_VERSION")


def _rewrite(text, ref, new, versions):
    # a chain whose conditions already tell NEW apart from REF was written for NEW: leave it
    protected = []
    for st, en in chains(text):
        conds = top_conds(text[st:en])
        if not conds or not all("FW_VERSION" in c for c in conds):
            continue
        try:
            # NEW and REF already take different branches (e.g. `#if == 100` / `#elif < 150`): written knowing NEW
            # ... only if the branch NEW takes exists for NEW: some comparison constant lies in (REF, next existing
            # version after REF], i.e. it could not have been written without knowing NEW
            nxt = min([v for v in versions if v > ref and v != new] or [1 << 30])
            consts = [int(n) for c in conds for n in re.findall(r"FW_VERSION\s*(?:==|!=|<=|>=|<|>)\s*(\d+)", c)]
            # only an explicit `== NEW` / `!= NEW` shows the chain was written for NEW (a bound like `< 103`
            # written when the version before NEW was added does not)
            knows_new = any(re.search(rf"FW_VERSION\s*(?:==|!=)\s*{new}\b", c) for c in conds)
            if len(conds) > 1 and knows_new and branch(conds, new) != branch(conds, ref):
                protected.append((st, en))
        except ValueError:
            pass
    keep = lambda pos: any(st <= pos < en for st, en in protected)  # noqa: E731

    def sub(m):
        if keep(m.start()):
            return m[0]
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
    changed, widened = [], []
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
        if n != t and p.suffix == ".h":
            # type definitions / declarations: a widened test may change a layout for NEW; list each one
            for ln, (o, w) in enumerate(zip(t.split("\n"), n.split("\n")), 1):
                if o != w:
                    widened.append(f"{p.name}:{ln}: {o.strip()}  ->  {w.strip()}")
        if n != t:
            changed.append(p.name)
            if not a.dry_run:
                p.write_text(n)
    print(f"{a.module}: {a.new} like {a.ref} in {changed or 'nothing'}")
    if widened:
        print(f"WARNING: {len(widened)} FW_VERSION test(s) in headers now include {a.new} (check that the types/layouts "
              f"really are {a.ref}'s; name {a.new} in the chain where they differ):")
        for w in widened:
            print("  " + w)


if __name__ == "__main__":
    main()
