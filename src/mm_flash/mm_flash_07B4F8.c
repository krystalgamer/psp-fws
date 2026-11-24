/* cflags: -O1 */
#include "common.h"
#include "mm_flash_decls.h"

void func_0007B4F8(void *arg0, void *arg1, s32 arg2) {
    s32 var_v1;

    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    var_v1 = 1;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, void **, 0) = arg1;
    if (arg1 != NULL) {
        var_v1 = M2C_FIELD(arg1, s32 *, 0x188);
    }
    M2C_FIELD(arg0, s32 *, 0x10) = 2;
    M2C_FIELD(arg0, s32 *, 0x64) = var_v1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_07B4F8", func_0007B534);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_07B4F8", func_0007B570);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_07B4F8", func_0007B5B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_07B4F8", func_0007B7FC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_07B4F8", func_0007BB08);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_07B4F8", func_0007BE54);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_07B4F8", func_0007C340);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_07B4F8", func_0007C394);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_07B4F8", func_0007C6F0);

void func_0007C8EC(s32 *arg0) {
    *arg0 = 0;
}

void func_0007C8F4(void) {
    func_0007C92C();
}

void func_0007C910(void) {
    func_0007C92C();
}

