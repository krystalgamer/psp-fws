/* cflags[150]: -Os -frename-registers */
/* cflags[152]: -Os -frename-registers */
/* cflags[100]: -Os -frename-registers */
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
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysregSetMasterPriv);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/sysreg", sceSysregGetFuseId);
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysregGetFuseConfig);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregTopResetEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregScResetEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregMeResetEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregMeResetDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAwResetEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAwResetDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregVmeResetEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregVmeResetDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAvcResetEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAvcResetDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbResetEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbResetDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtaResetEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtaResetDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifResetEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifResetDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregKirkResetEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregKirkResetDisable);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtahddResetEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtahddResetDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbhostResetEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbhostResetDisable);
#else
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

INCLUDE_ASM("nonmatchings/sysreg", sceSysregPllGetFrequency);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregPllGetOutSelect);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregPllSetOutSelect);
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysregMeBusClockEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregMeBusClockDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAwRegABusClockEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAwRegABusClockDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAwRegBBusClockEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAwRegBBusClockDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAwEdramBusClockEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAwEdramBusClockDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregDmacplusBusClockEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregDmacplusBusClockDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregDmacBusClockEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregDmacBusClockDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregKirkBusClockEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregKirkBusClockDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtaBusClockEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtaBusClockDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbBusClockEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbBusClockDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifBusClockEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifBusClockDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregEmcddrBusClockEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregEmcddrBusClockDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregEmcsmBusClockEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregEmcsmBusClockDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregApbBusClockEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregApbBusClockDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioBusClockEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioBusClockDisable);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtahddBusClockEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtahddBusClockDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbhostBusClockEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbhostBusClockDisable);
#else
INCLUDE_ASM("nonmatchings/sysreg", func_00000B64);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtaClkEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtaClkDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtahddClkEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtahddClkDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbhostClkEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbhostClkDisable);
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifClkEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifClkDisable);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/sysreg", func_00000C58);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtaClkEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtaClkDisable);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtahddClkEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtahddClkDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbhostClkEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbhostClkDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifClkEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifClkDisable);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbClkEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbClkDisable);
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysregSpiClkEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregSpiClkDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUartClkEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUartClkDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregApbTimerClkEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregApbTimerClkDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioClkEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioClkDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregLcdcClkEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregLcdcClkDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregPwmClkEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregPwmClkDisable);

#if FW_VERSION >= 271
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
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysregIicClkEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregIicClkDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregSircsClkEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregSircsClkDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregGpioClkEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregGpioClkDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioClkoutClkEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioClkoutClkDisable);

#if FW_VERSION >= 271
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
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysregEmcsmIoEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregEmcsmIoDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbIoEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbIoDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtaIoEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtaIoDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifIoEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifIoDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregLcdcIoEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregLcdcIoDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioIoEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioIoDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregIicIoEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregIicIoDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregSircsIoEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregSircsIoDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioClkoutIoEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAudioClkoutIoDisable);

#if FW_VERSION >= 271
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
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysregPwmIoEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregPwmIoDisable);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtahddIoEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregAtahddIoDisable);
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUartIoEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUartIoDisable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregSpiIoEnable);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregSpiIoDisable);

#if FW_VERSION >= 271
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
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_55B18B84);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_2112E686);

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/sysreg", func_00001BF4);
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_7B9E9A53);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_7BDF0556);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_8D0FED1E);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_A46E9CA8);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbGetConnectStatus);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbQueryIntr);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbAcquireIntr);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbhostQueryIntr);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbhostAcquireIntr);
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifGetConnectStatus);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifQueryConnectIntr);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifAcquireConnectIntr);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbGetConnectStatus);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbQueryIntr);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbAcquireIntr);
#endif

#if FW_VERSION < 271
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

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbhostQueryIntr);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregUsbhostAcquireIntr);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifGetConnectStatus);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifQueryConnectIntr);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregMsifAcquireConnectIntr);
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysregInterruptToOther);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregSemaTryLock);

INCLUDE_ASM("nonmatchings/sysreg", sceSysregSemaUnlock);

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/sysreg", sceSysregSramAtomicRead);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_A41929DA);
#else
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

INCLUDE_ASM("nonmatchings/sysreg", func_00001AC8);

INCLUDE_ASM("nonmatchings/sysreg", func_00001AE8);

INCLUDE_ASM("nonmatchings/sysreg", func_00001B0C);

INCLUDE_ASM("nonmatchings/sysreg", func_00001B44);

INCLUDE_ASM("nonmatchings/sysreg", func_00001B60);

INCLUDE_ASM("nonmatchings/sysreg", sceClkcSetCpuGear);

INCLUDE_ASM("nonmatchings/sysreg", sceClkcGetCpuGear);

INCLUDE_ASM("nonmatchings/sysreg", sceClkcSetBusGear);

INCLUDE_ASM("nonmatchings/sysreg", sceClkcGetBusGear);

INCLUDE_ASM("nonmatchings/sysreg", sceClkcSetCpuFrequency);

INCLUDE_ASM("nonmatchings/sysreg", sceClkcGetCpuFrequency);

INCLUDE_ASM("nonmatchings/sysreg", sceClkcSetBusFrequency);

INCLUDE_ASM("nonmatchings/sysreg", sceClkcGetBusFrequency);
