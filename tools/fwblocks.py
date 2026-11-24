"""`#if FW_VERSION` block handling for sources shared by several firmware versions.

Only `#if FW_VERSION == N` / `#if FW_VERSION != N`, `#else` and `#endif` are
understood; code under any other conditional counts as not editable.
"""
import re

COND = re.compile(r"^#if FW_VERSION (==|!=) (\d+)\s*$")
OTHER_IF = re.compile(r"^#\s*if(?:def|ndef)?\b")
INC = re.compile(r'^INCLUDE_ASM\("([^"]+)", (\w+)\);\n', re.M)
DEF = r"^(?!static)[^\n;#]*\b{name}\([^;{{}}]*\)\s*\{{\n.*?^\}}\n"


def fwnum(v):
    return int(re.match(r"\d+", str(v))[0])


def line_states(text, ver):
    """Per line: (active, exclusive) for firmware `ver`. active is None under an
    unknown conditional; exclusive means only this version compiles the line."""
    v = fwnum(ver)
    stack, out = [], []
    for line in text.split("\n"):
        m = COND.match(line)
        if m:
            stack.append([m[1], int(m[2]), False])
            out.append((False, False))
            continue
        if OTHER_IF.match(line):
            stack.append([None, None, False])
            out.append((False, False))
            continue
        if line.startswith("#else"):
            if stack:
                stack[-1][2] = True
            out.append((False, False))
            continue
        if line.startswith("#endif"):
            if stack:
                stack.pop()
            out.append((False, False))
            continue
        active, excl = True, False
        for op, n, in_else in stack:
            if op is None:
                active = None
                break
            eq = (op == "==") != in_else  # effective condition: FW_VERSION == n ?
            ok = (v == n) if eq else (v != n)
            if not ok:
                active = False
            if eq and v == n:
                excl = True
        out.append((active, excl))
    return out


def _state_at(text, states, pos):
    return states[text.count("\n", 0, pos)]


def asm_sites(text, ver):
    """{name: (start, end, exclusive)} of INCLUDE_ASM lines compiled for `ver`."""
    st = line_states(text, ver)
    out = {}
    for m in INC.finditer(text):
        active, excl = _state_at(text, st, m.start())
        if active:
            out[m[2]] = (m.start(), m.end(), excl)
    return out


def def_span(text, ver, name):
    """(start, end) of the C definition of `name` compiled for `ver`, or None."""
    st = line_states(text, ver)
    for m in re.finditer(DEF.format(name=name), text, re.M | re.S):
        if _state_at(text, st, m.start())[0]:
            return m.start(), m.end()
    return None


def simplify(text):
    """`#if FW_VERSION == N / X / #else / X / #endif` -> `X`."""
    return re.sub(r"^#if FW_VERSION [=!]= \d+\n(INCLUDE_ASM\([^\n]+\);\n)#else\n\1#endif\n", r"\1", text, flags=re.M)
