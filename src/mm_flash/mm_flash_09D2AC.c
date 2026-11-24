#include "common.h"
#include "mm_flash_decls.h"

void func_0009D2AC(struct Unk_vt_func_0009D2AC_arg0 **arg0) {
    (*arg0)->unk8();
}

void func_0009D2D0(struct Unk_func_000884D0_0 *arg0, s32 arg1, s32 arg2) {
    func_000884D0(arg0, arg1, arg2);
}

s32 func_0009D2EC(struct Unk_func_0009D2EC_0 *arg0) {
    return arg0->unkB60;
}

s32 func_0009D2F4(struct Unk_func_0009D2F4_0 *arg0) {
    return arg0->unk40;
}

s32 func_0009D2FC(s32 arg0) {
    return arg0;
}

void func_0009D304(s32 arg0, s32 arg1, s32 arg2) {
    func_00066988(arg0, arg1 & 0xFFFF, arg2 & 0xFFFF);
}

void func_0009D324(s32 arg0, s32 arg1, s32 arg2) {
    func_00066BD0(arg0, arg1 & 0xFFFF, arg2 & 0xFFFF);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09D2AC", func_0009D344);

void func_0009D368(struct Unk_vt_func_0009D368_arg0 **arg0) {
    (*arg0)->unk3C(arg0, func_00079454());
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09D2AC", func_0009D3A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09D2AC", func_0009D420);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09D2AC", func_0009D494);

void func_0009D4FC(void) {
}

s32 func_0009D504(struct Unk_func_0009D504_0 *arg0) {
    return arg0->unk2C;
}

void func_0009D50C(struct Unk_func_0009D50C_0 *arg0) {
    func_00031D5C(arg0->unk1000);
}

void func_0009D528(s32 arg0) {
    func_00059CC0(arg0 + 8, 1);
}

void func_0009D548(s32 arg0) {
    func_00059D2C(arg0 + 8);
}

s32 func_0009D564(s32 arg0) {
    s32 var_v1;
    struct Unk_func_0009D564_temp_a0 *temp_a0;

    temp_a0 = arg0 + 8;
    var_v1 = 0;
    if (temp_a0->unk64 == 0) {
        var_v1 = temp_a0->unk2A0 != 0;
    }
    return var_v1;
}

s32 func_0009D584(struct Unk_func_0009D584_0 *arg0) {
    return arg0->unk54;
}

void func_0009D58C(void) {
    func_00068034();
}

void func_0009D5A8(void) {
    func_00071D88();
}

s32 func_0009D5C4(struct Unk_func_0009D5C4_0 *arg0) {
    return (s32) (arg0->unk4C * 0x64) / (s32) arg0->unk294;
}

s32 func_0009D5EC(struct Unk_func_0009D5EC_0 *arg0, s32 arg1) {
    return arg0->unk2AC >= arg1;
}

void func_0009D5FC(void) {
    func_00071F70();
}

void func_0009D618(void) {
    func_00071FC0();
}

void func_0009D634(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    func_00078BB0(arg0, arg1, arg2, arg3, arg4, arg5 & 0xFFFF, arg6);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09D2AC", func_0009D650);

void func_0009D6EC(void) {
    func_00059D50();
}

s32 func_0009D708(struct Unk_func_0009D708_0 *arg0) {
    return arg0->unkCAC;
}

void func_0009D710(s32 arg0) {
    func_0006D3D0(arg0, 0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09D2AC", func_0009D72C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09D2AC", func_0009D750);

s32 func_0009D890(s32 arg0) {
    s32 var_v1;
    struct Unk_func_0009D890_temp_a0 *temp_a0;

    temp_a0 = arg0 + 8;
    var_v1 = 0;
    if (temp_a0->unk64 == 0) {
        var_v1 = temp_a0->unk2A0 != 0;
    }
    return var_v1;
}

void func_0009D8B0(s32 arg0, s32 arg1) {
    func_00059D98(arg0, arg1, 0);
}

