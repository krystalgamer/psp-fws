/* cflags: -O2 -frename-registers */
#include "common.h"
#include "led_decls.h"

INCLUDE_ASM("nonmatchings/led", func_00000000);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/led", D_0000099C);

INCLUDE_RODATA("nonmatchings/led", D_000009A0);

INCLUDE_RODATA("nonmatchings/led", D_000009BC);

INCLUDE_RODATA("nonmatchings/led", D_000009DC);

INCLUDE_RODATA("nonmatchings/led", D_000009F4);

INCLUDE_RODATA("nonmatchings/led", D_00000A0C);

INCLUDE_RODATA("nonmatchings/led", D_00000A1C);

INCLUDE_RODATA("nonmatchings/led", D_00000A3C);

INCLUDE_RODATA("nonmatchings/led", D_00000A4C);

INCLUDE_RODATA("nonmatchings/led", D_00000A74);

INCLUDE_RODATA("nonmatchings/led", D_00000A84);

INCLUDE_RODATA("nonmatchings/led", D_00000A88);

INCLUDE_RODATA("nonmatchings/led", D_00000A94);

INCLUDE_RODATA("nonmatchings/led", D_00000A9C);
#endif

INCLUDE_RODATA("nonmatchings/led", D_00000A90);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/led", func_00000118);
#else
INCLUDE_ASM("nonmatchings/led", func_00000144);
#endif

INCLUDE_ASM("nonmatchings/led", sceLedSetMode);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/led", module_start);
#else
s32 module_start(void) {
    sceSysconCtrlLED(0, 1);
    sceSysconCtrlLED(1, 1);
    sceGpioSetPortMode(6, 0);
    sceGpioSetPortMode(7, 0);
    sceKernelRegisterSubIntrHandler(0x1E, 0x19, &func_00000000, 0);
    sceKernelEnableSubIntr(0x1E, 0x19);
    sceKernelRegisterSysEventHandler(&D_000008A0);
    return 0;
}
#endif

#if FW_VERSION < 282
s32 module_reboot_before(void) {
    sceKernelUnregisterSysEventHandler(&D_000008A0);
    sceKernelReleaseSubIntrHandler(0x1E, 0x19);
    sceGpioPortClear(0xC0);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/led", module_reboot_before);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/led", sceLedInit);
#else
s32 sceLedInit(void) {
    sceSysconCtrlLED(0, 1);
    sceSysconCtrlLED(1, 1);
    sceGpioSetPortMode(6, 0);
    sceGpioSetPortMode(7, 0);
    sceKernelRegisterSubIntrHandler(0x1E, 0x19, &func_00000000, 0);
    sceKernelEnableSubIntr(0x1E, 0x19);
    sceKernelRegisterSysEventHandler(&D_000008A0);
    return 0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/led", sceLedEnd);
#else
s32 sceLedEnd(void) {
    sceKernelUnregisterSysEventHandler(&D_000008A0);
    sceKernelReleaseSubIntrHandler(0x1E, 0x19);
    sceGpioPortClear(0xC0);
    return 0;
}
#endif

#if FW_VERSION < 282
s32 sceLedSuspend(void) {
    sceKernelDisableSubIntr(0x1E, 0x19);
    sceGpioSetPortMode(6, 2);
    if (sceSysconGetWlanPowerCtrl() != 0) {
        sceGpioPortSet(0x80);
    } else {
        sceGpioPortClear(0x80);
    }
    return 0;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/led", sceLedSuspend);
#endif

#if FW_VERSION >= 330
s32 sceLedSuspend(void) {
    sceKernelDisableSubIntr(0x1E, 0x19);
    sceGpioPortClear(0x40);
    sceGpioSetPortMode(6, 2);
    sceSysconCtrlLED(1, 0);
    if (sceSysconGetWlanPowerCtrl() != 0) {
        if ((D_00000BA0 ^ 1) != 0) {
            sceGpioPortSet(0x80);
        } else {
            sceGpioPortClear(0x80);
        }
    } else {
        sceGpioPortClear(0x80);
        sceGpioSetPortMode(6, 2);
    }
    return 0;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
s32 sceLedSuspend(void) {
    s32 var_a2;

    sceKernelDisableSubIntr(0x1E, 0x19);
    sceGpioSetPortMode(6, 2);
    var_a2 = 0;
    if (sceSysconGetWlanPowerCtrl() != 0) {
        sceSysconCtrlLED(1, 0);
        var_a2 = 1;
    }
    if (var_a2 != D_00000B80) {
        sceGpioPortSet(0x80);
    } else {
        sceGpioPortClear(0x80);
    }
    return 0;
}
#endif

#if FW_VERSION < 282
s32 sceLedResume(void) {
    sceGpioPortClear(0xC0);
    sceGpioSetPortMode(6, 0);
    sceGpioSetPortMode(7, 0);
    sceSysconCtrlLED(0, 1);
    sceSysconCtrlLED(1, 1);
    sceKernelEnableSubIntr(0x1E, 0x19);
    return 0;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/led", sceLedResume);
#endif

#if FW_VERSION >= 300
s32 sceLedResume(void) {
    if (M2C_VFIELD(&D_00000B30, s32, 0) != 0) {
        sceGpioPortSet(0x40);
    } else {
        sceGpioPortClear(0x40);
    }
    if (M2C_VFIELD(&D_00000B30, s32, 0x50) != 0) {
        sceGpioPortSet(0x80);
    } else {
        sceGpioPortClear(0x80);
    }
    sceGpioSetPortMode(6, 0);
    sceGpioSetPortMode(7, 0);
    sceSysconCtrlLED(0, 1);
    sceSysconCtrlLED(1, 1);
    sceKernelEnableSubIntr(0x1E, 0x19);
    return 0;
}
#endif

#if FW_VERSION < 282
s32 func_00000590(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0x100000:
        sceGpioPortClear(0xC0);
        sceGpioSetPortMode(6, 0);
        sceGpioSetPortMode(7, 0);
        sceSysconCtrlLED(0, 1);
        sceSysconCtrlLED(1, 1);
        sceKernelEnableSubIntr(0x1E, 0x19);
        break;
    case 0x400A:
        sceKernelDisableSubIntr(0x1E, 0x19);
        sceGpioSetPortMode(6, 2);
        if (sceSysconGetWlanPowerCtrl() != 0) {
            sceGpioPortSet(0x80);
        } else {
            sceGpioPortClear(0x80);
        }
        break;
    }
    return 0;
}
#else
s32 func_00000800(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0x100000:
        sceLedResume();
        break;
    case 0x400A:
        sceLedSuspend();
        break;
    }
    return 0;
}
#endif
