/* cflags: -O2 -frename-registers */
#include "common.h"
#include "led_decls.h"

INCLUDE_ASM("tmp/asm/282/led/nonmatchings/led", func_00000000);

INCLUDE_RODATA("tmp/asm/282/led/nonmatchings/led", D_00000A90);

INCLUDE_ASM("tmp/asm/282/led/nonmatchings/led", func_00000144);

INCLUDE_ASM("tmp/asm/282/led/nonmatchings/led", sceLed_driver_EA24BE03);

INCLUDE_ASM("tmp/asm/282/led/nonmatchings/led", module_start);

INCLUDE_ASM("tmp/asm/282/led/nonmatchings/led", module_reboot_before);

INCLUDE_ASM("tmp/asm/282/led/nonmatchings/led", sceLed_driver_B0B6A883);

INCLUDE_ASM("tmp/asm/282/led/nonmatchings/led", sceLed_driver_A8542C48);

INCLUDE_ASM("tmp/asm/282/led/nonmatchings/led", sceLed_driver_DE91D3A4);

INCLUDE_ASM("tmp/asm/282/led/nonmatchings/led", sceLed_driver_A13B3D38);

s32 func_00000800(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0x100000:
        sceLed_driver_A13B3D38();
        break;
    case 0x400A:
        sceLed_driver_DE91D3A4();
        break;
    }
    return 0;
}
