#ifndef DMACMAN_DECLS_H
#define DMACMAN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

/* PL080 linked list item (hardware descriptor, physical addresses) */
typedef struct {
    u32 srcAddr;  /* 0x0 */
    u32 dstAddr;  /* 0x4 */
    volatile u32 next; /* 0x8 next LLI, 0 = end */
    u32 control;  /* 0xC bit31 = terminal count interrupt */
} SceDmaLLI;

/* DMA operation (sceKernelDmaOperation), 1.00-1.52 layout, 0x54 bytes */
struct SceDmaOp;
typedef s32 (*SceDmaOpCallback)(struct SceDmaOp *op, s32 status, s32 ch, void *cookie);
typedef struct SceDmaOp {
    struct SceDmaOp *next;    /* 0x00 queue / free list */
    struct SceDmaOp *prev;    /* 0x04 */
    struct SceDmaOp *parent;  /* 0x08 AssignMultiple chain */
    struct SceDmaOp *child;   /* 0x0C */
    volatile u32 flag;        /* 0x10 SCE_DMAOP_* */
#if FW_VERSION == 100
    s32 chMask0;              /* 0x14 DMAC0 channel mask */
    s32 chMask1;              /* 0x18 DMAC1 channel mask */
#else
    u32 chMask;               /* 0x14 (DMAC1 mask << 8) | DMAC0 mask */
    u32 unk18;
#endif
    volatile s32 ch;          /* 0x1C assigned channel (0-15), -1 none */
    volatile u32 srcAddr;     /* 0x20 shadow of SceDmacChRegs */
    volatile u32 dstAddr;     /* 0x24 */
    volatile u32 lli;         /* 0x28 */
    volatile u32 control;     /* 0x2C */
    volatile u32 config;      /* 0x30 */
    u32 unk34;
    u32 unk38;
    u32 unk3C;
    SceDmaLLI *headLLI;       /* 0x40 */
    SceDmaLLI *endLLI;        /* 0x44 */
    SceDmaOpCallback callback; /* 0x48 */
    void *cookie;             /* 0x4C */
    SceUID evid;              /* 0x50 per-op event flag */
} SceDmaOp;
#define SCE_DMAOP_QUEUED   0x1
#define SCE_DMAOP_RUNNING  0x2
#define SCE_DMAOP_ERROR    0x10
#define SCE_DMAOP_QUIT     0x20
#define SCE_DMAOP_DONE     0x40
#define SCE_DMAOP_ASSIGNED 0x100
#define SCE_DMAOP_FREE     0x1000

typedef struct {
    SceDmaOp *op[16];   /* 0x00 op running on channel */
#if FW_VERSION == 100
    u32 excluded[2];    /* 0x40 per DMAC, bit = channel */
    u32 reserved[2];    /* 0x48 */
#else
    u32 excluded;       /* 0x40 bit = channel 0-15 */
    u32 reserved;       /* 0x44 */
    u32 unk48;
#endif
} SceDmaChState;
typedef struct {
    u32 clk;            /* 0x00 0xBC100050 & 0x60 */
    struct {
        u32 config;     /* 0x30 */
        u32 sync;       /* 0x34 */
        u32 unk38;      /* 0x38 */
    } dmac[2];
} SceDmacSave;

/* PrimeCell PL080 DMA controller: DMAC0 at 0xBC900000, DMAC1 at 0xBCA00000 */
typedef struct {
    volatile u32 srcAddr;   /* 0x00 */
    volatile u32 dstAddr;   /* 0x04 */
    volatile u32 lli;       /* 0x08 */
    volatile u32 control;   /* 0x0C */
    volatile u32 config;    /* 0x10 bit0 enable, bit17 active, bit18 halt */
    u32 pad14[3];
} SceDmacChRegs;
typedef struct {
    volatile u32 intStatus;       /* 0x00 */
    volatile u32 intTCStatus;     /* 0x04 */
    volatile u32 intTCClear;      /* 0x08 */
    volatile u32 intErrorStatus;  /* 0x0C */
    volatile u32 intErrClr;       /* 0x10 */
    volatile u32 rawIntTCStatus;  /* 0x14 */
    volatile u32 rawIntErrStatus; /* 0x18 */
    volatile u32 enbldChns;       /* 0x1C */
    volatile u32 softBReq;        /* 0x20 */
    volatile u32 softSReq;        /* 0x24 */
    volatile u32 softLBReq;       /* 0x28 */
    volatile u32 softLSReq;       /* 0x2C */
    volatile u32 config;          /* 0x30 bit0 enable */
    volatile u32 sync;            /* 0x34 */
    volatile u32 unk38;           /* 0x38 (PSP specific, saved on suspend) */
    u32 pad3C[49];
    SceDmacChRegs ch[8];          /* 0x100 */
} SceDmacRegs;
#define DMAC0_BASE 0xBC900000
#define DMAC1_BASE 0xBCA00000
#define DMAC_CH_BASE(n) ((n) ? 0xBCA00100 : 0xBC900100)

extern SceDmaChState g_dmaCh;
extern SceDmaOp *g_dmaFreeOp;
extern SceDmaOp g_dmaOps[128];
extern SceDmaOp *g_dmaQueueHead;
extern SceDmaOp *g_dmaQueueTail;
extern SceDmacSave g_dmacSave;

s32 Kprintf(const char *fmt, ...);
s32 _sceDmacManResumeHandler(s32 unk, void *param);
s32 _sceDmacManSuspendHandler(s32 unk, void *param);
s32 _sceKernelDmaInterrupt(s32 unk, s32 dmac);
s32 _sceKernelDmaOpChCheck(SceDmaOp **ops, u32 n);
void _sceKernelDmaOpQueue(SceDmaOp *op);
void _sceKernelDmaOpStop(SceDmaOp *op);
void _sceKernelDmaSchedule(void);
void *memset(void *s, s32 c, u32 n);
void sceKernelCpuResumeIntr(s32);
void sceKernelCpuResumeIntrWithSync(s32);
s32 sceKernelCpuSuspendIntr(void);
SceUID sceKernelCreateEventFlag(const char *name, s32 attr, s32 bits, void *opt);
s32 sceKernelDeleteEventFlag(SceUID evid);
s32 sceKernelDisableIntr(s32 intno);
s32 sceKernelDmaOnDebugMode(void);
s32 sceKernelDmaOpAllCancel(void);
s32 sceKernelEnableIntr(s32 intno);
s32 sceKernelRegisterIntrHandler(s32 intno, s32 no, void *handler, s32 arg, void *opt);
s32 sceKernelRegisterResumeHandler(s32 reg, void *handler, void *param);
s32 sceKernelRegisterSuspendHandler(s32 reg, void *handler, void *param);
s32 sceKernelReleaseIntrHandler(s32 intno);
s32 sceKernelSetEventFlag(SceUID evid, u32 bits);
s32 sceKernelWaitEventFlag(SceUID evid, u32 bits, u32 wait, u32 *outBits, u32 *timeout);

#endif
