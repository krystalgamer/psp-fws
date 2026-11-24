/* cflags: -Os */
#include "common.h"
#include "mm_flash_decls.h"

void func_00098550(s32 arg0) {
    if (arg0 != 0) {
        func_0009B1D4(arg0);
        func_00090730(*func_0009F1C0(), arg0, 0);
    }
}

void func_00098594(void) {
    func_0009B428();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098550", func_000985B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098550", func_00098618);

void func_00098680(void *arg0) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_s0 != 0) {
        func_00090730(*func_0009F1C0(), temp_s0, 0);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098550", func_000986C0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098550", func_00098700);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098550", func_00098784);

void func_00098808(void *arg0) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_s0 != 0) {
        func_00090730(*func_0009F1C0(), temp_s0, 0);
    }
}

void func_00098848(void *arg0) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_s0 != 0) {
        func_00090730(*func_0009F1C0(), temp_s0, 0);
    }
}

