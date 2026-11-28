/* cflags: -O2 -frename-registers */
#include "common.h"
#include "ata_decls.h"

INCLUDE_ASM("nonmatchings/atacmd", sceAtaGetByteLimitCount);

#if FW_VERSION < 150
s32 sceAtaExecSetFeaturesCmd(SceAtaDrive *drive, u8 feature, s8 a2, s8 a3, s32 a4) {
    SceAtaCmd c;
    s32 ret;
    s32 i;
    ret = func_00002074(drive, feature, a3, a2, 0, &c, a4);
    if (ret != 0) {
        return ret;
    }
    func_000020F8(drive, &c, NULL);
    for (i = 0; i < 20; i++) {
        ret = sceAtaExecCmd(drive, 0xEF, 1, NULL);
        if (ret == 0) {
            return 0;
        }
    }
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/atacmd", sceAtaExecSetFeaturesCmd);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/atacmd", func_0000251C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/atacmd", func_00002074);
#endif

#if FW_VERSION == 271
s32 func_000020F8(SceAtaDrive *arg0, SceAtaCmd *arg1, void *arg2) {
    s32 var_v0;

    var_v0 = 0x80211008;
    if (((arg0 == NULL) | (arg1 == NULL)) == 0) {
        var_v0 = 0;
        arg1->buf = arg2;
        arg0->cmd = arg1;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 271
s32 func_000020F8(SceAtaDrive *arg0, SceAtaCmd *arg1, void *arg2) {
    s32 var_v0;

    var_v0 = 0x80211008;
    if (((arg0 == NULL) | (arg1 == NULL)) == 0) {
        var_v0 = 0;
        arg0->cmd = arg1;
        arg1->buf = arg2;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 100
s32 func_00002124(SceAtaTaskFile *tf) {
    s32 intr;
    u8 stat;
    intr = sceKernelCpuSuspendIntr();
    ATA_DEVCTL = tf->devctl;
    ATA_FEATURES = tf->features;
    ATA_NSECTOR = tf->nsector;
    ATA_SELECT = tf->select;
    ATA_SECTOR = 0;
    ATA_LCYL = tf->lcyl;
    ATA_HCYL = tf->hcyl;
    ATA_COMMAND = 0xA0;
    sceKernelCpuResumeIntr(intr);
    asm volatile("sync");
    ATA_ALTSTATUS;
    ATA_ALTSTATUS;
    ATA_ALTSTATUS;
    for (;;) {
        stat = ATA_ALTSTATUS;
        if ((s8)stat >= 0) {
            break;
        }
        sceKernelDelayThread(100);
    }
    stat &= 9;
    if (stat == 8) {
        return 0;
    }
    return (stat != 0) ? -1 : 1;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/atacmd", func_00002124);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/atacmd", func_00002618);

INCLUDE_ASM("nonmatchings/atacmd", func_000026D0);

INCLUDE_ASM("nonmatchings/atacmd", func_00002970);

INCLUDE_ASM("nonmatchings/atacmd", func_000029F4);

INCLUDE_ASM("nonmatchings/atacmd", func_00002A98);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/atacmd", sceAtaExecCmd);

s32 sceAtaExecDeviceResetCmd(SceAtaDrive *drive) {
    SceAtaCmd c;
    s32 ret;
    s32 i;
    s32 id;
    sceKernelWaitSema(drive->semaId, 1, NULL);
    drive->protocol = 1;
    id = drive->driveId;
    c.tf.select = id << 4;
    c.tf.features = 0;
    ret = func_000020F8(drive, &c, NULL);
    if (ret == 0) {
        for (i = 0; i < 20; i++) {
            ret = sceAtaExecCmd(drive, 8, drive->protocol, NULL);
            if (ret == 0) {
                break;
            }
        }
    }
    sceKernelSignalSema(drive->semaId, 1);
    return ret;
}

s32 sceAtaExecPSPResetCmd(SceAtaDrive *drive, u8 features) {
    SceAtaCmd c;
    s32 ret;
    s32 i;
    s32 id;
    sceKernelWaitSema(drive->semaId, 1, NULL);
    drive->protocol = 1;
    c.tf.features = features;
    id = drive->driveId;
    c.tf.select = id << 4;
    ret = func_000020F8(drive, &c, NULL);
    if (ret == 0) {
        for (i = 0; i < 20; i++) {
            ret = sceAtaExecCmd(drive, 0xF0, drive->protocol, NULL);
            if (ret == 0) {
                break;
            }
        }
    }
    sceKernelSignalSema(drive->semaId, 1);
    return ret;
}

s32 sceAtaExecIPDCmd(SceAtaDrive *drive, u32 cmd, void *buf, u32 arg) {
    SceAtaCmd c;
    s32 ret;
    s32 i;
    sceKernelWaitSema(drive->semaId, 1, NULL);
    drive->protocol = 2;
    drive->byteLimit = 0x2000;
    ret = func_000020F8(drive, &c, buf);
    if (ret != 0) {
        goto end;
    }
    for (i = 0; i < 3; i++) {
        ret = sceAtaExecCmd(drive, cmd, 2, &arg);
        if (ret == 0 && *(s8 *)buf < 0) {
            break;
        }
    }
end:
    sceKernelSignalSema(drive->semaId, 1);
    return ret;
}

s32 sceAtaExecIdleStandbyCmd(u32 cmd, SceAtaDrive *drive, u8 count) {
    SceAtaCmd c;
    s32 ret;
    sceKernelWaitSema(drive->semaId, 1, NULL);
    ret = 0x800001FF;
    if (drive != NULL) {
        drive->protocol = 1;
        c.tf.nsector = count;
        ret = func_000020F8(drive, &c, NULL);
        if (ret != 0) {
            goto end;
        }
        ret = sceAtaExecCmd(drive, cmd, 1, NULL);
    }
end:
    sceKernelSignalSema(drive->semaId, 1);
    return ret;
}

s32 sceAtaExecSeekCmd(SceAtaDrive *drive, u32 lba, s8 dev) {
    SceAtaCmd c;
    s32 ret;
    s32 i;
    sceKernelWaitSema(drive->semaId, 1, NULL);
    c.tf.lcyl = lba >> 8;
    c.tf.hcyl = lba >> 16;
    c.tf.select = ((lba >> 24) & 8) | (dev << 4);
    c.tf.sector = lba;
    func_000020F8(drive, &c, NULL);
    for (i = 0; i < 20; i++) {
        ret = sceAtaExecCmd(drive, 0x70, 1, NULL);
        if (ret == 0) {
            break;
        }
    }
    sceKernelSignalSema(drive->semaId, 1);
    return ret;
}

INCLUDE_RODATA("nonmatchings/atacmd", D_00003F30);

INCLUDE_RODATA("nonmatchings/atacmd", D_00003F38);

INCLUDE_RODATA("nonmatchings/atacmd", D_00003F48);

INCLUDE_RODATA("nonmatchings/atacmd", D_00003F50);

INCLUDE_RODATA("nonmatchings/atacmd", D_00003F58);

INCLUDE_RODATA("nonmatchings/atacmd", D_00003F60);

INCLUDE_RODATA("nonmatchings/atacmd", D_00003F78);

INCLUDE_RODATA("nonmatchings/atacmd", D_00003F88);

INCLUDE_RODATA("nonmatchings/atacmd", D_00003F94);

INCLUDE_RODATA("nonmatchings/atacmd", D_00003F9C);

INCLUDE_RODATA("nonmatchings/atacmd", D_00003FB0);

INCLUDE_RODATA("nonmatchings/atacmd", D_00003FC8);

INCLUDE_RODATA("nonmatchings/atacmd", D_00003FD8);

INCLUDE_RODATA("nonmatchings/atacmd", D_00003FE4);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/atacmd", D_00003FF4);
#endif

#if FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/atacmd", D_00004008);

INCLUDE_RODATA("nonmatchings/atacmd", D_000040D0);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/atacmd", D_000050CC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/atacmd", func_00002718);

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

INCLUDE_ASM("nonmatchings/atacmd", func_000027A8);

INCLUDE_ASM("nonmatchings/atacmd", func_00002860);

INCLUDE_ASM("nonmatchings/atacmd", func_00002B0C);

INCLUDE_ASM("nonmatchings/atacmd", func_00002B90);

INCLUDE_ASM("nonmatchings/atacmd", func_00002C34);
#endif

INCLUDE_ASM("nonmatchings/atacmd", sceAtaExecPacketCmd);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/atacmd", func_00002CE8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/atacmd", D_0000425C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/atacmd", sceAtaExecPacketCmdIE);

INCLUDE_ASM("nonmatchings/atacmd", func_00002F1C);

INCLUDE_ASM("nonmatchings/atacmd", func_000030F8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/atacmd", sceAtaExecPacketCmdTS);

INCLUDE_ASM("nonmatchings/atacmd", func_0000349C);
#endif

#if FW_VERSION < 150
void func_000029DC(u8 a0, u16 count, u8 a2, s8 dev, u8 a4, s32 mode, SceAtaCmd *cmd) {
    cmd->tf.devctl = (a0 << 1) | 8;
    cmd->unk8 = 0;
    cmd->unkC = 0;
    if (mode == 8 || mode == 0x10 || mode == 0x100) {
        cmd->tf.features = (a2 << 1) | 1;
    } else {
        cmd->tf.features = a2 << 1;
    }
    cmd->tf.sector = 0;
    cmd->tf.lcyl = count;
    cmd->tf.nsector = a4 << 3;
    cmd->tf.hcyl = count >> 8;
    cmd->tf.select = dev << 4;
    cmd->tf.command = 0xA0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/atacmd", D_000050EC);
#endif

#if FW_VERSION == 102
INCLUDE_RODATA("nonmatchings/atacmd", D_0000510C);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/atacmd", func_00003378);

INCLUDE_ASM("nonmatchings/atacmd", func_00003570);

INCLUDE_ASM("nonmatchings/atacmd", func_00003768);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/atacmd", func_00002E04);

INCLUDE_ASM("nonmatchings/atacmd", sceAtaExecPacketCmdIE);

INCLUDE_ASM("nonmatchings/atacmd", func_00002FAC);

INCLUDE_ASM("nonmatchings/atacmd", func_00003194);

INCLUDE_ASM("nonmatchings/atacmd", sceAtaExecPacketCmdTS);

INCLUDE_ASM("nonmatchings/atacmd", func_00003410);
#endif

#if FW_VERSION < 150
s32 func_00003680(SceAtaDrive *drive, u8 type, s8 dev, s32 a3, SceAtaCmd *cmd, s32 a5) {
    u8 n;
    s32 ret;
    if (type != 3) {
        return 0x8021101D;
    }
    ret = func_000039AC(drive, a3, &n);
    if (ret != 0) {
        return ret;
    }
    cmd->tf.select = dev << 4;
    cmd->tf.sector = 0;
    cmd->tf.lcyl = 0;
    cmd->tf.hcyl = 0;
    cmd->tf.nsector = n;
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/atacmd", func_00003680);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/atacmd", func_00003344);

INCLUDE_ASM("nonmatchings/atacmd", func_00003460);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/atacmd", func_00002AE8);

INCLUDE_ASM("nonmatchings/atacmd", func_00002C84);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/atacmd", func_000036FC);

INCLUDE_ASM("nonmatchings/atacmd", func_00003818);
#endif

INCLUDE_ASM("nonmatchings/atacmd", func_000039AC);

#if FW_VERSION < 150
s32 func_00002E58(u32 cmd, u32 id) {
    if (sceAtaIsNormalDriveStat(id) == 0) {
        if (sceAtaGetIntrFlag() != 2 && sceAtaGetIntrFlag() != 0x10 && sceAtaGetIntrFlag() != 0x20) {
            if (func_00001218() == 0) {
                return 0x80210003;
            }
        }
        if (func_00001134(id) == 0) {
            return 0x80211009;
        }
    } else {
        if (sceAtaGetIntrFlag() == 1) {
            return 0x80211009;
        }
        if (sceAtaGetIntrFlag() == 4) {
            sceAtaSetIntrFlag(0);
            return 0x80211009;
        }
    }
    sceAtaWaitBusBusy2();
    return 0x80211004;
}
#endif

INCLUDE_ASM("nonmatchings/atacmd", func_00003A4C);

s32 func_00003CBC(u32 cmd, SceAtaTaskFile *tf) {
    ATA_SELECT = tf->select;
    ATA_FEATURES = 0;
    ATA_NSECTOR = tf->nsector;
    ATA_SECTOR = 0;
    ATA_LCYL = 0;
    ATA_HCYL = 0;
    if (cmd == 0xE3) {
        ATA_COMMAND = 0xE3;
    } else if (cmd == 0xE0) {
        ATA_COMMAND = 0xE0;
    } else {
        return 0x800001FF;
    }
    asm volatile("sync");
    return 0;
}

s32 func_00003D28(u32 cmd, SceAtaDrive *drive) {
    s32 id = drive->driveId;
    ATA_SELECT = id << 4;
    ATA_FEATURES = 0;
    ATA_NSECTOR = 0;
    ATA_SECTOR = 0;
    ATA_LCYL = 0;
    ATA_HCYL = 0;
    if (cmd == 0xA1) {
        ATA_COMMAND = 0xA1;
    } else if (cmd == 0xEC) {
        ATA_COMMAND = 0xEC;
    }
    asm volatile("sync");
    return 0x200;
}

#if FW_VERSION < 150
s32 func_00003264(void) {
    s32 ret = sceKernelRegisterIntrHandler(5, 1, func_0000356C, 0, &D_00004140);
    if (ret < 0) {
        return ret;
    }
    ret = func_000032C8();
    if (ret != 0) {
        return ret;
    }
    return sceKernelEnableIntr(5);
}

s32 func_000032C8(void) {
    s32 ret;
    ret = sceKernelRegisterSubIntrHandler(5, 1, func_000036FC, NULL);
    if (ret < 0) {
        return ret;
    }
    ret = sceKernelRegisterSubIntrHandler(5, 2, func_00003704, NULL);
    if (ret < 0) {
        return ret;
    }
    ret = sceKernelRegisterSubIntrHandler(5, 3, func_0000371C, NULL);
    if (ret < 0) {
        return ret;
    }
    ret = sceKernelRegisterSubIntrHandler(5, 9, func_00003714, NULL);
    if (ret < 0) {
        return ret;
    }
    ret = sceKernelRegisterSubIntrHandler(5, 0xA, func_0000370C, NULL);
    if (ret < 0) {
        return ret;
    }
    sceKernelEnableSubIntr(5, 1);
    sceKernelEnableSubIntr(5, 2);
    sceKernelEnableSubIntr(5, 3);
    sceKernelEnableSubIntr(5, 9);
    sceKernelEnableSubIntr(5, 0xA);
    return 0;
}

s32 func_000033D4(void) {
    SceUID id = sceKernelCreateEventFlag("SceAhbAta", 0x200, 0xFFFF, NULL);
    if (id < 0) {
        return id;
    }
    D_000042E0 = id;
    return 0;
}

s32 sceAtaAhbGetEventFlag(void) {
    return D_000042E0;
}

s32 func_0000341C(void) {
    return sceKernelDeleteEventFlag(D_000042E0);
}

s32 func_00003440(u32 no, SceAtaIntrFunc func, void *arg) {
    s32 intr;
    if (no - 1 >= 16) {
        return 0x8021101E;
    }
    intr = sceKernelCpuSuspendIntr();
    D_000042F0.h[no].func = func;
    D_000042F0.h[no].arg = arg;
    D_000042F0.h[no].gp = pspGetGp();
    sceKernelCpuResumeIntr(intr);
    return 0;
}

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

INCLUDE_ASM("nonmatchings/atacmd", func_0000358C);

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
INCLUDE_ASM("nonmatchings/atacmd", func_000046C0);
#else
INCLUDE_ASM("nonmatchings/atacmd", sceAta_driver_BE07B3A7);
#endif

#if FW_VERSION < 282
void sceAtaDisplayReqSense(void) {

}
#else
void sceAtaDisplayReqSense(void) {
}
#endif

INCLUDE_ASM("nonmatchings/atacmd", sceAtaDisplayIPD);

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

INCLUDE_ASM("nonmatchings/atacmd", func_00003D3C);
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
