/* cflags: -Os */
#include "common.h"
#include "mm_flash_decls.h"

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_016F9C", func_00016F9C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_016F9C", func_0001700C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_016F9C", func_00017050);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_016F9C", func_000170A8);

s32 func_00017118(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        var_v1 = M2C_FIELD(arg0, s32 *, 4) == 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_016F9C", func_00017134);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_016F9C", func_000171C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_016F9C", func_00017254);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_016F9C", func_000172E0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_016F9C", func_0001736C);

void func_000177F4(void *arg0, s32 arg1) {
    s32 var_a2;
    s32 var_v1;

    M2C_FIELD(arg0, s32 *, 0x94) = arg1;
    var_a2 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x170) > 0) {
        var_v1 = 0;
        do {
            var_a2 += 1;
            M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x160) + var_v1), s32 *, 0x4C) = arg1;
            var_v1 += 0x64;
        } while (var_a2 < M2C_FIELD(arg0, s32 *, 0x170));
    }
}

void func_00017830(void *arg0, s32 arg1) {
    func_00017884((s32) arg0, 0, M2C_FIELD(arg0, s32 *, 0x268));
    func_000133D0((s32) arg0, arg1, sceHVNetfront_Module_15875ED4(arg1), 0);
}

