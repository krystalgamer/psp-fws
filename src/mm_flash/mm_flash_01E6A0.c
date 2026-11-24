/* cflags: -Os */
#include "common.h"
#include "mm_flash_decls.h"

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E6A0", func_0001E6A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E6A0", func_0001E728);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E6A0", func_0001E7B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E6A0", func_0001E890);

void func_0001E994(void *arg0, void **arg1) {
    void *temp_a1;

    temp_a1 = *arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, void **, 0) = temp_a1;
    if (temp_a1 != NULL) {
        M2C_FIELD(temp_a1, s32 *, 8) = (s32) (M2C_FIELD(temp_a1, s32 *, 8) + 1);
    }
}

void func_0001E9B8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void func_0001E9C4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

