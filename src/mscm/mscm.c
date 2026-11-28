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
s32 _sceMScmReinitializeHC(s32 slot) {
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
s32 _sceMScmReinitializeHC(s32 slot) {
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

#if FW_VERSION < 201
/* cld.c is its own object (its assert format is not merged with init.c's) */
static const char cldRegisterName[] = "sceMScmRegisterCLD";
static const char cldFile[] = "cld.c";
static const char cldAssertFmt[] = "Assertion failed at %s:%s:%04d\n";

s32 sceMScmRegisterCLD(s32 slot, SceMScmCLD *cld) {
    s32 ret;
    s32 ok;
    void *buf;
    char *name;
    u32 len;

    if (cld == NULL) {
        ret = 0x80220081;
        goto end;
    }
    if (slot != 0) {
        ret = 0x80220081;
        goto end;
    }
    ok = (D_00006ED8[slot].attached == 0);
    {
        const char *fn = cldRegisterName, *file = cldFile;
        if (!ok) {
            Kprintf(cldAssertFmt, file, fn, 0x2B);
            sceKernelAssert(ok, 0);
        }
    }
    len = strlen(cld->name);
    if (sceKernelTryAllocateVpl(D_00006B50, (len < 0x100) ? len + 1 : 0x100, &buf) < 0) {
        ret = 0x80220082;
        goto end;
    }
    name = buf;
    memset(name, 0, len + 1);
    strncpy(name, cld->name, len);
    memcpy(&D_00006ED8[slot].drv, cld, sizeof(SceMScmCLD));
    D_00006ED8[slot].drv.name = name;
    D_00006ED8[slot].attached = 1;
    ret = 0;
end:
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/mscm", sceMScmRegisterCLD);
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScmUnRegisterCLD);

#if FW_VERSION < 150
s32 sceMScmDetachCLD(s32 slot, SceMScmCLD *cld) {
    SceMScmSlotCB *cb;
    s32 buf[4];
    s32 (*stop)(s32, s32, s32);

    cb = &D_00006ED8[slot];
    if (cb->attached == 0) {
        return 0xC0220000;
    }
    if (strncmp(cb->drv.name, cld->name, 0xFF) != 0) {
        return 0x80220081;
    }
    func_00002194(cb->drv.cmd, (s32)&D_00006F14[slot], 4, (s32)buf, 0, cb->drv.cmdArg);
    stop = (s32 (*)(s32, s32, s32))cb->cldm->info.entry;
    if (stop != NULL) {
        stop(0, 0, 0);
    }
    memset(cb, 0, sizeof(SceMScmSlotCB));
    D_00006B40[slot] = 0;
    D_00006ED4[slot] = 1;
    sceKernelSetEventFlag(g_mainEvf[slot], 0x40000000);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceMScmDetachCLD(s32 slot, SceMScmCLD *cld) {
    SceMScmSlotCB *cb;
    s32 buf[4];
    s32 (*stop)(s32, s32, s32);

    cb = &D_00006ED8[slot];
    if (cb->attached == 0) {
        return 0xC0220000;
    }
    if (strncmp(cb->drv.name, cld->name, 0xFF) != 0) {
        return 0x80220081;
    }
    func_00002194(cb->drv.cmd, (s32)&D_00006F14[slot], 4, (s32)buf, 0, cb->drv.cmdArg);
    stop = (s32 (*)(s32, s32, s32))cb->cldm->info.entry;
    if (stop != NULL) {
        stop(0, 0, 0);
    }
    memset(cb, 0, sizeof(SceMScmSlotCB));
    D_00006F90[slot] = 0;
    D_00007334[slot] = 1;
    sceKernelSetEventFlag(g_mainEvf[slot], 0x40000000);
    return 0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/mscm", sceMScmDetachCLD);
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScmRegisterCLDM);

INCLUDE_ASM("nonmatchings/mscm", sceMScmUnRegisterCLDM);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/mscm", func_000015C8);
#else
INCLUDE_ASM("nonmatchings/mscm", func_0000123C);
#endif

#if FW_VERSION < 201
s32 sceMScmGetRegisteredCLDMCount(s32 slot) {
    s32 count;
    s32 i;

    count = 0;
    if (slot != 0) {
        return 0x80220081;
    }
    sceKernelWaitSema(D_00006ECC[slot], 1, 0);
    for (i = 0; i < 3; i++) {
        count += D_00006F00[slot * 3 + i];
    }
    sceKernelSignalSema(D_00006ECC[slot], 1);
    return count;
}
#else
INCLUDE_ASM("nonmatchings/mscm", sceMScmGetRegisteredCLDMCount);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/mscm", func_00001804);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/mscm", D_000070F8);
#endif

#if FW_VERSION < 201
static const char cldmFile[] = "cldm.c";
static const char cldmAssertFmt[] = "Assertion failed at %s:%s:%04d\n";

s32 _sceMScmGetCLDMHelper(s32 slot, s32 n, SceMScmCLDMInfo **out) {
    s32 ret;
    s32 sum;
    s32 i;
    s32 j;
    s32 k;
    s32 ok;
    SceMScmCLDM *p;

    ret = 0;
    if (out == NULL || slot != 0) {
        return 0x80220081;
    }
    sceKernelWaitSema(D_00006ECC[slot], 1, 0);
    for (i = 0, sum = 0; i < 3; i++) {
        if (n < sum + D_00006F00[slot * 3 + i]) {
            break;
        }
        sum += D_00006F00[slot * 3 + i];
    }
    if (i >= 3) {
        ret = 0x80220084;
        goto end;
    }
    j = i;
    k = n - sum;
    p = D_00006B54[slot][j].next;
    for (i = 0; i < k; i++) {
        p = p->next;
        if (p == NULL) {
            ret = 0xC0220000;
            goto end;
        }
        if (&D_00006B54[slot][j] == p) {
            ret = 0x80220084;
            goto end;
        }
    }
    ok = (p != NULL);
    if (!ok) {
        Kprintf(cldmAssertFmt, cldmFile, "_sceMScmGetCLDMHelper", 0x14E);
        sceKernelAssert(ok, 0);
    }
    *out = &p->info;
end:
    sceKernelSignalSema(D_00006ECC[slot], 1);
    return ret;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", _sceMScmGetCLDMHelper);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/mscm", D_0000716C);

INCLUDE_ASM("nonmatchings/mscm", sceMScmQueryMSCMStatus);
#endif

#if FW_VERSION < 201
s32 sceMScmGetCLDM(s32 slot, s32 n, SceMScmCLDMInfo *out) {
    SceMScmCLDMInfo *info;
    s32 ret;

    ret = _sceMScmGetCLDMHelper(slot, n, &info);
    if (ret >= 0) {
        if (out != NULL) {
            *out = *info;
        }
    }
    return ret;
}
#endif

#if FW_VERSION == 201 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/mscm", sceMScmGetCLDM);
#endif

#if FW_VERSION == 100
s32 sceMScmQueryMSCMStatus(s32 slot, s32 *out) {
    s32 st;
    s32 ret;

    ret = 0x80220083;
    if (D_00006F14[slot].inService != 0) {
        switch (D_00006ED4[slot]) {
        case 0:
            ret = 0;
            *out = 0;
            break;
        case 4:
            ret = 0;
            *out = 3;
            break;
        case 5:
            ret = 0;
            *out = 4;
            break;
        case 1:
        case 2:
        case 3:
            func_00005C8C(slot, &st);
            if (st != 0) {
                *out = 2;
            } else {
                *out = 1;
            }
            ret = 0;
            break;
        default:
            ret = 0xC0220000;
            break;
        }
    }
    return ret;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 282
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
#endif

#if FW_VERSION < 201
s32 func_0000179C(SceSize args, void *argp) {
    s32 index = ((SceMScmHC *)argp)->index;
    SceUID evf = D_00006F14[index].evf;
    u32 bits;
    s32 st;

    for (;;) {
        bits = 0;
        sceKernelWaitEventFlag(g_mainEvf[index], 0xC0007FF1, 0x21, &bits, NULL);
        if (bits & 1) {
            func_00005C8C(index, &st);
            if (st != 0) {
                bits |= 0x40000000;
            }
        }
        if (bits & 0x7FF0) {
            sceKernelSetEventFlag(evf, bits & 0x7FF0);
        }
        if ((s32)bits < 0) {
            sceKernelSetEventFlag(g_mediaEvf[index], 0x80000000);
        }
        if (bits & 0x40000000) {
#if FW_VERSION == 100
            D_00006ED4[index] = 2;
#endif
            sceKernelSetEventFlag(g_mediaEvf[index], 0x40000000);
        }
    }
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", func_0000179C);

INCLUDE_ASM("nonmatchings/mscm", func_00001B88);
#endif

#if FW_VERSION == 100
s32 func_000018B8(s32 slot) {
    s32 st;
    s32 buf[1];
    s32 ret;
    s32 i;
    s32 intr;
    SceMScmSlotCB *cb;
    u32 entry;
    s32 (*cmd)(s32, s32, s32, s32, s32);

    st = 0;
    sceLedSetMode(0, 0, 0);
    ret = func_00005C8C(slot, &st);
    if (st != 0) {
        return 0;
    }
    sceKernelPowerLock(0);
    sceMScmSetSlotPower(&D_00006F14[slot], 1);
    sceKernelDelayThread(100000);
    intr = sceKernelSuspendDispatchThread();
    for (i = 0; i < 32; i++) {
        if (D_00007198[slot][i] != 0) {
            sceKernelSetEventFlag(D_00007198[slot][i], 8);
        }
        if (D_0000721C[slot][i] != 0) {
            if (sceKernelNotifyCallback(D_0000721C[slot][i], 8) == 0x800201A1) {
                D_0000721C[slot][i] = 0;
            }
        }
    }
    sceKernelResumeDispatchThread(intr);
    cb = &D_00006ED8[slot];
    if (cb->attached == 0) {
        D_00006ED4[slot] = 1;
        sceKernelPowerUnlock(0);
        return 0;
    }
    cmd = cb->drv.cmd;
    func_00002194(cmd, (s32)&D_00006F14[slot], 3, (s32)buf, 0, cb->drv.cmdArg);
    cb->attached = 0;
    func_00002194(cmd, (s32)&D_00006F14[slot], 4, (s32)buf, 0, cb->drv.cmdArg);
    entry = (u32)cb->cldm->info.entry;
    if (entry != 0) {
        ((s32 (*)(s32, s32, s32))entry)(0, 0, 0);
    }
    sceMScmUnRegisterCLD(slot, &cb->drv);
    intr = sceKernelSuspendDispatchThread();
    for (i = 0; i < 32; i++) {
        if (D_00007198[slot][i] != 0) {
            sceKernelSetEventFlag(D_00007198[slot][i], 2);
        }
        if (D_0000721C[slot][i] != 0) {
            if (sceKernelNotifyCallback(D_0000721C[slot][i], 2) == 0x800201A1) {
                D_0000721C[slot][i] = 0;
            }
        }
    }
    sceKernelResumeDispatchThread(intr);
    memset(&D_00006ED8[slot], 0, 0x20);
    D_00006B40[slot] = 0;
    D_00006ED4[slot] = 1;
    _sceMScmReinitializeHC(slot);
    sceKernelPowerUnlock(0);
    return ret;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", func_000018B8);
#endif

#if FW_VERSION < 250
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

#if FW_VERSION == 100
s32 func_00002238(SceSize args, void *argp) {
    s32 index = ((SceMScmHC *)argp)->index;
    SceUID evf = D_00006F14[index].evf;
    u32 bits;

    for (;;) {
        bits = 0;
        sceKernelWaitEventFlag(g_mediaEvf[index], 0xC0000000, 0x11, &bits, NULL);
        if ((s32)bits < 0) {
            sceKernelSetEventFlag(evf, 0x80000000);
            func_000018B8(index);
        }
        if (bits & 0x40000000) {
            D_00006ED4[index] = 2;
            sceKernelSetEventFlag(evf, 0x40000000);
            func_00001BA0(index);
        }
    }
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
s32 func_00002238(SceSize args, void *argp) {
    s32 index = ((SceMScmHC *)argp)->index;
    SceUID evf = D_00006F14[index].evf;
    u32 bits;

    for (;;) {
        bits = 0;
        sceKernelWaitEventFlag(g_mediaEvf[index], 0xC0000000, 0x11, &bits, NULL);
        sceKernelPowerLock(0);
        if ((s32)bits < 0) {
            sceKernelSetEventFlag(evf, 0x80000000);
            func_000018B8(index);
        } else if (bits & 0x40000000) {
            D_00006ED4[index] = 2;
            sceKernelSetEventFlag(evf, 0x40000000);
            func_00001BA0(index);
        }
        sceKernelPowerUnlock(0);
    }
}
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

#if FW_VERSION < 201 || (FW_VERSION >= 250 && FW_VERSION < 282)
s32 sceMScmReadMSReg(SceMScmHC *hc, s32 addr, s32 size, u8 *buf, s32 force, s32 timeout) {
    SceMScmHC *h;
    u8 adr[4];
    s32 ret;

    timeout = func_000029F8(hc, timeout);
    h = hc->hc;
    if (force == 1 || h->readAddr != addr || h->readSize != size) {
        h->readAddr = addr;
        adr[0] = addr;
        h->readSize = size;
        adr[1] = size;
        adr[2] = h->writeAddr;
        adr[3] = h->writeSize;
        ret = sceMScmTPCSetRWRegAdrs(hc, adr, timeout);
        if (ret < 0) {
            return ret;
        }
    }
    return sceMScmReadMSRegHelper(hc, buf, size, timeout);
}
#else
INCLUDE_ASM("nonmatchings/mscm", sceMScmReadMSReg);
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScmReadMSRegHelper);

#if FW_VERSION < 201 || (FW_VERSION >= 250 && FW_VERSION < 282)
s32 sceMScmWriteMSReg(SceMScmHC *hc, s32 addr, s32 size, u8 *buf, s32 force, s32 timeout) {
    SceMScmHC *h;
    u8 adr[4];
    u8 st[4];
    u16 saved;
    s32 busy;
    s32 ret;

    saved = 0;
    timeout = func_000029F8(hc, timeout);
    h = hc->hc;
    if (force == 1 || h->writeAddr != addr || h->writeSize != size) {
        adr[0] = h->readAddr;
        adr[1] = h->readSize;
        h->writeAddr = addr;
        adr[2] = addr;
        h->writeSize = size;
        adr[3] = size;
        ret = sceMScmTPCSetRWRegAdrs(hc, adr, timeout);
        if (ret < 0) {
            return ret;
        }
    }
    ret = sceMScmReadMSReg(hc, 2, 3, st, 1, -1);
    if (ret < 0) {
        return ret;
    }
    busy = 0;
    if ((st[0] & 2) && st[2] != 1) {
        saved = sceMScmHCSetBusyCount(hc, 0);
        busy = 1;
    }
    ret = sceMScmWriteMSRegHelper(hc, buf, size, timeout);
    if (ret < 0) {
        return ret;
    }
    if (busy) {
        sceMScmHCSetBusyCount(hc, saved);
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/mscm", sceMScmWriteMSReg);
#endif

#if FW_VERSION < 201
s32 sceMScmWriteMSRegHelper(SceMScmHC *hc, u8 *buf, s32 size, s32 timeout) {
    s32 retry;
    s32 ret;

    retry = 5;
    do {
        ret = sceMScmSendTPC(hc, 0xB, size, timeout);
        if (ret < 0) {
            break;
        }
        ret = sceMScmWriteDataPIO(hc, buf, size, timeout);
        if (ret < 0) {
            if (ret == 0x80220087) {
                continue;
            }
            break;
        }
        ret = func_000047C0(hc, timeout);
        if (ret < 0) {
            break;
        }
        if (sceMScmHCLastStatus(hc) & 0x100) {
            ret = 0x80220089;
            continue;
        }
        if (sceMScmHCLastStatus(hc) & 0x200) {
            ret = 0x80220088;
        }
        break;
    } while (retry-- != 0);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/mscm", sceMScmWriteMSRegHelper);
#endif

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

#if FW_VERSION < 201 || (FW_VERSION >= 250 && FW_VERSION < 282)
s32 sceMScmSendTPC(SceMScmHC *hc, u8 tpc, s32 size, s32 timeout) {
    u32 start;

    timeout = func_000029F8(hc, timeout);
    start = func_00004870();
    while (!(hc->reg->status & 0x1000)) {
        if (func_0000488C(start, timeout)) {
            if (!(hc->reg->status & 0x1000)) {
                return 0x80220087;
            }
            break;
        }
    }
    while (!(hc->reg->status & 0x20)) {
        if (func_0000488C(start, timeout)) {
            if (!(hc->reg->status & 0x20)) {
                return 0x80220087;
            }
            break;
        }
    }
    hc->hc->lastStatus = 0;
    sceMScmClearALEvents(hc);
    hcWrite16(&hc->reg->command, (tpc << 12) | (size & 0x3FF));
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/mscm", sceMScmSendTPC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", sceMScmClearALEvents);
#else
s32 sceMScmClearALEvents(SceMScmHC *hc) {
    sceKernelClearEventFlag(hc->hc->evf, 0);
    return 0;
}
#endif

#if FW_VERSION < 152
s32 sceMScmWaitHCIntr(SceMScmHC *hc, u32 *pattern, s32 timeout) {
    s32 index = hc->index;
    u32 outBits;
    unsigned long tmo; /* a different alias set from *pattern (keeps the load order) */
    SceMScmHC *h;
    SceUID evf;
    u32 bits;
    u32 old;
    s32 res;
    s32 ret;
    u32 m;

    sceKernelGetSystemTimeLow();
    tmo = func_000029F8(hc, timeout);
    h = &D_00006F14[index];
    evf = h->evf;
    bits = func_00004E50(*pattern);
    if (bits == 0) {
        bits = 0x7FF0;
    }
    res = sceKernelWaitEventFlag(evf, bits, 1, &outBits, &tmo);
    old = *pattern;
    *pattern = h->intrStatus;
    if (res == 0) {
        return 0;
    }
    m = func_00004E94(index);
    sceMScmClearALEvents(hc);
    m &= old;
    ret = 0x80220087;
    if (m != 0) {
        ret = 0;
    }
    return ret;
}
#endif

#if FW_VERSION == 152
s32 sceMScmWaitHCIntr(SceMScmHC *hc, u32 *pattern, s32 timeout) {
    s32 index = hc->index;
    u32 outBits;
    unsigned long tmo; /* a different alias set from *pattern (keeps the load order) */
    SceMScmHC *h;
    SceUID evf;
    u32 bits;
    u32 old;
    s32 res;
    s32 ret;
    u32 m;

    sceKernelGetSystemTimeLow();
    tmo = func_000029F8(hc, timeout);
    h = &D_00006F14[index];
    evf = h->evf;
    bits = func_00004E50(*pattern);
    if (bits == 0) {
        bits = 0x7FF0;
    }
    res = sceKernelWaitEventFlag(evf, bits, 1, &outBits, &tmo);
    old = *pattern;
    *pattern = h->intrStatus;
    if (res == 0) {
        return 0;
    }
    m = func_0000514C(index);
    sceMScmClearALEvents(hc);
    m &= old;
    ret = 0x80220087;
    if (m != 0) {
        ret = 0;
    }
    return ret;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/mscm", sceMScmWaitHCIntr);
#endif

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

#if FW_VERSION < 201
s32 sceMScmTPCSetRWRegAdrs(SceMScmHC *hc, u8 *adr, s32 timeout) {
    SceMScmHC *h;
    s32 retry;
    s32 ret;

    h = hc->hc;
    h->readAddr = adr[0];
    h->readSize = adr[1];
    h->writeAddr = adr[2];
    h->writeSize = adr[3];
    retry = 5;
    do {
        ret = sceMScmSendTPC(hc, 8, 4, timeout);
        if (ret < 0) {
            break;
        }
        ret = sceMScmWriteDataPIO(hc, adr, 4, timeout);
        if (ret < 0) {
            if (ret == 0x80220087) {
                continue;
            }
            break;
        }
        ret = func_000047C0(hc, timeout);
        if (ret < 0) {
            break;
        }
        if (sceMScmHCLastStatus(hc) & 0x100) {
            ret = 0x80220089;
            continue;
        }
        if (sceMScmHCLastStatus(hc) & 0x200) {
            ret = 0x80220088;
        }
        break;
    } while (retry-- != 0);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/mscm", sceMScmTPCSetRWRegAdrs);
#endif

#if FW_VERSION < 201
s32 sceMScmTPCReadShortData(SceMScmHC *hc, u8 *buf, s32 size, s32 timeout) {
    s32 retry;
    s32 ret;

    retry = 5;
    switch (size) {
    case 0x20:
    case 0x40:
    case 0x80:
    case 0x100:
        break;
    default:
        return 0x80220081;
    }
    do {
        ret = sceMScmSendTPC(hc, 3, size, timeout);
        if (ret < 0) {
            break;
        }
        ret = sceMScmReadDataPIO(hc, buf, size, timeout);
        if (ret < 0) {
            if (ret == 0x80220089) {
                continue;
            }
            break;
        }
        ret = func_000047C0(hc, timeout);
        break;
    } while (retry-- != 0);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/mscm", sceMScmTPCReadShortData);
#endif

#if FW_VERSION < 201
s32 sceMScmTPCWriteShortData(SceMScmHC *hc, u8 *buf, s32 size, s32 timeout) {
    s32 retry;
    s32 ret;

    retry = 5;
    switch (size) {
    case 0x20:
    case 0x40:
    case 0x80:
    case 0x100:
        break;
    default:
        return 0x80220081;
    }
    do {
        ret = sceMScmSendTPC(hc, 0xC, size, timeout);
        if (ret < 0) {
            break;
        }
        ret = sceMScmWriteDataPIO(hc, buf, size, timeout);
        if (ret < 0) {
            if (ret == 0x80220087) {
                continue;
            }
            break;
        }
        ret = func_000047C0(hc, timeout);
        if (ret < 0) {
            break;
        }
        if (sceMScmHCLastStatus(hc) & 0x100) {
            ret = 0x80220089;
            continue;
        }
        break;
    } while (retry-- != 0);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/mscm", sceMScmTPCWriteShortData);
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScmReadDataPIO);

#if FW_VERSION < 201 || (FW_VERSION >= 250 && FW_VERSION < 282)
s32 sceMScmWriteDataPIO(SceMScmHC *hc, u8 *buf, s32 size, s32 timeout) {
    u32 w[2];
    u32 start;
    s32 i;
    s32 j;

    timeout = func_000029F8(hc, timeout);
    start = func_00004870();
    while (size > 0) {
        w[1] = 0;
        w[0] = 0;
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 4 && size != 0; j++) {
                w[i] |= *buf++ << (j * 8);
                size--;
            }
        }
        while (!(hc->reg->status & 0x4000)) {
            if (func_0000488C(start, timeout)) {
                if (!(hc->reg->status & 0x4000)) {
                    return 0x80220087;
                }
                break;
            }
        }
        hc->reg->data = w[0];
        hc->reg->data = w[1];
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/mscm", sceMScmWriteDataPIO);
#endif

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

#if FW_VERSION < 201 || (FW_VERSION >= 250 && FW_VERSION < 282)
s32 sceMScmResetHC(SceMScmHC *hc, u32 mode) {
    s32 ret;
    u32 start;

    ret = 0;
    switch (mode) {
    case 0:
        break;
    case 1:
        ret = func_00005EB0(hc->index);
        break;
    case 2:
        hcOr16(&hc->reg->sys, 0x8000);
        start = func_00004870();
        while ((s16)hcRead16(&hc->reg->sys) < 0) {
            if (func_0000488C(start, 1000)) {
                if ((s16)hc->reg->sys < 0) {
                    return 0x80220087;
                }
                break;
            }
        }
        sceMScmHCSetBusyCount(hc, 7);
        hcOr16(&hc->reg->sys, 0x2000);
        break;
    case 4:
        hcOr16(&hc->reg->unk4, 1);
        start = func_00004870();
        while (hcRead16(&hc->reg->unk4) & 1) {
            if (func_0000488C(start, 1000)) {
                if (hc->reg->unk4 & 1) {
                    return 0x80220087;
                }
                break;
            }
        }
        hcOr16(&hc->reg->unk4, 0x25C);
        break;
    default:
        ret = 0xC0220000;
        break;
    }
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/mscm", sceMScmResetHC);
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScmTPCSetCmd);

#if FW_VERSION < 201
s32 sceMScmTPCSetCmdHelper(SceMScmHC *hc, u8 cmd, s32 timeout) {
    u8 buf[4];
    s32 retry;
    s32 ret;

    buf[0] = cmd;
    retry = 5;
    do {
        ret = sceMScmSendTPC(hc, 0xE, 1, timeout);
        if (ret < 0) {
            break;
        }
        ret = sceMScmWriteDataPIO(hc, buf, 1, timeout);
        if (ret < 0) {
            if (ret == 0x80220087) {
                continue;
            }
            break;
        }
        ret = func_000047C0(hc, timeout);
        if (ret < 0) {
            continue;
        }
        if (sceMScmHCLastStatus(hc) & 0x100) {
            ret = 0x80220089;
            continue;
        }
        if (sceMScmHCLastStatus(hc) & 0x200) {
            ret = 0x80220088;
        }
        break;
    } while (retry-- != 0);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/mscm", sceMScmTPCSetCmdHelper);
#endif

#if FW_VERSION != 201
s32 sceMScmTPCExSetCmd(SceMScmHC *hc, u8 cmd, s8 *arg, u8 *intr, s32 timeout) {
    u8 st[4];
    s32 busy;
    s32 ret;

    ret = sceMScmReadMSReg(hc, 2, 1, st, 1, -1);
    if (ret < 0) {
        return ret;
    }
    busy = st[0] & 2;
    ret = sceMScmTPCExSetCmdHelper(hc, cmd, arg, timeout);
    if (ret < 0) {
        return ret;
    }
    if (cmd == 0x3C) {
        return ret;
    }
    if (busy) {
        timeout += 500000;
    }
    return sceMScmTPCGetInt(hc, intr, 0, timeout);
}
#else
INCLUDE_ASM("nonmatchings/mscm", sceMScmTPCExSetCmd);
#endif

#if FW_VERSION < 201
s32 sceMScmTPCExSetCmdHelper(SceMScmHC *hc, u8 cmd, s8 *arg, s32 timeout) {
    s8 buf[8];
    s32 retry;
    s32 ret;

    buf[0] = cmd;
    memcpy(&buf[1], arg, 6);
    retry = 5;
    do {
        ret = sceMScmSendTPC(hc, 9, 7, timeout);
        if (ret < 0) {
            break;
        }
        ret = sceMScmWriteDataPIO(hc, buf, 7, timeout);
        if (ret < 0) {
            if (ret == 0x80220087) {
                continue;
            }
            break;
        }
        ret = func_000047C0(hc, timeout);
        if (ret < 0) {
            break;
        }
        if (sceMScmHCLastStatus(hc) & 0x100) {
            ret = 0x80220089;
            continue;
        }
        if (sceMScmHCLastStatus(hc) & 0x200) {
            ret = 0x80220088;
        }
        break;
    } while (retry-- != 0);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/mscm", sceMScmTPCExSetCmdHelper);
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScmTPCGetInt);

#if FW_VERSION < 201
s32 sceMScmTPCGetIntHelper(SceMScmHC *hc, u8 *intr, s32 timeout) {
    s32 retry;
    s32 ret;

    retry = 5;
    do {
        ret = sceMScmSendTPC(hc, 7, 1, timeout);
        if (ret < 0) {
            break;
        }
        ret = sceMScmReadDataPIO(hc, intr, 1, timeout);
        if (ret < 0) {
            if (ret == 0x80220087) {
                continue;
            }
            break;
        }
        ret = func_000047C0(hc, timeout);
        if (ret < 0) {
            break;
        }
        if (sceMScmHCLastStatus(hc) & 0x200) {
            ret = 0x80220088;
            continue;
        }
        if (sceMScmHCLastStatus(hc) & 0x100) {
            ret = 0x80220089;
        }
        break;
    } while (retry-- != 0);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/mscm", sceMScmTPCGetIntHelper);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mscm", func_00004DAC);
#endif

#if FW_VERSION < 201
s32 func_000047C0(SceMScmHC *hc, s32 timeout) {
    s32 ret;
    u32 start;

    timeout = func_000029F8(hc, timeout);
    start = func_00004870();
    ret = 0;
    while (!(hc->reg->status & 0x1000)) {
        if (func_0000488C(start, timeout)) {
            if (!(hc->reg->status & 0x1000)) {
                ret = 0x80220087;
            }
            break;
        }
    }
    return ret;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", func_000047C0);

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

#if FW_VERSION == 100
/* intr.c is its own object: its assert format is not merged with init.c's */
static const char intrAssertFmt[] = "Assertion failed at %s:%s:%04d\n";
#endif

#if FW_VERSION >= 102 && FW_VERSION < 152
/* intr.c is its own object: its assert format is not merged with init.c's */
static const char intrAssertFmt[] = "Assertion failed at %s:%s:%04d\n";
#endif

#if FW_VERSION < 152
s32 sceMScmHCIrqPrimaryHandler(s32 intno, SceMScmHC *hc) {
    s32 index = hc->index;
    s32 slot;
    s32 ret;
    SceMScmHC *h;
    SceMScmSlotCB *cb;

    switch (intno) {
    case 7:
        slot = 0;
        break;
    case 8:
        slot = 1;
        break;
    default:
        Kprintf(intrAssertFmt, "intr.c", "sceMScmHCIrqPrimaryHandler", 0x39);
        sceKernelAssert(0, 0);
        return -2;
    }
    if (index != slot) {
        if (--g_irqMissCount[index] != -1) {
            return -1;
        }
        g_irqMissCount[index] = 100;
        return -2;
    }
    h = &D_00006F14[index];
    h->lastStatus = hc->reg->status;
    h->intrCause = hc->reg->unk8;
    h->intrStatus = func_00004E94(index);
    ret = 1;
    cb = &D_00006ED8[index];
    if (cb->attached != 0 && (D_00006F14[index].intrStatus & 0x11) && cb->drv.intrCb != NULL) {
        ret = cb->drv.intrCb(hc, cb->drv.intrArg);
    }
    h = &D_00006F14[index];
    func_00005270(index, h->intrStatus);
    if (ret > 0) {
        sceKernelSetEventFlag(g_mainEvf[index], func_00004E50(h->intrStatus));
    }
    return -1;
}
#endif

#if FW_VERSION == 152
/* intr.c is its own object: its assert format is not merged with init.c's */
static const char intrAssertFmt[] = "Assertion failed at %s:%s:%04d\n";

s32 sceMScmHCIrqPrimaryHandler(s32 intno, SceMScmHC *hc) {
    s32 index = hc->index;
    s32 slot;
    s32 ret;
    SceMScmHC *h;
    SceMScmSlotCB *cb;

    switch (intno) {
    case 7:
        slot = 0;
        break;
    case 8:
        slot = 1;
        break;
    default:
        Kprintf(intrAssertFmt, "intr.c", "sceMScmHCIrqPrimaryHandler", 0x39);
        sceKernelAssert(0, 0);
        return -2;
    }
    if (index != slot) {
        if (--g_irqMissCount[index] != -1) {
            return -1;
        }
        g_irqMissCount[index] = 100;
        return -2;
    }
    h = &D_00006F14[index];
    h->lastStatus = hc->reg->status;
    h->intrCause = hc->reg->unk8;
    h->intrStatus = func_0000514C(index);
    ret = 1;
    cb = &D_00006ED8[index];
    if (cb->attached != 0 && (D_00006F14[index].intrStatus & 0x11) && cb->drv.intrCb != NULL) {
        ret = cb->drv.intrCb(hc, cb->drv.intrArg);
    }
    h = &D_00006F14[index];
    func_00005270(index, h->intrStatus);
    if (ret > 0) {
        sceKernelSetEventFlag(g_mainEvf[index], func_00004E50(h->intrStatus));
    }
    return -1;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", sceMScmHCIrqPrimaryHandler);
#endif

#if FW_VERSION < 150
s32 func_00004D30(s32 intno, SceMScmHC *hc) {
    s32 ret;
    s32 index;
    SceMScmSlotCB *cb;

    ret = 1;
    sceKernelPowerTick(0);
    index = hc->index;
    if (intno == 0x3C) {
        D_00006F14[index].intrStatus |= 0x1000;
    } else {
        D_00006F14[index].intrStatus |= 0x2000;
    }
    cb = &D_00006ED8[index];
    if (cb->drv.insertCb != NULL) {
        ret = cb->drv.insertCb(hc, cb->drv.insertArg);
    }
    func_00005C58(index);
    if (ret > 0) {
        if (intno == 0x3C) {
            sceKernelSetEventFlag(g_mainEvf[index], 0x40000000);
        } else {
            sceSysregMsifIoDisable(index);
            sceKernelSetEventFlag(g_mainEvf[index], 0x80000000);
        }
    }
    return -1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
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

#if FW_VERSION == 152
u32 func_0000514C(s32 index) {
    SceMScmHCReg *reg = D_00006F14[index].reg;
    u32 ret;
    u32 v;

    ret = (reg->unk0 & 4) ? 0x10 : 0x1;
    v = reg->unk8;
    if (v & 0x200) {
        ret |= 0x400;
    }
    if (v & 0x100) {
        ret |= 0x200;
    }
    if (v & 0x80) {
        ret |= 0x100;
    }
    if (v & 0x40) {
        ret |= 0x80;
    }
    if (v & 0x20) {
        ret |= 0x40;
    }
    if (v & 0x10) {
        ret |= 0x20;
    }
    if (!(reg->unk0 & 1)) {
        v = reg->status;
        if (v & 0x4000) {
            ret |= 8;
        }
        if (v & 0x1000) {
            ret |= 2;
        }
        if (v & 0x2000) {
            ret |= 4;
        }
    }
    return ret;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", func_0000514C);
#endif

#if FW_VERSION < 152
u32 func_00004E94(s32 index) {
    SceMScmHCReg *reg = D_00006F14[index].reg;
    u32 ret;
    u32 v;

    ret = (reg->unk0 & 4) ? 0x10 : 0x1;
    v = reg->unk8;
    if (v & 0x200) {
        ret |= 0x400;
    }
    if (v & 0x100) {
        ret |= 0x200;
    }
    if (v & 0x80) {
        ret |= 0x100;
    }
    if (v & 0x40) {
        ret |= 0x80;
    }
    if (v & 0x20) {
        ret |= 0x40;
    }
    if (v & 0x10) {
        ret |= 0x20;
    }
    if (!(reg->unk0 & 1)) {
        v = reg->status;
        if (v & 0x4000) {
            ret |= 8;
        }
        if (v & 0x1000) {
            ret |= 2;
        }
        if (v & 0x2000) {
            ret |= 4;
        }
    }
    return ret;
}
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

#if FW_VERSION < 201
s32 func_00005094(s32 slot, u32 mask, s32 enable) {
    s32 no;
    s32 gpio[2];

    switch (slot) {
    case 0:
        no = 7;
        gpio[0] = 0x3C;
        gpio[1] = 0x3D;
        break;
    case 1:
        no = 8;
        gpio[0] = 0x3E;
        gpio[1] = 0x3F;
        break;
    default:
        return 0xC0220000;
    }
    if (mask & 1) {
        if (enable) {
            sceKernelEnableIntr(no);
        } else {
            sceKernelDisableIntr(no);
        }
    }
    if (mask & 2) {
        if (enable) {
            sceKernelEnableIntr(gpio[0]);
            sceKernelEnableIntr(gpio[1]);
        } else {
            sceKernelDisableIntr(gpio[0]);
            sceKernelDisableIntr(gpio[1]);
        }
    }
    return 0;
}
#endif

#if FW_VERSION == 201
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
#endif

#if FW_VERSION < 150
s32 _sceMScmIomanExit(void *arg) {
    s32 ok = (arg != NULL);
    const char *file = D_00006950, *fn = "_sceMScmIomanExit";

    if (!ok) {
        Kprintf(D_00007300, file, fn, 0x6C);
        sceKernelAssert(ok, 0);
    }
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 _sceMScmIomanExit(void *arg) {
    s32 ok = (arg != NULL);
    const char *file = D_00006950, *fn = "_sceMScmIomanExit";

    if (!ok) {
        Kprintf(D_00007300, file, fn, 0x6D);
        sceKernelAssert(ok, 0);
    }
    return 0;
}
#endif

#if FW_VERSION < 150
s32 _sceMScmIomanOpen(SceIoIob *iob) {
    s32 ok = (iob != NULL);
    const char *file = D_00006950, *fn = "_sceMScmIomanOpen";
    s32 ret;

    if (!ok) {
        Kprintf(D_00007300, file, fn, 0x79);
        sceKernelAssert(ok, 0);
    }
    ret = 0x80220081;
    if (iob->i_unit == 0) {
        ret = (D_00006F20 != 0) ? 0 : 0x80220083;
    }
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 _sceMScmIomanOpen(SceIoIob *iob) {
    s32 ok = (iob != NULL);
    const char *file = D_00006950, *fn = "_sceMScmIomanOpen";
    s32 ret;

    if (!ok) {
        Kprintf(D_00007300, file, fn, 0x7A);
        sceKernelAssert(ok, 0);
    }
    ret = 0x80220081;
    if (iob->i_unit == 0) {
        ret = (D_00006F20 != 0) ? 0 : 0x80220083;
    }
    return ret;
}
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
INCLUDE_ASM("nonmatchings/mscm", _sceMScmIomanDevctl);
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

#if FW_VERSION < 201
s32 func_00005AD0(s32 slot, u32 mode) {
    s32 ret;
    s32 clk;

    ret = 0x80220081;
    if (slot == 0) {
        switch (mode) {
        case 0:
            return 0;
        case 1:
            clk = 2;
            break;
        case 2:
            clk = 0;
            break;
        case 3:
            clk = 1;
            break;
        default:
            return 0x80220081;
        }
        sceSysregMsifClkSelect(slot, clk);
        ret = 0;
    }
    return ret;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", func_00005AD0);

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

#if FW_VERSION < 201 || (FW_VERSION >= 250 && FW_VERSION < 282)
s32 sceMScmSetPullDownReg(s32 slot, s32 on) {
    s32 ret;

    ret = 0x80220081;
    if (slot == 0) {
        if (on != 0) {
            sceSysreg_driver_55B18B84(slot);
        } else {
            sceSysreg_driver_2112E686(slot);
        }
        ret = 0;
    }
    return ret;
}
#endif

#if FW_VERSION == 201
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

#if FW_VERSION < 201
s32 func_00005C8C(s32 slot, s32 *out) {
    s32 ret;

    ret = 0x80220081;
    if (slot == 0) {
        if (D_00006F0C != 0) {
            *out = 0;
        } else {
            *out = sceSysregMsifGetConnectStatus(slot);
        }
        ret = 0;
    }
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mscm", func_00005C8C);
#endif

#if FW_VERSION < 201
s32 func_00005CE4(s32 slot, s32 *a, s32 *b) {
    s32 ret;
    u32 v;

    ret = 0x80220081;
    if (slot == 0) {
        v = sceSysregMsifQueryConnectIntr(slot);
        *a = v & 1;
        ret = 0;
        *b = (v >> 1) & 1;
    }
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
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

#if FW_VERSION < 201
s32 func_00005E58(s32 slot, s32 on) {
    s32 ret;

    ret = 0x80220081;
    if (slot == 0) {
        if (on != 0) {
            sceSysregMsifClkEnable(slot);
            sceSysregMsifBusClockEnable(0);
        } else {
            sceSysregMsifClkDisable(slot);
            sceSysregMsifBusClockDisable(0);
        }
        ret = 0;
    }
    return ret;
}
#endif

#if FW_VERSION == 201
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
