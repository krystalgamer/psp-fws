#ifndef RTC_DECLS_H
#define RTC_DECLS_H

#include "common.h"
#include "m2c_macros.h"

typedef struct {
    u16 year;
    u16 month;
    u16 day;
    u16 hour;
    u16 minutes;
    u16 seconds;
    u32 microseconds;
} pspTime;

typedef struct {
    volatile s32 unk0;          /* 0x00: sceRtcSetConf arg 0 */
    volatile s32 unk4;          /* 0x04: sceRtcSetConf arg 1 */
    volatile s32 unk8;          /* 0x08: sceRtcSetConf arg 3; local time = UTC + unk8 + unkC minutes */
    volatile s32 unkC;          /* 0x0C: sceRtcSetConf arg 2 */
    volatile s32 tickValid;     /* 0x10: tickOffset valid (sceRtcGetCurrentTick) */
    volatile s32 secureTickValid; /* 0x14: secureTickOffset valid */
#if FW_VERSION >= 270
    volatile s32 unk18;
    volatile SceUID cbId;       /* 0x1C: sceRtcRegisterCallback, -1 none */
#endif
    u64 clockUs;                /* 0x18 (2.70+: 0x20): syscon clock (0.5 s units) * 500000 at the last sync */
    u64 sysTimeAtSync;          /* sceKernelGetSystemTimeWide() at the last sync */
    u64 baseTick;               /* tick at syscon clock 0 (scratchpad 0x10, 40 bits << 19) */
    u64 secureBaseTick;         /* scratchpad 0x18 */
    u64 tickOffset;             /* current tick - system time */
    u64 secureTickOffset;       /* secure tick - system time */
    u64 alarmTick;              /* 0x48 (2.70+: 0x50) */
    u32 clockAdjust;            /* 0x50 (2.70+: 0x58): scratchpad 8, sum of syscon clocks overwritten by SetCurrentTick */
} SceRtcState;

extern s32 D_00003BF0;
extern s32 D_00004530;
extern M2C_UNK D_00004540;
extern SceRtcState D_00004580;
extern M2C_UNK func_00000000;
extern M2C_UNK func_00003D10;
extern M2C_UNK func_00003DD4;
extern M2C_UNK func_00003DF4;
extern M2C_UNK sceRtcGetCurrentSecureTick;

s32 func_00000DB0(s32 arg0);
s32 func_0000138C(s32 arg0);
char *func_000032D0(char *buf, s32 n);
s32 func_0000358C(void);
char *func_00003AF8(char *buf, s32 n);
void func_00003D9C(void);
M2C_UNK memset(M2C_UNK *, M2C_UNK, M2C_UNK);
s32 module_reboot_before(void);
s32 module_start(void);
s32 sceKernelRegisterLibcRtcFunc(M2C_UNK *, M2C_UNK *, M2C_UNK *);
M2C_UNK sceKernelRegisterRtcFunc(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *);
M2C_UNK sceKernelRegisterSysEventHandler(M2C_UNK *);
M2C_UNK sceKernelUnregisterSysEventHandler(M2C_UNK *);
s32 sceRtcEnd(void);
s32 sceRtcGetDayOfWeek(s32 arg0, s32 arg1, s32 arg2);
u32 sceRtcGetTickResolution(void);
s32 sceRtcInit(void);
s32 sceRtcIsLeapYear(s32 arg0);
s32 sceRtcReset(void);
s32 sceRtcResume(void);
s32 sceRtcSuspend(void);
s32 sceRtcSynchronize(void);
s32 sceRtcTickAddMicroseconds(void *arg0, void *arg1, s64 arg2);
s32 sceRtcTickAddMinutes(void *arg0, void *arg1, s64 arg2);
s32 sceRtcTickAddSeconds(void *arg0, void *arg1, s64 arg2);
s32 sceRtcTickAddTicks(void *, void *, s64);
M2C_UNK sceSysconSetAlarmCallback(M2C_UNK, M2C_UNK);

#endif
