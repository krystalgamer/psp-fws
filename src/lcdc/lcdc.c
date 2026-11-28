/* compiler[282,300,301,302,303,310,311,330,340]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340]: -O2 -frename-registers -mext */
/* cflags[100-152]: -O2 -frename-registers -fno-merge-constants */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "lcdc_decls.h"

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/lcdc", D_00000C8C);

INCLUDE_RODATA("nonmatchings/lcdc", D_00000D1C);

INCLUDE_RODATA("nonmatchings/lcdc", D_00000D24);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lcdc", D_00000E14);

INCLUDE_RODATA("nonmatchings/lcdc", D_00000ED8);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/lcdc", sceLcdcInit);
#endif

INCLUDE_ASM("nonmatchings/lcdc", sceLcdcResume);

INCLUDE_ASM("nonmatchings/lcdc", sceLcdcCheckMode);

INCLUDE_ASM("nonmatchings/lcdc", sceLcdcSetMode);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/lcdc", sceLcdcGetLcdcClockFreq);

INCLUDE_ASM("nonmatchings/lcdc", func_00000628);

INCLUDE_ASM("nonmatchings/lcdc", func_00000640);

INCLUDE_ASM("nonmatchings/lcdc", func_0000064C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lcdc", sceLcdcGetMode);
#endif

INCLUDE_ASM("nonmatchings/lcdc", sceLcdcInsertDisplay_default);

s32 sceLcdcReadHPC(void) {
    s32 intr = sceKernelCpuSuspendIntr();
    s32 i = 0;
    s32 v;

    do {
        i++;
        if (i > 100) {
            v = -1;
            break;
        }
        v = *(volatile s32 *)0xBE140030;
    } while (*(volatile s32 *)0xBE140030 != v);
    sceKernelCpuResumeIntr(intr);
    return v;
}

s32 sceLcdcReadVPC(void) {
    s32 intr = sceKernelCpuSuspendIntr();
    s32 i = 0;
    s32 v;

    do {
        i++;
        if (i > 3) {
            v = -1;
            break;
        }
        v = *(volatile s32 *)0xBE140034;
    } while (*(volatile s32 *)0xBE140034 != v);
    sceKernelCpuResumeIntr(intr);
    return v;
}

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lcdc", module_start);
#else
s32 module_start(void) {
    sceLcdcInit();
    return 0;
}
#endif

#if FW_VERSION < 282
s32 module_reboot_before(void) {
    sceKernelUnregisterSysEventHandler(&D_00000C30);
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lcdc", sceLcdcInit);
#endif

#if FW_VERSION < 282
s32 sceLcdcEnd(void) {
    sceKernelUnregisterSysEventHandler(&D_00000C30);
    return 0;
}

s32 sceLcdcSuspend(void) {
    sceSysregLcdcIoDisable();
    sceSysregLcdcClkDisable();
    return 0;
}

s32 sceLcdcEnable(void) {
    sceSysregLcdcIoEnable();
    D_00000C70 = 1;
    return 0;
}

s32 sceLcdcDisable(void) {
    sceSysregLcdcIoDisable();
    D_00000C70 = 0;
    return 0;
}
#else
s32 module_reboot_before(void) {
    sceKernelUnregisterSysEventHandler(&D_00000EF0);
    return 0;
}

INCLUDE_ASM("nonmatchings/lcdc", sceLcdcEnd);

s32 sceLcdcSuspend(void) {
    sceSysregLcdcIoDisable();
    sceSysregLcdcClkDisable();
    return 0;
}

s32 sceLcdcEnable(void) {
    sceSysregLcdcIoEnable();
    D_00000F30 = 1;
    return 0;
}

s32 sceLcdcDisable(void) {
    sceSysregLcdcIoDisable();
    D_00000F30 = 0;
    return 0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/lcdc", sceLcdcSetHOffset);
#endif

#if FW_VERSION < 271
s32 sceLcdcReset(void) {
    s32 intr = sceKernelCpuSuspendIntr();
    u32 v = *(volatile u32 *)0xBE140000;

    *(volatile u32 *)0xBE140000 = v & ~1;
    *(volatile u32 *)0xBE140000 = v;
    sceKernelCpuResumeIntr(intr);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/lcdc", sceLcdcReset);
#endif

#if FW_VERSION == 271
s32 sceLcdcGetCyclesPerPixel(void) {
    return D_00000DA8;
}
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/lcdc", D_00000B90);

INCLUDE_RODATA("nonmatchings/lcdc", D_00000BF0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lcdc", sceLcdcGetLcdcClockFreq);

s32 sceLcdcGetCyclesPerPixel(void) {
    return D_00000F3C;
}
#endif

#if FW_VERSION < 201
float sceLcdcGetPixelClockFreq(void) {
    u8 *p = (u8 *)&D_00000C70;
    switch ((p[0x18] << 2) | p[0x19]) {
    case 0:
        return 9000000.0f;
    case 1:
        return 27000000.0f;
    case 2:
        return 13500000.0f;
    case 5:
        return 25175000.0f;
    }
    return 0.0f;
}
#else
INCLUDE_ASM("nonmatchings/lcdc", sceLcdcGetPixelClockFreq);
#endif

INCLUDE_ASM("nonmatchings/lcdc", sceLcdcGetHsyncFreq);

INCLUDE_ASM("nonmatchings/lcdc", sceLcdcGetVsyncFreq);

s32 sceLcdcReadUnderflow(void) {
    s32 v = *(volatile s32 *)0xBE140050;

    if (v == 1) {
        *(volatile s32 *)0xBE140050 = v;
    }
    return v;
}

s32 func_00000B30(s32 ev_id) {
    switch (ev_id) {
    case 0x4004:
        sceSysregLcdcIoDisable();
        sceSysregLcdcClkDisable();
        break;
    case 0x10004:
        sceLcdcResume();
        break;
    }
    return 0;
}
