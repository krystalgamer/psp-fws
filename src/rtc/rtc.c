/* cflags: -O2 -frename-registers */
#include "common.h"
#include "rtc_decls.h"

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", func_00000000);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtc_driver_F0B5571C);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtc_driver_9763C138);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtc_driver_17C26C00);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcSetAlarmTick);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcIsAlarmed);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcRegisterCallback);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcUnregisterCallback);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcGetCurrentTick);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtc_driver_B44BDAED);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcGetLastReincarnatedTime);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcGetLastAdjustedTime);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", module_start);

s32 module_reboot_before(void) {
    sceSyscon_driver_A068B3D0(0, 0);
    sceSysEventForKernel_D7D3FDCD(&D_00004540);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtc_driver_912BEE56);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtc_driver_CE27DE2F);

s32 sceRtc_driver_9CC2797E(void) {
    return 0;
}

s32 sceRtc_driver_48D07D70(void) {
    sceRtc_driver_F0B5571C();
    return 0;
}

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtc_driver_C499AF2F);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtc_driver_759937C5);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcGetAlarmTick);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcGetCurrentClock);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcGetCurrentClockLocalTime);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtc_driver_029CA3B3);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcConvertUtcToLocalTime);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcConvertLocalTimeToUTC);

s32 func_0000138C(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0x400:
        break;
    case 0x100000:
        sceRtc_driver_F0B5571C();
        break;
    }
    return 0;
}

s32 sceRtcIsLeapYear(s32 arg0) {
    s32 var_a1;

    var_a1 = 0x800001FF;
    if (arg0 > 0) {
        var_a1 = 1;
        if (arg0 != ((arg0 / 400) * 0x190)) {
            var_a1 = 0;
            if (arg0 != ((arg0 / 100) * 0x64)) {
                var_a1 = (arg0 & 3) == 0;
            }
        }
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcGetDaysInMonth);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcCheckValid);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcGetDosTime);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcGetWin32FileTime);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcGetTime64_t);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcGetTime_t);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcSetTick);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcGetTick);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcTickAddMonths);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcTickAddYears);

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

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcSetDosTime);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcSetWin32FileTime);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcSetTime64_t);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcSetTime_t);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcTickAddTicks);

s32 sceRtcTickAddMicroseconds(void *arg0, void *arg1, s64 arg2) {
    return sceRtcTickAddTicks(arg0, arg1, arg2);
}

s32 sceRtcTickAddSeconds(void *arg0, void *arg1, s64 arg2) {
    return sceRtcTickAddTicks(arg0, arg1, arg2 * 0xF4240);
}

s32 sceRtcTickAddMinutes(void *arg0, void *arg1, s64 arg2) {
    return sceRtcTickAddTicks(arg0, arg1, arg2 * 0x03938700);
}

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcTickAddHours);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcTickAddDays);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcTickAddWeeks);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcCompareTick);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcParseDateTime);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcParseRFC3339);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", func_000030C4);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", func_00003188);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", func_0000328C);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", func_000032D4);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", func_00003374);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcFormatRFC2822);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcFormatRFC3339);

s32 func_00003AF8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s8 *, 0) = (s8) (((arg1 / 10) % 10) + 0x30);
    M2C_FIELD(arg0, s8 *, 1) = (s8) ((arg1 % 10) + 0x30);
    return arg0 + 2;
}

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", func_00003B60);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcFormatRFC2822LocalTime);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", sceRtcFormatRFC3339LocalTime);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", func_00003D10);

void func_00003D9C(void) {
    UtilsForKernel_23A0C5BA(&func_00003DD4, &func_00003DF4, &func_00003D10, &sceRtc_driver_B44BDAED);
}

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", func_00003DD4);

INCLUDE_ASM("tmp/asm/282/rtc/nonmatchings/rtc", func_00003DF4);

INCLUDE_RODATA("tmp/asm/282/rtc/nonmatchings/rtc", D_000044D4);

INCLUDE_RODATA("tmp/asm/282/rtc/nonmatchings/rtc", D_000044DC);

INCLUDE_RODATA("tmp/asm/282/rtc/nonmatchings/rtc", D_000044F4);

INCLUDE_RODATA("tmp/asm/282/rtc/nonmatchings/rtc", D_0000450C);
