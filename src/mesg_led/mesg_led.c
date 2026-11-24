#include "common.h"
#include "mesg_led_decls.h"

INCLUDE_ASM("nonmatchings/mesg_led", func_00000000);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mesg_led", func_0000006C);
#endif

#if FW_VERSION == 100
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

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_84A04017);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_A86D5005);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_A4547DF1);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_94EB1072);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mesg_led", func_0000006C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mesg_led", func_000000E0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mesg_led", func_000012E0);
#endif

#if FW_VERSION != 100
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

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_55E4F665);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_C15F737B);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_DFF0F308);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_F7275198);
#endif

INCLUDE_ASM("nonmatchings/mesg_led", sceResmap_driver_E5659590);

INCLUDE_ASM("nonmatchings/mesg_led", sceResmap_driver_4434E59F);

INCLUDE_ASM("nonmatchings/mesg_led", sceDbman_driver_B2B8C3F9);

INCLUDE_ASM("nonmatchings/mesg_led", sceDbman_driver_34B53D46);

INCLUDE_ASM("nonmatchings/mesg_led", sceNwman_driver_9555D68D);

INCLUDE_ASM("nonmatchings/mesg_led", sceResmgr_9DC14891);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_198FD3BE);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_FBC694C7);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_07E152BE);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_9906F33A);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_46AC0E78);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_55C8785E);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_67A5ECDF);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_85B9D9F3);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_951F4A5B);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_58999D8E);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_9FC926A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_7A922276);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_3702348B);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_CE7E00DF);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_8F096FEC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_DA8B5C2E);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_4A680E6B);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_4E139EE3);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_AA59DE09);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_D4C47F58);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_5FDB29F3);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_C40F29E2);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_28BC34E1);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_8B0310A0);
#endif

INCLUDE_ASM("nonmatchings/mesg_led", sceMesgd_driver_102DC8AF);

INCLUDE_ASM("nonmatchings/mesg_led", sceMesgd_driver_ADD0CB66);

INCLUDE_ASM("nonmatchings/mesg_led", sceWmd_driver_7A0E484C);

INCLUDE_ASM("nonmatchings/mesg_led", sceWmd_driver_B7CE9041);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_739D8E56);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgIns_driver_55C358E8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_ED47F024);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgIns_driver_75336BDD);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_418BC5CF);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_07037789);
#endif

INCLUDE_ASM("nonmatchings/mesg_led", sceDbsvr_driver_94561901);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mesg_led", func_0000491C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mesg_led", sceMesgLed_driver_28238305);
#endif

INCLUDE_RODATA("nonmatchings/mesg_led", D_00004E38);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00004E3C);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00004ECC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_000059E0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_000059E4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005A74);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005A88);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005A8C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005AA0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005AA4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005AB8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005ABC);
#endif

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005AD0);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005AD4);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005B68);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005B6C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005C00);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005C04);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005C18);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005C1C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005C30);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005C34);
#endif

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005C48);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005C4C);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005CE0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005CE4);
#endif

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005CF8);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005CFC);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005D90);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005D94);
#endif

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005DA8);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005DAC);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005E40);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00001E20);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005E44);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005E58);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005E5C);
#endif

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005E70);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005E74);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005F08);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005F0C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005FA0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005FA4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005FB8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005FBC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005FD0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00005FD4);
#endif

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005FE8);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00005FEC);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006080);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006084);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006118);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_0000611C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006130);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006134);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006148);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_0000614C);
#endif

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006160);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006164);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_000061F8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_000061FC);
#endif

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006210);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006214);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_000062A4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006328);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_0000632C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_000063C0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_000063C4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_000063D8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_000063DC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_000063F0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_000063F4);
#endif

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006408);

INCLUDE_RODATA("nonmatchings/mesg_led", D_0000640C);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_000064A0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_000064A4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006538);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_0000653C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006550);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006554);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006568);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_0000656C);
#endif

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006580);

INCLUDE_RODATA("nonmatchings/mesg_led", D_00006584);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006618);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_0000661C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_000066B0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_000066B4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_000066C8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_000066CC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_000066E0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_000066E4);
#endif

INCLUDE_RODATA("nonmatchings/mesg_led", D_000066F8);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000066FC);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006790);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006794);
#endif

INCLUDE_RODATA("nonmatchings/mesg_led", D_000067A8);

INCLUDE_RODATA("nonmatchings/mesg_led", D_000067AC);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006840);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006844);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_000068D8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_000068DC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_000068F0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_000068F4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006908);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_0000690C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006920);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006924);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006934);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006948);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_0000694C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_0000695C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006970);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006974);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006984);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_00006998);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_0000699C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_000069AC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_000069C0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_000069C4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_000069D4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_000069E8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_000069EC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mesg_led", D_000069FC);
#endif
