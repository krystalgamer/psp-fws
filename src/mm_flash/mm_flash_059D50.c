/* cflags: -Os */
#include "common.h"
#include "mm_flash_decls.h"

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_059D50", func_00059D50);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_059D50", func_00059D98);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_059D50", func_0005A09C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_059D50", func_0005A280);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_059D50", func_0005A3EC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_059D50", func_0005A558);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_059D50", func_0005A5D4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_059D50", func_0005A674);

void func_0005A7A4(void *arg0) {
    if (arg0 != NULL) {
        func_000632B8(arg0);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_059D50", func_0005A7C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_059D50", func_0005A9DC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_059D50", func_0005AA5C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_059D50", func_0005AB48);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_059D50", func_0005ABC0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_059D50", func_0005AE6C);

void func_0005AF10(void *arg0) {
    s32 temp_s1;

    temp_s1 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_s1 != 0) {
        func_00090730(*func_0009F1C0(), temp_s1, 0);
    }
    M2C_FIELD(arg0, s32 *, 8) = 0;
    sceHVNetfront_Module_461C7724(arg0 + 0x10);
}

void func_0005AF64(void *arg0) {
    s32 temp_s1;

    temp_s1 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_s1 != 0) {
        func_00090730(*func_0009F1C0(), temp_s1, 0);
    }
    M2C_FIELD(arg0, s32 *, 8) = 0;
    sceHVNetfront_Module_461C7724(arg0 + 0x10);
}

