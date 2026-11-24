#include "common.h"
#include "memab_decls.h"

INCLUDE_ASM("tmp/asm/352/memab/nonmatchings/memab", func_00000000);

INCLUDE_ASM("tmp/asm/352/memab/nonmatchings/memab", func_000000E4);

INCLUDE_ASM("tmp/asm/352/memab/nonmatchings/memab", func_000001C4);

INCLUDE_ASM("tmp/asm/352/memab/nonmatchings/memab", func_0000026C);

INCLUDE_ASM("tmp/asm/352/memab/nonmatchings/memab", func_000002F8);

INCLUDE_ASM("tmp/asm/352/memab/nonmatchings/memab", func_00000558);

INCLUDE_ASM("tmp/asm/352/memab/nonmatchings/memab", func_000005A4);

INCLUDE_ASM("tmp/asm/352/memab/nonmatchings/memab", func_000005F8);

INCLUDE_ASM("tmp/asm/352/memab/nonmatchings/memab", func_00000648);

INCLUDE_ASM("tmp/asm/352/memab/nonmatchings/memab", func_00000708);

INCLUDE_ASM("tmp/asm/352/memab/nonmatchings/memab", func_000008C4);

s32 module_start(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    temp_v0 = sceKernelCreateSema("SceMemab1", 0U, 1, 1, NULL);
    D_00002EA0 = temp_v0;
    var_v1 = 1;
    if (temp_v0 > 0) {
        temp_v0_2 = sceKernelCreateSema("SceMemab2", 0U, 1, 1, NULL);
        D_00003A78 = temp_v0_2;
        var_v1 = 0;
        if (temp_v0_2 <= 0) {
            sceKernelDeleteSema(D_00002EA0);
            var_v1 = 1;
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/memab/nonmatchings/memab", module_stop);

INCLUDE_ASM("tmp/asm/352/memab/nonmatchings/memab", sceMemab_driver_01FD1BA0);

INCLUDE_ASM("tmp/asm/352/memab/nonmatchings/memab", sceMemab_driver_0C134D3F);

INCLUDE_ASM("tmp/asm/352/memab/nonmatchings/memab", sceMemab_driver_A4720EED);

INCLUDE_ASM("tmp/asm/352/memab/nonmatchings/memab", sceMemab_driver_DC598EF3);

INCLUDE_ASM("tmp/asm/352/memab/nonmatchings/memab", sceMemab_driver_8DAC2343);

INCLUDE_ASM("tmp/asm/352/memab/nonmatchings/memab", sceMemab_driver_DAE8A629);

INCLUDE_ASM("tmp/asm/352/memab/nonmatchings/memab", sceMemab_driver_CF49BCBB);

INCLUDE_ASM("tmp/asm/352/memab/nonmatchings/memab", sceMemab_driver_E6D3ACE2);

INCLUDE_ASM("tmp/asm/352/memab/nonmatchings/memab", sceMemab_driver_B54E1AA7);

INCLUDE_ASM("tmp/asm/352/memab/nonmatchings/memab", sceMemab_driver_F1D2B9B0);

INCLUDE_ASM("tmp/asm/352/memab/nonmatchings/memab", sceMemab_driver_4DF566D3);

INCLUDE_ASM("tmp/asm/352/memab/nonmatchings/memab", sceMemab_driver_F94CA9B8);

INCLUDE_ASM("tmp/asm/352/memab/nonmatchings/memab", sceMemab_driver_34EBFB6A);

INCLUDE_ASM("tmp/asm/352/memab/nonmatchings/memab", sceMemab_driver_531E144B);
