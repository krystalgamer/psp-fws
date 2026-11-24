#include "common.h"
#include "registry_decls.h"

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_98279CF1);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_9B25EDF1);

s32 module_reboot_before(void) {
    sceReg_driver_9B25EDF1();
    return 0;
}

s32 syslib_ADF12745(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0:
        break;
    case 2:
        sceKernelWaitSema(D_00006FDC, 1, NULL);
        break;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_92E41280);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_FA8A5739);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_DEDA92BF);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_39461B4D);

INCLUDE_ASM("nonmatchings/registry", func_0000086C);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_0D69BF40);

INCLUDE_ASM("nonmatchings/registry", func_000009F8);

INCLUDE_ASM("nonmatchings/registry", func_00000B6C);

INCLUDE_ASM("nonmatchings/registry", func_00000BC8);

INCLUDE_ASM("nonmatchings/registry", func_00000C50);

INCLUDE_ASM("nonmatchings/registry", func_00000D10);

INCLUDE_ASM("nonmatchings/registry", func_00000D7C);

INCLUDE_ASM("nonmatchings/registry", func_00000DA8);

INCLUDE_ASM("nonmatchings/registry", func_00001058);

INCLUDE_ASM("nonmatchings/registry", func_00001110);

INCLUDE_ASM("nonmatchings/registry", func_00001288);

INCLUDE_ASM("nonmatchings/registry", func_00001694);

INCLUDE_ASM("nonmatchings/registry", func_00001714);

INCLUDE_ASM("nonmatchings/registry", func_00001828);

s32 func_00001874(s32 arg0, s32 *arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_000065E4(arg0);
    var_v1 = 0;
    if (temp_v0 >= 0) {
        *arg1 = temp_v0;
    } else {
        *arg1 = 0;
        var_v1 = temp_v0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/registry", func_000018B4);

void func_00001A44(s32 arg0, M2C_UNK **arg1, M2C_UNK **arg2) {
    if (arg0 == 1) {
        *arg1 = "/registry/system.ireg";
        *arg2 = "/registry/system.dreg";
        return;
    }
    *arg1 = NULL;
    *arg2 = NULL;
}

INCLUDE_ASM("nonmatchings/registry", func_00001A74);

INCLUDE_ASM("nonmatchings/registry", func_00001AC4);

INCLUDE_ASM("nonmatchings/registry", func_00001B7C);

INCLUDE_ASM("nonmatchings/registry", func_00001B9C);

INCLUDE_ASM("nonmatchings/registry", func_00001CC4);

INCLUDE_ASM("nonmatchings/registry", func_00001D7C);

INCLUDE_ASM("nonmatchings/registry", func_00001E2C);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_1D8A762E);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_4CA16893);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_0CAE832B);

INCLUDE_ASM("nonmatchings/registry", func_0000263C);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_BE8C1263);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_835ECE6F);

INCLUDE_ASM("nonmatchings/registry", func_00002A64);

INCLUDE_ASM("nonmatchings/registry", func_00002C3C);

INCLUDE_ASM("nonmatchings/registry", func_00002D2C);

INCLUDE_ASM("nonmatchings/registry", func_00002F18);

INCLUDE_ASM("nonmatchings/registry", func_000030C0);

INCLUDE_ASM("nonmatchings/registry", func_0000319C);

INCLUDE_ASM("nonmatchings/registry", func_00003340);

INCLUDE_ASM("nonmatchings/registry", func_000033AC);

INCLUDE_ASM("nonmatchings/registry", func_00003594);

INCLUDE_ASM("nonmatchings/registry", func_00003738);

INCLUDE_ASM("nonmatchings/registry", func_0000396C);

INCLUDE_ASM("nonmatchings/registry", func_000039A4);

INCLUDE_ASM("nonmatchings/registry", func_000039E0);

INCLUDE_ASM("nonmatchings/registry", func_00003A5C);

INCLUDE_ASM("nonmatchings/registry", func_00003ACC);

INCLUDE_ASM("nonmatchings/registry", func_00003C68);

INCLUDE_ASM("nonmatchings/registry", func_00003D1C);

INCLUDE_ASM("nonmatchings/registry", func_00003DAC);

INCLUDE_ASM("nonmatchings/registry", func_00003E60);

INCLUDE_ASM("nonmatchings/registry", func_00003EA4);

s32 func_00003EE8(void) {
    s32 var_v0;
    struct Unk_func_00003EE8_temp_v0 *temp_v0;

    temp_v0 = func_00000B6C();
    var_v0 = 0x80082715;
    if (temp_v0 != NULL) {
        temp_v0->unk7 = 0;
        temp_v0->unk5 = 0;
        temp_v0->unk6 = 0;
        temp_v0->unk4 = 1;
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/registry", func_00003F2C);

INCLUDE_ASM("nonmatchings/registry", func_00003FE4);

s32 func_00004024(void) {
    s32 var_v0;
    struct Unk_func_00004024_temp_v0 *temp_v0;

    temp_v0 = func_00003EA4();
    var_v0 = 0x8008272E;
    if (temp_v0 != NULL) {
        temp_v0->unk4 = 0;
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/registry", func_00004058);

INCLUDE_ASM("nonmatchings/registry", func_000040A0);

INCLUDE_ASM("nonmatchings/registry", func_000040E4);

INCLUDE_ASM("nonmatchings/registry", func_00004270);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_57641A81);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_17768E14);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_D4475AA8);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_C5768D02);

INCLUDE_ASM("nonmatchings/registry", func_00004A28);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_28A8E98A);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_30BE0259);

INCLUDE_ASM("nonmatchings/registry", func_00004D6C);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_3615BC87);

INCLUDE_ASM("nonmatchings/registry", func_00004F2C);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_2C0DB9DD);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_2D211135);

INCLUDE_ASM("nonmatchings/registry", func_000052B0);

INCLUDE_ASM("nonmatchings/registry", func_00005390);

INCLUDE_ASM("nonmatchings/registry", func_00005548);

INCLUDE_ASM("nonmatchings/registry", func_00005608);

INCLUDE_ASM("nonmatchings/registry", func_00005718);

INCLUDE_ASM("nonmatchings/registry", func_0000589C);

INCLUDE_ASM("nonmatchings/registry", func_000059A0);

INCLUDE_ASM("nonmatchings/registry", func_00005A88);

INCLUDE_ASM("nonmatchings/registry", func_00005F74);

INCLUDE_ASM("nonmatchings/registry", func_00005FF0);

INCLUDE_ASM("nonmatchings/registry", func_00006524);

INCLUDE_ASM("nonmatchings/registry", func_000065E4);

s32 func_00006674(s32 arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (sceIoClose(arg0) >= 0) {
        var_v1 = (sceIoDevctl(&D_00006F8C, 0x5802, NULL, 0U, NULL, 0U) >= 0) ? 0 : 0x80084E2B;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/registry", func_000066D0);

INCLUDE_ASM("nonmatchings/registry", func_000067A0);

INCLUDE_ASM("nonmatchings/registry", func_00006828);

INCLUDE_ASM("nonmatchings/registry", func_00006888);

INCLUDE_ASM("nonmatchings/registry", func_000068EC);

s32 func_00006998(s32 arg0) {
    return arg0;
}

INCLUDE_RODATA("nonmatchings/registry", D_00006F8C);

INCLUDE_RODATA("nonmatchings/registry", D_00006F94);

INCLUDE_ASM("nonmatchings/registry", func_000069A0);

void func_00006A0C(void) {
    if (D_00006FB0 >= 0) {
        sceKernelDeleteVpl(D_00006FB0);
        D_00006FB0 = -1;
    }
}

INCLUDE_ASM("nonmatchings/registry", func_00006A48);

void func_00006AC0(s32 arg0) {
    sceKernelFreeVpl(D_00006FB0, arg0);
}
