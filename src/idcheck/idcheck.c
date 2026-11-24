/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "idcheck_decls.h"

INCLUDE_ASM("nonmatchings/idcheck", func_00000000);

INCLUDE_ASM("nonmatchings/idcheck", func_00000190);

INCLUDE_ASM("nonmatchings/idcheck", func_000001E8);

INCLUDE_ASM("nonmatchings/idcheck", func_000003C4);

INCLUDE_ASM("nonmatchings/idcheck", func_00000428);

INCLUDE_ASM("nonmatchings/idcheck", func_000005F8);

void func_000006D0(s32 arg0) {
    func_00000428(arg0, 0);
}

s32 func_000006EC(void) {
    return 0x80020001;
}

s32 func_000006F8(void) {
    return 0x80020001;
}

void func_00000704(void) {
}

s32 func_0000070C(void) {
    return 0x80020001;
}

s32 func_00000718(void) {
    return 0x80020001;
}

s32 func_00000724(void) {
    return 0x80020001;
}

INCLUDE_ASM("nonmatchings/idcheck", func_00000730);

INCLUDE_ASM("nonmatchings/idcheck", func_00000838);

INCLUDE_ASM("nonmatchings/idcheck", func_00000928);

INCLUDE_ASM("nonmatchings/idcheck", func_00000950);

void func_00000978(s32 arg0) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_00000AB8(1, arg0);
    setK1(temp_s0);
}

void func_000009AC(s32 arg0) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_00000AB8(2, arg0);
    setK1(temp_s0);
}

s32 func_000009E0(void) {
    return 0;
}

s32 func_000009E8(void) {
    return 0;
}

s32 func_000009F0(struct Unk_func_000009F0_0 *arg0) {
    return (arg0->unk4 < 3) ? 0 : 0x80010006;
}

s32 func_00000A08(struct Unk_func_00000A08_0 *arg0) {
    return (arg0->unk4 < 3) ? 0 : 0x80010006;
}

INCLUDE_ASM("nonmatchings/idcheck", func_00000A20);

INCLUDE_ASM("nonmatchings/idcheck", func_00000A30);

INCLUDE_RODATA("nonmatchings/idcheck", D_00001188);

INCLUDE_RODATA("nonmatchings/idcheck", D_000011E0);

INCLUDE_RODATA("nonmatchings/idcheck", D_000011EC);

INCLUDE_RODATA("nonmatchings/idcheck", D_00001200);

INCLUDE_ASM("nonmatchings/idcheck", func_00000AB8);

INCLUDE_ASM("nonmatchings/idcheck", func_00000C34);

s32 syslib_D3744BE0(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/idcheck", func_00000D88);

INCLUDE_ASM("nonmatchings/idcheck", func_00000D94);

INCLUDE_ASM("nonmatchings/idcheck", func_00000DA0);

INCLUDE_ASM("nonmatchings/idcheck", func_00000DAC);

INCLUDE_ASM("nonmatchings/idcheck", func_00000DE8);

INCLUDE_ASM("nonmatchings/idcheck", func_00000E24);

INCLUDE_ASM("nonmatchings/idcheck", func_00000E5C);

INCLUDE_ASM("nonmatchings/idcheck", func_00000E94);

INCLUDE_RODATA("nonmatchings/idcheck", D_0000122C);

INCLUDE_RODATA("nonmatchings/idcheck", D_00001234);
