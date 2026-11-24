/* cflags: -Os */
#include "common.h"
#include "mm_flash_decls.h"

void func_0009B194(struct Unk_func_0009B194_0 *arg0) {
    s32 temp_s0;

    temp_s0 = arg0->unk14;
    if (temp_s0 != 0) {
        func_00090730(*func_0009F1C0(), temp_s0, 0);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B194", func_0009B1D4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B194", func_0009B214);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B194", func_0009B23C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B194", func_0009B2D4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B194", func_0009B2EC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B194", func_0009B30C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B194", func_0009B324);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B194", func_0009B380);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B194", func_0009B428);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B194", func_0009B4C0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B194", func_0009B4D8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B194", func_0009B610);

void func_0009B65C(s32 arg0) {
    func_0009B7D4(arg0);
    M2C_FIELD(arg0, s32 *, 4) = 1;
}

void func_0009B688(s32 arg0) {
    func_0009B7D4(arg0);
    M2C_FIELD(arg0, s32 *, 4) = 1;
}

void func_0009B6B4(s32 arg0, s32 arg1, s32 arg2) {
    func_0009B7D4(arg0);
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = arg2;
}

void func_0009B6F8(s32 arg0, s32 arg1, s32 arg2) {
    func_0009B7D4(arg0);
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = arg2;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B194", func_0009B73C);

void func_0009B788(struct Unk_func_0009B788_0 *arg0) {
    s32 temp_s0;

    if (arg0->unk4 != 0) {
        temp_s0 = arg0->unk8;
        if (temp_s0 != 0) {
            func_00090730(*func_0009F1C0(), temp_s0, 0);
        }
    }
}

