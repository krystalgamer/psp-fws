#include "common.h"
#include "amctrl_decls.h"

INCLUDE_ASM("nonmatchings/amctrl", func_00000000);

INCLUDE_ASM("nonmatchings/amctrl", func_00000054);

INCLUDE_ASM("nonmatchings/amctrl", func_000000A8);

INCLUDE_ASM("nonmatchings/amctrl", func_00000100);

INCLUDE_ASM("nonmatchings/amctrl", func_00000158);

INCLUDE_ASM("nonmatchings/amctrl", func_000001F8);

INCLUDE_ASM("nonmatchings/amctrl", func_000002A8);

INCLUDE_ASM("nonmatchings/amctrl", func_00000344);

INCLUDE_ASM("nonmatchings/amctrl", func_000003F0);

INCLUDE_ASM("nonmatchings/amctrl", func_00000428);

s32 module_start(void) {
    return 0;
}

s32 sceDrmBBMacInit(struct Unk_sceAmctrl_driver_525B8218_0 *arg0, s32 arg1) {
    s8 *var_v1;
    u32 var_a1;
    u32 var_a1_2;
    struct Unk_sceAmctrl_driver_525B8218_temp_v1 *temp_v1;

    arg0->unk0 = arg1;
    var_a1 = 0;
    do {
        temp_v1 = (u8 *)arg0 + var_a1;
        var_a1 += 1;
        temp_v1->unk4 = 0;
    } while (var_a1 < 0x10U);
    var_a1_2 = 0;
    var_v1 = (u8 *)arg0 + 0x14;
    do {
        var_a1_2 += 1;
        *var_v1 = 0;
        var_v1 += 1;
    } while (var_a1_2 < 0x10U);
    arg0->unk24 = 0;
    return 0;
}

INCLUDE_ASM("nonmatchings/amctrl", sceDrmBBMacUpdate);

INCLUDE_ASM("nonmatchings/amctrl", sceDrmBBMacFinal);

INCLUDE_ASM("nonmatchings/amctrl", sceDrmBBMacFinal2);

INCLUDE_ASM("nonmatchings/amctrl", sceDrmBBCipherInit);

INCLUDE_ASM("nonmatchings/amctrl", sceDrmBBCipherUpdate);

s32 sceDrmBBCipherFinal(struct Unk_sceAmctrl_driver_9951C50F_0 *arg0) {
    u32 var_a1;
    struct Unk_sceAmctrl_driver_9951C50F_temp_v1 *temp_v1;

    var_a1 = 0;
    do {
        temp_v1 = (u8 *)arg0 + var_a1;
        var_a1 += 1;
        temp_v1->unk8 = 0;
    } while (var_a1 < 0x10U);
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    return 0;
}

INCLUDE_RODATA("nonmatchings/amctrl", D_000012E8);

INCLUDE_RODATA("nonmatchings/amctrl", D_000012F8);

INCLUDE_RODATA("nonmatchings/amctrl", D_00001308);
