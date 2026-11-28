/* cflags: -O2 -frename-registers */
#include "common.h"
#include "ata_decls.h"

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/ata", D_00003F1C);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/ata", func_00000000);
#else
INCLUDE_ASM("nonmatchings/ata", sceAtaInit);

SceAtaDrive *sceAtaStart(u32 id) {
    SceAtaDrive *drive;
    if (D_00004180 >= 2) {
        return NULL;
    }
    D_00004180++;
    if (sceAtaEnableClkIo(0x80) != 0) {
        return NULL;
    }
    drive = sceAtaGetAtaDrive(id);
    if (drive == NULL) {
        return NULL;
    }
    return drive;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/ata", sceAtaStart);
#else
s32 sceAtaStop(u32 flags) {
    s32 n;
    s32 ret;
    sceAtaAhbSetIntrMask(0x1130000);
    n = D_00004180 - 1;
    if (n < 0) {
        return 0x8021101C;
    }
    D_00004180 = n;
    if (n == 0) {
        ret = sceAtaDisableClkIo(flags);
        if (ret != 0) {
            return ret;
        }
    }
    return 0;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/ata", sceAtaStop);
#endif

s32 sceAtaDisableClkIo(u32 flags) {
    if (flags == 0x80) {
        sceSysregAtaIoDisable();
        sceSysregAtaClkDisable();
        sceSysregAtaBusClockDisable();
    } else {
        if (!(flags & 0x40)) {
            return 0x8021101D;
        }
        sceSysregAtaIoDisable();
        if (flags & 0x20) {
            sceSysregAtaClkDisable();
            if (flags & 0x10) {
                sceSysregAtaBusClockDisable();
            }
        }
    }
    return 0;
}

s32 sceAtaEnableClkIo(u32 flags) {
    sceSysregAtaResetDisable();
    if (flags == 0x80) {
        sceSysregAtaBusClockEnable();
        sceSysregAtaClkEnable();
        sceSysregAtaIoEnable();
    } else {
        if (!(flags & 0x10)) {
            return 0x8021101D;
        }
        sceSysregAtaBusClockEnable();
        if (flags & 0x20) {
            sceSysregAtaClkEnable();
            if (flags & 0x40) {
                sceSysregAtaIoEnable();
            }
        }
    }
    return 0;
}

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/ata", func_0000025C);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/ata", func_00000280);

SceAtaDrive *sceAtaGetAtaDrive(u32 id) {
    if (id < 2) {
        return &D_00004200[id];
    }
    return NULL;
}
#else
INCLUDE_ASM("nonmatchings/ata", sceAtaGetAtaDrive);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/ata", D_000041DC);

INCLUDE_RODATA("nonmatchings/ata", D_000041E0);

INCLUDE_RODATA("nonmatchings/ata", D_00004200);

INCLUDE_RODATA("nonmatchings/ata", D_00004218);

INCLUDE_RODATA("nonmatchings/ata", D_0000422C);

INCLUDE_RODATA("nonmatchings/ata", D_00004240);

INCLUDE_RODATA("nonmatchings/ata", D_00004258);

INCLUDE_RODATA("nonmatchings/ata", D_00004268);

INCLUDE_RODATA("nonmatchings/ata", D_00004450);

INCLUDE_RODATA("nonmatchings/ata", D_00004458);

INCLUDE_RODATA("nonmatchings/ata", D_00004460);

INCLUDE_RODATA("nonmatchings/ata", D_0000446C);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/ata", D_00004470);

INCLUDE_RODATA("nonmatchings/ata", D_000044A0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/ata", D_0000410C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/ata", D_00004488);

INCLUDE_RODATA("nonmatchings/ata", D_000044B8);
#endif

INCLUDE_ASM("nonmatchings/ata", sceAtaWaitBusBusy1);

INCLUDE_ASM("nonmatchings/ata", sceAtaWaitBusBusy2);

INCLUDE_ASM("nonmatchings/ata", sceAtaSelectDevice);

INCLUDE_ASM("nonmatchings/ata", sceAtaCheckXferReady);

INCLUDE_ASM("nonmatchings/ata", sceAtaAccessDataPort);

INCLUDE_ASM("nonmatchings/ata", sceAtaCheckPacketCmdComplete);

INCLUDE_ASM("nonmatchings/ata", sceAtaScanDevice);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", func_00000D24);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/ata", func_00000E8C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ata", func_00000D40);
#endif

INCLUDE_ASM("nonmatchings/ata", func_00000E3C);

#if FW_VERSION >= 150
void sceAtaSetDriveStat(s32 arg0, s32 arg1) {
    s32 temp_s1;
    SceAtaDrive *temp_v0;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v0 = sceAtaGetAtaDrive(arg0);
    if (temp_v0 != NULL) {
        temp_v0->driveStat |= arg1;
    }
    sceKernelCpuResumeIntr(temp_s1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", func_0000104C);
#endif

#if FW_VERSION < 150
void sceAtaSetDriveStat(s32 arg0, s32 arg1) {
    s32 temp_s0;
    SceAtaDrive *temp_v0;

    temp_s0 = sceKernelCpuSuspendIntr();
    temp_v0 = sceAtaGetAtaDrive(0);
    if (temp_v0 != NULL) {
        temp_v0->driveStat |= arg1;
    }
    sceKernelCpuResumeIntr(temp_s0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/ata", func_00000FF0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", sceAtaWaitBusBusyIE);

INCLUDE_ASM("nonmatchings/ata", sceAtaAccessDataPortIE);

INCLUDE_ASM("nonmatchings/ata", sceAtaCheckXferReadyIE);

INCLUDE_ASM("nonmatchings/ata", sceAtaCheckPacketCmdCompleteIE);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", sceAtaAccessDataPortTS);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 sceAtaGetIntrStateFlag(void) {
    return D_00004328;
}

void sceAtaSetIntrStateFlag(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00004328 |= arg0;
    sceKernelCpuResumeIntr(temp_a0);
}

void sceAtaClearIntrStateFlag(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00004328 &= ~arg0;
    sceKernelCpuResumeIntr(temp_a0);
}
#endif

#if FW_VERSION < 150
s32 func_00001134(u32 id) {
    SceAtaDrive *drive = sceAtaGetAtaDrive(id);
    SceAtaCmdState *st = drive->unk20;
    if (st != NULL && st->driveStat == 1) {
        return 1;
    }
    return 0;
}

s32 sceAtaIsNormalDriveStat(void) {
    SceAtaDrive *temp_v0;
    s32 var_v0;

    temp_v0 = sceAtaGetAtaDrive(0);
    var_v0 = 0x80211009;
    if (temp_v0 != NULL) {
        var_v0 = temp_v0->driveStat;
    }
    s32 cmp_tmp = var_v0 & 0x10;
    return cmp_tmp != 0;
}

void sceAtaSetIntrFlag(s32 arg0) {
    D_00004250 = arg0;
}

s32 sceAtaGetIntrFlag(void) {
    return D_00004250;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ata", func_00000FFC);
#endif

#if (FW_VERSION >= 102 && FW_VERSION < 150) || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ata", sceAtaWaitBusBusyIE);

INCLUDE_ASM("nonmatchings/ata", sceAtaAccessDataPortIE);

INCLUDE_ASM("nonmatchings/ata", sceAtaCheckXferReadyIE);

INCLUDE_ASM("nonmatchings/ata", sceAtaCheckPacketCmdCompleteIE);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ata", sceAtaAccessDataPortTS);

s32 sceAtaGetIntrStateFlag(void) {
    return D_000046EC;
}

void sceAtaSetIntrStateFlag(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_000046EC |= arg0;
    sceKernelCpuResumeIntr(temp_a0);
}

void sceAtaClearIntrStateFlag(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_000046EC &= ~arg0;
    sceKernelCpuResumeIntr(temp_a0);
}
#endif

void sceAta_driver_638EEA14(SceAtaIntrFunc func) {
    s32 intr = sceKernelCpuSuspendIntr();
    D_000046A8.func = func;
    D_000046A8.gp = pspGetGp();
    sceKernelCpuResumeIntr(intr);
}

void sceAta_driver_B5982381(void) {
    D_000046A8.func = NULL;
    D_000046A8.gp = 0;
}

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", func_0000176C);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/ata", func_00001218);

void func_00001274(u32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00004260 = 0;
    sceKernelCpuResumeIntr(temp_a0);
    sceKernelSetAlarm(arg0, (s32) &func_000018B8, &D_00004260);
}

s32 func_000012C8(void) {
    return D_00004260;
}

void func_000012D4(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00004260 = 0;
    sceKernelCpuResumeIntr(temp_a0);
    sceKernelCancelAlarm(arg0);
}

s32 sceAtaTerm(void) {
    SceAtaDrive *drive = D_00004200;
    s32 i;
    for (i = 1; i >= 0; i--) {
        sceKernelDeleteSema(drive->semaId);
        sceKernelDeleteEventFlag(drive->evfId);
        drive++;
    }
    func_000034CC();
    sceAtaStop(0x80);
    sceAtaAhbTerm();
    sceSysregAtaResetEnable();
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ata", func_000019F0);
#endif

INCLUDE_ASM("nonmatchings/ata", sceAtaSetupAtaBlock);

INCLUDE_ASM("nonmatchings/ata", sceAtaDoSoftResetBit);

INCLUDE_ASM("nonmatchings/ata", sceAtaCheckDeviceReady);

s32 sceAtaSetDeviceIntr(SceAtaIntrFunc func, void *arg) {
    s32 intr = sceKernelCpuSuspendIntr();
    D_000046A8.device.func = func;
    D_000046A8.device.arg = arg;
    D_000046A8.device.gp = pspGetGp();
    sceKernelCpuResumeIntr(intr);
    return 0;
}

s32 sceAtaSetDescriptorTableIntr(SceAtaIntrFunc func, void *arg) {
    s32 intr = sceKernelCpuSuspendIntr();
    D_000046A8.descTable.func = func;
    D_000046A8.descTable.arg = arg;
    D_000046A8.descTable.gp = pspGetGp();
    sceKernelCpuResumeIntr(intr);
    return 0;
}

s32 sceAtaSetBusErrorIntr(SceAtaIntrFunc func, void *arg) {
    s32 intr = sceKernelCpuSuspendIntr();
    D_000046A8.busError.func = func;
    D_000046A8.busError.arg = arg;
    D_000046A8.busError.gp = pspGetGp();
    sceKernelCpuResumeIntr(intr);
    return 0;
}

s32 sceAta_driver_689FCB7D(SceAtaIntrFunc func, void *arg) {
    s32 intr = sceKernelCpuSuspendIntr();
    D_000046A8.unk20.func = func;
    D_000046A8.unk20.arg = arg;
    D_000046A8.unk20.gp = pspGetGp();
    sceKernelCpuResumeIntr(intr);
    return 0;
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", sceAtaGetAtaCallBack);
#else
SceAtaCallBack *sceAtaGetAtaCallBack(void) {
    return &D_000046A8;
}
#endif

s32 sceAta_driver_C144826E(SceAtaIntrFunc func) {
    s32 intr = sceKernelCpuSuspendIntr();
    D_000046A8.execPacketCmd = func;
    D_000046A8.execPacketCmdGp = pspGetGp();
    sceKernelCpuResumeIntr(intr);
    return 0;
}

#if FW_VERSION >= 150
s32 sceAtaGetDriveStat(s32 arg0) {
    SceAtaDrive *temp_v0;
    s32 var_v0;

    temp_v0 = sceAtaGetAtaDrive(arg0);
    var_v0 = 0x80211009;
    if (temp_v0 != NULL) {
        var_v0 = temp_v0->driveStat;
    }
    return var_v0;
}
#else
s32 sceAtaGetDriveStat(s32 arg0) {
    SceAtaDrive *temp_v0;
    s32 var_v0;

    temp_v0 = sceAtaGetAtaDrive(0);
    var_v0 = 0x80211009;
    if (temp_v0 != NULL) {
        var_v0 = temp_v0->driveStat;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/ata", sceAtaIsReadableDriveStat);
#else
s32 sceAtaIsReadableDriveStat(void) {
    SceAtaDrive *temp_v0;
    s32 var_v0;

    temp_v0 = sceAtaGetAtaDrive(0);
    var_v0 = 0x80211009;
    if (temp_v0 != NULL) {
        var_v0 = temp_v0->driveStat;
    }
    s32 cmp_tmp = var_v0 & 0x80;
    return cmp_tmp != 0;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/ata", sceAtaIsNormalDriveStat);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void sceAtaSetIntrFlag(s32 arg0) {
    D_00004324 = arg0;
}

s32 sceAtaGetIntrFlag(void) {
    return D_00004324;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", sceAtaClearDriveStat);
#endif

#if FW_VERSION < 201
void sceAtaClearDriveStat(s32 arg0, s32 arg1) {
    s32 temp_s1;
    SceAtaDrive *temp_v0;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v0 = sceAtaGetAtaDrive(arg0);
    if (temp_v0 != NULL) {
        temp_v0->driveStat &= ~arg1;
    }
    sceKernelCpuResumeIntr(temp_s1);
}
#endif

#if FW_VERSION >= 282
void sceAtaSetIntrFlag(s32 arg0) {
    D_000046E8 = arg0;
}

s32 sceAtaGetIntrFlag(void) {
    return D_000046E8;
}

void sceAtaClearDriveStat(s32 arg0, M2C_UNK arg1) {
    s32 temp_s1;
    SceAtaDrive *temp_v0;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v0 = sceAtaGetAtaDrive(arg0);
    if (temp_v0 != NULL) {
        temp_v0->driveStat &= ~arg1;
    }
    sceKernelCpuResumeIntr(temp_s1);
}
#endif

#if FW_VERSION < 150
s32 module_start(void) {
    return sceAtaInit(1) != 0;
}
#endif

#if (FW_VERSION >= 250 && FW_VERSION < 271) || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/ata", module_start);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 271
s32 module_start(void) {
    func_00003C58();
    return func_00000000(1) != 0;
}
#endif

#if FW_VERSION >= 300
s32 module_start(void) {
    func_00003FB0();
    return func_00000000(1) != 0;
}
#endif

#if FW_VERSION == 201
s32 module_start(void) {
    s32 var_v1;

    func_00003C58();
    var_v1 = 0;
    if (func_00000000(1) != 0) {
        Kprintf("%sERROR: %s: ATA initialization failed\n", &D_00003F1C, "sceAtaEntry");
        var_v1 = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", func_0000171C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/ata", func_00001810);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", sceAtaAhbSetupBus);

INCLUDE_ASM("nonmatchings/ata", func_00001E28);

INCLUDE_ASM("nonmatchings/ata", func_00001EC0);

INCLUDE_ASM("nonmatchings/ata", func_00001F20);

INCLUDE_ASM("nonmatchings/ata", func_00001FFC);
#endif

#if FW_VERSION < 150
s32 func_000018B8(s32 *flag) {
    *flag = 1;
    return 0;
}

s32 sceAtaAhbSetPioCtl(s32 n, s32 a, s32 b) {
    u32 v;
    s32 cnt;
    asm volatile("sync");
    v = ATA_AHB_REG(0x34);
    if (((a != 0) & (b != 0)) == 0) {
        ATA_AHB_REG(0x34) = v & ~0x300;
    } else {
        v |= 0x300;
        cnt = 1;
        if (n > 0) {
            cnt = 0x50;
            if (n < 0x50) {
                cnt = n + 1;
            }
        }
        ATA_AHB_REG(0x34) = v | (cnt << 24);
        asm volatile("sync");
    }
    return 0;
}

s32 sceAtaAhbSetPioTiming(s32 mode, s32 arg) {
    asm volatile("sync");
    if (mode == 1) {
        func_00002570(arg);
    } else if (mode == 0) {
        func_000025E4(arg);
    } else if (mode == 2) {
        func_00002500(arg);
    } else {
        func_00002570(arg);
    }
    return 0;
}

s32 sceAtaAhbSetMDMATiming(s32 mode, s32 arg) {
    asm volatile("sync");
    if (mode == 1) {
        func_00001F14(arg);
    } else if (mode == 0) {
        func_00001F5C(arg);
    } else if (mode == 2) {
        func_00001ED8(arg);
    } else {
        func_00001F14(arg);
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/ata", sceAtaAhbSetAHBCtl);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ata", func_00001E3C);

INCLUDE_ASM("nonmatchings/ata", sceAtaAhbSetupBus);

INCLUDE_ASM("nonmatchings/ata", func_00002000);

INCLUDE_ASM("nonmatchings/ata", func_00002094);

INCLUDE_ASM("nonmatchings/ata", func_000020F4);

INCLUDE_ASM("nonmatchings/ata", func_000021D0);
#endif

#if FW_VERSION < 150
s32 sceAta_driver_E3E1EED7(s32 on) {
    u32 v;
    asm volatile("sync");
    v = ATA_AHB_REG(0x40);
    if (on) {
        if (!(v & 2)) {
            ATA_AHB_REG(0x40) |= 1;
        }
    } else {
        if (v & 2) {
            ATA_AHB_REG(0x40) &= ~1;
            asm volatile("sync");
            if (ATA_AHB_REG(0x40) & 2) {
                ATA_AHB_REG(0x40) &= ~1;
                asm volatile("sync");
            }
        }
    }
    asm volatile("sync");
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/ata", sceAta_driver_E3E1EED7);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00002120(void) {
    return 0x80211004;
}

s32 func_0000212C(void) {
    return 0;
}

void func_00002134(void) {

}
#endif

#if FW_VERSION < 150
void sceAta_driver_4222D6F3(void) {
    asm volatile("sync");
    ATA_AHB_REG(0x10) = 1;
    asm volatile("sync");
}

void sceAtaAhbInit(void) {
    func_000033D4();
}

void sceAtaAhbTerm(void) {
    func_0000341C();
}
#endif

#if FW_VERSION < 282
void sceAtaAhbSetAtaBlock(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    M2C_VFIELD(&D_00004280, s32, 0x18) = arg5;
    M2C_VFIELD(&D_00004280, s32, 4) = arg0;
    M2C_VFIELD(&D_00004280, s32, 8) = arg1;
    M2C_VFIELD(&D_00004280, s32, 0xC) = arg2;
    M2C_VFIELD(&D_00004280, s32, 0x10) = arg3;
    M2C_VFIELD(&D_00004280, s32, 0x14) = arg4;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
M2C_UNK *func_00002160(void) {
    return &D_00004280;
}
#endif

#if FW_VERSION < 150
s32 *sceAtaAhbGetAtaBlock(void) {
    return &D_00004280;
}
#endif

#if FW_VERSION >= 282
s32 func_000022E0(void) {
    return 0x80211004;
}

s32 func_000022EC(void) {
    return 0;
}

void func_000022F4(void) {
}

void sceAtaAhbSetAtaBlock(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    D_00004700.unk18 = arg5;
    D_00004700.unk4 = arg0;
    D_00004700.unk8 = arg1;
    D_00004700.unkC = arg2;
    D_00004700.unk10 = arg3;
    D_00004700.unk14 = arg4;
}

M2C_UNK *sceAtaAhbGetAtaBlock(void) {
    return &D_00004700;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/ata", sceAta_driver_4222D6F3);
#else
void sceAta_driver_4D225674(void) {
    asm volatile("sync");
    ATA_AHB_REG(0x10) = 0;
    asm volatile("sync");
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/ata", sceAta_driver_4D225674);
#else
void sceAtaAhbEnableIntr(u32 mask) {
    asm volatile("sync");
    ATA_AHB_REG(0x44) = ~mask & 0xFFFF0000;
    asm volatile("sync");
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/ata", sceAtaAhbEnableIntr);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/ata", func_00002374);

INCLUDE_ASM("nonmatchings/ata", func_0000239C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/ata", func_000021D0);

INCLUDE_ASM("nonmatchings/ata", func_000021FC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", func_00002214);

INCLUDE_ASM("nonmatchings/ata", func_00002228);

INCLUDE_ASM("nonmatchings/ata", func_00002254);
#endif

#if FW_VERSION < 150
void sceAtaAhbSetIntrMask(u32 mask) {
    asm volatile("sync");
    ATA_AHB_REG(0x44) |= mask & 0xFFFF0000;
    asm volatile("sync");
}

u32 sceAtaAhbGetIntrMask(void) {
    asm volatile("sync");
    return ATA_AHB_REG(0x44) & 0xFFFF0000;
}

u32 sceAtaAhbReadIntr(void) {
    asm volatile("sync");
    return ATA_AHB_REG(0x44) & 0xFFFF;
}

void sceAtaAhbClearIntr(u32 mask) {
    asm volatile("sync");
    *(volatile u32 *)0xBD600044 |= ~mask & 0xFFFF;
    asm volatile("sync");
}

s32 sceAtaAhbGetDevStat(u32 *stat) {
    if (stat == NULL) {
        return 0x800001FF;
    }
    asm volatile("sync");
    *stat = ATA_AHB_REG(0x4C);
    asm volatile("sync");
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ata", func_0000238C);

INCLUDE_ASM("nonmatchings/ata", func_000023B4);

INCLUDE_ASM("nonmatchings/ata", func_000023C8);

INCLUDE_ASM("nonmatchings/ata", func_000023DC);

INCLUDE_ASM("nonmatchings/ata", func_00002408);
#endif

#if FW_VERSION < 150
s32 sceAta_driver_76C0923D(u32 *stat) {
    if (stat == NULL) {
        return 0x800001FF;
    }
    asm volatile("sync");
    *stat = ATA_AHB_REG(0x40);
    asm volatile("sync");
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/ata", sceAta_driver_76C0923D);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", func_0000229C);
#endif

#if FW_VERSION < 150
s32 sceAtaBufferSelectSemaphore(u32 *stat) {
    if (stat == NULL) {
        return 0x800001FF;
    }
    asm volatile("sync");
    *stat = ATA_AHB_REG(0x00);
    asm volatile("sync");
    return 0;
}

s32 sceAtaAhbSetUDMATiming(void) {
    return 0x80211004;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ata", func_00002450);
#endif

#if FW_VERSION < 150
void sceAta_driver_F61EAFC0(void) {
    asm volatile("sync");
    ATA_AHB_REG(0x38) = 0x10100;
    asm volatile("sync");
}
#else
INCLUDE_ASM("nonmatchings/ata", sceAta_driver_F61EAFC0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", func_000022E0);

INCLUDE_ASM("nonmatchings/ata", func_0000233C);
#endif

#if FW_VERSION < 150
s32 sceAtaAhbSetDDRSize(u32 size) {
    asm volatile("sync");
    size &= 3;
    if (size >= 4) {
        return 0x8021101D;
    }
    *(volatile u32 *)0xBC100040 |= size;
    return 0;
}

u32 sceAtaAhbGetDDRSize(void) {
    asm volatile("sync");
    return *(volatile u32 *)0xBC100040 & 3;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ata", func_00002494);

INCLUDE_ASM("nonmatchings/ata", func_000024EC);
#endif

void func_00002500(s32 mode) {
    u32 v;
    switch (mode) {
    case 1:
        v = 0x20900;
        break;
    case 2:
        v = 0x10900;
        break;
    case 3:
        v = 0x10201;
        break;
    case 4:
        v = 0x10200;
        break;
    default:
    case 0:
        v = 0x1030906;
        break;
    }
    ATA_AHB_REG(0x14) = v;
    asm volatile("sync");
}

void func_00002570(s32 mode) {
    u32 v;
    switch (mode) {
    case 0:
        v = 0x1050B0A;
        break;
    case 2:
        v = 0x10D01;
        break;
    case 3:
        v = 0x10302;
        break;
    case 4:
        v = 0x10301;
        break;
    default:
    case 1:
        v = 0x1050A01;
        break;
    }
    ATA_AHB_REG(0x14) = v;
    asm volatile("sync");
}

#if FW_VERSION >= 150
void func_000025E4(s32 mode) {
    u32 v;
    switch (mode) {
    case 0:
        v = 0x1080F0E;
        break;
    case 2:
        v = 0x1011301;
        break;
    case 3:
        v = 0x1010503;
        break;
    case 4:
        v = 0x1010401;
        break;
    default:
    case 1:
        v = 0x1080E01;
        break;
    }
    ATA_AHB_REG(0x14) = v;
    asm volatile("sync");
}
#else
INCLUDE_ASM("nonmatchings/ata", func_000025E4);

void func_00001ED8(s32 mode) {
    switch (mode) {
    case 0:
        ATA_AHB_REG(0x1C) = 0x10707;
        break;
    case 1:
        ATA_AHB_REG(0x1C) = 0x201;
        break;
    case 2:
        ATA_AHB_REG(0x1C) = 0x200;
        break;
    case 3:
        ATA_AHB_REG(0x1C) = 0x10707;
        break;
    default:
        ATA_AHB_REG(0x1C) = 0x10707;
        break;
    }
    asm volatile("sync");
}

void func_00001F14(s32 mode) {
    switch (mode) {
    case 0:
        ATA_AHB_REG(0x1C) = 0x20A0C;
        break;
    case 1:
        ATA_AHB_REG(0x1C) = 0x1010303;
        break;
    case 2:
        ATA_AHB_REG(0x1C) = 0x1010301;
        break;
    case 3:
        ATA_AHB_REG(0x1C) = 0x20A0C;
        break;
    default:
        ATA_AHB_REG(0x1C) = 0x20A0C;
        break;
    }
    asm volatile("sync");
}

void func_00001F5C(s32 mode) {
    switch (mode) {
    case 0:
        ATA_AHB_REG(0x1C) = 0x1080E10;
        break;
    case 1:
        ATA_AHB_REG(0x1C) = 0x1010503;
        break;
    case 2:
        ATA_AHB_REG(0x1C) = 0x1010402;
        break;
    case 3:
        ATA_AHB_REG(0x1C) = 0x1080E10;
        break;
    default:
        ATA_AHB_REG(0x1C) = 0x1080E10;
        break;
    }
    asm volatile("sync");
}
#endif

INCLUDE_ASM("nonmatchings/ata", sceAtaGetByteLimitCount);

INCLUDE_ASM("nonmatchings/ata", sceAtaExecSetFeaturesCmd);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", func_0000251C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/ata", func_00002074);
#endif

#if FW_VERSION == 271
s32 func_000020F8(void *arg0, void *arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0x80211008;
    if (((arg0 == NULL) | (arg1 == NULL)) == 0) {
        var_v0 = 0;
        M2C_FIELD(arg0, void **, 0x18) = arg1;
        M2C_FIELD(arg1, s32 *, 0xC) = arg2;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
s32 func_000020F8(void *arg0, void *arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0x80211008;
    if (((arg0 == NULL) | (arg1 == NULL)) == 0) {
        var_v0 = 0;
        M2C_FIELD(arg1, s32 *, 0xC) = arg2;
        M2C_FIELD(arg0, void **, 0x18) = arg1;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 150
s32 func_000020F8(void *arg0, void *arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0x80211008;
    if (((arg0 == NULL) | (arg1 == NULL)) == 0) {
        var_v0 = 0;
        M2C_FIELD(arg1, s32 *, 0x10) = arg2;
        M2C_FIELD(arg0, void **, 0x1C) = arg1;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/ata", func_00002124);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", func_00002618);

INCLUDE_ASM("nonmatchings/ata", func_000026D0);

INCLUDE_ASM("nonmatchings/ata", func_00002970);

INCLUDE_ASM("nonmatchings/ata", func_000029F4);

INCLUDE_ASM("nonmatchings/ata", func_00002A98);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/ata", sceAtaExecCmd);

INCLUDE_ASM("nonmatchings/ata", sceAtaExecDeviceResetCmd);

INCLUDE_ASM("nonmatchings/ata", sceAtaExecPSPResetCmd);

INCLUDE_ASM("nonmatchings/ata", sceAtaExecIPDCmd);

INCLUDE_ASM("nonmatchings/ata", sceAtaExecIdleStandbyCmd);

INCLUDE_ASM("nonmatchings/ata", sceAtaExecSeekCmd);

INCLUDE_RODATA("nonmatchings/ata", D_00003F30);

INCLUDE_RODATA("nonmatchings/ata", D_00003F38);

INCLUDE_RODATA("nonmatchings/ata", D_00003F48);

INCLUDE_RODATA("nonmatchings/ata", D_00003F50);

INCLUDE_RODATA("nonmatchings/ata", D_00003F58);

INCLUDE_RODATA("nonmatchings/ata", D_00003F60);

INCLUDE_RODATA("nonmatchings/ata", D_00003F78);

INCLUDE_RODATA("nonmatchings/ata", D_00003F88);

INCLUDE_RODATA("nonmatchings/ata", D_00003F94);

INCLUDE_RODATA("nonmatchings/ata", D_00003F9C);

INCLUDE_RODATA("nonmatchings/ata", D_00003FB0);

INCLUDE_RODATA("nonmatchings/ata", D_00003FC8);

INCLUDE_RODATA("nonmatchings/ata", D_00003FD8);

INCLUDE_RODATA("nonmatchings/ata", D_00003FE4);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/ata", D_00003FF4);
#endif

#if FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/ata", D_00004008);

INCLUDE_RODATA("nonmatchings/ata", D_000040D0);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/ata", D_000050CC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ata", func_00002718);

s32 func_0000277C(struct Unk_func_0000277C_0 *arg0, struct Unk_func_0000277C_1 *arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0x80211008;
    if (((arg0 == NULL) | (arg1 == NULL)) == 0) {
        var_v0 = 0;
        arg0->unk1C = arg1;
        arg1->unkC = arg2;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/ata", func_000027A8);

INCLUDE_ASM("nonmatchings/ata", func_00002860);

INCLUDE_ASM("nonmatchings/ata", func_00002B0C);

INCLUDE_ASM("nonmatchings/ata", func_00002B90);

INCLUDE_ASM("nonmatchings/ata", func_00002C34);
#endif

INCLUDE_ASM("nonmatchings/ata", sceAtaExecPacketCmd);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", func_00002CE8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/ata", D_0000425C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", sceAtaExecPacketCmdIE);

INCLUDE_ASM("nonmatchings/ata", func_00002F1C);

INCLUDE_ASM("nonmatchings/ata", func_000030F8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", sceAtaExecPacketCmdTS);

INCLUDE_ASM("nonmatchings/ata", func_0000349C);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/ata", func_000029DC);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/ata", D_000050EC);
#endif

#if FW_VERSION == 102
INCLUDE_RODATA("nonmatchings/ata", D_0000510C);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/ata", func_00003378);

INCLUDE_ASM("nonmatchings/ata", func_00003570);

INCLUDE_ASM("nonmatchings/ata", func_00003768);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ata", func_00002E04);

INCLUDE_ASM("nonmatchings/ata", sceAtaExecPacketCmdIE);

INCLUDE_ASM("nonmatchings/ata", func_00002FAC);

INCLUDE_ASM("nonmatchings/ata", func_00003194);

INCLUDE_ASM("nonmatchings/ata", sceAtaExecPacketCmdTS);

INCLUDE_ASM("nonmatchings/ata", func_00003410);
#endif

INCLUDE_ASM("nonmatchings/ata", func_00003680);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", func_00003344);

INCLUDE_ASM("nonmatchings/ata", func_00003460);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/ata", func_00002AE8);

INCLUDE_ASM("nonmatchings/ata", func_00002C84);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ata", func_000036FC);

INCLUDE_ASM("nonmatchings/ata", func_00003818);
#endif

INCLUDE_ASM("nonmatchings/ata", func_000039AC);

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/ata", func_00002E58);
#endif

INCLUDE_ASM("nonmatchings/ata", func_00003A4C);

INCLUDE_ASM("nonmatchings/ata", func_00003CBC);

INCLUDE_ASM("nonmatchings/ata", func_00003D28);

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/ata", func_00003264);

INCLUDE_ASM("nonmatchings/ata", func_000032C8);

INCLUDE_ASM("nonmatchings/ata", func_000033D4);

s32 sceAtaAhbGetEventFlag(void) {
    return D_000042E0;
}

s32 func_0000341C(void) {
    return sceKernelDeleteEventFlag(D_000042E0);
}

INCLUDE_ASM("nonmatchings/ata", func_00003440);

s32 func_000034CC(void) {
    sceKernelDisableSubIntr(5, 1);
    sceKernelDisableSubIntr(5, 2);
    sceKernelDisableSubIntr(5, 3);
    sceKernelDisableSubIntr(5, 9);
    sceKernelDisableSubIntr(5, 0xA);
    sceKernelReleaseSubIntrHandler(5, 1);
    sceKernelReleaseSubIntrHandler(5, 2);
    sceKernelReleaseSubIntrHandler(5, 3);
    sceKernelReleaseSubIntrHandler(5, 9);
    sceKernelReleaseSubIntrHandler(5, 0xA);
    sceKernelDisableIntr(5);
    sceKernelReleaseIntrHandler(5);
    return 0;
}

s32 func_0000356C(s32 a0, s32 a1, s32 a2) {
    func_0000358C(a0, a2);
    return -1;
}

INCLUDE_ASM("nonmatchings/ata", func_0000358C);

s32 func_000036FC(void) {
    return 0;
}

s32 func_00003704(void) {
    return 0;
}

s32 func_0000370C(void) {
    return 0;
}

s32 func_00003714(void) {
    return 0;
}

s32 func_0000371C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/ata", func_000046C0);
#else
INCLUDE_ASM("nonmatchings/ata", sceAta_driver_BE07B3A7);
#endif

#if FW_VERSION < 282
void sceAtaDisplayReqSense(void) {

}
#else
void sceAtaDisplayReqSense(void) {
}
#endif

INCLUDE_ASM("nonmatchings/ata", sceAtaDisplayIPD);

#if FW_VERSION == 271
void func_00003C58(void) {
    D_000042A0 = __builtin_allegrex_ext(sceKernelDipswAll(), 0x10, 1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
void func_00003C58(void) {
    D_000042A0 = (sceKernelDipswAll() >> 0x10) & 1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 sceAtaIsUmdDrive(void) {
    return D_000042A0 == 0;
}

s32 sceAtaIsDvdDrive(void) {
    return D_000042A0;
}

void func_00003CA0(u32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00004370 = 0;
    sceKernelCpuResumeIntr(temp_a0);
    sceKernelSetAlarm(arg0, (s32) &func_00003D3C, &D_00004370);
}

void func_00003CF4(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00004370 = 0;
    sceKernelCpuResumeIntr(temp_a0);
    sceKernelCancelAlarm(arg0);
}

s32 func_00003D30(void) {
    return D_00004370;
}

INCLUDE_ASM("nonmatchings/ata", func_00003D3C);
#endif

#if FW_VERSION >= 282
void func_00003FB0(void) {
    D_00004640 = sceKernelDipsw(0x10);
}

s32 sceAtaIsUmdDrive(void) {
    return D_00004640 == 0;
}

s32 sceAtaIsDvdDrive(void) {
    return D_00004640;
}

void func_00003FF0(u32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00004728 = 0;
    sceKernelCpuResumeIntr(temp_a0);
    sceKernelSetAlarm(arg0, (s32) func_0000408C, &D_00004728);
}

void func_00004044(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00004728 = 0;
    sceKernelCpuResumeIntr(temp_a0);
    sceKernelCancelAlarm(arg0);
}

s32 func_00004080(void) {
    return D_00004728;
}

s32 func_0000408C(s32 *arg0) {
    *arg0 = 1;
    return 0;
}
#endif
