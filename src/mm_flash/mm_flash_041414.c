/* cflags: -O1 */
#include "common.h"
#include "mm_flash_decls.h"

void func_00041414(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_041414", func_00041424);

void func_00041434(void) {
    func_00041580();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_041414", func_00041450);

