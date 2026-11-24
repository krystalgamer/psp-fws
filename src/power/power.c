/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "power_decls.h"

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_9CE06934);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", func_00000464);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", func_000004BC);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePowerRegisterCallback);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePowerUnregisterCallback);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_A9D22232);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_BAFA3DF0);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", func_0000096C);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", func_00000A3C);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_442BFBAC);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", module_start);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", module_reboot_before);

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

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_6D2CA84B);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_23BB0A60);

u8 scePower_driver_D7B9C925(void) {
    return D_0000614A;
}

u8 scePower_driver_2B51FE2F(void) {
    return D_00006149;
}

u8 scePower_driver_E8685403(void) {
    return D_0000614E;
}

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", func_00000DD4);

INCLUDE_RODATA("tmp/asm/282/power/nonmatchings/power", D_00005D60);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", func_00000E18);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_23C31FFE);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_FA97A599);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_B3EDD801);

void scePower_driver_D6D016EF(s32 arg0) {
    func_000012B4(arg0, 0);
}

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", func_000012B4);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePowerWaitRequestCompletion);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", func_0000147C);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", func_00001700);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", func_00001754);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", func_00002414);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", func_0000250C);

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

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_CA3D34C1);

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

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_0442D852);

s32 scePower_driver_0074EF9B(void) {
    return D_00006180.unk3C;
}

s32 scePower_driver_F535D928(s32 arg0) {
    D_000061B8 = arg0;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", func_00002880);

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

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", func_000029BC);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", func_000029F8);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePowerTick);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_1BA2FCAE);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", func_00002C78);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", func_00002DD0);

s32 func_00002E48(void) {
    sceKernelReleaseSubIntrHandler(0x1E, 0x1A);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_EDC13FE5);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_7F30B3B1);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_972CE941);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", func_00002F98);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", func_00002FA0);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePowerSetCpuClockFrequency);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePowerSetBusClockFrequency);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", func_000032EC);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_E0B7A95D);

s32 scePower_driver_C23AC778(void) {
    return D_0000B3A4;
}

s32 func_00003A98(void) {
    sceKernelDeleteSema(D_0000B348);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", func_00003AC0);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", func_00003B14);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_57A098B4);

s32 scePower_driver_55D2D789(s32 *arg0, s32 *arg1) {
    if (arg0 != NULL) {
        *arg0 = (s32) D_0000B380;
    }
    if (arg1 != NULL) {
        *arg1 = (s32) D_0000B382;
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_DD27F119);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_75F91FE4);

s32 scePower_driver_06C83A4F(s32 *arg0, s32 *arg1) {
    if (arg0 != NULL) {
        *arg0 = (s32) D_0000B388;
    }
    if (arg1 != NULL) {
        *arg1 = (s32) D_0000B38A;
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_4E759486);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_53C1255D);

s32 scePower_driver_8762BCE6(s32 *arg0, s32 *arg1) {
    if (arg0 != NULL) {
        *arg0 = (s32) D_0000B390;
    }
    if (arg1 != NULL) {
        *arg1 = (s32) D_0000B392;
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_CAE2A4CA);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_D24E6BEB);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_35B7662E);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_F9B4DEA1);

s32 scePowerGetCpuClockFrequency(void) {
    return D_0000B358;
}

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePowerGetCpuClockFrequencyFloat);

s32 scePowerGetBusClockFrequencyInt(void) {
    return D_0000B35C;
}

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePowerGetBusClockFrequencyFloat);

s32 scePowerGetPllClockFrequencyInt(void) {
    return D_0000B354;
}

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePowerGetPllClockFrequencyFloat);

s32 scePowerSetClockFrequency(s32 arg0, s32 arg1, s32 arg2) {
    return func_000032EC(arg0, arg1, arg2);
}

void scePower_driver_A4E93389(s32 arg0, s32 arg1, s32 arg2) {
    func_000032EC(arg0, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", func_00003DB8);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", func_00003E3C);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", func_00003F14);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", func_00004548);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_DD3D4DAC);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_733F973B);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_90285886);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_B4432BC8);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_78A1A796);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_94F5A53F);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePowerGetBatteryLifeTime);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_862AE1A6);

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

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", func_00004C7C);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_27F3292C);

s32 scePower_driver_E8E4E204(void) {
    return D_0000B3B4;
}

s32 scePower_driver_B999184C(void) {
    return D_0000B3B8;
}

s32 scePower_driver_680860E3(void) {
    return D_0000B3C4;
}

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_166922EC);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePowerIsPowerOnline);

s32 scePowerIsBatteryExist(void) {
    return D_0000B3DC != 0;
}

s32 scePowerIsBatteryCharging(void) {
    s32 temp_v0;

    temp_v0 = scePower_driver_B4432BC8();
    return ((temp_v0 ^ 2) == 0) ? 0 : temp_v0;
}

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePowerIsLowBattery);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_FD18A0FF);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePowerGetBatteryLifePercent);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_28E12023);

INCLUDE_ASM("tmp/asm/282/power/nonmatchings/power", scePower_driver_483CE86B);

s32 scePower_driver_23436A4A(void) {
    return 0x802B0010;
}

s32 func_00004FE0(void) {
    D_0000B404 = 0;
    return 0;
}
