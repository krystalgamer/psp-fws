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

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/emc_sm", sceNandInit);

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
#endif

INCLUDE_ASM("nonmatchings/emc_sm", sceNandLock);

INCLUDE_ASM("nonmatchings/emc_sm", sceNandUnlock);

INCLUDE_ASM("nonmatchings/emc_sm", sceNandReset);

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

INCLUDE_ASM("nonmatchings/emc_sm", sceNandEraseBlock);

INCLUDE_ASM("nonmatchings/emc_sm", sceNandReadExtraOnly);

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

INCLUDE_ASM("nonmatchings/emc_sm", sceNandResume);

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

#if FW_VERSION >= 102
INCLUDE_ASM("nonmatchings/emc_sm", sceNandWritePages);
#else
s32 sceNandWritePages(u32 ppn, void *user, void *spare, u32 len) {
    s32 mode;

    mode = (user == NULL) * 0x10;
    if (spare == NULL) {
        mode |= 0x20;
    }
    return sceNandWriteAccess(ppn, user, spare, len, mode);
}
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

INCLUDE_ASM("nonmatchings/emc_sm", sceNandVerifyBlockWithRetry);

#if FW_VERSION == 100
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

INCLUDE_ASM("nonmatchings/emc_sm", sceNandDoMarkAsBadBlock);

INCLUDE_ASM("nonmatchings/emc_sm", sceNandDumpWearBBMSize);

INCLUDE_ASM("nonmatchings/emc_sm", sceNandCountChipMakersBBM);

INCLUDE_ASM("nonmatchings/emc_sm", sceNandDetectChipMakersBBM);

INCLUDE_ASM("nonmatchings/emc_sm", sceNandEraseAllBlock);

INCLUDE_ASM("nonmatchings/emc_sm", sceNandTestBlock);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/emc_sm", sceNandGetPageSize);
#else
s32 sceNandGetPageSize(void) {
    return D_00002FD0.pageSize;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/emc_sm", sceNandGetPagesPerBlock);
#else
s32 sceNandGetPagesPerBlock(void) {
    return D_00002FD0.pagesPerBlock;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/emc_sm", sceNandGetTotalBlocks);
#else
s32 sceNandGetTotalBlocks(void) {
    return D_00002FD0.totalBlocks;
}
#endif

#if FW_VERSION >= 102
INCLUDE_ASM("nonmatchings/emc_sm", sceNandWriteBlock);
#else
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
