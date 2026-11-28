#ifndef MSCM_DECLS_H
#define MSCM_DECLS_H

#include "common.h"
#include "m2c_macros.h"

/* iofilemgr file descriptor block (leading fields only; see src/iofilemgr) */
typedef struct SceIoIob {
    s32 i_flgs;     /* 0x0 */
    s32 i_unit;     /* 0x4 */
    void *i_de;     /* 0x8 */
    s32 d_type;     /* 0xC */
    void *i_private; /* 0x10 */
} SceIoIob;

typedef struct {
    u32 low;
    u32 hi;
} SceKernelSysClock;

typedef struct {
    u32 from;
    u32 to;
} SceMScmBitMap;

/* registered CLDM description (copied out by sceMScmGetCLDM) */
typedef struct {
    u32 unk0;
    u32 unk4;
    void *unk8;                 /* VPL block */
    u8 unkC[0x110 - 0xC];
    u32 entry;                  /* 0x110: VPL block holding the CLDM's stop entry, called as s32 (*)(s32, s32, s32) on detach */
    u32 unk114;
    u32 unk118;
} SceMScmCLDMInfo;
typedef char chk_SceMScmCLDMInfo[(sizeof(SceMScmCLDMInfo) == 0x11C) ? 1 : -1];

/* CLDM list node; D_00006B54[slot][3] are the list heads */
typedef struct SceMScmCLDM {
    struct SceMScmCLDM *next;   /* 0x00 */
    struct SceMScmCLDM *prev;   /* 0x04 */
    SceMScmCLDMInfo info;       /* 0x08 */
    s32 unk124;
} SceMScmCLDM;
typedef char chk_SceMScmCLDM[(sizeof(SceMScmCLDM) == 0x128) ? 1 : -1];

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
    volatile u32 intrStatus; /* 0x14 */
    volatile s32 lastStatus; /* 0x18: status register at the last interrupt */
    volatile s32 intrCause; /* 0x1C: reg->unk8 at the last interrupt */
    s32 readAddr;           /* 0x20: cached MS register window (-1 = unknown) */
    s32 readSize;           /* 0x24 */
    s32 writeAddr;          /* 0x28 */
    s32 writeSize;          /* 0x2C */
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
    s32 readAddr;
    s32 readSize;
    s32 writeAddr;
    s32 writeSize;
    SceUID evf;             /* 0x2C */
#endif
} SceMScmHC;
#if FW_VERSION < 150
typedef char chk_SceMScmHC[(sizeof(SceMScmHC) == 0x27C) ? 1 : -1];
#elif FW_VERSION < 250
typedef char chk_SceMScmHC[(sizeof(SceMScmHC) == 0x284) ? 1 : -1];
#endif

/* class driver (CLD) registration block, copied into D_00006ED8[slot] */
typedef struct {
    char *name;                                  /* 0x00 */
    s32 (*cmd)(s32, s32, s32, s32, s32);         /* 0x04: driver command entry (4 = detach), run via func_00002194 */
    s32 (*intrCb)(SceMScmHC *hc, void *arg);     /* 0x08: called from the MSIF irq handler */
    s32 (*insertCb)(SceMScmHC *hc, void *arg);   /* 0x0C: called from the GPIO (insert/eject) handler */
    s32 cmdArg;             /* 0x10 */
    void *intrArg;          /* 0x14 */
    void *insertArg;        /* 0x18 */
    u32 unk1C;
} SceMScmCLD;

/* per-slot attached class driver (D_00006ED8[slot]) */
typedef struct {
    SceMScmCLD drv;         /* 0x00 */
    SceMScmCLDM *cldm;      /* 0x20 */
    unsigned long attached; /* 0x24: not int/s32 (alias set; see the irq handler) */
} SceMScmSlotCB;
typedef char chk_SceMScmSlotCB[(sizeof(SceMScmSlotCB) == 0x28) ? 1 : -1];

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

extern char D_00006950[]; /* "mscm_ioman.c" */
extern u8 D_000069A0[]; /* SceSysEventHandler */
extern SceMScmBitMap D_000069F8[13];
extern u8 D_00006B10[];
extern u8 D_00006B24[];
extern s32 D_00006B40[1];
extern SceUID D_00006B50; /* "SceMScm" VPL */
extern SceMScmCLDM D_00006B54[1][3];
extern u8 D_00006DF0[];
extern SceUID D_00006ECC[1]; /* "SceMScmCLDMList" sema */
extern SceUID D_00006ED0; /* media thread */
extern s32 D_00006ED4[1]; /* MSCM status per slot */
extern SceMScmSlotCB D_00006ED8[1];
extern void *D_00006EFC;
extern s32 D_00006F00[3];
extern s32 D_00006F0C;
extern SceUID D_00006F10; /* main thread */
extern SceMScmHC D_00006F14[1];
extern s32 D_00006F20;
extern SceUID D_00006F44;
extern s32 D_00006F90[1];
extern char D_00007120[]; /* "SceMScm" */
extern SceKernelSysClock D_00007190; /* sysclock ticks per usec */
extern SceUID D_00007198[1][32]; /* notify event flags (devctl register) */
extern s32 D_00007218;
extern SceUID D_0000721C[1][32]; /* notify callbacks (devctl register) */
extern char D_00007300[]; /* "Assertion failed at %s:%s:%04d\n" (mscm_ioman.c) */
extern SceUID D_00007330;
extern s32 D_00007334[1];
extern void *D_0000735C;
extern SceUID D_00007370;
extern SceUID D_000073A4;
extern s32 D_00007800;
extern s32 D_00007880;
extern s32 D_00007AF4;
extern u64 g_ejectTime[1]; /* 1.50+: time of the last ejection */
extern u64 g_insertTime[1]; /* 1.50+: time of the last insertion */
extern s32 g_irqMissCount[1];
extern SceUID g_mainEvf[1];
extern SceUID g_mediaEvf[1];

s32 _sceMScmGetCLDMHelper(s32 slot, s32 n, SceMScmCLDMInfo **out);
s32 _sceMScmReinitializeHC(s32 slot);
s32 func_00000000(s32 slot);
s32 func_000000AC(s32 slot);
s32 func_000001E4(SceMScmHC *hc);
void func_00000930(s32 arg0);
s32 func_00000C1C(SceMScmHC *hc);
s32 func_0000179C(SceSize args, void *argp);
s32 func_000018B8(s32 slot);
s32 func_00001BA0(s32 slot);
s32 func_00001D18(s32 slot);
s32 func_00002194(s32 (*arg0)(s32, s32, s32, s32, s32), s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 func_00002238(SceSize args, void *argp);
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
s32 func_00004D30(s32 intno, SceMScmHC *hc);
void func_00004E4C(void);
u32 func_00004E50(u32 bits);
s32 func_00004E68(s32 arg0, s32 arg1);
u32 func_00004E94(s32 index);
s32 func_00004F60(s32 slot);
s32 func_00005094(s32 slot, u32 mask, s32 enable);
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
s32 func_00005A44_v100(s32 n);
s32 func_00005AA8(SceMScmHC *hc, s32 mode);
s32 func_00005AD0(s32 slot, u32 mode);
s32 func_00005B3C(SceMScmHC *hc, s32 *out);
s32 func_00005B64(s32 slot, s32 *out);
s32 func_00005C58(s32 slot);
s32 func_00005C8C(s32 slot, s32 *out);
s32 func_00005CE4(s32 slot, s32 *a, s32 *b);
s32 func_00005E58(s32 slot, s32 on);
s32 func_00005EB0(s32 slot);
s32 func_00005EE4(s32 n);
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
u64 sceKernelGetSystemTimeWide(void);
s32 sceKernelGetThreadCurrentPriority(void);
M2C_UNK sceKernelReleaseIntrHandler(M2C_UNK);
s32 sceMScmClearALEvents(SceMScmHC *hc);
s32 sceMScmGetCLDM(s32 slot, s32 n, SceMScmCLDMInfo *out);
s32 sceMScmGetRegisteredCLDMCount(s32 slot);
s32 sceMScmGetSlotPower(SceMScmHC *hc, s32 *out);
s32 sceMScmGetSlotState(SceMScmHC *hc, s32 *out);
s32 sceMScmHCIrqPrimaryHandler(s32 intno, SceMScmHC *hc);
s32 sceMScmHCLastStatus(SceMScmHC *hc);
u16 sceMScmHCSetBusyCount(SceMScmHC *hc, u16 count);
s32 sceMScmIconLoadUcode(SceMScmHC *hc, u32 addr, u16 *code, s32 count);
void sceMScmIconResetIcon(SceMScmHC *hc);
s32 sceMScmIconStartUcode(SceMScmHC *hc, u32 addr);
s32 sceMScmIconStopUcode(SceMScmHC *hc);
s32 sceMScmReadDataPIO(SceMScmHC *hc, u8 *buf, s32 size, s32 timeout);
s32 sceMScmReadMSReg(SceMScmHC *hc, s32 addr, s32 size, u8 *buf, s32 force, s32 timeout);
s32 sceMScmReadMSRegHelper(SceMScmHC *hc, u8 *buf, s32 size, s32 timeout);
s32 sceMScmRegisterCLD(s32 slot, SceMScmCLD *cld);
s32 sceMScmResetHC(SceMScmHC *hc, u32 mode);
s32 sceMScmSendTPC(SceMScmHC *hc, u8 tpc, s32 size, s32 timeout);
s32 sceMScmSendTPCDMA(SceMScmHC *hc, u8 dmaCh, s32 a2, s32 a3);
s32 sceMScmSetHCTransferMode(SceMScmHC *hc, s32 a, s32 b, s32 c);
s32 sceMScmSetPullDownReg(s32 slot, s32 on);
s32 sceMScmSetPullDownRegByDesc(SceMScmHC *hc, s32 on);
s32 sceMScmSetSlotPower(SceMScmHC *hc, s32 on);
s32 sceMScmTPCExSetCmd(SceMScmHC *hc, u8 cmd, s8 *arg, u8 *intr, s32 timeout);
s32 sceMScmTPCExSetCmdHelper(SceMScmHC *hc, u8 cmd, s8 *arg, s32 timeout);
s32 sceMScmTPCGetInt(SceMScmHC *hc, u8 *intr, s32 mode, s32 timeout);
s32 sceMScmTPCGetIntHelper(SceMScmHC *hc, u8 *intr, s32 timeout);
s32 sceMScmTPCReadShortData(SceMScmHC *hc, u8 *buf, s32 size, s32 timeout);
s32 sceMScmTPCSetCmd(SceMScmHC *hc, u8 cmd, u8 *intr, s32 timeout);
s32 sceMScmTPCSetCmdHelper(SceMScmHC *hc, u8 cmd, s32 timeout);
s32 sceMScmTPCSetRWRegAdrs(SceMScmHC *hc, u8 *adr, s32 timeout);
s32 sceMScmTPCWriteShortData(SceMScmHC *hc, u8 *buf, s32 size, s32 timeout);
s32 sceMScmUnRegisterCLD(s32 slot, SceMScmCLD *cld);
s32 sceMScmWaitAndEndDMA(SceMScmHC *hc, s32 a1, s32 a2);
s32 sceMScmWaitHCIntr(SceMScmHC *hc, u32 *pattern, s32 timeout);
s32 sceMScmWriteDataPIO(SceMScmHC *hc, u8 *buf, s32 size, s32 timeout);
s32 sceMScmWriteMSReg(SceMScmHC *hc, s32 addr, s32 size, u8 *buf, s32 force, s32 timeout);
s32 sceMScmWriteMSRegHelper(SceMScmHC *hc, u8 *buf, s32 size, s32 timeout);
s32 sceMScm_driver_D6DB3199(SceMScmHC *hc, s32 *arg1, s32 *arg2, s32 *arg3);
M2C_UNK sceSysregMsifIoDisable(s32);
M2C_UNK sceSysregMsifIoEnable(s32);

#endif
