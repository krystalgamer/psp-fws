#ifndef POWER_DECLS_H
#define POWER_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_00006180_s {
    s32 unk0;
    u8 pad4[0x24];
    volatile s32 unk28;
    volatile s32 unk2C;
    volatile s32 unk30;
    u8 pad34[0x8];
    volatile s32 unk3C;
};

struct D_0000B3AC_s {
    s32 unk0;
    s32 unk4;
    volatile s32 unk8;
    volatile s32 unkC;
    u8 pad10[0x8];
    volatile s32 unk18;
    u8 pad1C[0xC];
    s32 unk28;
};

/* battery.c state (1.00 layout, 0x50 bytes; prefix up to 0x18 shared by 1.50-2.71). */
typedef struct {
    SceUID batteryEventFlagId; /* 0x0 */
    SceUID workerThreadId; /* 0x4 */
    s32 innerTempStatus; /* 0x8, -1 at init, 0 when syscon lacks the command */
    s32 forceSuspendCapacity; /* 0xC */
    s32 lowBatteryCapacity; /* 0x10 */
    u32 isBatteryPollingSuspended; /* 0x14 */
    u32 batteryForbidChargingNetCounter; /* 0x18 */
#if FW_VERSION == 100
    s32 workerThreadNextOp; /* 0x1C */
    u32 powerSupplyStatus; /* 0x20 */
    float innerTemp; /* 0x24 */
    u32 batteryAvailabilityStatus; /* 0x28, 2 = battery info valid */
    u32 batteryStatus; /* 0x2C */
    s32 batteryRemainingCapacity; /* 0x30 */
    s32 batteryLifePercentage; /* 0x34 */
    s32 batteryFullCapacity; /* 0x38 */
    s32 minimumFullCapacity; /* 0x3C */
    s32 limitTime; /* 0x40 */
    s32 batteryTemp; /* 0x44 */
    s32 batteryElec; /* 0x48 */
    s32 batteryVoltage; /* 0x4C */
#endif
} ScePowerBattery;

/* A registered power callback slot (1.00: 8 bytes). */
typedef struct {
    SceUID cbid; /* 0x0, < 0: free slot */
    s32 delayedCallbacksAccumulatedOneOffArg; /* 0x4 */
} ScePowerCallbackCB;

/* clockFrequency.c state (1.00 layout, 0x44 bytes). */
typedef struct {
    SceUID semaId; /* 0x0 */
#if FW_VERSION == 100
    s32 pllOutSelect; /* 0x4 */
    s32 pllClockFrequencyInt; /* 0x8 */
    s32 cpuClockFrequencyInt; /* 0xC */
    s32 busClockFrequencyInt; /* 0x10 */
    u32 clkcCpuGearNumerator; /* 0x14 */
    u32 clkcCpuGearDenominator; /* 0x18 */
    u32 clkcBusGearNumerator; /* 0x1C */
    u32 clkcBusGearDenominator; /* 0x20 */
    u32 isTachyonMaxVoltage; /* 0x24 */
    s16 tachyonMaxVoltage; /* 0x28 */
    s16 tachyonDefaultVoltage; /* 0x2A */
    u16 unk2C; /* 0x2C */
    s16 scCpuClockLowerLimit; /* 0x2E */
    s16 scCpuClockUpperLimit; /* 0x30 */
    s16 scBusClockLowerLimit; /* 0x32 */
    s16 scBusClockUpperLimit; /* 0x34 */
    s16 pllClockLowerLimit; /* 0x36 */
    s16 pllClockUpperLimit; /* 0x38 */
    u16 unk3A; /* 0x3A */
    s32 geEdramRefreshMode; /* 0x3C */
    s32 oldGeEdramRefreshMode; /* 0x40 */
#endif
} ScePowerFrequency;

/* sceKernelRegisterPowerHandlers table (1.00: 6 words). */
typedef struct {
    s32 size;
    s32 (*tick)(s32);
    s32 (*lock)(s32);
    s32 (*unlock)(s32);
    s32 (*lockForUser)(s32);
    s32 (*unlockForUser)(s32);
} ScePowerHandlers;

/* Idle timer slot (1.00: 0x20 bytes). */
typedef struct {
    u32 isResetted; /* 0x0 */
    s32 isDueTimeReached; /* 0x4, -1 after registration */
    u32 attr; /* 0x8 */
    u32 baseTime; /* 0xC */
    u32 dueTime; /* 0x10 */
    s32 (*callback)(s32 slot, s32 isDue, void *arg); /* 0x14 */
    u32 gp; /* 0x18 */
    void *callbackArg; /* 0x1C */
} ScePowerIdleTimerCb;

/* idleTimer.c state (1.00: 0x104 bytes). */
typedef struct {
    u32 curSystemTime; /* 0x0 */
    ScePowerIdleTimerCb idleTimerCb[8]; /* 0x4 */
} ScePowerIdle;

/* Suspend/resume save area (1.00 layout, 0x5040 bytes). */
typedef struct {
    u8 scratchpad[0x4000]; /* 0x0 */
    u8 hwResetVector[0x1000]; /* 0x4000, copy of 0xBFC00000 */
    s32 pllOutSelect; /* 0x5000 */
    s32 powerDownCounter; /* 0x5004 */
    u8 resumeInfo[0x38]; /* 0x5008, ScePowerResumeInfo (size word first) */
} ScePowerResume;

/* powerSwitch.c state (1.00: 0x28 bytes; 1.50-2.71 offsets from the shared C). */
typedef struct {
    SceUID eventId; /* 0x0 */
#if FW_VERSION >= 150
    SceUID volatileMemorySemaId; /* 0x4 */
#endif
    SceUID workerThreadId; /* 1.00: 0x4 */
    u32 mode; /* 1.00: 0x8, 1.50: 0xC */
    u32 powerLockForUserShouldForceWait; /* 1.00: 0xC */
    s32 numPowerLocksUser; /* 1.00: 0x10 */
    s32 numPowerLocksKernel; /* 1.00: 0x14 */
#if FW_VERSION >= 150
    u32 unk1C;
#endif
    s32 curHardwarePowerSwitchRequest; /* 1.00: 0x18, 1.50: 0x20 */
    s32 curSoftwarePowerSwitchRequest; /* 1.00: 0x1C, 1.50: 0x24 */
#if FW_VERSION >= 150
    u32 isRebootPowerLockExist; /* 0x28 */
#endif
#if FW_VERSION >= 201
    u32 coldResetMode; /* 0x2C */
#endif
    u32 wakeupCondition; /* 1.00: 0x20, 1.50: 0x2C, 2.01: 0x30 */
    s32 resumeCount; /* 1.00: 0x24, 1.50: 0x30, 2.01: 0x34 */
} ScePowerSwitch;

/* power.c control block (1.00 layout, 0x108 bytes). */
typedef struct {
    ScePowerCallbackCB powerCallbackCBs[32]; /* 0x0 */
    u32 curPowerStateForCallbackArg; /* 0x100 */
    u32 isWlanSuppressChargingEnabled; /* 0x104, IdStorage key 4 byte 0x19 */
} ScePower;

typedef struct SceSysEventHandler {
    s32 size;
    char *name;
    s32 typeMask;
    s32 (*handler)(s32 eventId, char *eventName, void *param, s32 *result);
    s32 gp;
    s32 busy;
    struct SceSysEventHandler *next;
    s32 reserved[9];
} SceSysEventHandler;

extern ScePowerHandlers D_00003B7C;
extern SceSysEventHandler D_00003C60;
extern ScePower D_00003CC0;
extern s32 D_00003DC4;
extern ScePowerSwitch D_00003E00;
extern s32 D_00003E08;
extern s32 D_00003E20;
extern ScePowerResume D_00003E40;
extern u8 D_00004FC5;
extern u8 D_00004FC6;
extern u8 D_00004FC9;
extern s8 D_00005889;
extern M2C_UNK D_00005F00;
extern u8 D_00006149;
extern u8 D_0000614A;
extern s8 D_0000614D;
extern u8 D_0000614E;
extern struct D_00006180_s D_00006180;
extern s32 D_0000618C;
extern s32 D_000061B8;
extern ScePowerIdle D_00008E80;
extern ScePowerFrequency D_00008F84;
extern s32 D_00008F90;
extern ScePowerBattery D_00008FC8;
extern s32 D_00008FD4;
extern s32 D_00008FD8;
extern s32 D_00008FDC;
extern s32 D_0000A1CC;
extern s32 D_0000A1D0;
extern u16 D_0000A1F8;
extern u16 D_0000A1FA;
extern s16 D_0000AABC;
extern s16 D_0000AABE;
extern s16 D_0000AAC4;
extern s16 D_0000AAC6;
extern s16 D_0000AACC;
extern s16 D_0000AACE;
extern s32 D_0000AF94;
extern s32 D_0000B348;
extern s32 D_0000B354;
extern s32 D_0000B358;
extern s32 D_0000B35C;
extern s16 D_0000B380;
extern s16 D_0000B382;
extern s16 D_0000B388;
extern s16 D_0000B38A;
extern s16 D_0000B390;
extern s16 D_0000B392;
extern s32 D_0000B3A4;
extern struct D_0000B3AC_s D_0000B3AC;
extern s32 D_0000B3B4;
extern s32 D_0000B3B8;
extern s32 D_0000B3BC;
extern s32 D_0000B3C4;
extern s32 D_0000B3DC;
extern s32 D_0000B404;
extern s32 D_0000B40C;
extern s32 D_0000B7D4;

void func_0000054C(s32 enable, void *argp);
s32 func_00000658(SceSize args, void *argp);
void func_0000096C(s32 clear, s32 set, s32 oneOff);
void func_00000DD4(s32 enable, void *argp);
s32 func_000012B4(s32, s32);
s32 func_000014A0(s32 lockType, s32 isUserLock);
s32 func_0000157C(s32 lockType, s32 isUserLock);
void func_00001624(s32 enable);
s32 func_00001978(s32 subIntr, void *arg);
s32 func_00001B1C(void);
s32 func_00001EF4(s32, s32);
s32 func_00001FEC(s32, s32);
s32 func_000024BC(void);
s32 func_0000250C(void);
s32 func_00002600(SceSize args, void *argp);
s32 func_00002880(s32, s32);
void func_00002944(s32 arg0);
void func_000029BC(s32 enable, void *argp);
s32 func_00002D70(void);
s32 func_00002DD0(void);
s32 func_00002E14(void);
s32 func_00002E48(void);
s32 func_00002E6C(s32 arg0, s32 arg1);
s32 func_00002EFC(void);
s32 func_00003220(SceSize args, void *argp);
s32 func_000032EC(s32, s32, s32);
s32 func_00003A98(void);
s32 func_00003F14(SceSize args, void *argp);
s32 func_00004B54(void);
s32 func_00004BF8(void);
s32 func_00004C50(s32 arg0, s32 arg1, s32 arg2);
s32 func_00004C6C(void);
s32 func_00004FE0(void);
s32 func_00005250(void);
M2C_UNK memset(M2C_UNK *, M2C_UNK, M2C_UNK);
s32 module_reboot_before(void);
float sceClkcGetBusFrequency(void);
float sceClkcGetCpuFrequency(void);
s32 sceClkcSetBusFrequency(float freq);
s32 sceClkcSetCpuFrequency(float freq);
s32 sceKernelClearEventFlag(s32, u32);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelCreateEventFlag(void *, u32, u32, void *);
s32 sceKernelCreateThread(void *, s32, s32, u32, u32, void *);
s32 sceKernelDelayThread(u32);
s32 sceKernelDeleteEventFlag(s32);
s32 sceKernelDeleteMutex(s32);
s32 sceKernelDeleteSema(s32);
s32 sceKernelDeleteThread(s32);
M2C_UNK sceKernelEnableSubIntr(M2C_UNK, M2C_UNK);
s32 sceKernelGetAWeDramSaveAddr();
s32 sceKernelGetMEeDramSaveAddr();
u32 sceKernelGetSystemTimeLow(void);
M2C_UNK sceKernelRegisterPowerHandlers(M2C_UNK);
M2C_UNK sceKernelRegisterSubIntrHandler(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK);
M2C_UNK sceKernelReleaseSubIntrHandler(M2C_UNK, M2C_UNK);
M2C_UNK sceKernelSetDdrMemoryProtection(s32, M2C_UNK, M2C_UNK);
s32 sceKernelSetEventFlag(s32, u32);
void **sceKernelSm1ReferOperations(void);
s32 sceKernelStartThread(s32, u32, void *);
M2C_UNK sceKernelUnregisterSysEventHandler(M2C_UNK *);
s32 sceKernelWaitThreadEnd(s32, void *);
s32 scePowerBatteryForbidCharging(void);
s32 scePowerBatteryPermitCharging(void);
s32 scePowerBatteryUpdateInfo(void);
s32 scePowerCancelRequest(void);
s32 scePowerCheckWlanCondition(s32 arg0);
s32 scePowerEnd(void);
s32 scePowerGetBatteryChargingStatus(void);
s32 scePowerGetBusClockFrequency(void);
s32 scePowerGetBusClockFrequencyInt(void);
s32 scePowerGetCpuClockFrequency(void);
s32 scePowerGetCpuClockFrequencyInt(void);
s32 scePowerGetDdrStrength(s32 *arg0, s32 *arg1);
s32 scePowerGetDdrVoltage(s32 *arg0, s32 *arg1);
s32 scePowerGetForceSuspendCapacity(void);
s32 scePowerGetGeEdramRefreshMode(void);
s32 scePowerGetInnerTemp(float *temp);
u8 scePowerGetLedOffTiming(void);
s32 scePowerGetLowBatteryCapacity(void);
s32 scePowerGetPllClockFrequencyInt(void);
s32 scePowerGetPowerSwMode(void);
s32 scePowerGetResumeCount(void);
s32 scePowerGetTachyonVoltage(s32 *arg0, s32 *arg1);
u8 scePowerGetWatchDog(void);
u8 scePowerGetWlanActivity(void);
s32 scePowerIdleTimerDisable(void);
s32 scePowerIdleTimerEnable(void);
s32 scePowerIsBatteryCharging(void);
s32 scePowerIsBatteryExist(void);
s32 scePowerIsRequest(void);
s32 scePowerRebootStart(void);
s32 scePowerRequestStandby(void);
s32 scePowerRequestSuspend(void);
s32 scePowerRequestSuspendTouchAndGo(void);
s32 scePowerSetClockFrequency(s32 arg0, s32 arg1, s32 arg2);
s32 scePowerSetExclusiveWlan(s8 arg0);
s32 scePowerSetPowerSwMode(s32 arg0);
s32 scePowerSetWakeupCondition(s32 arg0);
s32 scePowerWlanActivate(void);
s32 scePowerWlanDeactivate(void);
void scePower_D6D016EF(s32 arg0);
void scePower_driver_545A7F3C(s32 arg0, s32 arg1, s32 arg2);
s32 scePower_driver_680860E3(void);
void scePower_driver_A4E93389(s32 arg0, s32 arg1, s32 arg2);
void scePower_driver_CA3D34C1(s32 arg0);
void scePower_driver_D6D016EF(s32 arg0);
void scePower_driver_EBD177D6(s32 arg0, s32 arg1, s32 arg2);
s32 scePower_driver_F06B96D4(s32 arg0);
M2C_UNK sceSysconSetAcSupplyCallback(M2C_UNK, M2C_UNK);
M2C_UNK sceSysconSetHoldSwitchCallback(M2C_UNK, M2C_UNK);
M2C_UNK sceSysconSetLowBatteryCallback(M2C_UNK, M2C_UNK);
M2C_UNK sceSysconSetPowerSwitchCallback(M2C_UNK, M2C_UNK);

#endif
