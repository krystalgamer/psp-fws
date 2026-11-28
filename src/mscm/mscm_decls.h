#ifndef MSCM_DECLS_H
#define MSCM_DECLS_H

#include "common.h"
#include "m2c_macros.h"

typedef struct {
    u32 low;
    u32 hi;
} SceKernelSysClock;

typedef struct {
    u32 from;
    u32 to;
} SceMScmBitMap;

/* Memory Stick host controller (MSIF) registers, 0xBD200000 */
typedef struct {
    volatile u16 unk0;      /* 0x00: icon/intr control */
    volatile u16 unk2;      /* 0x02: icon ucode start address */
    volatile u16 unk4;      /* 0x04: icon status (bit 0: ucode running) */
    u16 unk6;
    volatile u16 unk8;      /* 0x08: interrupt cause */
    u16 unkA;
    u8 unkC[0x20 - 0xC];
    volatile u16 unk20;     /* 0x20: icon ucode data port */
    u8 unk22[0x30 - 0x22];
    volatile u16 command;   /* 0x30: TPC << 12 | size */
    u16 unk32;
    volatile u32 data;      /* 0x34 */
    volatile u16 status;    /* 0x38 */
    u16 unk3A;
    volatile u16 sys;       /* 0x3C */
    u16 unk3E;
    volatile u32 unk40;     /* 0x40 */
} SceMScmHCReg;

/* host controller state; drivers get a pointer to it as their HC descriptor */
typedef struct SceMScmHC {
    SceMScmHCReg *reg;      /* 0x00 */
    s32 index;              /* 0x04: slot / HC number */
    struct SceMScmHC *hc;   /* 0x08: points to itself */
    s32 inService;          /* 0x0C */
#if FW_VERSION < 250
    s32 unk10;
    u32 intrStatus;         /* 0x14 */
    s32 lastStatus;         /* 0x18 */
    s32 unk1C;
    s32 unk20[4];           /* 0x20: initialised to -1 */
    SceUID evf;             /* 0x30: "SceMScmAl" */
    u8 unk34[0x27C - 0x34];
#if FW_VERSION >= 150
    s32 unk27C;
    s32 unk280;
#endif
#else
    s32 unk10;
    s32 lastStatus;         /* 0x14 */
    s32 unk18;
    s32 unk1C[4];
    SceUID evf;             /* 0x2C */
#endif
} SceMScmHC;
#if FW_VERSION < 150
typedef char chk_SceMScmHC[(sizeof(SceMScmHC) == 0x27C) ? 1 : -1];
#elif FW_VERSION < 250
typedef char chk_SceMScmHC[(sizeof(SceMScmHC) == 0x284) ? 1 : -1];
#endif

/* HC register accessors: each access runs with interrupts disabled (inlined everywhere) */
s32 sceKernelCpuSuspendIntr(void);
void sceKernelCpuResumeIntr(s32 intr);

static inline u16 hcRead16(volatile u16 *p) {
    s32 intr = sceKernelCpuSuspendIntr();
    u16 v = *p;
    sceKernelCpuResumeIntr(intr);
    return v;
}

static inline void hcWrite16(volatile u16 *p, u16 v) {
    s32 intr = sceKernelCpuSuspendIntr();
    *p = v;
    asm volatile("sync");
    sceKernelCpuResumeIntr(intr);
}

static inline void hcOr16(volatile u16 *p, u16 v) {
    s32 intr = sceKernelCpuSuspendIntr();
    *p |= v;
    asm volatile("sync");
    sceKernelCpuResumeIntr(intr);
}


static inline void hcAnd16(volatile u16 *p, u16 v) {
    s32 intr = sceKernelCpuSuspendIntr();
    *p &= v;
    asm volatile("sync");
    sceKernelCpuResumeIntr(intr);
}

extern SceMScmBitMap D_000069F8[13];
extern u8 D_00006B10[];
extern u8 D_00006B24[];
extern s32 D_00006F0C;
extern SceMScmHC D_00006F14[1];
extern SceKernelSysClock D_00007190; /* sysclock ticks per usec */
extern s32 D_00007218;
extern s32 D_00007800;
extern s32 D_00007880;
extern s32 D_00007AF4;

s32 _sceMScmReinitializeHC(s32 slot);
s32 func_00000000(s32 slot);
s32 func_000000AC(s32 slot);
s32 func_000001E4(SceMScmHC *hc);
void func_00000930(s32 arg0);
s32 func_00000C1C(SceMScmHC *hc);
s32 func_00002194(s32 (*arg0)(s32, s32, s32, s32, s32), s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 func_0000254C(s32 (*arg0)(s32, s32, s32, s32, s32), s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 func_000029F8(SceMScmHC *hc, s32 timeout);
s32 func_00002FF0(s32 a0, s32 a1, s32 a2, u32 *arg);
s32 func_00003E58(SceMScmHC *hc, s32 *out);
s32 func_00003EB0(SceMScmHC *hc, s32 mode);
s32 func_00003F48(SceMScmHC *hc, s32 *out);
s32 func_00004430(SceMScmHC *hc, s32 mode);
s32 func_000047C0(SceMScmHC *hc, s32 timeout);
s32 func_00004870(void);
s32 func_0000488C(u32 start, s32 timeout);
s32 func_00004B70(s32 intno, SceMScmHC *hc);
s32 func_00004D30(s32 intno, SceMScmHC *hc);
void func_00004E4C(void);
u32 func_00004E50(u32 bits);
s32 func_00004E68(s32 arg0, s32 arg1);
u32 func_00004E94(s32 index);
s32 func_00004F60(s32 slot);
u32 func_0000514C(s32 index);
s32 func_00005174(SceMScmHC *hc, u32 flags, s32 on);
s32 func_00005270(s32 slot, u32 flags);
s32 func_000052F4(void);
s32 func_000053EC(void);
s32 func_000057F0(void);
s32 func_00005804(s32 arg0);
s32 func_000059CC(void);
s32 func_000059D8(void);
s32 func_000059E0(s32 n);
s32 func_00005A44(s32 arg0, s32 arg1, s32 arg2);
s32 func_00005AA8(SceMScmHC *hc, s32 mode);
s32 func_00005AD0(s32 slot, u32 mode);
s32 func_00005B3C(SceMScmHC *hc, s32 *out);
s32 func_00005B64(s32 slot, s32 *out);
s32 func_00005C58(s32 slot);
s32 func_00005C8C(s32 slot, s32 *out);
s32 func_00005CE4(s32 slot, s32 *a, s32 *b);
s32 func_00005E58(s32 slot, s32 on);
s32 func_00006440(SceMScmHC *hc);
s32 func_00006474(s32 slot, s32 mode);
s32 func_00006484(void);
s32 func_0000648C(void);
s32 func_00006494(SceMScmHC *hc);
s32 func_000064C0(void);
s32 func_000064C8(s32);
s32 func_000064D8(s32 slot, s32 *out);
s32 func_0000652C(s32, s32);
s32 func_000066DC(SceMScmHC *hc);
s32 func_00006704(SceMScmHC *hc, s32 arg1);
s32 sceKernelChangeThreadPriority(u32, s32);
s32 sceKernelClearEventFlag(u32, u32);
s32 sceKernelDelayThread(u32);
u32 sceKernelGetSystemTimeLow(void);
s32 sceKernelGetThreadCurrentPriority(void);
M2C_UNK sceKernelReleaseIntrHandler(M2C_UNK);
s32 sceMScmClearALEvents(SceMScmHC *hc);
s32 sceMScmGetSlotPower(SceMScmHC *hc, s32 *out);
s32 sceMScmGetSlotState(SceMScmHC *hc, s32 *out);
s32 sceMScmHCLastStatus(SceMScmHC *hc);
u16 sceMScmHCSetBusyCount(SceMScmHC *hc, u16 count);
s32 sceMScmIconLoadUcode(SceMScmHC *hc, u32 addr, u16 *code, s32 count);
void sceMScmIconResetIcon(SceMScmHC *hc);
s32 sceMScmIconStartUcode(SceMScmHC *hc, u32 addr);
s32 sceMScmIconStopUcode(SceMScmHC *hc);
s32 sceMScmResetHC(SceMScmHC *hc, s32 mode);
s32 sceMScmSendTPC(SceMScmHC *hc, u8 tpc, s32 size, s32 timeout);
s32 sceMScmSendTPCDMA(SceMScmHC *hc, u8 dmaCh, s32 a2, s32 a3);
s32 sceMScmSetHCTransferMode(SceMScmHC *hc, s32 a, s32 b, s32 c);
s32 sceMScmSetPullDownReg(s32 slot, s32 on);
s32 sceMScmSetPullDownRegByDesc(SceMScmHC *hc, s32 on);
s32 sceMScmSetSlotPower(SceMScmHC *hc, s32 on);
s32 sceMScmTPCSetCmdHelper(SceMScmHC *hc, u8 cmd, s32 timeout);
s32 sceMScmWaitAndEndDMA(SceMScmHC *hc, s32 a1, s32 a2);
s32 sceMScmWaitHCIntr(SceMScmHC *hc, u32 *pattern, s32 timeout);
s32 sceMScmWriteDataPIO(SceMScmHC *hc, void *buf, s32 size, s32 timeout);
s32 sceMScm_driver_D6DB3199(SceMScmHC *hc, s32 *arg1, s32 *arg2, s32 *arg3);
M2C_UNK sceSysregMsifIoDisable(s32);
M2C_UNK sceSysregMsifIoEnable(s32);

#endif
