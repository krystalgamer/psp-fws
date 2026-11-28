/* cflags[152]: -O2 -frename-registers */
/* cflags[150]: -O2 -frename-registers */
/* cflags[100,102,103]: -O2 -frename-registers */
#include "common.h"
#include "emc_sm_decls.h"

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/emc_sm", sceNandInit);

INCLUDE_ASM("nonmatchings/emc_sm", func_0000014C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/emc_sm", D_000026F0);
#endif

#if FW_VERSION == 100
s32 sceNandInit(void) {
    SceKernelSm1Ops *ops;

    __builtin_memset(&D_00002970, 0, sizeof(D_00002970));
    sceSysregEmcsmBusClockEnable();
    sceSysregEmcsmIoEnable();
    D_00002970.semaId = sceKernelCreateSema(D_000026F0, 1, 1, 1, NULL);
    D_00002970.evFlagId = sceKernelCreateEventFlag(D_000026F0, 1, 0, NULL);
    ops = sceKernelSm1ReferOperations();
    D_00002970.busClockOn = 0;
    if (ops != NULL && ops->isBusClockOn() != 0) {
        D_00002970.busClockOn = 1;
    }
    NAND_INTR = 0x303;
    sceKernelRegisterIntrHandler(0x14, 1, func_00000160, NULL, NULL);
    sceKernelEnableIntr(0x14);
    sceKernelRegisterSysEventHandler(&D_00002930);
    sceNandLock(0);
    if (!func_0000014C()) {
        Kprintf("NAND device busy!!\n");
    } else {
        sceNandReset(NULL);
        sceNandDetectChip();
    }
    sceNandUnlock();
    return 0;
}
#endif

#if (FW_VERSION >= 102 && FW_VERSION < 271) || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/emc_sm", sceNandInit);
#endif

#if FW_VERSION < 201
s32 func_0000014C(void) {
    return *(u32 *)0xBD101004 & 1;
}
#endif

#if (FW_VERSION >= 201 && FW_VERSION < 271) || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/emc_sm", func_0000014C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/emc_sm", func_00000160);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/emc_sm", D_00002828);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/emc_sm", func_0000015C);
#endif

#if FW_VERSION >= 102
INCLUDE_ASM("nonmatchings/emc_sm", sceNandSetWriteProtect);
#else
s32 sceNandLock(s32 writeMode) {
    s32 ret = sceKernelWaitSema(D_00002970.semaId, 1, NULL);
    if (ret < 0) {
        return ret;
    }
    if (D_00002970.busClockOn == 0) {
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

#if FW_VERSION >= 102 && FW_VERSION < 201
s32 sceNandLock(s32 writeMode) {
    s32 ret = sceKernelWaitSema(D_00002970.semaId, 1, NULL);
    if (ret < 0) {
        return ret;
    }
    if (D_00002970.busClockOn == 0) {
        D_00002970.busClockOn = 1;
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

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/emc_sm", sceNandLock);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 300
void sceNandUnlock(void) {
    sceNandSetWriteProtect(1);
    if (D_00002970.ops == NULL || D_00002970.ops->isBusClockOn() == 0) {
        D_00002970.busClockOn = 0;
        sceSysregEmcsmBusClockDisable();
    }
    sceKernelSignalSema(D_00002970.semaId, 1);
}
#else
INCLUDE_ASM("nonmatchings/emc_sm", sceNandUnlock);
#endif

#if FW_VERSION < 201
s32 sceNandReset(u8 *status) {
    s32 ret;
    u32 v;

    NAND_INTR &= ~1;
    NAND_CMD = 0xFF;
    ret = func_0000135C();
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
#else
INCLUDE_ASM("nonmatchings/emc_sm", sceNandReset);
#endif

#if FW_VERSION < 201
s32 sceNandReadId(u8 *buf, s32 len) {
    s32 i;
    u8 v;

    *(volatile u32 *)0xBD101008 = 0x90;
    *(volatile u32 *)0xBD10100C = 0;
    for (i = 0; i < len; i++) {
        v = *(volatile u32 *)0xBD101300;
        if (buf != NULL) {
            buf[i] = v;
        }
    }
    *(volatile u32 *)0xBD101014 = 1;
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/emc_sm", sceNandReadId);
#endif

INCLUDE_ASM("nonmatchings/emc_sm", sceNandReadAccess);

INCLUDE_ASM("nonmatchings/emc_sm", sceNandWriteAccess);

#if FW_VERSION == 100
s32 sceNandEraseBlock(u32 ppn) {
    s32 ret;
    u8 st;

    ret = func_0000135C();
    if (ret < 0) {
        return ret;
    }
    NAND_CMD = 0x60;
    NAND_ADDR = ppn << 10;
    NAND_INTR &= ~1;
    NAND_CMD = 0xD0;
    ret = func_0000135C();
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
INCLUDE_ASM("nonmatchings/emc_sm", sceNandEraseBlock);
#endif

#if FW_VERSION < 201
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
        ret = func_0000135C();
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
#else
INCLUDE_ASM("nonmatchings/emc_sm", sceNandReadExtraOnly);
#endif

s32 module_start(void) {
    sceNandInit();
    return 0;
}

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/emc_sm", module_reboot_before);
#else
s32 module_reboot_before(void) {
    sceNandLock(0);
    sceKernelUnregisterSysEventHandler(&D_00002930);
    sceKernelDeleteSema(D_00002970.semaId);
    sceKernelDeleteEventFlag(D_00002970.evFlagId);
    sceKernelReleaseIntrHandler(0x14);
    return 0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/emc_sm", sceNandEnd);
#else
s32 sceNandEnd(void) {
    sceNandLock(0);
    sceKernelUnregisterSysEventHandler(&D_00002930);
    sceKernelDeleteSema(D_00002970.semaId);
    sceKernelDeleteEventFlag(D_00002970.evFlagId);
    sceKernelReleaseIntrHandler(0x14);
    return 0;
}
#endif

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
INCLUDE_ASM("nonmatchings/emc_sm", sceNandResume);
#endif

#if FW_VERSION == 100
s32 sceNandSetWriteProtect(s32 protect) {
    u32 v = *(volatile u32 *)0xBD101004;
    s32 old = __builtin_allegrex_ext(v ^ 0x80, 7, 1);
    if (protect) {
        v &= ~0x80;
    } else {
        v |= 0x80;
    }
    *(volatile u32 *)0xBD101004 = v;
    return old;
}
#endif

#if FW_VERSION < 201
s32 sceNandReadStatus(void) {
    u32 v;
    *(volatile u32 *)0xBD101008 = 0x70;
    v = *(volatile u32 *)0xBD101300;
    *(volatile u32 *)0xBD101014 = 1;
    return v & 0xFF;
}
#else
INCLUDE_ASM("nonmatchings/emc_sm", sceNandReadStatus);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/emc_sm", sceNandSetScramble);
#endif

#if FW_VERSION < 201
s32 sceNandReadPages(u32 ppn, void *user, void *spare, u32 len) {
    s32 ret = sceNandReadAccess(ppn, user, spare, len, 0);
    if (spare == NULL && ret == 0x80230009) {
        ret = 0;
    }
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/emc_sm", sceNandReadPages);
#endif

#if FW_VERSION < 201
s32 sceNandWritePages(u32 ppn, void *user, void *spare, u32 len) {
    s32 mode;

    mode = (user == NULL) * 0x10;
    if (spare == NULL) {
        mode |= 0x20;
    }
    return sceNandWriteAccess(ppn, user, spare, len, mode);
}
#else
INCLUDE_ASM("nonmatchings/emc_sm", sceNandWritePages);
#endif

s32 sceNandReadPagesRawExtra(u32 ppn, void *user, void *spare, u32 len) {
    return sceNandReadAccess(ppn, user, spare, len, 0x20);
}

#if FW_VERSION < 152
s32 sceNandWritePagesRawExtra(u32 ppn, void *user, void *spare, u32 len) {
    return sceNandWriteAccess(ppn, user, spare, len, (user == NULL) ? 0x30 : 0x20);
}
#else
INCLUDE_ASM("nonmatchings/emc_sm", sceNandWritePagesRawExtra);
#endif

s32 sceNandReadPagesRawAll(u32 ppn, void *user, void *spare, u32 len) {
    return sceNandReadAccess(ppn, user, spare, len, 0x31);
}

s32 sceNandWritePagesRawAll(u32 ppn, void *user, void *spare, u32 len) {
    return sceNandWriteAccess(ppn, user, spare, len, 0x31);
}

#if FW_VERSION >= 102 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/emc_sm", func_00000FD4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/emc_sm", func_00001044);
#endif

#if FW_VERSION == 100
s32 func_00000F18(s32 arg0) {
    switch (arg0) {                                 /* irregular */
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
INCLUDE_ASM("nonmatchings/emc_sm", func_00000F58);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/emc_sm", func_00000F40);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/emc_sm", func_00000FE0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/emc_sm", func_00000FEC);
#endif

INCLUDE_ASM("nonmatchings/emc_sm", func_00001180);

INCLUDE_ASM("nonmatchings/emc_sm", func_0000135C);

INCLUDE_ASM("nonmatchings/emc_sm", sceNandDetectChip);

INCLUDE_ASM("nonmatchings/emc_sm", sceNandWriteBlockWithVerify);

#if FW_VERSION < 201
s32 sceNandReadBlockWithRetry(u32 ppn, void *user, void *spare) {
    s32 i;
    s32 ret;

    for (i = 0; i < 4; i++) {
        ret = sceNandReadPages(ppn, user, spare, D_00002FD0.pagesPerBlock);
        if (ret >= 0) {
            break;
        }
    }
    if (ret < 0) {
        return ret;
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/emc_sm", sceNandReadBlockWithRetry);
#endif

#if FW_VERSION < 201
s32 sceNandVerifyBlockWithRetry(u32 ppn, void *user, void *spare) {
    s32 i;
    s32 retry;
    s32 ret;

    for (i = 0; i < D_00002FD0.pagesPerBlock; i++) {
        retry = 0;
        do {
            ret = sceNandReadPages(ppn + i, D_000029A8, &D_00002BA8, 1);
            if (ret < 0) {
                if (++retry >= 4) {
                    return ret;
                }
            }
            if (user != NULL && memcmp(D_000029A8, (u8 *)user + D_00002FD0.pageSize * i, D_00002FD0.pageSize) != 0) {
                return 0x80230006;
            }
            if (spare != NULL && memcmp(&D_00002BA8, (u8 *)spare + i * 12, 8) != 0) {
                return 0x80230006;
            }
        } while (ret < 0);
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/emc_sm", sceNandVerifyBlockWithRetry);
#endif

#if FW_VERSION < 201
s32 sceNandEraseBlockWithRetry(u32 ppn) {
    s32 i;
    s32 ret;

    if (ppn % D_00002FD0.pagesPerBlock != 0) {
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
#else
INCLUDE_ASM("nonmatchings/emc_sm", sceNandEraseBlockWithRetry);
#endif

INCLUDE_ASM("nonmatchings/emc_sm", sceNandIsBadBlock);

#if FW_VERSION < 201
s32 sceNandDoMarkAsBadBlock(u32 ppn) {
    s32 i;
    s32 retry;

    if (ppn % D_00002FD0.pagesPerBlock != 0) {
        return 0x80230008;
    }
    memset(D_00002BB4, 0, 0x200);
    memset(&D_00002DB4, 0xFF, sizeof(D_00002DB4));
    D_00002DB4.blockStat = 0xF0;
    retry = 0;
    for (i = 0; i < D_00002FD0.pagesPerBlock; i++) {
        do {
            if (sceNandWritePages(ppn + i, D_00002BB4, &D_00002DB4, 1) >= 0) {
                break;
            }
            retry++;
        } while (retry < 4);
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/emc_sm", sceNandDoMarkAsBadBlock);
#endif

INCLUDE_ASM("nonmatchings/emc_sm", sceNandDumpWearBBMSize);

#if FW_VERSION < 201
s32 sceNandCountChipMakersBBM(void) {
    s32 i;
    s32 count = 0;
    s32 ret;

    for (i = 0; i < D_00002FD0.totalBlocks; i++) {
        ret = sceNandDetectChipMakersBBM(i * D_00002FD0.pagesPerBlock);
        if (ret == 1) {
            count++;
        }
        if (ret < 0) {
            return ret;
        }
    }
    return count;
}
#else
INCLUDE_ASM("nonmatchings/emc_sm", sceNandCountChipMakersBBM);
#endif

#if FW_VERSION < 152
s32 sceNandDetectChipMakersBBM(u32 ppn) {
    s32 i;
    s32 ret;
    s32 bad = 0;
    SceNandSpare *sp = &D_00002E90;

    for (i = 0; i < 4; i++) {
        ret = sceNandReadPagesRawAll(ppn, D_00002C90, &D_00002E90, 1);
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

#if FW_VERSION < 201
s32 sceNandEraseAllBlock(void) {
    s32 i;
    s32 count = 0;
    s32 ret;

    for (i = 0; i < D_00002FD0.totalBlocks; i++) {
        ret = sceNandEraseBlockWithRetry(i * D_00002FD0.pagesPerBlock);
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
#else
INCLUDE_ASM("nonmatchings/emc_sm", sceNandEraseAllBlock);
#endif

#if FW_VERSION < 201
s32 sceNandTestBlock(u32 ppn) {
    u8 user[32][0x200];
    u8 spare[32][0x10];
    s32 i;
    s32 j;
    s32 ret;

    if (ppn % D_00002FD0.pagesPerBlock != 0) {
        return 0x80230008;
    }
    ret = sceNandEraseBlockWithRetry(ppn);
    if (ret < 0) {
        return ret;
    }
    ret = sceNandReadPagesRawAll(ppn, user, spare, D_00002FD0.pagesPerBlock);
    if (ret < 0) {
        return ret;
    }
    for (i = 0; i < D_00002FD0.pagesPerBlock; i++) {
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
#else
INCLUDE_ASM("nonmatchings/emc_sm", sceNandTestBlock);

INCLUDE_ASM("nonmatchings/emc_sm", sceNandGetPageSize);
#endif

#if FW_VERSION < 201
s32 sceNandGetPageSize(void) {
    return D_00002FD0.pageSize;
}
#else
INCLUDE_ASM("nonmatchings/emc_sm", sceNandGetPagesPerBlock);
#endif

#if FW_VERSION < 201
s32 sceNandGetPagesPerBlock(void) {
    return D_00002FD0.pagesPerBlock;
}
#else
INCLUDE_ASM("nonmatchings/emc_sm", sceNandGetTotalBlocks);
#endif

#if FW_VERSION < 201
s32 sceNandGetTotalBlocks(void) {
    return D_00002FD0.totalBlocks;
}
#else
INCLUDE_ASM("nonmatchings/emc_sm", sceNandWriteBlock);
#endif

#if FW_VERSION < 201
s32 sceNandWriteBlock(u32 ppn, void *user, void *spare) {
    s32 ret = sceNandEraseBlockWithRetry(ppn);
    if (ret < 0) {
        return ret;
    }
    ret = sceNandWritePages(ppn, user, spare, D_00002FD0.pagesPerBlock);
    if (ret >= 0) {
        return 0;
    }
    return ret;
}
#endif

INCLUDE_ASM("nonmatchings/emc_sm", sceNandCalcEcc);

s32 sceNandVerifyEcc(u8 *buf, u32 ecc) {
    return func_0000214C(buf, ecc, 0);
}

s32 sceNandCollectEcc(u8 *buf, u32 ecc) {
    return func_0000214C(buf, ecc, 1);
}

INCLUDE_ASM("nonmatchings/emc_sm", func_0000214C);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/emc_sm", D_00002980);
#else
INCLUDE_RODATA("nonmatchings/emc_sm", D_00002860);
#endif
