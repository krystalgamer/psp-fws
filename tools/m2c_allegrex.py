#!/usr/bin/env python3
"""Run m2c with support for Allegrex-specific integer instructions.

They are emitted as the psp-gcc `__builtin_allegrex_*` intrinsics, which both
cc1 1.3.1 and 1.7.1 accept and compile back to the same single instruction.
Usage is identical to `python -m m2c.main`.
"""
import os
import sys

# tools/m2c.py would shadow the m2c package
sys.path = [p for p in sys.path if os.path.abspath(p or ".") != os.path.dirname(os.path.abspath(__file__))]

from m2c import arch_mips
from m2c.evaluate import fn_op
from m2c.types import Type

A = arch_mips.MipsArch


def _b(name, *args):
    return fn_op(f"__builtin_allegrex_{name}", list(args), Type.intish())


A.instrs_destination_first.update({
    "max": lambda a: _b("max", a.reg(1), a.reg(2)),
    "min": lambda a: _b("min", a.reg(1), a.reg(2)),
    "clz": lambda a: _b("clz", a.reg(1)),
    "clo": lambda a: _b("clo", a.reg(1)),
    "wsbh": lambda a: _b("wsbh", a.reg(1)),
    "wsbw": lambda a: _b("wsbw", a.reg(1)),
    "bitrev": lambda a: _b("bitrev", a.reg(1)),
    "rotr": lambda a: _b("rotr", a.reg(1), a.full_imm(2)),
    "ror": lambda a: _b("rotr", a.reg(1), a.full_imm(2)),
    "rotrv": lambda a: _b("rotr", a.reg(1), a.reg(2)),
    "rorv": lambda a: _b("rotr", a.reg(1), a.reg(2)),
    "ext": lambda a: _b("ext", a.reg(1), a.full_imm(2), a.full_imm(3)),
    "ins": lambda a: _b("ins", a.reg(0), a.reg(1), a.full_imm(2), a.full_imm(3)),
})

# `ins` also reads its destination register.
_parse = A.parse.__func__


def _parse_ins(cls, mnemonic, args, meta):
    instr = _parse(cls, mnemonic, args, meta)
    if mnemonic == "ins" and args[0] not in instr.inputs:
        instr.inputs.append(args[0])
    return instr


A.parse = classmethod(_parse_ins)

if __name__ == "__main__":
    from m2c.main import main

    sys.exit(main())
