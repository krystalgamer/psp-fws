#include "common.h"
#include "amctrl_decls.h"

INCLUDE_ASM("tmp/asm/352/amctrl/nonmatchings/amctrl", func_00000000);

INCLUDE_ASM("tmp/asm/352/amctrl/nonmatchings/amctrl", func_00000054);

INCLUDE_ASM("tmp/asm/352/amctrl/nonmatchings/amctrl", func_000000A8);

INCLUDE_ASM("tmp/asm/352/amctrl/nonmatchings/amctrl", func_00000100);

INCLUDE_ASM("tmp/asm/352/amctrl/nonmatchings/amctrl", func_00000158);

INCLUDE_ASM("tmp/asm/352/amctrl/nonmatchings/amctrl", func_000001F8);

INCLUDE_ASM("tmp/asm/352/amctrl/nonmatchings/amctrl", func_000002A8);

INCLUDE_ASM("tmp/asm/352/amctrl/nonmatchings/amctrl", func_00000344);

INCLUDE_ASM("tmp/asm/352/amctrl/nonmatchings/amctrl", func_000003F0);

INCLUDE_ASM("tmp/asm/352/amctrl/nonmatchings/amctrl", func_00000428);

s32 module_start(void) {
    return 0;
}

s32 sceAmctrl_driver_525B8218(void *arg0, s32 arg1) {
    s8 *var_v1;
    u32 var_a1;
    u32 var_a1_2;
    void *temp_v1;

    M2C_FIELD(arg0, s32 *, 0) = arg1;
    var_a1 = 0;
    do {
        temp_v1 = arg0 + var_a1;
        var_a1 += 1;
        M2C_FIELD(temp_v1, s8 *, 4) = 0;
    } while (var_a1 < 0x10U);
    var_a1_2 = 0;
    var_v1 = arg0 + 0x14;
    do {
        var_a1_2 += 1;
        *var_v1 = 0;
        var_v1 += 1;
    } while (var_a1_2 < 0x10U);
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    return 0;
}

INCLUDE_ASM("tmp/asm/352/amctrl/nonmatchings/amctrl", sceAmctrl_driver_58163FBE);

INCLUDE_ASM("tmp/asm/352/amctrl/nonmatchings/amctrl", sceAmctrl_driver_EF95A213);

INCLUDE_ASM("tmp/asm/352/amctrl/nonmatchings/amctrl", sceAmctrl_driver_F5186D8E);

INCLUDE_ASM("tmp/asm/352/amctrl/nonmatchings/amctrl", sceAmctrl_driver_1CCB66D2);

INCLUDE_ASM("tmp/asm/352/amctrl/nonmatchings/amctrl", sceAmctrl_driver_0785C974);

s32 sceAmctrl_driver_9951C50F(void *arg0) {
    u32 var_a1;
    void *temp_v1;

    var_a1 = 0;
    do {
        temp_v1 = arg0 + var_a1;
        var_a1 += 1;
        M2C_FIELD(temp_v1, s8 *, 8) = 0;
    } while (var_a1 < 0x10U);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    return 0;
}

INCLUDE_RODATA("tmp/asm/352/amctrl/nonmatchings/amctrl", D_000012E8);

INCLUDE_RODATA("tmp/asm/352/amctrl/nonmatchings/amctrl", D_000012F8);

INCLUDE_RODATA("tmp/asm/352/amctrl/nonmatchings/amctrl", D_00001308);
