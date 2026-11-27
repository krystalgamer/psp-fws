/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "display_decls.h"

#define IS_USER_ADDR(p) (((u32)(p) >> 31) ^ 1)

INCLUDE_ASM("nonmatchings/display", module_reboot_before);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/display", D_00003A68);

INCLUDE_RODATA("nonmatchings/display", D_00003A6C);

INCLUDE_RODATA("nonmatchings/display", D_00003A80);

INCLUDE_RODATA("nonmatchings/display", D_00003A9C);

INCLUDE_RODATA("nonmatchings/display", D_00003AB0);

INCLUDE_RODATA("nonmatchings/display", D_00003AD0);

INCLUDE_RODATA("nonmatchings/display", D_00003AE8);

INCLUDE_RODATA("nonmatchings/display", D_00003B00);

INCLUDE_RODATA("nonmatchings/display", D_00003B18);

INCLUDE_RODATA("nonmatchings/display", D_00003B2C);

INCLUDE_RODATA("nonmatchings/display", D_00003B40);

INCLUDE_RODATA("nonmatchings/display", D_00003B58);

INCLUDE_RODATA("nonmatchings/display", D_00003B6C);

INCLUDE_RODATA("nonmatchings/display", D_00003B80);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/display", D_00003B94_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/display", D_00003B94_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/display", D_00003B94_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/display", D_00003BA8);

INCLUDE_RODATA("nonmatchings/display", D_00003BC0);

INCLUDE_RODATA("nonmatchings/display", D_00003BD4);

INCLUDE_RODATA("nonmatchings/display", D_00003BEC);

INCLUDE_RODATA("nonmatchings/display", D_00003C00);

INCLUDE_RODATA("nonmatchings/display", D_00003C20);

INCLUDE_RODATA("nonmatchings/display", D_00003C2C);

INCLUDE_RODATA("nonmatchings/display", D_00003CF4);

INCLUDE_RODATA("nonmatchings/display", D_00003D08);

INCLUDE_RODATA("nonmatchings/display", D_00003E48);

INCLUDE_RODATA("nonmatchings/display", D_00003E54);

INCLUDE_RODATA("nonmatchings/display", D_00003E88);

INCLUDE_RODATA("nonmatchings/display", D_00003E8C);

INCLUDE_RODATA("nonmatchings/display", D_00003E90);

INCLUDE_RODATA("nonmatchings/display", D_00003E94);

INCLUDE_RODATA("nonmatchings/display", D_00003E9C);

INCLUDE_RODATA("nonmatchings/display", D_00003EB4);

INCLUDE_RODATA("nonmatchings/display", D_00003EBC);

INCLUDE_RODATA("nonmatchings/display", D_00003ED4);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/display", D_00003EF8_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/display", D_00003EF8_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/display", D_00003EF8_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/display", D_00003F14);

INCLUDE_RODATA("nonmatchings/display", D_00003F24);

INCLUDE_RODATA("nonmatchings/display", D_00003F5C);

INCLUDE_RODATA("nonmatchings/display", D_00003F60);

INCLUDE_RODATA("nonmatchings/display", D_00003F78);

INCLUDE_RODATA("nonmatchings/display", D_00003F88);

INCLUDE_RODATA("nonmatchings/display", D_00003F90);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/display", D_00002968);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/display", sceDisplayInit);

s32 sceDisplayEnd(void) {
    sceKernelUnregisterSysEventHandler(&D_000020D0);
    sceKernelReleaseSubIntrHandler(0x1E, 0x12);
    func_000016F4();
    return 0;
}
#endif

#if FW_VERSION == 271
s32 func_00000658(void) {
    s32 temp_v0;
    void *temp_s1;

    if (g_display.unk60 != 0) {
        if (g_display.unk60 == 1) {
            do {
                sceDisplayWaitVblankStart();
            } while (g_display.unk60 == 1);
        }
        func_000021C8();
    }
    temp_v0 = sceKernelInitApitype();
    if (((temp_v0 == 0x110) | (temp_v0 == 0x300)) != 0) {

    } else {
        sceDisplay_driver_63E22A26(2, 0, 0, 3, 1);
        sceDisplayWaitVblankStart();
        temp_s1 = sceGeEdramGetAddr();
        sceKernelMemset32(temp_s1, 0, sceGeEdramGetSize());
        sceKernelDcacheWritebackAll();
        sceGeEdramSetAddrTranslation(0x400);
    }
    return 0;
}
#endif

#if FW_VERSION == 260
s32 func_00000658(void) {
    s32 temp_v0;
    void *temp_s1;

    if (g_display.unk5C != 0) {
        if (g_display.unk5C == 1) {
            do {
                sceDisplayWaitVblankStart();
            } while (g_display.unk5C == 1);
        }
        func_000021C8();
    }
    temp_v0 = sceKernelInitApitype();
    if (((temp_v0 == 0x110) | (temp_v0 == 0x300)) != 0) {

    } else {
        sceDisplay_driver_63E22A26(2, 0, 0, 3, 1);
        sceDisplayWaitVblankStart();
        temp_s1 = sceGeEdramGetAddr();
        sceKernelMemset32(temp_s1, 0, sceGeEdramGetSize());
        sceKernelDcacheWritebackAll();
        sceGeEdramSetAddrTranslation(0x400);
    }
    return 0;
}
#endif

#if FW_VERSION == 250
s32 func_00000658(void) {
    s32 temp_v0;
    void *temp_s1;

    if (g_display.unk5C != 0) {
        if (g_display.unk5C == 1) {
            do {
                sceDisplayWaitVblankStart();
            } while (g_display.unk5C == 1);
        }
        func_000021C8();
    }
    temp_v0 = sceKernelInitApitype();
    if (((temp_v0 == 0x110) | (temp_v0 == 0x300)) != 0) {

    } else {
        sceDisplay_driver_63E22A26(2, 0, 0, 3, 1);
        sceDisplayWaitVblankStart();
        temp_s1 = sceGeEdramGetAddr();
        sceKernelMemset32(temp_s1, 0, sceGeEdramGetSize());
        sceKernelDcacheWritebackAll();
    }
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
s32 func_00000658(void) {
    void *temp_s1;

    if (g_display.unk5C != 0) {
        if (g_display.unk5C == 1) {
            do {
                sceDisplayWaitVblankStart();
            } while (g_display.unk5C == 1);
        }
        func_000021C8();
    }
    if (sceKernelInitApitype() != 0x110) {
        sceDisplay_driver_63E22A26(2, 0, 0, 3, 1);
        sceDisplayWaitVblankStart();
        temp_s1 = sceGeEdramGetAddr();
        sceKernelMemset32(temp_s1, 0, sceGeEdramGetSize());
        sceKernelDcacheWritebackAll();
    }
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/display", func_0000073C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/display", func_00000C34);

INCLUDE_ASM("nonmatchings/display", func_00000F78);

INCLUDE_ASM("nonmatchings/display", func_000010F8);

INCLUDE_ASM("nonmatchings/display", func_00001164);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/display", func_00000724);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/display", func_00000890);
#endif

#if FW_VERSION == 100
s32 func_00000468(s32 id, char *name, void *param, s32 *result)
{
    switch (id) {
    case 0x400:
        scePwmStop(1);
        scePwmStop(0);
        sceGpioPortClear(1);
        g_display.suspendWait = 10;
        break;
    case 0x402:
        if (g_display.suspendWait > 0) {
            return -1;
        }
        break;
    case 0x400A:
        func_00001728();
        break;
    case 0x1000A:
        func_00001748();
        func_00002AC8();
        sceGpioSetPortMode(0, 0);
        if (g_display.enabled) {
            sceGpioPortSet(1);
        } else {
            sceGpioPortClear(1);
        }
        scePwmStart(0, 0x18, 0x19, 1);
        g_display.brightnessFade = 1;
        g_display.curBrightness = 0;
        break;
    }
    return 0;
}

s32 func_00000578(void)
{
    s32 i;
    s32 found;
    void *addr;
    s32 bufferWidth;
    s32 pixelFormat;
    s32 diff;
    s32 level;
    SceDisplayFrameBuf *fb;

    if (g_display.curModeIdx != g_display.modeIdx) {
        if (g_display.modeChangeWait >= 2) {
            g_display.modeChangeWait--;
            sceDmacplusLcdcSetBaseAddr(NULL);
        } else if (g_display.modeChangeWait == 1) {
            g_display.modeChangeWait = 0;
            func_0000092C(g_display.modeIdx, g_display.width, g_display.height, g_display.bufferWidth, g_display.pixelFormat);
            if (g_display.modeIdx == 0) {
                g_display.sm1Ops->unk24(3);
            } else {
                g_display.sm1Ops->unk24(0);
            }
        } else {
            sceLcdcReset();
            g_display.curModeIdx = g_display.modeIdx;
        }
    } else {
        found = -1;
        addr = NULL;
        fb = g_display.fb;
        for (i = 0; i < 4; i++, fb++) {
            if (fb->changed) {
                fb->changed = 0;
                fb->curTopaddr = fb->topaddr;
            }
            if (found == -1 && fb->curTopaddr != NULL) {
                addr = fb->curTopaddr;
                found = i;
            }
        }
        if (found < 0) {
            g_display.foregroundLevel = found;
            sceDmacplusLcdcSetBaseAddr(NULL);
        } else {
            pixelFormat = g_display.fb[found].pixelFormat;
            bufferWidth = g_display.fb[found].bufferWidth;
            if (g_display.pixelFormat == pixelFormat && g_display.bufferWidth == bufferWidth) {
                g_display.foregroundLevel = found;
                sceDmacplusLcdcSetBaseAddr(addr);
            } else if (sceDisplayGetVblankRest() < 3) {
                g_display.fb[found].changed = 1;
                g_display.fb[found].topaddr = g_display.fb[found].curTopaddr;
                found = g_display.foregroundLevel;
                addr = NULL;
                if (found >= 0) {
                    addr = g_display.fb[i].curTopaddr;
                }
                sceDmacplusLcdcSetBaseAddr(addr);
            } else {
                g_display.foregroundLevel = found;
                sceDmacplusLcdcSetBaseAddr(addr);
                func_0000092C(g_display.modeIdx, g_display.width, g_display.height, bufferWidth, pixelFormat);
            }
        }
    }
    if (g_display.lcdOn != g_display.enabled) {
        g_display.lcdOn = g_display.enabled;
        if (g_display.lcdOn) {
            sceGpioPortSet(1);
        } else {
            sceGpioPortClear(1);
        }
    }
    if (g_display.brightnessFade) {
        level = g_display.curBrightness;
        diff = g_display.brightness - level;
        if (diff > 2) {
            level += 2;
        } else if (diff < 2) {
            level -= 2;
        } else {
            g_display.brightnessFade = 0;
            level = g_display.brightness;
        }
        func_00000868(level);
    }
    if (g_display.pwmState == 2) {
        g_display.pwmState = 1;
    } else if (g_display.pwmState == 1) {
        g_display.pwmState = 0;
        scePwmStart(1, 0x18, 0x19, 0x19);
    }
    if (g_display.suspendWait > 0) {
        g_display.suspendWait--;
    }
    return -1;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/display", func_00000868);

s32 func_0000092C(s32 mode, s32 width, s32 height, s32 bufferWidth, s32 pixelFormat)
{
    s32 format;

    if ((u32)pixelFormat < 4) {
        format = (0x39 >> (pixelFormat * 2)) & 3;
    } else {
        format = 0x80000108;
    }
    g_display.bufferWidth = bufferWidth;
    g_display.pixelFormat = pixelFormat;
    sceDmacplusLcdcDisable();
    sceDmacplusLcdcSetFormat(width, bufferWidth, format);
    sceLcdcSetMode(mode, width, height, format);
    sceDmacplusLcdcEnable();
    return 0;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/display", func_0000092C);
#endif

#if FW_VERSION < 271
s32 sceDisplaySetMode(s32 mode, s32 width, s32 height)
{
    s32 idx;
    u32 oldK1;
    s32 intr;
    s32 ret;

    if (mode == 0) {
        idx = 0;
    } else {
        if (g_display.sm1Ops == NULL) {
            return 0x80000107;
        }
        switch (mode) {
        case 0xD2:
            idx = 1;
            break;
        case 0x1A:
            idx = 2;
            break;
        case 0x60:
            idx = 3;
            break;
        default:
            return 0x80000107;
        }
    }
    oldK1 = shiftK1();
    ret = sceLcdcCheckMode(idx, width, height, 0);
    if (ret < 0) {
        setK1(oldK1);
        return ret;
    }
    if ((width & 7) != 0) {
        setK1(oldK1);
        return 0x80000104;
    }
    intr = sceKernelCpuSuspendIntr();
    g_display.width = width;
    g_display.height = height;
    g_display.modeIdx = idx;
    if (g_display.curModeIdx != idx) {
        g_display.sm1Ops->unk24(1);
        g_display.fb[2].changed = 1;
        g_display.modeChangeWait = 10;
    }
    do {
        sceKernelCpuResumeIntr(intr);
        sceDisplayWaitVblankStart();
        intr = sceKernelCpuSuspendIntr();
        func_00002AC8();
    } while (g_display.fb[2].changed != 0);
    g_display.mode = mode;
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/display", sceDisplaySetMode);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/display", sceDisplayGetMode);

INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_63E22A26);
#endif

#if FW_VERSION < 271
s32 sceDisplay_driver_5B5AEFAD(s32 pri, void **topaddr, s32 *bufferWidth, s32 *pixelFormat, s32 sync)
{
    u32 oldK1;
    s32 intr;

    if ((u32)pri >= 4) {
        return 0x80000102;
    }
    oldK1 = shiftK1Noreorder();
    if ((k1IsUserMode() && IS_USER_ADDR(topaddr) == 0) || (k1IsUserMode() && IS_USER_ADDR(bufferWidth) == 0)
        || (k1IsUserMode() && IS_USER_ADDR(pixelFormat) == 0)) {
        setK1(oldK1);
        return 0x80000023;
    }
    if (topaddr == NULL) {
        setK1(oldK1);
        return 0x80000103;
    }
    intr = sceKernelCpuSuspendIntr();
    if (sync == 1 && g_display.fb[pri].changed) {
        *topaddr = g_display.fb[pri].topaddr;
    } else {
        *topaddr = g_display.fb[pri].curTopaddr;
    }
    if (bufferWidth != NULL) {
        *bufferWidth = g_display.fb[pri].bufferWidth;
    }
    if (pixelFormat != NULL) {
        *pixelFormat = g_display.fb[pri].pixelFormat;
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_5B5AEFAD);

INCLUDE_ASM("nonmatchings/display", sceDisplayGetBacklightSel);
#endif

#if FW_VERSION < 271
s32 sceDisplaySetBrightness(s32 level, s32 unk1)
{
    if ((u32)level > 100) {
        return 0x800001FF;
    }
    if (unk1 == 0) {
        g_display.brightness = level;
        g_display.brightnessFade = 0;
        func_00000868(level);
    } else if (unk1 == 1) {
        g_display.brightness = level;
        g_display.brightnessFade = unk1;
    } else {
        return 0x80000107;
    }
    return 0;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/display", sceDisplaySetBrightness);
#endif

#if FW_VERSION < 271
s32 sceDisplayGetBrightness(s32 *level, s32 *unk1)
{
    u32 oldK1 = shiftK1Noreorder();

    if ((k1IsUserMode() && IS_USER_ADDR(level) == 0) || (k1IsUserMode() && IS_USER_ADDR(unk1) == 0)) {
        setK1(oldK1);
        return 0x80000023;
    }
    if (level != NULL) {
        *level = g_display.brightness;
    }
    if (unk1 != NULL) {
        *unk1 = g_display.brightnessFade;
    }
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/display", sceDisplayGetBrightness);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
s32 func_000013B4(s32 *arg0) {
    return *arg0 & ~3;
}
#endif

#if FW_VERSION < 282
s32 module_start(void) {
    sceDisplayInit();
    return 0;
}
#endif

#if FW_VERSION < 271
s32 sceDisplayEnable(void)
{
    s32 intr = sceKernelCpuSuspendIntr();
    s32 old = g_display.enabled;

    g_display.enabled = 1;
    sceKernelCpuResumeIntr(intr);
    return old;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/display", sceDisplayEnable);
#endif

#if FW_VERSION < 271
s32 sceDisplayDisable(void)
{
    s32 intr = sceKernelCpuSuspendIntr();
    s32 old = g_display.enabled;

    g_display.enabled = 0;
    sceKernelCpuResumeIntr(intr);
    return old;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/display", sceDisplayDisable);

s8 sceDisplay_driver_23CE8C51(void) {
    return g_display.unk55;
}

INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_E4E4C018);

INCLUDE_ASM("nonmatchings/display", sceDisplaySetHoldMode);
#endif

#if FW_VERSION < 271
s32 sceDisplaySetHoldMode(s32 arg0) {
    g_display.holdMode = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 sceDisplaySetResumeMode(s32 arg0) {
    g_display.resumeMode = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/display", sceDisplayGetResumeMode);
#endif

#if FW_VERSION < 282
void sceDisplayGetFramePerSec(void) {
    sceLcdcGetVsyncFreq();
}

s32 sceDisplaySetFrameBuf(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    return sceDisplay_driver_63E22A26(2, (s32) arg0, arg1, arg2, arg3);
}

s32 sceDisplayGetFrameBuf(void **topaddr, s32 *bufferWidth, s32 *pixelFormat, s32 sync) {
    return sceDisplay_driver_5B5AEFAD(2, topaddr, bufferWidth, pixelFormat, sync);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 sceDisplayIsForeground(void) {
    return g_display.foregroundLevel == 2;
}

s8 sceDisplayGetForegroundLevel(void) {
    return g_display.foregroundLevel;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/display", sceDisplaySetBacklightSel);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/display", D_00002C30);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/display", D_00003B94);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/display", func_0000118C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/display", func_000016C4);
#endif

#if FW_VERSION < 282
s32 func_00001254(void *arg)
{
    s32 i;
    s32 sub;

    g_Vblank.vcount++;
    for (i = 0; i < 32; i++) {
        sub = D_00001FF8[i];
        if (g_Vblank.subIntrMask & (1 << sub)) {
            sceKernelCallSubIntrHandler(arg, sub, sub, 0);
        }
    }
    sceKernelSetEventFlag(g_Vblank.evflg, 1);
    sceKernelClearEventFlag(g_Vblank.evflg, ~1);
    return -1;
}
#else
INCLUDE_ASM("nonmatchings/display", sceDisplayInit);

s32 sceDisplayEnd(void) {
    sceKernelUnregisterSysEventHandler(&D_00003D10);
    sceKernelReleaseSubIntrHandler(0x1E, 0x12);
    func_00002A64();
    return 0;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/display", func_000009F8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 func_000009F8(void) {
    s32 temp_v0;
    s32 temp_v0_2;

    if (g_display.unk60 != 0) {
        if (g_display.unk60 == 1) {
            do {
                sceDisplayWaitVblankStart();
            } while (g_display.unk60 == 1);
        }
        func_0000315C();
    }
    temp_v0 = sceKernelInitApitype();
    if ((((u32) (temp_v0 - 0x110) < 2U) | (temp_v0 == 0x300)) != 0) {

    } else {
        sceDisplay_driver_63E22A26(2, 0, 0, 3, 1);
        sceDisplayWaitVblankStart();
        sceGeEdramSetAddrTranslation(0x400);
        temp_v0_2 = sceGeEdramGetHwSize();
        sceGeEdramSetSize(temp_v0_2);
        sceKernelMemset32(sceGeEdramGetAddr(), 0, temp_v0_2);
        sceKernelDcacheWritebackAll();
        sceGeEdramSetSize(0x200000);
    }
    return 0;
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/display", func_00000B30);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/display", func_00001058);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/display", func_00000F38);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/display", func_00000AF8);

INCLUDE_ASM("nonmatchings/display", func_00000EAC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/display", func_00001220);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/display", func_00001288);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/display", func_000015A8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/display", func_000012C0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/display", func_00001398);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/display", func_000014FC);

INCLUDE_ASM("nonmatchings/display", sceDisplayEnable);

INCLUDE_ASM("nonmatchings/display", sceDisplayDisable);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/display", func_00001480);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/display", sceDisplaySetMode);

INCLUDE_ASM("nonmatchings/display", sceDisplayGetMode);

INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_63E22A26);

INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_5B5AEFAD);

INCLUDE_ASM("nonmatchings/display", sceDisplayGetBacklightSel);

INCLUDE_ASM("nonmatchings/display", sceDisplaySetBrightness);

INCLUDE_ASM("nonmatchings/display", sceDisplayGetBrightness);

s32 module_start(void) {
    sceDisplayInit();
    return 0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/display", sceDisplayEnable);

INCLUDE_ASM("nonmatchings/display", sceDisplayDisable);
#endif

#if FW_VERSION >= 282
s8 sceDisplay_driver_23CE8C51(void) {
    return g_display.unk6A;
}

INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_E4E4C018);

INCLUDE_ASM("nonmatchings/display", sceDisplaySetHoldMode);

s32 sceDisplaySetResumeMode(s32 arg0) {
    g_display.resumeMode = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/display", sceDisplayGetResumeMode);

void sceDisplayGetFramePerSec(void) {
    sceLcdcGetVsyncFreq();
}

s32 sceDisplaySetFrameBuf(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    return sceDisplay_driver_63E22A26(2, (s32) arg0, arg1, arg2, arg3);
}

s32 sceDisplayGetFrameBuf(void **topaddr, s32 *bufferWidth, s32 *pixelFormat, s32 sync) {
    return sceDisplay_driver_5B5AEFAD(2, topaddr, bufferWidth, pixelFormat, sync);
}

s32 sceDisplayIsForeground(void) {
    return g_display.foregroundLevel == 2;
}

s8 sceDisplayGetForegroundLevel(void) {
    return g_display.foregroundLevel;
}

INCLUDE_ASM("nonmatchings/display", sceDisplaySetBacklightSel);

INCLUDE_ASM("nonmatchings/display", func_00002258);

INCLUDE_ASM("nonmatchings/display", func_000022A8);
#endif

void func_000023B8(void)
{
    s32 intr = sceKernelCpuSuspendIntr();

    sceSysregApbTimerClkDisable(1);
    sceSysregApbTimerClkSelect(1, 4);
    sceSysregApbTimerClkEnable(1);
    while (((volatile SceDisplayHwCounter *)0xBE740000)->busy & 4)
        ;
    ((volatile SceDisplayHwCounter *)0xBE740000)->ctrl = 0;
    while (((volatile SceDisplayHwCounter *)0xBE740000)->busy & 4)
        ;
    while (((volatile SceDisplayHwCounter *)0xBE740000)->busy & 2)
        ;
    ((volatile SceDisplayHwCounter *)0xBE740000)->unk4 = 0;
    while (((volatile SceDisplayHwCounter *)0xBE740000)->busy & 8)
        ;
    ((volatile SceDisplayHwCounter *)0xBE740000)->unkC = -1;
    while (((volatile SceDisplayHwCounter *)0xBE740000)->busy & 0x10)
        ;
    ((volatile SceDisplayHwCounter *)0xBE740000)->unk10 = 0;
    while (((volatile SceDisplayHwCounter *)0xBE740000)->busy & 0x20)
        ;
    ((volatile SceDisplayHwCounter *)0xBE740000)->unk14 = 0;
    while (((volatile SceDisplayHwCounter *)0xBE740000)->busy & 1)
        ;
    ((volatile SceDisplayHwCounter *)0xBE740000)->ctrl = 0x20201;
    while (((volatile SceDisplayHwCounter *)0xBE740000)->busy & 4)
        ;
    sceSysregApbTimerClkDisable(1);
    sceSysregApbTimerClkSelect(1, 7);
    sceSysregApbTimerClkEnable(1);
    ((volatile SceDisplayHwCounter *)0xBE740000)->unk24 = 1;
    sceKernelCpuResumeIntrWithSync(intr);
}

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/display", D_00001FF8);

INCLUDE_RODATA("nonmatchings/display", D_00002018);

s32 sceDisplayWaitVblank(void)
{
    u32 oldK1 = shiftK1();
    s32 ret = 1;

    if (sceDisplayGetCurrentHcount() >= g_Vblank.vblankStart) {
        ret = sceKernelWaitEventFlag(g_Vblank.evflg, 1, 1, NULL, NULL);
        if (ret < 0) {
            Kprintf(&D_00002018, "sceDisplayWaitVblank", ret);
            setK1(oldK1);
            return ret;
        }
        ret = 0;
    }
    setK1(oldK1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/display", sceDisplayWaitVblank);
#endif

#if FW_VERSION < 282
s32 sceDisplayWaitVblankCB(void)
{
    u32 oldK1 = shiftK1();
    s32 ret = 1;

    if (sceDisplayGetCurrentHcount() >= g_Vblank.vblankStart) {
        ret = sceKernelWaitEventFlagCB(g_Vblank.evflg, 1, 1, NULL, NULL);
        if (ret < 0) {
            Kprintf(&D_00002018, "sceDisplayWaitVblankCB", ret);
            setK1(oldK1);
            return ret;
        }
        ret = 0;
    }
    setK1(oldK1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/display", sceDisplayWaitVblankCB);
#endif

#if FW_VERSION >= 150
s32 sceDisplayAdjustAccumulatedHcount(s32 value)
{
    s32 i = 0;
    s32 intr;
    u32 acc;

    if (value < 0) {
        return 0x800001FE;
    }
    intr = sceKernelCpuSuspendIntr();
    do {
        i++;
        if (i >= 4) {
            sceKernelCpuResumeIntr(intr);
            return 0x80020001;
        }
        acc = *(volatile u32 *)0xBE740004;
    } while (*(volatile u32 *)0xBE740004 != acc);
    g_Vblank.unk8 = value - acc;
    sceKernelCpuResumeIntr(intr);
    return 0;
}
#else
s32 sceDisplayGetAccumulatedHcount(void)
{
    s32 i = 0;
    u32 oldK1 = shiftK1();
    s32 intr;
    u32 count;

    intr = sceKernelCpuSuspendIntr();
    do {
        i++;
        if (i >= 4) {
            sceKernelCpuResumeIntr(intr);
            setK1(oldK1);
            return 0x80020001;
        }
        count = *(volatile u32 *)0xBE740004;
    } while (*(volatile u32 *)0xBE740004 != count);
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return __builtin_allegrex_ext(count, 0, 31);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
s32 sceDisplayGetAccumulatedHcount(void)
{
    s32 i = 0;
    s32 intr;
    u32 count;

    intr = sceKernelCpuSuspendIntr();
    do {
        i++;
        if (i >= 4) {
            sceKernelCpuResumeIntr(intr);
            return 0x80020001;
        }
        count = *(volatile u32 *)0xBE740004;
    } while (*(volatile u32 *)0xBE740004 != count);
    count += g_Vblank.unk8;
    sceKernelCpuResumeIntr(intr);
    return __builtin_allegrex_ext(count, 0, 31);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/display", sceDisplayGetAccumulatedHcount);
#endif

#if FW_VERSION == 100
s32 sceDisplayGetCurrentHcount(void)
{
    s32 i = 0;
    u32 oldK1 = shiftK1();
    s32 intr;
    u32 cur, acc;

    intr = sceKernelCpuSuspendIntr();
    do {
        i++;
        if (i >= 4) {
            sceKernelCpuResumeIntr(intr);
            setK1(oldK1);
            return 0x80020001;
        }
        cur = *(volatile u32 *)0xBE740008;
        acc = *(volatile u32 *)0xBE740004;
    } while (*(volatile u32 *)0xBE740004 != acc || cur != *(volatile u32 *)0xBE740008);
    sceKernelCpuResumeIntr(intr);
    acc = __builtin_allegrex_ext(acc - cur - 1, 0, 27) + 4;
    if (acc >= g_Vblank.hcountPerFrame) {
        acc -= g_Vblank.hcountPerFrame;
    }
    setK1(oldK1);
    return acc;
}
#else
INCLUDE_ASM("nonmatchings/display", sceDisplayGetCurrentHcount);
#endif

#if FW_VERSION < 282
s32 func_000016F4(void) {
    sceSysregApbTimerClkDisable(1);
    sceKernelReleaseIntrHandler(0x1E);
    sceKernelDeleteEventFlag(g_Vblank.evflg);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00001728(void) {
    sceSysregApbTimerClkDisable(1);
    sceKernelDisableIntr(0x1E);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00001728(void) {
    sceSysregApbTimerClkDisable(1);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/display", func_00001748);
#endif

#if FW_VERSION == 100
s32 func_00001748(void) {
    sceSysregVblankIRQPolar(1);
    func_000023B8();
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/display", sceDisplaySetPseudoVsync);

INCLUDE_RODATA("nonmatchings/display", D_00003C50);

INCLUDE_ASM("nonmatchings/display", func_00002968);

s32 func_00002A64(void) {
    sceSysregApbTimerClkDisable(1);
    sceKernelReleaseIntrHandler(0x1E);
    sceKernelReleaseIntrHandler(0x32);
    sceKernelDeleteEventFlag(g_Vblank.evflg);
    return 0;
}

s32 func_00002AA0(void) {
    sceSysregApbTimerClkDisable(1);
    sceKernelDisableIntr(0x1E);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00002AC8(void)
{
    s32 a, b, c;

    sceLcdcInsertDisplay_default(&a, 0, &b, &c);
    g_Vblank.unk8 = a;
    g_Vblank.hcountPerFrame = c;
    g_Vblank.vblankStart = b;
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/display", func_00002AC8);
#endif

#if FW_VERSION >= 282
s32 func_00002B20(s32 arg0) {
    g_Vblank.unk2C = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/display", sceDisplayGetVcount);
#else
s32 sceDisplayGetVcount(void) {
    return __builtin_allegrex_ext(g_Vblank.vcount, 0, 0x1F);
}
#endif

s32 sceDisplayIsVblank(void) {
    return sceDisplayGetCurrentHcount() < g_Vblank.vblankStart;
}

s32 sceDisplayGetVblankRest(void) {
    return __builtin_allegrex_max(g_Vblank.vblankStart - sceDisplayGetCurrentHcount(), -1);
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/display", sceDisplayIsVsync);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/display", D_00002060);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/display", sceDisplayWaitVblankStart);
#endif

#if FW_VERSION < 201
s32 sceDisplayWaitVblankStart(void) {
    s32 temp_v0;
    u32 temp_s1;

    temp_s1 = shiftK1();
    temp_v0 = sceKernelWaitEventFlag(g_Vblank.evflg, 1U, 1, NULL, NULL);
    if (temp_v0 < 0) {
        Kprintf(&D_00002060, "sceDisplayWaitVblankStart", temp_v0);
    }
    setK1(temp_s1);
    return temp_v0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/display", sceDisplayWaitVblankStartCB);
#endif

#if FW_VERSION < 201
s32 sceDisplayWaitVblankStartCB(void) {
    s32 temp_v0;
    u32 temp_s1;

    temp_s1 = shiftK1();
    temp_v0 = sceKernelWaitEventFlagCB(g_Vblank.evflg, 1U, 1, NULL, NULL);
    if (temp_v0 < 0) {
        Kprintf(&D_00002060, "sceDisplayWaitVblankStartCB", temp_v0);
    }
    setK1(temp_s1);
    return temp_v0;
}
#endif

#if FW_VERSION >= 350
s32 sceDisplay_driver_66961521(void) {
    return __builtin_allegrex_max(g_Vblank.unk14 - sceDisplayGetCurrentHcount(), -1);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/display", sceDisplayIsVsync);

s32 sceDisplayWaitVblankStart(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = sceKernelWaitEventFlag(g_Vblank.evflg, 1U, 1, NULL, NULL);
    setK1(temp_s0);
    return temp_v0;
}

s32 sceDisplayWaitVblankStartCB(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = sceKernelWaitEventFlagCB(g_Vblank.evflg, 1U, 1, NULL, NULL);
    setK1(temp_s0);
    return temp_v0;
}

s32 sceDisplayIsPseudoField(void) {
    return g_Vblank.pseudoField != 0;
}
#endif

s32 func_00002C7C(s32 intno, s32 subIntrNo)
{
    g_Vblank.subIntrMask |= 1 << subIntrNo;
    return 0;
}

s32 func_00002C9C(s32 intno, s32 subIntrNo)
{
    g_Vblank.subIntrMask &= ~(1 << subIntrNo);
    return 0;
}

s32 func_00002CC0(s32 intno, s32 subIntrNo, s32 *state)
{
    if (state != NULL) {
        *state = (g_Vblank.subIntrMask >> subIntrNo) & 1;
    }
    g_Vblank.subIntrMask &= ~(1 << subIntrNo);
    return 0;
}

s32 func_00002CF8(s32 intno, s32 subIntrNo, s32 state)
{
    g_Vblank.subIntrMask |= state << subIntrNo;
    return 0;
}

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/display", func_00001DE4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/display", func_000020D8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/display", func_00001F08);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/display", func_00001FF0);

INCLUDE_ASM("nonmatchings/display", func_000021C8);

INCLUDE_RODATA("nonmatchings/display", D_00002B2C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/display", func_00002D14);

INCLUDE_ASM("nonmatchings/display", func_00002D48);

INCLUDE_ASM("nonmatchings/display", func_00002E84);

INCLUDE_ASM("nonmatchings/display", func_00002F98);

INCLUDE_ASM("nonmatchings/display", func_0000315C);

INCLUDE_RODATA("nonmatchings/display", D_00003C88);

INCLUDE_RODATA("nonmatchings/display", D_00003CA8);

INCLUDE_RODATA("nonmatchings/display", D_00003CBC);
#endif
