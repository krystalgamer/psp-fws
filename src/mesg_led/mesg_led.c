#include "common.h"
#include "mesg_led_decls.h"

INCLUDE_ASM("nonmatchings/mesg_led", func_00000000);

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/mesg_led", func_0000006C);

INCLUDE_ASM("nonmatchings/mesg_led", func_000000E0);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/mesg_led", func_00000FC4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/mesg_led", func_0000006C_v250);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mesg_led", func_0000006C_v201);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/mesg_led", func_0000006C_v152);
#endif

#if FW_VERSION < 260 || FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/mesg_led", func_0000006C);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
s32 module_start(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    temp_v0 = sceKernelCreateSema("SceUtils4096", 0U, 1, 1, NULL);
    D_00005B94 = temp_v0;
    var_v1 = 1;
    if (temp_v0 > 0) {
        temp_v0_2 = sceKernelCreateSema("SceUtils5120", 0U, 1, 1, NULL);
        D_00003F98 = temp_v0_2;
        var_v1 = 0;
        if (temp_v0_2 <= 0) {
            sceKernelDeleteSema(D_00005B94);
            var_v1 = 1;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 260
s32 module_start(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    temp_v0 = sceKernelCreateSema("SceUtils4096", 0U, 1, 1, NULL);
    D_00004E14 = temp_v0;
    var_v1 = 1;
    if (temp_v0 > 0) {
        temp_v0_2 = sceKernelCreateSema("SceUtils5120", 0U, 1, 1, NULL);
        D_00003F98 = temp_v0_2;
        var_v1 = 0;
        if (temp_v0_2 <= 0) {
            sceKernelDeleteSema(D_00004E14);
            var_v1 = 1;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
s32 module_start(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    temp_v0 = sceKernelCreateSema("SceUtils4096", 0U, 1, 1, NULL);
    D_00003F94 = temp_v0;
    var_v1 = 1;
    if (temp_v0 > 0) {
        temp_v0_2 = sceKernelCreateSema("SceUtils5120", 0U, 1, 1, NULL);
        D_00003F98 = temp_v0_2;
        var_v1 = 0;
        if (temp_v0_2 <= 0) {
            sceKernelDeleteSema(D_00003F94);
            var_v1 = 1;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 152
s32 module_start(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    temp_v0 = sceKernelCreateSema("SceUtils4096", 0U, 1, 1, NULL);
    D_00002994 = temp_v0;
    var_v1 = 1;
    if (temp_v0 > 0) {
        temp_v0_2 = sceKernelCreateSema("SceUtils5120", 0U, 1, 1, NULL);
        D_00002998 = temp_v0_2;
        var_v1 = 0;
        if (temp_v0_2 <= 0) {
            sceKernelDeleteSema(D_00002994);
            var_v1 = 1;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION < 152
s32 module_start(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    temp_v0 = sceKernelCreateSema("SceUtils4096", 0U, 1, 1, NULL);
    D_00002714 = temp_v0;
    var_v1 = 1;
    if (temp_v0 > 0) {
        temp_v0_2 = sceKernelCreateSema("SceUtils5120", 0U, 1, 1, NULL);
        D_00002718 = temp_v0_2;
        var_v1 = 0;
        if (temp_v0_2 <= 0) {
            sceKernelDeleteSema(D_00002714);
            var_v1 = 1;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mesg_led", sceUtilsGetLoadModuleCLength);

INCLUDE_ASM("nonmatchings/mesg_led", sceUtilsGetLoadModuleCLengthByPolling);

INCLUDE_ASM("nonmatchings/mesg_led", sceUtilsGetLoadModuleDLength);

INCLUDE_ASM("nonmatchings/mesg_led", sceUtilsGetLoadModuleDLengthByPolling);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/mesg_led", func_000000E0);

INCLUDE_ASM("nonmatchings/mesg_led", func_000012E0);

s32 module_start(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    temp_v0 = sceKernelCreateSema("SceUtils4096", 0U, 1, 1, NULL);
    D_00006F94 = temp_v0;
    var_v1 = 1;
    if (temp_v0 > 0) {
        temp_v0_2 = sceKernelCreateSema("SceUtils5120", 0U, 1, 1, NULL);
        D_00006F98 = temp_v0_2;
        var_v1 = 0;
        if (temp_v0_2 <= 0) {
            sceKernelDeleteSema(D_00006F94);
            var_v1 = 1;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_55E4F665);

INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_C15F737B);

INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_DFF0F308);

INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_F7275198);
#endif

INCLUDE_ASM("nonmatchings/mesg_led", sceResmapPrepare);

INCLUDE_ASM("nonmatchings/mesg_led", sceResmapPrepareByPolling);

INCLUDE_ASM("nonmatchings/mesg_led", sceDbmanSelect);

INCLUDE_ASM("nonmatchings/mesg_led", sceDbmanSelectByPolling);

INCLUDE_ASM("nonmatchings/mesg_led", sceNwman_driver_9555D68D);

INCLUDE_ASM("nonmatchings/mesg_led", sceResmgr_9DC14891);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_3702348B);

INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_CE7E00DF);

INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_8F096FEC);

INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_DA8B5C2E);

INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_4A680E6B);

INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_4E139EE3);

INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_AA59DE09);

INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_D4C47F58);

INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_5FDB29F3);

INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_C40F29E2);

INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_28BC34E1);

INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_8B0310A0);
#else
INCLUDE_ASM("nonmatchings/mesg_led", sceUtilsGetLoadModuleILength);

INCLUDE_ASM("nonmatchings/mesg_led", sceUtilsGetLoadModuleILengthByPolling);

INCLUDE_ASM("nonmatchings/mesg_led", sceUtilsGetLoadModuleJLength);

INCLUDE_ASM("nonmatchings/mesg_led", sceUtilsGetLoadModuleJLengthByPolling);

INCLUDE_ASM("nonmatchings/mesg_led", sceUtilsGetLoadModuleKLength);

INCLUDE_ASM("nonmatchings/mesg_led", sceUtilsGetLoadModuleKLengthByPolling);

INCLUDE_ASM("nonmatchings/mesg_led", sceUtilsGetLoadModuleLLength);

INCLUDE_ASM("nonmatchings/mesg_led", sceUtilsGetLoadModuleLLengthByPolling);

INCLUDE_ASM("nonmatchings/mesg_led", sceUtilsGetLoadModuleMLength);

INCLUDE_ASM("nonmatchings/mesg_led", sceUtilsGetLoadModuleMLengthByPolling);

INCLUDE_ASM("nonmatchings/mesg_led", sceUtilsGetLoadModuleNLength);

INCLUDE_ASM("nonmatchings/mesg_led", sceUtilsGetLoadModuleNLengthByPolling);
#endif

INCLUDE_ASM("nonmatchings/mesg_led", sceMesgd_driver_102DC8AF);

INCLUDE_ASM("nonmatchings/mesg_led", sceMesgd_driver_ADD0CB66);

INCLUDE_ASM("nonmatchings/mesg_led", sceWmd_driver_7A0E484C);

INCLUDE_ASM("nonmatchings/mesg_led", sceWmd_driver_B7CE9041);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_739D8E56);

INCLUDE_ASM("nonmatchings/mesg_led", sceMesgIns_driver_55C358E8);

INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_ED47F024);

INCLUDE_ASM("nonmatchings/mesg_led", sceMesgIns_driver_75336BDD);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_418BC5CF);

INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_07037789);
#endif

#if FW_VERSION >= 311
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_7EDF7F6E);

INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_6039ED19);
#endif

INCLUDE_ASM("nonmatchings/mesg_led", sceDbsvrGetData);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/mesg_led", func_00003FC0);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/mesg_led", func_0000491C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_28238305);
#endif

INCLUDE_RODATA("nonmatchings/mesg_led", D_00004E38);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00004E3C);

#if FW_VERSION >= 201 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_0000239C);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00002E60);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00002E64);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_00003C08);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00003C1C);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00003C20);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005130);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005134);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/mesg_led", D_00001DBC);
#endif

#if FW_VERSION >= 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_00004ECC);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000059E0);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000059E4);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005A74);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005A88);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005A8C);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005AA0);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005AA4);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005AB8);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005ABC);
#endif

#if FW_VERSION >= 311
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005EB8);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005EBC);
#endif

#if FW_VERSION >= 340
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005FF0);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005FF4);
#endif

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005AD0);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005AD4);

#if FW_VERSION >= 201 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_00002F90);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00002F94);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_00003D64);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00003D68);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005290);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005294);
#endif

#if FW_VERSION >= 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005B68);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005B6C);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005C00);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005C04);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005C18);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005C1C);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005C30);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005C34);
#endif

#if FW_VERSION >= 311
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006048);

INCLUDE_RODATA("nonmatchings/mesg_led", D_0000604C);
#endif

#if FW_VERSION >= 340
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006198);

INCLUDE_RODATA("nonmatchings/mesg_led", D_0000619C);
#endif

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005C48);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005C4C);

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_00003E14);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00003E18);
#endif

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005CE0);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005CE4);
#endif

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005CF8);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005CFC);

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_00003EC4);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00003EC8);
#endif

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005D90);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005D94);
#endif

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005DA8);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005DAC);

#if FW_VERSION < 250 || FW_VERSION >= 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005E40);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/mesg_led", D_00001E20);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_00003288);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_00003F78);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00003F8C);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00003F90);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/mesg_led", D_0000328C);
#endif

#if FW_VERSION >= 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005E44);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005E58);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005E5C);
#endif

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005E70);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005E74);

#if FW_VERSION >= 201 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_000033B8);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000033BC);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_000040D4);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000040D8);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005618);

INCLUDE_RODATA("nonmatchings/mesg_led", D_0000561C);
#endif

#if FW_VERSION >= 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005F08);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005F0C);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005FA0);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005FA4);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005FB8);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005FBC);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005FD0);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005FD4);
#endif

#if FW_VERSION >= 311
INCLUDE_RODATA("nonmatchings/mesg_led", D_000063D0);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000063D4);
#endif

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005FE8);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005FEC);

#if FW_VERSION >= 201 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_000034E8);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000034EC);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_0000421C);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00004220);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005778);

INCLUDE_RODATA("nonmatchings/mesg_led", D_0000577C);
#endif

#if FW_VERSION >= 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006080);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006084);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006118);

INCLUDE_RODATA("nonmatchings/mesg_led", D_0000611C);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006130);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006134);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006148);

INCLUDE_RODATA("nonmatchings/mesg_led", D_0000614C);
#endif

#if FW_VERSION >= 311
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006560);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006564);
#endif

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006160);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006164);

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_000042CC);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000042D0);
#endif

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_000061F8);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000061FC);
#endif

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006210);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006214);

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_000036A4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/mesg_led", D_00002334);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_000036C0);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000036C4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_00004494);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00004498);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005A08);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005A0C);
#endif

#if FW_VERSION >= 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_000062A4);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006328);

INCLUDE_RODATA("nonmatchings/mesg_led", D_0000632C);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000063C0);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000063C4);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000063D8);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000063DC);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000063F0);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000063F4);
#endif

#if FW_VERSION >= 311
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006808);

INCLUDE_RODATA("nonmatchings/mesg_led", D_0000680C);
#endif

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006408);

INCLUDE_RODATA("nonmatchings/mesg_led", D_0000640C);

#if FW_VERSION >= 201 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_000037F0);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000037F4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_000045DC);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000045E0);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005B68);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005B6C);
#endif

#if FW_VERSION >= 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_000064A0);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000064A4);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006538);

INCLUDE_RODATA("nonmatchings/mesg_led", D_0000653C);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006550);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006554);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006568);

INCLUDE_RODATA("nonmatchings/mesg_led", D_0000656C);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006AE8_v352);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006AEC_v352);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006AE8_v340);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006AEC_v340);
#endif

#if FW_VERSION == 311
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006998_v311);

INCLUDE_RODATA("nonmatchings/mesg_led", D_0000699C_v311);
#endif

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006580);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006584);

#if FW_VERSION >= 201 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_00003920);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00003924);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_00004724);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00004728);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005CC8);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005CCC);
#endif

#if FW_VERSION >= 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006618);

INCLUDE_RODATA("nonmatchings/mesg_led", D_0000661C);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000066B0);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000066B4);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000066C8);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000066CC);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000066E0);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000066E4);
#endif

#if FW_VERSION >= 311
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006B28);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006B2C);
#endif

INCLUDE_RODATA("nonmatchings/mesg_led", D_000066F8);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000066FC);

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_000047D4);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000047D8);
#endif

#if FW_VERSION >= 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006790);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006794);
#endif

INCLUDE_RODATA("nonmatchings/mesg_led", D_000067A8);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000067AC);

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_00003B30);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00003B34);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_0000491C);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00004920);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005ED8);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005EDC);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005638);

INCLUDE_RODATA("nonmatchings/mesg_led", D_0000563C);

INCLUDE_RODATA("nonmatchings/mesg_led", D_0000564C);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005F18);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005F1C);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005F2C);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005660);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005664);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005674);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005F68);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005F6C);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005F7C);
#endif

#if FW_VERSION >= 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006840);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006844);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000068D8);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000068DC);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000068F0);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000068F4);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006908);

INCLUDE_RODATA("nonmatchings/mesg_led", D_0000690C);
#endif

#if FW_VERSION >= 311
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006D68);
#endif

#if FW_VERSION >= 340
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006EBC);
#endif

#if FW_VERSION == 311
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006D6C_v311);
#endif

#if FW_VERSION >= 303
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006920);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006924);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006934);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006948);

INCLUDE_RODATA("nonmatchings/mesg_led", D_0000694C);

INCLUDE_RODATA("nonmatchings/mesg_led", D_0000695C);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006970);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006974);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006984);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006998);

INCLUDE_RODATA("nonmatchings/mesg_led", D_0000699C);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000069AC);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000069C0);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000069C4);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000069D4);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000069E8);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000069EC);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000069FC);
#endif

#if FW_VERSION >= 311
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006E70);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006E74);
#endif
