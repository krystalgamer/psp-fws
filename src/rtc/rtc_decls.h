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
    s32 tv_sec;
    s32 tv_usec;
} SceKernelTimeval;

typedef struct {
    s32 tz_minuteswest;
    s32 tz_dsttime;
} SceKernelTimezone;

typedef struct {
    s32 unk0;               /* 0x00: sceRtcSetConf arg 0 */
    s32 unk4;               /* 0x04: sceRtcSetConf arg 1 */
    s32 unk8;               /* 0x08: sceRtcSetConf arg 3; local time = UTC + unk8 + unkC minutes */
    s32 unkC;               /* 0x0C: sceRtcSetConf arg 2 */
    s32 tickValid;          /* 0x10: tickOffset valid (sceRtcGetCurrentTick) */
    s32 secureTickValid;    /* 0x14: secureTickOffset valid */
#if FW_VERSION >= 270
    s32 unk18;
    SceUID cbId;            /* 0x1C: sceRtcRegisterCallback, -1 none */
#endif
    u64 clockUs;            /* 0x18 (2.70+: 0x20): syscon clock (0.5 s units) * 500000 at the last sync */
    u64 sysTimeAtSync;      /* sceKernelGetSystemTimeWide() at the last sync */
    u64 baseTick;           /* tick at syscon clock 0 (scratchpad 0x10, 40 bits << 19) */
    u64 secureBaseTick;     /* scratchpad 0x18 */
    u64 tickOffset;         /* current tick - system time */
    u64 secureTickOffset;   /* secure tick - system time */
    u64 alarmTick;          /* 0x48 (2.70+: 0x50) */
    u32 clockAdjust;        /* 0x50 (2.70+: 0x58): scratchpad 8, sum of syscon clocks overwritten by SetCurrentTick */
} SceRtcState;

typedef struct SceSysEventHandler {
    s32 size;                           /* 0x40 */
    const char *name;                   /* "SceRtc" */
    s32 typeMask;
    s32 (*handler)(s32 ev, const char *name, void *param, s32 *result);
    s32 gp;
    s32 busy;
    struct SceSysEventHandler *next;
    s32 reserved[9];
} SceSysEventHandler;

extern const s8 g_daysInMonth[2][12];
extern SceRtcState g_rtc;
extern SceSysEventHandler rtc_handler;

void alarmCallback(s32 arg0, void *arg1);
u32 clockHandler(void);
char *formatDigits2(char *buf, s32 n);
char *formatDigits4(char *buf, s32 n);
s32 getTimeOfDayHandler(SceKernelTimeval *tv, SceKernelTimezone *tz);
void *memset(void *s, s32 c, u32 n);
s32 module_reboot_before(void);
s32 module_start(void);
s32 parseDigits2(const char *s);
s32 parseDigits4(const char *s);
s32 registerFunctions(void);
void sceKernelCpuResumeIntr(s32 intr);
s32 sceKernelCpuSuspendIntr(void);
u32 sceKernelDipswCpTime(void);
s64 sceKernelGetSystemTimeWide(void);
s32 sceKernelPowerLock(s32 type);
s32 sceKernelPowerUnlock(s32 type);
s32 sceKernelRegisterLibcRtcFunc(u32 (*clock)(void), u32 (*time)(u32 *), s32 (*gettimeofday)(SceKernelTimeval *, SceKernelTimezone *));
s32 sceKernelRegisterRtcFunc(u32 (*clock)(void), u32 (*time)(u32 *), s32 (*gettimeofday)(SceKernelTimeval *, SceKernelTimezone *), s32 (*getSecureTick)(u64 *));
s32 sceKernelRegisterSysEventHandler(SceSysEventHandler *handler);
s32 sceKernelUnregisterSysEventHandler(SceSysEventHandler *handler);
s32 sceRtcCheckValid(const pspTime *date);
s32 sceRtcCompareTick(const u64 *tick1, const u64 *tick2);
s32 sceRtcConvertLocalTimeToUTC(const u64 *tickLocal, u64 *tickUTC);
s32 sceRtcConvertUtcToLocalTime(const u64 *tickUTC, u64 *tickLocal);
s32 sceRtcEnd(void);
s32 sceRtcFormatRFC2822(char *pszDateTime, const u64 *pUtc, s32 iTimeZoneMinutes);
s32 sceRtcFormatRFC2822LocalTime(char *pszDateTime, const u64 *pUtc);
s32 sceRtcFormatRFC3339(char *pszDateTime, const u64 *pUtc, s32 iTimeZoneMinutes);
s32 sceRtcFormatRFC3339LocalTime(char *pszDateTime, const u64 *pUtc);
u64 sceRtcGetAccumlativeTime(void);
s32 sceRtcGetAlarmTick(u64 *tick);
s32 sceRtcGetCurrentClock(pspTime *time, s32 tz);
s32 sceRtcGetCurrentClockLocalTime(pspTime *time);
s32 sceRtcGetCurrentSecureTick(u64 *tick);
s32 sceRtcGetCurrentTick(u64 *tick);
s32 sceRtcGetDayOfWeek(s32 year, s32 month, s32 day);
s32 sceRtcGetDaysInMonth(s32 year, s32 month);
s32 sceRtcGetDosTime(const pspTime *date, u32 *dosTime);
s32 sceRtcGetTick(const pspTime *date, u64 *tick);
u32 sceRtcGetTickResolution(void);
s32 sceRtcGetTime_t(const pspTime *date, u32 *time);
s32 sceRtcGetWin32FileTime(const pspTime *date, u64 *win32Time);
s32 sceRtcInit(void);
s32 sceRtcIsLeapYear(s32 year);
s32 sceRtcParseDateTime(u64 *destTick, const char *dateString);
s32 sceRtcParseRFC3339(u64 *destTick, const char *dateString);
s32 sceRtcReset(void);
s32 sceRtcResume(void);
s32 sceRtcSetAlarmTick(const u64 *tick);
s32 sceRtcSetConf(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 sceRtcSetCurrentSecureTick(const u64 *tick);
s32 sceRtcSetCurrentTick(const u64 *tick);
s32 sceRtcSetDosTime(pspTime *date, u32 dosTime);
s32 sceRtcSetTick(pspTime *date, const u64 *tick);
s32 sceRtcSetTime_t(pspTime *date, u32 time);
s32 sceRtcSetWin32FileTime(pspTime *date, const u64 *win32Time);
s32 sceRtcSuspend(void);
s32 sceRtcSynchronize(void);
s32 sceRtcTickAddDays(u64 *destTick, const u64 *srcTick, s32 numDays);
s32 sceRtcTickAddHours(u64 *destTick, const u64 *srcTick, s32 numHours);
s32 sceRtcTickAddMicroseconds(u64 *destTick, const u64 *srcTick, s64 numMS);
s32 sceRtcTickAddMinutes(u64 *destTick, const u64 *srcTick, s64 numMins);
s32 sceRtcTickAddMonths(u64 *destTick, const u64 *srcTick, s32 numMonths);
s32 sceRtcTickAddSeconds(u64 *destTick, const u64 *srcTick, s64 numSecs);
s32 sceRtcTickAddTicks(u64 *destTick, const u64 *srcTick, s64 numTicks);
s32 sceRtcTickAddWeeks(u64 *destTick, const u64 *srcTick, s32 numWeeks);
s32 sceRtcTickAddYears(u64 *destTick, const u64 *srcTick, s32 numYears);
s32 sceSysconReadAlarm(u32 *alarm);
s32 sceSysconReadClock(u32 *clock);
s32 sceSysconReadScratchPad(u32 src, void *dst, u32 size);
s32 sceSysconSetAlarmCallback(void (*cb)(s32, void *), void *arg);
s32 sceSysconWriteAlarm(u32 alarm);
s32 sceSysconWriteClock(u32 clock);
s32 sceSysconWriteScratchPad(u32 dst, void *src, u32 size);
s32 sysEventHandler(s32 arg0);
u32 timeHandler(u32 *t);

#endif
