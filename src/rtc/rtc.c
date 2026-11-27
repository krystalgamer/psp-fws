/* cflags: -O2 -frename-registers */
#include "common.h"
#include "rtc_decls.h"

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
INCLUDE_ASM("nonmatchings/rtc", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/rtc", sceRtcSynchronize);

INCLUDE_ASM("nonmatchings/rtc", sceRtcSetCurrentTick);

INCLUDE_ASM("nonmatchings/rtc", sceRtcSetCurrentSecureTick);

INCLUDE_ASM("nonmatchings/rtc", sceRtcSetAlarmTick);

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/rtc", sceRtcIsAlarmed);

INCLUDE_ASM("nonmatchings/rtc", sceRtcRegisterCallback);

INCLUDE_ASM("nonmatchings/rtc", sceRtcUnregisterCallback);
#endif

INCLUDE_ASM("nonmatchings/rtc", sceRtcGetCurrentTick);

INCLUDE_ASM("nonmatchings/rtc", sceRtcGetCurrentSecureTick);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/rtc", sceRtcGetLastReincarnatedTime);

INCLUDE_ASM("nonmatchings/rtc", sceRtcGetLastAdjustedTime);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 module_start(void) {
    memset(&D_00004580, 0, sizeof(D_00004580));
    D_00004580.cbId = -1;
    func_0000358C();
    D_00004580.unk0 = 0;
    D_00004580.unk8 = 0;
    D_00004580.unk4 = 0;
    D_00004580.unkC = 0;
    sceRtcSynchronize();
    sceSysconSetAlarmCallback(func_00000000, NULL);
    sceKernelRegisterSysEventHandler(&D_00004530);
    return 0;
}
#endif

#if FW_VERSION < 270
s32 module_start(void) {
    memset(&D_00004580, 0, sizeof(D_00004580));
    func_0000358C();
    D_00004580.unk0 = 0;
    D_00004580.unk8 = 0;
    D_00004580.unk4 = 0;
    D_00004580.unkC = 0;
    sceRtcSynchronize();
    sceKernelRegisterSysEventHandler(&D_00003BF0);
    return 0;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 module_reboot_before(void) {
    sceSysconSetAlarmCallback(NULL, NULL);
    sceKernelUnregisterSysEventHandler(&D_00004530);
    return 0;
}
#endif

#if FW_VERSION < 270
s32 module_reboot_before(void) {
    sceKernelUnregisterSysEventHandler(&D_00003BF0);
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 module_start(void) {
    memset(&D_00004580, 0, sizeof(D_00004580));
    D_00004580.cbId = -1;
    D_00004580.unk0 = 0;
    D_00004580.unk8 = 0;
    D_00004580.unk4 = 0;
    D_00004580.unkC = 0;
    sceRtcSynchronize();
    func_00003D9C();
    sceSysconSetAlarmCallback(func_00000000, NULL);
    sceKernelRegisterSysEventHandler(&D_00004540);
    return 0;
}

s32 module_reboot_before(void) {
    sceSysconSetAlarmCallback(NULL, NULL);
    sceKernelUnregisterSysEventHandler(&D_00004540);
    return 0;
}

INCLUDE_ASM("nonmatchings/rtc", sceRtcInit);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 sceRtcInit(void) {
    memset(&D_00004580, 0, sizeof(D_00004580));
    D_00004580.cbId = -1;
    func_0000358C();
    D_00004580.unk0 = 0;
    D_00004580.unk8 = 0;
    D_00004580.unk4 = 0;
    D_00004580.unkC = 0;
    sceRtcSynchronize();
    sceSysconSetAlarmCallback(func_00000000, NULL);
    sceKernelRegisterSysEventHandler(&D_00004530);
    return 0;
}
#endif

#if FW_VERSION < 270
s32 sceRtcInit(void) {
    memset(&D_00004580, 0, sizeof(D_00004580));
    func_0000358C();
    D_00004580.unk0 = 0;
    D_00004580.unk8 = 0;
    D_00004580.unk4 = 0;
    D_00004580.unkC = 0;
    sceRtcSynchronize();
    sceKernelRegisterSysEventHandler(&D_00003BF0);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/rtc", sceRtcEnd);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 sceRtcEnd(void) {
    sceSysconSetAlarmCallback(NULL, NULL);
    sceKernelUnregisterSysEventHandler(&D_00004530);
    return 0;
}
#endif

#if FW_VERSION < 270
s32 sceRtcEnd(void) {
    sceKernelUnregisterSysEventHandler(&D_00003BF0);
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
    D_00004580.secureTickValid = 0;
    D_00004580.tickValid = 0;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/rtc", sceRtcSetConf);

INCLUDE_ASM("nonmatchings/rtc", sceRtcGetAlarmTick);

INCLUDE_ASM("nonmatchings/rtc", sceRtcGetCurrentClock);

INCLUDE_ASM("nonmatchings/rtc", sceRtcGetCurrentClockLocalTime);

INCLUDE_ASM("nonmatchings/rtc", sceRtcGetAccumlativeTime);

INCLUDE_ASM("nonmatchings/rtc", sceRtcConvertUtcToLocalTime);

INCLUDE_ASM("nonmatchings/rtc", sceRtcConvertLocalTimeToUTC);

#if FW_VERSION < 282
s32 func_00000DB0(s32 arg0) {
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

#if FW_VERSION == 282
s32 func_0000138C(s32 arg0) {
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

INCLUDE_ASM("nonmatchings/rtc", sceRtcSetTime_t);

INCLUDE_ASM("nonmatchings/rtc", sceRtcTickAddTicks);

s32 sceRtcTickAddMicroseconds(u64 *destTick, const u64 *srcTick, s64 num) {
    return sceRtcTickAddTicks(destTick, srcTick, num);
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/rtc", sceRtcTickAddSeconds);

INCLUDE_ASM("nonmatchings/rtc", sceRtcTickAddMinutes);
#else
s32 sceRtcTickAddSeconds(u64 *destTick, const u64 *srcTick, s64 num) {
    return sceRtcTickAddTicks(destTick, srcTick, num * 1000000);
}

s32 sceRtcTickAddMinutes(u64 *destTick, const u64 *srcTick, s64 num) {
    return sceRtcTickAddTicks(destTick, srcTick, num * 60000000);
}
#endif

INCLUDE_ASM("nonmatchings/rtc", sceRtcTickAddHours);

INCLUDE_ASM("nonmatchings/rtc", sceRtcTickAddDays);

INCLUDE_ASM("nonmatchings/rtc", sceRtcTickAddWeeks);

INCLUDE_ASM("nonmatchings/rtc", sceRtcCompareTick);

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

INCLUDE_RODATA("nonmatchings/rtc", D_000044DC);

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

INCLUDE_ASM("nonmatchings/rtc", func_0000328C);

INCLUDE_ASM("nonmatchings/rtc", func_000032D4);

INCLUDE_ASM("nonmatchings/rtc", func_00003374);

INCLUDE_ASM("nonmatchings/rtc", sceRtcFormatRFC2822);

INCLUDE_ASM("nonmatchings/rtc", sceRtcFormatRFC3339);

#if FW_VERSION < 282
char *func_000032D0(char *buf, s32 n) {
    buf[0] = (n / 10) % 10 + '0';
    buf[1] = n % 10 + '0';
    return buf + 2;
}
#else
char *func_00003AF8(char *buf, s32 n) {
    buf[0] = (n / 10) % 10 + '0';
    buf[1] = n % 10 + '0';
    return buf + 2;
}
#endif

INCLUDE_ASM("nonmatchings/rtc", func_00003B60);

INCLUDE_ASM("nonmatchings/rtc", sceRtcFormatRFC2822LocalTime);

INCLUDE_ASM("nonmatchings/rtc", sceRtcFormatRFC3339LocalTime);

INCLUDE_ASM("nonmatchings/rtc", func_00003D10);

#if FW_VERSION < 282
s32 func_0000358C(void) {
    return sceKernelRegisterLibcRtcFunc(func_00003DD4, func_00003DF4, func_00003D10);
}
#else
void func_00003D9C(void) {
    sceKernelRegisterRtcFunc(func_00003DD4, func_00003DF4, func_00003D10, sceRtcGetCurrentSecureTick);
}
#endif

INCLUDE_ASM("nonmatchings/rtc", func_00003DD4);

INCLUDE_ASM("nonmatchings/rtc", func_00003DF4);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/rtc", D_00004614);
#else
INCLUDE_RODATA("nonmatchings/rtc", D_000044D4);

INCLUDE_RODATA("nonmatchings/rtc", D_000044DC);
#endif

INCLUDE_RODATA("nonmatchings/rtc", D_000044F4);

INCLUDE_RODATA("nonmatchings/rtc", D_0000450C);
