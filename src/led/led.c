/* cflags: -O2 -frename-registers */
#include "common.h"
#include "led_decls.h"

INCLUDE_ASM("nonmatchings/led", func_00000000);

INCLUDE_RODATA("nonmatchings/led", D_00000A90);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/led", func_00000118);
#else
INCLUDE_ASM("nonmatchings/led", func_00000144);
#endif

INCLUDE_ASM("nonmatchings/led", sceLed_driver_EA24BE03);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/led", module_start);
#else
s32 module_start(void) {
    sceSyscon_driver_18BFBE65(0, 1);
    sceSyscon_driver_18BFBE65(1, 1);
    sceGpio_driver_317D9D2C(6, 0);
    sceGpio_driver_317D9D2C(7, 0);
    sceKernelRegisterSubIntrHandler(0x1E, 0x19, &func_00000000, 0);
    sceKernelEnableSubIntr(0x1E, 0x19);
    sceSysEventForKernel_CD9E4BB5(&D_000008A0);
    return 0;
}
#endif

#if FW_VERSION < 282
s32 module_reboot_before(void) {
    sceSysEventForKernel_D7D3FDCD(&D_000008A0);
    sceKernelReleaseSubIntrHandler(0x1E, 0x19);
    sceGpio_driver_103C3EB2(0xC0);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/led", module_reboot_before);
#endif

INCLUDE_ASM("nonmatchings/led", sceLed_driver_B0B6A883);

INCLUDE_ASM("nonmatchings/led", sceLed_driver_A8542C48);

#if FW_VERSION < 282
s32 sceLed_driver_DE91D3A4(void) {
    sceKernelDisableSubIntr(0x1E, 0x19);
    sceGpio_driver_317D9D2C(6, 2);
    if (sceSyscon_driver_EC37C549() != 0) {
        sceGpio_driver_310F0CCF(0x80);
    } else {
        sceGpio_driver_103C3EB2(0x80);
    }
    return 0;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/led", sceLed_driver_DE91D3A4);
#endif

#if FW_VERSION >= 300
s32 sceLed_driver_DE91D3A4(void) {
    s32 var_a2;

    sceKernelDisableSubIntr(0x1E, 0x19);
    sceGpio_driver_317D9D2C(6, 2);
    var_a2 = 0;
    if (sceSyscon_driver_EC37C549() != 0) {
        sceSyscon_driver_18BFBE65(1, 0);
        var_a2 = 1;
    }
    if (var_a2 != D_00000B80) {
        sceGpio_driver_310F0CCF(0x80);
    } else {
        sceGpio_driver_103C3EB2(0x80);
    }
    return 0;
}
#endif

#if FW_VERSION < 282
s32 sceLed_driver_A13B3D38(void) {
    sceGpio_driver_103C3EB2(0xC0);
    sceGpio_driver_317D9D2C(6, 0);
    sceGpio_driver_317D9D2C(7, 0);
    sceSyscon_driver_18BFBE65(0, 1);
    sceSyscon_driver_18BFBE65(1, 1);
    sceKernelEnableSubIntr(0x1E, 0x19);
    return 0;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/led", sceLed_driver_A13B3D38);
#endif

#if FW_VERSION >= 300
s32 sceLed_driver_A13B3D38(void) {
    if (M2C_VFIELD(&D_00000B30, s32, 0) != 0) {
        sceGpio_driver_310F0CCF(0x40);
    } else {
        sceGpio_driver_103C3EB2(0x40);
    }
    if (M2C_VFIELD(&D_00000B30, s32, 0x50) != 0) {
        sceGpio_driver_310F0CCF(0x80);
    } else {
        sceGpio_driver_103C3EB2(0x80);
    }
    sceGpio_driver_317D9D2C(6, 0);
    sceGpio_driver_317D9D2C(7, 0);
    sceSyscon_driver_18BFBE65(0, 1);
    sceSyscon_driver_18BFBE65(1, 1);
    sceKernelEnableSubIntr(0x1E, 0x19);
    return 0;
}
#endif

#if FW_VERSION < 282
s32 func_00000590(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0x100000:
        sceGpio_driver_103C3EB2(0xC0);
        sceGpio_driver_317D9D2C(6, 0);
        sceGpio_driver_317D9D2C(7, 0);
        sceSyscon_driver_18BFBE65(0, 1);
        sceSyscon_driver_18BFBE65(1, 1);
        sceKernelEnableSubIntr(0x1E, 0x19);
        break;
    case 0x400A:
        sceKernelDisableSubIntr(0x1E, 0x19);
        sceGpio_driver_317D9D2C(6, 2);
        if (sceSyscon_driver_EC37C549() != 0) {
            sceGpio_driver_310F0CCF(0x80);
        } else {
            sceGpio_driver_103C3EB2(0x80);
        }
        break;
    }
    return 0;
}
#else
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
#endif
