/* cflags: -Os */
#include "common.h"
#include "mm_flash_decls.h"

void func_0009B194(void *arg0) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x14);
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

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B194", func_0009B6B4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B194", func_0009B6F8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B194", func_0009B73C);

void func_0009B788(void *arg0) {
    s32 temp_s0;

    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        temp_s0 = M2C_FIELD(arg0, s32 *, 8);
        if (temp_s0 != 0) {
            func_00090730(*func_0009F1C0(), temp_s0, 0);
        }
    }
}

