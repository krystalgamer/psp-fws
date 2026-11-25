#include "common.h"
#include "registry_decls.h"

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_98279CF1);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_9B25EDF1);

#if FW_VERSION >= 150
s32 module_reboot_before(void) {
    sceReg_driver_9B25EDF1();
    return 0;
}
#endif

#if FW_VERSION == 282
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
#endif

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_92E41280);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_FA8A5739);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_DEDA92BF);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_39461B4D);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_000008BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/registry", func_000006CC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/registry", func_0000086C);
#endif

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_0D69BF40);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_000008E4);

INCLUDE_ASM("nonmatchings/registry", func_00000B6C);

INCLUDE_ASM("nonmatchings/registry", func_00000B88);
#else
INCLUDE_ASM("nonmatchings/registry", func_000009F8);

INCLUDE_ASM("nonmatchings/registry", func_00000B6C);

INCLUDE_ASM("nonmatchings/registry", func_00000BC8);
#endif

INCLUDE_ASM("nonmatchings/registry", func_00000C50);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00000CA0);
#else
INCLUDE_ASM("nonmatchings/registry", func_00000D10);
#endif

INCLUDE_ASM("nonmatchings/registry", func_00000D7C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00000D9C);
#else
INCLUDE_ASM("nonmatchings/registry", func_00000DA8);
#endif

INCLUDE_ASM("nonmatchings/registry", func_00001058);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_000010B8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_000014A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/registry", func_000012B0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00001560);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00001A0C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/registry", func_00001608);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/registry", func_00001110);

INCLUDE_ASM("nonmatchings/registry", func_00001288);

INCLUDE_ASM("nonmatchings/registry", func_00001694);

INCLUDE_ASM("nonmatchings/registry", func_00001714);
#endif

INCLUDE_ASM("nonmatchings/registry", func_00001828);

#if FW_VERSION < 282
s32 func_00001730(s32 arg0, s32 *arg1) {
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

INCLUDE_ASM("nonmatchings/registry", func_00001770);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00001908);
#endif

#if FW_VERSION == 100
void func_00001908(s32 arg0, M2C_UNK **arg1, M2C_UNK **arg2) {
    if (arg0 == 1) {
        *arg1 = "/registry/system.ireg";
        *arg2 = "/registry/system.dreg";
        return;
    }
    *arg1 = NULL;
    *arg2 = NULL;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00001938);
#else
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
#endif

INCLUDE_ASM("nonmatchings/registry", func_00001AC4);

INCLUDE_ASM("nonmatchings/registry", func_00001B7C);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00001EC4);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/registry", func_00001A9C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/registry", func_00002064);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/registry", func_00001B9C);

INCLUDE_ASM("nonmatchings/registry", func_00001CC4);

INCLUDE_ASM("nonmatchings/registry", func_00001D7C);
#endif

INCLUDE_ASM("nonmatchings/registry", func_00001E2C);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_1D8A762E);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_4CA16893);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_0CAE832B);

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/registry", func_00002350);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/registry", func_00002228);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_0000236C);
#else
INCLUDE_ASM("nonmatchings/registry", func_0000263C);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_BE8C1263);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_835ECE6F);

INCLUDE_ASM("nonmatchings/registry", func_00002A64);
#endif

INCLUDE_ASM("nonmatchings/registry", func_00002C3C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00002630);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/registry", func_00002848);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/registry", func_00002884);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00002948);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/registry", func_00002A64);

INCLUDE_ASM("nonmatchings/registry", func_00002B44);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/registry", func_00002B18);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/registry", func_00003498);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/registry", func_00002C78);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/registry", func_00002D2C);

INCLUDE_ASM("nonmatchings/registry", func_00002F18);

INCLUDE_ASM("nonmatchings/registry", func_000030C0);

INCLUDE_ASM("nonmatchings/registry", func_0000319C);
#endif

INCLUDE_ASM("nonmatchings/registry", func_00003340);

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/registry", func_00002D14);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/registry", func_00002F10);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00003070);

INCLUDE_ASM("nonmatchings/registry", func_000031D4);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/registry", func_00003228);

INCLUDE_ASM("nonmatchings/registry", func_00003260);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/registry", func_000033C4);

INCLUDE_ASM("nonmatchings/registry", func_00003414);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/registry", func_000033AC);

INCLUDE_ASM("nonmatchings/registry", func_00003594);

INCLUDE_ASM("nonmatchings/registry", func_00003738);

INCLUDE_ASM("nonmatchings/registry", func_0000396C);

INCLUDE_ASM("nonmatchings/registry", func_000039A4);
#endif

INCLUDE_ASM("nonmatchings/registry", func_000039E0);

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/registry", func_00003318);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/registry", func_000034E4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00003594);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/registry", func_000034D0);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/registry", func_0000377C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/registry", func_00003A5C);

INCLUDE_ASM("nonmatchings/registry", func_00003ACC);

INCLUDE_ASM("nonmatchings/registry", func_00003C68);
#endif

INCLUDE_ASM("nonmatchings/registry", func_00003D1C);

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/registry", func_00003604);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/registry", func_00003910);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/registry", func_00003DAC);
#endif

INCLUDE_ASM("nonmatchings/registry", func_00003E60);

INCLUDE_ASM("nonmatchings/registry", func_00003EA4);

#if FW_VERSION < 282
s32 func_00003A3C(void) {
    s32 var_v0;
    void *temp_v0;

    temp_v0 = func_00000B6C();
    var_v0 = 0x80082715;
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s8 *, 7) = 0;
        M2C_FIELD(temp_v0, s8 *, 5) = 0;
        M2C_FIELD(temp_v0, s8 *, 6) = 0;
        M2C_FIELD(temp_v0, s8 *, 4) = 1;
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00003A80);
#endif

#if FW_VERSION == 100
s32 func_00003A80(void) {
    s32 var_v0;
    void *temp_v0;

    temp_v0 = func_00003EA4();
    var_v0 = 0x8008272E;
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 4) = 1;
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 282
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
#endif

INCLUDE_ASM("nonmatchings/registry", func_00003FE4);

#if FW_VERSION == 282
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
#else
s32 func_00004058(void) {
    s32 var_v0;
    void *temp_v0;

    temp_v0 = func_00003EA4();
    var_v0 = 0x8008272E;
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 4) = 0;
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/registry", func_000038A0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/registry", func_00004058);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/registry", func_00003B2C);
#endif

INCLUDE_ASM("nonmatchings/registry", func_000040A0);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_000045B8);

INCLUDE_ASM("nonmatchings/registry", func_00004768);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/registry", func_000040E4);

INCLUDE_ASM("nonmatchings/registry", func_00004270);
#endif

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_57641A81);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_17768E14);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_D4475AA8);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_C5768D02);

INCLUDE_ASM("nonmatchings/registry", func_00004A28);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_28A8E98A);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_30BE0259);

INCLUDE_ASM("nonmatchings/registry", func_00004D6C);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_3615BC87);

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/registry", func_00004778);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/registry", func_000046A8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/registry", func_00004F2C);
#endif

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_2C0DB9DD);

INCLUDE_ASM("nonmatchings/registry", sceReg_driver_2D211135);

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/registry", func_00004AF4);

INCLUDE_ASM("nonmatchings/registry", func_00004BB8);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/registry", func_00004AF0);

INCLUDE_ASM("nonmatchings/registry", func_00004BE8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/registry", func_000052B0);

INCLUDE_ASM("nonmatchings/registry", func_00005390);
#endif

INCLUDE_ASM("nonmatchings/registry", func_00005548);

INCLUDE_ASM("nonmatchings/registry", func_00005608);

INCLUDE_ASM("nonmatchings/registry", func_00005718);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_000050F4);
#else
INCLUDE_ASM("nonmatchings/registry", func_0000589C);
#endif

INCLUDE_ASM("nonmatchings/registry", func_000059A0);

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/registry", func_00005284);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/registry", func_00005340);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/registry", func_00005A88);
#endif

INCLUDE_ASM("nonmatchings/registry", func_00005F74);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_000058D8);
#else
INCLUDE_ASM("nonmatchings/registry", func_00005FF0);
#endif

INCLUDE_ASM("nonmatchings/registry", func_00006524);

INCLUDE_ASM("nonmatchings/registry", func_000065E4);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/registry", func_00006EF0);
#endif

#if FW_VERSION == 152
s32 func_00006EF0(s32 arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (sceIoClose(arg0) >= 0) {
        var_v1 = (sceIoDevctl(&D_00006F8C, 0x5802, NULL, 0U, NULL, 0U) >= 0) ? 0 : 0x80084E2B;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/registry", func_00005F54);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00005F78);
#else
s32 func_00006674(s32 arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (sceIoClose(arg0) >= 0) {
        var_v1 = (sceIoDevctl(&D_00006F8C, 0x5802, NULL, 0U, NULL, 0U) >= 0) ? 0 : 0x80084E2B;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/registry", func_000066D0);
#endif

INCLUDE_ASM("nonmatchings/registry", func_000067A0);

INCLUDE_ASM("nonmatchings/registry", func_00006828);

INCLUDE_ASM("nonmatchings/registry", func_00006888);

INCLUDE_ASM("nonmatchings/registry", func_000068EC);

#if FW_VERSION < 282
s32 func_000061B4(s32 arg0) {
    return arg0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/registry", D_00006F8C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/registry", D_000066DC);
#else
s32 func_00006998(s32 arg0) {
    return arg0;
}
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/registry", D_00006F8C);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/registry", D_00006F94);
#endif

INCLUDE_ASM("nonmatchings/registry", func_000069A0);

#if FW_VERSION < 282
void func_00006228(void) {
    if (D_000066F0 >= 0) {
        sceKernelDeleteVpl(D_000066F0);
        D_000066F0 = -1;
    }
}
#else
void func_00006A0C(void) {
    if (D_00006FB0 >= 0) {
        sceKernelDeleteVpl(D_00006FB0);
        D_00006FB0 = -1;
    }
}
#endif

INCLUDE_ASM("nonmatchings/registry", func_00006A48);

#if FW_VERSION < 282
void func_000062E0(s32 arg0) {
    sceKernelFreeVpl(D_000066F0, arg0);
}
#else
void func_00006AC0(s32 arg0) {
    sceKernelFreeVpl(D_00006FB0, arg0);
}
#endif
