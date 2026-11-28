/* compiler[282,300,301,302,303,310,311,330,340]: 1.9.2 */
/* cflags[271,282,300,301,302,303,310,311,330,340]: -O2 -frename-registers -mext */
/* cflags[201,250,260]: -O2 -frename-registers */
/* cflags[152]: -O2 -frename-registers */
/* cflags[150]: -O2 -frename-registers */
/* cflags[100,102,103]: -O2 -frename-registers */
#include "common.h"
#include "emc_sm_decls.h"

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/emc_sm", sceNandInit);
#endif

#if FW_VERSION == 271
s32 nandIsReady(void) {
    return *(u32 *)0xBD101004 & 1; /* not volatile: matches */
}
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/emc_sm", D_000026F0);
#endif

#if FW_VERSION == 100
s32 sceNandInit(void) {
    SceKernelSm1Ops *ops;

    __builtin_memset(&g_nand, 0, sizeof(g_nand));
    sceSysregEmcsmBusClockEnable();
    sceSysregEmcsmIoEnable();
    g_nand.semaId = sceKernelCreateSema(D_000026F0, 1, 1, 1, NULL);
    g_nand.evFlagId = sceKernelCreateEventFlag(D_000026F0, 1, 0, NULL);
    ops = sceKernelSm1ReferOperations();
    g_nand.busClockOn = 0;
    if (ops != NULL && ops->isBusClockOn() != 0) {
        g_nand.busClockOn = 1;
    }
    NAND_INTR = 0x303;
    sceKernelRegisterIntrHandler(0x14, 1, nandIntrHandler, NULL, NULL);
    sceKernelEnableIntr(0x14);
    sceKernelRegisterSysEventHandler(&g_nandSysEv);
    sceNandLock(0);
    if (!nandIsReady()) {
        Kprintf("NAND device busy!!\n");
    } else {
        sceNandReset(NULL);
        sceNandDetectChip();
    }
    sceNandUnlock();
    return 0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 271
s32 sceNandInit(void) {
    __builtin_memset(&g_nand, 0, sizeof(g_nand));
    sceSysregEmcsmBusClockEnable();
    sceSysregEmcsmIoEnable();
    g_nand.semaId = sceKernelCreateSema(D_000026F0, 1, 1, 1, NULL);
    g_nand.evFlagId = sceKernelCreateEventFlag(D_000026F0, 1, 0, NULL);
    g_nand.ops = sceKernelSm1ReferOperations();
    g_nand.busClockOn = 0;
    NAND_INTR = 0x303;
    NAND_TIMING = 0x0B040205;
    sceKernelRegisterIntrHandler(0x14, 1, nandIntrHandler, NULL, NULL);
    sceKernelEnableIntr(0x14);
    sceKernelRegisterSysEventHandler(&g_nandSysEv);
    sceNandLock(0);
    if (!nandIsReady()) {
        Kprintf("NAND device busy!!\n");
    } else {
        sceNandReset(NULL);
        sceNandDetectChip();
    }
    sceNandUnlock();
    return 0;
}
#endif

#if FW_VERSION != 271
s32 nandIsReady(void) {
    return *(u32 *)0xBD101004 & 1; /* not volatile: matches */
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/emc_sm", D_00002828);
#endif

INCLUDE_ASM("nonmatchings/emc_sm", nandIntrHandler);

#if FW_VERSION >= 102
s32 sceNandSetWriteProtect(s32 protect) {
    u32 v = NAND_STATUS;
    s32 old = __builtin_allegrex_ext(v ^ 0x80, 7, 1);
    if (protect) {
        NAND_STATUS = v & ~0x80;
    } else {
        NAND_STATUS = v | 0x80;
        while (!(NAND_STATUS & 0x80)) {
        }
        g_nand.wpReleased = 1;
        g_nand.wpReleaseTime = sceKernelGetSystemTimeLow();
    }
    return old;
}
#else
s32 sceNandLock(s32 writeMode) {
    s32 ret = sceKernelWaitSema(g_nand.semaId, 1, NULL);
    if (ret < 0) {
        return ret;
    }
    if (g_nand.busClockOn == 0) {
        sceSysregEmcsmBusClockEnable();
    }
    if (writeMode) {
        NAND_STATUS |= 0x80;
    } else {
        NAND_STATUS &= ~0x80;
    }
    return 0;
}
#endif

#if FW_VERSION >= 102
s32 sceNandLock(s32 writeMode) {
    s32 ret = sceKernelWaitSema(g_nand.semaId, 1, NULL);
    if (ret < 0) {
        return ret;
    }
    if (g_nand.busClockOn == 0) {
        g_nand.busClockOn = 1;
        sceSysregEmcsmBusClockEnable();
    }
    if (writeMode) {
        sceNandSetWriteProtect(0);
    } else {
        sceNandSetWriteProtect(1);
    }
    return 0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 300
void sceNandUnlock(void) {
    sceNandSetWriteProtect(1);
    if (g_nand.ops == NULL || g_nand.ops->isBusClockOn() == 0) {
        g_nand.busClockOn = 0;
        sceSysregEmcsmBusClockDisable();
    }
    sceKernelSignalSema(g_nand.semaId, 1);
}
#endif

#if FW_VERSION >= 300
void sceNandUnlock(void) {
    g_nand.scramble = 0;
    sceNandSetWriteProtect(1);
    if (g_nand.ops == NULL || g_nand.ops->isBusClockOn() == 0) {
        g_nand.busClockOn = 0;
        sceSysregEmcsmBusClockDisable();
    }
    sceKernelSignalSema(g_nand.semaId, 1);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/emc_sm", sceNandUnlock);
#endif

s32 sceNandReset(u8 *status) {
    s32 ret;
    u32 v;

    NAND_INTR &= ~1;
    NAND_CMD = 0xFF;
    ret = nandWaitReady();
    if (ret >= 0) {
        NAND_CMD = 0x70;
        ret = 0;
        v = NAND_DATA;
        if (status != NULL) {
            *status = v;
        }
        if (v & 1) {
            ret = 0x80230001;
        }
        NAND_RESET = 1;
    }
    return ret;
}

s32 sceNandReadId(u8 *buf, s32 len) {
    s32 i;
    u8 v;

    NAND_CMD = 0x90;
    NAND_ADDR = 0;
    for (i = 0; i < len; i++) {
        v = NAND_DATA;
        if (buf != NULL) {
            buf[i] = v;
        }
    }
    NAND_RESET = 1;
    return 0;
}

INCLUDE_ASM("nonmatchings/emc_sm", sceNandReadAccess);

INCLUDE_ASM("nonmatchings/emc_sm", sceNandWriteAccess);

#if FW_VERSION == 100
s32 sceNandEraseBlock(u32 ppn) {
    s32 ret;
    u8 st;

    ret = nandWaitReady();
    if (ret < 0) {
        return ret;
    }
    NAND_CMD = 0x60;
    NAND_ADDR = ppn << 10;
    NAND_INTR &= ~1;
    NAND_CMD = 0xD0;
    ret = nandWaitReady();
    if (ret < 0) {
        return ret;
    }
    NAND_CMD = 0x70;
    ret = 0;
    st = NAND_DATA;
    NAND_RESET = 1;
    if ((s8)st >= 0) {
        ret = 0x80230007;
    } else if (st & 1) {
        ret = 0x80230004;
    }
    return ret;
}
#else
s32 sceNandEraseBlock(u32 ppn) {
    s32 ret;
    u8 st;

    ret = nandWaitReady();
    if (ret < 0) {
        return ret;
    }
    if (g_nand.wpReleased) {
        g_nand.wpReleased = 0;
        if (sceKernelGetSystemTimeLow() - g_nand.wpReleaseTime < 10) {
            sceKernelDelayThread(10);
        }
    }
    NAND_CMD = 0x60;
    NAND_ADDR = ppn << 10;
    NAND_INTR &= ~1;
    NAND_CMD = 0xD0;
    ret = nandWaitReady();
    if (ret < 0) {
        return ret;
    }
    NAND_CMD = 0x70;
    ret = 0;
    st = NAND_DATA;
    NAND_RESET = 1;
    if ((s8)st >= 0) {
        ret = 0x80230007;
    } else if (st & 1) {
        ret = 0x80230004;
    }
    return ret;
}
#endif

s32 sceNandReadExtraOnly(u32 ppn, void *spare, s32 len) {
    s32 ret;
    s32 i;
    s32 j;
    u8 *p = spare;
    u32 v;

    if ((u32)len > 0x20) {
        return 0x80000104;
    }
    if ((ppn & 0x1F) + len > 0x20) {
        return 0x80230008;
    }
    if (spare == NULL) {
        return 0x80000103;
    }
    ret = 0;
    for (i = 0; i < len; i++) {
        ret = nandWaitReady();
        if (ret < 0) {
            break;
        }
        NAND_CMD = 0x50;
        NAND_ADDR = ppn << 10;
        for (j = 0; j < 4; j++) {
            v = NAND_DATA;
            p[0] = v;
            p[1] = v >> 8;
            p[2] = v >> 16;
            p[3] = v >> 24;
            p += 4;
        }
        ppn++;
    }
    NAND_RESET = 1;
    return ret;
}

s32 module_start(void) {
    sceNandInit();
    return 0;
}

s32 module_reboot_before(void) {
    sceNandLock(0);
    sceKernelUnregisterSysEventHandler(&g_nandSysEv);
    sceKernelDeleteSema(g_nand.semaId);
    sceKernelDeleteEventFlag(g_nand.evFlagId);
    sceKernelReleaseIntrHandler(0x14);
    return 0;
}

s32 sceNandEnd(void) {
    sceNandLock(0);
    sceKernelUnregisterSysEventHandler(&g_nandSysEv);
    sceKernelDeleteSema(g_nand.semaId);
    sceKernelDeleteEventFlag(g_nand.evFlagId);
    sceKernelReleaseIntrHandler(0x14);
    return 0;
}

s32 sceNandSuspend(void) {
    return 0;
}

#if FW_VERSION == 100
s32 sceNandResume(void) {
    sceSysregEmcsmBusClockEnable();
    sceSysregEmcsmIoEnable();
    NAND_INTR = 0x303;
    NAND_STATUS |= 0x80;
    return 0;
}
#else
s32 sceNandResume(void) {
    sceSysregEmcsmBusClockEnable();
    sceSysregEmcsmIoEnable();
    NAND_INTR = 0x303;
    NAND_TIMING = 0x0B040205;
    sceNandSetWriteProtect(0);
    if (g_nand.ops == NULL || g_nand.ops->isBusClockOn() == 0) {
        g_nand.busClockOn = 0;
        sceSysregEmcsmBusClockDisable();
    } else {
        g_nand.busClockOn = 1;
    }
    return 0;
}
#endif

#if FW_VERSION == 100
s32 sceNandSetWriteProtect(s32 protect) {
    u32 v = NAND_STATUS;
    s32 old = __builtin_allegrex_ext(v ^ 0x80, 7, 1);
    if (protect) {
        v &= ~0x80;
    } else {
        v |= 0x80;
    }
    NAND_STATUS = v;
    return old;
}
#endif

s32 sceNandReadStatus(void) {
    u32 v;
    NAND_CMD = 0x70;
    v = NAND_DATA;
    NAND_RESET = 1;
    return v & 0xFF;
}

#if FW_VERSION >= 300
s32 sceNandSetScramble(u32 scramble) {
    g_nand.scramble = scramble;
    return 0;
}
#endif

s32 sceNandReadPages(u32 ppn, void *user, void *spare, u32 len) {
    s32 ret = sceNandReadAccess(ppn, user, spare, len, 0);
    if (spare == NULL && ret == 0x80230009) {
        ret = 0;
    }
    return ret;
}

s32 sceNandWritePages(u32 ppn, void *user, void *spare, u32 len) {
    s32 mode;

    mode = (user == NULL) * 0x10;
    if (spare == NULL) {
        mode |= 0x20;
    }
    return sceNandWriteAccess(ppn, user, spare, len, mode);
}

s32 sceNandReadPagesRawExtra(u32 ppn, void *user, void *spare, u32 len) {
    return sceNandReadAccess(ppn, user, spare, len, 0x20);
}

s32 sceNandWritePagesRawExtra(u32 ppn, void *user, void *spare, u32 len) {
    s32 mode = 0x20;
    if (user == NULL) {
        mode = 0x30;
    }
    return sceNandWriteAccess(ppn, user, spare, len, mode);
}

s32 sceNandReadPagesRawAll(u32 ppn, void *user, void *spare, u32 len) {
    return sceNandReadAccess(ppn, user, spare, len, 0x31);
}

s32 sceNandWritePagesRawAll(u32 ppn, void *user, void *spare, u32 len) {
    return sceNandWriteAccess(ppn, user, spare, len, 0x31);
}

#if FW_VERSION >= 102
s32 nandSysEventHandler(s32 ev) {
    switch (ev) {
    case 0x4004:
        break;
    case 0x10004:
        sceSysregEmcsmBusClockEnable();
        sceSysregEmcsmIoEnable();
        NAND_INTR = 0x303;
        NAND_TIMING = 0x0B040205;
        sceNandSetWriteProtect(0);
        if (g_nand.ops == NULL || g_nand.ops->isBusClockOn() == 0) {
            g_nand.busClockOn = 0;
            sceSysregEmcsmBusClockDisable();
        } else {
            g_nand.busClockOn = 1;
        }
        break;
    }
    return 0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/emc_sm", nandDmaReadPage);
#endif

#if FW_VERSION == 100
s32 nandSysEventHandler(s32 ev) {
    switch (ev) {
    case 0x4004:
        break;
    case 0x10004:
        sceNandResume();
        break;
    }
    return 0;
}
#endif

#if FW_VERSION < 201
s32 nandDmaReadPage(s32 mode, void *user, void *spare) {
    s32 ret = 0;
    u32 sp[4];
    s32 i;
    u32 *src;
    u32 *dst;

    if (user != NULL) {
        src = (u32 *)0x9FF00000;
        NAND_CACHE_PAGE(0x19, src);
        dst = user;
        for (i = 0; i < 0x80; i++) {
            *dst++ = *src++;
        }
    }
    if (!(mode & 0x10)) {
        if (NAND_DMA_STAT != 0) {
            ret = 1;
        }
    }
    sp[0] = NAND_DMA_ECC;
    sp[1] = NAND_DMA_SPARE[0];
    sp[2] = NAND_DMA_SPARE[1];
    sp[3] = NAND_DMA_SPARE[2];
    if (!(mode & 0x20)) {
        if (sceNandCollectEcc((u8 *)&sp[1], (((u8 *)sp)[0xD] << 8 | ((u8 *)sp)[0xC]) & 0xFFF) == -3) {
            ret |= 2;
        }
    }
    if (spare != NULL) {
        if (mode & 1) {
            ((u32 *)spare)[0] = sp[0];
            ((u32 *)spare)[1] = sp[1];
            ((u32 *)spare)[2] = sp[2];
            ((u32 *)spare)[3] = sp[3];
        } else {
            ((u32 *)spare)[0] = sp[1];
            ((u32 *)spare)[1] = sp[2];
            ((u32 *)spare)[2] = sp[3];
        }
    }
    return ret;
}
#endif

INCLUDE_ASM("nonmatchings/emc_sm", nandDmaWritePage);

INCLUDE_ASM("nonmatchings/emc_sm", nandWaitReady);

INCLUDE_ASM("nonmatchings/emc_sm", sceNandDetectChip);

INCLUDE_ASM("nonmatchings/emc_sm", sceNandWriteBlockWithVerify);

s32 sceNandReadBlockWithRetry(u32 ppn, void *user, void *spare) {
    s32 i;
    s32 ret;

    for (i = 0; i < 4; i++) {
        ret = sceNandReadPages(ppn, user, spare, g_nandInfo.pagesPerBlock);
        if (ret >= 0) {
            break;
        }
    }
    if (ret < 0) {
        return ret;
    }
    return 0;
}

s32 sceNandVerifyBlockWithRetry(u32 ppn, void *user, void *spare) {
    s32 i;
    s32 retry;
    s32 ret;

    for (i = 0; i < g_nandInfo.pagesPerBlock; i++) {
        retry = 0;
        do {
            ret = sceNandReadPages(ppn + i, g_verifyUser, &g_verifySpare, 1);
            if (ret < 0) {
                if (++retry >= 4) {
                    return ret;
                }
            }
            if (user != NULL && memcmp(g_verifyUser, (u8 *)user + g_nandInfo.pageSize * i, g_nandInfo.pageSize) != 0) {
                return 0x80230006;
            }
            if (spare != NULL && memcmp(&g_verifySpare, (u8 *)spare + i * 12, 8) != 0) {
                return 0x80230006;
            }
        } while (ret < 0);
    }
    return 0;
}

s32 sceNandEraseBlockWithRetry(u32 ppn) {
    s32 i;
    s32 ret;

    if (ppn % g_nandInfo.pagesPerBlock != 0) {
        return 0x80230008;
    }
    for (i = 0; i < 4; i++) {
        ret = sceNandEraseBlock(ppn);
        if (ret >= 0) {
            return 0;
        }
    }
    return ret;
}

INCLUDE_ASM("nonmatchings/emc_sm", sceNandIsBadBlock);

s32 sceNandDoMarkAsBadBlock(u32 ppn) {
    s32 i;
    s32 retry;

    if (ppn % g_nandInfo.pagesPerBlock != 0) {
        return 0x80230008;
    }
    memset(g_markUser, 0, 0x200);
    memset(&g_markSpare, 0xFF, sizeof(g_markSpare));
    g_markSpare.blockStat = 0xF0;
    retry = 0;
    for (i = 0; i < g_nandInfo.pagesPerBlock; i++) {
        do {
            if (sceNandWritePages(ppn + i, g_markUser, &g_markSpare, 1) >= 0) {
                break;
            }
            retry++;
        } while (retry < 4);
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/emc_sm", sceNandDumpWearBBMSize);

s32 sceNandCountChipMakersBBM(void) {
    s32 i;
    s32 count = 0;
    s32 ret;

    for (i = 0; i < g_nandInfo.totalBlocks; i++) {
        ret = sceNandDetectChipMakersBBM(i * g_nandInfo.pagesPerBlock);
        if (ret == 1) {
            count++;
        }
        if (ret < 0) {
            return ret;
        }
    }
    return count;
}

#if FW_VERSION < 310
s32 sceNandDetectChipMakersBBM(u32 ppn) {
    s32 i;
    s32 ret;
    s32 bad = 0;
    SceNandSpare *sp = &g_bbmSpare;

    for (i = 0; i < 4; i++) {
        ret = sceNandReadPagesRawAll(ppn, g_bbmUser, &g_bbmSpare, 1);
        if (ret >= 0) {
            if (sp->extra.blockStat != 0xFF) {
                bad = 1;
            }
            return bad != 0;
        }
    }
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/emc_sm", sceNandDetectChipMakersBBM);
#endif

s32 sceNandEraseAllBlock(void) {
    s32 i;
    s32 count = 0;
    s32 ret;

    for (i = 0; i < g_nandInfo.totalBlocks; i++) {
        ret = sceNandEraseBlockWithRetry(i * g_nandInfo.pagesPerBlock);
        if (ret < 0) {
            count++;
        }
        if (ret == 0x80230007) {
            count = 0x80230007;
            break;
        }
    }
    return count;
}

s32 sceNandTestBlock(u32 ppn) {
    u8 user[32][0x200];
    u8 spare[32][0x10];
    s32 i;
    s32 j;
    s32 ret;

    if (ppn % g_nandInfo.pagesPerBlock != 0) {
        return 0x80230008;
    }
    ret = sceNandEraseBlockWithRetry(ppn);
    if (ret < 0) {
        return ret;
    }
    ret = sceNandReadPagesRawAll(ppn, user, spare, g_nandInfo.pagesPerBlock);
    if (ret < 0) {
        return ret;
    }
    for (i = 0; i < g_nandInfo.pagesPerBlock; i++) {
        for (j = 0; j < 0x200; j += 4) {
            if (*(u32 *)&user[i][j] != 0xFFFFFFFF) {
                return 0x80230004;
            }
        }
        for (j = 4; j < 0x10; j++) {
            if (spare[i][j] != 0xFF) {
                return 0x80230004;
            }
        }
    }
    for (i = 0; i < 2; i++) {
        switch (i) {
        case 0:
            memset(user, 0, 0x4000);
            memset(spare, 0, 0x180);
            break;
        case 1:
            memset(user, 0xFF, 0x4000);
            memset(spare, 0xFF, 0x180);
            break;
        }
        ret = sceNandWriteBlockWithVerify(ppn, user, spare);
        if (ret < 0) {
            break;
        }
    }
    sceNandEraseBlockWithRetry(ppn);
    return ret;
}

s32 sceNandGetPageSize(void) {
    return g_nandInfo.pageSize;
}

s32 sceNandGetPagesPerBlock(void) {
    return g_nandInfo.pagesPerBlock;
}

s32 sceNandGetTotalBlocks(void) {
    return g_nandInfo.totalBlocks;
}

s32 sceNandWriteBlock(u32 ppn, void *user, void *spare) {
    s32 ret = sceNandEraseBlockWithRetry(ppn);
    if (ret < 0) {
        return ret;
    }
    ret = sceNandWritePages(ppn, user, spare, g_nandInfo.pagesPerBlock);
    if (ret >= 0) {
        return 0;
    }
    return ret;
}

INCLUDE_ASM("nonmatchings/emc_sm", sceNandCalcEcc);

s32 sceNandVerifyEcc(u8 *buf, u32 ecc) {
    return nandCorrectEcc(buf, ecc, 0);
}

s32 sceNandCollectEcc(u8 *buf, u32 ecc) {
    return nandCorrectEcc(buf, ecc, 1);
}

INCLUDE_ASM("nonmatchings/emc_sm", nandCorrectEcc);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/emc_sm", D_00002980);
#else
INCLUDE_RODATA("nonmatchings/emc_sm", D_00002860);
#endif
