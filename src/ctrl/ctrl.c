/* cflags: -O2 -frename-registers */
#include "common.h"
#include "ctrl_decls.h"

INCLUDE_ASM("nonmatchings/ctrl", sceCtrlInit);

INCLUDE_ASM("nonmatchings/ctrl", sceCtrlEnd);

INCLUDE_ASM("nonmatchings/ctrl", func_000001C0);

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/ctrl", func_000002F0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/ctrl", func_00000300);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/ctrl", func_00000294);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ctrl", func_00000334);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/ctrl", func_00000418);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/ctrl", func_00000428);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ctrl", func_000003D4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ctrl", func_000003B0);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/ctrl", func_00000470);
#endif

INCLUDE_ASM("nonmatchings/ctrl", func_00000804);

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/ctrl", sceCtrlSetSamplingMode);

INCLUDE_ASM("nonmatchings/ctrl", sceCtrlGetSamplingMode);
#endif

INCLUDE_ASM("nonmatchings/ctrl", sceCtrlSetSamplingCycle);

INCLUDE_ASM("nonmatchings/ctrl", sceCtrlPeekLatch);

INCLUDE_ASM("nonmatchings/ctrl", sceCtrlReadLatch);

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/ctrl", func_00000CC4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 sceCtrlGetIdleCancelKey(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    if (arg0 != NULL) {
        *arg0 = D_00002618;
    }
    if (arg1 != NULL) {
        *arg1 = D_0000261C;
    }
    if (arg2 != NULL) {
        *arg2 = D_00002620;
    }
    if (arg3 != NULL) {
        *arg3 = D_00002624;
    }
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 sceCtrlGetIdleCancelKey(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    if (arg0 != NULL) {
        *arg0 = D_000027A4;
    }
    if (arg1 != NULL) {
        *arg1 = D_000027A8;
    }
    if (arg2 != NULL) {
        *arg2 = D_000027AC;
    }
    if (arg3 != NULL) {
        *arg3 = D_000027B0;
    }
    return 0;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/ctrl", sceCtrlSetIdleCancelThreshold);

INCLUDE_ASM("nonmatchings/ctrl", sceCtrlGetIdleCancelThreshold);
#endif

INCLUDE_ASM("nonmatchings/ctrl", sceCtrlSetButtonIntercept);

#if FW_VERSION < 103
s32 sceCtrlGetButtonIntercept(u32 mask) {
    s32 intr;
    s32 ret = 0;
    u32 support;
    u32 apply;

    intr = sceKernelCpuSuspendIntr();
    support = D_00001D70.maskSupportButtons & mask;
    apply = D_00001D70.maskApplyButtons & mask;
    if (support == 0) {
        ret = 1;
    } else if (apply != 0) {
        ret = 2;
    }
    sceKernelCpuResumeIntr(intr);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/ctrl", sceCtrlGetButtonIntercept);
#endif

INCLUDE_ASM("nonmatchings/ctrl", sceCtrlSetRapidFire);

s32 module_start(void) {
    sceCtrlInit();
    return 0;
}

s32 module_reboot_before(void) {
    sceCtrlEnd();
    return 0;
}

s32 sceCtrlSuspend(void) {
    if (D_00001D70.samplingCycle == 0) {
        sceKernelDisableSubIntr(30, 19);
    } else {
        sceSTimerStopCount(D_00001D70.timerID);
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/ctrl", sceCtrlResume);

#if FW_VERSION < 260
s32 sceCtrlSetSamplingMode(u32 mode) {
    s32 intr;
    s32 prev;

    if (mode >= 2) {
        return 0x80000107;
    }
    intr = sceKernelCpuSuspendIntr();
    prev = D_00001D70.samplingMode;
    D_00001D70.samplingMode = mode;
    sceKernelCpuResumeIntr(intr);
    return prev;
}

INCLUDE_ASM("nonmatchings/ctrl", sceCtrlGetSamplingMode);
#endif

INCLUDE_ASM("nonmatchings/ctrl", sceCtrlGetSamplingCycle);

#if FW_VERSION < 282
s32 sceCtrlPeekBufferPositive(void *arg0, s32 arg1) {
    return func_00001298((s32) arg0, arg1, 0);
}

s32 sceCtrlPeekBufferNegative(void *arg0, s32 arg1) {
    return func_00001298((s32) arg0, arg1, 1);
}

s32 sceCtrlReadBufferPositive(void *arg0, s32 arg1) {
    return func_00001298((s32) arg0, arg1, 2);
}

s32 sceCtrlReadBufferNegative(void *arg0, s32 arg1) {
    return func_00001298((s32) arg0, arg1, 3);
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/ctrl", func_00001190);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/ctrl", sceCtrlSetSuspendingExtraSamples);

INCLUDE_ASM("nonmatchings/ctrl", sceCtrlGetSuspendingExtraSamples);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/ctrl", func_000011B0);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 sceCtrlSetIdleCancelKey(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_00001D70.unkA40 = arg3;
    D_00001D70.unkA34 = arg0;
    D_00001D70.unkA38 = arg1;
    D_00001D70.unkA3C = arg2;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
s32 sceCtrlSetIdleCancelKey(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_VFIELD(&D_00001D70, s32, 0xA44) = arg3;
    D_00001D70.unkA38 = arg0;
    D_00001D70.unkA3C = arg1;
    D_00001D70.unkA40 = arg2;
    return 0;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 sceCtrlSetPollingMode(s8 arg0) {
    D_00001D9F = arg0;
    return 0;
}
#endif

#if FW_VERSION == 100
s32 sceCtrlSetIdleCancelKey(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_00001D70.unkA38 = arg1;
    D_00001D70.unkA34 = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ctrl", sceCtrlSetSuspendingExtraSamples);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceCtrlSetSuspendingExtraSamples(u32 arg0) {
    s32 var_v1;

    var_v1 = 0x800001FE;
    if (arg0 < 0x12DU) {
        D_00001BFC = arg0;
        var_v1 = 0;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 sceCtrlGetSuspendingExtraSamples(void) {
    return (s32) D_00001BFC;
}
#endif

#if FW_VERSION == 100
s32 sceCtrlGetIdleCancelKey(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    if (arg0 != NULL) {
        *arg0 = D_00002354;
    }
    if (arg1 != NULL) {
        *arg1 = D_00002358;
    }
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 sceCtrlPeekBufferPositive(void *arg0, s32 arg1) {
    return func_0000161C((s32) arg0, arg1, 0);
}

s32 sceCtrlPeekBufferNegative(void *arg0, s32 arg1) {
    return func_0000161C((s32) arg0, arg1, 1);
}

s32 sceCtrlReadBufferPositive(void *arg0, s32 arg1) {
    return func_0000161C((s32) arg0, arg1, 2);
}

s32 sceCtrlReadBufferNegative(void *arg0, s32 arg1) {
    return func_0000161C((s32) arg0, arg1, 3);
}
#endif

#if FW_VERSION >= 350
s32 sceCtrlSetIdleCancelKey(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_VFIELD(&D_00001D70, s32, 0xA44) = arg3;
    D_00001D70.unkA38 = arg0;
    D_00001D70.unkA3C = arg1;
    D_00001D70.unkA40 = arg2;
    return 0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 sceCtrlSetIdleCancelKey(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_00001D70.unkA40 = arg3;
    D_00001D70.unkA34 = arg0;
    D_00001D70.unkA38 = arg1;
    D_00001D70.unkA3C = arg2;
    return 0;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/ctrl", sceCtrlSetPollingMode);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 sceCtrlSetPollingMode(s8 arg0) {
    D_00001D7F = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ctrl", sceCtrlSetSuspendingExtraSamples);

s32 sceCtrlGetSuspendingExtraSamples(void) {
    return D_00001D88;
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/ctrl", sceCtrlSetSpecialButtonCallback);
#endif

#if FW_VERSION >= 350
s32 sceCtrl_driver_CC70B61E(void) {
    D_00001DCE = 1;
    return 0;
}
#endif

#if FW_VERSION < 103 || (FW_VERSION >= 260 && FW_VERSION < 350)
s32 sceCtrlClearRapidFire(u32 slot) {
    if (slot >= 16) {
        return 0x80000102;
    }
    D_00001D70.rapidFire[slot].uiMask = 0;
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/ctrl", sceCtrlClearRapidFire);
#endif

#if FW_VERSION < 282
s32 func_000011E4(void) {
    return 0x80000003;
}

s32 func_000011F0(void) {
    return 0x80000003;
}

s32 func_000011FC(void) {
    return 0x80000003;
}

s32 func_00001208(void) {
    return 0x80000003;
}

s32 func_00001214(void) {
    return 0x80000003;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ctrl", func_00001544);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 func_000015C0(void) {
    D_00001D70.pad0[0x11] = 0;
    D_00001D70.pad0[0xE] = D_00001D70.pad0[0x8A];
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
s32 func_000015C0(void) {
    D_00001D70.pad0[0x15] = 0;
    M2C_FIELD(&D_00001D70, s32 *, 0x10) = (s32) D_00001D70.pad0[0x8E];
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00001220(void) {
    func_00000804(M2C_VFIELD(&D_00001D70, s32, 0xA20) & 0xFFFF0C06, (s32) D_00001D70.pad0[0xA2C], (s32) D_00001D70.pad0[0xA2D]);
    sceKernelSetEventFlag(M2C_VFIELD(&D_00001D70, s32, 4), 1U);
    return 0;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/ctrl", func_00001220);
#endif

#if FW_VERSION < 103
s32 func_00001220(void) {
    func_00000804(M2C_VFIELD(&D_00001D70, s32, 0xA1C) & 0xFFFF0C06, (s32) D_00001D70.pad0[0xA28], (s32) D_00001D70.pad0[0xA29]);
    sceKernelSetEventFlag(M2C_VFIELD(&D_00001D70, s32, 4), 1U);
    return 0;
}
#endif

#if FW_VERSION >= 103 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/ctrl", func_00001270);
#endif

#if FW_VERSION < 103
s32 func_00001270(void) {
    D_00001D70.unk14 &= ~2;
    D_00001D70.unk10 = D_00001D70.unk8A;
    return 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ctrl", func_00001298);
#else
s32 func_00001548(void) {
    return 0x80000003;
}

s32 func_00001554(void) {
    return 0x80000003;
}

s32 func_00001560(void) {
    return 0x80000003;
}

s32 func_0000156C(void) {
    return 0x80000003;
}

s32 func_00001578(void) {
    return 0x80000003;
}

INCLUDE_ASM("nonmatchings/ctrl", func_00001584);
#endif

#if FW_VERSION == 282 || FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/ctrl", func_00001600);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
s32 func_00001600(void) {
    D_00001D70.pad0[0x11] = 0;
    D_00001D70.pad0[0xE] = D_00001D70.pad0[0x8A];
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ctrl", func_0000161C);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/ctrl", D_00001A44);

INCLUDE_RODATA("nonmatchings/ctrl", D_00001A48);

INCLUDE_RODATA("nonmatchings/ctrl", D_00001A5C);

INCLUDE_RODATA("nonmatchings/ctrl", D_00001A74);

INCLUDE_RODATA("nonmatchings/ctrl", D_00001A90);

INCLUDE_RODATA("nonmatchings/ctrl", D_00001AB0);

INCLUDE_RODATA("nonmatchings/ctrl", D_00001AC8);

INCLUDE_RODATA("nonmatchings/ctrl", D_00001AE0);

INCLUDE_RODATA("nonmatchings/ctrl", D_00001AF8);

INCLUDE_RODATA("nonmatchings/ctrl", D_00001B10);

INCLUDE_RODATA("nonmatchings/ctrl", D_00001B24);

INCLUDE_RODATA("nonmatchings/ctrl", D_00001B44);

INCLUDE_RODATA("nonmatchings/ctrl", D_00001B4C);

INCLUDE_RODATA("nonmatchings/ctrl", D_00001BEC);

INCLUDE_RODATA("nonmatchings/ctrl", D_00001BFC);

INCLUDE_RODATA("nonmatchings/ctrl", D_00001CF4);

INCLUDE_RODATA("nonmatchings/ctrl", D_00001D0C);

INCLUDE_RODATA("nonmatchings/ctrl", D_00001D10);

INCLUDE_RODATA("nonmatchings/ctrl", D_00001D28);

INCLUDE_RODATA("nonmatchings/ctrl", D_00001D2C);

INCLUDE_RODATA("nonmatchings/ctrl", D_00001D48);

INCLUDE_RODATA("nonmatchings/ctrl", D_00001D4C);

INCLUDE_RODATA("nonmatchings/ctrl", D_00001D50);

INCLUDE_RODATA("nonmatchings/ctrl", D_00001D58);
#endif

INCLUDE_RODATA("nonmatchings/ctrl", D_00001D20);
