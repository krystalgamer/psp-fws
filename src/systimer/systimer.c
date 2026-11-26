/* cflags[100]: -O2 */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "systimer_decls.h"

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/systimer", sceSTimerAlloc);

INCLUDE_ASM("nonmatchings/systimer", func_000000E0);

INCLUDE_ASM("nonmatchings/systimer", sceSTimerSetHandler);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000002B4(void **arg0) {
    void *temp_a2;

    temp_a2 = *arg0;
    M2C_FIELD(temp_a2, s32 *, 0) = (s32) (M2C_FIELD(temp_a2, s32 *, 0x100) & 0x7F7FFFFF);
}

INCLUDE_ASM("nonmatchings/systimer", func_000002D0);
#endif

#if FW_VERSION >= 282
void func_000002B0(void **arg0) {
    struct Unk_func_000002B0_temp_a2 *temp_a2;

    temp_a2 = *arg0;
    temp_a2->unk0 = (s32) (temp_a2->unk100 & 0x7F7FFFFF);
}

INCLUDE_ASM("nonmatchings/systimer", func_000002CC);
#endif

INCLUDE_ASM("nonmatchings/systimer", module_bootstart);

#if FW_VERSION == 100
s32 module_reboot_before(void) {
    s32 oldIntr = sceKernelCpuSuspendIntr();
    s32 i;

    for (i = 0; i < 4; i++) {
        _sceSTimerStopCount(&D_00000B20[i]);
        sceKernelReleaseIntrHandler(D_00000B20[i].intrcode);
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

INCLUDE_ASM("nonmatchings/systimer", func_00000160);

INCLUDE_ASM("nonmatchings/systimer", func_000001D8);

INCLUDE_ASM("nonmatchings/systimer", sceSTimerAlloc);
#endif

INCLUDE_ASM("nonmatchings/systimer", sceSTimerFree);

INCLUDE_ASM("nonmatchings/systimer", sceSTimerSetPrscl);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/systimer", func_000004C0);

INCLUDE_ASM("nonmatchings/systimer", sceSTimerSetHandler);
#endif

INCLUDE_ASM("nonmatchings/systimer", sceSTimerStartCount);

INCLUDE_ASM("nonmatchings/systimer", sceSTimerStopCount);

#if FW_VERSION == 100
void _sceSTimerStopCount(SceSTimerInfo *timer) {
    timer->regadr->timerData = timer->regadr->nowData & 0x7F7FFFFF;
}
#endif

INCLUDE_ASM("nonmatchings/systimer", sceSTimerResetCount);

INCLUDE_ASM("nonmatchings/systimer", sceSTimerGetCount);

#if FW_VERSION == 100
s32 _sceSTimerGetCount(SceSTimerInfo *timer) {
    u32 now = timer->regadr->nowData & 0x3FFFFF;
    u32 base = timer->regadr->baseTime & 0x3FFFFF;
    return now - base;
}
#endif

INCLUDE_ASM("nonmatchings/systimer", sceSTimerSetTMCY);

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
