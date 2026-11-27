/* cflags[152]: -Os */
/* cflags[150]: -Os */
/* cflags[100,102,103]: -Os */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "mscm_decls.h"

#if FW_VERSION == 100
s32 func_00000000(s32 slot) {
    SceMScmHC *hc = &D_00006F14[slot];

    sceSysregMsifIoDisable(slot);
    sceMScmSetPullDownReg(slot, 0);
    sceSysreg_driver_7B9E9A53(slot);
    func_00005AD0(slot, 2);
    func_00005E58(slot, 0);
    func_00005EB0(slot);
    func_00005E58(slot, 1);
    sceMScmSetSlotPower(hc, 1);
    sceMScmResetHC(hc, 2);
    sceMScmResetHC(hc, 4);
    return 0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 201
s32 func_00000000(s32 slot) {
    SceMScmHC *hc = &D_00006F14[slot];
    s32 pow;

    sceSysregMsifIoDisable(slot);
    sceMScmSetPullDownReg(slot, 0);
    sceSysreg_driver_7B9E9A53(slot);
    func_00005AD0(slot, 2);
    func_00005E58(slot, 0);
    func_00005EB0(slot);
    func_00005E58(slot, 1);
    sceMScmGetSlotPower(hc, &pow);
    if (pow != 1) {
        sceMScmSetSlotPower(hc, 1);
    }
    sceMScmResetHC(hc, 2);
    sceMScmResetHC(hc, 4);
    return 0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/mscm", func_00000000);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/mscm", func_000000C8);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/mscm", D_00006C8C);

INCLUDE_RODATA("nonmatchings/mscm", D_00006C90);

INCLUDE_RODATA("nonmatchings/mscm", D_00006CB0);

INCLUDE_RODATA("nonmatchings/mscm", D_00006CC8);

INCLUDE_RODATA("nonmatchings/mscm", D_00006CE0);

INCLUDE_RODATA("nonmatchings/mscm", D_00006CF8);

INCLUDE_RODATA("nonmatchings/mscm", D_00006D0C);

INCLUDE_RODATA("nonmatchings/mscm", D_00006D24);

INCLUDE_RODATA("nonmatchings/mscm", D_00006D38);

INCLUDE_RODATA("nonmatchings/mscm", D_00006D54);

INCLUDE_RODATA("nonmatchings/mscm", D_00006D6C);

INCLUDE_RODATA("nonmatchings/mscm", D_00006D84);

INCLUDE_RODATA("nonmatchings/mscm", D_00006D9C);

INCLUDE_RODATA("nonmatchings/mscm", D_00006DAC);

INCLUDE_RODATA("nonmatchings/mscm", D_00006DD4);

INCLUDE_RODATA("nonmatchings/mscm", D_00006DE4);

INCLUDE_RODATA("nonmatchings/mscm", D_00006F74);

INCLUDE_RODATA("nonmatchings/mscm", D_00006F9C);

INCLUDE_RODATA("nonmatchings/mscm", D_00006FB4);

INCLUDE_RODATA("nonmatchings/mscm", D_00006FBC);

INCLUDE_RODATA("nonmatchings/mscm", D_00006FC0);

INCLUDE_RODATA("nonmatchings/mscm", D_00006FD4);

INCLUDE_RODATA("nonmatchings/mscm", D_0000703C);

INCLUDE_RODATA("nonmatchings/mscm", D_00007044);

INCLUDE_RODATA("nonmatchings/mscm", D_00007048);

INCLUDE_RODATA("nonmatchings/mscm", D_00007054);

INCLUDE_RODATA("nonmatchings/mscm", D_0000705C);

INCLUDE_RODATA("nonmatchings/mscm", D_0000706C);
#endif

#if FW_VERSION == 100
s32 func_000000AC(s32 slot) {
    sceSysregMsifIoDisable(slot);
    sceMScmSetPullDownReg(slot, 0);
    sceSysreg_driver_7BDF0556(slot);
    func_00005AD0(slot, 1);
    func_00005E58(slot, 0);
    sceMScmSetSlotPower(&D_00006F14[slot], 1);
    return 0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 201
s32 func_000000AC(s32 slot) {
    SceMScmHC *hc;
    s32 pow;

    sceSysregMsifIoDisable(slot);
    sceMScmSetPullDownReg(slot, 0);
    sceSysreg_driver_7BDF0556(slot);
    func_00005AD0(slot, 1);
    func_00005E58(slot, 0);
    hc = &D_00006F14[slot];
    sceMScmGetSlotPower(hc, &pow);
    if (pow != 1) {
        sceMScmSetSlotPower(hc, 1);
    }
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", func_000000AC);

INCLUDE_ASM("nonmatchings/mscm", func_0000015C);

INCLUDE_ASM("nonmatchings/mscm", func_000001E0);

INCLUDE_ASM("nonmatchings/mscm", func_00000240);
#endif

INCLUDE_RODATA("nonmatchings/mscm", D_00007120);

#if FW_VERSION == 100
s32 func_00000124(s32 slot) {
    SceMScmHC *hc = &D_00006F14[0];
    s32 ok = (hc != NULL);
    s32 ret;

    ret = 0x80220081;
    if (slot == 0) {
        const char *fn = "_sceMScmReinitializeHC", *file = "init.c";
        if (!ok) {
            Kprintf("Assertion failed at %s:%s:%04d\n", file, fn, 0x80);
            sceKernelAssert(ok, 0);
        }
        func_00005E58(0, 0);
        func_00005EB0(0);
        func_00005E58(0, 1);
        sceMScmResetHC(hc, 2);
        sceMScmResetHC(hc, 4);
        sceMScmSetHCTransferMode(hc, 1, 1, 2);
        return 0;
    }
    return ret;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 201
s32 func_00000124(s32 slot) {
    SceMScmHC *hc = &D_00006F14[0];
    s32 ok = (hc != NULL);
    s32 ret;

    ret = 0x80220081;
    if (slot == 0) {
        const char *fn = "_sceMScmReinitializeHC", *file = "init.c";
        if (!ok) {
            Kprintf("Assertion failed at %s:%s:%04d\n", file, fn, 0x87);
            sceKernelAssert(ok, 0);
        }
        func_00005E58(0, 0);
        func_00005EB0(0);
        func_00005E58(0, 1);
        sceMScmResetHC(hc, 2);
        sceMScmResetHC(hc, 4);
        sceMScmSetHCTransferMode(hc, 1, 1, 2);
        return 0;
    }
    return ret;
}
#endif

#if FW_VERSION < 201
s32 func_000001E4(SceMScmHC *hc) {
    sceSysregMsifIoDisable(hc->index);
    sceMScmSetSlotPower(hc, 1);
    sceKernelDelayThread(0x186A0U);
    sceMScmSetSlotPower(hc, 2);
    sceKernelDelayThread(0x4E20U);
    sceSysregMsifIoEnable(hc->index);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/mscm", func_0000027C);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/mscm", func_00000244);
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScmStartModule);

INCLUDE_ASM("nonmatchings/mscm", sceMScmStopModule);

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/mscm", module_reboot_before);

INCLUDE_ASM("nonmatchings/mscm", func_00000BEC);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/mscm", func_00000B9C);

s32 func_00000C1C(SceMScmHC *hc) {
    sceSysregMsifIoDisable(hc->index);
    sceMScmSetSlotPower(hc, 1);
    sceKernelDelayThread(0x186A0U);
    sceMScmSetSlotPower(hc, 2);
    sceKernelDelayThread(0x4E20U);
    sceSysregMsifIoEnable(hc->index);
    return 0;
}
#endif

#if FW_VERSION < 201
s32 module_reboot_before(void) {
    sceMScmWaitAndEndDMA(&D_00006F14[0], 2, 1);
    func_00005E58(0, 0);
    func_00005EB0(0);
    func_00005E58(0, 1);
    func_000000AC(0);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/mscm", module_reboot_before);
#endif

#if FW_VERSION < 250
void func_00000930(s32 arg0) {
    s32 temp_a0;
    s32 temp_s0;

    temp_s0 = func_00004870();
    temp_a0 = temp_s0;
    do {

    } while (func_0000488C(temp_a0, arg0) == 0);
}
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScmRegisterCLD);

INCLUDE_ASM("nonmatchings/mscm", sceMScmUnRegisterCLD);

INCLUDE_ASM("nonmatchings/mscm", sceMScmDetachCLD);

INCLUDE_ASM("nonmatchings/mscm", sceMScmRegisterCLDM);

INCLUDE_ASM("nonmatchings/mscm", sceMScmUnRegisterCLDM);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/mscm", func_000015C8);
#else
INCLUDE_ASM("nonmatchings/mscm", func_0000123C);
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScmGetRegisteredCLDMCount);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/mscm", func_00001804);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/mscm", D_000070F8);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", func_00001478);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/mscm", D_0000716C);

INCLUDE_ASM("nonmatchings/mscm", sceMScmQueryMSCMStatus);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/mscm", sceMScmGetCLDM);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mscm", sceMScmQueryMSCMStatus);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/mscm", func_00001B0C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mscm", sceMScmGetCLDM);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/mscm", func_00001AD4);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/mscm", func_00001BF8);

INCLUDE_ASM("nonmatchings/mscm", func_00001F10);

INCLUDE_ASM("nonmatchings/mscm", func_00002114);
#else
INCLUDE_ASM("nonmatchings/mscm", func_0000179C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", func_00001B88);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", func_000018B8);

INCLUDE_ASM("nonmatchings/mscm", func_00001BA0);

INCLUDE_ASM("nonmatchings/mscm", func_00001D18);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", func_00002194);
#endif

#if FW_VERSION < 201
s32 func_00002194(s32 (*arg0)(s32, s32, s32, s32, s32), s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_s0;
    s32 temp_v0;

    temp_v0 = sceKernelGetThreadCurrentPriority();
    sceKernelChangeThreadPriority(0U, temp_v0 + 5);
    temp_s0 = arg0(arg1, arg2, arg3, arg4, arg5);
    sceKernelChangeThreadPriority(0U, temp_v0);
    return temp_s0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_00002194(s32 (*arg0)(s32, s32, s32, s32, s32), s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_s2;
    s32 temp_v0;

    temp_v0 = sceKernelGetThreadCurrentPriority();
    sceKernelChangeThreadPriority(0U, temp_v0 + 5);
    temp_s2 = arg0(arg1, arg2, arg3, arg4, arg5);
    sceKernelChangeThreadPriority(0U, temp_v0);
    return temp_s2;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", func_0000244C);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/mscm", func_00002238);
#endif

#if FW_VERSION >= 282
s32 func_0000254C(s32 (*arg0)(s32, s32, s32, s32, s32), s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_s2;
    s32 temp_v0;

    temp_v0 = sceKernelGetThreadCurrentPriority();
    sceKernelChangeThreadPriority(0U, temp_v0 + 5);
    temp_s2 = arg0(arg1, arg2, arg3, arg4, arg5);
    sceKernelChangeThreadPriority(0U, temp_v0);
    return temp_s2;
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/mscm", func_0000267C);

INCLUDE_ASM("nonmatchings/mscm", func_000028E0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/mscm", func_000025F0);
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScmReadMSReg);

INCLUDE_ASM("nonmatchings/mscm", sceMScmReadMSRegHelper);

INCLUDE_ASM("nonmatchings/mscm", sceMScmWriteMSReg);

INCLUDE_ASM("nonmatchings/mscm", sceMScmWriteMSRegHelper);

#if FW_VERSION < 201
s32 sceMScmSendTPCDMA(SceMScmHC *hc, u8 dmaCh, s32 a2, s32 a3) {
    hc->reg->unk40 = (1 << dmaCh) | 0x10000;
    asm volatile("sync");
    return sceMScmSendTPC(hc, dmaCh, a2, a3);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", sceMScmSendTPCDMA);
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScmSendTPC);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", sceMScmClearALEvents);
#else
s32 sceMScmClearALEvents(SceMScmHC *hc) {
    sceKernelClearEventFlag(hc->hc->evf, 0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScmWaitHCIntr);

#if FW_VERSION < 201 || (FW_VERSION >= 250 && FW_VERSION < 282)
s32 func_000029F8(SceMScmHC *hc, s32 timeout) {
    s32 ret;

    ret = (timeout != -1) ? timeout : 1000000;
    return ret;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", func_000029F8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/mscm", func_00002FE0);
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScmTPCSetRWRegAdrs);

INCLUDE_ASM("nonmatchings/mscm", sceMScmTPCReadShortData);

INCLUDE_ASM("nonmatchings/mscm", sceMScmTPCWriteShortData);

INCLUDE_ASM("nonmatchings/mscm", sceMScmReadDataPIO);

INCLUDE_ASM("nonmatchings/mscm", sceMScmWriteDataPIO);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mscm", func_00003628);
#endif

#if FW_VERSION < 201
s32 func_00002FF0(s32 a0, s32 a1, s32 a2, u32 *arg) {
    sceKernelSetEventFlag(arg[0], arg[1] ? 2 : 1);
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", func_00002FF0);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", func_00003020);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/mscm", func_00003624);
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScmStartReadDataDMA);

INCLUDE_ASM("nonmatchings/mscm", sceMScmWaitAndEndDMA);

INCLUDE_ASM("nonmatchings/mscm", sceMScmStartWriteDataDMA);

#if FW_VERSION < 201
s32 sceMScmSetHCTransferMode(SceMScmHC *hc, s32 a, s32 b, s32 c) {
    s32 ret;

    ret = 0;
    if (hc == NULL) {
        return 0x80220081;
    }
    if (a != 0) {
        ret = func_00004430(hc, a);
        if (ret < 0) {
            return ret;
        }
    }
    if (b != 0) {
        ret = func_00003EB0(hc, b);
        if (ret < 0) {
            return ret;
        }
    }
    if (c != 0) {
        ret = func_00005AA8(hc, c);
        if (ret < 0) {
            return ret;
        }
    }
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/mscm", sceMScmSetHCTransferMode);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_D6DB3199);
#endif

#if FW_VERSION < 201
s32 sceMScm_driver_D6DB3199(SceMScmHC *hc, s32 *arg1, s32 *arg2, s32 *arg3) {
    s32 var_v0;

    var_v0 = 0x80220081;
    if (hc != NULL) {
        func_00003E58(hc, arg1);
        func_00003F48(hc, arg2);
        var_v0 = func_00005B3C(hc, arg3);
    }
    return var_v0;
}
#endif

#if FW_VERSION < 201 || (FW_VERSION >= 250 && FW_VERSION < 271)
s32 func_00004430(SceMScmHC *hc, s32 mode) {
    s32 intr;
    s32 ret;

    ret = 0;
    intr = sceKernelCpuSuspendIntr();
    switch (mode) {
    case 1:
        hc->reg->sys |= 0x4000;
        sceMScmSetPullDownRegByDesc(hc, 0);
        break;
    case 2:
        hc->reg->sys &= ~0x4000;
        sceMScmSetPullDownRegByDesc(hc, 1);
        break;
    default:
        ret = 0x80220081;
        break;
    }
    asm volatile("sync");
    sceKernelCpuResumeIntr(intr);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/mscm", func_00004430);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mscm", func_000044E8);
#endif

#if FW_VERSION < 201
s32 func_00003E58(SceMScmHC *hc, s32 *out) {
    s32 intr;

    intr = sceKernelCpuSuspendIntr();
    if (hc->reg->sys & 0x4000) {
        *out = 1;
    } else {
        *out = 2;
    }
    sceKernelCpuResumeIntr(intr);
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", func_00003E58);
#endif

#if FW_VERSION < 201
s32 func_00003EB0(SceMScmHC *hc, s32 mode) {
    s32 intr;
    s32 ret;

    ret = 0;
    intr = sceKernelCpuSuspendIntr();
    switch (mode) {
    case 1:
        hc->reg->sys |= 0x10;
        break;
    case 2:
        hc->reg->sys &= ~0x10;
        break;
    default:
        ret = 0x80220081;
        break;
    }
    asm volatile("sync");
    sceKernelCpuResumeIntr(intr);
    return ret;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", func_00003EB0);
#endif

#if FW_VERSION < 201
s32 func_00003F48(SceMScmHC *hc, s32 *out) {
    s32 intr;

    intr = sceKernelCpuSuspendIntr();
    if (hc->reg->sys & 0x10) {
        *out = 2;
    } else {
        *out = 1;
    }
    sceKernelCpuResumeIntr(intr);
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", func_00003F48);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/mscm", func_000044D8);
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScmResetHC);

INCLUDE_ASM("nonmatchings/mscm", sceMScmTPCSetCmd);

INCLUDE_ASM("nonmatchings/mscm", sceMScmTPCSetCmdHelper);

INCLUDE_ASM("nonmatchings/mscm", sceMScmTPCExSetCmd);

INCLUDE_ASM("nonmatchings/mscm", sceMScmTPCExSetCmdHelper);

INCLUDE_ASM("nonmatchings/mscm", sceMScmTPCGetInt);

INCLUDE_ASM("nonmatchings/mscm", sceMScmTPCGetIntHelper);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mscm", func_00004DAC);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", func_000047C0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", sceMScmHCLastStatus);
#endif

#if FW_VERSION < 201 || (FW_VERSION >= 250 && FW_VERSION < 282)
s32 sceMScmHCLastStatus(SceMScmHC *hc) {
    return hc->hc->lastStatus;
}
#endif

#if FW_VERSION < 282
s32 func_00004870(void) {
    return sceKernelGetSystemTimeLow();
}
#endif

#if FW_VERSION < 201
s32 func_0000488C(u32 start, s32 timeout) {
    u32 limit;

    limit = timeout * D_00007190.low;
    return limit < sceKernelGetSystemTimeLow() - start;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mscm", func_0000488C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/mscm", func_00004D94);

s32 sceMScmHCLastStatus(SceMScmHC *hc) {
    return hc->hc->lastStatus;
}

void func_00004E4C(void) {
    sceKernelGetSystemTimeLow();
}

s32 func_00004E68(s32 arg0, s32 arg1) {
    u32 temp_s0;

    temp_s0 = arg1 * D_00007AF4;
    return temp_s0 < (u32) (sceKernelGetSystemTimeLow() - arg0);
}
#endif

#if FW_VERSION < 201 || (FW_VERSION >= 250 && FW_VERSION < 271)
u16 sceMScmHCSetBusyCount(SceMScmHC *hc, u16 count) {
    s32 intr;
    s32 old;

    intr = sceKernelCpuSuspendIntr();
    old = hc->reg->sys & 7;
    hc->reg->sys = (hc->reg->sys & ~7) | (count & 7);
    sceKernelCpuResumeIntr(intr);
    return old;
}
#else
INCLUDE_ASM("nonmatchings/mscm", sceMScmHCSetBusyCount);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/mscm", sceMScmSendTPCDMA);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mscm", func_00004F68);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_D6DB3199);

INCLUDE_ASM("nonmatchings/mscm", func_0000504C);

INCLUDE_ASM("nonmatchings/mscm", func_000050A4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/mscm", func_00004F4C);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_D6DB3199);

INCLUDE_ASM("nonmatchings/mscm", func_00005030);

INCLUDE_ASM("nonmatchings/mscm", func_00005088);
#endif

#if FW_VERSION != 201
s32 sceMScmIconLoadUcode(SceMScmHC *hc, u32 addr, u16 *code, s32 count) {
    s32 i;

    if (hcRead16(&hc->reg->unk4) & 1) {
        return 0x80220086;
    }
    if (addr >= 0x80) {
        return 0x80220081;
    }
    if (count > 0x80) {
        return 0x80220081;
    }
    if (addr + count >= 0x80) {
        return 0x80220081;
    }
    hcWrite16(&hc->reg->unk2, addr);
    for (i = 0; i < count; i++) {
        hcWrite16(&hc->reg->unk20, *code);
        code++;
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/mscm", sceMScmIconLoadUcode);
#endif

#if FW_VERSION != 201
s32 sceMScmIconStartUcode(SceMScmHC *hc, u32 addr) {
    if (hcRead16(&hc->reg->unk4) & 1) {
        return 0x80220086;
    }
    if (addr >= 0x80) {
        return 0x80220081;
    }
    hcWrite16(&hc->reg->unk2, addr);
    hcOr16(&hc->reg->unk0, 1);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/mscm", sceMScmIconStartUcode);
#endif

#if FW_VERSION != 201
s32 sceMScmIconStopUcode(SceMScmHC *hc) {
    if (!(hcRead16(&hc->reg->unk4) & 1)) {
        return 0x80220081;
    }
    hcAnd16(&hc->reg->unk4, 0xFFFE);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/mscm", sceMScmIconStopUcode);
#endif

void sceMScmIconResetIcon(SceMScmHC *hc) {
    sceMScmResetHC(hc, 4);
}

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mscm", func_0000534C);

INCLUDE_ASM("nonmatchings/mscm", func_000054E0);

INCLUDE_ASM("nonmatchings/mscm", func_0000563C);

INCLUDE_ASM("nonmatchings/mscm", func_00005674);

INCLUDE_ASM("nonmatchings/mscm", func_00005734);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/mscm", D_000068A4);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", func_00004B70);

INCLUDE_ASM("nonmatchings/mscm", func_00004D30);
#endif

#if FW_VERSION < 201
u32 func_00004E50(u32 bits) {
    u32 ret = 0;
    s32 i;

    for (i = 0; i < 13; i++) {
        if (bits & D_000069F8[i].from) {
            ret |= D_000069F8[i].to;
        }
    }
    return ret;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", func_00004E50);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", func_0000514C);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/mscm", func_00004E94);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", func_00004F60);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/mscm", func_00005330);

INCLUDE_ASM("nonmatchings/mscm", func_000054C4);

INCLUDE_ASM("nonmatchings/mscm", func_00005620);

INCLUDE_ASM("nonmatchings/mscm", func_00005658);

INCLUDE_ASM("nonmatchings/mscm", func_00005718);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/mscm", func_00005804);
#else
s32 func_00005804(s32 arg0) {
    s32 var_v1;

    var_v1 = 0x80220081;
    if (arg0 == 0) {
        sceKernelReleaseIntrHandler(7);
        sceKernelReleaseIntrHandler(0x3C);
        sceKernelReleaseIntrHandler(0x3D);
        var_v1 = 0;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mscm", func_00005868);

INCLUDE_ASM("nonmatchings/mscm", func_00005938);

INCLUDE_ASM("nonmatchings/mscm", func_000059F8);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", func_00005094);
#endif

#if FW_VERSION < 201
s32 func_00005174(SceMScmHC *hc, u32 flags, s32 on) {
    s32 intr;

    intr = sceKernelCpuSuspendIntr();
    if (flags & 1) {
        if (on != 0) {
            hc->reg->sys |= 0x2000;
        } else {
            hc->reg->sys &= ~0x2000;
        }
    }
    if (flags & 0x10) {
        if (on != 0) {
            hc->reg->unk4 |= 4;
        } else {
            hc->reg->unk4 &= ~4;
        }
    }
    asm volatile("sync");
    sceKernelCpuResumeIntr(intr);
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", func_00005174);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/mscm", func_0000584C);

INCLUDE_ASM("nonmatchings/mscm", func_0000591C);

INCLUDE_ASM("nonmatchings/mscm", func_000059C0);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/mscm", func_00005A44);
#else
s32 func_00005A44(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0x80220081;
    if (arg0 == 0) {
        var_v1 = 0x80220083;
        if (D_00006F14[0].inService != 0) {
            var_v1 = func_00005174(&D_00006F14[0], arg1, arg2);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/mscm", func_00005A90);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mscm", func_00005AC8);

INCLUDE_ASM("nonmatchings/mscm", func_00006360);

INCLUDE_ASM("nonmatchings/mscm", func_000063C8);
#endif

#if FW_VERSION < 201
s32 func_00005270(s32 slot, u32 flags) {
    SceMScmHCReg *reg;
    s32 intr;

    reg = D_00006F14[slot].reg;
    intr = sceKernelCpuSuspendIntr();
    if (flags & 1) {
        reg->sys |= 0x800;
    }
    if (flags & 0x10) {
        reg->unk0 |= 8;
    }
    sceKernelCpuResumeIntr(intr);
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", func_00005270);
#endif

#if FW_VERSION < 282
s32 func_000052F4(void) {
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/mscm", func_000063B4);

INCLUDE_ASM("nonmatchings/mscm", func_0000641C);

s32 func_00006484(void) {
    return 0;
}

s32 func_0000648C(void) {
    return 0;
}

s32 func_00006494(SceMScmHC *hc) {
    s32 var_a0;

    var_a0 = 0x80220081;
    if (hc->index == 0) {
        var_a0 = (D_00007880 != 0) ? 0 : 0x80220083;
    }
    return var_a0;
}

s32 func_000064C0(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/mscm", func_000064C8);

INCLUDE_ASM("nonmatchings/mscm", func_0000652C);

INCLUDE_ASM("nonmatchings/mscm", sceMScmGetSlotPower);

INCLUDE_ASM("nonmatchings/mscm", sceMScmGetSlotState);

INCLUDE_ASM("nonmatchings/mscm", func_00006684);

s32 func_000066DC(SceMScmHC *hc) {
    s32 var_v0;

    var_v0 = 0x80220081;
    if (hc != NULL) {
        var_v0 = func_000064C8(hc->index);
    }
    return var_v0;
}

s32 func_00006704(SceMScmHC *hc, s32 arg1) {
    s32 var_v0;

    var_v0 = 0x80220081;
    if (hc != NULL) {
        var_v0 = func_0000652C(hc->index, arg1);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/mscm", sceMScmSetPullDownRegByDesc);

INCLUDE_ASM("nonmatchings/mscm", sceMScmSetPullDownReg);

INCLUDE_ASM("nonmatchings/mscm", func_000067CC);

INCLUDE_ASM("nonmatchings/mscm", func_00006800);

INCLUDE_ASM("nonmatchings/mscm", func_00006854);

INCLUDE_ASM("nonmatchings/mscm", sceMScmSetSlotPower);

INCLUDE_ASM("nonmatchings/mscm", func_00006908);

INCLUDE_RODATA("nonmatchings/mscm", D_0000719C);

INCLUDE_RODATA("nonmatchings/mscm", D_00007204);

INCLUDE_RODATA("nonmatchings/mscm", D_0000725C);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/mscm", D_000072B4);

INCLUDE_RODATA("nonmatchings/mscm", D_000072BC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/mscm", D_000072D0);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/mscm", D_000072E4);

INCLUDE_RODATA("nonmatchings/mscm", D_000072EC);

INCLUDE_RODATA("nonmatchings/mscm", D_00007300);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/mscm", D_00006950);

INCLUDE_ASM("nonmatchings/mscm", func_000052FC);

INCLUDE_ASM("nonmatchings/mscm", func_00005358);
#endif

#if FW_VERSION < 282
s32 func_000053EC(void) {
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_00006440(SceMScmHC *hc) {
    s32 var_a0;

    var_a0 = 0x80220081;
    if (hc->index == 0) {
        var_a0 = (D_00007800 != 0) ? 0 : 0x80220083;
    }
    return var_a0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", func_000057C4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_000057F0(void) {
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mscm", func_00006474);

INCLUDE_ASM("nonmatchings/mscm", func_000064D8);

INCLUDE_ASM("nonmatchings/mscm", sceMScmGetSlotPower);

INCLUDE_ASM("nonmatchings/mscm", sceMScmGetSlotState);

INCLUDE_ASM("nonmatchings/mscm", func_00006630);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", func_000057F8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/mscm", func_000053F4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", func_000059CC);
#endif

#if FW_VERSION < 201
s32 func_000059CC(void) {
    return 0x80020325;
}
#endif

#if FW_VERSION < 250
s32 func_000059D8(void) {
    return 0;
}
#endif

#if FW_VERSION < 201
s32 func_000059E0(s32 n) {
    if (n >= 2) {
        return 0x80220081;
    }
    if (n != 1) {
        if (D_00007218 != 0) {
            return 0;
        }
        D_00007218 = 1;
        return sceIoAddDrv(&D_00006B10);
    }
    return sceIoAddDrv(&D_00006B24);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", func_000059E0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", func_00005EE4);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/mscm", func_00005A44_v100);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", func_00005AA8);
#endif

#if FW_VERSION < 201
s32 func_00005AA8(SceMScmHC *hc, s32 mode) {
    s32 var_v0;

    var_v0 = 0x80220081;
    if (hc != NULL) {
        var_v0 = func_00005AD0(hc->index, mode);
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_00005AA8(SceMScmHC *hc, s32 mode) {
    s32 var_v0;

    var_v0 = 0x80220081;
    if (hc != NULL) {
        var_v0 = func_00006474(hc->index, mode);
    }
    return var_v0;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", func_00005AD0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", func_00005B3C);
#endif

#if FW_VERSION < 201
s32 func_00005B3C(SceMScmHC *hc, s32 *out) {
    s32 var_v0;

    var_v0 = 0x80220081;
    if (hc != NULL) {
        var_v0 = func_00005B64(hc->index, out);
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_00005B3C(SceMScmHC *hc, s32 *out) {
    s32 var_v0;

    var_v0 = 0x80220081;
    if (hc != NULL) {
        var_v0 = func_000064D8(hc->index, out);
    }
    return var_v0;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", func_00005B64);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mscm", sceMScmSetPullDownRegByDesc);
#endif

#if FW_VERSION < 201
s32 sceMScmSetPullDownRegByDesc(SceMScmHC *hc, s32 on) {
    s32 var_v0;

    var_v0 = 0x80220081;
    if (hc != NULL) {
        var_v0 = sceMScmSetPullDownReg(hc->index, on);
    }
    return var_v0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mscm", sceMScmSetPullDownReg);
#endif

#if FW_VERSION < 201 || (FW_VERSION >= 250 && FW_VERSION < 282)
s32 func_00005C58(s32 slot) {
    if (slot != 0) {
        return 0x80220081;
    }
    sceSysregMsifAcquireConnectIntr(slot, 3);
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", func_00005C58);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mscm", func_00005C8C);

INCLUDE_ASM("nonmatchings/mscm", func_00005CE4);
#endif

#if FW_VERSION < 201 || (FW_VERSION >= 250 && FW_VERSION < 282)
s32 sceMScmSetSlotPower(SceMScmHC *hc, s32 on) {
    switch (hc->index) {
    case 0:
        sceSysconCtrlMsPower(on != 1);
        return 0;
    case 1:
        sceSysconCtrlWlanPower(on != 1);
        return 0;
    }
    return 0x80220081;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", sceMScmSetSlotPower);
#endif

#if FW_VERSION < 201
s32 sceMScmGetSlotPower(SceMScmHC *hc, s32 *out) {
    s32 v;

    switch (hc->index) {
    case 0:
        v = sceSysconGetMsPowerCtrl();
        break;
    case 1:
        v = sceSysconGetWlanPowerStatus();
        break;
    default:
        *out = 1;
        return 0;
    }
    if (v != 0) {
        *out = 2;
    } else {
        *out = 1;
    }
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", sceMScmGetSlotPower);
#endif

#if FW_VERSION < 201
s32 sceMScmGetSlotState(SceMScmHC *hc, s32 *out) {
    s32 st;
    s32 ret;

    ret = func_00005C8C(hc->index, &st);
    if (ret >= 0) {
        if (st != 0) {
            *out = 1;
        } else {
            *out = 2;
        }
        return 0;
    }
    return ret;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", sceMScmGetSlotState);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", func_00005E58);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mscm", func_00005EB0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/mscm", D_00007128);

INCLUDE_RODATA("nonmatchings/mscm", D_00007190);

INCLUDE_RODATA("nonmatchings/mscm", D_000071E8);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/mscm", D_000068A4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/mscm", D_00006E10);

INCLUDE_RODATA("nonmatchings/mscm", D_00006E18);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/mscm", D_0000725C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/mscm", D_00006E2C);

INCLUDE_RODATA("nonmatchings/mscm", D_00006E34);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/mscm", D_0000728C);
#endif
