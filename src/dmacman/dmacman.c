#include "common.h"
#include "dmacman_decls.h"

INCLUDE_ASM("nonmatchings/dmacman", module_start);

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaExit);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaRegisterDdrFlush);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dmacman", _sceDmacManSuspendHandler);

INCLUDE_ASM("nonmatchings/dmacman", _sceDmacManResumeHandler);

s32 sceKernelDmaChExclude(s32 ch, s32 enable)
{
    s32 dmac = ch / 8;
    u32 bit = 1 << (ch - dmac * 8);

    if (g_dmaCh.reserved[dmac] & bit)
        return 0x800202C8;
    if (enable != 0)
        g_dmaCh.excluded[dmac] |= bit;
    else
        g_dmaCh.excluded[dmac] &= ~bit;
    return 0;
}

s32 sceKernelDmaChReserve(s32 ch, s32 enable)
{
    s32 dmac = ch / 8;
    u32 bit = 1 << (ch - dmac * 8);

    if (g_dmaCh.excluded[dmac] & bit)
        return 0x800202C9;
    if (enable >= 0)
        g_dmaCh.reserved[dmac] |= bit;
    else
        g_dmaCh.reserved[dmac] &= ~bit;
    return 0;
}

s32 sceKernelDmaSoftRequest(s32 dmac, s32 ch, s32 burst, s32 last)
{
    SceDmacRegs *regs;

    dmac = (dmac != 0);
    regs = (SceDmacRegs *)(DMAC0_BASE + (dmac << 20));
    if (last == 0) {
        if (burst != 0)
            regs->softBReq = 1 << ch;
        else
            regs->softSReq = 1 << ch;
    } else {
        if (burst != 0)
            regs->softLBReq = 1 << ch;
        else
            regs->softLSReq = 1 << ch;
    }
    __asm__ volatile("sync");
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaSoftRequest);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpAlloc);
#endif

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpFree);

#if FW_VERSION == 100
s32 sceKernelDmaOpAssign(SceDmaOp *op, s32 chMask0, s32 chMask1, u32 config)
{
    if (op == NULL)
        return 0x800202CF;
    if (op->flag & SCE_DMAOP_FREE)
        return 0x800202C3;
    if (op->flag & SCE_DMAOP_QUEUED)
        return 0x800202BE;
    if (op->flag & SCE_DMAOP_RUNNING)
        return 0x800202C0;
    op->config = config;
    op->chMask0 = chMask0;
    op->chMask1 = chMask1;
    op->flag = SCE_DMAOP_ASSIGNED;
    return 0;
}

INCLUDE_ASM("nonmatchings/dmacman", _sceKernelDmaOpQueue);
#endif

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpEnQueue);

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpDeQueue);

#if FW_VERSION == 100
s32 sceKernelDmaOpAllCancel(void)
{
    s32 intr;
    s32 i;
    SceDmaOp *op;
    SceDmaOp *next;

    if (g_dmaQueueHead == NULL)
        return 0x800202BF;
    intr = sceKernelCpuSuspendIntr();
    for (i = 0; i < 16; i++) {
        if (g_dmaCh.op[i] != NULL) {
            sceKernelCpuResumeIntr(intr);
            return 0x800202C0;
        }
    }
    op = g_dmaQueueHead;
    while (op != NULL) {
        next = op;
        op = op->next;
        next->prev = NULL;
        next->next = NULL;
    }
    g_dmaQueueHead = NULL;
    g_dmaQueueTail = NULL;
    sceKernelCpuResumeIntr(intr);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpAllCancel);
#endif

#if FW_VERSION == 100
s32 sceKernelDmaOpSetCallback(SceDmaOp *op, SceDmaOpCallback callback, void *cookie)
{
    if (op == NULL)
        return 0x800202CF;
    if (op->flag & SCE_DMAOP_FREE)
        return 0x800202C3;
    if (!(op->flag & SCE_DMAOP_ASSIGNED))
        return 0x800202C1;
    if (op->flag & SCE_DMAOP_RUNNING)
        return 0x800202C0;
    if (op->flag & (SCE_DMAOP_ERROR | SCE_DMAOP_QUIT | SCE_DMAOP_DONE))
        return 0x800202C4;
    op->callback = callback;
    op->cookie = cookie;
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpSetCallback);
#endif

#if FW_VERSION == 100
s32 sceKernelDmaOpSetupMemcpy(SceDmaOp *op, u32 dst, u32 src, u32 size)
{
    if (op == NULL)
        return 0x800202CF;
    if (op->flag & SCE_DMAOP_FREE)
        return 0x800202C3;
    if (!(op->flag & SCE_DMAOP_ASSIGNED))
        return 0x800202C1;
    if (op->flag & SCE_DMAOP_RUNNING)
        return 0x800202C0;
    if (op->flag & (SCE_DMAOP_ERROR | SCE_DMAOP_QUIT | SCE_DMAOP_DONE))
        return 0x800202C4;
    if (size >= 0x1000)
        return 0x800202CE;
    op->srcAddr = src;
    op->dstAddr = dst;
    op->lli = 0;
    op->control = size | 0x8C4BF000;
    op->config |= 0xC001;
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpSetupMemcpy);
#endif

#if FW_VERSION == 100
s32 sceKernelDmaOpSetupNormal(SceDmaOp *op, u32 config, u32 dst, u32 src, u32 control)
{
    if (op == NULL)
        return 0x800202CF;
    if (op->flag & SCE_DMAOP_FREE)
        return 0x800202C3;
    if (!(op->flag & SCE_DMAOP_ASSIGNED))
        return 0x800202C1;
    if (op->flag & SCE_DMAOP_RUNNING)
        return 0x800202C0;
    if (op->flag & (SCE_DMAOP_ERROR | SCE_DMAOP_QUIT | SCE_DMAOP_DONE))
        return 0x800202C4;
    op->srcAddr = src;
    op->dstAddr = dst;
    op->lli = 0;
    op->control = control | 0x80000000;
    op->config |= config | 0xC001;
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpSetupNormal);
#endif

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpSetupLink);

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpSync);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dmacman", func_00000B28);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/dmacman", func_00000B2C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/dmacman", func_00000B5C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dmacman", _sceKernelDmaOpStop);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dmacman", func_00000B10);
#endif

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpQuit);

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpConcatenate);

#if FW_VERSION == 100
s32 _sceKernelDmaOpChCheck(SceDmaOp **ops, u32 n) {
    SceDmaOp *op;
    u32 count;
    s32 i;

    op = *ops;
    count = 0;
    i = 0;
    do {
        count += (((op->chMask1 << 8) | op->chMask0) >> i) & 1;
        i++;
    } while (i < 16);
    return count >= n;
}
#endif

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpAssignMultiple);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/dmacman", D_00001DF0);

INCLUDE_RODATA("nonmatchings/dmacman", D_00001DF4);

INCLUDE_RODATA("nonmatchings/dmacman", D_00001E14);

INCLUDE_RODATA("nonmatchings/dmacman", D_00001E2C);

INCLUDE_RODATA("nonmatchings/dmacman", D_00001E44);

INCLUDE_RODATA("nonmatchings/dmacman", D_00001E5C);

INCLUDE_RODATA("nonmatchings/dmacman", D_00001E6C);

INCLUDE_RODATA("nonmatchings/dmacman", D_00001E94);

INCLUDE_RODATA("nonmatchings/dmacman", D_00001EA8);

INCLUDE_RODATA("nonmatchings/dmacman", D_00001F78);

INCLUDE_RODATA("nonmatchings/dmacman", D_00001F94);

INCLUDE_RODATA("nonmatchings/dmacman", D_00001F98);

INCLUDE_RODATA("nonmatchings/dmacman", D_00001F9C);

INCLUDE_RODATA("nonmatchings/dmacman", D_00001FAC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dmacman", func_0000108C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dmacman", func_000010BC);

INCLUDE_ASM("nonmatchings/dmacman", func_00001458);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/dmacman", func_00001114);

INCLUDE_ASM("nonmatchings/dmacman", func_000014C8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dmacman", func_00001418);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaChExclude);

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaChReserve);

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpAlloc);

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpAssign);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpLLIConcatenate);
#endif

s32 sceKernelDmaOnDebugMode(void) {
    return 0;
}

#if FW_VERSION == 100
s32 sceKernelDmaOpFreeLink(SceDmaOp *op)
{
    if (op == NULL)
        return 0x800202CF;
    if (op->flag & SCE_DMAOP_FREE)
        return 0x800202C3;
    if (!(op->flag & SCE_DMAOP_ASSIGNED))
        return 0x800202C1;
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpFreeLink);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dmacman", func_00001A08);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dmacman", func_00001B04);

INCLUDE_ASM("nonmatchings/dmacman", func_00001B84);

INCLUDE_ASM("nonmatchings/dmacman", func_00001BA4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/dmacman", func_00001A8C);

INCLUDE_ASM("nonmatchings/dmacman", func_00001B00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dmacman", _sceKernelDmaInterrupt);

INCLUDE_ASM("nonmatchings/dmacman", _sceKernelDmaSchedule);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dmacman", func_00001A78);

INCLUDE_ASM("nonmatchings/dmacman", func_00001B08);

INCLUDE_ASM("nonmatchings/dmacman", func_00001B88);

INCLUDE_ASM("nonmatchings/dmacman", func_00001BA8);
#endif
