/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "usbgps_decls.h"

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/usbgps", func_00000000);

INCLUDE_ASM("nonmatchings/usbgps", func_00000354);

INCLUDE_ASM("nonmatchings/usbgps", func_00000488);
#endif

INCLUDE_ASM("nonmatchings/usbgps", module_start);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/usbgps", func_000000AC);

INCLUDE_RODATA("nonmatchings/usbgps", D_00004E58);

INCLUDE_RODATA("nonmatchings/usbgps", D_00004E70);

INCLUDE_RODATA("nonmatchings/usbgps", D_00004E8C);

INCLUDE_RODATA("nonmatchings/usbgps", D_00004EA4);

INCLUDE_RODATA("nonmatchings/usbgps", D_00004EC0);

INCLUDE_RODATA("nonmatchings/usbgps", D_00004ECC);
#else
INCLUDE_RODATA("nonmatchings/usbgps", D_00005650);
#endif

INCLUDE_ASM("nonmatchings/usbgps", sceUsbGpsOpen);

INCLUDE_ASM("nonmatchings/usbgps", sceUsbGpsClose);

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/usbgps", D_00005518);

INCLUDE_RODATA("nonmatchings/usbgps", D_00005520);

INCLUDE_RODATA("nonmatchings/usbgps", D_00005528);

INCLUDE_RODATA("nonmatchings/usbgps", D_00005530);

INCLUDE_ASM("nonmatchings/usbgps", sceUsbGps_63D1F89D);
#else
INCLUDE_ASM("nonmatchings/usbgps", sceUsbGps_driver_A259CD67);
#endif

#if FW_VERSION >= 330
s32 sceUsbGps_driver_268F95CA(u32 arg0) {
    s32 temp_a0;
    s32 var_s0;
    u32 temp_s1;

    var_s0 = 0;
    temp_s1 = shiftK1();
    if (D_000059B0.unk0 == 0) {
        var_s0 = 0x80244002;
    } else if (arg0 >= 3U) {
        var_s0 = 0x80244007;
    } else {
        temp_a0 = sceKernelCpuSuspendIntr();
        M2C_FIELD(&D_000059B0, u32 *, 0xD54) = arg0;
        sceKernelCpuResumeIntr(temp_a0);
    }
    setK1(temp_s1);
    return var_s0;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
s32 sceUsbGps_driver_268F95CA(u32 arg0) {
    s32 temp_a0;
    s32 var_s0;
    u32 temp_s1;

    var_s0 = 0;
    temp_s1 = shiftK1();
    if (D_000059B0.unk0 == 0) {
        var_s0 = 0x80244002;
    } else if (arg0 >= 3U) {
        var_s0 = 0x80244007;
    } else {
        temp_a0 = sceKernelCpuSuspendIntr();
        M2C_FIELD(&D_000059B0, u32 *, 0x1558) = arg0;
        sceKernelCpuResumeIntr(temp_a0);
    }
    setK1(temp_s1);
    return var_s0;
}
#endif

#if FW_VERSION < 300
s32 sceUsbGps_driver_268F95CA(u32 arg0) {
    s32 temp_a0;
    s32 var_s0;
    u32 temp_s1;

    var_s0 = 0;
    temp_s1 = shiftK1();
    if (D_000059B0.unk0 == 0) {
        var_s0 = 0x80244002;
    } else if (arg0 >= 3U) {
        var_s0 = 0x80244007;
    } else {
        temp_a0 = sceKernelCpuSuspendIntr();
        D_000059B0.unk157C = arg0;
        sceKernelCpuResumeIntr(temp_a0);
    }
    setK1(temp_s1);
    return var_s0;
}
#endif

INCLUDE_ASM("nonmatchings/usbgps", sceUsbGps_driver_54D26AA4);

INCLUDE_ASM("nonmatchings/usbgps", sceUsbGps_driver_69E4AAA8);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/usbgps", sceUsbGps_driver_9D8F99E8);

INCLUDE_ASM("nonmatchings/usbgps", sceUsbGps_driver_31F95CDE);
#endif

INCLUDE_ASM("nonmatchings/usbgps", sceUsbGpsGetState);

INCLUDE_ASM("nonmatchings/usbgps", sceUsbGpsGetData);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/usbgps", func_00000BCC);
#else
INCLUDE_ASM("nonmatchings/usbgps", func_00000E68);
#endif

INCLUDE_ASM("nonmatchings/usbgps", func_00000F28);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/usbgps", func_00000D64);

INCLUDE_ASM("nonmatchings/usbgps", func_000011B0);

INCLUDE_ASM("nonmatchings/usbgps", func_00001344);

INCLUDE_ASM("nonmatchings/usbgps", func_00001360);
#else
INCLUDE_ASM("nonmatchings/usbgps", func_00000F98);

INCLUDE_ASM("nonmatchings/usbgps", func_00001274);

INCLUDE_ASM("nonmatchings/usbgps", func_000013B0);
#endif

INCLUDE_ASM("nonmatchings/usbgps", module_stop);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/usbgps", syslib_ADF12745);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/usbgps", sceUsbGps_driver_A259CD67);
#endif

s32 func_00001504(s32 arg0) {
    func_00000F28(arg0);
    return 0x11E1A300;
}

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/usbgps", func_00001528);
#endif

INCLUDE_ASM("nonmatchings/usbgps", func_000015BC);

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/usbgps", func_000017FC);

INCLUDE_ASM("nonmatchings/usbgps", func_00001914);
#else
INCLUDE_ASM("nonmatchings/usbgps", func_000015E0);

INCLUDE_ASM("nonmatchings/usbgps", func_00001708);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/usbgps", func_00001A80);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/usbgps", func_00001C60);
#endif

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/usbgps", func_00001AF8);
#endif

INCLUDE_ASM("nonmatchings/usbgps", func_00001B58);

INCLUDE_ASM("nonmatchings/usbgps", func_00001DFC);

INCLUDE_ASM("nonmatchings/usbgps", func_00001E8C);

INCLUDE_RODATA("nonmatchings/usbgps", D_0000574C);

INCLUDE_RODATA("nonmatchings/usbgps", D_00005760);

INCLUDE_RODATA("nonmatchings/usbgps", D_00005778);

INCLUDE_RODATA("nonmatchings/usbgps", D_00005784);

INCLUDE_RODATA("nonmatchings/usbgps", D_000057B4);

INCLUDE_RODATA("nonmatchings/usbgps", D_000057E4);

INCLUDE_ASM("nonmatchings/usbgps", func_00001F1C);

INCLUDE_ASM("nonmatchings/usbgps", func_00002144);

INCLUDE_ASM("nonmatchings/usbgps", func_000021A0);

INCLUDE_ASM("nonmatchings/usbgps", func_000022DC);

INCLUDE_ASM("nonmatchings/usbgps", func_000023B8);

INCLUDE_ASM("nonmatchings/usbgps", func_00002498);

INCLUDE_ASM("nonmatchings/usbgps", func_00002620);

INCLUDE_ASM("nonmatchings/usbgps", func_0000268C);

s32 func_000027AC(void) {
    s32 temp_a3;

    temp_a3 = (sceUsbBus_driver_B1644BE7(&D_00005960) >= 0) ? 0 : -1;
    D_00008478.unkB8 = 0x4E200;
    D_00008478.unkB1 = 0;
    D_00008478.unkBC = 0;
    D_00008478.unkC0 = 0;
    D_00008478.unkB0 = 0;
    D_00008478.unkB4 = 0;
    return temp_a3;
}

s32 func_00002804(void) {
    return (sceUsbBus_driver_C1E2A540(&D_00005960) >= 0) ? 0 : -1;
}

INCLUDE_ASM("nonmatchings/usbgps", func_00002830);

s32 func_00002888(s32 *arg0) {
    *arg0 = D_0000852C;
    return 0;
}

INCLUDE_ASM("nonmatchings/usbgps", func_0000289C);

INCLUDE_ASM("nonmatchings/usbgps", func_000028E0);

void func_00002978(struct Unk_func_00002978_0 *arg0) {
    struct Unk_func_00002978_temp_a2 *temp_a2;

    temp_a2 = arg0->unk20;
    if (((u8) D_00008529 < 0x16U) || (temp_a2->unk28->unk2 != 3)) {
        sceKernelSetEventFlag(temp_a2->unkA8, 2U);
    }
}

INCLUDE_ASM("nonmatchings/usbgps", func_000029C0);

INCLUDE_ASM("nonmatchings/usbgps", func_00002A9C);

INCLUDE_ASM("nonmatchings/usbgps", func_00002AEC);

INCLUDE_ASM("nonmatchings/usbgps", func_00002BD0);

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/usbgps", func_00003024);

INCLUDE_ASM("nonmatchings/usbgps", func_00003158);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/usbgps", D_00004FF4);
#endif

INCLUDE_RODATA("nonmatchings/usbgps", D_00005804);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/usbgps", D_0000502C);

INCLUDE_RODATA("nonmatchings/usbgps", D_00005044);
#endif

INCLUDE_ASM("nonmatchings/usbgps", func_00002E04);

INCLUDE_ASM("nonmatchings/usbgps", func_00002F20);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/usbgps", func_00002EF4);
#else
INCLUDE_ASM("nonmatchings/usbgps", func_00002F90);
#endif

INCLUDE_ASM("nonmatchings/usbgps", func_00003118);

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/usbgps", func_00003528);
#else
INCLUDE_ASM("nonmatchings/usbgps", func_00003184);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/usbgps", func_000030A0);
#endif

INCLUDE_ASM("nonmatchings/usbgps", func_00003224);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/usbgps", func_000032A0);

INCLUDE_ASM("nonmatchings/usbgps", func_00003460);
#else
INCLUDE_ASM("nonmatchings/usbgps", func_00003340);

INCLUDE_ASM("nonmatchings/usbgps", func_000034C4);
#endif

INCLUDE_ASM("nonmatchings/usbgps", func_00003544);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/usbgps", func_000035D4);
#else
INCLUDE_ASM("nonmatchings/usbgps", func_00003640);

INCLUDE_ASM("nonmatchings/usbgps", func_000036C8);

INCLUDE_ASM("nonmatchings/usbgps", func_00003774);

INCLUDE_ASM("nonmatchings/usbgps", func_0000381C);

INCLUDE_ASM("nonmatchings/usbgps", func_00003B78);
#endif

INCLUDE_ASM("nonmatchings/usbgps", func_00003EB8);

INCLUDE_ASM("nonmatchings/usbgps", func_000040BC);

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/usbgps", func_000042EC);

INCLUDE_ASM("nonmatchings/usbgps", func_000043F4);

INCLUDE_ASM("nonmatchings/usbgps", func_00004514);
#endif

INCLUDE_ASM("nonmatchings/usbgps", func_00004644);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/usbgps", func_00003F18);
#else
INCLUDE_RODATA("nonmatchings/usbgps", D_00005880);

INCLUDE_ASM("nonmatchings/usbgps", func_00004810);
#endif

INCLUDE_ASM("nonmatchings/usbgps", func_00004A94);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/usbgps", func_00004264);

INCLUDE_ASM("nonmatchings/usbgps", func_00004338);
#else
INCLUDE_ASM("nonmatchings/usbgps", func_00004BCC);
#endif

INCLUDE_ASM("nonmatchings/usbgps", func_00004C68);

INCLUDE_ASM("nonmatchings/usbgps", func_00004DBC);

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/usbgps", func_00004E48);

INCLUDE_ASM("nonmatchings/usbgps", func_00004F0C);
#endif

INCLUDE_ASM("nonmatchings/usbgps", func_00004FB4);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/usbgps", func_000046CC);

s32 func_0000477C(void) {
    s32 var_v0;

    var_v0 = func_00002620((s32) &D_0000502C, 0x17);
    if (var_v0 >= 0) {
        var_v0 = __builtin_allegrex_min(func_00004C68(0xA7), 0);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/usbgps", func_000047B8);

INCLUDE_ASM("nonmatchings/usbgps", func_0000482C);
#endif
