/* cflags: -O2 -frename-registers */
#include "common.h"
#include "lowio_decls.h"

INCLUDE_ASM("nonmatchings/lowio", module_start);

INCLUDE_ASM("nonmatchings/lowio", module_reboot_before);

INCLUDE_ASM("nonmatchings/lowio", func_000000E8);

s32 func_00000130(void) {
    sceSysregIntrEnd();
    return 0;
}

s32 sceSysregInit(void) {
    sceKernelUnregisterSysEventHandler(&D_0000BAC4);
    sceSysregIntrInit();
    return 0;
}

s32 sceSysregEnd(void) {
    sceSysregIntrEnd();
    return 0;
}

s32 func_0000019C(void) {
    return 0;
}

s32 func_000001A4(void) {
    return 0;
}

s32 func_000001AC(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lowio", sceSysregDoTimerEvent);

INCLUDE_ASM("nonmatchings/lowio", sceSysregSetAwEdramSize);

INCLUDE_ASM("nonmatchings/lowio", sceSysregGetTachyonVersion);

INCLUDE_ASM("nonmatchings/lowio", sceSysregVblankIRQPolar);

INCLUDE_ASM("nonmatchings/lowio", sceSysregGenerateVblankIRQ);

INCLUDE_ASM("nonmatchings/lowio", sceSysregSetMasterPriv);

INCLUDE_ASM("nonmatchings/lowio", sceSysregGetFuseId);

INCLUDE_ASM("nonmatchings/lowio", sceSysregGetFuseConfig);

INCLUDE_ASM("nonmatchings/lowio", sceSysregTopResetEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregScResetEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregMeResetEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregMeResetDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAwResetEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAwResetDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregVmeResetEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregVmeResetDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAvcResetEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAvcResetDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregUsbResetEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregUsbResetDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAtaResetEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAtaResetDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregMsifResetEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregMsifResetDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregKirkResetEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregKirkResetDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAtahddResetEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAtahddResetDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregUsbhostResetEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregUsbhostResetDisable);

INCLUDE_RODATA("nonmatchings/lowio", D_0000A88C);

INCLUDE_RODATA("nonmatchings/lowio", D_0000A890);

INCLUDE_RODATA("nonmatchings/lowio", D_0000A8AC);

INCLUDE_RODATA("nonmatchings/lowio", D_0000A8C0);

INCLUDE_RODATA("nonmatchings/lowio", D_0000A8E0);

INCLUDE_RODATA("nonmatchings/lowio", D_0000A8F8);

INCLUDE_RODATA("nonmatchings/lowio", D_0000A910);

INCLUDE_RODATA("nonmatchings/lowio", D_0000A928);

INCLUDE_RODATA("nonmatchings/lowio", D_0000A938);

INCLUDE_RODATA("nonmatchings/lowio", D_0000A958);

INCLUDE_RODATA("nonmatchings/lowio", D_0000A96C);

INCLUDE_RODATA("nonmatchings/lowio", D_0000AF54);

INCLUDE_RODATA("nonmatchings/lowio", D_0000AF64);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B024);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B034);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B07C);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B08C);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B0E4);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B0EC);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B0FC);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B110);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B2D8);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B2E8);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B3A8);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B3B8);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B41C);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B424);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B42C);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B520);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B530);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B5E0);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B5E4);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B614);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B61C);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B628);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B66C);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B670);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B680);

INCLUDE_ASM("nonmatchings/lowio", sceSysregPllGetBaseFrequency);

INCLUDE_ASM("nonmatchings/lowio", sceSysregPllUpdateFrequency);

INCLUDE_ASM("nonmatchings/lowio", sceSysregPllGetFrequency);

INCLUDE_ASM("nonmatchings/lowio", sceSysregPllGetOutSelect);

INCLUDE_ASM("nonmatchings/lowio", sceSysregPllSetOutSelect);

INCLUDE_ASM("nonmatchings/lowio", sceSysregMeBusClockEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregMeBusClockDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAwRegABusClockEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAwRegABusClockDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAwRegBBusClockEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAwRegBBusClockDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAwEdramBusClockEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAwEdramBusClockDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregDmacplusBusClockEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregDmacplusBusClockDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregDmacBusClockEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregDmacBusClockDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregKirkBusClockEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregKirkBusClockDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAtaBusClockEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAtaBusClockDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregUsbBusClockEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregUsbBusClockDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregMsifBusClockEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregMsifBusClockDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregEmcddrBusClockEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregEmcddrBusClockDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregEmcsmBusClockEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregEmcsmBusClockDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregApbBusClockEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregApbBusClockDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAudioBusClockEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAudioBusClockDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAtahddBusClockEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAtahddBusClockDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregUsbhostBusClockEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregUsbhostBusClockDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAtaClkEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAtaClkDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAtahddClkEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAtahddClkDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregUsbhostClkEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregUsbhostClkDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregMsifClkEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregMsifClkDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregSpiClkEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregSpiClkDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregUartClkEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregUartClkDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregApbTimerClkEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregApbTimerClkDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAudioClkEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAudioClkDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregLcdcClkEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregLcdcClkDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregPwmClkEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregPwmClkDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregKeyClkEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregKeyClkDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregIicClkEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregIicClkDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregSircsClkEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregSircsClkDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregGpioClkEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregGpioClkDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAudioClkoutClkEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAudioClkoutClkDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregUsbClkEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregUsbClkDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregMsifClkSelect);

INCLUDE_ASM("nonmatchings/lowio", sceSysregMsifDelaySelect);

INCLUDE_ASM("nonmatchings/lowio", sceSysregApbTimerClkSelect);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAudioClkSelect);

INCLUDE_ASM("nonmatchings/lowio", sceSysregSpiClkSelect);

INCLUDE_ASM("nonmatchings/lowio", sceSysregLcdcClkSelect);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAtaClkSelect);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAtahddClkSelect);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAudioClkoutClkSelect);

INCLUDE_ASM("nonmatchings/lowio", sceSysregEmcsmIoEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregEmcsmIoDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregUsbIoEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregUsbIoDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAtaIoEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAtaIoDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregMsifIoEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregMsifIoDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregLcdcIoEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregLcdcIoDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAudioIoEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAudioIoDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregIicIoEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregIicIoDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregSircsIoEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregSircsIoDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAudioClkoutIoEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAudioClkoutIoDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregKeyIoEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregKeyIoDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregPwmIoEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregPwmIoDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAtahddIoEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAtahddIoDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregUartIoEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregUartIoDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregSpiIoEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregSpiIoDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregGpioIoEnable);

INCLUDE_ASM("nonmatchings/lowio", sceSysregGpioIoDisable);

INCLUDE_ASM("nonmatchings/lowio", sceSysreg_driver_55B18B84);

INCLUDE_ASM("nonmatchings/lowio", sceSysreg_driver_2112E686);

INCLUDE_ASM("nonmatchings/lowio", sceSysreg_driver_7B9E9A53);

INCLUDE_ASM("nonmatchings/lowio", sceSysreg_driver_7BDF0556);

INCLUDE_ASM("nonmatchings/lowio", sceSysreg_driver_8D0FED1E);

INCLUDE_ASM("nonmatchings/lowio", sceSysreg_driver_A46E9CA8);

INCLUDE_ASM("nonmatchings/lowio", sceSysregUsbGetConnectStatus);

INCLUDE_ASM("nonmatchings/lowio", sceSysregUsbQueryIntr);

INCLUDE_ASM("nonmatchings/lowio", sceSysregUsbAcquireIntr);

INCLUDE_ASM("nonmatchings/lowio", sceSysregUsbhostQueryIntr);

INCLUDE_ASM("nonmatchings/lowio", sceSysregUsbhostAcquireIntr);

INCLUDE_ASM("nonmatchings/lowio", sceSysregMsifGetConnectStatus);

INCLUDE_ASM("nonmatchings/lowio", sceSysregMsifQueryConnectIntr);

INCLUDE_ASM("nonmatchings/lowio", sceSysregMsifAcquireConnectIntr);

INCLUDE_ASM("nonmatchings/lowio", sceSysregInterruptToOther);

INCLUDE_ASM("nonmatchings/lowio", sceSysregSemaTryLock);

INCLUDE_ASM("nonmatchings/lowio", sceSysregSemaUnlock);

INCLUDE_ASM("nonmatchings/lowio", sceSysregSramAtomicRead);

INCLUDE_ASM("nonmatchings/lowio", sceSysreg_driver_A41929DA);

INCLUDE_ASM("nonmatchings/lowio", sceSysregRequestIntr);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B698);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B6D8);

INCLUDE_ASM("nonmatchings/lowio", sceSysregIntrInit);

s32 sceSysregIntrEnd(void) {
    sceKernelReleaseIntrHandler(0x1F);
    return 0;
}

INCLUDE_ASM("nonmatchings/lowio", sceSysregEnableIntr);

INCLUDE_ASM("nonmatchings/lowio", sceSysregDisableIntr);

INCLUDE_ASM("nonmatchings/lowio", sceSysregAcquireIntr);

INCLUDE_ASM("nonmatchings/lowio", func_00001BD0);

INCLUDE_ASM("nonmatchings/lowio", func_00001CA4);

INCLUDE_ASM("nonmatchings/lowio", func_00001CC4);

INCLUDE_ASM("nonmatchings/lowio", func_00001CE8);

INCLUDE_ASM("nonmatchings/lowio", func_00001D20);

INCLUDE_ASM("nonmatchings/lowio", func_00001D3C);

INCLUDE_ASM("nonmatchings/lowio", sceClkcSetCpuGear);

INCLUDE_ASM("nonmatchings/lowio", sceClkcGetCpuGear);

INCLUDE_ASM("nonmatchings/lowio", sceClkcSetBusGear);

INCLUDE_ASM("nonmatchings/lowio", sceClkcGetBusGear);

INCLUDE_ASM("nonmatchings/lowio", sceClkcSetCpuFrequency);

INCLUDE_ASM("nonmatchings/lowio", sceClkcGetCpuFrequency);

INCLUDE_ASM("nonmatchings/lowio", sceClkcSetBusFrequency);

INCLUDE_ASM("nonmatchings/lowio", sceClkcGetBusFrequency);

INCLUDE_ASM("nonmatchings/lowio", sceGpioSetPortMode);

INCLUDE_ASM("nonmatchings/lowio", sceGpioGetPortMode);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B718);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B720);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B74C);

INCLUDE_ASM("nonmatchings/lowio", sceGpioSetIntrMode);

INCLUDE_ASM("nonmatchings/lowio", sceGpioGetIntrMode);

INCLUDE_ASM("nonmatchings/lowio", func_0000233C);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", func_000023E8);
#else
s32 func_000023E8(void) {
    sceKernelUnregisterSysEventHandler(&D_0000BB08);
    sceKernelReleaseIntrHandler(4);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/lowio", sceGpioInit);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", sceGpioEnd);
#else
s32 sceGpioEnd(void) {
    sceKernelUnregisterSysEventHandler(&D_0000BB08);
    sceKernelReleaseIntrHandler(4);
    return 0;
}
#endif

s32 sceGpioSuspend(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lowio", sceGpioResume);

INCLUDE_ASM("nonmatchings/lowio", sceGpioPortRead);

INCLUDE_ASM("nonmatchings/lowio", sceGpioPortSet);

INCLUDE_ASM("nonmatchings/lowio", sceGpioPortClear);

INCLUDE_ASM("nonmatchings/lowio", sceGpioPortInvert);

INCLUDE_ASM("nonmatchings/lowio", sceGpioEnableIntr);

INCLUDE_ASM("nonmatchings/lowio", sceGpioDisableIntr);

INCLUDE_ASM("nonmatchings/lowio", sceGpioQueryIntr);

INCLUDE_ASM("nonmatchings/lowio", sceGpioAcquireIntr);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", sceGpioGetCapturePort);
#else
s32 sceGpioGetCapturePort(u32 arg0) {
    s32 var_v0;

    var_v0 = 0x80000102;
    if (arg0 < 4U) {
        var_v0 = ((u32) D_0000BD20 >> (arg0 * 8)) & 0x1F;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/lowio", sceGpioSetCapturePort);

INCLUDE_ASM("nonmatchings/lowio", sceGpioEnableTimerCapture);

INCLUDE_ASM("nonmatchings/lowio", sceGpioDisableTimerCapture);

INCLUDE_ASM("nonmatchings/lowio", func_00002954);

INCLUDE_ASM("nonmatchings/lowio", func_000029D4);

INCLUDE_ASM("nonmatchings/lowio", func_00002A58);

INCLUDE_ASM("nonmatchings/lowio", func_00002A88);

INCLUDE_ASM("nonmatchings/lowio", func_00002ABC);

INCLUDE_ASM("nonmatchings/lowio", func_00002B04);

INCLUDE_ASM("nonmatchings/lowio", func_00002B30);

INCLUDE_ASM("nonmatchings/lowio", scePwmInit);

INCLUDE_ASM("nonmatchings/lowio", scePwmStart);

INCLUDE_ASM("nonmatchings/lowio", scePwmStop);

INCLUDE_ASM("nonmatchings/lowio", scePwmChangeDuty);

INCLUDE_ASM("nonmatchings/lowio", scePwmReferDuty);

INCLUDE_ASM("nonmatchings/lowio", scePwmIsLoading);

s32 func_00002DE0(void) {
    scePwmInit();
    return 0;
}

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", func_00002E00);
#else
s32 func_00002E00(void) {
    sceKernelUnregisterSysEventHandler(&D_0000BB48);
    return 0;
}
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", scePwmEnd);
#else
s32 scePwmEnd(void) {
    sceKernelUnregisterSysEventHandler(&D_0000BB48);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/lowio", scePwmSuspend);

s32 scePwmResume(void) {
    sceSysregPwmClkEnable();
    sceSysregPwmIoEnable();
    return 0;
}

INCLUDE_ASM("nonmatchings/lowio", func_00002EB8);

INCLUDE_ASM("nonmatchings/lowio", func_00002F38);

s32 sceI2cSetClock(s32 arg0, s32 arg1) {
    D_0000BD34.unk14 = arg1;
    D_0000BD34.unk10 = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/lowio", sceI2cMasterTransmit);

INCLUDE_ASM("nonmatchings/lowio", sceI2cMasterReceive);

INCLUDE_ASM("nonmatchings/lowio", sceI2cMasterTransmitReceive);

INCLUDE_ASM("nonmatchings/lowio", func_00003EA4);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", func_00003F70);
#else
s32 func_00003F70(void) {
    sceKernelUnregisterSysEventHandler(&D_0000BB88);
    sceKernelReleaseIntrHandler(0xC);
    sceKernelDeleteMutex(M2C_VFIELD(&D_0000BD34, s32, 4));
    sceKernelDeleteEventFlag(M2C_VFIELD(&D_0000BD34, s32, 0));
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/lowio", sceI2cInit);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", sceI2cEnd);
#else
s32 sceI2cEnd(void) {
    sceKernelUnregisterSysEventHandler(&D_0000BB88);
    sceKernelReleaseIntrHandler(0xC);
    sceKernelDeleteMutex(M2C_VFIELD(&D_0000BD34, s32, 4));
    sceKernelDeleteEventFlag(M2C_VFIELD(&D_0000BD34, s32, 0));
    return 0;
}
#endif

s32 sceI2cSuspend(void) {
    sceSysregIicIoDisable();
    sceSysregIicClkDisable();
    return 0;
}

INCLUDE_ASM("nonmatchings/lowio", sceI2cResume);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", sceI2cSetDebugHandlers);
#else
s32 sceI2cSetDebugHandlers(s32 arg0) {
    D_0000BD40 = arg0;
    return 0;
}
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", sceI2cSetPollingMode);
#else
s32 sceI2cSetPollingMode(s32 arg0) {
    D_0000BD3C = arg0;
    return 0;
}
#endif

s32 sceI2cReset(void) {
    *(s32 *)0xBE200020 = 1;
    sceKernelDelayThread(0x64U);
    *(s32 *)0xBE200020 = 0;
    return 0;
}

INCLUDE_ASM("nonmatchings/lowio", func_00004194);

INCLUDE_ASM("nonmatchings/lowio", func_000041EC);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusQuerySuspend);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusEnableIntr);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusDisableIntr);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusQueryIntr);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusAcquireIntr);

INCLUDE_ASM("nonmatchings/lowio", func_00004604);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", func_0000470C);
#else
s32 func_0000470C(void) {
    sceSysregDmacplusBusClockEnable();
    D_0000D508 = 0;
    sceKernelRegisterIntrHandler(0x15, 2, &func_00004604, 0, &D_0000B7B4);
    sceKernelEnableIntr(0x15);
    sceDmacplusLcdcInit();
    sceDmacplusAvcInit();
    sceDmacplusSc2MeInit();
    sceDmacplusMe2ScInit();
    sceDmacplusSc128Init();
    sceKernelRegisterSysEventHandler(&D_0000BBC8);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/lowio", func_00004790);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusInit);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusEnd);

s32 sceDmacplusSuspend(void) {
    sceDmacplusLcdcSuspend();
    sceDmacplusAvcSuspend();
    sceDmacplusSc2MeSuspend();
    sceDmacplusMe2ScSuspend();
    sceDmacplusSc128Suspend();
    sceSysregDmacplusBusClockDisable();
    return 0;
}

s32 sceDmacplusResume(void) {
    sceSysregDmacplusBusClockEnable();
    sceDmacplusLcdcResume();
    sceDmacplusAvcResume();
    sceDmacplusSc2MeResume();
    sceDmacplusMe2ScResume();
    sceDmacplusSc128Resume();
    return 0;
}

INCLUDE_ASM("nonmatchings/lowio", func_0000494C);

INCLUDE_ASM("nonmatchings/lowio", func_00004A10);

INCLUDE_ASM("nonmatchings/lowio", func_00004A30);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusLcdcInit);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusLcdcResume);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusLcdcSetBaseAddr);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusLcdcSetFormat);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", sceDmacplusLcdcGetFormat);
#else
s32 sceDmacplusLcdcGetFormat(s32 *arg0, s32 *arg1, s32 *arg2) {
    if (arg0 != NULL) {
        *arg0 = D_0000BD8C;
    }
    if (arg1 != NULL) {
        *arg1 = D_0000BD90;
    }
    if (arg2 != NULL) {
        *arg2 = D_0000BD94;
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusLcdcEnable);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusLcdcEnd);

s32 sceDmacplusLcdcQuerySuspend(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusLcdcSuspend);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", sceDmacplusLcdcGetBaseAddr);
#else
s32 sceDmacplusLcdcGetBaseAddr(void) {
    return D_0000BD88;
}
#endif

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusLcdcDisable);

INCLUDE_ASM("nonmatchings/lowio", func_000050A0);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusAvcDoAVCdec);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusAvcDoVME);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusAvcSync);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B76C);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B774);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B77C);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B788);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B7B4);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusAvcInit);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusAvcEnd);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", sceDmacplusAvcQuerySuspend);
#else
s32 sceDmacplusAvcQuerySuspend(void) {
    return !(D_0000D50A & 2) ? 0 : -1;
}
#endif

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusAvcSuspend);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusAvcResume);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusAvcSetDestConf);

INCLUDE_ASM("nonmatchings/lowio", func_00005A24);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", func_00005B24);
#else
s32 func_00005B24(void) {
    sceKernelSetEventFlag(D_0000CDC0, 1U);
    M2C_VFIELD(&D_0000D508, u16, 2) = (u16) (M2C_VFIELD(&D_0000D508, u16, 2) & 0x7FFD);
    return -1;
}
#endif

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusSc2MeNormal16);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusSc2MeLLI);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusSc2MeSync);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusSc2MeInit);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusSc2MeEnd);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", sceDmacplusSc2MeQuerySuspend);
#else
s32 sceDmacplusSc2MeQuerySuspend(void) {
    return !(D_0000D50A & 4) ? 0 : -1;
}
#endif

s32 sceDmacplusSc2MeSuspend(void) {
    return 0;
}

s32 sceDmacplusSc2MeResume(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lowio", func_00005F60);

INCLUDE_ASM("nonmatchings/lowio", func_00005FE0);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusMe2ScNormal16);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusMe2ScSync);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusMe2ScInit);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusMe2ScEnd);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", sceDmacplusMe2ScQuerySuspend);
#else
s32 sceDmacplusMe2ScQuerySuspend(void) {
    return !(D_0000D50A & 8) ? 0 : -1;
}
#endif

s32 sceDmacplusMe2ScSuspend(void) {
    return 0;
}

s32 sceDmacplusMe2ScResume(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusMe2ScLLI);

INCLUDE_ASM("nonmatchings/lowio", func_000063E8);

INCLUDE_ASM("nonmatchings/lowio", func_00006468);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusSc128Suspend);

INCLUDE_ASM("nonmatchings/lowio", func_00006524);

INCLUDE_ASM("nonmatchings/lowio", func_00006578);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusSc128Memcpy);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusSc128TryMemcpy);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusSc128LLI);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusSc128Init);

INCLUDE_ASM("nonmatchings/lowio", sceDmacplusSc128End);

s32 sceDmacplusSc128QuerySuspend(void) {
    return 0;
}

s32 sceDmacplusSc128Resume(void) {
    return 0;
}

INCLUDE_RODATA("nonmatchings/lowio", D_0000B80C);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B908);

INCLUDE_ASM("nonmatchings/lowio", sceLcdcInit);

INCLUDE_ASM("nonmatchings/lowio", sceLcdcResume);

INCLUDE_ASM("nonmatchings/lowio", sceLcdcCheckMode);

INCLUDE_ASM("nonmatchings/lowio", sceLcdcSetMode);

INCLUDE_ASM("nonmatchings/lowio", sceLcdcGetMode);

INCLUDE_ASM("nonmatchings/lowio", sceLcdcGetVsyncTimings);

INCLUDE_ASM("nonmatchings/lowio", sceLcdcReadHPC);

INCLUDE_ASM("nonmatchings/lowio", sceLcdcReadVPC);

s32 func_000076D4(void) {
    sceLcdcInit();
    return 0;
}

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", func_000076F4);
#else
s32 func_000076F4(void) {
    sceKernelUnregisterSysEventHandler(&D_0000BC08);
    return 0;
}
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", sceLcdcEnd);
#else
s32 sceLcdcEnd(void) {
    sceKernelUnregisterSysEventHandler(&D_0000BC08);
    return 0;
}
#endif

s32 sceLcdcSuspend(void) {
    sceSysregLcdcIoDisable();
    sceSysregLcdcClkDisable();
    return 0;
}

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", sceLcdcEnable);
#else
s32 sceLcdcEnable(void) {
    sceSysregLcdcIoEnable();
    D_0000CE4C = 1;
    return 0;
}
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", sceLcdcDisable);
#else
s32 sceLcdcDisable(void) {
    sceSysregLcdcIoDisable();
    D_0000CE4C = 0;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/lowio", sceLcdcSetHOffset);

INCLUDE_ASM("nonmatchings/lowio", sceLcdcReset);

INCLUDE_ASM("nonmatchings/lowio", sceLcdcGetLcdcClockFreq);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", sceLcdcGetCyclesPerPixel);
#else
s32 sceLcdcGetCyclesPerPixel(void) {
    return D_0000CE58;
}
#endif

INCLUDE_ASM("nonmatchings/lowio", sceLcdcGetPixelClockFreq);

INCLUDE_ASM("nonmatchings/lowio", sceLcdcGetHsyncFreq);

INCLUDE_ASM("nonmatchings/lowio", sceLcdcGetVsyncFreq);

INCLUDE_ASM("nonmatchings/lowio", sceLcdcReadUnderflow);

s32 func_00007990(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0x10004:
        sceLcdcResume();
        break;
    case 0x4004:
        sceSysregLcdcIoDisable();
        sceSysregLcdcClkDisable();
        break;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/lowio", sceNandInit);

INCLUDE_ASM("nonmatchings/lowio", func_00007B10);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B914);

INCLUDE_ASM("nonmatchings/lowio", func_00007B20);

INCLUDE_ASM("nonmatchings/lowio", sceNandSetWriteProtect);

INCLUDE_ASM("nonmatchings/lowio", sceNandLock);

INCLUDE_ASM("nonmatchings/lowio", sceNandUnlock);

INCLUDE_ASM("nonmatchings/lowio", sceNandReset);

INCLUDE_ASM("nonmatchings/lowio", sceNandReadId);

INCLUDE_ASM("nonmatchings/lowio", sceNandReadAccess);

INCLUDE_ASM("nonmatchings/lowio", sceNandWriteAccess);

INCLUDE_ASM("nonmatchings/lowio", sceNandEraseBlock);

INCLUDE_ASM("nonmatchings/lowio", sceNandReadExtraOnly);

s32 func_0000869C(void) {
    sceNandInit();
    return 0;
}

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", func_000086BC);
#else
s32 func_000086BC(void) {
    sceNandLock(0);
    sceKernelUnregisterSysEventHandler(&D_0000BC48);
    sceKernelDeleteSema(M2C_FIELD(&D_0000CE94, s32 *, 0));
    sceKernelDeleteEventFlag(M2C_FIELD(&D_0000CE94, s32 *, 4));
    sceKernelReleaseIntrHandler(0x14);
    return 0;
}
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", sceNandEnd);
#else
s32 sceNandEnd(void) {
    sceNandLock(0);
    sceKernelUnregisterSysEventHandler(&D_0000BC48);
    sceKernelDeleteSema(M2C_FIELD(&D_0000CE94, s32 *, 0));
    sceKernelDeleteEventFlag(M2C_FIELD(&D_0000CE94, s32 *, 4));
    sceKernelReleaseIntrHandler(0x14);
    return 0;
}
#endif

s32 sceNandSuspend(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lowio", sceNandResume);

INCLUDE_ASM("nonmatchings/lowio", sceNandReadStatus);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", sceNandSetScramble);
#else
s32 sceNandSetScramble(s32 arg0) {
    D_0000CECC = arg0;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/lowio", sceNandReadPages);

INCLUDE_ASM("nonmatchings/lowio", sceNandWritePages);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", sceNandReadPagesRawExtra);
#else
void sceNandReadPagesRawExtra(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    sceNandReadAccess(arg0, arg1, arg2, arg3, 0x20);
}
#endif

INCLUDE_ASM("nonmatchings/lowio", sceNandWritePagesRawExtra);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", sceNandReadPagesRawAll);
#else
void sceNandReadPagesRawAll(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    sceNandReadAccess(arg0, arg1, arg2, arg3, 0x31);
}
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", sceNandWritePagesRawAll);
#else
void sceNandWritePagesRawAll(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    sceNandWriteAccess(arg0, arg1, arg2, arg3, 0x31);
}
#endif

INCLUDE_ASM("nonmatchings/lowio", func_0000891C);

INCLUDE_ASM("nonmatchings/lowio", func_000089C8);

INCLUDE_ASM("nonmatchings/lowio", func_00008BEC);

INCLUDE_ASM("nonmatchings/lowio", func_00008E54);

INCLUDE_ASM("nonmatchings/lowio", sceNandDetectChip);

INCLUDE_ASM("nonmatchings/lowio", sceNandWriteBlockWithVerify);

INCLUDE_ASM("nonmatchings/lowio", sceNandReadBlockWithRetry);

INCLUDE_ASM("nonmatchings/lowio", sceNandVerifyBlockWithRetry);

INCLUDE_ASM("nonmatchings/lowio", sceNandEraseBlockWithRetry);

INCLUDE_ASM("nonmatchings/lowio", sceNandIsBadBlock);

INCLUDE_ASM("nonmatchings/lowio", sceNandDoMarkAsBadBlock);

INCLUDE_ASM("nonmatchings/lowio", sceNandDumpWearBBMSize);

INCLUDE_ASM("nonmatchings/lowio", sceNandCountChipMakersBBM);

INCLUDE_ASM("nonmatchings/lowio", sceNandDetectChipMakersBBM);

INCLUDE_ASM("nonmatchings/lowio", sceNandEraseAllBlock);

INCLUDE_ASM("nonmatchings/lowio", sceNandTestBlock);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", sceNandGetPageSize);
#else
s32 sceNandGetPageSize(void) {
    return D_0000D4F8;
}
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", sceNandGetPagesPerBlock);
#else
s32 sceNandGetPagesPerBlock(void) {
    return D_0000D4FC;
}
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", sceNandGetTotalBlocks);
#else
s32 sceNandGetTotalBlocks(void) {
    return D_0000D500;
}
#endif

INCLUDE_ASM("nonmatchings/lowio", sceNandWriteBlock);

INCLUDE_ASM("nonmatchings/lowio", sceNandCalcEcc);

INCLUDE_ASM("nonmatchings/lowio", sceNandVerifyEcc);

INCLUDE_ASM("nonmatchings/lowio", sceNandCollectEcc);

INCLUDE_ASM("nonmatchings/lowio", func_00009CD8);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lowio", func_00009F7C);
#else
s32 func_00009F7C(void) {
    sceDdrInit();
    sceKernelDmaRegisterDdrFlush((s32) &sceDdrFlush);
    return 0;
}
#endif

s32 func_00009FA8(void) {
    sceKernelDmaRegisterDdrFlush(0);
    sceDdrEnd();
    return 0;
}

s32 sceDdrInit(void) {
    return 0;
}

s32 sceDdrEnd(void) {
    return 0;
}

s32 sceDdrSuspend(void) {
    return 0;
}

s32 sceDdrResume(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lowio", sceDdrFlush);

INCLUDE_ASM("nonmatchings/lowio", sceDdrSetPowerDownCounter);

INCLUDE_ASM("nonmatchings/lowio", sceDdrGetPowerDownCounter);

INCLUDE_ASM("nonmatchings/lowio", sceDdrReadDllDelay);

INCLUDE_ASM("nonmatchings/lowio", sceDdrExecSeqCmd);

INCLUDE_ASM("nonmatchings/lowio", sceDdrSetup);

INCLUDE_ASM("nonmatchings/lowio", sceDdr_driver_5B5831E5);

INCLUDE_ASM("nonmatchings/lowio", sceDdr_driver_F23B7983);

INCLUDE_ASM("nonmatchings/lowio", sceDdrResetDevice);

INCLUDE_ASM("nonmatchings/lowio", sceDdr_driver_888129E8);

INCLUDE_ASM("nonmatchings/lowio", func_0000A220);

INCLUDE_ASM("nonmatchings/lowio", sceDdr_driver_7251F5AB);

INCLUDE_ASM("nonmatchings/lowio", func_0000A310);

INCLUDE_ASM("nonmatchings/lowio", sceDdrWriteMaxAllocate);

INCLUDE_ASM("nonmatchings/lowio", sceDdr_driver_6955346C);

INCLUDE_ASM("nonmatchings/lowio", func_0000A400);

INCLUDE_ASM("nonmatchings/lowio", sceDdrChangePllClock);

INCLUDE_RODATA("nonmatchings/lowio", D_0000B94C);

INCLUDE_RODATA("nonmatchings/lowio", D_0000BA18);

INCLUDE_RODATA("nonmatchings/lowio", D_0000BA80);
