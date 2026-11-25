/* cflags: -O2 -frename-registers */
#include "common.h"
#include "rtc_decls.h"

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/rtc", func_00000000_v300);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/rtc", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/rtc", sceRtc_driver_F0B5571C);

INCLUDE_ASM("nonmatchings/rtc", sceRtc_driver_9763C138);

INCLUDE_ASM("nonmatchings/rtc", sceRtc_driver_17C26C00);

INCLUDE_ASM("nonmatchings/rtc", sceRtcSetAlarmTick);

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/rtc", sceRtcIsAlarmed);

INCLUDE_ASM("nonmatchings/rtc", sceRtcRegisterCallback);

INCLUDE_ASM("nonmatchings/rtc", sceRtcUnregisterCallback);
#endif

INCLUDE_ASM("nonmatchings/rtc", sceRtcGetCurrentTick);

INCLUDE_ASM("nonmatchings/rtc", sceRtc_driver_B44BDAED);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/rtc", sceRtcGetLastReincarnatedTime);

INCLUDE_ASM("nonmatchings/rtc", sceRtcGetLastAdjustedTime);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 module_start(void) {
    memset(&D_00004580.unk0, 0, 0x60);
    D_00004580.unk1C = -1;
    func_0000358C();
    D_00004580.unk0 = 0;
    D_00004580.unk8 = 0;
    D_00004580.unk4 = 0;
    D_00004580.unkC = 0;
    sceRtc_driver_F0B5571C();
    sceSyscon_driver_A068B3D0((s32) &func_00000000, 0);
    sceSysEventForKernel_CD9E4BB5(&D_00004530);
    return 0;
}
#endif

#if FW_VERSION < 270
s32 module_start(void) {
    memset(&D_00004580.unk0, 0, 0x58);
    func_0000358C();
    D_00004580.unk0 = 0;
    D_00004580.unk8 = 0;
    D_00004580.unk4 = 0;
    D_00004580.unkC = 0;
    sceRtc_driver_F0B5571C();
    sceSysEventForKernel_CD9E4BB5(&D_00003BF0);
    return 0;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 module_reboot_before(void) {
    sceSyscon_driver_A068B3D0(0, 0);
    sceSysEventForKernel_D7D3FDCD(&D_00004530);
    return 0;
}
#endif

#if FW_VERSION < 270
s32 module_reboot_before(void) {
    sceSysEventForKernel_D7D3FDCD(&D_00003BF0);
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 module_start(void) {
    memset(&D_00004580, 0, 0x60);
    D_00004580.unk1C = -1;
    D_00004580.unk0 = 0;
    D_00004580.unk8 = 0;
    D_00004580.unk4 = 0;
    D_00004580.unkC = 0;
    sceRtc_driver_F0B5571C();
    func_00003D9C();
    sceSyscon_driver_A068B3D0((s32) &func_00000000, 0);
    sceSysEventForKernel_CD9E4BB5(&D_00004540);
    return 0;
}

s32 module_reboot_before(void) {
    sceSyscon_driver_A068B3D0(0, 0);
    sceSysEventForKernel_D7D3FDCD(&D_00004540);
    return 0;
}

INCLUDE_ASM("nonmatchings/rtc", sceRtc_driver_912BEE56);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 sceRtc_driver_912BEE56(void) {
    memset(&D_00004580.unk0, 0, 0x60);
    D_00004580.unk1C = -1;
    func_0000358C();
    D_00004580.unk0 = 0;
    D_00004580.unk8 = 0;
    D_00004580.unk4 = 0;
    D_00004580.unkC = 0;
    sceRtc_driver_F0B5571C();
    sceSyscon_driver_A068B3D0((s32) &func_00000000, 0);
    sceSysEventForKernel_CD9E4BB5(&D_00004530);
    return 0;
}
#endif

#if FW_VERSION < 270
s32 sceRtc_driver_912BEE56(void) {
    memset(&D_00004580.unk0, 0, 0x58);
    func_0000358C();
    D_00004580.unk0 = 0;
    D_00004580.unk8 = 0;
    D_00004580.unk4 = 0;
    D_00004580.unkC = 0;
    sceRtc_driver_F0B5571C();
    sceSysEventForKernel_CD9E4BB5(&D_00003BF0);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/rtc", sceRtc_driver_CE27DE2F);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 sceRtc_driver_CE27DE2F(void) {
    sceSyscon_driver_A068B3D0(0, 0);
    sceSysEventForKernel_D7D3FDCD(&D_00004530);
    return 0;
}
#endif

#if FW_VERSION < 270
s32 sceRtc_driver_CE27DE2F(void) {
    sceSysEventForKernel_D7D3FDCD(&D_00003BF0);
    return 0;
}
#endif

s32 sceRtc_driver_9CC2797E(void) {
    return 0;
}

s32 sceRtc_driver_48D07D70(void) {
    sceRtc_driver_F0B5571C();
    return 0;
}

#if FW_VERSION >= 270
s32 sceRtc_driver_C499AF2F(void) {
    D_00004580.unk14 = 0;
    D_00004580.unk10 = 0;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/rtc", sceRtc_driver_759937C5);

INCLUDE_ASM("nonmatchings/rtc", sceRtcGetAlarmTick);

INCLUDE_ASM("nonmatchings/rtc", sceRtcGetCurrentClock);

INCLUDE_ASM("nonmatchings/rtc", sceRtcGetCurrentClockLocalTime);

INCLUDE_ASM("nonmatchings/rtc", sceRtc_driver_029CA3B3);

INCLUDE_ASM("nonmatchings/rtc", sceRtcConvertUtcToLocalTime);

INCLUDE_ASM("nonmatchings/rtc", sceRtcConvertLocalTimeToUTC);

#if FW_VERSION < 282
s32 func_00000DB0(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0x400:
        break;
    case 0x100000:
        sceRtc_driver_F0B5571C();
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
        sceRtc_driver_F0B5571C();
        break;
    }
    return 0;
}
#endif

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

s32 sceRtcTickAddMicroseconds(void *arg0, void *arg1, s64 arg2) {
    return sceRtcTickAddTicks(arg0, arg1, arg2);
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/rtc", sceRtcTickAddSeconds);

INCLUDE_ASM("nonmatchings/rtc", sceRtcTickAddMinutes);
#else
s32 sceRtcTickAddSeconds(void *arg0, void *arg1, s64 arg2) {
    return sceRtcTickAddTicks(arg0, arg1, arg2 * 0xF4240);
}

s32 sceRtcTickAddMinutes(void *arg0, void *arg1, s64 arg2) {
    return sceRtcTickAddTicks(arg0, arg1, arg2 * 0x03938700);
}
#endif

INCLUDE_ASM("nonmatchings/rtc", sceRtcTickAddHours);

INCLUDE_ASM("nonmatchings/rtc", sceRtcTickAddDays);

INCLUDE_ASM("nonmatchings/rtc", sceRtcTickAddWeeks);

INCLUDE_ASM("nonmatchings/rtc", sceRtcCompareTick);

INCLUDE_ASM("nonmatchings/rtc", sceRtcParseDateTime);

INCLUDE_ASM("nonmatchings/rtc", sceRtcParseRFC3339);

#if FW_VERSION == 300
INCLUDE_RODATA("nonmatchings/rtc", D_00004360);

INCLUDE_RODATA("nonmatchings/rtc", D_000044DC);

INCLUDE_ASM("nonmatchings/rtc", func_00002ED4);

INCLUDE_RODATA("nonmatchings/rtc", D_00004474);

INCLUDE_ASM("nonmatchings/rtc", func_00002F78);

INCLUDE_RODATA("nonmatchings/rtc", D_000045C0_v300);

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
s32 func_000032D0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s8 *, 0) = (s8) (((arg1 / 10) % 10) + 0x30);
    M2C_FIELD(arg0, s8 *, 1) = (s8) ((arg1 % 10) + 0x30);
    return arg0 + 2;
}
#else
s32 func_00003AF8(struct Unk_func_00003AF8_0 *arg0, s32 arg1) {
    arg0->unk0 = (s8) (((arg1 / 10) % 10) + 0x30);
    arg0->unk1 = (s8) ((arg1 % 10) + 0x30);
    return (u8 *)arg0 + 2;
}
#endif

INCLUDE_ASM("nonmatchings/rtc", func_00003B60);

INCLUDE_ASM("nonmatchings/rtc", sceRtcFormatRFC2822LocalTime);

INCLUDE_ASM("nonmatchings/rtc", sceRtcFormatRFC3339LocalTime);

INCLUDE_ASM("nonmatchings/rtc", func_00003D10);

#if FW_VERSION < 282
s32 func_0000358C(void) {
    return UtilsForKernel_7B7ED3FD(&func_00003DD4, &func_00003DF4, &func_00003D10);
}
#else
void func_00003D9C(void) {
    UtilsForKernel_23A0C5BA(&func_00003DD4, &func_00003DF4, &func_00003D10, &sceRtc_driver_B44BDAED);
}
#endif

INCLUDE_ASM("nonmatchings/rtc", func_00003DD4);

INCLUDE_ASM("nonmatchings/rtc", func_00003DF4);

#if FW_VERSION == 300
INCLUDE_RODATA("nonmatchings/rtc", D_00004614);
#else
INCLUDE_RODATA("nonmatchings/rtc", D_000044D4);

INCLUDE_RODATA("nonmatchings/rtc", D_000044DC);
#endif

INCLUDE_RODATA("nonmatchings/rtc", D_000044F4);

INCLUDE_RODATA("nonmatchings/rtc", D_0000450C);
