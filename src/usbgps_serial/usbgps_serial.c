/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "usbgps_serial_decls.h"

s8 *func_00000000(s8 *arg0, s32 arg1) {
    s32 temp_a5;
    s8 *var_v1;
    u32 var_a1;

    var_a1 = arg1 & 0xFF;
    var_v1 = arg0;
    if (var_a1 != 0) {
        do {
            temp_a5 = var_a1 & 0xF;
            if (temp_a5 < 0xA) {
                *var_v1 = temp_a5 + 0x30;
            } else {
                *var_v1 = temp_a5 + 0x37;
            }
            var_a1 = var_a1 >> 4;
            var_v1 += 1;
        } while (var_a1 != 0);
    }
    return arg0;
}

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_00000040);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_00000354);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_00000488);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", module_start);

INCLUDE_RODATA("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", D_00004C64);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", sceUsbGpsOpen);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", sceUsbGpsClose);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", sceUsbGps_driver_A259CD67);

s32 sceUsbGps_driver_268F95CA(u32 arg0) {
    s32 temp_a0;
    s32 var_s0;
    u32 temp_s1;

    var_s0 = 0;
    temp_s1 = shiftK1();
    if (M2C_FIELD(&D_00005260, s32 *, 0) == 0) {
        var_s0 = 0x80244002;
    } else if (arg0 >= 3U) {
        var_s0 = 0x80244007;
    } else {
        temp_a0 = sceKernelCpuSuspendIntr();
        M2C_FIELD(&D_00005260, u32 *, 0x157C) = arg0;
        sceKernelCpuResumeIntr(temp_a0);
    }
    setK1(temp_s1);
    return var_s0;
}

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", sceUsbGps_driver_54D26AA4);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", sceUsbGps_driver_69E4AAA8);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", sceUsbGpsGetState);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", sceUsbGpsGetData);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_00000E68);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_00000F28);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_00000F98);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_00001274);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_000013B0);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", module_stop);

s32 func_00001504(s32 arg0) {
    func_00000F28(arg0);
    return 0x11E1A300;
}

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_00001528);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_000015B0);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_000015D4);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_000016FC);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_00001AEC);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_00001B4C);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_00001DF0);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_00001E54);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_00002014);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_00002280);

void func_000022CC(void) {
    func_00002E50();
}

void func_000022E8(void) {
    func_00002928();
}

s32 func_00002304(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_0000230C);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_00002448);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_000025DC);

INCLUDE_RODATA("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", D_00004D74);

INCLUDE_RODATA("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", D_00004D88);

INCLUDE_RODATA("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", D_00004DA0);

INCLUDE_RODATA("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", D_00004DB8);

INCLUDE_RODATA("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", D_00004E00);

INCLUDE_RODATA("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", D_00004E40);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_00002678);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_00002928);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_00002A74);

INCLUDE_RODATA("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", D_00004EB8);

INCLUDE_RODATA("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", D_00004EE0);

s32 func_00002D4C(void) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceUsbBus_driver_B1644BE7(&D_00005210);
    var_v1 = 0;
    if (temp_v0 < 0) {
        KDebugForKernel_84F370BC("usbserial ERROR : cannot register : 0x%08x\n", temp_v0);
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00002D94(void) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceUsbBus_driver_C1E2A540(&D_00005210);
    var_v1 = 0;
    if (temp_v0 < 0) {
        KDebugForKernel_84F370BC("usbserial ERROR : cannot unregister : 0x%08x\n", temp_v0);
        var_v1 = 1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_00002DDC);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_00002E50);

s32 func_00002EB8(void) {
    return 0;
}

s32 func_00002EC0(s32 *arg0) {
    *arg0 = 0;
    return 0;
}

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_00002ECC);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_00002F14);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_00002F88);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_00002FE4);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_000030D4);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_000031F0);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_0000332C);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_000035D4);

INCLUDE_RODATA("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", D_00004FE4);

INCLUDE_RODATA("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", D_00004FEC);

INCLUDE_RODATA("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", D_00004FF4);

INCLUDE_RODATA("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", D_00004FFC);

INCLUDE_RODATA("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", D_00005004);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_00003784);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_00003908);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_00003BB4);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_00003E80);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_00003FE8);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_000046D0);

INCLUDE_ASM("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", func_000046F8);

s32 func_00004754(void) {
    return 0;
}

INCLUDE_RODATA("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", D_00005134);

INCLUDE_RODATA("tmp/asm/270/usbgps_serial/nonmatchings/usbgps_serial", D_00005138);
