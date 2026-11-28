/* compiler[271]: 1.9.2 */
/* cflags[271]: -O2 -frename-registers -mext */
/* compiler[282,300,301,302,303,310,311,330,340]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340]: -O2 -frename-registers -mext */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "gpio_decls.h"

INCLUDE_ASM("nonmatchings/gpio", sceGpioSetPortMode);

INCLUDE_ASM("nonmatchings/gpio", sceGpioGetPortMode);

INCLUDE_RODATA("nonmatchings/gpio", D_00000DE4);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/gpio", D_00000DC8);

INCLUDE_RODATA("nonmatchings/gpio", D_00000E3C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/gpio", D_00000DEC);

INCLUDE_RODATA("nonmatchings/gpio", D_00000E18);
#endif

INCLUDE_ASM("nonmatchings/gpio", sceGpioSetIntrMode);

INCLUDE_ASM("nonmatchings/gpio", sceGpioGetIntrMode);

INCLUDE_ASM("nonmatchings/gpio", module_start);

#if FW_VERSION < 282
s32 module_reboot_before(void) {
    sceKernelUnregisterSysEventHandler(&D_00000CB0);
    sceKernelReleaseIntrHandler(4);
    return 0;
}

INCLUDE_ASM("nonmatchings/gpio", sceGpioInit);

s32 sceGpioEnd(void) {
    sceKernelUnregisterSysEventHandler(&D_00000CB0);
    sceKernelReleaseIntrHandler(4);
    return 0;
}
#else
s32 module_reboot_before(void) {
    sceKernelUnregisterSysEventHandler(&D_00000E40);
    sceKernelReleaseIntrHandler(4);
    return 0;
}

INCLUDE_ASM("nonmatchings/gpio", sceGpioInit);

INCLUDE_ASM("nonmatchings/gpio", sceGpioEnd);
#endif

s32 sceGpioSuspend(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/gpio", sceGpioResume);

INCLUDE_ASM("nonmatchings/gpio", sceGpioPortRead);

INCLUDE_ASM("nonmatchings/gpio", sceGpioPortSet);

INCLUDE_ASM("nonmatchings/gpio", sceGpioPortClear);

INCLUDE_ASM("nonmatchings/gpio", sceGpioPortInvert);

INCLUDE_ASM("nonmatchings/gpio", sceGpioEnableIntr);

INCLUDE_ASM("nonmatchings/gpio", sceGpioDisableIntr);

INCLUDE_ASM("nonmatchings/gpio", sceGpioQueryIntr);

INCLUDE_ASM("nonmatchings/gpio", sceGpioAcquireIntr);

#if FW_VERSION < 282
s32 sceGpioGetCapturePort(u32 arg0) {
    s32 var_v0;

    var_v0 = 0x80000102;
    if (arg0 < 4U) {
        var_v0 = ((u32) D_00000D44 >> (arg0 * 8)) & 0x1F;
    }
    return var_v0;
}
#else
s32 sceGpioGetCapturePort(u32 arg0) {
    s32 var_v0;

    var_v0 = 0x80000102;
    if (arg0 < 4U) {
        var_v0 = ((u32) D_00000E94 >> (arg0 * 8)) & 0x1F;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/gpio", sceGpioSetCapturePort);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/gpio", sceGpioEnableTimerCapture);

INCLUDE_ASM("nonmatchings/gpio", sceGpioDisableTimerCapture);
#endif

INCLUDE_ASM("nonmatchings/gpio", func_00000978);

INCLUDE_ASM("nonmatchings/gpio", func_000009F8);

INCLUDE_ASM("nonmatchings/gpio", func_00000A7C);

INCLUDE_ASM("nonmatchings/gpio", func_00000AAC);

INCLUDE_ASM("nonmatchings/gpio", func_00000AE0);

INCLUDE_ASM("nonmatchings/gpio", func_00000B28);

INCLUDE_ASM("nonmatchings/gpio", func_00000B54);
