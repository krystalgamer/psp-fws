/* cflags[100]: -O2 */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "systimer_decls.h"

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/systimer", sceSTimerAlloc);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
s32 func_000000E0(s32 arg0, SceSTimerInfo *timer, s32 arg2) {
    u32 data;
    u32 intrCount;
    u32 cycle;

    if (timer->cb == NULL) {
        return -1;
    }
    data = timer->regadr->timerData;
    cycle = __builtin_allegrex_ext(data, 0, 22);
    intrCount = data >> 24;
    if (timer->prev_tmcy != 0) {
        intrCount--;
        timer->totalcount += timer->prev_tmcy;
    }
    timer->totalcount += cycle * (intrCount - timer->prev_icnt);
    timer->prev_tmcy = 0;
    timer->prev_icnt = 0;
    if (timer->cb(timer->timid, timer->totalcount + _sceSTimerGetCount(timer), (s32)timer->common, arg2) != -1) {
        goto stop;
    }
    return -1;
stop:
    _sceSTimerStopCount(timer);
    return -2;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/systimer", func_000000E0);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/systimer", sceSTimerSetHandler);

void _sceSTimerStopCount(SceSTimerInfo *timer) {
    timer->regadr->timerData = timer->regadr->nowData & 0x7F7FFFFF;
}

INCLUDE_ASM("nonmatchings/systimer", _sceSTimerGetCount);
#endif

INCLUDE_ASM("nonmatchings/systimer", module_bootstart);

#if FW_VERSION == 100
s32 module_reboot_before(void) {
    s32 oldIntr = sceKernelCpuSuspendIntr();
    s32 i;

    for (i = 0; i < 4; i++) {
        _sceSTimerStopCount(&g_timerCB.SYSTMR[i]);
        sceKernelReleaseIntrHandler(g_timerCB.SYSTMR[i].intrcode);
    }
    sceKernelCpuResumeIntr(oldIntr);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/systimer", module_reboot_before);
#endif

#if FW_VERSION == 100
void func_00000128(SceSTimerInfo *timer) {
    timer->regadr->timerData = 0x80000000;
    timer->regadr->prsclNumerator = -1;
    timer->regadr->prsclDenominator = -1;
    timer->regadr->timerData;
    timer->common = NULL;
    timer->timid = -1;
    timer->prev_icnt = 0;
    timer->cb = NULL;
    timer->totalcount = 0;
    timer->prev_tmcy = 0;
}

s32 suspendSTimer(void) {
    s32 i;

    for (i = 0; i < 4; i++) {
        SceHwTimer *reg = g_timerCB.SYSTMR[i].regadr;
        STimerRegSave[i].Control = reg->timerData;
        STimerRegSave[i].N = reg->prsclNumerator;
        STimerRegSave[i].M = reg->prsclDenominator;
        sceKernelDisableIntr(g_timerCB.SYSTMR[i].intrcode);
    }
    return 0;
}

s32 resumeSTimer(void) {
    s32 i;

    for (i = 0; i < 4; i++) {
        u32 control;

        g_timerCB.SYSTMR[i].regadr->prsclDenominator = STimerRegSave[i].M;
        g_timerCB.SYSTMR[i].regadr->prsclNumerator = STimerRegSave[i].N;
        control = STimerRegSave[i].Control;
        g_timerCB.SYSTMR[i].regadr->timerData;
        g_timerCB.SYSTMR[i].regadr->timerData = control & 0x7FFFFFFF;
        sceKernelEnableIntr(g_timerCB.SYSTMR[i].intrcode);
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/systimer", sceSTimerAlloc);

s32 sceSTimerFree(s32 timerId) {
    SceSTimerInfo *timer;
    s32 oldIntr;

    if (sceKernelIsIntrContext()) {
        return 0x80020064;
    }
    timer = &g_timerCB.SYSTMR[timerId & 3];
    if (timer->timid != timerId) {
        return 0x80020097;
    }
    oldIntr = sceKernelCpuSuspendIntr();
    _sceSTimerStopCount(timer);
    sceKernelDisableIntr(timer->intrcode);
    func_00000128(timer);
    timer->timid = -1;
    sceKernelCpuResumeIntr(oldIntr);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/systimer", sceSTimerFree);
#endif

s32 sceSTimerSetPrscl(s32 timerId, s32 numerator, s32 denominator) {
    SceSTimerInfo *timer = &g_timerCB.SYSTMR[timerId & 3];
    s32 oldIntr;

    if (timer->timid != timerId) {
        return 0x80020097;
    }
    if (numerator == 0 || denominator == 0) {
        return 0x80020099;
    }
    if ((u32)denominator / (u32)numerator < 12) {
        return 0x80020099;
    }
    oldIntr = sceKernelCpuSuspendIntr();
    if (timer->regadr->nowData & 0x800000) {
        sceKernelCpuResumeIntr(oldIntr);
        return 0x8002009A;
    }
    timer->regadr->prsclNumerator = numerator;
    timer->regadr->prsclDenominator = denominator;
    sceKernelCpuResumeIntr(oldIntr);
    return 0;
}

#if FW_VERSION == 100
s32 systimerhandler(s32 arg0, SceSTimerInfo *timer, s32 arg2) {
    u32 data;
    u32 intrCount;
    u32 cycle;

    if (timer->cb == NULL) {
        return -1;
    }
    data = timer->regadr->timerData;
    cycle = data & 0x3FFFFF;
    intrCount = data >> 24;
    if (timer->prev_tmcy != 0) {
        intrCount--;
        timer->totalcount += timer->prev_tmcy;
    }
    timer->totalcount += cycle * (intrCount - timer->prev_icnt);
    timer->prev_tmcy = 0;
    timer->prev_icnt = 0;
    if (timer->cb(timer->timid, timer->totalcount + _sceSTimerGetCount(timer), (s32)timer->common, arg2) != -1) {
        goto stop;
    }
    return -1;
stop:
    _sceSTimerStopCount(timer);
    return -2;
}

INCLUDE_ASM("nonmatchings/systimer", sceSTimerSetHandler);
#endif

s32 sceSTimerStartCount(s32 timerId) {
    SceSTimerInfo *timer = &g_timerCB.SYSTMR[timerId & 3];
    s32 oldIntr;

    if (timer->timid != timerId) {
        return 0x80020097;
    }
    oldIntr = sceKernelCpuSuspendIntr();
    if (timer->regadr->nowData & 0x800000) {
        sceKernelCpuResumeIntr(oldIntr);
        return 0x8002009A;
    }
    timer->regadr->timerData = timer->regadr->nowData | 0x800000;
    sceKernelCpuResumeIntr(oldIntr);
    return 0;
}

s32 sceSTimerStopCount(s32 timerId) {
    SceSTimerInfo *timer = &g_timerCB.SYSTMR[timerId & 3];
    s32 oldIntr;

    if (timer->timid != timerId) {
        return 0x80020097;
    }
    oldIntr = sceKernelCpuSuspendIntr();
    _sceSTimerStopCount(timer);
    sceKernelCpuResumeIntr(oldIntr);
    return 0;
}

#if FW_VERSION == 100
void _sceSTimerStopCount(SceSTimerInfo *timer) {
    timer->regadr->timerData = timer->regadr->nowData & 0x7F7FFFFF;
}
#endif

s32 sceSTimerResetCount(s32 timerId) {
    SceSTimerInfo *timer = &g_timerCB.SYSTMR[timerId & 3];
    s32 oldIntr;

    if (timer->timid != timerId) {
        return 0x80020097;
    }
    oldIntr = sceKernelCpuSuspendIntr();
    timer->regadr->timerData |= 0x80000000;
    timer->totalcount = 0;
    sceKernelCpuResumeIntr(oldIntr);
    return 0;
}

s32 sceSTimerGetCount(s32 timerId, s32 *count) {
    SceSTimerInfo *timer = &g_timerCB.SYSTMR[timerId & 3];
    s32 oldIntr;

    if (timer->timid != timerId) {
        return 0x80020097;
    }
    oldIntr = sceKernelCpuSuspendIntr();
    *count = _sceSTimerGetCount(timer);
    sceKernelCpuResumeIntr(oldIntr);
    return 0;
}

#if FW_VERSION == 100
s32 _sceSTimerGetCount(SceSTimerInfo *timer) {
    u32 now = timer->regadr->nowData & 0x3FFFFF;
    u32 base = timer->regadr->baseTime & 0x3FFFFF;
    return now - base;
}
#endif

#if FW_VERSION < 250
s32 sceSTimerSetTMCY(s32 timerId, u32 cycle) {
    SceSTimerInfo *timer = &g_timerCB.SYSTMR[timerId & 3];
    s32 oldIntr;
    u32 now;
    u32 intrCount;
    u32 count;

    if (timer->timid != timerId) {
        return 0x80020097;
    }
    oldIntr = sceKernelCpuSuspendIntr();
    now = timer->regadr->nowData;
    if (cycle > 0x3FFFFF) {
        cycle = 0x3FFFFF;
    }
    intrCount = now >> 24;
    count = now & 0x3FFFFF;
    timer->totalcount += count * (intrCount - timer->prev_icnt);
    timer->prev_icnt = intrCount;
    timer->prev_tmcy = count;
    timer->regadr->timerData = (timer->regadr->nowData & 0xFFC00000) | cycle;
    sceKernelCpuResumeIntr(oldIntr);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/systimer", sceSTimerSetTMCY);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/systimer", func_00000878);

INCLUDE_ASM("nonmatchings/systimer", func_000008F0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/systimer", func_00000864);

INCLUDE_ASM("nonmatchings/systimer", func_000008DC);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/systimer", D_00000A40);

INCLUDE_RODATA("nonmatchings/systimer", D_00000A44);

INCLUDE_RODATA("nonmatchings/systimer", D_00000A64);

INCLUDE_RODATA("nonmatchings/systimer", D_00000A78);

INCLUDE_RODATA("nonmatchings/systimer", D_00000A98);

INCLUDE_RODATA("nonmatchings/systimer", D_00000AAC);

INCLUDE_RODATA("nonmatchings/systimer", D_00000AF4);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/systimer", D_00000B10_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/systimer", D_00000B10_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/systimer", D_00000B10_v350);
#endif
