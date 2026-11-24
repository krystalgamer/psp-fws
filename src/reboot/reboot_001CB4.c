/* cflags: -O1 */
#include "common.h"
#include "reboot_decls.h"

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_001CB4", func_00001CB4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_001CB4", func_00001CC0);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_001CB4", func_00001CD0);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_001CB4", func_00001CE8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_001CB4", func_00001D14);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_001CB4", func_00001D20);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_001CB4", func_00001D3C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_001CB4", func_00001D58);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_001CB4", func_00001D64);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_001CB4", func_00001D74);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_001CB4", func_00001D80);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_001CB4", func_00001E20);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot_001CB4", D_00014B10);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot_001CB4", D_00014B30);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot_001CB4", D_00014B4C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_001CB4", func_00002050);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_001CB4", func_00002294);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_001CB4", func_00002938);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_001CB4", func_00002964);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_001CB4", func_0000298C);

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

