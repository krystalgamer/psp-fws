#ifndef EMC_SM_DECLS_H
#define EMC_SM_DECLS_H

#include "common.h"
#include "m2c_macros.h"

/* EMC_SM (NAND controller) registers */
#define NAND_CTRL      (*(volatile u32 *)0xBD101000) /* bit16: no auto user ECC, bit17: write user ECC */
#define NAND_STATUS    (*(volatile u32 *)0xBD101004) /* bit0: ready, bit7: write enable (not protected) */
#define NAND_CMD       (*(volatile u32 *)0xBD101008)
#define NAND_ADDR      (*(volatile u32 *)0xBD10100C)
#define NAND_RESET     (*(volatile u32 *)0xBD101014) /* end of command */
#define NAND_DMA_ADDR  (*(volatile u32 *)0xBD101020)
#define NAND_DMA_CTRL  (*(volatile u32 *)0xBD101024)
#define NAND_DMA_STAT  (*(volatile u32 *)0xBD101028)
#define NAND_INTR      (*(volatile u32 *)0xBD101038)
#define NAND_DATA      (*(volatile u32 *)0xBD101300)
#define NAND_DMA_PAGE  ((volatile u32 *)0xBFF00000) /* page buffer, 0x200 bytes */
#define NAND_DMA_ECC   (*(volatile u32 *)0xBFF00800)
#define NAND_DMA_SPARE ((volatile u32 *)0xBFF00900) /* 3 words */

typedef struct SceSysEventHandler {
    s32 size;
    const char *name;
    s32 typeMask;
    s32 (*handler)(s32 ev, const char *name, void *param, s32 *result);
    s32 gp;
    s32 busy;
    struct SceSysEventHandler *next;
    s32 reserved[9];
} SceSysEventHandler;

/* driver state (D_00002970); the interrupt handler func_00000160 runs the page transfers */
#if FW_VERSION == 100
typedef struct {
    SceUID semaId;   /* 0x00 */
    SceUID evFlagId; /* 0x04 */
    s32 busClockOn;  /* 0x08: bus clock stays on (sm1 operation 0xC returned nonzero) */
    s32 state;       /* 0x0C: 0 idle, 1/2 wait ready (read/write), 3 reading, 4 writing, -1 done */
    s32 error;       /* 0x10: bit0 ECC uncorrectable, bit1 ECC corrected / DMA error */
    s32 count;       /* 0x14: pages left */
    u32 ppn;         /* 0x18 */
    void *user;      /* 0x1C */
    void *spare;     /* 0x20 */
    s32 mode;        /* 0x24: SceNandEccMode */
} SceNandState;
typedef char chk_SceNandState[(sizeof(SceNandState) == 0x28) ? 1 : -1];
#else
typedef struct {
    SceUID semaId;   /* 0x00 */
    SceUID evFlagId; /* 0x04 */
    u8 unk8[0x2C];
} SceNandState;
#endif

/* NAND chip geometry (D_00002FD0); filled by sceNandDetectChip */
typedef struct {
    u32 pageSize;      /* 0x0 */
    u32 pagesPerBlock; /* 0x4 */
    u32 totalBlocks;   /* 0x8 */
    u8 makerId;        /* 0xC */
    u8 deviceId;       /* 0xD */
    u8 padE[2];
} SceNandInfo;
/* known chip table entry (D_00002860, 17 entries) */
typedef struct {
    u8 makerId;         /* 0x0 */
    u8 deviceId;        /* 0x1 */
    u16 pageSize;       /* 0x2 */
    u16 pagesPerBlock;  /* 0x4 */
    u16 unk6;
    u32 totalBlocks;    /* 0x8 */
} SceNandChipEntry;
typedef char chk_SceNandChipEntry[(sizeof(SceNandChipEntry) == 0xC) ? 1 : -1];

extern const SceNandChipEntry D_00002860[17];
extern SceSysEventHandler D_00002930;
extern SceNandState D_00002970;
extern u8 D_000029A8[0x200];
extern u8 D_00002BA8[0xC];
extern u8 D_00002BB4[0x200];
extern u8 D_00002C90[0x200];
extern u8 D_00002DB4[0xC];
extern u8 D_00002E90[0x10];
extern SceNandInfo D_00002FD0;

s32 Kprintf(const char *fmt, ...);
s32 func_0000014C(void);
s32 func_00000F18(s32 arg0);
s32 func_00000F58(s32 mode, void *user, void *spare);
s32 func_00001180(s32 mode, u32 ppn, void *user, void *spare);
s32 func_0000135C(void);
s32 func_0000214C(u8 *buf, u32 ecc, s32 correct);
s32 memcmp(const void *a, const void *b, u32 n);
void *memset(void *s, s32 c, u32 n);
s32 module_reboot_before(void);
s32 module_start(void);
void sceKernelCpuResumeIntrWithSync(s32 intr);
s32 sceKernelCpuSuspendIntr(void);
SceUID sceKernelCreateEventFlag(const char *name, u32 attr, u32 bits, void *opt);
SceUID sceKernelCreateSema(const char *name, u32 attr, s32 initVal, s32 maxVal, void *option);
s32 sceKernelDeleteEventFlag(SceUID evid);
s32 sceKernelDeleteSema(SceUID semaid);
s32 sceKernelEnableIntr(s32 intrNum);
s32 sceKernelIsIntrContext(void);
s32 sceKernelRegisterIntrHandler(s32 intrNum, s32 arg1, void *func, void *arg3, void *handler);
s32 sceKernelRegisterSysEventHandler(SceSysEventHandler *handler);
s32 sceKernelReleaseIntrHandler(s32 intrNum);
s32 sceKernelSetEventFlag(SceUID evid, u32 bits);
s32 sceKernelSignalSema(SceUID semaid, s32 signal);
s32 sceKernelUnregisterSysEventHandler(SceSysEventHandler *handler);
s32 sceKernelWaitEventFlag(SceUID evid, u32 bits, u32 wait, u32 *outBits, u32 *timeout);
s32 sceKernelWaitSema(SceUID semaid, s32 signal, u32 *timeout);
s32 sceNandCalcEcc(u8 *buf);
s32 sceNandCollectEcc(u8 *buf, u32 ecc);
s32 sceNandCountChipMakersBBM(void);
s32 sceNandDetectChip(void);
s32 sceNandDetectChipMakersBBM(u32 ppn);
s32 sceNandDoMarkAsBadBlock(u32 ppn);
s32 sceNandDumpWearBBMSize(void);
s32 sceNandEnd(void);
s32 sceNandEraseAllBlock(void);
s32 sceNandEraseBlock(u32 ppn);
s32 sceNandEraseBlockWithRetry(u32 ppn);
s32 sceNandGetPageSize(void);
s32 sceNandGetPagesPerBlock(void);
s32 sceNandGetTotalBlocks(void);
s32 sceNandInit(void);
s32 sceNandIsBadBlock(u32 ppn);
s32 sceNandLock(s32 writeMode);
s32 sceNandReadAccess(u32 ppn, void *user, void *spare, u32 len, s32 mode);
s32 sceNandReadBlockWithRetry(u32 ppn, void *user, void *spare);
s32 sceNandReadExtraOnly(u32 ppn, void *spare, u32 len);
s32 sceNandReadId(u8 *buf, s32 len);
s32 sceNandReadPages(u32 ppn, void *user, void *spare, u32 len);
s32 sceNandReadPagesRawAll(u32 ppn, void *user, void *spare, u32 len);
s32 sceNandReadPagesRawExtra(u32 ppn, void *user, void *spare, u32 len);
s32 sceNandReadStatus(void);
s32 sceNandReset(u8 *status);
s32 sceNandResume(void);
s32 sceNandSetWriteProtect(s32 protect);
s32 sceNandSuspend(void);
s32 sceNandTestBlock(u32 ppn);
void sceNandUnlock(void);
s32 sceNandVerifyBlockWithRetry(u32 ppn, void *user, void *spare);
s32 sceNandVerifyEcc(u8 *buf, u32 ecc);
s32 sceNandWriteAccess(u32 ppn, void *user, void *spare, u32 len, s32 mode);
s32 sceNandWriteBlock(u32 ppn, void *user, void *spare);
s32 sceNandWriteBlockWithVerify(u32 ppn, void *user, void *spare);
s32 sceNandWritePages(u32 ppn, void *user, void *spare, u32 len);
s32 sceNandWritePagesRawAll(u32 ppn, void *user, void *spare, u32 len);
s32 sceNandWritePagesRawExtra(u32 ppn, void *user, void *spare, u32 len);
s32 sceSysregEmcsmBusClockDisable(void);
s32 sceSysregEmcsmBusClockEnable(void);
s32 sceSysregEmcsmIoEnable(void);

#endif
