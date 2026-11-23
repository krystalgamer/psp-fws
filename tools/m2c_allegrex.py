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


# The PSP EABI is 32-bit: 64-bit values (long long, soft-float double) take an
# even-aligned pair of integer argument registers, unlike the PS2 EE's 64-bit
# registers that m2c's mipsee arch models.
from m2c.types import AbiArgSlot, ArgLoc, Abi  # noqa: E402
from m2c.asm_instruction import Register  # noqa: E402

E = arch_mips.MipseeArch
INTS = [Register(f"a{i}") for i in range(8)]
FLTS = [Register(f"f{i}") for i in range(12, 20)]


def _eabi_function_abi(self, fn_sig, likely_regs, *, for_call):
    known, cands = [], []
    ii = fi = ind = stack = 0
    if fn_sig.params_known:
        if fn_sig.return_type.is_struct():
            known.append(AbiArgSlot(ArgLoc(None, 0, INTS[0]), Type.ptr(fn_sig.return_type),
                                    name="__return__", comment="return"))
            ii = ind = 1
        for param in fn_sig.params:
            pt = param.type.decay()
            size, _ = pt.get_parameter_size_align_bytes()
            if pt.is_float() and size == 4:
                if fi < 8:
                    known.append(AbiArgSlot(ArgLoc(None, ind, FLTS[fi]), pt, name=param.name))
                    fi += 1
                else:
                    known.append(AbiArgSlot(ArgLoc(stack, ind, None), pt, name=param.name))
                    stack += 4
                ind += 1
            elif size > 4:
                ii += ii % 2
                for k in range(2):
                    nm = f"{param.name}_unk{4 * k:X}" if param.name else None
                    if ii < 8:
                        loc = ArgLoc(None, ind, INTS[ii])
                        ii += 1
                    else:
                        loc = ArgLoc(stack, ind, None)
                        stack += 4
                    known.append(AbiArgSlot(loc, Type.any(), name=nm, comment=f"{pt}+{4 * k:#x}"))
                    ind += 1
            else:
                if ii < 8:
                    known.append(AbiArgSlot(ArgLoc(None, ind, INTS[ii]), pt, name=param.name))
                    ii += 1
                else:
                    known.append(AbiArgSlot(ArgLoc(stack, ind, None), pt, name=param.name))
                    stack += 4
                ind += 1
        if fn_sig.is_variadic:
            for r in INTS[ii:]:
                cands.append(AbiArgSlot(ArgLoc(None, ind, r), Type.intptr()))
                ind += 1
    else:
        cands = self.default_function_abi_candidate_slots()
    valid = {s.loc.reg for s in known if s.loc.reg is not None}
    possible = []
    for slot in cands:
        reg = slot.loc.reg
        if reg is None or reg not in likely_regs:
            continue
        if slot != cands[0]:
            name = reg.register_name
            prev = Register(f"{name[0]}{int(name[1:]) - 1}")
            if prev in self.argument_regs and prev not in valid:
                continue
        valid.add(reg)
        if not likely_regs[reg]:
            continue
        possible.append(slot)
    return Abi(arg_slots=known, possible_slots=possible)


E.function_abi = _eabi_function_abi


if __name__ == "__main__":
    from m2c.main import main

    sys.exit(main())
