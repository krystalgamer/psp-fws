/* compiler[271]: 1.9.2 */
/* cflags[271]: -O2 -frename-registers -mext */
/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -frename-registers -mext */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "ata_decls.h"

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/ata", D_00003F1C);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/ata", func_00000000);
#else
s32 sceAtaInit(s32 clk) {
    SceAtaAhbBlock *b = sceAtaAhbGetAtaBlock();
    s32 ret;
    func_00003264();
    ret = sceAtaAhbInit();
    if (ret != 0) {
        return ret;
    }
    sceSysregAtaResetDisable();
    if (clk != 0) {
        ret = sceSysregAtaClkSelect(clk);
        if (ret < 0) {
            return ret;
        }
    }
    ret = func_00000280();
    if (ret != 0) {
        return ret;
    }
    b->pioMode = clk;
    D_00004180 = 0;
    return 0;
}

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

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 sceAtaStop(u32 flags) {
    s32 n;
    s32 ret;
    n = D_000042E0 - 1;
    if (n < 0) {
        return 0x8021101C;
    }
    D_000042E0 = n;
    if (n == 0) {
        ret = sceAtaDisableClkIo(flags);
        if (ret != 0) {
            return ret;
        }
    }
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 sceAtaStop(u32 flags) {
    s32 n;
    s32 ret;
    n = D_000046A4 - 1;
    if (n < 0) {
        return 0x8021101C;
    }
    D_000046A4 = n;
    if (n == 0) {
        ret = sceAtaDisableClkIo(flags);
        if (ret != 0) {
            return ret;
        }
    }
    return 0;
}
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
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
SceAtaDrive *sceAtaGetAtaDrive(u32 id) {
    SceAtaDrive *drive = NULL;
    if (id == 0) {
        drive = &D_000042C0;
    }
    return drive;
}
#endif

#if FW_VERSION >= 201
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

#if FW_VERSION < 201
s32 sceAtaScanDevice(SceAtaDrive *drive) {
    s32 ret;
    if (drive == NULL) {
        return 0x80010016;
    }
    while ((ret = sceAtaWaitBusBusy2()) == 0x8001006E) {
    }
    if (ret != 0) {
        return ret;
    }
    ret = func_0000171C(drive);
    if (ret != 0) {
        return ret;
    }
    while ((ret = sceAtaWaitBusBusy2()) == 0x8001006E) {
    }
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/ata", sceAtaScanDevice);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", func_00000D24);
#endif

#if FW_VERSION < 150
s32 func_00000E8C(SceAtaDrive *drive, s32 mode, s32 size) {
    s32 i;
    if (drive == NULL) {
        return 0x80010016;
    }
    if ((size & 1) || size < 1) {
        return 0x8021101A;
    }
    if (mode == 1) {
        if (drive->cmd == NULL || ((SceAtaCmd *)drive->cmd)->buf == NULL) {
            return 0x8021101D;
        }
        for (i = 0; i < size / 2; i++) {
            *((u16 *)((SceAtaCmd *)drive->cmd)->buf)++ = ATA_DATA;
        }
    } else if (mode == 2) {
        if (drive->unk20 == NULL || ((SceAtaCmdState *)drive->unk20)->buf == NULL) {
            return 0x8021100F;
        }
        for (i = 0; i < size / 2; i++) {
            *((u16 *)((SceAtaCmdState *)drive->unk20)->buf)++ = ATA_DATA;
        }
    }
    return 0;
}
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

s32 sceAtaIsNormalDriveStat(u32 id) {
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
s32 func_0000176C(void) {
    sceAtaStop(0x80);
    func_00002134();
    sceSysregAtaResetEnable();
    return 0;
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/ata", func_00001218);

s32 func_00001274(u32 usec) {
    s32 intr;

    intr = sceKernelCpuSuspendIntr();
    D_00004260 = 0;
    sceKernelCpuResumeIntr(intr);
    return sceKernelSetAlarm(usec, func_000018B8, &D_00004260);
}

s32 func_000012C8(void) {
    return D_00004260;
}

void func_000012D4(s32 alarm) {
    s32 intr;

    intr = sceKernelCpuSuspendIntr();
    D_00004260 = 0;
    sceKernelCpuResumeIntr(intr);
    sceKernelCancelAlarm(alarm);
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

#if FW_VERSION < 150
s32 sceAtaSetupAtaBlock(void) {
    u16 v[2];
    *(u32 *)v = 0;
    sceAtaBufferSelectSemaphore((u32 *)v);
    if (v[1] == 1 || v[0] == 0x33) {
        func_00001810();
        return 0;
    }
    return 0xC021A005;
}
#else
INCLUDE_ASM("nonmatchings/ata", sceAtaSetupAtaBlock);
#endif

#if FW_VERSION == 100
s32 sceAtaDoSoftResetBit(void) {
    s32 i;
    sceSysregAtaBusClockEnable();
    asm volatile("sync");
    ATA_DEVCTL = 6;
    asm volatile("sync");
    i = 4999;
loop:
    if (--i >= 0) {
        goto loop;
    }
    ATA_DEVCTL = 2;
    asm volatile("sync");
    sceKernelDelayThread(2000);
    return sceAtaWaitBusBusy1();
}
#else
s32 sceAtaDoSoftResetBit(void) {
    s32 i;
    sceSysregAtaBusClockEnable();
#if FW_VERSION < 150
    asm volatile("sync");
#endif
    ATA_DEVCTL = 4;
    asm volatile("sync");
    i = 5999;
loop:
    if (--i >= 0) {
        goto loop;
    }
    ATA_DEVCTL = 0;
    asm volatile("sync");
    i = 200000;
loop2:
    if (--i != 0) {
        goto loop2;
    }
    return sceAtaWaitBusBusy1();
}
#endif

s32 sceAtaCheckDeviceReady(SceAtaDrive *drive) {
    s32 ret = 0x80010016;
    if (drive == NULL) {
        return ret;
    }
    ret = 1;
    if (drive->state == 2) {
        return ret;
    }
    sceAtaScanDevice(drive);
    sceAtaSelectDevice(drive->driveId);
    return 0x80210001;
}

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

#if (FW_VERSION >= 150 && FW_VERSION < 271) || FW_VERSION >= 282
s32 sceAtaIsReadableDriveStat(u32 id) {
    SceAtaDrive *drive = sceAtaGetAtaDrive(id);
    u32 stat = 0x80211009;
    if (drive != NULL) {
        stat = drive->driveStat;
    }
    if (stat == 0x80211009) {
        return 0x80211009;
    }
    if (stat & 0x20) {
        return 1;
    }
    return 0;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/ata", sceAtaIsReadableDriveStat);
#endif

#if FW_VERSION < 150
s32 sceAtaIsReadableDriveStat(u32 id) {
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

#if (FW_VERSION >= 150 && FW_VERSION < 271) || FW_VERSION >= 282
s32 sceAtaIsNormalDriveStat(u32 id) {
    SceAtaDrive *drive = sceAtaGetAtaDrive(id);
    u32 stat = 0x80211009;
    if (drive != NULL) {
        stat = drive->driveStat;
    }
    if (stat == 0x80211009) {
        return 0x80211009;
    }
    if (stat & 0x10) {
        return 1;
    }
    return 0;
}
#endif

#if FW_VERSION == 271
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

#if FW_VERSION < 150
s32 func_0000171C(SceAtaDrive *drive) {
    u8 ns, sec, lc, hc;
    ns = ATA_NSECTOR;
    sec = ATA_SECTOR;
    lc = ATA_LCYL;
    hc = ATA_HCYL;
    ATA_SELECT;
    asm volatile("sync");
    if (ns != 1 || sec != 1) {
        drive->state = 0;
        drive->driveId = -1;
        drive->driveStat = 0;
        return 0x80211003;
    }
    if (lc == 0x14 && hc == 0xEB) {
        drive->state = 2;
    } else if (lc == 0 && hc == 0) {
        drive->state = 1;
    } else {
        drive->state = 0;
    }
    if (drive->state == 0) {
        drive->driveStat = 0;
        return 0x80211003;
    }
    drive->driveId = (ATA_SELECT >> 4) & 1;
    sceAtaSetDriveStat(drive->driveId, 1);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", func_0000171C);
#endif

#if FW_VERSION < 150
void func_00001810(void) {
    SceAtaAhbBlock *b = sceAtaAhbGetAtaBlock();
    sceAtaAhbSetPioTiming(b->pioMode, b->pioArg);
    if (b->flags & 0x20) {
        sceAtaAhbSetMDMATiming(b->pioMode, b->flags & 7);
    } else if (b->flags & 0x40) {
        sceAtaAhbSetUDMATiming(b->pioMode, 0);
    }
    if (b->pioCtl != 0) {
        sceAtaAhbSetPioCtl(b->pioCtl, 1, 2);
    } else {
        sceAtaAhbSetPioCtl(0, 0, 0);
    }
    sceAtaAhbSetAHBCtl(b->ahb0, b->ahb1, b->ahb2);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
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

s32 sceAtaAhbInit(void) {
    return func_000033D4();
}

s32 sceAtaAhbTerm(void) {
    return func_0000341C();
}
#endif

#if FW_VERSION < 282
void sceAtaAhbSetAtaBlock(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    volatile SceAtaAhbBlock *b = &D_00004280;

    b->ahb2 = arg5;
    b->pioArg = arg0;
    b->flags = arg1;
    b->pioCtl = arg2;
    b->ahb0 = arg3;
    b->ahb1 = arg4;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
SceAtaAhbBlock *func_00002160(void) {
    return &D_00004280;
}
#endif

#if FW_VERSION < 150
SceAtaAhbBlock *sceAtaAhbGetAtaBlock(void) {
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
    volatile SceAtaAhbBlock *b = &D_00004700;

    b->ahb2 = arg5;
    b->pioArg = arg0;
    b->flags = arg1;
    b->pioCtl = arg2;
    b->ahb0 = arg3;
    b->ahb1 = arg4;
}

SceAtaAhbBlock *sceAtaAhbGetAtaBlock(void) {
    return &D_00004700;
}
#endif

#if FW_VERSION >= 150
void sceAta_driver_4222D6F3(void) {
    asm volatile("sync");
    ATA_AHB_REG(0x10) = 0;
    asm volatile("sync");
}
#else
void sceAta_driver_4D225674(void) {
    asm volatile("sync");
    ATA_AHB_REG(0x10) = 0;
    asm volatile("sync");
}
#endif

#if FW_VERSION >= 150
void sceAta_driver_4D225674(void) {
    asm volatile("sync");
    ATA_AHB_REG(0x10) = 1;
    asm volatile("sync");
}
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
void func_000021D0(u32 mask) {
    asm volatile("sync");
    ATA_AHB_REG(0x44) |= mask & 0xFFFF0000;
    asm volatile("sync");
}

u32 func_000021FC(void) {
    return ATA_AHB_REG(0x44) & 0xFFFF0000;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
u32 func_00002214(void) {
    return ATA_AHB_REG(0x44) & 0xFFFF;
}

void func_00002228(u32 mask) {
    asm volatile("sync");
    *(volatile u32 *)0xBD600044 |= ~mask & 0xFFFF;
    asm volatile("sync");
}

s32 func_00002254(u32 *stat) {
    if (stat == NULL) {
        return 0x800001FF;
    }
    *stat = ATA_AHB_REG(0x4C);
    return 0;
}
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
s32 sceAta_driver_76C0923D(u32 *stat) {
    if (stat == NULL) {
        return 0x800001FF;
    }
    *stat = ATA_AHB_REG(0x40);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_0000229C(u32 *stat) {
    if (stat == NULL) {
        return 0x800001FF;
    }
    *stat = ATA_AHB_REG(0x00);
    return 0;
}
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
void sceAta_driver_F61EAFC0(void) {
    ATA_AHB_REG(0x38) = 0x10100;
    asm volatile("sync");
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", func_000022E0);

u32 func_0000233C(void) {
    return *(volatile u32 *)0xBC100040 & 3;
}
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
