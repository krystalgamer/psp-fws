/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -frename-registers -mext */
/* cflags[150-352]: -O2 -frename-registers */
#include "common.h"
#include "dmacman_decls.h"

#if FW_VERSION < 150
s32 module_start(SceSize args, void *argp)
{
    s32 intr;
    s32 i;
    s32 j;
    s32 k;
    SceDmacRegs *regs;

    intr = sceKernelCpuSuspendIntr();
    memset(g_dmaOps, 0, sizeof(g_dmaOps));
    g_dmaOps[0].next = &g_dmaOps[1];
    g_dmaFreeOp = &g_dmaOps[0];
    for (i = 1; i < 128; i++) {
        g_dmaOps[i].prev = &g_dmaOps[i - 1];
        g_dmaOps[i].next = &g_dmaOps[i + 1];
        g_dmaOps[i - 1].flag = SCE_DMAOP_FREE;
    }
    g_dmaQueueHead = NULL;
    g_dmaQueueTail = NULL;
    g_dmaOps[127].flag = SCE_DMAOP_FREE;
    g_dmaOps[127].next = NULL;
    sceKernelRegisterSuspendHandler(20, _sceDmacManSuspendHandler, NULL);
    sceKernelRegisterResumeHandler(20, _sceDmacManResumeHandler, NULL);
    if (sceKernelRegisterIntrHandler(22, 1, _sceKernelDmaInterrupt, 0, NULL) < 0)
        goto fail22;
    if (sceKernelRegisterIntrHandler(23, 1, _sceKernelDmaInterrupt, 1, NULL) < 0)
        goto fail23;
    if (sceKernelEnableIntr(22) < 0)
        goto failEn22;
    if (sceKernelEnableIntr(23) < 0)
        goto failEn23;
    *(volatile u32 *)0xBC100050 |= 0x60;
    for (j = 0; j < 2; j++) {
        regs = (SceDmacRegs *)((j == 0) ? DMAC0_BASE : DMAC1_BASE);
        regs->config |= 1;
        regs->sync = 0;
        for (k = 0; k < 8; k++) {
            regs->ch[k].srcAddr = 0;
            regs->ch[k].dstAddr = 0;
            regs->ch[k].lli = 0;
            regs->ch[k].control = 0;
            regs->ch[k].config = 0;
        }
        regs->intTCClear = 0xFF;
        regs->intErrClr = 0xFF;
    }
    sceKernelCpuResumeIntr(intr);
    return 0;

failEn23:
    sceKernelReleaseIntrHandler(23);
    sceKernelReleaseIntrHandler(22);
    goto fail;
failEn22:
    sceKernelReleaseIntrHandler(22);
    sceKernelReleaseIntrHandler(23);
    goto fail;
fail23:
    sceKernelReleaseIntrHandler(22);
    goto fail;
fail22:
    sceKernelReleaseIntrHandler(23);
fail:
    sceKernelCpuResumeIntr(intr);
    return 0x800202BC;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 module_start(SceSize args, void *argp)
{
    s32 intr;
    s32 i;

    intr = sceKernelCpuSuspendIntr();
    memset(g_dmaOps, 0, sizeof(g_dmaOps));
    g_dmaOps[0].next = &g_dmaOps[1];
    g_dmaFreeOp = &g_dmaOps[0];
    for (i = 1; i < 128; i++) {
        g_dmaOps[i].prev = &g_dmaOps[i - 1];
        g_dmaOps[i].next = &g_dmaOps[i + 1];
        g_dmaOps[i - 1].flag = SCE_DMAOP_FREE;
    }
    g_dmaQueueHead = NULL;
    g_dmaOps[127].next = NULL;
    g_dmaQueueTail = NULL;
    g_dmaOps[127].flag = SCE_DMAOP_FREE;
    sceKernelRegisterSuspendHandler(20, _sceDmacManSuspendHandler, NULL);
    sceKernelRegisterResumeHandler(20, _sceDmacManResumeHandler, NULL);
    if (sceKernelRegisterIntrHandler(22, 1, _sceKernelDmaInterrupt, 0, NULL) < 0)
        goto fail22;
    if (sceKernelRegisterIntrHandler(23, 1, _sceKernelDmaInterrupt, 1, NULL) < 0)
        goto fail23;
    if (sceKernelEnableIntr(22) < 0)
        goto failEn22;
    if (sceKernelEnableIntr(23) < 0)
        goto failEn23;
    sceKernelCpuResumeIntr(intr);
    return 0;

failEn23:
    sceKernelReleaseIntrHandler(23);
    sceKernelReleaseIntrHandler(22);
    goto fail;
failEn22:
    sceKernelReleaseIntrHandler(22);
    sceKernelReleaseIntrHandler(23);
    goto fail;
fail23:
    sceKernelReleaseIntrHandler(22);
    goto fail;
fail22:
    sceKernelReleaseIntrHandler(23);
fail:
    sceKernelCpuResumeIntr(intr);
    return 0x800202BC;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/dmacman", module_start);
#else
s32 sceKernelDmaExit(void)
{
    s32 intr;
    s32 i;
    s32 j;
    s32 k;
    SceDmacChRegs *ch;
    SceDmacRegs *regs;

    intr = sceKernelCpuSuspendIntr();
    for (j = 0; j < 2; j++) {
        for (i = 0; i < 8; i++) {
            ch = (SceDmacChRegs *)(((j == 0) ? 0xBC900100 : 0xBCA00100) + i * 32);
            ch->config |= 0x40000;
            while (ch->config & 0x20000)
                ;
            ch->config &= ~1;
        }
    }
    sceKernelDmaOpAllCancel();
    for (j = 0; j < 2; j++) {
        regs = (SceDmacRegs *)((j == 0) ? DMAC0_BASE : DMAC1_BASE);
        regs->config &= ~1;
    }
    if (sceKernelReleaseIntrHandler(22) < 0) {
        sceKernelReleaseIntrHandler(23);
        goto fail;
    }
    if (sceKernelReleaseIntrHandler(23) < 0) {
        sceKernelReleaseIntrHandler(22);
        goto fail;
    }
    sceKernelCpuResumeIntr(intr);
    return 0;

fail:
    sceKernelCpuResumeIntr(intr);
    return 0x800202BC;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaExit);

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaRegisterDdrFlush);
#endif

#if FW_VERSION < 150
s32 _sceDmacManSuspendHandler(s32 unk, void *param)
{
    s32 i;
    s32 j;
    SceDmacRegs *regs;

    for (i = 0; i < 16; i++) {
        if (g_dmaCh.op[i] != NULL)
            _sceKernelDmaOpStop(g_dmaCh.op[i]);
    }
    sceKernelDmaOpAllCancel();
    for (j = 0; j < 2; j++) {
        regs = (SceDmacRegs *)((j == 0) ? DMAC0_BASE : DMAC1_BASE);
        regs->intTCStatus = 0xFF;
        regs->intErrorStatus = 0xFF;
        g_dmacSave.dmac[j].config = regs->config;
        g_dmacSave.dmac[j].sync = regs->sync;
        g_dmacSave.dmac[j].unk38 = regs->unk38;
    }
    g_dmacSave.clk = *(volatile u32 *)0xBC100050 & 0x60;
    sceKernelDisableIntr(22);
    sceKernelDisableIntr(23);
    return 0;
}

s32 _sceDmacManResumeHandler(s32 unk, void *param)
{
    s32 i;
    s32 j;
    SceDmacRegs *regs;

    *(volatile u32 *)0xBC100050 |= g_dmacSave.clk;
    for (j = 0; j < 2; j++) {
        regs = (SceDmacRegs *)((j == 0) ? DMAC0_BASE : DMAC1_BASE);
        regs->config = g_dmacSave.dmac[j].config;
        regs->sync = g_dmacSave.dmac[j].sync;
        regs->unk38 = g_dmacSave.dmac[j].unk38;
        for (i = 0; i < 8; i++) {
            regs->ch[i].srcAddr = 0;
            regs->ch[i].dstAddr = 0;
            regs->ch[i].lli = 0;
            regs->ch[i].control = 0;
            regs->ch[i].config = 0;
        }
    }
    sceKernelEnableIntr(22);
    sceKernelEnableIntr(23);
    return 0;
}

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
#endif

s32 sceKernelDmaSoftRequest(s32 dmac, s32 ch, s32 burst, s32 last)
{
    SceDmacRegs *regs;

    regs = (SceDmacRegs *)((dmac == 0) ? DMAC0_BASE : DMAC1_BASE);
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

#if FW_VERSION < 150
SceDmaOp *sceKernelDmaOpAlloc(void)
{
    s32 intr;
    SceDmaOp *op;

    intr = sceKernelCpuSuspendIntr();
    op = g_dmaFreeOp;
    if (op != NULL) {
        if (!(op->flag & SCE_DMAOP_FREE)) {
            sceKernelCpuResumeIntr(intr);
            return NULL;
        }
        op->flag = 0;
        op->chMask0 = -1;
        op->ch = -1;
        op->chMask1 = -1;
        op->callback = NULL;
        op->evid = sceKernelCreateEventFlag("SceDmacmanEvflag", 0, 0, NULL);
        g_dmaFreeOp = op->next;
        op->child = NULL;
        op->parent = NULL;
        sceKernelCpuResumeIntr(intr);
        return op;
    }
    sceKernelCpuResumeIntr(intr);
    return NULL;
}
#endif

#if FW_VERSION < 201
s32 sceKernelDmaOpFree(SceDmaOp *op)
{
    s32 ret;
    s32 intr;
    SceDmaOp *free;

    ret = 0x800202CF;
    intr = sceKernelCpuSuspendIntr();
    if (op == NULL)
        goto end;
    ret = 0x800202C3;
    if (op->flag & SCE_DMAOP_FREE)
        goto end;
    ret = 0x800202BE;
    if (op->flag & SCE_DMAOP_QUEUED)
        goto end;
    if (!(op->flag & SCE_DMAOP_RUNNING))
        goto free;
    ret = 0x800202C0;
end:
    sceKernelCpuResumeIntr(intr);
    return ret;

free:
    free = g_dmaFreeOp;
    op->ch = -1;
    op->unk34 = 0;
    op->srcAddr = 0;
    op->next = free;
    op->dstAddr = 0;
    op->prev = NULL;
    op->lli = 0;
    op->unk38 = 0;
    op->control = 0;
    op->unk3C = 0;
    op->config = 0;
    op->headLLI = NULL;
    op->callback = NULL;
    if (free != NULL)
        free->prev = op;
    op->flag = SCE_DMAOP_FREE;
    g_dmaFreeOp = op;
    sceKernelDeleteEventFlag(op->evid);
    sceKernelCpuResumeIntr(intr);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpFree);
#endif

#if FW_VERSION < 150
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

s32 sceKernelDmaOpEnQueue(SceDmaOp *op)
{
    s32 intr;
    s32 ret;
    SceDmaOp *cur;

    ret = 0;
    cur = op;
    if (op == NULL)
        return 0x800202CF;
    if (op->parent != NULL)
        return 0x800202CD;
    intr = sceKernelCpuSuspendIntr();
    do {
        if (cur->flag & SCE_DMAOP_QUEUED)
            ret = 0x800202BE;
        else if (cur->flag & SCE_DMAOP_FREE)
            ret = 0x800202C3;
        else if (!(cur->flag & SCE_DMAOP_ASSIGNED))
            ret = 0x800202C1;
        else if (cur->flag & SCE_DMAOP_RUNNING)
            ret = 0x800202C0;
        else if (cur->flag & (SCE_DMAOP_ERROR | SCE_DMAOP_QUIT | SCE_DMAOP_DONE))
            ret = 0x800202C4;
        if (ret < 0) {
            sceKernelCpuResumeIntr(intr);
            return ret;
        }
        cur = cur->child;
    } while (cur != NULL);
    _sceKernelDmaOpQueue(op);
    if (!(g_dmaQueueHead->flag & SCE_DMAOP_RUNNING))
        _sceKernelDmaSchedule();
    sceKernelCpuResumeIntr(intr);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpEnQueue);
#endif

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpDeQueue);

#if FW_VERSION < 201
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

#if FW_VERSION < 250
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

#if FW_VERSION < 250
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

#if FW_VERSION < 250
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

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/dmacman", _sceKernelDmaOpStop);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dmacman", func_00000B10);
#endif

#if FW_VERSION < 201
s32 sceKernelDmaOpQuit(SceDmaOp *op)
{
    s32 ret;
    s32 intr;

    ret = 0;
    intr = sceKernelCpuSuspendIntr();
    if (op == NULL)
        ret = 0x800202CF;
    else if (op->flag & SCE_DMAOP_FREE)
        ret = 0x800202C3;
    else if (!(op->flag & SCE_DMAOP_ASSIGNED))
        ret = 0x800202C1;
    else if (op->flag & SCE_DMAOP_DONE)
        ret = 0x800202BF;
    else if (op->flag & SCE_DMAOP_QUEUED)
        ret = 0x800202BE;
    else if (op->flag & SCE_DMAOP_ERROR)
        ret = 0x800202C7;
    else if (op->flag & SCE_DMAOP_QUIT)
        ret = 0x800202C6;
    else if (op->ch < 0 || op->ch >= 16 || !(op->flag & SCE_DMAOP_RUNNING))
        ret = 0x80020001;
    else {
        _sceKernelDmaOpStop(op);
        op->ch = -1;
    }
    sceKernelCpuResumeIntrWithSync(intr);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpQuit);
#endif

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpConcatenate);

#if FW_VERSION < 150
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
INCLUDE_ASM("nonmatchings/dmacman", _sceKernelDmaInterrupt);

INCLUDE_ASM("nonmatchings/dmacman", _sceKernelDmaSchedule);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dmacman", func_00001418);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceKernelDmaChExclude(s32 ch, s32 enable)
{
    u32 bit = 1 << ch;

    if (g_dmaCh.reserved & bit)
        return 0x800202C8;
    if (enable != 0) {
        g_dmaCh.excluded |= bit;
        _sceKernelDmacClkEnable((u32)ch >> 3);
    } else {
        g_dmaCh.excluded &= ~bit;
    }
    return 0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaChExclude);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceKernelDmaChReserve(s32 ch, s32 enable)
{
    u32 bit = 1 << ch;

    if (g_dmaCh.excluded & bit)
        return 0x800202C9;
    if (enable >= 0)
        g_dmaCh.reserved |= bit;
    else
        g_dmaCh.reserved &= ~bit;
    return 0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaChReserve);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
SceDmaOp *sceKernelDmaOpAlloc(void)
{
    s32 intr;
    SceDmaOp *op;

    intr = sceKernelCpuSuspendIntr();
    op = g_dmaFreeOp;
    if (op != NULL) {
        if (!(op->flag & SCE_DMAOP_FREE)) {
            sceKernelCpuResumeIntr(intr);
            return NULL;
        }
        op->chMask = 0xFFFF;
        op->flag = 0;
        op->callback = NULL;
        op->ch = -1;
        op->evid = sceKernelCreateEventFlag("SceDmacmanEvflag", 0, 0, NULL);
        g_dmaFreeOp = op->next;
        op->child = NULL;
        op->parent = NULL;
        sceKernelCpuResumeIntr(intr);
        return op;
    }
    sceKernelCpuResumeIntr(intr);
    return NULL;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpAlloc);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
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
    op->chMask = ((chMask1 & 0xFF) << 8) | (chMask0 & 0xFF);
    op->flag = SCE_DMAOP_ASSIGNED;
    return 0;
}
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpAssign);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpLLIConcatenate);
#endif

s32 sceKernelDmaOnDebugMode(void) {
    return 0;
}

#if FW_VERSION < 150
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

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 _sceDmacManSuspendHandler(s32 unk, void *param)
{
    s32 i;

    for (i = 0; i < 16; i++) {
        if (g_dmaCh.op[i] != NULL)
            _sceKernelDmaOpStop(g_dmaCh.op[i]);
    }
    g_dmaCh.unk48 = 0;
    sceKernelDmaOpAllCancel();
    sceKernelDisableIntr(22);
    sceKernelDisableIntr(23);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dmacman", _sceDmacManSuspendHandler);

INCLUDE_ASM("nonmatchings/dmacman", func_00001B04);

INCLUDE_ASM("nonmatchings/dmacman", func_00001B84);

INCLUDE_ASM("nonmatchings/dmacman", func_00001BA4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 _sceDmacManResumeHandler(s32 unk, void *param)
{
    if (g_dmaCh.excluded & 0xFF00)
        _sceKernelDmacClkEnable(1);
    if (g_dmaCh.excluded & 0xFF)
        _sceKernelDmacClkEnable(0);
    sceKernelEnableIntr(22);
    sceKernelEnableIntr(23);
    return 0;
}
#endif

#if FW_VERSION == 152
void _sceKernelDmacClkEnable(u32 dmac)
{
    s32 intr;
    s32 i;
    SceDmacRegs *regs;
    u32 clk;

    intr = sceKernelCpuSuspendIntr();
    clk = *(volatile u32 *)0xBC100050;
    if (!(clk & (0x20 << dmac))) {
        *(volatile u32 *)0xBC100050 = clk | (0x20 << dmac);
        regs = (SceDmacRegs *)((dmac == 0) ? DMAC0_BASE : DMAC1_BASE);
        regs->config |= 1;
        regs->sync = 0;
        for (i = 0; i < 8; i++) {
            regs->ch[i].srcAddr = 0;
            regs->ch[i].dstAddr = 0;
            regs->ch[i].lli = 0;
            regs->ch[i].control = 0;
            regs->ch[i].config = 0;
        }
        regs->intTCClear = 0xFF;
        regs->intErrClr = 0xFF;
    }
    sceKernelCpuResumeIntr(intr);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/dmacman", _sceKernelDmacClkEnable);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/dmacman", _sceKernelDmaInterrupt);

INCLUDE_ASM("nonmatchings/dmacman", _sceKernelDmaSchedule);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dmacman", func_00001A78);

INCLUDE_ASM("nonmatchings/dmacman", func_00001B08);

INCLUDE_ASM("nonmatchings/dmacman", func_00001B88);

INCLUDE_ASM("nonmatchings/dmacman", func_00001BA8);
#endif
