#include "common.h"
#include "mesg_led_decls.h"

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", func_00000000);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", func_0000006C);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", func_000000E0);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", func_000012E0);

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

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceMesgLed_driver_55E4F665);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceMesgLed_driver_C15F737B);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceMesgLed_driver_DFF0F308);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceMesgLed_driver_F7275198);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceResmap_driver_E5659590);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceResmap_driver_4434E59F);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceDbman_driver_B2B8C3F9);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceDbman_driver_34B53D46);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceNwman_driver_9555D68D);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceResmgr_9DC14891);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceMesgLed_driver_3702348B);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceMesgLed_driver_CE7E00DF);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceMesgLed_driver_8F096FEC);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceMesgLed_driver_DA8B5C2E);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceMesgLed_driver_4A680E6B);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceMesgLed_driver_4E139EE3);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceMesgLed_driver_AA59DE09);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceMesgLed_driver_D4C47F58);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceMesgLed_driver_5FDB29F3);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceMesgLed_driver_C40F29E2);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceMesgLed_driver_28BC34E1);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceMesgLed_driver_8B0310A0);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceMesgd_driver_102DC8AF);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceMesgd_driver_ADD0CB66);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceWmd_driver_7A0E484C);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceWmd_driver_B7CE9041);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceMesgLed_driver_739D8E56);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceMesgIns_driver_55C358E8);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceMesgLed_driver_ED47F024);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceMesgIns_driver_75336BDD);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceMesgLed_driver_418BC5CF);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceMesgLed_driver_07037789);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceDbsvr_driver_94561901);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", func_0000491C);

INCLUDE_ASM("tmp/asm/303/mesg_led/nonmatchings/mesg_led", sceMesgLed_driver_28238305);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00004E38);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00004E3C);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00004ECC);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000059E0);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000059E4);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005A74);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005A88);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005A8C);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005AA0);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005AA4);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005AB8);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005ABC);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005AD0);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005AD4);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005B68);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005B6C);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005C00);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005C04);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005C18);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005C1C);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005C30);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005C34);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005C48);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005C4C);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005CE0);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005CE4);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005CF8);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005CFC);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005D90);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005D94);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005DA8);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005DAC);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005E40);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005E44);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005E58);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005E5C);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005E70);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005E74);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005F08);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005F0C);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005FA0);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005FA4);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005FB8);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005FBC);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005FD0);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005FD4);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005FE8);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00005FEC);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006080);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006084);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006118);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_0000611C);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006130);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006134);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006148);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_0000614C);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006160);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006164);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000061F8);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000061FC);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006210);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006214);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000062A4);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006328);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_0000632C);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000063C0);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000063C4);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000063D8);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000063DC);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000063F0);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000063F4);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006408);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_0000640C);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000064A0);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000064A4);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006538);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_0000653C);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006550);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006554);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006568);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_0000656C);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006580);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006584);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006618);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_0000661C);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000066B0);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000066B4);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000066C8);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000066CC);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000066E0);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000066E4);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000066F8);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000066FC);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006790);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006794);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000067A8);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000067AC);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006840);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006844);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000068D8);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000068DC);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000068F0);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000068F4);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006908);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_0000690C);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006920);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006924);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006934);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006948);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_0000694C);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_0000695C);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006970);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006974);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006984);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_00006998);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_0000699C);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000069AC);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000069C0);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000069C4);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000069D4);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000069E8);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000069EC);

INCLUDE_RODATA("tmp/asm/303/mesg_led/nonmatchings/mesg_led", D_000069FC);
