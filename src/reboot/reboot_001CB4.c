/* cflags: -O1 */
#include "common.h"
#include "reboot_decls.h"

s32 func_00001CB4(void) {
    return D_00016DEC;
}

INCLUDE_ASM("nonmatchings/reboot_001CB4", func_00001CC0);

INCLUDE_ASM("nonmatchings/reboot_001CB4", func_00001CD0);

INCLUDE_ASM("nonmatchings/reboot_001CB4", func_00001CE8);

s32 func_00001D14(void) {
    return D_00017140;
}

INCLUDE_ASM("nonmatchings/reboot_001CB4", func_00001D20);

INCLUDE_ASM("nonmatchings/reboot_001CB4", func_00001D3C);

s32 func_00001D58(void) {
    return D_00017144;
}

INCLUDE_ASM("nonmatchings/reboot_001CB4", func_00001D64);

s32 func_00001D74(void) {
    return D_00017148;
}

INCLUDE_ASM("nonmatchings/reboot_001CB4", func_00001D80);

INCLUDE_ASM("nonmatchings/reboot_001CB4", func_00001E20);

INCLUDE_RODATA("nonmatchings/reboot_001CB4", D_00014B10);

INCLUDE_RODATA("nonmatchings/reboot_001CB4", D_00014B30);

INCLUDE_RODATA("nonmatchings/reboot_001CB4", D_00014B4C);

INCLUDE_ASM("nonmatchings/reboot_001CB4", func_00002050);

INCLUDE_ASM("nonmatchings/reboot_001CB4", func_00002294);

INCLUDE_ASM("nonmatchings/reboot_001CB4", func_00002938);

INCLUDE_ASM("nonmatchings/reboot_001CB4", func_00002964);

INCLUDE_ASM("nonmatchings/reboot_001CB4", func_0000298C);

void func_00002A00(u8 *arg0, u8 *arg1) {
    u8 *var_a0;
    u8 *var_a1;
    u8 var_v0;

    var_a0 = arg0;
    var_a1 = arg1;
    var_v0 = *var_a1;
    if (var_v0 != 0) {
        do {
            *var_a0 = var_v0;
            var_a1 += 1;
            var_v0 = *var_a1;
            var_a0 += 1;
        } while (var_v0 != 0);
    }
    *var_a0 = 0;
}
