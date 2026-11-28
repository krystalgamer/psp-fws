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

INCLUDE_ASM("nonmatchings/sysreg", sceSysregDoTimerEvent);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysreg", sceSysregSetAwEdramSize);
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysregGetTachyonVersion);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregVblankIRQPolar);

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
    return func_00000588(0x1, 1);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregTopResetEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregScResetEnable(void) {
    return func_00000588(0x2, 1);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregScResetEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregMeResetEnable(void) {
    return func_00000588(0x4, 1);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMeResetEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregMeResetDisable(void) {
    return func_00000588(0x4, 0);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMeResetDisable);
#endif

#if FW_VERSION < 271
s32 sceSysregAwResetEnable(void) {
    return func_00000588(0x8, 1);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAwResetEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregAwResetDisable(void) {
    return func_00000588(0x8, 0);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAwResetDisable);
#endif

#if FW_VERSION < 271
s32 sceSysregVmeResetEnable(void) {
    return func_00000588(0x10, 1);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregVmeResetEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregVmeResetDisable(void) {
    return func_00000588(0x10, 0);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregVmeResetDisable);
#endif

#if FW_VERSION < 271
s32 sceSysregAvcResetEnable(void) {
    return func_00000588(0x20, 1);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAvcResetEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregAvcResetDisable(void) {
    return func_00000588(0x20, 0);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAvcResetDisable);
#endif

#if FW_VERSION < 271
s32 sceSysregUsbResetEnable(void) {
    return func_00000588(0x40, 1);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbResetEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregUsbResetDisable(void) {
    return func_00000588(0x40, 0);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbResetDisable);
#endif

#if FW_VERSION < 271
s32 sceSysregAtaResetEnable(void) {
    return func_00000588(0x80, 1);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtaResetEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregAtaResetDisable(void) {
    return func_00000588(0x80, 0);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtaResetDisable);
#endif

#if FW_VERSION < 271
s32 sceSysregMsifResetEnable(u32 n) {
    if (n < 2) {
        return func_00000588(0x100 << n, 1);
    }
    return 0x80000102;
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifResetEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregMsifResetDisable(u32 n) {
    if (n < 2) {
        return func_00000588(0x100 << n, 0);
    }
    return 0x80000102;
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifResetDisable);
#endif

#if FW_VERSION < 271
s32 sceSysregKirkResetEnable(void) {
    return func_00000588(0x400, 1);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregKirkResetEnable);
#endif

#if FW_VERSION < 271
s32 sceSysregKirkResetDisable(void) {
    return func_00000588(0x400, 0);
}
#else
INCLUDE_ASM("nonmatchings/sysreg", sceSysregKirkResetDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtahddResetEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtahddResetDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbhostResetEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbhostResetDisable);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/sysreg", func_00000588);
#endif

INCLUDE_RODATA("nonmatchings/sysreg", D_00002520);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregPllGetBaseFrequency);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/sysreg", D_00002B04);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysreg", sceSysregPllUpdateFrequency);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregPllSetOutSelect);
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregPllGetBaseFrequency);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysreg", sceSysregPllUpdateFrequency);
#endif

float sceSysregPllGetFrequency(void) {
    return D_00002610;
}

s32 sceSysregPllGetOutSelect(void) {
    return *(volatile u32 *)0xBC100068 & 0xF;
}

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregPllSetOutSelect);
#else
s32 sceSysregMeBusClockEnable(void) {
    return func_00000B64(0x1, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMeBusClockEnable);
#else
s32 sceSysregMeBusClockDisable(void) {
    return func_00000B64(0x1, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMeBusClockDisable);
#else
s32 sceSysregAwRegABusClockEnable(void) {
    return func_00000B64(0x2, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAwRegABusClockEnable);
#else
s32 sceSysregAwRegABusClockDisable(void) {
    return func_00000B64(0x2, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAwRegABusClockDisable);
#else
s32 sceSysregAwRegBBusClockEnable(void) {
    return func_00000B64(0x4, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAwRegBBusClockEnable);
#else
s32 sceSysregAwRegBBusClockDisable(void) {
    return func_00000B64(0x4, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAwRegBBusClockDisable);
#else
s32 sceSysregAwEdramBusClockEnable(void) {
    return func_00000B64(0x8, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAwEdramBusClockEnable);
#else
s32 sceSysregAwEdramBusClockDisable(void) {
    return func_00000B64(0x8, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAwEdramBusClockDisable);
#else
s32 sceSysregDmacplusBusClockEnable(void) {
    return func_00000B64(0x10, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregDmacplusBusClockEnable);
#else
s32 sceSysregDmacplusBusClockDisable(void) {
    return func_00000B64(0x10, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregDmacplusBusClockDisable);
#else
s32 sceSysregDmacBusClockEnable(u32 n) {
    if (n < 2) {
        return func_00000B64(0x20 << n, 1);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregDmacBusClockEnable);
#else
s32 sceSysregDmacBusClockDisable(u32 n) {
    if (n < 2) {
        return func_00000B64(0x20 << n, 0);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregDmacBusClockDisable);
#else
s32 sceSysregKirkBusClockEnable(void) {
    return func_00000B64(0x80, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregKirkBusClockEnable);
#else
s32 sceSysregKirkBusClockDisable(void) {
    return func_00000B64(0x80, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregKirkBusClockDisable);
#else
s32 sceSysregAtaBusClockEnable(void) {
    return func_00000B64(0x100, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtaBusClockEnable);
#else
s32 sceSysregAtaBusClockDisable(void) {
    return func_00000B64(0x100, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtaBusClockDisable);
#else
s32 sceSysregUsbBusClockEnable(void) {
    return func_00000B64(0x200, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbBusClockEnable);
#else
s32 sceSysregUsbBusClockDisable(void) {
    return func_00000B64(0x200, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbBusClockDisable);
#else
s32 sceSysregMsifBusClockEnable(u32 n) {
    if (n < 2) {
        return func_00000B64(0x400 << n, 1);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifBusClockEnable);
#else
s32 sceSysregMsifBusClockDisable(u32 n) {
    if (n < 2) {
        return func_00000B64(0x400 << n, 0);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifBusClockDisable);
#else
s32 sceSysregEmcddrBusClockEnable(void) {
    return func_00000B64(0x1000, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregEmcddrBusClockEnable);
#else
s32 sceSysregEmcddrBusClockDisable(void) {
    return func_00000B64(0x1000, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregEmcddrBusClockDisable);
#else
s32 sceSysregEmcsmBusClockEnable(void) {
    return func_00000B64(0x2000, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregEmcsmBusClockEnable);
#else
s32 sceSysregEmcsmBusClockDisable(void) {
    return func_00000B64(0x2000, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregEmcsmBusClockDisable);
#else
s32 sceSysregApbBusClockEnable(void) {
    return func_00000B64(0x4000, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregApbBusClockEnable);
#else
s32 sceSysregApbBusClockDisable(void) {
    return func_00000B64(0x4000, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregApbBusClockDisable);
#else
s32 sceSysregAudioBusClockEnable(u32 n) {
    if (n < 2) {
        return func_00000B64(0x8000 << n, 1);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioBusClockEnable);
#else
s32 sceSysregAudioBusClockDisable(u32 n) {
    if (n < 2) {
        return func_00000B64(0x8000 << n, 0);
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
INCLUDE_ASM("nonmatchings/sysreg", func_00000B64);
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
        return func_00000C58(0x100 << n, 1);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifClkEnable);
#else
s32 sceSysregMsifClkDisable(u32 n) {
    if (n < 2) {
        return func_00000C58(0x100 << n, 0);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifClkDisable);
#else
INCLUDE_ASM("nonmatchings/sysreg", func_00000C58);

s32 sceSysregAtaClkEnable(void) {
    return func_00000C58(0x1, 1);
}

s32 sceSysregAtaClkDisable(void) {
    return func_00000C58(0x1, 0);
}

s32 sceSysregUsbClkEnable(u32 n) {
    return func_00000C58((n & 0xF) << 4, 1);
}

s32 sceSysregUsbClkDisable(u32 n) {
    return func_00000C58((n & 0xF) << 4, 0);
}

s32 sceSysregSpiClkEnable(u32 n) {
    if (n < 6) {
        return func_00001104(0x1 << n, 1);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregSpiClkEnable);
#else
s32 sceSysregSpiClkDisable(u32 n) {
    if (n < 6) {
        return func_00001104(0x1 << n, 0);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregSpiClkDisable);
#else
s32 sceSysregUartClkEnable(u32 n) {
    if (n < 6) {
        return func_00001104(0x40 << n, 1);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregUartClkEnable);
#else
s32 sceSysregUartClkDisable(u32 n) {
    if (n < 6) {
        return func_00001104(0x40 << n, 0);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregUartClkDisable);
#else
s32 sceSysregApbTimerClkEnable(u32 n) {
    if (n < 4) {
        return func_00001104(0x1000 << n, 1);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregApbTimerClkEnable);
#else
s32 sceSysregApbTimerClkDisable(u32 n) {
    if (n < 4) {
        return func_00001104(0x1000 << n, 0);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregApbTimerClkDisable);
#else
s32 sceSysregAudioClkEnable(u32 n) {
    if (n < 2) {
        return func_00001104(0x10000 << n, 1);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioClkEnable);
#else
s32 sceSysregAudioClkDisable(u32 n) {
    if (n < 2) {
        return func_00001104(0x10000 << n, 0);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioClkDisable);
#else
s32 sceSysregLcdcClkEnable(void) {
    return func_00001104(0x40000, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregLcdcClkEnable);
#else
s32 sceSysregLcdcClkDisable(void) {
    return func_00001104(0x40000, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregLcdcClkDisable);
#else
s32 sceSysregPwmClkEnable(void) {
    return func_00001104(0x80000, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregPwmClkEnable);
#else
s32 sceSysregPwmClkDisable(void) {
    return func_00001104(0x80000, 0);
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
    return func_00001104(0x200000, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregIicClkEnable);
#else
s32 sceSysregIicClkDisable(void) {
    return func_00001104(0x200000, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregIicClkDisable);
#else
s32 sceSysregSircsClkEnable(void) {
    return func_00001104(0x400000, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregSircsClkEnable);
#else
s32 sceSysregSircsClkDisable(void) {
    return func_00001104(0x400000, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregSircsClkDisable);
#else
s32 sceSysregGpioClkEnable(void) {
    return func_00001104(0x800000, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregGpioClkEnable);
#else
s32 sceSysregGpioClkDisable(void) {
    return func_00001104(0x800000, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregGpioClkDisable);
#else
s32 sceSysregAudioClkoutClkEnable(void) {
    return func_00001104(0x1000000, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioClkoutClkEnable);
#else
s32 sceSysregAudioClkoutClkDisable(void) {
    return func_00001104(0x1000000, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioClkoutClkDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbClkEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbClkDisable);
#else
INCLUDE_ASM("nonmatchings/sysreg", func_00001104);
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifClkSelect);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifDelaySelect);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregApbTimerClkSelect);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioClkSelect);

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioClkoutClkSelect);
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysregSpiClkSelect);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregLcdcClkSelect);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtaClkSelect);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtahddClkSelect);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioClkoutClkSelect);
#else
s32 sceSysregEmcsmIoEnable(void) {
    return func_00001AF8(0x2, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregEmcsmIoEnable);
#else
s32 sceSysregEmcsmIoDisable(void) {
    return func_00001AF8(0x2, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregEmcsmIoDisable);
#else
s32 sceSysregUsbIoEnable(void) {
    return func_00001AF8(0x4, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbIoEnable);
#else
s32 sceSysregUsbIoDisable(void) {
    return func_00001AF8(0x4, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbIoDisable);
#else
s32 sceSysregAtaIoEnable(void) {
    return func_00001AF8(0x8, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtaIoEnable);
#else
s32 sceSysregAtaIoDisable(void) {
    return func_00001AF8(0x8, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtaIoDisable);
#else
s32 sceSysregMsifIoEnable(u32 n) {
    if (n < 2) {
        return func_00001AF8(0x10 << n, 1);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifIoEnable);
#else
s32 sceSysregMsifIoDisable(u32 n) {
    if (n < 2) {
        return func_00001AF8(0x10 << n, 0);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifIoDisable);
#else
s32 sceSysregLcdcIoEnable(void) {
    return func_00001AF8(0x40, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregLcdcIoEnable);
#else
s32 sceSysregLcdcIoDisable(void) {
    return func_00001AF8(0x40, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregLcdcIoDisable);
#else
s32 sceSysregAudioIoEnable(u32 n) {
    if (n < 2) {
        return func_00001AF8(0x80 << n, 1);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioIoEnable);
#else
s32 sceSysregAudioIoDisable(u32 n) {
    if (n < 2) {
        return func_00001AF8(0x80 << n, 0);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioIoDisable);
#else
s32 sceSysregIicIoEnable(void) {
    return func_00001AF8(0x200, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregIicIoEnable);
#else
s32 sceSysregIicIoDisable(void) {
    return func_00001AF8(0x200, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregIicIoDisable);
#else
s32 sceSysregSircsIoEnable(void) {
    return func_00001AF8(0x400, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregSircsIoEnable);
#else
s32 sceSysregSircsIoDisable(void) {
    return func_00001AF8(0x400, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregSircsIoDisable);
#else
s32 sceSysregAudioClkoutIoEnable(void) {
    return func_00001AF8(0x800, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioClkoutIoEnable);
#else
s32 sceSysregAudioClkoutIoDisable(void) {
    return func_00001AF8(0x800, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioClkoutIoDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregKeyIoEnable);
#else
s32 sceSysregKeyIoEnable(void) {
    return 0x80000004;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregKeyIoDisable);
#else
s32 sceSysregKeyIoDisable(void) {
    return 0x80000004;
}

s32 sceSysregPwmIoEnable(void) {
    return func_00001AF8(0x2000, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregPwmIoEnable);
#else
s32 sceSysregPwmIoDisable(void) {
    return func_00001AF8(0x2000, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregPwmIoDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtahddIoEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtahddIoDisable);
#else
s32 sceSysregUartIoEnable(u32 n) {
    if (n < 6) {
        return func_00001AF8(0x10000 << n, 1);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregUartIoEnable);
#else
s32 sceSysregUartIoDisable(u32 n) {
    if (n < 6) {
        return func_00001AF8(0x10000 << n, 0);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregUartIoDisable);
#else
s32 sceSysregSpiIoEnable(u32 n) {
    if (n < 6) {
        return func_00001AF8(0x1000000 << n, 1);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregSpiIoEnable);
#else
s32 sceSysregSpiIoDisable(u32 n) {
    if (n < 6) {
        return func_00001AF8(0x1000000 << n, 0);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregSpiIoDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregGpioIoEnable);
#else
void sceSysregGpioIoEnable(s32 arg0) {
    func_00001A68(arg0, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregGpioIoDisable);
#else
void sceSysregGpioIoDisable(s32 arg0) {
    func_00001A68(arg0, 0);
}

INCLUDE_ASM("nonmatchings/sysreg", func_00001A68);

INCLUDE_ASM("nonmatchings/sysreg", func_00001AF8);

s32 sceSysreg_driver_55B18B84(u32 n) {
    if (n < 2) {
        return func_00001BF4(1 << (n * 4), 0);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_55B18B84);
#else
s32 sceSysreg_driver_2112E686(u32 n) {
    if (n < 2) {
        return func_00001BF4(1 << (n * 4), 1);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_2112E686);
#else
INCLUDE_ASM("nonmatchings/sysreg", func_00001BF4);

s32 sceSysreg_driver_7B9E9A53(u32 n) {
    if (n < 2) {
        return func_00001BF4(2 << (n * 4), 0);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_7B9E9A53);
#else
s32 sceSysreg_driver_7BDF0556(u32 n) {
    if (n < 2) {
        return func_00001BF4(2 << (n * 4), 1);
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_7BDF0556);
#else
s32 sceSysreg_driver_8D0FED1E(void) {
    return func_00001BF4(0x100, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_8D0FED1E);
#else
s32 sceSysreg_driver_A46E9CA8(void) {
    return func_00001BF4(0x100, 0);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_A46E9CA8);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbGetConnectStatus);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbQueryIntr);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbAcquireIntr);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbhostQueryIntr);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbhostAcquireIntr);
#else
s32 sceSysregMsifGetConnectStatus(u32 n) {
    if (n < 2) {
        return (*(volatile u32 *)0xBC100080 >> (n * 8 + 8)) & 1;
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifGetConnectStatus);
#else
s32 sceSysregMsifQueryConnectIntr(u32 n) {
    if (n < 2) {
        return (*(volatile u32 *)0xBC100080 >> (n * 8 + 9)) & 3;
    }
    return 0x80000102;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifQueryConnectIntr);
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifAcquireConnectIntr);

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

INCLUDE_ASM("nonmatchings/sysreg", sceSysregSemaTryLock);

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
INCLUDE_ASM("nonmatchings/sysreg", func_00001814);
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysregRequestIntr);

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
    sceKernelRegisterIntrHandler(0x1F, 1, &func_00001814, 0, &D_00002BD0);
    sceKernelEnableIntr(0x1F);
    return 0;
}
#endif

s32 sceSysregIntrEnd(void) {
    sceKernelReleaseIntrHandler(0x1F);
    return 0;
}

INCLUDE_ASM("nonmatchings/sysreg", sceSysregEnableIntr);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregDisableIntr);

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

s32 func_00001AC8(s32 arg0, s32 bit) {
    D_00002614 |= 1 << bit;
    return 0;
}

s32 func_00001AE8(s32 arg0, s32 bit) {
    D_00002614 &= ~(1 << bit);
    return 0;
}

s32 func_00001B0C(s32 arg0, s32 bit, s32 *old) {
    u32 m = ~(1 << bit);
    if (old != NULL) {
        *old = (D_00002614 >> bit) & 1;
    }
    D_00002614 &= m;
    return 0;
}

s32 func_00001B44(s32 arg0, s32 bit, s32 val) {
    D_00002614 |= val << bit;
    return 0;
}

INCLUDE_ASM("nonmatchings/sysreg", func_00001B60);

INCLUDE_ASM("nonmatchings/sysreg", sceClkcSetCpuGear);

INCLUDE_ASM("nonmatchings/sysreg", sceClkcGetCpuGear);

INCLUDE_ASM("nonmatchings/sysreg", sceClkcSetBusGear);

s32 sceClkcGetBusGear(s32 *num, s32 *den) {
    if (num != NULL) {
        *num = __builtin_allegrex_ext(*(volatile u32 *)0xBC200004, 16, 9);
    }
    if (den != NULL) {
        *den = *(volatile u32 *)0xBC200004 & 0x1FF;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/sysreg", sceClkcSetCpuFrequency);

INCLUDE_ASM("nonmatchings/sysreg", sceClkcGetCpuFrequency);

INCLUDE_ASM("nonmatchings/sysreg", sceClkcSetBusFrequency);

INCLUDE_ASM("nonmatchings/sysreg", sceClkcGetBusFrequency);
