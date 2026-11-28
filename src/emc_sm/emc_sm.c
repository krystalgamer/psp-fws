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

INCLUDE_ASM("nonmatchings/emc_sm", sceNandReadId);

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
INCLUDE_ASM("nonmatchings/emc_sm", sceNandSetWriteProtect);
#endif

INCLUDE_ASM("nonmatchings/emc_sm", sceNandReadStatus);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/emc_sm", sceNandSetScramble);
#endif

INCLUDE_ASM("nonmatchings/emc_sm", sceNandReadPages);

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

INCLUDE_ASM("nonmatchings/emc_sm", sceNandWritePagesRawExtra);

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

INCLUDE_ASM("nonmatchings/emc_sm", sceNandReadBlockWithRetry);

INCLUDE_ASM("nonmatchings/emc_sm", sceNandVerifyBlockWithRetry);

INCLUDE_ASM("nonmatchings/emc_sm", sceNandEraseBlockWithRetry);

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

INCLUDE_ASM("nonmatchings/emc_sm", sceNandVerifyEcc);

INCLUDE_ASM("nonmatchings/emc_sm", sceNandCollectEcc);

INCLUDE_ASM("nonmatchings/emc_sm", func_0000214C);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/emc_sm", D_00002980);
#else
INCLUDE_RODATA("nonmatchings/emc_sm", D_00002860);
#endif
