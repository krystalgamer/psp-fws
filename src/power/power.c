/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "power_decls.h"

INCLUDE_ASM("nonmatchings/power", scePower_driver_9CE06934);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", func_00000174);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/power", func_00000464);
#endif

INCLUDE_ASM("nonmatchings/power", func_000004BC);

INCLUDE_ASM("nonmatchings/power", scePowerRegisterCallback);

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/power", scePowerUnregisterCallback);

INCLUDE_ASM("nonmatchings/power", scePower_driver_A9D22232);

INCLUDE_ASM("nonmatchings/power", scePower_driver_BAFA3DF0);
#else
INCLUDE_ASM("nonmatchings/power", scePowerUnregitserCallback);
#endif

INCLUDE_ASM("nonmatchings/power", func_0000096C);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", func_00000994);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/power", func_00000A3C);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/power", scePower_driver_442BFBAC);
#endif

INCLUDE_ASM("nonmatchings/power", module_start);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/power", module_reboot_before);
#else
s32 module_reboot_before(void) {
    scePowerSetClockFrequency(0xDE, 0xDE, 0x6F);
    sceSysEventForKernel_D7D3FDCD(&D_00003C60);
    sceSyscon_driver_E540E532(0, 0);
    sceSyscon_driver_AD555CE5(0, 0);
    func_00001B1C();
    func_000024BC();
    func_00002E14();
    func_0000250C();
    return 0;
}
#endif

#if FW_VERSION < 282
s32 scePower_driver_AD5BB433(void) {
    sceSysEventForKernel_D7D3FDCD(&D_00003C60);
    sceSyscon_driver_E540E532(0, 0);
    sceSyscon_driver_AD555CE5(0, 0);
    func_00001B1C();
    func_000024BC();
    func_00002E14();
    func_0000250C();
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 scePower_driver_C71EE866(s8 arg0) {
    D_00005889 = arg0;
    return 0;
}

s32 scePower_driver_D66EF08D(s32 arg0) {
    s32 var_a0;

    var_a0 = 0;
    if ((((u8) D_00005889 == 1) & (arg0 >= 0xDF)) || (((u8) D_00005889 == 2) & (arg0 >= 0x10B))) {
        var_a0 = 0x802B0300;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 282
s32 scePower_driver_AD5BB433(void) {
    sceSysEventForKernel_D7D3FDCD(&D_00005F00);
    sceSyscon_driver_E540E532(0, 0);
    sceSyscon_driver_AD555CE5(0, 0);
    func_00002E48();
    func_00003A98();
    func_00004BF8();
    func_0000250C();
    return 0;
}

s32 scePower_driver_C71EE866(s8 arg0) {
    D_0000614D = arg0;
    return 0;
}

s32 scePower_driver_D66EF08D(s32 arg0) {
    s32 var_a0;

    var_a0 = 0;
    if ((((u8) D_0000614D == 1) & (arg0 >= 0xDF)) || (((u8) D_0000614D == 2) & (arg0 >= 0x10B))) {
        var_a0 = 0x802B0300;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/power", scePower_driver_6D2CA84B);
#else
s32 scePower_driver_6D2CA84B(void) {
    if (D_00003DC4 == 0) {

    } else {
        scePower_driver_166922EC();
    }
    return 0;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/power", scePower_driver_23BB0A60);
#else
s32 scePower_driver_23BB0A60(void) {
    if (D_00003DC4 == 0) {

    } else {
        scePower_driver_DD3D4DAC();
    }
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
u8 scePower_driver_D7B9C925(void) {
    return D_00004FC6;
}

u8 scePower_driver_2B51FE2F(void) {
    return D_00004FC5;
}

u8 scePower_driver_E8685403(void) {
    return D_00004FC9;
}
#endif

#if FW_VERSION >= 282
u8 scePower_driver_D7B9C925(void) {
    return D_0000614A;
}

u8 scePower_driver_2B51FE2F(void) {
    return D_00006149;
}

u8 scePower_driver_E8685403(void) {
    return D_0000614E;
}
#endif

INCLUDE_ASM("nonmatchings/power", func_00000DD4);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", scePower_driver_23C31FFE);

INCLUDE_ASM("nonmatchings/power", scePower_driver_FA97A599);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/power", func_0000054C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", scePowerWaitRequestCompletion);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", func_00000C38);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/power", func_00000658);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", func_00000D20);
#endif

INCLUDE_RODATA("nonmatchings/power", D_00005D60);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/power", D_00004CF0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", func_00000F08);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/power", func_00000CF4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/power", D_00003B7C);

INCLUDE_ASM("nonmatchings/power", func_000008CC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/power", func_00000E18);

INCLUDE_ASM("nonmatchings/power", scePower_driver_23C31FFE);

INCLUDE_ASM("nonmatchings/power", scePower_driver_FA97A599);

INCLUDE_ASM("nonmatchings/power", scePower_driver_B3EDD801);

void scePower_driver_D6D016EF(s32 arg0) {
    func_000012B4(arg0, 0);
}

INCLUDE_ASM("nonmatchings/power", func_000012B4);

INCLUDE_ASM("nonmatchings/power", scePowerWaitRequestCompletion);

INCLUDE_ASM("nonmatchings/power", func_0000147C);

INCLUDE_ASM("nonmatchings/power", func_00001700);

INCLUDE_ASM("nonmatchings/power", func_00001754);
#endif

INCLUDE_ASM("nonmatchings/power", func_00002414);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", func_00001178);
#else
INCLUDE_ASM("nonmatchings/power", func_0000250C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_0000250C(void) {
    sceKernelSetEventFlag(M2C_FIELD(&D_00003E00, s32 *, 0), 0x80000000U);
    sceKernelWaitThreadEnd(M2C_FIELD(&D_00003E00, s32 *, 8), NULL);
    sceSuspendForKernel_BDE686CD(0);
    sceSyscon_driver_F281805D(0, 0);
    sceSyscon_driver_7479DB05(0, 0);
    sceKernelDeleteSema(M2C_FIELD(&D_00003E00, s32 *, 4));
    sceKernelDeleteEventFlag(M2C_FIELD(&D_00003E00, s32 *, 0));
    SysMemForKernel_B2C7AA36(SysMemForKernel_CDA3A2F7(), 0x200000, 0xF);
    SysMemForKernel_B2C7AA36(SysMemForKernel_960B888C(), 0x200000, 0xF);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_0000250C(void) {
    sceKernelSetEventFlag(M2C_FIELD(&D_00003E00, s32 *, 0), 0x80000000U);
    sceKernelWaitThreadEnd(M2C_FIELD(&D_00003E00, s32 *, 4), NULL);
    sceSuspendForKernel_BDE686CD(0);
    sceSyscon_driver_F281805D(0, 0);
    sceSyscon_driver_7479DB05(0, 0);
    sceKernelDeleteEventFlag(M2C_FIELD(&D_00003E00, s32 *, 0));
    return 0;
}
#endif

#if FW_VERSION < 282
s32 scePower_driver_0CD21B1F(s32 arg0) {
    D_00003E08 = arg0 & 3;
    return 0;
}

s32 scePower_driver_165CE085(void) {
    return D_00003E08;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", scePower_driver_B3EDD801);

s32 scePower_driver_79DB9421(void) {
    s32 temp_s1;
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_00001EF4(0, 1);
    setK1(temp_s0);
    M2C_VFIELD(&D_00003E00, s32, 0x28) = 1;
    temp_s1 = sceKernelCpuSuspendIntr();
    sceKernelClearEventFlag(M2C_VFIELD(&D_00003E00, s32, 0), 0xFFFEFFFFU);
    sceKernelSetEventFlag(M2C_VFIELD(&D_00003E00, s32, 0), 0x40000U);
    sceKernelCpuResumeIntr(temp_s1);
    return 0;
}

void scePower_D6D016EF(s32 arg0) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_00001EF4(arg0, 1);
    setK1(temp_s0);
}

void scePower_driver_D6D016EF(s32 arg0) {
    func_00001EF4(arg0, 0);
}
#endif

#if FW_VERSION >= 282
s32 scePower_driver_0CD21B1F(s32 arg0) {
    D_0000618C = arg0 & 3;
    return 0;
}

s32 scePower_driver_165CE085(void) {
    return D_0000618C;
}

s32 scePower_driver_79DB9421(void) {
    s32 temp_s1;
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_000012B4(0, 1);
    setK1(temp_s0);
    D_00006180.unk30 = 1;
    temp_s1 = sceKernelCpuSuspendIntr();
    sceKernelClearEventFlag(M2C_VFIELD(&D_00006180, s32, 0), 0xFFFEFFFFU);
    sceKernelSetEventFlag(M2C_VFIELD(&D_00006180, s32, 0), 0x40000U);
    sceKernelCpuResumeIntr(temp_s1);
    return 0;
}

void scePower_D6D016EF(s32 arg0) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_000012B4(arg0, 1);
    setK1(temp_s0);
}
#endif

INCLUDE_ASM("nonmatchings/power", scePower_CA3D34C1);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/power", scePower_driver_CA3D34C1);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void scePower_driver_CA3D34C1(s32 arg0) {
    func_00001FEC(arg0, 0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/power", func_00001334);

INCLUDE_ASM("nonmatchings/power", func_00001364);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 scePower_driver_7FA406DD(void) {
    return (M2C_VFIELD(&D_00003E00, s32, 0x20) | M2C_VFIELD(&D_00003E00, s32, 0x24)) != 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 scePower_driver_7FA406DD(void) {
    return M2C_VFIELD(&D_00003E00, s32, 0x20);
}
#endif

#if FW_VERSION == 100
s32 scePower_driver_7FA406DD(void) {
    return M2C_VFIELD(&D_00003E00, s32, 0x18);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 scePower_driver_DB62C9CF(void) {
    s32 temp_s0;
    s32 temp_v0;

    temp_v0 = sceKernelCpuSuspendIntr();
    temp_s0 = M2C_VFIELD(&D_00003E00, s32, 0x20);
    M2C_VFIELD(&D_00003E00, s32, 0x20) = 0;
    sceKernelCpuResumeIntr(temp_v0);
    return temp_s0;
}
#endif

#if FW_VERSION == 100
s32 scePower_driver_DB62C9CF(void) {
    s32 temp_s0;
    s32 temp_v0;

    temp_v0 = sceKernelCpuSuspendIntr();
    temp_s0 = M2C_VFIELD(&D_00003E00, s32, 0x18);
    M2C_VFIELD(&D_00003E00, s32, 0x18) = 0;
    sceKernelCpuResumeIntr(temp_v0);
    return temp_s0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", scePower_driver_2B7C7CF4);

INCLUDE_ASM("nonmatchings/power", scePowerRequestSuspend);

INCLUDE_ASM("nonmatchings/power", scePower_driver_2875994B);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", scePower_driver_0442D852);

s32 scePower_driver_0074EF9B(void) {
    return M2C_VFIELD(&D_00003E00, s32, 0x34);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 scePower_driver_0074EF9B(void) {
    return M2C_VFIELD(&D_00003E00, s32, 0x30);
}
#endif

#if FW_VERSION == 100
s32 scePower_driver_0074EF9B(void) {
    return M2C_VFIELD(&D_00003E00, s32, 0x24);
}
#endif

#if FW_VERSION < 282
s32 scePower_driver_F535D928(s32 arg0) {
    D_00003E20 = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", func_00001EF4);

INCLUDE_ASM("nonmatchings/power", func_00001FEC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/power", func_000014A0);

INCLUDE_ASM("nonmatchings/power", func_0000157C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", func_00001624);
#else
void scePower_driver_CA3D34C1(s32 arg0) {
    func_00002880(arg0, 0);
}

s32 scePower_driver_7FA406DD(void) {
    return (D_00006180.unk28 | D_00006180.unk2C) != 0;
}

s32 scePower_driver_DB62C9CF(void) {
    s32 temp_s0;
    s32 temp_v0;

    temp_v0 = sceKernelCpuSuspendIntr();
    temp_s0 = D_00006180.unk28;
    D_00006180.unk28 = 0;
    sceKernelCpuResumeIntr(temp_v0);
    return temp_s0;
}

s32 scePower_driver_2B7C7CF4(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelSetEventFlag(D_00006180.unk0, 0x10U);
    setK1(temp_s0);
    return 0;
}

s32 scePowerRequestSuspend(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelSetEventFlag(D_00006180.unk0, 0x20U);
    setK1(temp_s0);
    return 0;
}

s32 scePower_driver_2875994B(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelSetEventFlag(D_00006180.unk0, 0x40U);
    setK1(temp_s0);
    return 0;
}

INCLUDE_ASM("nonmatchings/power", scePower_driver_0442D852);

s32 scePower_driver_0074EF9B(void) {
    return D_00006180.unk3C;
}

s32 scePower_driver_F535D928(s32 arg0) {
    D_000061B8 = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/power", func_00002880);

void func_00002944(s32 arg0) {
    s32 var_a0;
    s32 var_a1;

    if (arg0 != 0) {
        sceKernelSetEventFlag(D_00006180.unk0, 1U);
        sceKernelClearEventFlag(D_00006180.unk0, -3U);
        var_a0 = 0;
        var_a1 = 0x80000000;
    } else {
        sceKernelSetEventFlag(D_00006180.unk0, 2U);
        sceKernelClearEventFlag(D_00006180.unk0, -2U);
        var_a0 = 0x80000000;
        var_a1 = 0;
    }
    func_0000096C(var_a0, var_a1, 0);
}
#endif

INCLUDE_ASM("nonmatchings/power", func_000029BC);

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/power", func_000016D8);
#endif

INCLUDE_ASM("nonmatchings/power", func_000029F8);

INCLUDE_ASM("nonmatchings/power", scePowerTick);

INCLUDE_ASM("nonmatchings/power", scePower_driver_1BA2FCAE);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", func_00001978);
#else
INCLUDE_ASM("nonmatchings/power", func_00002C78);
#endif

#if FW_VERSION < 282
s32 func_00002DD0(void) {
    memset(&D_00008E80, 0, 0x104);
    D_00008E80 = sceKernelGetSystemTimeLow();
    sceKernelRegisterSubIntrHandler(0x1E, 0x1A, &func_00001978, 0);
    sceKernelEnableSubIntr(0x1E, 0x1A);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/power", func_00002DD0);
#endif

#if FW_VERSION < 282
s32 func_00001B1C(void) {
    sceKernelReleaseSubIntrHandler(0x1E, 0x1A);
    return 0;
}
#else
s32 func_00002E48(void) {
    sceKernelReleaseSubIntrHandler(0x1E, 0x1A);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/power", scePower_driver_EDC13FE5);

#if FW_VERSION < 282
s32 scePower_driver_7F30B3B1(void) {
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/power", scePower_driver_7F30B3B1);
#endif

#if FW_VERSION < 282
s32 scePower_driver_972CE941(void) {
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/power", scePower_driver_972CE941);
#endif

INCLUDE_ASM("nonmatchings/power", func_00002F98);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", func_0000294C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/power", func_00001BAC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/power", func_00002FA0);
#endif

INCLUDE_ASM("nonmatchings/power", scePowerSetCpuClockFrequency);

INCLUDE_ASM("nonmatchings/power", scePowerSetBusClockFrequency);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", scePowerSetClockFrequency);
#else
INCLUDE_ASM("nonmatchings/power", func_000032EC);
#endif

INCLUDE_ASM("nonmatchings/power", scePower_driver_E0B7A95D);

s32 scePower_driver_C23AC778(void) {
    return D_0000B3A4;
}

#if FW_VERSION < 282
s32 func_000024BC(void) {
    sceKernelDeleteSema(D_00008F84);
    return 0;
}
#else
s32 func_00003A98(void) {
    sceKernelDeleteSema(D_0000B348);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/power", func_00003AC0);

INCLUDE_ASM("nonmatchings/power", func_00003B14);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/power", scePower_driver_57A098B4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 scePower_driver_55D2D789(s32 *arg0, s32 *arg1) {
    if (arg0 != NULL) {
        *arg0 = (s32) D_0000AABC;
    }
    if (arg1 != NULL) {
        *arg1 = (s32) D_0000AABE;
    }
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
s32 scePower_driver_55D2D789(s32 *arg0, s32 *arg1) {
    if (arg0 != NULL) {
        *arg0 = (s32) D_0000A1F8;
    }
    if (arg1 != NULL) {
        *arg1 = (s32) D_0000A1FA;
    }
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", scePower_driver_DD27F119);

INCLUDE_ASM("nonmatchings/power", scePower_driver_75F91FE4);

s32 scePower_driver_06C83A4F(s32 *arg0, s32 *arg1) {
    if (arg0 != NULL) {
        *arg0 = (s32) D_0000AAC4;
    }
    if (arg1 != NULL) {
        *arg1 = (s32) D_0000AAC6;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/power", scePower_driver_4E759486);

INCLUDE_ASM("nonmatchings/power", scePower_driver_53C1255D);

s32 scePower_driver_8762BCE6(s32 *arg0, s32 *arg1) {
    if (arg0 != NULL) {
        *arg0 = (s32) D_0000AACC;
    }
    if (arg1 != NULL) {
        *arg1 = (s32) D_0000AACE;
    }
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 scePower_driver_55D2D789(s32 *arg0, s32 *arg1) {
    if (arg0 != NULL) {
        *arg0 = (s32) D_0000B380;
    }
    if (arg1 != NULL) {
        *arg1 = (s32) D_0000B382;
    }
    return 0;
}
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 250) || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/power", scePower_driver_DD27F119);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/power", scePower_driver_75F91FE4);

s32 scePower_driver_06C83A4F(s32 *arg0, s32 *arg1) {
    if (arg0 != NULL) {
        *arg0 = (s32) D_0000B388;
    }
    if (arg1 != NULL) {
        *arg1 = (s32) D_0000B38A;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/power", scePower_driver_4E759486);

INCLUDE_ASM("nonmatchings/power", scePower_driver_53C1255D);

s32 scePower_driver_8762BCE6(s32 *arg0, s32 *arg1) {
    if (arg0 != NULL) {
        *arg0 = (s32) D_0000B390;
    }
    if (arg1 != NULL) {
        *arg1 = (s32) D_0000B392;
    }
    return 0;
}
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/power", scePower_driver_CAE2A4CA);
#endif

INCLUDE_ASM("nonmatchings/power", scePower_driver_D24E6BEB);

INCLUDE_ASM("nonmatchings/power", scePower_driver_35B7662E);

INCLUDE_ASM("nonmatchings/power", scePower_driver_F9B4DEA1);

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 scePowerGetCpuClockFrequency(void) {
    return D_0000AF94;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
s32 scePowerGetCpuClockFrequencyInt(void) {
    return D_0000A1D0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", scePowerGetCpuClockFrequencyFloat);

s32 scePowerGetBusClockFrequencyInt(void) {
    return D_0000B35C;
}

INCLUDE_ASM("nonmatchings/power", scePowerGetBusClockFrequencyFloat);

s32 scePowerGetPllClockFrequencyInt(void) {
    return D_0000A1CC;
}

INCLUDE_ASM("nonmatchings/power", scePowerGetPllClockFrequencyFloat);

INCLUDE_ASM("nonmatchings/power", func_00003140);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/power", D_00004E08);

INCLUDE_RODATA("nonmatchings/power", D_00004E0C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", func_00003220);

INCLUDE_ASM("nonmatchings/power", func_00003814);
#endif

#if FW_VERSION == 100
s32 scePowerGetCpuClockFrequency(void) {
    return D_00008F90;
}

s32 scePowerGetBusClockFrequency(void) {
    return D_0000B35C;
}

INCLUDE_ASM("nonmatchings/power", func_00002600);

INCLUDE_ASM("nonmatchings/power", scePowerIsBatteryCharging);
#endif

#if FW_VERSION >= 282
s32 scePowerGetCpuClockFrequency(void) {
    return D_0000B358;
}

INCLUDE_ASM("nonmatchings/power", scePowerGetCpuClockFrequencyFloat);

s32 scePowerGetBusClockFrequencyInt(void) {
    return D_0000B35C;
}

INCLUDE_ASM("nonmatchings/power", scePowerGetBusClockFrequencyFloat);

s32 scePowerGetPllClockFrequencyInt(void) {
    return D_0000B354;
}

INCLUDE_ASM("nonmatchings/power", scePowerGetPllClockFrequencyFloat);
#endif

#if FW_VERSION >= 300
s32 scePowerSetClockFrequency(s32 arg0, s32 arg1, s32 arg2) {
    if (D_0000B40C == 0) {

    } else {
        sceKernelDelayThread(0x03938700U);
    }
    return func_000032EC(arg0, arg1, arg2);
}

void scePower_driver_A4E93389(s32 arg0, s32 arg1, s32 arg2) {
    func_000032EC(arg0, arg1, arg2);
}

void scePower_driver_545A7F3C(s32 arg0, s32 arg1, s32 arg2) {
    func_000032EC(arg0, arg1, arg2);
}
#endif

#if FW_VERSION == 282
s32 scePowerSetClockFrequency(s32 arg0, s32 arg1, s32 arg2) {
    return func_000032EC(arg0, arg1, arg2);
}

void scePower_driver_A4E93389(s32 arg0, s32 arg1, s32 arg2) {
    func_000032EC(arg0, arg1, arg2);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/power", func_00003DB8);

INCLUDE_ASM("nonmatchings/power", func_00003E3C);

INCLUDE_ASM("nonmatchings/power", func_00003F14);

INCLUDE_ASM("nonmatchings/power", func_00004548);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/power", scePower_driver_DD3D4DAC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/power", scePower_driver_733F973B);

INCLUDE_ASM("nonmatchings/power", scePower_driver_90285886);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/power", scePower_driver_B4432BC8);
#endif

INCLUDE_ASM("nonmatchings/power", scePower_driver_78A1A796);

INCLUDE_ASM("nonmatchings/power", scePower_driver_94F5A53F);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/power", scePowerGetBatteryLifeTime);
#endif

INCLUDE_ASM("nonmatchings/power", scePower_driver_862AE1A6);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", scePower_driver_23436A4A);
#endif

#if FW_VERSION == 271
s32 func_00002D70(void) {
    M2C_UNK *temp_v0;
    s32 temp_v0_2;

    memset(&D_00008FC8, 0, 0x58);
    temp_v0 = "ScePowerBattery";
    M2C_FIELD(&D_00008FC8, s32 *, 8) = -1;
    M2C_FIELD(&D_00008FC8, s32 *, 0x24) = -1;
    M2C_FIELD(&D_00008FC8, s32 *, 0) = sceKernelCreateEventFlag(temp_v0, 1U, 0U, NULL);
    temp_v0_2 = sceKernelCreateThread(temp_v0, (s32) &func_00003220, 0x40, 0x800U, 1U, NULL);
    M2C_FIELD(&D_00008FC8, s32 *, 4) = temp_v0_2;
    sceKernelStartThread(temp_v0_2, 0U, NULL);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
s32 func_00002D70(void) {
    M2C_UNK *temp_v0;
    s32 temp_v0_2;

    memset(&D_00008FC8, 0, 0x58);
    temp_v0 = "ScePowerBattery";
    M2C_FIELD(&D_00008FC8, s32 *, 8) = -1;
    M2C_FIELD(&D_00008FC8, s32 *, 0x24) = -1;
    M2C_FIELD(&D_00008FC8, s32 *, 0) = sceKernelCreateEventFlag(temp_v0, 1U, 0U, NULL);
    temp_v0_2 = sceKernelCreateThread(temp_v0, (s32) &func_00003220, 0x40, 0x400U, 1U, NULL);
    M2C_FIELD(&D_00008FC8, s32 *, 4) = temp_v0_2;
    sceKernelStartThread(temp_v0_2, 0U, NULL);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00002D70(void) {
    M2C_UNK *temp_v0;
    s32 temp_v0_2;

    memset(&D_00008FC8, 0, 0x50);
    temp_v0 = "ScePowerBattery";
    M2C_FIELD(&D_00008FC8, s32 *, 8) = -1;
    M2C_FIELD(&D_00008FC8, s32 *, 0) = sceKernelCreateEventFlag(temp_v0, 1U, 0U, NULL);
    temp_v0_2 = sceKernelCreateThread(temp_v0, (s32) &func_00002600, 0x40, 0x400U, 1U, NULL);
    M2C_FIELD(&D_00008FC8, s32 *, 4) = temp_v0_2;
    sceKernelStartThread(temp_v0_2, 0U, NULL);
    return 0;
}
#endif

#if FW_VERSION < 282
s32 func_00002E14(void) {
    sceKernelSetEventFlag(M2C_FIELD(&D_00008FC8, s32 *, 0), 0x80000000U);
    sceKernelWaitThreadEnd(M2C_FIELD(&D_00008FC8, s32 *, 4), NULL);
    sceKernelDeleteThread(M2C_FIELD(&D_00008FC8, s32 *, 4));
    sceKernelDeleteEventFlag(M2C_FIELD(&D_00008FC8, s32 *, 0));
    return 0;
}

s32 func_00002E6C(s32 arg0, s32 arg1) {
    M2C_VFIELD(&D_00008FC8, s32, 0x10) = arg1;
    M2C_VFIELD(&D_00008FC8, s32, 0xC) = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/power", func_00002E84);

s32 func_00002EFC(void) {
    return D_00008FDC == 0;
}

INCLUDE_ASM("nonmatchings/power", func_00002F0C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 scePower_driver_27F3292C(void) {
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    sceKernelSetEventFlag(D_00008FC8, 0x10000000U);
    sceKernelClearEventFlag(D_00008FC8, 0xEFFFFFFFU);
    sceKernelCpuResumeIntr(temp_s1);
    return 0;
}
#endif

#if FW_VERSION < 282
s32 scePower_driver_E8E4E204(void) {
    return D_00008FD4;
}

s32 scePower_driver_B999184C(void) {
    return D_00008FD8;
}
#endif

#if FW_VERSION >= 300
s32 func_00004B54(void) {
    M2C_UNK *temp_v0;
    s32 temp_v0_2;

    memset(&D_0000B3AC.unk0, 0, 0xBC);
    temp_v0 = "ScePowerBattery";
    D_0000B3AC.unk28 = -1;
    D_0000B3AC.unk0 = sceKernelCreateEventFlag(temp_v0, 1U, 0U, NULL);
    temp_v0_2 = sceKernelCreateThread(temp_v0, (s32) &func_00003F14, 0x40, 0x800U, 0x100001U, NULL);
    D_0000B3AC.unk4 = temp_v0_2;
    sceKernelStartThread(temp_v0_2, 0U, NULL);
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_00004B54(void) {
    M2C_UNK *temp_v0;
    s32 temp_v0_2;

    memset(&D_0000B3AC, 0, 0xBC);
    temp_v0 = "ScePowerBattery";
    D_0000B3AC.unk28 = -1;
    D_0000B3AC.unk0 = sceKernelCreateEventFlag(temp_v0, 1U, 0U, NULL);
    temp_v0_2 = sceKernelCreateThread(temp_v0, (s32) &func_00003F14, 0x40, 0x800U, 1U, NULL);
    D_0000B3AC.unk4 = temp_v0_2;
    sceKernelStartThread(temp_v0_2, 0U, NULL);
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 func_00004BF8(void) {
    sceKernelSetEventFlag(D_0000B3AC.unk0, 0x80000000U);
    sceKernelWaitThreadEnd(D_0000B3AC.unk4, NULL);
    sceKernelDeleteThread(D_0000B3AC.unk4);
    sceKernelDeleteEventFlag(D_0000B3AC.unk0);
    return 0;
}

s32 func_00004C50(s32 arg0, s32 arg1, s32 arg2) {
    D_0000B3AC.unk18 = arg2;
    D_0000B3AC.unk8 = arg0;
    D_0000B3AC.unkC = arg1;
    return 0;
}

s32 func_00004C6C(void) {
    return D_0000B3BC == 0;
}

INCLUDE_ASM("nonmatchings/power", func_00004C7C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/power", scePower_driver_27F3292C);
#endif

#if FW_VERSION >= 300
s32 scePower_driver_27F3292C(void) {
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    sceKernelSetEventFlag(D_0000B3AC.unk0, 0x10000000U);
    sceKernelClearEventFlag(D_0000B3AC.unk0, 0xEFFFFFFFU);
    sceKernelCpuResumeIntr(temp_s1);
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 scePower_driver_E8E4E204(void) {
    return D_0000B3B4;
}

s32 scePower_driver_B999184C(void) {
    return D_0000B3B8;
}

s32 scePower_driver_680860E3(void) {
    return D_0000B3C4;
}
#endif

INCLUDE_ASM("nonmatchings/power", scePower_driver_166922EC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/power", scePower_driver_DD3D4DAC);
#endif

INCLUDE_ASM("nonmatchings/power", scePowerIsPowerOnline);

#if FW_VERSION >= 150
s32 scePowerIsBatteryExist(void) {
    return D_0000B3DC != 0;
}
#else
s32 scePowerIsBatteryExist(void) {
    return D_0000B3DC == 2;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/power", scePowerIsBatteryCharging);
#endif

#if FW_VERSION >= 151
s32 scePowerIsBatteryCharging(void) {
    s32 temp_v0;

    temp_v0 = scePower_driver_B4432BC8();
    return ((temp_v0 ^ 2) == 0) ? 0 : temp_v0;
}
#endif

INCLUDE_ASM("nonmatchings/power", scePowerIsLowBattery);

INCLUDE_ASM("nonmatchings/power", scePower_driver_FD18A0FF);

INCLUDE_ASM("nonmatchings/power", scePowerGetBatteryLifePercent);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/power", scePowerGetBatteryLifeTime);
#endif

INCLUDE_ASM("nonmatchings/power", scePower_driver_28E12023);

INCLUDE_ASM("nonmatchings/power", scePower_driver_483CE86B);

#if FW_VERSION >= 282
s32 scePower_driver_23436A4A(void) {
    return 0x802B0010;
}

s32 func_00004FE0(void) {
    D_0000B404 = 0;
    return 0;
}
#endif
