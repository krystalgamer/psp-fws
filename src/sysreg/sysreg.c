/* cflags[100-152]: -O2 -frename-registers -fno-merge-constants */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "sysreg_decls.h"

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysreg", module_start);
#else
s32 module_start(void) {
    sceKernelUnregisterSysEventHandler(&D_000025C0);
    sceSysregIntrInit();
    sceSysregPllUpdateFrequency();
    sceKernelRegisterSysEventHandler(&D_000025C0);
    return 0;
}
#endif

s32 module_reboot_before(void) {
    sceSysregIntrEnd();
    return 0;
}

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysreg", sceSysregInit);
#else
s32 sceSysregInit(void) {
    sceKernelUnregisterSysEventHandler(&D_000025C0);
    sceSysregIntrInit();
    return 0;
}
#endif

s32 sceSysregEnd(void) {
    sceSysregIntrEnd();
    return 0;
}

s32 func_000000B4(void) {
    return 0;
}

s32 func_000000BC(void) {
    return 0;
}

s32 func_000000C4(void) {
    return 0;
}

s32 sceSysregDoTimerEvent(u32 n, u32 mode) {
    s32 intr;
    u32 v;
    s32 ret;

    ret = 0x80000102;
    if (n >= 2) {
        goto end;
    }
    ret = 0x80000107;
    if (mode >= 4) {
        goto end;
    }
    intr = sceKernelCpuSuspendIntr();
    v = *(volatile u32 *)0xBC10003C;
    switch (mode) {
    case 0:
        *(volatile u32 *)0xBC10003C = v & ~(1 << n);
        break;
    case 1:
        *(volatile u32 *)0xBC10003C = v | (1 << n);
        break;
    case 2:
        *(volatile u32 *)0xBC10003C = v | (1 << n);
        *(volatile u32 *)0xBC10003C = v & ~(1 << n);
        break;
    case 3:
        *(volatile u32 *)0xBC10003C = v & ~(1 << n);
        *(volatile u32 *)0xBC10003C = v | (1 << n);
        break;
    }
    sceKernelCpuResumeIntrWithSync(intr);
    ret = 0;
end:
    return ret;
}

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysreg", sceSysregSetAwEdramSize);
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysregGetTachyonVersion);

#if FW_VERSION < 271
s32 sceSysregVblankIRQPolar(s32 on) {
    s32 intr;
    u32 v;
    s32 old;
    intr = sceKernelCpuSuspendIntr();
    v = *(volatile u32 *)0xBC10003C;
    old = v & 1;
    if (on) {
        v |= 1;
    } else {
        v &= ~1;
    }
    *(volatile u32 *)0xBC10003C = v;
    sceKernelCpuResumeIntrWithSync(intr);
    return old;
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregVblankIRQPolar);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysreg", sceSysregGenerateVblankIRQ);
#else
s32 sceSysregSetMasterPriv(u32 mask, s32 on) {
    u32 v;
    asm volatile("sync");
    v = *(volatile u32 *)0xBC000044;
    if (on) {
        v |= mask;
    } else {
        v &= ~mask;
    }
    *(volatile u32 *)0xBC000044 = v;
    asm volatile("sync");
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysreg", sceSysregSetMasterPriv);
#endif

#if FW_VERSION >= 103
INCLUDE_ASM("nonmatchings/sysreg", sceSysregGetFuseId);
#endif

u32 sceSysregGetFuseConfig(void) {
//V{
    return *(volatile u32 *)0xBC100098;
//V|
    return *(volatile s32 *)0xBC100098;
//V|
    volatile u32 *r = (volatile u32 *)0xBC100098;
    return *r;
//V|
    u32 v = *(volatile u32 *)0xBC100098;
    return v;
//V|
    asm volatile("");
    return *(volatile u32 *)0xBC100098;
//V}
}

#if FW_VERSION < 271
s32 sceSysregTopResetEnable(void) {
    return sysregSetResetBit(0x1, 1);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregTopResetEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregScResetEnable(void) {
    return sysregSetResetBit(0x2, 1);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregScResetEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregMeResetEnable(void) {
    return sysregSetResetBit(0x4, 1);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMeResetEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregMeResetDisable(void) {
    return sysregSetResetBit(0x4, 0);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMeResetDisable);
#endif

#if FW_VERSION < 271
s32 sceSysregAwResetEnable(void) {
    return sysregSetResetBit(0x8, 1);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAwResetEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregAwResetDisable(void) {
    return sysregSetResetBit(0x8, 0);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAwResetDisable);
#endif

#if FW_VERSION < 271
s32 sceSysregVmeResetEnable(void) {
    return sysregSetResetBit(0x10, 1);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregVmeResetEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregVmeResetDisable(void) {
    return sysregSetResetBit(0x10, 0);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregVmeResetDisable);
#endif

#if FW_VERSION < 271
s32 sceSysregAvcResetEnable(void) {
    return sysregSetResetBit(0x20, 1);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAvcResetEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregAvcResetDisable(void) {
    return sysregSetResetBit(0x20, 0);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAvcResetDisable);
#endif

#if FW_VERSION < 271
s32 sceSysregUsbResetEnable(void) {
    return sysregSetResetBit(0x40, 1);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbResetEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregUsbResetDisable(void) {
    return sysregSetResetBit(0x40, 0);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbResetDisable);
#endif

#if FW_VERSION < 271
s32 sceSysregAtaResetEnable(void) {
    return sysregSetResetBit(0x80, 1);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtaResetEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregAtaResetDisable(void) {
    return sysregSetResetBit(0x80, 0);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtaResetDisable);
#endif

#if FW_VERSION < 271
s32 sceSysregMsifResetEnable(u32 n) {
    if (n < 2) {
        return sysregSetResetBit(0x100 << n, 1);
    }
    return 0x80000102;
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifResetEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregMsifResetDisable(u32 n) {
    if (n < 2) {
        return sysregSetResetBit(0x100 << n, 0);
    }
    return 0x80000102;
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifResetDisable);
#endif

#if FW_VERSION < 271
s32 sceSysregKirkResetEnable(void) {
    return sysregSetResetBit(0x400, 1);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregKirkResetEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregKirkResetDisable(void) {
    return sysregSetResetBit(0x400, 0);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregKirkResetDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtahddResetEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtahddResetDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbhostResetEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbhostResetDisable);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/sysreg", sysregSetResetBit);
#endif

INCLUDE_RODATA("nonmatchings/sysreg", D_00002520);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregPllGetBaseFrequency);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/sysreg", D_00002B04);
#endif

#if FW_VERSION < 201
float sceSysregPllUpdateFrequency(void) {
    u32 sel = *(volatile u32 *)0xBC100068 & 0xF;
    u32 mul = __builtin_allegrex_ext(*(volatile u32 *)0xBC1000FC, 8, 8);
    return g_pllFrequency = (s32)mul * 37.0f * D_00002B04[sel];
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysreg", sceSysregPllUpdateFrequency);
#endif

#if FW_VERSION < 271
s32 sceSysregPllSetOutSelect(s32 sel) {
    s32 intr;
    u32 v;
    s32 ret;
    ret = 0x800001FE;
    if (sel < 0 || (sel & 7) >= 6) {
        return ret;
    }
    intr = sceKernelCpuSuspendIntr();
    v = *(volatile u32 *)0xBC100068;
    *(volatile u32 *)0xBC100068 = (v & ~0xF) | sel | 0x80;
    ret = v & 0xF;
    sceSysregPllUpdateFrequency();
    sceKernelCpuResumeIntr(intr);
    return ret;
}
#endif

#if FW_VERSION < 201
float sceSysregPllGetBaseFrequency(void) {
    return 37.0f;
}
#endif

#if (FW_VERSION >= 201 && FW_VERSION < 271) || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysreg", sceSysregPllGetBaseFrequency);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysreg", sceSysregPllUpdateFrequency);
#endif

float sceSysregPllGetFrequency(void) {
    return g_pllFrequency;
}

s32 sceSysregPllGetOutSelect(void) {
    return *(volatile u32 *)0xBC100068 & 0xF;
}

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregPllSetOutSelect);
#else
s32 sceSysregMeBusClockEnable(void) {
    return sysregSetBusClkBit(0x1, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMeBusClockEnable);
#else
s32 sceSysregMeBusClockDisable(void) {
    return sysregSetBusClkBit(0x1, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMeBusClockDisable);
#else
s32 sceSysregAwRegABusClockEnable(void) {
    return sysregSetBusClkBit(0x2, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAwRegABusClockEnable);
#else
s32 sceSysregAwRegABusClockDisable(void) {
    return sysregSetBusClkBit(0x2, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAwRegABusClockDisable);
#else
s32 sceSysregAwRegBBusClockEnable(void) {
    return sysregSetBusClkBit(0x4, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAwRegBBusClockEnable);
#else
s32 sceSysregAwRegBBusClockDisable(void) {
    return sysregSetBusClkBit(0x4, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAwRegBBusClockDisable);
#else
s32 sceSysregAwEdramBusClockEnable(void) {
    return sysregSetBusClkBit(0x8, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAwEdramBusClockEnable);
#else
s32 sceSysregAwEdramBusClockDisable(void) {
    return sysregSetBusClkBit(0x8, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAwEdramBusClockDisable);
#else
s32 sceSysregDmacplusBusClockEnable(void) {
    return sysregSetBusClkBit(0x10, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregDmacplusBusClockEnable);
#else
s32 sceSysregDmacplusBusClockDisable(void) {
    return sysregSetBusClkBit(0x10, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregDmacplusBusClockDisable);
#else
s32 sceSysregDmacBusClockEnable(u32 n) {
    if (n < 2) {
        return sysregSetBusClkBit(0x20 << n, 1);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregDmacBusClockEnable);
#else
s32 sceSysregDmacBusClockDisable(u32 n) {
    if (n < 2) {
        return sysregSetBusClkBit(0x20 << n, 0);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregDmacBusClockDisable);
#else
s32 sceSysregKirkBusClockEnable(void) {
    return sysregSetBusClkBit(0x80, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregKirkBusClockEnable);
#else
s32 sceSysregKirkBusClockDisable(void) {
    return sysregSetBusClkBit(0x80, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregKirkBusClockDisable);
#else
s32 sceSysregAtaBusClockEnable(void) {
    return sysregSetBusClkBit(0x100, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtaBusClockEnable);
#else
s32 sceSysregAtaBusClockDisable(void) {
    return sysregSetBusClkBit(0x100, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtaBusClockDisable);
#else
s32 sceSysregUsbBusClockEnable(void) {
    return sysregSetBusClkBit(0x200, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbBusClockEnable);
#else
s32 sceSysregUsbBusClockDisable(void) {
    return sysregSetBusClkBit(0x200, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbBusClockDisable);
#else
s32 sceSysregMsifBusClockEnable(u32 n) {
    if (n < 2) {
        return sysregSetBusClkBit(0x400 << n, 1);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifBusClockEnable);
#else
s32 sceSysregMsifBusClockDisable(u32 n) {
    if (n < 2) {
        return sysregSetBusClkBit(0x400 << n, 0);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifBusClockDisable);
#else
s32 sceSysregEmcddrBusClockEnable(void) {
    return sysregSetBusClkBit(0x1000, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregEmcddrBusClockEnable);
#else
s32 sceSysregEmcddrBusClockDisable(void) {
    return sysregSetBusClkBit(0x1000, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregEmcddrBusClockDisable);
#else
s32 sceSysregEmcsmBusClockEnable(void) {
    return sysregSetBusClkBit(0x2000, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregEmcsmBusClockEnable);
#else
s32 sceSysregEmcsmBusClockDisable(void) {
    return sysregSetBusClkBit(0x2000, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregEmcsmBusClockDisable);
#else
s32 sceSysregApbBusClockEnable(void) {
    return sysregSetBusClkBit(0x4000, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregApbBusClockEnable);
#else
s32 sceSysregApbBusClockDisable(void) {
    return sysregSetBusClkBit(0x4000, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregApbBusClockDisable);
#else
s32 sceSysregAudioBusClockEnable(u32 n) {
    if (n < 2) {
        return sysregSetBusClkBit(0x8000 << n, 1);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioBusClockEnable);
#else
s32 sceSysregAudioBusClockDisable(u32 n) {
    if (n < 2) {
        return sysregSetBusClkBit(0x8000 << n, 0);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioBusClockDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtahddBusClockEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtahddBusClockDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbhostBusClockEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbhostBusClockDisable);
#else
INCLUDE_ASM("nonmatchings/sysreg", sysregSetBusClkBit);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtaClkEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtaClkDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtahddClkEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtahddClkDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbhostClkEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbhostClkDisable);
#else
s32 sceSysregMsifClkEnable(u32 n) {
    if (n < 2) {
        return sysregSetClk1Bit(0x100 << n, 1);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifClkEnable);
#else
s32 sceSysregMsifClkDisable(u32 n) {
    if (n < 2) {
        return sysregSetClk1Bit(0x100 << n, 0);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifClkDisable);
#else
INCLUDE_ASM("nonmatchings/sysreg", sysregSetClk1Bit);

s32 sceSysregAtaClkEnable(void) {
    return sysregSetClk1Bit(0x1, 1);
}

s32 sceSysregAtaClkDisable(void) {
    return sysregSetClk1Bit(0x1, 0);
}

s32 sceSysregUsbClkEnable(u32 n) {
    return sysregSetClk1Bit((n & 0xF) << 4, 1);
}

s32 sceSysregUsbClkDisable(u32 n) {
    return sysregSetClk1Bit((n & 0xF) << 4, 0);
}

s32 sceSysregSpiClkEnable(u32 n) {
    if (n < 6) {
        return sysregSetClk2Bit(0x1 << n, 1);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregSpiClkEnable);
#else
s32 sceSysregSpiClkDisable(u32 n) {
    if (n < 6) {
        return sysregSetClk2Bit(0x1 << n, 0);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregSpiClkDisable);
#else
s32 sceSysregUartClkEnable(u32 n) {
    if (n < 6) {
        return sysregSetClk2Bit(0x40 << n, 1);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregUartClkEnable);
#else
s32 sceSysregUartClkDisable(u32 n) {
    if (n < 6) {
        return sysregSetClk2Bit(0x40 << n, 0);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregUartClkDisable);
#else
s32 sceSysregApbTimerClkEnable(u32 n) {
    if (n < 4) {
        return sysregSetClk2Bit(0x1000 << n, 1);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregApbTimerClkEnable);
#else
s32 sceSysregApbTimerClkDisable(u32 n) {
    if (n < 4) {
        return sysregSetClk2Bit(0x1000 << n, 0);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregApbTimerClkDisable);
#else
s32 sceSysregAudioClkEnable(u32 n) {
    if (n < 2) {
        return sysregSetClk2Bit(0x10000 << n, 1);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioClkEnable);
#else
s32 sceSysregAudioClkDisable(u32 n) {
    if (n < 2) {
        return sysregSetClk2Bit(0x10000 << n, 0);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioClkDisable);
#else
s32 sceSysregLcdcClkEnable(void) {
    return sysregSetClk2Bit(0x40000, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregLcdcClkEnable);
#else
s32 sceSysregLcdcClkDisable(void) {
    return sysregSetClk2Bit(0x40000, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregLcdcClkDisable);
#else
s32 sceSysregPwmClkEnable(void) {
    return sysregSetClk2Bit(0x80000, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregPwmClkEnable);
#else
s32 sceSysregPwmClkDisable(void) {
    return sysregSetClk2Bit(0x80000, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregPwmClkDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregKeyClkEnable);
#else
s32 sceSysregKeyClkEnable(void) {
    return 0x80000004;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregKeyClkDisable);
#else
s32 sceSysregKeyClkDisable(void) {
    return 0x80000004;
}

s32 sceSysregIicClkEnable(void) {
    return sysregSetClk2Bit(0x200000, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregIicClkEnable);
#else
s32 sceSysregIicClkDisable(void) {
    return sysregSetClk2Bit(0x200000, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregIicClkDisable);
#else
s32 sceSysregSircsClkEnable(void) {
    return sysregSetClk2Bit(0x400000, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregSircsClkEnable);
#else
s32 sceSysregSircsClkDisable(void) {
    return sysregSetClk2Bit(0x400000, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregSircsClkDisable);
#else
s32 sceSysregGpioClkEnable(void) {
    return sysregSetClk2Bit(0x800000, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregGpioClkEnable);
#else
s32 sceSysregGpioClkDisable(void) {
    return sysregSetClk2Bit(0x800000, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregGpioClkDisable);
#else
s32 sceSysregAudioClkoutClkEnable(void) {
    return sysregSetClk2Bit(0x1000000, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioClkoutClkEnable);
#else
s32 sceSysregAudioClkoutClkDisable(void) {
    return sysregSetClk2Bit(0x1000000, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioClkoutClkDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbClkEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbClkDisable);
#else
INCLUDE_ASM("nonmatchings/sysreg", sysregSetClk2Bit);

s32 sceSysregMsifClkSelect(u32 n, u32 sel) {
    s32 intr;
    u32 v;
    s32 ret;
    u32 sh;

    ret = 0x80000102;
    if (n >= 2) {
        return ret;
    }
    ret = 0x800001FE;
    if (sel >= 4) {
        goto end;
    }
    intr = sceKernelCpuSuspendIntr();
    sh = n * 2;
    v = *(volatile u32 *)0xBC10005C;
    ret = (v >> sh) & 3;
    *(volatile u32 *)0xBC10005C = (v & ~(3 << sh)) | (sel << sh);
    sceKernelCpuResumeIntr(intr);
    return ret;
end:
    return ret;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifClkSelect);
#endif

s32 sceSysregMsifDelaySelect(u32 n, u32 sel) {
    s32 intr;
    u32 v;
    s32 ret;
    u32 sh;

    ret = 0x80000102;
    if (n >= 2) {
        return ret;
    }
    ret = 0x800001FE;
    if (sel >= 8) {
        goto end;
    }
    intr = sceKernelCpuSuspendIntr();
    sh = n * 4;
    v = *(volatile u32 *)0xBC000050;
    ret = (v >> sh) & 7;
    *(volatile u32 *)0xBC000050 = (v & ~(7 << sh)) | (sel << sh);
    sceKernelCpuResumeIntr(intr);
    return ret;
end:
    return ret;
}

s32 sceSysregApbTimerClkSelect(u32 n, u32 sel) {
    s32 intr;
    u32 v;
    s32 ret;
    u32 sh;

    ret = 0x80000102;
    if (n >= 4) {
        return ret;
    }
    ret = 0x800001FE;
    if (sel >= 8) {
        goto end;
    }
    intr = sceKernelCpuSuspendIntr();
    sh = n * 4;
    v = *(volatile u32 *)0xBC100060;
    ret = (v >> sh) & 7;
    *(volatile u32 *)0xBC100060 = (v & ~(7 << sh)) | (sel << sh);
    sceKernelCpuResumeIntr(intr);
    return ret;
end:
    return ret;
}

s32 sceSysregAudioClkSelect(u32 n, u32 sel) {
    s32 intr;
    u32 v;
    s32 ret;
    u32 sh;

    ret = 0x80000102;
    if (n >= 2) {
        return ret;
    }
    ret = 0x800001FE;
    if (sel >= 2) {
        goto end;
    }
    intr = sceKernelCpuSuspendIntr();
    sh = n + 16;
    v = *(volatile u32 *)0xBC100060;
    ret = (v >> sh) & 1;
    *(volatile u32 *)0xBC100060 = (v & ~(1 << sh)) | (sel << sh);
    sceKernelCpuResumeIntr(intr);
    return ret;
end:
    return ret;
}

#if FW_VERSION < 271
s32 sceSysregAudioClkoutClkSelect(u32 sel) {
    s32 intr;
    u32 v;
    s32 ret;

    ret = 0x800001FE;
    if (sel >= 2) {
        goto end;
    }
    intr = sceKernelCpuSuspendIntr();
    v = *(volatile u32 *)0xBC100060;
    ret = __builtin_allegrex_ext(v, 18, 1);
    *(volatile u32 *)0xBC100060 = (v & ~0x40000) | (sel << 18);
    sceKernelCpuResumeIntr(intr);
    return ret;
end:
    return ret;
}
#endif

s32 sceSysregSpiClkSelect(u32 n, u32 sel) {
    s32 intr;
    u32 v;
    s32 ret;
    u32 sh;

    ret = 0x80000102;
    if (n >= 6) {
        return ret;
    }
    ret = 0x800001FE;
    if (sel >= 8) {
        goto end;
    }
    intr = sceKernelCpuSuspendIntr();
    sh = n * 4;
    v = *(volatile u32 *)0xBC100064;
    ret = (v >> sh) & 7;
    *(volatile u32 *)0xBC100064 = (v & ~(7 << sh)) | (sel << sh);
    sceKernelCpuResumeIntr(intr);
    return ret;
end:
    return ret;
}

INCLUDE_ASM("nonmatchings/sysreg", sceSysregLcdcClkSelect);

#if FW_VERSION < 271
s32 sceSysregAtaClkSelect(u32 sel) {
    s32 intr;
    u32 v;
    s32 ret;

    ret = 0x800001FE;
    if (sel >= 3) {
        goto end;
    }
    intr = sceKernelCpuSuspendIntr();
    v = *(volatile u32 *)0xBC10005C;
    ret = __builtin_allegrex_ext(v, 4, 2);
    *(volatile u32 *)0xBC10005C = (v & ~0x30) | (sel << 4);
    sceKernelCpuResumeIntr(intr);
    return ret;
end:
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtaClkSelect);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtahddClkSelect);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioClkoutClkSelect);
#endif

#if FW_VERSION < 271
s32 sceSysregEmcsmIoEnable(void) {
    return sysregSetIoBit(0x2, 1);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregEmcsmIoEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregEmcsmIoDisable(void) {
    return sysregSetIoBit(0x2, 0);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregEmcsmIoDisable);
#endif

#if FW_VERSION < 271
s32 sceSysregUsbIoEnable(void) {
    return sysregSetIoBit(0x4, 1);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbIoEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregUsbIoDisable(void) {
    return sysregSetIoBit(0x4, 0);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbIoDisable);
#endif

#if FW_VERSION < 271
s32 sceSysregAtaIoEnable(void) {
    return sysregSetIoBit(0x8, 1);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtaIoEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregAtaIoDisable(void) {
    return sysregSetIoBit(0x8, 0);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtaIoDisable);
#endif

#if FW_VERSION < 271
s32 sceSysregMsifIoEnable(u32 n) {
    if (n < 2) {
        return sysregSetIoBit(0x10 << n, 1);
    }
    return 0x80000102;
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifIoEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregMsifIoDisable(u32 n) {
    if (n < 2) {
        return sysregSetIoBit(0x10 << n, 0);
    }
    return 0x80000102;
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifIoDisable);
#endif

#if FW_VERSION < 271
s32 sceSysregLcdcIoEnable(void) {
    return sysregSetIoBit(0x40, 1);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregLcdcIoEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregLcdcIoDisable(void) {
    return sysregSetIoBit(0x40, 0);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregLcdcIoDisable);
#endif

#if FW_VERSION < 271
s32 sceSysregAudioIoEnable(u32 n) {
    if (n < 2) {
        return sysregSetIoBit(0x80 << n, 1);
    }
    return 0x80000102;
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioIoEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregAudioIoDisable(u32 n) {
    if (n < 2) {
        return sysregSetIoBit(0x80 << n, 0);
    }
    return 0x80000102;
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioIoDisable);
#endif

#if FW_VERSION < 271
s32 sceSysregIicIoEnable(void) {
    return sysregSetIoBit(0x200, 1);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregIicIoEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregIicIoDisable(void) {
    return sysregSetIoBit(0x200, 0);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregIicIoDisable);
#endif

#if FW_VERSION < 271
s32 sceSysregSircsIoEnable(void) {
    return sysregSetIoBit(0x400, 1);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregSircsIoEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregSircsIoDisable(void) {
    return sysregSetIoBit(0x400, 0);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregSircsIoDisable);
#endif

#if FW_VERSION < 271
s32 sceSysregAudioClkoutIoEnable(void) {
    return sysregSetIoBit(0x800, 1);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioClkoutIoEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregAudioClkoutIoDisable(void) {
    return sysregSetIoBit(0x800, 0);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioClkoutIoDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregKeyIoEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregKeyIoEnable(void) {
    return 0x80000004;
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregKeyIoDisable);
#endif

#if FW_VERSION < 271
s32 sceSysregKeyIoDisable(void) {
    return 0x80000004;
}

s32 sceSysregPwmIoEnable(void) {
    return sysregSetIoBit(0x2000, 1);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregPwmIoEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregPwmIoDisable(void) {
    return sysregSetIoBit(0x2000, 0);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregPwmIoDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtahddIoEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtahddIoDisable);
#endif

#if FW_VERSION < 271
s32 sceSysregUartIoEnable(u32 n) {
    if (n < 6) {
        return sysregSetIoBit(0x10000 << n, 1);
    }
    return 0x80000102;
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregUartIoEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregUartIoDisable(u32 n) {
    if (n < 6) {
        return sysregSetIoBit(0x10000 << n, 0);
    }
    return 0x80000102;
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregUartIoDisable);
#endif

#if FW_VERSION < 271
s32 sceSysregSpiIoEnable(u32 n) {
    if (n < 6) {
        return sysregSetIoBit(0x1000000 << n, 1);
    }
    return 0x80000102;
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregSpiIoEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregSpiIoDisable(u32 n) {
    if (n < 6) {
        return sysregSetIoBit(0x1000000 << n, 0);
    }
    return 0x80000102;
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregSpiIoDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregGpioIoEnable);
#endif

#if FW_VERSION < 271
void sceSysregGpioIoEnable(s32 arg0) {
    sysregSetGpioIoBit(arg0, 1);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregGpioIoDisable);
#endif

#if FW_VERSION < 271
void sceSysregGpioIoDisable(s32 arg0) {
    sysregSetGpioIoBit(arg0, 0);
}

INCLUDE_ASM("nonmatchings/sysreg", sysregSetGpioIoBit);

INCLUDE_ASM("nonmatchings/sysreg", sysregSetIoBit);

s32 sceSysreg_driver_55B18B84(u32 n) {
    if (n < 2) {
        return sysregSetUnk74Bit(1 << (n * 4), 0);
    }
    return 0x80000102;
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_55B18B84);
#endif

#if FW_VERSION < 271
s32 sceSysreg_driver_2112E686(u32 n) {
    if (n < 2) {
        return sysregSetUnk74Bit(1 << (n * 4), 1);
    }
    return 0x80000102;
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_2112E686);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/sysreg", sysregSetUnk74Bit);

s32 sceSysreg_driver_7B9E9A53(u32 n) {
    if (n < 2) {
        return sysregSetUnk74Bit(2 << (n * 4), 0);
    }
    return 0x80000102;
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_7B9E9A53);
#endif

#if FW_VERSION < 271
s32 sceSysreg_driver_7BDF0556(u32 n) {
    if (n < 2) {
        return sysregSetUnk74Bit(2 << (n * 4), 1);
    }
    return 0x80000102;
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_7BDF0556);
#endif

#if FW_VERSION < 271
s32 sceSysreg_driver_8D0FED1E(void) {
    return sysregSetUnk74Bit(0x100, 1);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_8D0FED1E);
#endif

#if FW_VERSION < 271
s32 sceSysreg_driver_A46E9CA8(void) {
    return sysregSetUnk74Bit(0x100, 0);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_A46E9CA8);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbGetConnectStatus);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbQueryIntr);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbAcquireIntr);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbhostQueryIntr);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbhostAcquireIntr);
#endif

#if FW_VERSION < 271
s32 sceSysregMsifGetConnectStatus(u32 n) {
    if (n < 2) {
        return (*(volatile u32 *)0xBC100080 >> (n * 8 + 8)) & 1;
    }
    return 0x80000102;
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifGetConnectStatus);
#endif

#if FW_VERSION < 271
s32 sceSysregMsifQueryConnectIntr(u32 n) {
    if (n < 2) {
        return (*(volatile u32 *)0xBC100080 >> (n * 8 + 9)) & 3;
    }
    return 0x80000102;
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifQueryConnectIntr);
#endif

#if FW_VERSION < 271
s32 sceSysregMsifAcquireConnectIntr(u32 n, s32 mask) {
    s32 intr;
    s32 ret;
    u32 sh;

    ret = 0x80000102;
    if (n >= 2) {
        goto end;
    }
    intr = sceKernelCpuSuspendIntr();
    sh = n * 8 + 9;
    ret = (*(volatile u32 *)0xBC100080 >> sh) & 3;
    *(volatile u32 *)0xBC100080 = (mask & ret) << sh;
    sceKernelCpuResumeIntrWithSync(intr);
    return ret;
end:
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifAcquireConnectIntr);
#endif

#if FW_VERSION < 271
s32 sceSysregUsbGetConnectStatus(void) {
//V{
    return *(u32 *)0xBC100080 & 1;
//V|
    return *(s32 *)0xBC100080 & 1;
//V}
}

s32 sceSysregUsbQueryIntr(void) {
    return __builtin_allegrex_ext(*(volatile u32 *)0xBC100080, 1, 4);
}

s32 sceSysregUsbAcquireIntr(s32 arg0) {
    s32 temp_a0;
    s32 temp_s0;

    temp_a0 = sceKernelCpuSuspendIntr();
    temp_s0 = __builtin_allegrex_ext(*(s32 *)0xBC100080, 1, 4);
    *(s32 *)0xBC100080 = (arg0 & temp_s0) * 2;
    sceKernelCpuResumeIntrWithSync(temp_a0);
    return temp_s0;
}
#endif

#if FW_VERSION < 310
s32 sceSysregInterruptToOther(void) {
    asm volatile("sync");
    *(volatile u32 *)0xBC100044 = 1;
    asm volatile("sync");
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregInterruptToOther);
#endif

#if FW_VERSION < 152
s32 sceSysregSemaTryLock(void) {
    s32 cpu;
    s32 ret;
    asm volatile("sync");
    asm volatile("mfc0 %0, $22" : "=r"(cpu));
    cpu++;
    *(u32 *)0xBC100048 = cpu;
    ret = -1;
    if ((*(volatile u32 *)0xBC100048 & 3) == cpu) {
        ret = 0;
    }
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregSemaTryLock);
#endif

#if FW_VERSION < 310
void sceSysregSemaUnlock(void) {
    asm volatile("sync");
    *(volatile u32 *)0xBC100048 = 0;
    asm volatile("sync");
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregSemaUnlock);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregSramAtomicRead);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_A41929DA);
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/sysreg", sysregIntrHandler);

s32 sceSysregRequestIntr(u32 cpu, u32 intno) {
    s32 cur;
    if (intno >= 32 || cpu >= 2) {
        return 0x80000102;
    }
    while (sceSysregSemaTryLock() < 0) {
    }
    ((volatile u32 *)0xBFC00400)[cpu] |= 1 << intno;
    sceSysregSemaUnlock();
    asm volatile("mfc0 %0, $22" : "=r"(cur));
    if (cpu != cur) {
        sceSysregInterruptToOther();
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregRequestIntr);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/sysreg", D_00002B04);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysreg", D_00002BFC);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/sysreg", D_00002B78_v250);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysreg", D_00002538);

INCLUDE_RODATA("nonmatchings/sysreg", D_00002578);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/sysreg", sceSysregIntrInit);
#else
s32 sceSysregIntrInit(void) {
    sceKernelRegisterIntrHandler(0x1F, 1, &sysregIntrHandler, 0, &D_00002BD0);
    sceKernelEnableIntr(0x1F);
    return 0;
}
#endif

s32 sceSysregIntrEnd(void) {
    sceKernelReleaseIntrHandler(0x1F);
    return 0;
}

s32 sceSysregEnableIntr(u32 intno) {
    s32 intr;
    s32 old;
    if (intno < 32) {
        intr = sceKernelCpuSuspendIntr();
        old = (g_sysregIntr.enabled >> intno) & 1;
        g_sysregIntr.enabled |= 1 << intno;
        sceKernelCpuResumeIntr(intr);
        return old;
    }
    return 0x80000102;
}

s32 sceSysregDisableIntr(u32 intno) {
    s32 intr;
    s32 old;
    if (intno < 32) {
        intr = sceKernelCpuSuspendIntr();
        old = (g_sysregIntr.enabled >> intno) & 1;
        g_sysregIntr.enabled &= ~(1 << intno);
        sceKernelCpuResumeIntr(intr);
        return old;
    }
    return 0x80000102;
}

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAcquireIntr);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/sysreg", func_00001AE8_v340);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/sysreg", func_00001AE8_v330);
#endif

#if FW_VERSION == 311
INCLUDE_ASM("nonmatchings/sysreg", func_00001AE8_v311);
#endif

#if FW_VERSION == 310
INCLUDE_ASM("nonmatchings/sysreg", func_00001AE8_v310);
#endif

s32 sysregSubIntrEnable(s32 arg0, s32 bit) {
    g_sysregIntr.enabled |= 1 << bit;
    return 0;
}

s32 sysregSubIntrDisable(s32 arg0, s32 bit) {
    g_sysregIntr.enabled &= ~(1 << bit);
    return 0;
}

s32 sysregSubIntrSuspend(s32 arg0, s32 bit, s32 *old) {
    u32 m = ~(1 << bit);
    if (old != NULL) {
        *old = (g_sysregIntr.enabled >> bit) & 1;
    }
    g_sysregIntr.enabled &= m;
    return 0;
}

s32 sysregSubIntrResume(s32 arg0, s32 bit, s32 val) {
    g_sysregIntr.enabled |= val << bit;
    return 0;
}

#if FW_VERSION < 310
s32 sysregSubIntrIsOccured(s32 arg0, s32 bit) {
    s32 cpu;
    asm volatile("mfc0 %0, $22" : "=r"(cpu));
    return (((volatile u32 *)0xBFC00400)[cpu] >> bit) & 1;
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sysregSubIntrIsOccured);
#endif

#if FW_VERSION < 271
s32 sceClkcSetCpuGear(s32 num, s32 den) {
    if (num >= 0x200 || den >= 0x200 || den < num) {
        return 0x800001FE;
    }
    *(volatile u32 *)0xBC200000 = ((num & 0x1FF) << 16) | (den & 0x1FF);
    asm volatile("sync");
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceClkcSetCpuGear);
#endif

s32 sceClkcGetCpuGear(s32 *num, s32 *den) {
    if (num != NULL) {
        *num = __builtin_allegrex_ext(*(volatile u32 *)0xBC200000, 16, 9);
    }
    if (den != NULL) {
        *den = *(volatile u32 *)0xBC200000 & 0x1FF;
    }
    return 0;
}

#if FW_VERSION < 271
s32 sceClkcSetBusGear(s32 num, s32 den) {
    if (num >= 0x200 || den >= 0x200 || den < num) {
        return 0x800001FE;
    }
    *(volatile u32 *)0xBC200004 = ((num & 0x1FF) << 16) | (den & 0x1FF);
    asm volatile("sync");
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceClkcSetBusGear);
#endif

s32 sceClkcGetBusGear(s32 *num, s32 *den) {
    if (num != NULL) {
        *num = __builtin_allegrex_ext(*(volatile u32 *)0xBC200004, 16, 9);
    }
    if (den != NULL) {
        *den = *(volatile u32 *)0xBC200004 & 0x1FF;
    }
    return 0;
}

#if FW_VERSION < 201
s32 sceClkcSetCpuFrequency(float freq) {
    float pll = sceSysregPllGetFrequency();
    s32 n = (s32)(freq * 511.0f / pll);
    if (n < 0) {
        n = 1;
    }
    if (n >= 0x200) {
        n = 0x1FF;
    }
    *(volatile u32 *)0xBC200000 = ((n & 0x1FF) << 16) | 0x1FF;
    asm volatile("sync");
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceClkcSetCpuFrequency);
#endif

float sceClkcGetCpuFrequency(void) {
    float pll = sceSysregPllGetFrequency();
    u32 v = *(volatile u32 *)0xBC200000;
    return pll * (s32)__builtin_allegrex_ext(v, 16, 9) / (s32)(v & 0x1FF);
}

#if FW_VERSION < 271
s32 sceClkcSetBusFrequency(float freq) {
    float pll = sceSysregPllGetFrequency();
    s32 n = (s32)(freq * 1022.0f / pll);
    if (n < 0) {
        n = 1;
    }
    if (n >= 0x200) {
        n = 0x1FF;
    }
    *(volatile u32 *)0xBC200004 = ((n & 0x1FF) << 16) | 0x1FF;
    asm volatile("sync");
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceClkcSetBusFrequency);
#endif

float sceClkcGetBusFrequency(void) {
    float pll = sceSysregPllGetFrequency();
    u32 v = *(volatile u32 *)0xBC200004;
    return pll * (s32)__builtin_allegrex_ext(v, 16, 9) / (s32)((v & 0x1FF) * 2);
}
