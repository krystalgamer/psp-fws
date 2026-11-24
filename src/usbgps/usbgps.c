/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "usbgps_decls.h"

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00000000);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00000354);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00000488);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", module_start);

INCLUDE_RODATA("tmp/asm/282/usbgps/nonmatchings/usbgps", D_00005650);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", sceUsbGpsOpen);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", sceUsbGpsClose);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", sceUsbGps_driver_A259CD67);

s32 sceUsbGps_driver_268F95CA(u32 arg0) {
    s32 temp_a0;
    s32 var_s0;
    u32 temp_s1;

    var_s0 = 0;
    temp_s1 = shiftK1();
    if (M2C_FIELD(&D_000059B0, s32 *, 0) == 0) {
        var_s0 = 0x80244002;
    } else if (arg0 >= 3U) {
        var_s0 = 0x80244007;
    } else {
        temp_a0 = sceKernelCpuSuspendIntr();
        M2C_FIELD(&D_000059B0, u32 *, 0x157C) = arg0;
        sceKernelCpuResumeIntr(temp_a0);
    }
    setK1(temp_s1);
    return var_s0;
}

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", sceUsbGps_driver_54D26AA4);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", sceUsbGps_driver_69E4AAA8);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", sceUsbGpsGetState);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", sceUsbGpsGetData);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00000E68);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00000F28);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00000F98);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00001274);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_000013B0);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", module_stop);

s32 func_00001504(s32 arg0) {
    func_00000F28(arg0);
    return 0x11E1A300;
}

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00001528);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_000015BC);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_000015E0);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00001708);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00001AF8);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00001B58);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00001DFC);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00001E8C);

INCLUDE_RODATA("tmp/asm/282/usbgps/nonmatchings/usbgps", D_0000574C);

INCLUDE_RODATA("tmp/asm/282/usbgps/nonmatchings/usbgps", D_00005760);

INCLUDE_RODATA("tmp/asm/282/usbgps/nonmatchings/usbgps", D_00005778);

INCLUDE_RODATA("tmp/asm/282/usbgps/nonmatchings/usbgps", D_00005784);

INCLUDE_RODATA("tmp/asm/282/usbgps/nonmatchings/usbgps", D_000057B4);

INCLUDE_RODATA("tmp/asm/282/usbgps/nonmatchings/usbgps", D_000057E4);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00001F1C);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00002144);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_000021A0);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_000022DC);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_000023B8);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00002498);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00002620);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_0000268C);

s32 func_000027AC(void) {
    s32 temp_a3;

    temp_a3 = (sceUsbBus_driver_B1644BE7(&D_00005960) >= 0) ? 0 : -1;
    M2C_VFIELD(&D_00008478, s32, 0xB8) = 0x4E200;
    M2C_VFIELD(&D_00008478, s8, 0xB1) = 0;
    M2C_VFIELD(&D_00008478, s32, 0xBC) = 0;
    M2C_VFIELD(&D_00008478, s32, 0xC0) = 0;
    M2C_VFIELD(&D_00008478, s8, 0xB0) = 0;
    M2C_VFIELD(&D_00008478, s32, 0xB4) = 0;
    return temp_a3;
}

s32 func_00002804(void) {
    return (sceUsbBus_driver_C1E2A540(&D_00005960) >= 0) ? 0 : -1;
}

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00002830);

s32 func_00002888(s32 *arg0) {
    *arg0 = D_0000852C;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_0000289C);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_000028E0);

void func_00002978(void *arg0) {
    void *temp_a2;

    temp_a2 = M2C_FIELD(arg0, void **, 0x20);
    if (((u8) D_00008529 < 0x16U) || (M2C_FIELD(M2C_FIELD(temp_a2, void **, 0x28), u8 *, 2) != 3)) {
        sceKernelSetEventFlag(M2C_FIELD(temp_a2, s32 *, 0xA8), 2U);
    }
}

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_000029C0);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00002A9C);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00002AEC);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00002BD0);

INCLUDE_RODATA("tmp/asm/282/usbgps/nonmatchings/usbgps", D_00005804);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00002E04);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00002F20);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00002F90);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00003118);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00003184);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00003224);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00003340);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_000034C4);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00003544);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00003640);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_000036C8);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00003774);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_0000381C);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00003B78);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00003EB8);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_000040BC);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_000042EC);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_000043F4);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00004514);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00004644);

INCLUDE_RODATA("tmp/asm/282/usbgps/nonmatchings/usbgps", D_00005880);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00004810);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00004A94);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00004BCC);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00004C68);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00004DBC);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00004E48);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00004F0C);

INCLUDE_ASM("tmp/asm/282/usbgps/nonmatchings/usbgps", func_00004FB4);
