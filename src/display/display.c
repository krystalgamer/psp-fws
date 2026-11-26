/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "display_decls.h"

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

    if (M2C_VFIELD(&D_00002150, s32, 0x60) != 0) {
        if (M2C_VFIELD(&D_00002150, s32, 0x60) == 1) {
            do {
                sceDisplayWaitVblankStart();
            } while (M2C_VFIELD(&D_00002150, s32, 0x60) == 1);
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

    if (M2C_VFIELD(&D_00002150, s32, 0x5C) != 0) {
        if (M2C_VFIELD(&D_00002150, s32, 0x5C) == 1) {
            do {
                sceDisplayWaitVblankStart();
            } while (M2C_VFIELD(&D_00002150, s32, 0x5C) == 1);
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

    if (M2C_VFIELD(&D_00002150, s32, 0x5C) != 0) {
        if (M2C_VFIELD(&D_00002150, s32, 0x5C) == 1) {
            do {
                sceDisplayWaitVblankStart();
            } while (M2C_VFIELD(&D_00002150, s32, 0x5C) == 1);
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

    if (M2C_VFIELD(&D_00002150, s32, 0x5C) != 0) {
        if (M2C_VFIELD(&D_00002150, s32, 0x5C) == 1) {
            do {
                sceDisplayWaitVblankStart();
            } while (M2C_VFIELD(&D_00002150, s32, 0x5C) == 1);
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
INCLUDE_ASM("nonmatchings/display", func_00000468);

INCLUDE_ASM("nonmatchings/display", func_00000578);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/display", func_00000868);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/display", func_0000092C);

INCLUDE_ASM("nonmatchings/display", sceDisplaySetMode);

INCLUDE_ASM("nonmatchings/display", sceDisplayGetMode);

INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_63E22A26);

INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_5B5AEFAD);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/display", sceDisplayGetBacklightSel);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/display", sceDisplaySetBrightness);

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

INCLUDE_ASM("nonmatchings/display", sceDisplayEnable);

INCLUDE_ASM("nonmatchings/display", sceDisplayDisable);
#endif

#if FW_VERSION == 271
s8 sceDisplay_driver_23CE8C51(void) {
    return D_00003675;
}

INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_E4E4C018);

INCLUDE_ASM("nonmatchings/display", sceDisplaySetHoldMode);

s32 sceDisplaySetResumeMode(s32 arg0) {
    D_000036C0 = arg0;
    return 0;
}
#endif

#if FW_VERSION < 271
s32 sceDisplaySetHoldMode(s32 arg0) {
    D_000021CC = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
s32 sceDisplaySetResumeMode(s32 arg0) {
    D_00002CE4 = arg0;
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

s32 sceDisplayGetFrameBuf(void *arg0, void *arg1, void *arg2, s32 arg3) {
    return sceDisplay_driver_5B5AEFAD(2, (s32) arg0, (s32) arg1, (s32) arg2, arg3);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 sceDisplayIsForeground(void) {
    return D_00002CB0 == 2;
}

s8 sceDisplayGetForegroundLevel(void) {
    return D_00002CB0;
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
INCLUDE_ASM("nonmatchings/display", func_00001254);
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

    if (D_00003DB0.unk60 != 0) {
        if (D_00003DB0.unk60 == 1) {
            do {
                sceDisplayWaitVblankStart();
            } while (D_00003DB0.unk60 == 1);
        }
        func_0000315C();
    }
    temp_v0 = sceKernelInitApitype();
    if ((((u32) (temp_v0 - 0x110) < 2U) | (temp_v0 == 0x300)) != 0) {

    } else {
        sceDisplay_driver_63E22A26(2, 0, 0, 3, 1);
        sceDisplayWaitVblankStart();
        sceGeEdramSetAddrTranslation(0x400);
        temp_v0_2 = sceGe_driver_C576E897();
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
    return D_00003E1A;
}

INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_E4E4C018);

INCLUDE_ASM("nonmatchings/display", sceDisplaySetHoldMode);

s32 sceDisplaySetResumeMode(s32 arg0) {
    D_00003EB0 = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/display", sceDisplayGetResumeMode);

void sceDisplayGetFramePerSec(void) {
    sceLcdcGetVsyncFreq();
}

s32 sceDisplaySetFrameBuf(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    return sceDisplay_driver_63E22A26(2, (s32) arg0, arg1, arg2, arg3);
}

s32 sceDisplayGetFrameBuf(void *arg0, void *arg1, void *arg2, s32 arg3) {
    return sceDisplay_driver_5B5AEFAD(2, (s32) arg0, (s32) arg1, (s32) arg2, arg3);
}

s32 sceDisplayIsForeground(void) {
    return D_00003E14 == 2;
}

s8 sceDisplayGetForegroundLevel(void) {
    return D_00003E14;
}

INCLUDE_ASM("nonmatchings/display", sceDisplaySetBacklightSel);

INCLUDE_ASM("nonmatchings/display", func_00002258);

INCLUDE_ASM("nonmatchings/display", func_000022A8);
#endif

INCLUDE_ASM("nonmatchings/display", func_000023B8);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/display", D_00001FF8);

INCLUDE_RODATA("nonmatchings/display", D_00002018);
#endif

INCLUDE_ASM("nonmatchings/display", sceDisplayWaitVblank);

INCLUDE_ASM("nonmatchings/display", sceDisplayWaitVblankCB);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/display", sceDisplayAdjustAccumulatedHcount);
#endif

INCLUDE_ASM("nonmatchings/display", sceDisplayGetAccumulatedHcount);

INCLUDE_ASM("nonmatchings/display", sceDisplayGetCurrentHcount);

#if FW_VERSION < 282
s32 func_000016F4(void) {
    sceSysregApbTimerClkDisable(1);
    sceKernelReleaseIntrHandler(0x1E);
    sceKernelDeleteEventFlag(D_000021F0);
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
    sceSysreg_driver_E88B77ED(1);
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
    sceKernelDeleteEventFlag(D_00003EF8);
    return 0;
}

s32 func_00002AA0(void) {
    sceSysregApbTimerClkDisable(1);
    sceKernelDisableIntr(0x1E);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/display", func_00002AC8);

#if FW_VERSION >= 282
s32 func_00002B20(s32 arg0) {
    D_00003EF4 = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/display", sceDisplayGetVcount);
#else
s32 sceDisplayGetVcount(void) {
    return __builtin_allegrex_ext(D_000021E0, 0, 0x1F);
}
#endif

#if FW_VERSION < 282
s32 sceDisplayIsVblank(void) {
    return sceDisplayGetCurrentHcount() < D_000021EC;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 sceDisplayGetVblankRest(void) {
    return __builtin_allegrex_max(M2C_VFIELD(&D_00003EC8, s32, 0x18) - sceDisplayGetCurrentHcount(), -1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceDisplayGetVblankRest(void) {
    return __builtin_allegrex_max(M2C_VFIELD(&D_00003EC8, s32, 0x14) - sceDisplayGetCurrentHcount(), -1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/display", sceDisplayIsVsync);
#endif

#if FW_VERSION == 100
s32 sceDisplayGetVblankRest(void) {
    return __builtin_allegrex_max(M2C_VFIELD(&D_00003EC8, s32, 0x10) - sceDisplayGetCurrentHcount(), -1);
}
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/display", D_00002060);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/display", sceDisplayWaitVblankStart);
#endif

#if FW_VERSION < 152
s32 sceDisplayWaitVblankStart(void) {
    s32 temp_v0;
    u32 temp_s1;

    temp_s1 = shiftK1();
    temp_v0 = sceKernelWaitEventFlag(D_000021F0, 1U, 1, NULL, NULL);
    if (temp_v0 < 0) {
        Kprintf(&D_00002060, "sceDisplayWaitVblankStart", temp_v0);
    }
    setK1(temp_s1);
    return temp_v0;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/display", sceDisplayWaitVblankStartCB);
#endif

#if FW_VERSION < 152
s32 sceDisplayWaitVblankStartCB(void) {
    s32 temp_v0;
    u32 temp_s1;

    temp_s1 = shiftK1();
    temp_v0 = sceKernelWaitEventFlagCB(D_000021F0, 1U, 1, NULL, NULL);
    if (temp_v0 < 0) {
        Kprintf(&D_00002060, "sceDisplayWaitVblankStartCB", temp_v0);
    }
    setK1(temp_s1);
    return temp_v0;
}
#endif

#if FW_VERSION >= 282
s32 sceDisplayIsVblank(void) {
    return sceDisplayGetCurrentHcount() < D_00003EE8;
}

s32 sceDisplayGetVblankRest(void) {
    return __builtin_allegrex_max(D_00003EC8.unk20 - sceDisplayGetCurrentHcount(), -1);
}
#endif

#if FW_VERSION >= 350
s32 sceDisplay_driver_66961521(void) {
    return __builtin_allegrex_max(M2C_VFIELD(&D_00003EC8, s32, 0x14) - sceDisplayGetCurrentHcount(), -1);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/display", sceDisplayIsVsync);

s32 sceDisplayWaitVblankStart(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = sceKernelWaitEventFlag(D_00003EF8, 1U, 1, NULL, NULL);
    setK1(temp_s0);
    return temp_v0;
}

s32 sceDisplayWaitVblankStartCB(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = sceKernelWaitEventFlagCB(D_00003EF8, 1U, 1, NULL, NULL);
    setK1(temp_s0);
    return temp_v0;
}

s32 sceDisplayIsPseudoField(void) {
    return D_00003EF0 != 0;
}
#endif

INCLUDE_ASM("nonmatchings/display", func_00002C7C);

INCLUDE_ASM("nonmatchings/display", func_00002C9C);

INCLUDE_ASM("nonmatchings/display", func_00002CC0);

INCLUDE_ASM("nonmatchings/display", func_00002CF8);

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
