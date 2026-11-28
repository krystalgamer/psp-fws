/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -frename-registers -mext */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "power_decls.h"

/* The request/resume-count readers access the switch state as volatile (base
   address kept in a register); its initialisation stores plainly. */
#define g_PowerSwitchV (*(volatile ScePowerSwitch *)&g_PowerSwitch)

#if FW_VERSION >= 102
INCLUDE_ASM("nonmatchings/power", scePowerInit);
#else
s32 scePowerInit(void) {
    u8 buf[0x200];

    _scePowerSwInit();
    _scePowerBatteryInit();
    if (sceIdStorageLookup(4, 0, buf, sizeof(buf)) < 0) {
        g_Power.isWlanSuppressChargingEnabled = 0;
        _scePowerBatterySetParam(0xD8, 0xD8);
    } else {
        g_Power.isWlanSuppressChargingEnabled = buf[0x19];
        _scePowerBatterySetParam(*(u16 *)&buf[0x1A], *(u16 *)&buf[0x1C]);
    }
    _scePowerFreqInit();
    _scePowerIdleInit();
    sceSysconSetAcSupplyCallback(_scePowerAcSupplyCallback, 0);
    sceSysconSetLowBatteryCallback(_scePowerLowBatteryCallback, 0);
    sceKernelRegisterSysEventHandler(&g_PowerSysEv);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", func_00000174);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/power", func_00000464);
#endif

#if FW_VERSION < 150
s32 _scePowerSysEventHandler(s32 eventId, char *eventName, void *param, s32 *result) {
    switch (eventId) {
    case 0x402:
        if (_scePowerBatteryIsBusy() != 0) {
            return 0x80000021;
        }
        break;
    case 0x400:
        _scePowerBatterySuspend();
        break;
    case 0x100000:
        _scePowerBatteryResume();
        break;
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/power", _scePowerSysEventHandler);
#endif

INCLUDE_ASM("nonmatchings/power", scePowerRegisterCallback);

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/power", scePowerUnregisterCallback);

INCLUDE_ASM("nonmatchings/power", scePowerSetCallbackMode);

INCLUDE_ASM("nonmatchings/power", scePowerGetCallbackMode);
#else
INCLUDE_ASM("nonmatchings/power", scePowerUnregitserCallback);
#endif

INCLUDE_ASM("nonmatchings/power", _scePowerNotifyCallback);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", func_00000994);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/power", func_00000A3C);
#endif

#if FW_VERSION >= 102
INCLUDE_ASM("nonmatchings/power", scePowerGetBacklightMaximum);
#endif

#if FW_VERSION < 150
s32 module_start(void) {
    s32 i;
    ScePowerCallbackCB *cb;

    memset(&g_Power, 0, sizeof(ScePower));
    cb = g_Power.powerCallbackCBs;
    for (i = 0; i < 32; i++) {
        cb->cbid = -1;
        cb++;
    }
    scePowerInit();
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/power", module_start);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/power", module_reboot_before);
#else
s32 module_reboot_before(void) {
    scePowerSetClockFrequency(0xDE, 0xDE, 0x6F);
    sceKernelUnregisterSysEventHandler(&g_PowerSysEv);
    sceSysconSetAcSupplyCallback(0, 0);
    sceSysconSetLowBatteryCallback(0, 0);
    _scePowerIdleEnd();
    _scePowerFreqEnd();
    _scePowerBatteryEnd();
    func_0000250C();
    return 0;
}
#endif

#if FW_VERSION < 282
s32 scePowerEnd(void) {
    sceKernelUnregisterSysEventHandler(&g_PowerSysEv);
    sceSysconSetAcSupplyCallback(0, 0);
    sceSysconSetLowBatteryCallback(0, 0);
    _scePowerIdleEnd();
    _scePowerFreqEnd();
    _scePowerBatteryEnd();
    func_0000250C();
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 scePowerSetExclusiveWlan(s8 arg0) {
    D_00005889 = arg0;
    return 0;
}

s32 scePowerCheckWlanCondition(s32 arg0) {
    s32 var_a0;

    var_a0 = 0;
    if ((((u8) D_00005889 == 1) & (arg0 >= 0xDF)) || (((u8) D_00005889 == 2) & (arg0 >= 0x10B))) {
        var_a0 = 0x802B0300;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 282
s32 scePowerEnd(void) {
    sceKernelUnregisterSysEventHandler(&D_00005F00);
    sceSysconSetAcSupplyCallback(0, 0);
    sceSysconSetLowBatteryCallback(0, 0);
    func_00002E48();
    func_00003A98();
    func_00004BF8();
    func_0000250C();
    return 0;
}

s32 scePowerSetExclusiveWlan(s8 arg0) {
    D_0000614D = arg0;
    return 0;
}

s32 scePowerCheckWlanCondition(s32 arg0) {
    s32 var_a0;

    var_a0 = 0;
    if ((((u8) D_0000614D == 1) & (arg0 >= 0xDF)) || (((u8) D_0000614D == 2) & (arg0 >= 0x10B))) {
        var_a0 = 0x802B0300;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
s32 scePowerWlanActivate(void) {
    g_Power.wlanActivity = 1;
    if (g_Power.isWlanSuppressChargingEnabled != 0) {
        scePowerBatteryForbidCharging();
    }
    return 0;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/power", scePowerWlanActivate);
#endif

#if FW_VERSION == 100
s32 scePowerWlanActivate(void) {
    if (g_Power.isWlanSuppressChargingEnabled == 0) {

    } else {
        scePowerBatteryForbidCharging();
    }
    return 0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
s32 scePowerWlanDeactivate(void) {
    g_Power.wlanActivity = 0;
    if (g_Power.isWlanSuppressChargingEnabled != 0) {
        scePowerBatteryPermitCharging();
    }
    return 0;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/power", scePowerWlanDeactivate);
#endif

#if FW_VERSION == 100
s32 scePowerWlanDeactivate(void) {
    if (g_Power.isWlanSuppressChargingEnabled == 0) {

    } else {
        scePowerBatteryPermitCharging();
    }
    return 0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
u8 scePowerGetWlanActivity(void) {
    return g_Power.wlanActivity;
}
#endif

#if FW_VERSION == 103
u8 scePowerGetLedOffTiming(void) {
    return g_Power.ledOffTiming;
}

INCLUDE_ASM("nonmatchings/power", func_00000590);

INCLUDE_ASM("nonmatchings/power", func_000005D4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
u8 scePowerGetWatchDog(void) {
    return D_00004FC6;
}

u8 scePowerGetWlanActivity(void) {
    return D_00004FC5;
}

u8 scePowerGetLedOffTiming(void) {
    return D_00004FC9;
}
#endif

#if FW_VERSION >= 282
u8 scePowerGetWatchDog(void) {
    return D_0000614A;
}

u8 scePowerGetWlanActivity(void) {
    return D_00006149;
}

u8 scePowerGetLedOffTiming(void) {
    return D_0000614E;
}
#endif

#if FW_VERSION < 103
void _scePowerAcSupplyCallback(s32 enable, void *argp) {
    if (enable != 0) {
        _scePowerNotifyCallback(0, 0x1000, 0);
    } else {
        _scePowerNotifyCallback(0x1000, 0, 0);
    }
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/power", _scePowerAcSupplyCallback);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/power", D_00005864);

INCLUDE_RODATA("nonmatchings/power", D_00005868);

INCLUDE_RODATA("nonmatchings/power", D_0000587C);

INCLUDE_RODATA("nonmatchings/power", D_00005894);

INCLUDE_RODATA("nonmatchings/power", D_000058B0);

INCLUDE_RODATA("nonmatchings/power", D_000058D0);

INCLUDE_RODATA("nonmatchings/power", D_000058E8);

INCLUDE_RODATA("nonmatchings/power", D_00005900);

INCLUDE_RODATA("nonmatchings/power", D_00005914);

INCLUDE_RODATA("nonmatchings/power", D_00005928);

INCLUDE_RODATA("nonmatchings/power", D_0000593C);

INCLUDE_RODATA("nonmatchings/power", D_00005954);

INCLUDE_RODATA("nonmatchings/power", D_00005968);

INCLUDE_RODATA("nonmatchings/power", D_0000597C);

INCLUDE_RODATA("nonmatchings/power", D_00005990);

INCLUDE_RODATA("nonmatchings/power", D_000059A8);

INCLUDE_RODATA("nonmatchings/power", D_000059BC);

INCLUDE_RODATA("nonmatchings/power", D_000059D4);

INCLUDE_RODATA("nonmatchings/power", D_000059E8);

INCLUDE_RODATA("nonmatchings/power", D_00005A08);

INCLUDE_RODATA("nonmatchings/power", D_00005A14);

INCLUDE_RODATA("nonmatchings/power", D_00005C04);

INCLUDE_RODATA("nonmatchings/power", D_00005C14);

INCLUDE_RODATA("nonmatchings/power", D_00005F5C);

INCLUDE_RODATA("nonmatchings/power", D_00005F60);

INCLUDE_RODATA("nonmatchings/power", D_00005F78);

INCLUDE_RODATA("nonmatchings/power", D_00005F84);

INCLUDE_RODATA("nonmatchings/power", D_00005F94);

INCLUDE_RODATA("nonmatchings/power", D_00005F98);

INCLUDE_RODATA("nonmatchings/power", D_00006004);

INCLUDE_RODATA("nonmatchings/power", D_00006010);

INCLUDE_RODATA("nonmatchings/power", D_00006014);

INCLUDE_RODATA("nonmatchings/power", D_00006024);

INCLUDE_RODATA("nonmatchings/power", D_00006034);

INCLUDE_RODATA("nonmatchings/power", D_00006038);

INCLUDE_RODATA("nonmatchings/power", D_0000603C);

INCLUDE_RODATA("nonmatchings/power", D_00006040);

INCLUDE_RODATA("nonmatchings/power", D_00006054);

INCLUDE_RODATA("nonmatchings/power", D_00006060);

INCLUDE_RODATA("nonmatchings/power", D_000060EC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", scePowerVolatileMemLock);

INCLUDE_ASM("nonmatchings/power", scePowerVolatileMemTryLock);
#endif

#if FW_VERSION < 103
void _scePowerLowBatteryCallback(s32 enable, void *argp) {
    if (enable != 0) {
        _scePowerNotifyCallback(0, 0x100, 0);
    } else {
        _scePowerNotifyCallback(0x100, 0, 0);
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", scePowerWaitRequestCompletion);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/power", _scePowerOffThread);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", func_00000C38);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", func_00000D20);
#endif

INCLUDE_RODATA("nonmatchings/power", D_00005D60);

#if FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/power", g_PowerHandler);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/power", D_00004CF0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", func_00000F08);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/power", func_00000CF4);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/power", _scePowerSuspendOperation);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/power", func_00000E18);

INCLUDE_ASM("nonmatchings/power", scePowerVolatileMemLock);

INCLUDE_ASM("nonmatchings/power", scePowerVolatileMemTryLock);

INCLUDE_ASM("nonmatchings/power", scePowerVolatileMemUnlock);

void scePower_driver_D6D016EF(s32 arg0) {
    func_000012B4(arg0, 0);
}

INCLUDE_ASM("nonmatchings/power", func_000012B4);

INCLUDE_ASM("nonmatchings/power", scePowerWaitRequestCompletion);

INCLUDE_ASM("nonmatchings/power", func_0000147C);

INCLUDE_ASM("nonmatchings/power", func_00001700);

INCLUDE_ASM("nonmatchings/power", func_00001754);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/power", func_00002464);

INCLUDE_ASM("nonmatchings/power", func_000025D8);
#else
s32 _scePowerOffCommon(s32 arg0) {
    s32 i;

    sceGpioPortClear(0x2800001);
    for (i = 0; i < 6; i++) {
        if (i != 2 && i != 3) {
            sceSysregUartIoDisable(i);
        }
    }
    for (i = 0; i < 6; i++) {
        if (i != 0) {
            sceSysregSpiIoDisable(i);
        }
    }
    for (i = 0; i < 32; i++) {
        if (i == 3 || i == 4) {
            continue;
        }
        if (i != 7) {
            sceSysregGpioIoDisable(i);
        }
    }
    if (arg0 != 0) {
        sceSysregGpioIoDisable(7);
    }
    return 0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
s32 _scePowerSwInit(void) {
    g_PowerSwitch.mode = 2;
    g_PowerSwitch.wakeupCondition = 8;
    g_PowerSwitch.eventId = 0;
    g_PowerSwitch.workerThreadId = 0;
    g_PowerSwitch.powerLockForUserShouldForceWait = 0;
    g_PowerSwitch.numPowerLocksUser = 0;
    g_PowerSwitch.numPowerLocksKernel = 0;
    g_PowerSwitch.curHardwarePowerSwitchRequest = 0;
    g_PowerSwitch.curSoftwarePowerSwitchRequest = 0;
    g_PowerSwitch.isRebootPowerLockExist = 0;
    g_PowerSwitch.resumeCount = 0;
    g_PowerSwitch.eventId = sceKernelCreateEventFlag("ScePowerSw", 0x201, 0x50000, NULL);
    g_PowerSwitch.workerThreadId = sceKernelCreateThread("ScePowerMain", _scePowerOffThread, 4, 0x800, 1, NULL);
    sceKernelStartThread(g_PowerSwitch.workerThreadId, 0, NULL);
    sceSysconSetPowerSwitchCallback(_scePowerPowerSwCallback, NULL);
    sceSysconSetHoldSwitchCallback(_scePowerHoldSwCallback, NULL);
    _scePowerLock(0, 0);
    sceKernelRegisterPowerHandlers(&g_PowerHandler);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", _scePowerSwInit);
#endif

#if FW_VERSION == 100
s32 _scePowerSwInit(void) {
    g_PowerSwitch.mode = 2;
    g_PowerSwitch.wakeupCondition = 8;
    g_PowerSwitch.eventId = 0;
    g_PowerSwitch.workerThreadId = 0;
    g_PowerSwitch.powerLockForUserShouldForceWait = 0;
    g_PowerSwitch.numPowerLocksUser = 0;
    g_PowerSwitch.numPowerLocksKernel = 0;
    g_PowerSwitch.curHardwarePowerSwitchRequest = 0;
    g_PowerSwitch.curSoftwarePowerSwitchRequest = 0;
    g_PowerSwitch.resumeCount = 0;
    g_PowerSwitch.eventId = sceKernelCreateEventFlag("ScePowerSw", 0x201, 0x50000, NULL);
    g_PowerSwitch.workerThreadId = sceKernelCreateThread("ScePowerMain", _scePowerOffThread, 4, 0x800, 1, NULL);
    sceKernelStartThread(g_PowerSwitch.workerThreadId, 0, NULL);
    sceSysconSetPowerSwitchCallback(_scePowerPowerSwCallback, NULL);
    sceSysconSetHoldSwitchCallback(_scePowerHoldSwCallback, NULL);
    sceKernelRegisterPowerHandlers(&g_PowerHandler);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/power", func_0000250C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_0000250C(void) {
    sceKernelSetEventFlag(g_PowerSwitch.eventId, 0x80000000U);
    sceKernelWaitThreadEnd(g_PowerSwitch.workerThreadId, NULL);
    sceKernelRegisterPowerHandlers(0);
    sceSysconSetPowerSwitchCallback(0, 0);
    sceSysconSetHoldSwitchCallback(0, 0);
    sceKernelDeleteSema(g_PowerSwitch.volatileMemorySemaId);
    sceKernelDeleteEventFlag(g_PowerSwitch.eventId);
    sceKernelSetDdrMemoryProtection(sceKernelGetMEeDramSaveAddr(), 0x200000, 0xF);
    sceKernelSetDdrMemoryProtection(sceKernelGetAWeDramSaveAddr(), 0x200000, 0xF);
    return 0;
}
#endif

#if FW_VERSION < 150
s32 func_0000250C(void) {
    sceKernelSetEventFlag(g_PowerSwitch.eventId, 0x80000000U);
    sceKernelWaitThreadEnd(g_PowerSwitch.workerThreadId, NULL);
    sceKernelRegisterPowerHandlers(0);
    sceSysconSetPowerSwitchCallback(0, 0);
    sceSysconSetHoldSwitchCallback(0, 0);
    sceKernelDeleteEventFlag(g_PowerSwitch.eventId);
    return 0;
}
#endif

#if FW_VERSION < 282
s32 scePowerSetPowerSwMode(s32 arg0) {
    g_PowerSwitch.mode = arg0 & 3;
    return 0;
}

s32 scePowerGetPowerSwMode(void) {
    return g_PowerSwitch.mode;
}
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/power", scePowerRebootStart);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", scePowerVolatileMemUnlock);
#endif

#if FW_VERSION >= 103 && FW_VERSION < 282
s32 scePowerRebootStart(void) {
    s32 temp_s1;
    u32 temp_s0;

    temp_s0 = shiftK1();
    _scePowerLock(0, 1);
    setK1(temp_s0);
    g_PowerSwitch.isRebootPowerLockExist = 1;
    temp_s1 = sceKernelCpuSuspendIntr();
    sceKernelClearEventFlag(g_PowerSwitch.eventId, 0xFFFEFFFFU);
    sceKernelSetEventFlag(g_PowerSwitch.eventId, 0x40000U);
    sceKernelCpuResumeIntr(temp_s1);
    return 0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 282
void scePower_D6D016EF(s32 arg0) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    _scePowerLock(arg0, 1);
    setK1(temp_s0);
}

void scePower_driver_D6D016EF(s32 arg0) {
    _scePowerLock(arg0, 0);
}
#endif

#if FW_VERSION >= 282
s32 scePowerSetPowerSwMode(s32 arg0) {
    D_0000618C = arg0 & 3;
    return 0;
}

s32 scePowerGetPowerSwMode(void) {
    return D_0000618C;
}

s32 scePowerRebootStart(void) {
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
#endif

#if FW_VERSION == 100
s32 scePower_CA3D34C1(s32 lockType) {
    s32 ret;
    u32 oldK1 = shiftK1();

    ret = _scePowerLock(lockType, 1);
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 282
s32 scePower_CA3D34C1(s32 lockType) {
    s32 ret;
    u32 oldK1;
    s32 unlocked;

    ret = 0x80000107;
    if (lockType != 0) {
        goto end;
    }
    oldK1 = shiftK1Noreorder();
    unlocked = _scePowerUnlock(lockType, 1);
    setK1(oldK1);
    ret = unlocked;
end:
    return ret;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/power", scePower_CA3D34C1);
#endif

#if FW_VERSION == 100
void scePower_driver_CA3D34C1(s32 arg0) {
    _scePowerLock(arg0, 0);
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 282
void scePower_driver_CA3D34C1(s32 arg0) {
    _scePowerUnlock(arg0, 0);
}
#endif

#if FW_VERSION == 100
s32 scePowerUnlockForUser(s32 lockType) {
    s32 ret;
    u32 oldK1 = shiftK1();

    ret = _scePowerUnlock(lockType, 1);
    setK1(oldK1);
    return ret;
}

s32 scePowerUnlockForKernel(s32 lockType) {
    return _scePowerUnlock(lockType, 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 scePowerIsRequest(void) {
    return (g_PowerSwitchV.curHardwarePowerSwitchRequest | g_PowerSwitchV.curSoftwarePowerSwitchRequest) != 0;
}
#endif

#if FW_VERSION < 201
s32 scePowerIsRequest(void) {
    return g_PowerSwitchV.curHardwarePowerSwitchRequest;
}
#endif

#if FW_VERSION < 282
s32 scePowerCancelRequest(void) {
    s32 request;
    s32 intr;

    intr = sceKernelCpuSuspendIntr();
    request = g_PowerSwitchV.curHardwarePowerSwitchRequest;
    g_PowerSwitchV.curHardwarePowerSwitchRequest = 0;
    sceKernelCpuResumeIntr(intr);
    return request;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", scePowerRequestStandby);
#endif

#if FW_VERSION < 201
s32 scePowerRequestStandby(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelSetEventFlag(g_PowerSwitch.eventId, 0x10U);
    setK1(temp_s0);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", scePowerRequestSuspend);
#endif

#if FW_VERSION < 201
s32 scePowerRequestSuspend(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelSetEventFlag(g_PowerSwitch.eventId, 0x20U);
    setK1(temp_s0);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", scePowerRequestSuspendTouchAndGo);
#endif

#if FW_VERSION < 201
s32 scePowerRequestSuspendTouchAndGo(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelSetEventFlag(g_PowerSwitch.eventId, 0x40U);
    setK1(temp_s0);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", scePowerRequestColdReset);
#endif

#if FW_VERSION < 282
s32 scePowerGetResumeCount(void) {
    return g_PowerSwitchV.resumeCount;
}

s32 scePowerSetWakeupCondition(s32 arg0) {
    g_PowerSwitch.wakeupCondition = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", _scePowerLock);

INCLUDE_ASM("nonmatchings/power", _scePowerUnlock);
#endif

#if FW_VERSION == 100
s32 _scePowerLock(s32 lockType, s32 isUserLock) {
    s32 intr;
    u32 forceWait;

    intr = sceKernelCpuSuspendIntr();
    forceWait = g_PowerSwitch.powerLockForUserShouldForceWait;
    if (forceWait == 0 && g_PowerSwitch.numPowerLocksUser == 0 && g_PowerSwitch.numPowerLocksKernel == 0) {
        sceKernelClearEventFlag(g_PowerSwitch.eventId, ~0x10000);
    }
    if (isUserLock) {
        g_PowerSwitch.numPowerLocksUser++;
        sceKernelCpuResumeIntr(intr);
        if (forceWait != 0) {
            return sceKernelWaitEventFlag(g_PowerSwitch.eventId, 0x40000, 1, NULL, NULL);
        }
        return 0;
    }
    g_PowerSwitch.numPowerLocksKernel++;
    sceKernelCpuResumeIntr(intr);
    return 0;
}

s32 _scePowerUnlock(s32 lockType, s32 isUserLock) {
    s32 intr;
    s32 count;

    intr = sceKernelCpuSuspendIntr();
    if (isUserLock) {
        count = g_PowerSwitch.numPowerLocksUser;
        if (count > 0) {
            g_PowerSwitch.numPowerLocksUser = --count;
        }
    } else {
        count = g_PowerSwitch.numPowerLocksKernel;
        if (count > 0) {
            g_PowerSwitch.numPowerLocksKernel = --count;
        }
    }
    if (g_PowerSwitch.powerLockForUserShouldForceWait == 0 && g_PowerSwitch.numPowerLocksUser == 0 && g_PowerSwitch.numPowerLocksKernel == 0) {
        sceKernelSetEventFlag(g_PowerSwitch.eventId, 0x10000);
    }
    sceKernelCpuResumeIntr(intr);
    return count;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", _scePowerPowerSwCallback);
#endif

#if FW_VERSION < 201
void _scePowerPowerSwCallback(s32 arg0) {
    s32 var_a0;
    s32 var_a1;

    if (arg0 != 0) {
        sceKernelSetEventFlag(g_PowerSwitch.eventId, 1U);
        sceKernelClearEventFlag(g_PowerSwitch.eventId, -3U);
        var_a0 = 0;
        var_a1 = 0x80000000;
    } else {
        sceKernelSetEventFlag(g_PowerSwitch.eventId, 2U);
        sceKernelClearEventFlag(g_PowerSwitch.eventId, -2U);
        var_a0 = 0x80000000;
        var_a1 = 0;
    }
    _scePowerNotifyCallback(var_a0, var_a1, 0);
}
#endif

#if FW_VERSION >= 282
void scePower_driver_CA3D34C1(s32 arg0) {
    func_00002880(arg0, 0);
}

s32 scePowerIsRequest(void) {
    return (D_00006180.unk28 | D_00006180.unk2C) != 0;
}

s32 scePowerCancelRequest(void) {
    s32 temp_s0;
    s32 temp_v0;

    temp_v0 = sceKernelCpuSuspendIntr();
    temp_s0 = D_00006180.unk28;
    D_00006180.unk28 = 0;
    sceKernelCpuResumeIntr(temp_v0);
    return temp_s0;
}

s32 scePowerRequestStandby(void) {
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

s32 scePowerRequestSuspendTouchAndGo(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelSetEventFlag(D_00006180.unk0, 0x40U);
    setK1(temp_s0);
    return 0;
}

INCLUDE_ASM("nonmatchings/power", scePowerRequestColdReset);

s32 scePowerGetResumeCount(void) {
    return D_00006180.unk3C;
}

s32 scePowerSetWakeupCondition(s32 arg0) {
    D_000061B8 = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/power", func_00002880);

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
    _scePowerNotifyCallback(var_a0, var_a1, 0);
}
#endif

void _scePowerHoldSwCallback(s32 enable, void *argp) {
    if (enable != 0) {
        _scePowerNotifyCallback(0, 0x40000000, 0);
    } else {
        _scePowerNotifyCallback(0x40000000, 0, 0);
    }
}

#if FW_VERSION < 152
s32 func_000016D8(u16 val) {
    u8 param[8];
    s32 ret;

    ret = sceSysconReceiveSetParam(param);
    if (ret < 0) {
        return ret;
    }
    param[0] = val;
    param[1] = val >> 8;
    ret = sceSysconSendSetParam(param);
    if (ret >= 0) {
        return 0;
    }
    return ret;
}
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/power", _scePowerResumePoint);
#endif

#if FW_VERSION < 282
s32 scePowerTick(s32 slots) {
    s32 i;

    if (slots == 0) {
        slots = -1;
    }
    for (i = 0; i < 8; i++) {
        if ((slots >> i) & 1) {
            if (g_PowerIdle.idleTimerCb[i].isResetted == 0) {
                g_PowerIdle.idleTimerCb[i].baseTime = g_PowerIdle.curSystemTime;
                g_PowerIdle.idleTimerCb[i].isResetted = 1;
            }
        }
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/power", scePowerTick);
#endif

#if FW_VERSION < 282
s32 scePowerSetIdleCallback(u32 slot, u32 attr, u32 dueTime, s32 (*callback)(s32, s32, void *), void *arg) {
    s32 intr;
    u32 now;

    if (slot >= 8) {
        return 0x80000102;
    }
    intr = sceKernelCpuSuspendIntr();
    if (callback != NULL && g_PowerIdle.idleTimerCb[slot].callback != NULL) {
        sceKernelCpuResumeIntr(intr);
        return 0x80000020;
    }
    g_PowerIdle.idleTimerCb[slot].attr = attr;
    now = sceKernelGetSystemTimeLow();
    g_PowerIdle.idleTimerCb[slot].isDueTimeReached = -1;
    g_PowerIdle.idleTimerCb[slot].baseTime = now;
    g_PowerIdle.idleTimerCb[slot].dueTime = dueTime;
    g_PowerIdle.idleTimerCb[slot].callback = callback;
    g_PowerIdle.idleTimerCb[slot].gp = (u32)&GetGp;
    g_PowerIdle.idleTimerCb[slot].callbackArg = arg;
    g_PowerIdle.idleTimerCb[slot].isResetted = 0;
    sceKernelCpuResumeIntr(intr);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/power", scePowerSetIdleCallback);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", _scePowerVblankInterrupt);
#else
INCLUDE_ASM("nonmatchings/power", func_00002C78);
#endif

#if FW_VERSION < 282
s32 _scePowerIdleInit(void) {
    memset(&g_PowerIdle, 0, 0x104);
    g_PowerIdle.curSystemTime = sceKernelGetSystemTimeLow();
    sceKernelRegisterSubIntrHandler(0x1E, 0x1A, &_scePowerVblankInterrupt, 0);
    sceKernelEnableSubIntr(0x1E, 0x1A);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/power", _scePowerIdleInit);
#endif

#if FW_VERSION < 282
s32 _scePowerIdleEnd(void) {
    sceKernelReleaseSubIntrHandler(0x1E, 0x1A);
    return 0;
}
#else
s32 func_00002E48(void) {
    sceKernelReleaseSubIntrHandler(0x1E, 0x1A);
    return 0;
}
#endif

#if FW_VERSION < 282
s32 scePowerGetIdleTimer(u32 slot) {
    if (slot >= 8) {
        return 0x80000102;
    }
    return sceKernelGetSystemTimeLow() - g_PowerIdle.idleTimerCb[slot].baseTime;
}
#else
INCLUDE_ASM("nonmatchings/power", scePowerGetIdleTimer);
#endif

#if FW_VERSION < 282
s32 scePowerIdleTimerEnable(void) {
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/power", scePowerIdleTimerEnable);
#endif

#if FW_VERSION < 282
s32 scePowerIdleTimerDisable(void) {
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/power", scePowerIdleTimerDisable);
#endif

u32 GetGp(void) {
    u32 gp;

    __asm__ __volatile__("move %0, $gp" : "=r"(gp));
    return gp;
}

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/power", _scePowerFreqInit);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", func_0000294C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/power", func_00002FA0);
#endif

#if FW_VERSION < 152
s32 scePowerSetCpuClockFrequency(s32 freq) {
    s32 intr;
    u32 oldK1;

    if (freq <= 0 || freq > g_PowerFreq.pllClockFrequencyInt) {
        return 0x800001FE;
    }
    oldK1 = shiftK1Noreorder();
    intr = sceKernelCpuSuspendIntr();
    if (freq < g_PowerFreq.scCpuClockLowerLimit) {
        freq = g_PowerFreq.scCpuClockLowerLimit;
    } else if (freq > g_PowerFreq.scCpuClockUpperLimit) {
        freq = g_PowerFreq.scCpuClockUpperLimit;
    }
    sceClkcSetCpuFrequency(freq);
    g_PowerFreq.cpuClockFrequencyInt = sceClkcGetCpuFrequency();
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/power", scePowerSetCpuClockFrequency);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 201
s32 scePowerSetBusClockFrequency(s32 freq) {
    s32 intr;
    s32 ret;
    u32 oldK1;
    s32 (**ops)(void);
    float busFreq;

    if (freq <= 0 || freq > g_PowerFreq.pllClockFrequencyInt / 2) {
        return 0x800001FE;
    }
    oldK1 = shiftK1Noreorder();
    intr = sceKernelCpuSuspendIntr();
    if (freq < g_PowerFreq.scBusClockLowerLimit) {
        freq = g_PowerFreq.scBusClockLowerLimit;
    } else if (freq > g_PowerFreq.scBusClockUpperLimit) {
        freq = g_PowerFreq.scBusClockUpperLimit;
    }
    if (freq < g_PowerFreq.pllClockFrequencyInt / 4) {
        freq = g_PowerFreq.pllClockFrequencyInt / 4;
    }
    ret = sceClkcSetBusFrequency(freq);
    busFreq = sceClkcGetBusFrequency();
    g_PowerFreq.busClockFrequencyFloat = busFreq;
    g_PowerFreq.busClockFrequencyInt = busFreq;
    scePowerSetGeEdramRefreshMode(scePowerGetGeEdramRefreshMode());
    ops = (s32 (**)(void))sceKernelSm1ReferOperations();
    if (ops != NULL) {
        ops[11]();
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/power", scePowerSetBusClockFrequency);
#endif

#if FW_VERSION == 100
s32 scePowerSetBusClockFrequency(s32 freq) {
    s32 intr;
    s32 ret;
    u32 oldK1;
    s32 (**ops)(void);

    if (freq <= 0 || freq > g_PowerFreq.pllClockFrequencyInt / 2) {
        return 0x800001FE;
    }
    oldK1 = shiftK1Noreorder();
    intr = sceKernelCpuSuspendIntr();
    if (freq < g_PowerFreq.scBusClockLowerLimit) {
        freq = g_PowerFreq.scBusClockLowerLimit;
    } else if (freq > g_PowerFreq.scBusClockUpperLimit) {
        freq = g_PowerFreq.scBusClockUpperLimit;
    }
    if (freq < g_PowerFreq.pllClockFrequencyInt / 4) {
        freq = g_PowerFreq.pllClockFrequencyInt / 4;
    }
    ret = sceClkcSetBusFrequency(freq);
    g_PowerFreq.busClockFrequencyInt = sceClkcGetBusFrequency();
    scePowerSetGeEdramRefreshMode(scePowerGetGeEdramRefreshMode());
    ops = (s32 (**)(void))sceKernelSm1ReferOperations();
    if (ops != NULL) {
        ops[11]();
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/power", D_00006244);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/power", func_000032EC);
#else
INCLUDE_ASM("nonmatchings/power", scePowerSetClockFrequency);
#endif

INCLUDE_ASM("nonmatchings/power", scePowerSetGeEdramRefreshMode);

s32 scePowerGetGeEdramRefreshMode(void) {
    return D_0000B3A4;
}

#if FW_VERSION < 282
s32 _scePowerFreqEnd(void) {
    sceKernelDeleteSema(g_PowerFreq.semaId);
    return 0;
}
#endif

#if FW_VERSION < 150
s32 _scePowerFreqSuspend(void) {
    sceClkcGetCpuGear(&g_PowerFreq.clkcCpuGearNumerator, &g_PowerFreq.clkcCpuGearDenominator);
    sceClkcGetBusGear(&g_PowerFreq.clkcBusGearNumerator, &g_PowerFreq.clkcBusGearDenominator);
    g_PowerFreq.oldGeEdramRefreshMode = g_PowerFreq.geEdramRefreshMode;
    scePowerSetGeEdramRefreshMode(0);
    return 0;
}

s32 _scePowerFreqResume(s32 step) {
    if (step == 0) {
        sceClkcSetCpuGear(g_PowerFreq.clkcCpuGearNumerator, g_PowerFreq.clkcCpuGearDenominator);
        sceClkcSetBusGear(g_PowerFreq.clkcBusGearNumerator, g_PowerFreq.clkcBusGearDenominator);
    } else if (step == 1) {
        scePowerSetGeEdramRefreshMode(g_PowerFreq.oldGeEdramRefreshMode);
    }
    return 0;
}
#endif

#if FW_VERSION >= 310
s32 func_00003A98(void) {
    sceKernelDeleteMutex(D_0000B348);
    return 0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
s32 func_00003A98(void) {
    sceKernelDeleteSema(D_0000B348);
    return 0;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/power", _scePowerFreqSuspend);

INCLUDE_ASM("nonmatchings/power", _scePowerFreqResume);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/power", scePowerGetCurrentTachyonVoltage);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 scePowerGetTachyonVoltage(s32 *arg0, s32 *arg1) {
    if (arg0 != NULL) {
        *arg0 = (s32) D_0000AABC;
    }
    if (arg1 != NULL) {
        *arg1 = (s32) D_0000AABE;
    }
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
s32 scePowerGetTachyonVoltage(s32 *arg0, s32 *arg1) {
    if (arg0 != NULL) {
        *arg0 = (s32) D_0000A1F8;
    }
    if (arg1 != NULL) {
        *arg1 = (s32) D_0000A1FA;
    }
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", scePowerSetTachyonVoltage);

INCLUDE_ASM("nonmatchings/power", scePowerGetCurrentDdrVoltage);

s32 scePowerGetDdrVoltage(s32 *arg0, s32 *arg1) {
    if (arg0 != NULL) {
        *arg0 = (s32) D_0000AAC4;
    }
    if (arg1 != NULL) {
        *arg1 = (s32) D_0000AAC6;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/power", scePowerSetDdrVoltage);

INCLUDE_ASM("nonmatchings/power", scePowerGetCurrentDdrStrength);

s32 scePowerGetDdrStrength(s32 *arg0, s32 *arg1) {
    if (arg0 != NULL) {
        *arg0 = (s32) D_0000AACC;
    }
    if (arg1 != NULL) {
        *arg1 = (s32) D_0000AACE;
    }
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 scePowerGetTachyonVoltage(s32 *arg0, s32 *arg1) {
    if (arg0 != NULL) {
        *arg0 = (s32) D_0000B380;
    }
    if (arg1 != NULL) {
        *arg1 = (s32) D_0000B382;
    }
    return 0;
}
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 250) || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/power", scePowerSetTachyonVoltage);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/power", scePowerGetCurrentDdrVoltage);

s32 scePowerGetDdrVoltage(s32 *arg0, s32 *arg1) {
    if (arg0 != NULL) {
        *arg0 = (s32) D_0000B388;
    }
    if (arg1 != NULL) {
        *arg1 = (s32) D_0000B38A;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/power", scePowerSetDdrVoltage);

INCLUDE_ASM("nonmatchings/power", scePowerGetCurrentDdrStrength);

s32 scePowerGetDdrStrength(s32 *arg0, s32 *arg1) {
    if (arg0 != NULL) {
        *arg0 = (s32) D_0000B390;
    }
    if (arg1 != NULL) {
        *arg1 = (s32) D_0000B392;
    }
    return 0;
}
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/power", scePowerSetDdrStrength);
#endif

#if FW_VERSION < 201
s32 scePowerLimitScCpuClock(s32 lower, s32 upper) {
    g_PowerFreq.scCpuClockLowerLimit = lower;
    g_PowerFreq.scCpuClockUpperLimit = upper;
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/power", scePowerLimitScCpuClock);
#endif

#if FW_VERSION < 201
s32 scePowerLimitScBusClock(s32 lower, s32 upper) {
    g_PowerFreq.scBusClockLowerLimit = lower;
    g_PowerFreq.scBusClockUpperLimit = upper;
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/power", scePowerLimitScBusClock);
#endif

#if FW_VERSION < 201
s32 scePowerLimitPllClock(s32 lower, s32 upper) {
    g_PowerFreq.pllClockLowerLimit = lower;
    g_PowerFreq.pllClockUpperLimit = upper;
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/power", scePowerLimitPllClock);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
s32 scePowerGetCpuClockFrequencyInt(void) {
    return D_00009450;
}

INCLUDE_ASM("nonmatchings/power", scePowerGetCpuClockFrequencyFloat);

s32 scePowerGetBusClockFrequencyInt(void) {
    return D_0000B35C;
}

INCLUDE_ASM("nonmatchings/power", scePowerGetBusClockFrequencyFloat);

INCLUDE_RODATA("nonmatchings/power", D_000040A0);

INCLUDE_RODATA("nonmatchings/power", D_000040A4);
#endif

#if FW_VERSION >= 350
s32 scePower_driver_F06B96D4(s32 arg0) {
    D_0000B7D4 = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 scePowerGetCpuClockFrequency(void) {
    return D_0000AF94;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
s32 scePowerGetCpuClockFrequencyInt(void) {
    return D_0000A1D0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", scePowerGetCpuClockFrequencyFloat);

s32 scePowerGetBusClockFrequencyInt(void) {
    return D_0000B35C;
}

INCLUDE_ASM("nonmatchings/power", scePowerGetBusClockFrequencyFloat);

s32 scePowerGetPllClockFrequencyInt(void) {
    return D_0000A1CC;
}

INCLUDE_ASM("nonmatchings/power", scePowerGetPllClockFrequencyFloat);

INCLUDE_ASM("nonmatchings/power", func_00003140);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/power", D_00004E08);

INCLUDE_RODATA("nonmatchings/power", D_00004E0C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", _scePowerBatteryThread);

INCLUDE_ASM("nonmatchings/power", func_00003814);
#endif

#if FW_VERSION == 100
s32 scePowerGetCpuClockFrequency(void) {
    return g_PowerFreq.cpuClockFrequencyInt;
}

s32 scePowerGetBusClockFrequency(void) {
    return D_0000B35C;
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/power", _scePowerBatteryThread);
#endif

#if FW_VERSION == 100
s32 scePowerIsBatteryCharging(void) {
    s32 ret;
    u32 oldK1 = shiftK1();

    if (g_Battery.batteryAvailabilityStatus != 2) {
        ret = 0;
    } else if (sceSysconIsAcSupplied() == 0) {
        ret = 0;
    } else {
        ret = __builtin_allegrex_ext(g_Battery.powerSupplyStatus, 7, 1);
    }
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 282
s32 scePowerGetCpuClockFrequency(void) {
    return D_0000B358;
}

INCLUDE_ASM("nonmatchings/power", scePowerGetCpuClockFrequencyFloat);

s32 scePowerGetBusClockFrequencyInt(void) {
    return D_0000B35C;
}

INCLUDE_ASM("nonmatchings/power", scePowerGetBusClockFrequencyFloat);

s32 scePowerGetPllClockFrequencyInt(void) {
    return D_0000B354;
}

INCLUDE_ASM("nonmatchings/power", scePowerGetPllClockFrequencyFloat);
#endif

#if FW_VERSION >= 300
s32 scePowerSetClockFrequency(s32 arg0, s32 arg1, s32 arg2) {
    if (D_0000B40C == 0) {

    } else {
        sceKernelDelayThread(0x03938700U);
    }
    return func_000032EC(arg0, arg1, arg2);
}

void scePower_driver_A4E93389(s32 arg0, s32 arg1, s32 arg2) {
    func_000032EC(arg0, arg1, arg2);
}

void scePower_driver_545A7F3C(s32 arg0, s32 arg1, s32 arg2) {
    func_000032EC(arg0, arg1, arg2);
}
#endif

#if FW_VERSION >= 350
void scePower_driver_EBD177D6(s32 arg0, s32 arg1, s32 arg2) {
    func_000032EC(arg0, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/power", func_00004BF8);
#endif

#if FW_VERSION == 282
s32 scePowerSetClockFrequency(s32 arg0, s32 arg1, s32 arg2) {
    return func_000032EC(arg0, arg1, arg2);
}

void scePower_driver_A4E93389(s32 arg0, s32 arg1, s32 arg2) {
    func_000032EC(arg0, arg1, arg2);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/power", func_00003DB8);

INCLUDE_ASM("nonmatchings/power", func_00003E3C);

INCLUDE_ASM("nonmatchings/power", func_00003F14);

INCLUDE_ASM("nonmatchings/power", func_00004548);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/power", scePowerBatteryForbidCharging);
#endif

#if FW_VERSION >= 103
INCLUDE_ASM("nonmatchings/power", scePowerBatteryPermitCharging);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/power", scePowerBatteryEnableUsbCharging);

INCLUDE_ASM("nonmatchings/power", scePowerBatteryDisableUsbCharging);
#endif

#if FW_VERSION >= 102
INCLUDE_ASM("nonmatchings/power", scePowerGetBatteryChargingStatus);
#endif

INCLUDE_ASM("nonmatchings/power", scePowerIsSuspendRequired);

#if FW_VERSION >= 102 && FW_VERSION < 282
s32 scePowerGetBatteryRemainCapacity(void) {
    if (g_Battery.batteryAvailabilityStatus == 0) {
        return 0x802B0100;
    }
    if (g_Battery.batteryAvailabilityStatus == 1) {
        return 0x802B0101;
    }
    return g_Battery.batteryRemainingCapacity;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/power", scePowerGetBatteryRemainCapacity);
#endif

#if FW_VERSION >= 103
INCLUDE_ASM("nonmatchings/power", scePowerGetBatteryLifeTime);
#endif

#if FW_VERSION == 100
s32 scePowerGetBatteryRemainCapacity(void) {
    if (g_Battery.batteryAvailabilityStatus != 2) {
        return 0x802B0100;
    }
    return g_Battery.batteryRemainingCapacity;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 271
s32 scePowerGetBatteryElec(s32 *elec) {
    s32 ret;
    u32 oldK1 = shiftK1();

    if (k1IsUserMode() && (s32)elec < 0) {
        ret = 0x80000023;
    } else if (g_Battery.batteryAvailabilityStatus == 0) {
        ret = 0x802B0100;
    } else if (g_Battery.batteryAvailabilityStatus == 1) {
        ret = 0x802B0101;
    } else {
        *elec = g_Battery.batteryElec;
        ret = 0;
    }
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/power", scePowerGetBatteryElec);
#endif

#if FW_VERSION == 100
s32 scePowerGetBatteryElec(s32 *elec) {
    s32 ret;
    u32 oldK1 = shiftK1();

    if (k1IsUserMode() && (s32)elec < 0) {
        ret = 0x80000023;
    } else if (g_Battery.batteryAvailabilityStatus != 2) {
        ret = 0x802B0100;
    } else {
        *elec = g_Battery.batteryElec;
        ret = 0;
    }
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION < 271
s32 scePowerGetInnerTemp(float *temp) {
    s32 ret;
    u32 oldK1 = shiftK1();

    if (k1IsUserMode() && (s32)temp < 0) {
        ret = 0x80000023;
    } else if (g_Battery.innerTempStatus != 1) {
        ret = 0x802B0010;
    } else {
        *temp = g_Battery.innerTemp;
        ret = 0;
    }
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/power", scePowerGetInnerTemp);
#endif

#if FW_VERSION == 102
s32 _scePowerBatteryInit(void) {
    char *name;
    SceUID thid;

    memset(&g_Battery, 0, sizeof(ScePowerBattery));
    name = "ScePowerBattery";
    g_Battery.innerTempStatus = -1;
    g_Battery.unk20 = -1;
    g_Battery.batteryEventFlagId = sceKernelCreateEventFlag(name, 1, 0, NULL);
    thid = sceKernelCreateThread(name, (s32)&_scePowerBatteryThread, 0x40, 0x400, 1, NULL);
    g_Battery.workerThreadId = thid;
    sceKernelStartThread(thid, 0, NULL);
    return 0;
}
#endif

#if FW_VERSION >= 103 && FW_VERSION < 271
s32 _scePowerBatteryInit(void) {
    M2C_UNK *temp_v0;
    s32 temp_v0_2;

    memset(&g_Battery, 0, 0x58);
    temp_v0 = "ScePowerBattery";
    g_Battery.innerTempStatus = -1;
    g_Battery.unk24 = -1;
    g_Battery.batteryEventFlagId = sceKernelCreateEventFlag(temp_v0, 1U, 0U, NULL);
    temp_v0_2 = sceKernelCreateThread(temp_v0, (s32) &_scePowerBatteryThread, 0x40, 0x400U, 1U, NULL);
    g_Battery.workerThreadId = temp_v0_2;
    sceKernelStartThread(temp_v0_2, 0U, NULL);
    return 0;
}
#endif

#if FW_VERSION == 271
s32 _scePowerBatteryInit(void) {
    M2C_UNK *temp_v0;
    s32 temp_v0_2;

    memset(&g_Battery, 0, 0x58);
    temp_v0 = "ScePowerBattery";
    g_Battery.innerTempStatus = -1;
    g_Battery.unk24 = -1;
    g_Battery.batteryEventFlagId = sceKernelCreateEventFlag(temp_v0, 1U, 0U, NULL);
    temp_v0_2 = sceKernelCreateThread(temp_v0, (s32) &_scePowerBatteryThread, 0x40, 0x800U, 1U, NULL);
    g_Battery.workerThreadId = temp_v0_2;
    sceKernelStartThread(temp_v0_2, 0U, NULL);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 _scePowerBatteryInit(void) {
    M2C_UNK *temp_v0;
    s32 temp_v0_2;

    memset(&g_Battery, 0, 0x50);
    temp_v0 = "ScePowerBattery";
    g_Battery.innerTempStatus = -1;
    g_Battery.batteryEventFlagId = sceKernelCreateEventFlag(temp_v0, 1U, 0U, NULL);
    temp_v0_2 = sceKernelCreateThread(temp_v0, (s32) &_scePowerBatteryThread, 0x40, 0x400U, 1U, NULL);
    g_Battery.workerThreadId = temp_v0_2;
    sceKernelStartThread(temp_v0_2, 0U, NULL);
    return 0;
}
#endif

#if FW_VERSION < 282
s32 _scePowerBatteryEnd(void) {
    sceKernelSetEventFlag(g_Battery.batteryEventFlagId, 0x80000000U);
    sceKernelWaitThreadEnd(g_Battery.workerThreadId, NULL);
    sceKernelDeleteThread(g_Battery.workerThreadId);
    sceKernelDeleteEventFlag(g_Battery.batteryEventFlagId);
    return 0;
}

s32 _scePowerBatterySetParam(s32 arg0, s32 arg1) {
    g_Battery.forceSuspendCapacity = arg0;
    g_Battery.lowBatteryCapacity = arg1;
    return 0;
}

s32 _scePowerBatterySuspend(void) {
    s32 intr;
    u32 flags;

    intr = sceKernelCpuSuspendIntr();
    flags = 0x40000000;
    if (g_Battery.batteryForbidChargingNetCounter != 0) {
        flags |= 0x200;
    }
    sceKernelClearEventFlag(g_Battery.batteryEventFlagId, ~0x20000000);
    sceKernelSetEventFlag(g_Battery.batteryEventFlagId, flags);
    sceKernelCpuResumeIntr(intr);
    return 0;
}

s32 _scePowerBatteryIsBusy(void) {
    return g_Battery.isBatteryPollingSuspended == 0;
}
#endif

#if FW_VERSION == 102
s32 _scePowerBatteryResume(void) {
    s32 intr;
    u32 flags;

    intr = sceKernelCpuSuspendIntr();
    flags = 0x20000000;
    if (g_Battery.batteryForbidChargingNetCounter != 0) {
        flags |= 0x100;
    }
    g_Battery.unk20 = -1;
    g_Battery.isBatteryPollingSuspended = 0;
    sceKernelClearEventFlag(g_Battery.batteryEventFlagId, ~0x200);
    sceKernelSetEventFlag(g_Battery.batteryEventFlagId, flags);
    sceKernelCpuResumeIntr(intr);
    return 0;
}
#endif

#if FW_VERSION >= 103 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/power", _scePowerBatteryResume);

s32 scePowerBatteryUpdateInfo(void) {
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    sceKernelSetEventFlag(g_Battery.batteryEventFlagId, 0x10000000U);
    sceKernelClearEventFlag(g_Battery.batteryEventFlagId, 0xEFFFFFFFU);
    sceKernelCpuResumeIntr(temp_s1);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 _scePowerBatteryResume(void) {
    s32 intr;
    u32 flags;

    intr = sceKernelCpuSuspendIntr();
    flags = 0x20000000;
    if (g_Battery.batteryForbidChargingNetCounter != 0) {
        flags |= 0x100;
    }
    g_Battery.isBatteryPollingSuspended = 0;
    sceKernelClearEventFlag(g_Battery.batteryEventFlagId, ~0x200);
    sceKernelSetEventFlag(g_Battery.batteryEventFlagId, flags);
    sceKernelCpuResumeIntr(intr);
    return 0;
}
#endif

#if FW_VERSION < 282
s32 scePowerGetForceSuspendCapacity(void) {
    return g_Battery.forceSuspendCapacity;
}

s32 scePowerGetLowBatteryCapacity(void) {
    return g_Battery.lowBatteryCapacity;
}
#endif

#if FW_VERSION >= 330
s32 func_00004B54(void) {
    M2C_UNK *temp_v0;
    s32 temp_v0_2;

    memset(&D_0000B3AC.unk0, 0, 0xC4);
    temp_v0 = "ScePowerBattery";
    M2C_VFIELD(&D_0000B3AC, s32, 0x20) = -1;
    M2C_VFIELD(&D_0000B3AC, s32, 0x2C) = -1;
    M2C_VFIELD(&D_0000B3AC, s32, 0x44) = -1;
    M2C_VFIELD(&D_0000B3AC, s32, 0x4C) = -1;
    D_0000B3AC.unk0 = sceKernelCreateEventFlag(temp_v0, 1U, 0U, NULL);
    temp_v0_2 = sceKernelCreateThread(temp_v0, (s32) &func_00003F14, 0x40, 0x800U, 0x100001U, NULL);
    D_0000B3AC.unk4 = temp_v0_2;
    sceKernelStartThread(temp_v0_2, 0U, NULL);
    return 0;
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
s32 func_00004B54(void) {
    M2C_UNK *temp_v0;
    s32 temp_v0_2;

    memset(&D_0000B3AC.unk0, 0, 0xC0);
    temp_v0 = "ScePowerBattery";
    M2C_VFIELD(&D_0000B3AC, s32, 0x48) = -1;
    D_0000B3AC.unk28 = -1;
    M2C_VFIELD(&D_0000B3AC, s32, 0x40) = -1;
    D_0000B3AC.unk0 = sceKernelCreateEventFlag(temp_v0, 1U, 0U, NULL);
    temp_v0_2 = sceKernelCreateThread(temp_v0, (s32) &func_00003F14, 0x40, 0x800U, 0x100001U, NULL);
    D_0000B3AC.unk4 = temp_v0_2;
    sceKernelStartThread(temp_v0_2, 0U, NULL);
    return 0;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s32 func_00004B54(void) {
    M2C_UNK *temp_v0;
    s32 temp_v0_2;

    memset(&D_0000B3AC.unk0, 0, 0xBC);
    temp_v0 = "ScePowerBattery";
    D_0000B3AC.unk28 = -1;
    D_0000B3AC.unk0 = sceKernelCreateEventFlag(temp_v0, 1U, 0U, NULL);
    temp_v0_2 = sceKernelCreateThread(temp_v0, (s32) &func_00003F14, 0x40, 0x800U, 0x100001U, NULL);
    D_0000B3AC.unk4 = temp_v0_2;
    sceKernelStartThread(temp_v0_2, 0U, NULL);
    return 0;
}
#endif

#if FW_VERSION == 282
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
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 func_00004BF8(void) {
    sceKernelSetEventFlag(D_0000B3AC.unk0, 0x80000000U);
    sceKernelWaitThreadEnd(D_0000B3AC.unk4, NULL);
    sceKernelDeleteThread(D_0000B3AC.unk4);
    sceKernelDeleteEventFlag(D_0000B3AC.unk0);
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 func_00004C50(s32 arg0, s32 arg1, s32 arg2) {
    D_0000B3AC.unk18 = arg2;
    D_0000B3AC.unk8 = arg0;
    D_0000B3AC.unkC = arg1;
    return 0;
}

s32 func_00004C6C(void) {
    return D_0000B3BC == 0;
}

INCLUDE_ASM("nonmatchings/power", func_00004C7C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/power", scePowerBatteryUpdateInfo);
#endif

#if FW_VERSION >= 300
s32 scePowerBatteryUpdateInfo(void) {
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    sceKernelSetEventFlag(D_0000B3AC.unk0, 0x10000000U);
    sceKernelClearEventFlag(D_0000B3AC.unk0, 0xEFFFFFFFU);
    sceKernelCpuResumeIntr(temp_s1);
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 scePowerGetForceSuspendCapacity(void) {
    return D_0000B3B4;
}

s32 scePowerGetLowBatteryCapacity(void) {
    return D_0000B3B8;
}

s32 scePower_driver_680860E3(void) {
    return D_0000B3C4;
}
#endif

#if FW_VERSION >= 103 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/power", scePowerBatteryForbidCharging);
#endif

#if FW_VERSION < 103
s32 scePowerBatteryForbidCharging(void) {
    s32 intr;

    intr = sceKernelCpuSuspendIntr();
    if (g_Battery.batteryForbidChargingNetCounter == 0) {
        sceKernelSetEventFlag(g_Battery.batteryEventFlagId, 0x100);
        sceKernelClearEventFlag(g_Battery.batteryEventFlagId, ~0x200);
    }
    g_Battery.batteryForbidChargingNetCounter++;
    sceKernelCpuResumeIntr(intr);
    return 0;
}
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/power", scePowerBatteryPermitCharging);
#endif

#if FW_VERSION == 100
s32 scePowerBatteryPermitCharging(void) {
    s32 intr;

    intr = sceKernelCpuSuspendIntr();
    if (--g_Battery.batteryForbidChargingNetCounter == 0) {
        sceKernelSetEventFlag(g_Battery.batteryEventFlagId, 0x200);
        sceKernelClearEventFlag(g_Battery.batteryEventFlagId, ~0x100);
    }
    sceKernelCpuResumeIntr(intr);
    return 0;
}
#endif

s32 scePowerIsPowerOnline(void) {
    s32 ret;
    u32 oldK1 = shiftK1Noreorder();

    ret = sceSysconIsAcSupplied();
    setK1(oldK1);
    return ret;
}

#if FW_VERSION >= 102
s32 scePowerIsBatteryExist(void) {
    return D_0000B3DC != 0;
}
#else
s32 scePowerIsBatteryExist(void) {
    return D_0000B3DC == 2;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 151
INCLUDE_ASM("nonmatchings/power", scePowerIsBatteryCharging);
#endif

#if FW_VERSION >= 151
s32 scePowerIsBatteryCharging(void) {
    s32 temp_v0;

    temp_v0 = scePowerGetBatteryChargingStatus();
    return ((temp_v0 ^ 2) == 0) ? 0 : temp_v0;
}
#endif

#if FW_VERSION < 150
s32 scePowerIsLowBattery(void) {
    s32 ret;
    u32 oldK1 = shiftK1();

    ret = 0;
    if (g_Battery.batteryAvailabilityStatus == 2) {
        ret = sceSysconIsLowBattery();
    }
    setK1(oldK1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/power", scePowerIsLowBattery);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 282
s32 scePowerGetBatteryFullCapacity(void) {
    if (g_Battery.batteryAvailabilityStatus == 0) {
        return 0x802B0100;
    }
    if (g_Battery.batteryAvailabilityStatus == 1) {
        return 0x802B0101;
    }
    return g_Battery.batteryFullCapacity;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/power", scePowerGetBatteryFullCapacity);
#endif

#if FW_VERSION == 100
s32 scePowerGetBatteryFullCapacity(void) {
    if (g_Battery.batteryAvailabilityStatus != 2) {
        return 0x802B0100;
    }
    return g_Battery.batteryFullCapacity;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 282
s32 scePowerGetBatteryLifePercent(void) {
    if (g_Battery.batteryAvailabilityStatus == 0) {
        return 0x802B0100;
    }
    if (g_Battery.batteryAvailabilityStatus == 1) {
        return 0x802B0101;
    }
    return g_Battery.batteryLifePercentage;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/power", scePowerGetBatteryLifePercent);
#endif

#if FW_VERSION == 100
s32 scePowerGetBatteryLifePercent(void) {
    if (g_Battery.batteryAvailabilityStatus != 2) {
        return 0x802B0100;
    }
    return g_Battery.batteryLifePercentage;
}
#endif

#if FW_VERSION == 102
s32 scePowerGetBatteryLifeTime(void) {
    s32 cap;

    cap = scePowerGetBatteryRemainCapacity();
    if (cap < 0) {
        return cap;
    }
    if ((u32)cap < (u32)g_Battery.forceSuspendCapacity) {
        return 0;
    }
    return g_Battery.limitTime;
}
#endif

#if FW_VERSION == 100
s32 scePowerGetBatteryLifeTime(void) {
    if (g_Battery.batteryAvailabilityStatus != 2) {
        return 0x802B0100;
    }
    return g_Battery.limitTime;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 282
s32 scePowerGetBatteryTemp(void) {
    if (g_Battery.batteryAvailabilityStatus == 0) {
        return 0x802B0100;
    }
    if (g_Battery.batteryAvailabilityStatus == 1) {
        return 0x802B0101;
    }
    return g_Battery.batteryTemp;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/power", scePowerGetBatteryTemp);
#endif

#if FW_VERSION == 100
s32 scePowerGetBatteryTemp(void) {
    if (g_Battery.batteryAvailabilityStatus != 2) {
        return 0x802B0100;
    }
    return g_Battery.batteryTemp;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 282
s32 scePowerGetBatteryVolt(void) {
    if (g_Battery.batteryAvailabilityStatus == 0) {
        return 0x802B0100;
    }
    if (g_Battery.batteryAvailabilityStatus == 1) {
        return 0x802B0101;
    }
    return g_Battery.batteryVoltage;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/power", scePowerGetBatteryVolt);
#endif

#if FW_VERSION == 100
s32 scePowerGetBatteryVolt(void) {
    if (g_Battery.batteryAvailabilityStatus != 2) {
        return 0x802B0100;
    }
    return g_Battery.batteryVoltage;
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/power", scePowerGetBatteryChargeCycle);
#endif

#if FW_VERSION >= 282
s32 scePowerGetInnerTemp(float *temp) {
    return 0x802B0010;
}
#endif

#if FW_VERSION >= 330
s32 func_00005250(void) {
    M2C_VFIELD(&D_0000B3AC, s32, 0x20) = -1;
    sceKernelSetEventFlag(D_0000B3AC.unk0, 0x200U);
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 func_00004FE0(void) {
    D_0000B404 = 0;
    return 0;
}
#endif
