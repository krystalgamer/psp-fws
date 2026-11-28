/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -frename-registers -mext */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "rtc_decls.h"

/* 1 if p is below 0x80000000 (user space); SCE compares the result with 0 */
#define IS_USER_ADDR(p) (((u32)(p) >> 31) ^ 1)

/* 2.70+: nonzero if the caller is a user and p is a kernel address */
#define K1_BAD_ADDR(p) ((-k1IsUserMode() & (u32)(p)) >> 31)

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/rtc", func_00000000_v352);
#endif

#if FW_VERSION == 351
INCLUDE_ASM("nonmatchings/rtc", func_00000000_v351);
#endif

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/rtc", func_00000000_v350);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/rtc", func_00000000_v340);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/rtc", func_00000000_v330);
#endif

#if FW_VERSION == 311
INCLUDE_ASM("nonmatchings/rtc", func_00000000_v311);
#endif

#if FW_VERSION == 310
INCLUDE_ASM("nonmatchings/rtc", func_00000000_v310);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/rtc", func_00000000_v303);
#endif

#if FW_VERSION == 302
INCLUDE_ASM("nonmatchings/rtc", func_00000000_v302);
#endif

#if FW_VERSION == 301
INCLUDE_ASM("nonmatchings/rtc", func_00000000_v301);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/rtc", func_00000000_v300);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/rtc", alarmCallback);
#endif

INCLUDE_ASM("nonmatchings/rtc", sceRtcSynchronize);

INCLUDE_ASM("nonmatchings/rtc", sceRtcSetCurrentTick);

INCLUDE_ASM("nonmatchings/rtc", sceRtcSetCurrentSecureTick);

#if FW_VERSION < 270
s32 sceRtcSetAlarmTick(const u64 *tick) {
    u32 alarm = -1;
    s32 ret;
    s32 intr;

    if (tick != NULL && *tick != 0 && g_rtc.baseTick != 0) {
        alarm = (*tick - g_rtc.baseTick) / 500000;
    }
    ret = sceSysconWriteAlarm(alarm);
    if (ret < 0) {
        return ret;
    }
    intr = sceKernelCpuSuspendIntr();
    if (tick != NULL) {
        g_rtc.alarmTick = *tick;
    } else {
        g_rtc.alarmTick = 0;
    }
    sceKernelCpuResumeIntr(intr);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/rtc", sceRtcSetAlarmTick);

INCLUDE_ASM("nonmatchings/rtc", sceRtcIsAlarmed);

INCLUDE_ASM("nonmatchings/rtc", sceRtcRegisterCallback);

INCLUDE_ASM("nonmatchings/rtc", sceRtcUnregisterCallback);
#endif

#if FW_VERSION < 270
s32 sceRtcGetCurrentTick(u64 *tick) {
    s32 ret;
    u32 oldK1 = shiftK1();

    if (k1IsUserMode() && (s32)tick < 0) {
        setK1(oldK1);
        return 0x80000023;
    }
    if (g_rtc.tickValid != 0) {
        *tick = g_rtc.tickOffset + sceKernelGetSystemTimeWide();
        ret = 0;
    } else {
        *tick = 0x00DDDEF8B3A14000ULL;
        ret = 0x80000001;
    }
    setK1(oldK1);
    return ret;
}
#else
s32 sceRtcGetCurrentTick(u64 *tick) {
    s32 ret;
    u32 oldK1 = shiftK1();

    if ((s32)(-k1IsUserMode() & (u32)tick) < 0) {
        setK1(oldK1);
        return 0x80000023;
    }
    if (g_rtc.tickValid != 0) {
        *tick = g_rtc.tickOffset + sceKernelGetSystemTimeWide();
        ret = 0;
    } else {
        *tick = 0x00DDDEF8B3A14000ULL;
        ret = 0x80000001;
    }
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION < 270
s32 sceRtcGetCurrentSecureTick(u64 *tick) {
    s32 ret;
    u32 oldK1 = shiftK1();

    if (k1IsUserMode() && (s32)tick < 0) {
        setK1(oldK1);
        return 0x80000023;
    }
    if (g_rtc.secureTickValid != 0) {
        *tick = g_rtc.secureTickOffset + sceKernelGetSystemTimeWide();
        ret = 0;
    } else {
        *tick = 0x00DDDEF8B3A14000ULL;
        ret = 0x80000001;
    }
    setK1(oldK1);
    return ret;
}
#else
s32 sceRtcGetCurrentSecureTick(u64 *tick) {
    s32 ret;
    u32 oldK1 = shiftK1();

    if ((s32)(-k1IsUserMode() & (u32)tick) < 0) {
        setK1(oldK1);
        return 0x80000023;
    }
    if (g_rtc.secureTickValid != 0) {
        *tick = g_rtc.secureTickOffset + sceKernelGetSystemTimeWide();
        ret = 0;
    } else {
        *tick = 0x00DDDEF8B3A14000ULL;
        ret = 0x80000001;
    }
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/rtc", sceRtcGetLastReincarnatedTime);

INCLUDE_ASM("nonmatchings/rtc", sceRtcGetLastAdjustedTime);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 module_start(void) {
    memset(&g_rtc, 0, sizeof(g_rtc));
    g_rtc.cbId = -1;
    registerFunctions();
    g_rtc.unk0 = 0;
    g_rtc.unk4 = 0;
    g_rtc.unkC = 0;
    g_rtc.unk8 = 0;
    sceRtcSynchronize();
    sceSysconSetAlarmCallback(alarmCallback, NULL);
    sceKernelRegisterSysEventHandler(&rtc_handler);
    return 0;
}
#endif

#if FW_VERSION < 270
s32 module_start(void) {
    memset(&g_rtc, 0, sizeof(g_rtc));
    registerFunctions();
    g_rtc.unk0 = 0;
    g_rtc.unk4 = 0;
    g_rtc.unkC = 0;
    g_rtc.unk8 = 0;
    sceRtcSynchronize();
    sceKernelRegisterSysEventHandler(&rtc_handler);
    return 0;
}

s32 module_reboot_before(void) {
    sceKernelUnregisterSysEventHandler(&rtc_handler);
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 module_start(void) {
    memset(&g_rtc, 0, sizeof(g_rtc));
    g_rtc.cbId = -1;
    g_rtc.unk0 = 0;
    g_rtc.unk4 = 0;
    g_rtc.unkC = 0;
    g_rtc.unk8 = 0;
    sceRtcSynchronize();
    registerFunctions();
    sceSysconSetAlarmCallback(alarmCallback, NULL);
    sceKernelRegisterSysEventHandler(&rtc_handler);
    return 0;
}
#endif

#if FW_VERSION >= 270
s32 module_reboot_before(void) {
    sceSysconSetAlarmCallback(NULL, NULL);
    sceKernelUnregisterSysEventHandler(&rtc_handler);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/rtc", sceRtcInit);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 sceRtcInit(void) {
    memset(&g_rtc, 0, sizeof(g_rtc));
    g_rtc.cbId = -1;
    registerFunctions();
    g_rtc.unk0 = 0;
    g_rtc.unk4 = 0;
    g_rtc.unkC = 0;
    g_rtc.unk8 = 0;
    sceRtcSynchronize();
    sceSysconSetAlarmCallback(alarmCallback, NULL);
    sceKernelRegisterSysEventHandler(&rtc_handler);
    return 0;
}
#endif

#if FW_VERSION < 270
s32 sceRtcInit(void) {
    memset(&g_rtc, 0, sizeof(g_rtc));
    registerFunctions();
    g_rtc.unk0 = 0;
    g_rtc.unk4 = 0;
    g_rtc.unkC = 0;
    g_rtc.unk8 = 0;
    sceRtcSynchronize();
    sceKernelRegisterSysEventHandler(&rtc_handler);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/rtc", sceRtcEnd);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 sceRtcEnd(void) {
    sceSysconSetAlarmCallback(NULL, NULL);
    sceKernelUnregisterSysEventHandler(&rtc_handler);
    return 0;
}
#endif

#if FW_VERSION < 270
s32 sceRtcEnd(void) {
    sceKernelUnregisterSysEventHandler(&rtc_handler);
    return 0;
}
#endif

s32 sceRtcSuspend(void) {
    return 0;
}

s32 sceRtcResume(void) {
    sceRtcSynchronize();
    return 0;
}

#if FW_VERSION >= 270
s32 sceRtcReset(void) {
    g_rtc.tickValid = 0;
    g_rtc.secureTickValid = 0;
    return 0;
}
#endif

s32 sceRtcSetConf(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 intr = sceKernelCpuSuspendIntr();

    g_rtc.unk0 = arg0;
    g_rtc.unk4 = arg1;
    g_rtc.unkC = arg2;
    g_rtc.unk8 = arg3;
    sceKernelCpuResumeIntr(intr);
    return 0;
}

s32 sceRtcGetAlarmTick(u64 *tick) {
    s32 ret = 0x80000103;

    if (tick != NULL) {
        *tick = g_rtc.alarmTick;
        ret = 0;
    }
    return ret;
}

#if FW_VERSION < 250
s32 sceRtcGetCurrentClock(pspTime *time, s32 tz) {
    u64 tick;
    u32 oldK1 = shiftK1();

    if (k1IsUserMode() && (s32)time < 0) {
        setK1(oldK1);
        return 0x80000023;
    }
    sceRtcGetCurrentTick(&tick);
    sceRtcTickAddMinutes(&tick, &tick, tz);
    sceRtcSetTick(time, &tick);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 270
s32 sceRtcGetCurrentClock(pspTime *time, s32 tz) {
    u64 tick;
    s32 ret;
    u32 oldK1 = shiftK1();

    if (k1IsUserMode() && (s32)time < 0) {
        setK1(oldK1);
        return 0x80000023;
    }
    ret = sceRtcGetCurrentTick(&tick);
    sceRtcTickAddMinutes(&tick, &tick, tz);
    sceRtcSetTick(time, &tick);
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 270
s32 sceRtcGetCurrentClock(pspTime *time, s32 tz) {
    u64 tick;
    s32 ret;
    u32 oldK1 = shiftK1();

    if ((s32)(-k1IsUserMode() & (u32)time) < 0) {
        setK1(oldK1);
        return 0x80000023;
    }
    ret = sceRtcGetCurrentTick(&tick);
    sceRtcTickAddMinutes(&tick, &tick, tz);
    sceRtcSetTick(time, &tick);
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION < 250
s32 sceRtcGetCurrentClockLocalTime(pspTime *time) {
    u32 oldK1 = shiftK1();

    if (k1IsUserMode() && (s32)time < 0) {
        setK1(oldK1);
        return 0x80000023;
    }
    sceRtcGetCurrentClock(time, g_rtc.unkC + g_rtc.unk8);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/rtc", sceRtcGetAccumlativeTime);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 270
s32 sceRtcGetCurrentClockLocalTime(pspTime *time) {
    s32 ret;
    u32 oldK1 = shiftK1();

    if (k1IsUserMode() && (s32)time < 0) {
        setK1(oldK1);
        return 0x80000023;
    }
    ret = sceRtcGetCurrentClock(time, g_rtc.unkC + g_rtc.unk8);
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/rtc", sceRtcGetCurrentClockLocalTime);
#endif

#if FW_VERSION == 100
u64 sceRtcGetAccumlativeTime(void) {
    u64 base = (u32)(g_rtc.clockAdjust * 500000) + g_rtc.clockUs;

    return base + (sceKernelGetSystemTimeWide() - g_rtc.sysTimeAtSync);
}
#endif

#if FW_VERSION >= 150
u64 sceRtcGetAccumlativeTime(void) {
    u64 base = (u64)g_rtc.clockAdjust * 500000 + g_rtc.clockUs;

    return base + (sceKernelGetSystemTimeWide() - g_rtc.sysTimeAtSync);
}
#endif

s32 sceRtcConvertUtcToLocalTime(const u64 *tickUTC, u64 *tickLocal) {
    return sceRtcTickAddMinutes(tickLocal, tickUTC, g_rtc.unkC + g_rtc.unk8);
}

s32 sceRtcConvertLocalTimeToUTC(const u64 *tickLocal, u64 *tickUTC) {
    return sceRtcTickAddMinutes(tickUTC, tickLocal, -(g_rtc.unkC + g_rtc.unk8));
}

#if FW_VERSION < 300
s32 sysEventHandler(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0x400:
        break;
    case 0x100000:
        sceRtcSynchronize();
        break;
    }
    return 0;
}
#endif

s32 sceRtcIsLeapYear(s32 year) {
    s32 ret;

    ret = 0x800001FF;
    if (year > 0) {
        ret = 1;
        if (year != (year / 400) * 400) {
            ret = 0;
            if (year != (year / 100) * 100) {
                ret = (year & 3) == 0;
            }
        }
    }
    return ret;
}

INCLUDE_ASM("nonmatchings/rtc", sceRtcGetDaysInMonth);

INCLUDE_ASM("nonmatchings/rtc", sceRtcCheckValid);

INCLUDE_ASM("nonmatchings/rtc", sceRtcGetDosTime);

INCLUDE_ASM("nonmatchings/rtc", sceRtcGetWin32FileTime);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/rtc", sceRtcGetTime64_t);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/rtc", func_000011E0);
#endif

INCLUDE_ASM("nonmatchings/rtc", sceRtcGetTime_t);

INCLUDE_ASM("nonmatchings/rtc", sceRtcSetTick);

INCLUDE_ASM("nonmatchings/rtc", sceRtcGetTick);

INCLUDE_ASM("nonmatchings/rtc", sceRtcTickAddMonths);

INCLUDE_ASM("nonmatchings/rtc", sceRtcTickAddYears);

u32 sceRtcGetTickResolution(void) {
    return 0xF4240U;
}

s32 sceRtcGetDayOfWeek(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_a3;
    s32 var_a4;

    var_a4 = arg0 - 1;
    var_a3 = arg1 + 0xC;
    if ((u32) (arg1 - 1) >= 2U) {
        var_a4 = arg0;
        var_a3 = arg1;
    }
    return (((var_a4 + ((s32) (var_a4 + ((u32) (var_a4 >> 0x1F) >> 0x1E)) >> 2)) - (var_a4 / 100)) + (var_a4 / 400) + (((var_a3 * 0xD) + 8) / 5) + arg2) % 7;
}

INCLUDE_ASM("nonmatchings/rtc", sceRtcSetDosTime);

INCLUDE_ASM("nonmatchings/rtc", sceRtcSetWin32FileTime);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/rtc", sceRtcSetTime64_t);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/rtc", func_00001E10);
#endif

#if FW_VERSION < 152
s32 sceRtcSetTime_t(pspTime *date, u32 time) {
    u64 tick;
    u32 oldK1 = shiftK1();

    if (k1IsUserMode() && (s32)date < 0) {
        setK1(oldK1);
        return 0x80000023;
    }
    tick = (u64)time * 1000000 + 62135596800000000ULL;
    sceRtcSetTick(date, &tick);
    setK1(oldK1);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/rtc", sceRtcSetTime_t);
#endif

#if FW_VERSION < 270
s32 sceRtcTickAddTicks(u64 *destTick, const u64 *srcTick, s64 numTicks) {
    u32 oldK1 = shiftK1();

    if ((k1IsUserMode() && IS_USER_ADDR(destTick) == 0) || (k1IsUserMode() && IS_USER_ADDR(srcTick) == 0)) {
        setK1(oldK1);
        return 0x80000023;
    }
    *destTick = *srcTick + numTicks;
    setK1(oldK1);
    return 0;
}
#else
s32 sceRtcTickAddTicks(u64 *destTick, const u64 *srcTick, s64 numTicks) {
    u32 oldK1 = shiftK1();

    if (K1_BAD_ADDR(destTick) || K1_BAD_ADDR(srcTick)) {
        setK1(oldK1);
        return 0x80000023;
    }
    *destTick = *srcTick + numTicks;
    setK1(oldK1);
    return 0;
}
#endif

s32 sceRtcTickAddMicroseconds(u64 *destTick, const u64 *srcTick, s64 num) {
    return sceRtcTickAddTicks(destTick, srcTick, num);
}

s32 sceRtcTickAddSeconds(u64 *destTick, const u64 *srcTick, s64 num) {
    return sceRtcTickAddTicks(destTick, srcTick, num * 1000000);
}

s32 sceRtcTickAddMinutes(u64 *destTick, const u64 *srcTick, s64 num) {
    return sceRtcTickAddTicks(destTick, srcTick, num * 60000000);
}

s32 sceRtcTickAddHours(u64 *destTick, const u64 *srcTick, s32 num) {
    return sceRtcTickAddTicks(destTick, srcTick, num * 3600000000ULL);
}

s32 sceRtcTickAddDays(u64 *destTick, const u64 *srcTick, s32 num) {
    return sceRtcTickAddTicks(destTick, srcTick, num * 86400000000ULL);
}

s32 sceRtcTickAddWeeks(u64 *destTick, const u64 *srcTick, s32 num) {
    return sceRtcTickAddTicks(destTick, srcTick, num * 604800000000ULL);
}

s32 sceRtcCompareTick(const u64 *tick1, const u64 *tick2) {
    if (*tick1 < *tick2) {
        return -1;
    }
    if (*tick1 > *tick2) {
        return 1;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/rtc", sceRtcParseDateTime);

INCLUDE_ASM("nonmatchings/rtc", sceRtcParseRFC3339);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/rtc", D_00003EB4);

INCLUDE_RODATA("nonmatchings/rtc", D_00003EB8);

INCLUDE_RODATA("nonmatchings/rtc", D_00003ECC);

INCLUDE_RODATA("nonmatchings/rtc", D_00003EE8);

INCLUDE_RODATA("nonmatchings/rtc", D_00003F00);

INCLUDE_RODATA("nonmatchings/rtc", D_00003F20);

INCLUDE_RODATA("nonmatchings/rtc", D_00003F38);

INCLUDE_RODATA("nonmatchings/rtc", D_00003F50);

INCLUDE_RODATA("nonmatchings/rtc", D_00003F64);

INCLUDE_RODATA("nonmatchings/rtc", D_00003F78);

INCLUDE_RODATA("nonmatchings/rtc", D_00003F8C);

INCLUDE_RODATA("nonmatchings/rtc", D_00003FAC);

INCLUDE_RODATA("nonmatchings/rtc", D_00003FB4);

INCLUDE_RODATA("nonmatchings/rtc", D_0000412C);

INCLUDE_RODATA("nonmatchings/rtc", D_0000413C);

INCLUDE_RODATA("nonmatchings/rtc", D_00004314);

INCLUDE_RODATA("nonmatchings/rtc", D_0000431C);

INCLUDE_RODATA("nonmatchings/rtc", D_00004320);

INCLUDE_RODATA("nonmatchings/rtc", D_00004324);

INCLUDE_RODATA("nonmatchings/rtc", D_00004330);

INCLUDE_RODATA("nonmatchings/rtc", D_0000433C);

INCLUDE_RODATA("nonmatchings/rtc", D_00004340);

INCLUDE_RODATA("nonmatchings/rtc", D_00004348);

INCLUDE_RODATA("nonmatchings/rtc", D_00004350);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/rtc", D_00004360);

INCLUDE_RODATA("nonmatchings/rtc", g_daysInMonth);

INCLUDE_ASM("nonmatchings/rtc", func_00002ED4);

INCLUDE_RODATA("nonmatchings/rtc", D_00004474);

INCLUDE_ASM("nonmatchings/rtc", func_00002F78);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/rtc", D_000045D0_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/rtc", D_000045D0_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/rtc", D_000045D0_v350);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/rtc", D_000045C0_v340);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/rtc", D_000045C0_v330);
#endif

#if FW_VERSION == 311
INCLUDE_RODATA("nonmatchings/rtc", D_000045C0_v311);
#endif

#if FW_VERSION == 310
INCLUDE_RODATA("nonmatchings/rtc", D_000045C0_v310);
#endif

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/rtc", D_000045C0_v303);
#endif

#if FW_VERSION == 302
INCLUDE_RODATA("nonmatchings/rtc", D_000045C0_v302);
#endif

#if FW_VERSION == 301
INCLUDE_RODATA("nonmatchings/rtc", D_000045C0_v301);
#endif

#if FW_VERSION == 300
INCLUDE_RODATA("nonmatchings/rtc", D_000045C0_v300);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/rtc", func_00003038);
#else
INCLUDE_ASM("nonmatchings/rtc", func_000030C4);

INCLUDE_ASM("nonmatchings/rtc", func_00003188);
#endif

s32 parseDigits2(const char *s) {
    s8 c0 = s[0];
    s8 c1 = s[1];

    if (c0 < '0' || c0 > '9' || c1 < '0' || c1 > '9') {
        return -1;
    }
    return (c0 - '0') * 10 + (c1 - '0');
}

s32 parseDigits4(const char *s) {
    s8 c0 = s[0];
    s8 c1 = s[1];
    s8 c2 = s[2];
    s8 c3 = s[3];

    if (c0 < '0' || c0 > '9' || c1 < '0' || c1 > '9' || c2 < '0' || c2 > '9' || c3 < '0' || c3 > '9') {
        return -1;
    }
    return (c0 - '0') * 1000 + (c1 - '0') * 100 + (c2 - '0') * 10 + (c3 - '0');
}

INCLUDE_ASM("nonmatchings/rtc", func_00003374);

INCLUDE_ASM("nonmatchings/rtc", sceRtcFormatRFC2822);

INCLUDE_ASM("nonmatchings/rtc", sceRtcFormatRFC3339);

char *formatDigits2(char *buf, s32 n) {
    buf[0] = (n / 10) % 10 + '0';
    buf[1] = n % 10 + '0';
    return buf + 2;
}

char *formatDigits4(char *buf, s32 n) {
    buf[3] = n % 10 + '0';
    n /= 10;
    buf[2] = n % 10 + '0';
    n /= 10;
    buf[1] = n % 10 + '0';
    n /= 10;
    buf[0] = n % 10 + '0';
    return buf + 4;
}

#if FW_VERSION < 270
s32 sceRtcFormatRFC2822LocalTime(char *pszDateTime, const u64 *pUtc) {
    s32 ret;
    u32 oldK1 = shiftK1();

    if ((k1IsUserMode() && IS_USER_ADDR(pszDateTime) == 0) || (k1IsUserMode() && IS_USER_ADDR(pUtc) == 0)) {
        setK1(oldK1);
        return 0x80000023;
    }
    ret = sceRtcFormatRFC2822(pszDateTime, pUtc, g_rtc.unkC + g_rtc.unk8);
    setK1(oldK1);
    return ret;
}
#else
s32 sceRtcFormatRFC2822LocalTime(char *pszDateTime, const u64 *pUtc) {
    s32 ret;
    u32 oldK1 = shiftK1();

    if (K1_BAD_ADDR(pszDateTime) || K1_BAD_ADDR(pUtc)) {
        setK1(oldK1);
        return 0x80000023;
    }
    ret = sceRtcFormatRFC2822(pszDateTime, pUtc, g_rtc.unkC + g_rtc.unk8);
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION < 270
s32 sceRtcFormatRFC3339LocalTime(char *pszDateTime, const u64 *pUtc) {
    s32 ret;
    u32 oldK1 = shiftK1();

    if ((k1IsUserMode() && IS_USER_ADDR(pszDateTime) == 0) || (k1IsUserMode() && IS_USER_ADDR(pUtc) == 0)) {
        setK1(oldK1);
        return 0x80000023;
    }
    ret = sceRtcFormatRFC3339(pszDateTime, pUtc, g_rtc.unkC + g_rtc.unk8);
    setK1(oldK1);
    return ret;
}
#else
s32 sceRtcFormatRFC3339LocalTime(char *pszDateTime, const u64 *pUtc) {
    s32 ret;
    u32 oldK1 = shiftK1();

    if (K1_BAD_ADDR(pszDateTime) || K1_BAD_ADDR(pUtc)) {
        setK1(oldK1);
        return 0x80000023;
    }
    ret = sceRtcFormatRFC3339(pszDateTime, pUtc, g_rtc.unkC + g_rtc.unk8);
    setK1(oldK1);
    return ret;
}
#endif

INCLUDE_ASM("nonmatchings/rtc", getTimeOfDayHandler);

#if FW_VERSION < 282
s32 registerFunctions(void) {
    return sceKernelRegisterLibcRtcFunc(clockHandler, timeHandler, getTimeOfDayHandler);
}
#else
s32 registerFunctions(void) {
    return sceKernelRegisterRtcFunc(clockHandler, timeHandler, getTimeOfDayHandler, sceRtcGetCurrentSecureTick);
}
#endif

u32 clockHandler(void) {
    u64 tick;

    sceRtcGetCurrentTick(&tick);
    return tick;
}

u32 timeHandler(u32 *t) {
    pspTime date;
    u64 tick;
    u32 ret;

    sceRtcGetCurrentTick(&tick);
    sceRtcSetTick(&date, &tick);
    sceRtcGetTime_t(&date, &ret);
    if (t != NULL) {
        *t = ret;
    }
    return ret;
}

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/rtc", D_00004614);
#else
INCLUDE_RODATA("nonmatchings/rtc", D_000044D4);

INCLUDE_RODATA("nonmatchings/rtc", g_daysInMonth);
#endif

INCLUDE_RODATA("nonmatchings/rtc", D_000044F4);

INCLUDE_RODATA("nonmatchings/rtc", D_0000450C);
