#ifndef INTERRUPTMAN_DECLS_H
#define INTERRUPTMAN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_00003E00_s {
    u8 pad0[0x1AC];
    volatile s32 unk1AC;
    volatile s32 unk1B0;
    u8 pad1B4[0xECC];
    volatile s32 unk1080;
    volatile s32 unk1084;
};

/* 1.00: one interrupt or sub-interrupt entry, 0x38 bytes */
typedef struct Interrupt {
    s32 handler;    /* 0x00: func | 2 (user) / 1 (released) */
    s32 gp;         /* 0x04 */
    void *arg;      /* 0x08 */
    s32 unkC;
    s32 unk10;      /* 0x10: -1 at init */
    s32 unk14;      /* 0x14: -1 at init */
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    struct Interrupt **subIntrs; /* 0x28 */
    struct SceIntrCb *cb;  /* 0x2C */
    u32 numSubIntrs : 8;    /* 0x30 */
    u32 noLogging : 1;      /* bit 8 */
    u32 level : 2;          /* bits 9-10 */
    u32 userAcceptable : 1; /* bit 11 (sub-interrupts) */
    u32 isSubIntr : 1;      /* bit 12 */
    u32 hasUserSub : 1;     /* bit 13: some sub-interrupt accepts user mode */
    u32 unk30_14 : 18;
    s32 unk34;
} Interrupt;

/* 1.00 interrupt manager state, 0x107C bytes (memset by module_bootstart) */
typedef struct InterruptInfo {
    u64 levelMasks[4];          /* 0x000: intrs enabled at each level */
    u32 unk20[16];              /* 0x020 */
    Interrupt *intrPtrs[67];    /* 0x060 */
    s32 isIntrContext;          /* 0x16C */
    s32 unk170[4];              /* 0x170 */
    s32 unk180;                 /* 0x180 */
    s32 unk184;                 /* 0x184 */
    s32 unk188;                 /* 0x188 */
    s32 unk18C;                 /* 0x18C: InterruptManagerForKernel_53991063 */
    s32 interruptExitCount;     /* 0x190 */
    u32 clockCounterLo;         /* 0x194 */
    u32 clockCounterHi;         /* 0x198 */
    s32 (*hookAfter)(s32);      /* 0x19C */
    s32 (*hookBefore)(void);    /* 0x1A0 */
    void *intrStack;            /* 0x1A4 */
    s32 intrStackSize;          /* 0x1A8 */
    s32 userIntrStack;          /* 0x1AC */
    s32 userIntrStackSize;      /* 0x1B0 */
    s32 unk1B4;                 /* 0x1B4 */
    void *syscallTable;         /* 0x1B8 */
    s32 heapId;                 /* 0x1BC */
    s32 unk1C0;                 /* 0x1C0 */
    s32 intcState[2];           /* 0x1C4 */
    s32 count;                  /* 0x1CC: cop0 Count saved at suspend */
    s32 compare;                /* 0x1D0: cop0 Compare saved at suspend */
    Interrupt intr[67];         /* 0x1D4 */
} InterruptInfo;

typedef struct SceIntrCb {
    s32 size;
    s32 unk4;
    s32 (*cbRegBefore)(s32 intrNum, s32 subIntrNum, void *handler, void *arg); /* 0x08 */
    s32 (*cbRegAfter)(s32 intrNum, s32 subIntrNum, void *handler, void *arg);  /* 0x0C */
    s32 (*cbRelBefore)(s32 intrNum, s32 subIntrNum); /* 0x10 */
    s32 (*cbRelAfter)(s32 intrNum, s32 subIntrNum);  /* 0x14 */
    s32 (*cbEnable)(s32 intrNum, s32 subIntrNum);    /* 0x18 */
    s32 (*cbDisable)(s32 intrNum, s32 subIntrNum);   /* 0x1C */
    s32 (*cbSuspend)(s32 intrNum, s32 subIntrNum, s32 *state); /* 0x20 */
    s32 (*cbResume)(s32 intrNum, s32 subIntrNum, s32 state);   /* 0x24 */
    s32 (*cbIsOccurred)(s32 intrNum, s32 subIntrNum); /* 0x28 */
} SceIntrCb;

typedef struct SceIntrHandler {
    s32 size;          /* must be 12 */
    s32 numSubIntrs;   /* 0x04 */
    SceIntrCb *cb;     /* 0x08 */
} SceIntrHandler;

extern s32 D_00003910;
extern InterruptInfo D_00003950;
extern s32 D_00003AA8;
extern s32 D_00003AAC;
extern s32 D_00003AB0;
extern s32 D_00003B0C;
extern struct D_00003E00_s D_00003E00;
extern s32 D_00003F6C;
extern s32 D_00003F8C;
extern s32 D_00003F90;
extern s32 D_00003F94;
extern s32 D_00003F98;
extern s32 D_00003F9C;
extern s32 D_00003FA0;
extern s32 D_00004ABC;
extern s32 D_00004E7C;

s32 InterruptManagerForKernel_53991063(void);
void *QueryInterruptManCB(void);
s32 QueryIntrHandlerInfo(void);
void RegisterContextHooks(s32 arg0, s32 arg1);
void RegisterSubIntrruptMonitor(s32 arg0, s32 arg1);
void ReleaseContextHooks(void);
void ReleaseSubIntrruptMonitor(void);
s32 _sceKernelGetCpuClockCounterHigh(void);
s32 _sceKernelGetCpuClockCounterLow(void);
s32 func_00000000(s32 arg0);
s32 func_00000274(void);
void func_00000348(void *ptr);
s32 func_00002FDC(s32 arg0);
s32 func_00002FE4(void);
s32 func_000030AC(s32 arg0);
s32 func_000030B4(void);
s32 func_000031AC(s32 arg0);
s32 func_0000340C(s32 arg0);
void *sceKernelAllocHeapMemory(s32 heapId, s32 size);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelCreateHeap(s32 partitionId, s32 size, s32 attr, const char *name);
void sceKernelDisableIntr(s32 arg0);
s32 sceKernelFreeHeapMemory(s32 heapId, void *ptr);
s32 sceKernelGetInterruptExitCount(void);
s32 sceKernelGetIntrSyscallFrame(void);
s32 sceKernelIsIntrContext(void);
s32 sceKernelRegisterUserSpaceIntrStack(s32 arg0, s32 arg1);
s32 sceKernelSuspendIntr(s32, s32);

#endif
