#ifndef MSSTOR_DECLS_H
#define MSSTOR_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_000099D4_s {
    s32 unk0;
    u8 pad4[0x14];
    s32 unk18;
    u8 pad1C[0x8];
    s32 unk24;
    s32 unk28;
};

struct D_00009B54_s {
    u8 pad0[0x4E88];
    s32 unk4E88;
};

typedef int SceMode;
typedef s64 SceOff;
typedef s32 SceSSize;
typedef struct SceIoStat SceIoStat;
typedef struct SceIoDirent SceIoDirent;
typedef struct SceIoIob SceIoIob;
typedef struct SceIoDeviceEntry SceIoDeviceEntry;
typedef struct SceIoDeviceTable SceIoDeviceTable;
typedef struct SceIoDeviceFunction SceIoDeviceFunction;

/* registered CLDM description (copied out by sceMScmGetCLDM) */
typedef struct {
    s32 slot;                   /* 0x00 */
    s32 cls;                    /* 0x04: list index 0..2 */
    char *path;                 /* 0x08: module file (VPL copy); NULL = already resident */
    s32 nIds;                   /* 0x0C */
    u8 unk10[0x110 - 0x10];     /* 0x10: media ids {a, b, c, d} x 16 (-1 = any) */
    u32 args;                   /* 0x110: argument string (VPL copy) for load(); an integer, not a pointer */
    s32 (*load)(SceSize argLen, void *args, s32 unk);   /* 0x114 */
    u32 unload;                 /* 0x118: s32 (*)(s32, s32, s32), an integer (branch prediction) */
} SceMScmCLDMInfo;
typedef char chk_SceMScmCLDMInfo[(sizeof(SceMScmCLDMInfo) == 0x11C) ? 1 : -1];

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

typedef struct SceMScmHC SceMScmHC;
/* mscm host controller (leading field only; see src/mscm) */
struct SceMScmHC {
    SceMScmHCReg *reg;      /* 0x00 */
};

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

/* SDK 1.50 msstor.h SceMSstorMediaTypeTuple */
typedef struct {
    u8 type;        /* 0x0: MS register #04 */
    u8 category;    /* 0x1: MS register #06 */
    u8 cls;         /* 0x2: MS register #07 */
    u8 parallel;    /* 0x3: boot&attribute 0x1D3 (Std) / system information 0x33 (Pro) */
    u8 deviceId;    /* 0x4: boot&attribute 0x1D8 (Std) / system information 0x38 (Pro) */
} SceMSstorMediaTypeTuple;

/* the medium state (one instance, D_00008AA4); CLD cmdArg, D_00009B50 points to it */
typedef struct SceMSstorDev {
    SceMScmHC *hc;          /* 0x00 */
    s32 partStart;          /* 0x04: LBA of the active partition */
    s32 unk8;
    s32 unkC;
    s32 parallel;           /* 0x10: 4-bit parallel interface on */
    s32 mediaType2;         /* 0x14: SceMSstorMediaType2 (0x10/0x11 Std, 0x40/0x41 Pro, 0x20) */
    s32 writable;           /* 0x18: 0 = ROM medium */
    s32 wpSwitch;           /* 0x1C: write-protect switch (status reg bit 0) */
    u8 unk20[0x260 - 0x20];
    u16 l2p[0x2000];        /* 0x260: Std logical -> physical block table */
    u8 boot[0x200];         /* 0x4260: Std boot block */
    u8 unk4460[0x4E60 - 0x4460];
    s32 unk4E60;
    s32 unk4E64;
    SceMSstorMediaTypeTuple mediaType;  /* 0x4E68 */
    s32 unk4E70;
    s32 unk4E74;
    void *workArea;         /* 0x4E78: "SceMSstorWorkArea" block */
    SceUID workFpl;         /* 0x4E7C */
    u16 unk4E80;
} SceMSstorDev;
typedef char chk_SceMSstorDev[(sizeof(SceMSstorDev) == 0x4E84) ? 1 : -1];

/* driver context (D_00008934), the d_private of both iofilemgr devices */
typedef struct {
    SceUID sema;            /* 0x00: "SceMSstorIolock" */
    SceMScmHC *hc;          /* 0x04 */
    SceMSstorDev *dev;      /* 0x08 */
    s32 unkC;
    s32 openCount;          /* 0x10 */
    s32 unk14;
    SceUID thread;          /* 0x18: "SceMSstorSleep" */
    SceUID evf;             /* 0x1C: "SceMSstorSleeper" */
} SceMSstorIoCtx;
typedef char chk_SceMSstorIoCtx[(sizeof(SceMSstorIoCtx) == 0x20) ? 1 : -1];

/* per-medium-class operations: D_0000986C (Std), D_00009850 (Pro); D_00009888 = current */
typedef struct {
    s32 (*read)(SceMSstorDev *dev, s32 lba, s32 count, void *buf);     /* 0x00 */
    s32 (*write)(SceMSstorDev *dev, s32 lba, s32 count, void *buf);    /* 0x04 */
    s32 (*unk8)(SceMSstorDev *dev, s32 arg);                           /* 0x08 */
    s32 (*attach)(SceMSstorDev *dev);                                  /* 0x0C */
    s32 (*unk10)(SceMSstorDev *dev);                                   /* 0x10 */
} SceMSstorOps;

typedef struct {
    u16 year;
    u16 month;
    u16 day;
    u16 hour;
    u16 minute;
    u16 second;
    u32 microsecond;
} ScePspDateTime;

struct SceIoStat {
    SceMode st_mode; /* 0x0 */
    u32 st_attr; /* 0x4 */
    SceOff st_size; /* 0x8 */
    ScePspDateTime st_ctime; /* 0x10 */
    ScePspDateTime st_atime; /* 0x20 */
    ScePspDateTime st_mtime; /* 0x30 */
    u32 st_private[6]; /* 0x40 */
};

struct SceIoDirent {
    SceIoStat d_stat; /* 0x0 */
    char d_name[256]; /* 0x58 */
    void *d_private; /* 0x158 */
    s32 dummy; /* 0x15C */
};

struct Unk_D_00009888 {
    u8 pad0[0x4];
    s32 (*unk4)(void *, s32, M2C_UNK, M2C_UNK);
    u8 pad8[0x8];
    M2C_UNK (*unk10)(void *);
    M2C_UNK (*unk14)(void *);
    M2C_UNK (*unk18)(void *);
};

struct Unk_D_00009B50 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x10];
    s32 unk18;
    s32 unk1C;
};

struct Unk_func_00001558_0 {
    u8 pad0[0x4E60];
    s32 unk4E60;
};

struct Unk_func_00004E2C_0 {
    u8 pad0[0x4];
    M2C_UNK * unk4;
};

struct Unk_func_000075DC_0 {
    u8 pad0[0x20];
    s32 unk20;
    s32 unk24;
};

struct Unk_func_00007798_0 {
    u8 pad0[0x4E84];
    s32 unk4E84;
};

struct Unk_func_000077A0_0 {
    u8 pad0[0x4E8C];
    s32 unk4E8C;
};

struct Unk_func_000077B8_0 {
    u8 pad0[0x4E8C];
    s32 unk4E8C;
};

/* 1.00: 8 bytes (no d_userfd_count yet). */
struct SceIoDeviceEntry {
    SceIoDeviceTable *d_dp; /* 0x0 */
    void *d_private; /* 0x4 */
};

/* File descriptor block. 1.00/1.50: static table g_iob[64] of 0x80 bytes, fd = index. */
struct SceIoIob {
    s32 i_flgs; /* 0x0, 1 = read, 2 = write, 0x8 = dir, 0x1000000 = thread-owned, 0x2000000 = power lock */
    s32 i_unit; /* 0x4 */
    SceIoDeviceEntry *i_de; /* 0x8 */
    s32 d_type; /* 0xC */
    void *i_private; /* 0x10 */
    void *i_cwd; /* 0x14 */
    SceOff i_fpos; /* 0x18 */
    SceUID i_thread; /* 0x20 */
    s32 unk24; /* 0x24 */
    s32 fd; /* 0x28, own index; -1 = free */
    SceUID curThread; /* 0x2C */
    s32 userMode; /* 0x30 */
    s32 powerLocked; /* 0x34 */
    s32 asyncPrio; /* 0x38 */
    SceUID asyncThread; /* 0x3C */
    SceUID asyncSema; /* 0x40 */
    SceUID asyncEvFlag; /* 0x44 */
    SceUID asyncCb; /* 0x48 */
    void *asyncCbArgp; /* 0x4C */
    s32 asyncClosed; /* 0x50, uOFW unk050: free the iob when the async result is collected */
    char *asyncCwd; /* 0x54, copy of the caller's cwd for an async open */
    u32 k1; /* 0x58 */
    s32 asyncCmd; /* 0x5C, 0 = close (deleted dev), 1 = open, 2 = close, 3 = read, 4 = write, 5 = lseek, 6 = ioctl */
    s64 asyncRet; /* 0x60 */
    s32 asyncArgs[6]; /* 0x68 */
};

/* Driver function table (22 entries in 1.00, e.g. _nullcon_function). */
struct SceIoDeviceFunction {
    s32 (*df_init)(SceIoDeviceEntry *); /* 0x0 */
    s32 (*df_exit)(SceIoDeviceEntry *); /* 0x4 */
    s32 (*df_open)(SceIoIob *, char *, s32, SceMode); /* 0x8 */
    s32 (*df_close)(SceIoIob *); /* 0xC */
    SceSSize (*df_read)(SceIoIob *, void *, SceSize); /* 0x10 */
    SceSSize (*df_write)(SceIoIob *, const void *, SceSize); /* 0x14 */
    SceOff (*df_lseek)(SceIoIob *, SceOff, s32); /* 0x18 */
    s32 (*df_ioctl)(SceIoIob *, s32, void *, SceSize, void *, SceSize); /* 0x1C */
    s32 (*df_remove)(SceIoIob *, char *); /* 0x20 */
    s32 (*df_mkdir)(SceIoIob *, char *, SceMode); /* 0x24 */
    s32 (*df_rmdir)(SceIoIob *, char *); /* 0x28 */
    s32 (*df_dopen)(SceIoIob *, char *); /* 0x2C */
    s32 (*df_dclose)(SceIoIob *); /* 0x30 */
    s32 (*df_dread)(SceIoIob *, SceIoDirent *); /* 0x34 */
    s32 (*df_getstat)(SceIoIob *, char *, SceIoStat *); /* 0x38 */
    s32 (*df_chstat)(SceIoIob *, char *, SceIoStat *, u32); /* 0x3C */
    s32 (*df_rename)(SceIoIob *, const char *, const char *); /* 0x40 */
    s32 (*df_chdir)(SceIoIob *, char *); /* 0x44 */
    s32 (*df_mount)(SceIoIob *, const char *, const char *, s32, void *, s32); /* 0x48 */
    s32 (*df_umount)(SceIoIob *, char *); /* 0x4C */
    s32 (*df_devctl)(SceIoIob *, char *, s32, void *, SceSize, void *, SceSize); /* 0x50 */
    s32 (*df_cancel)(SceIoIob *); /* 0x54 */
};

/* Driver descriptor passed to sceIoAddDrv (0x14 bytes). */
struct SceIoDeviceTable {
    char *dt_string; /* 0x0, device name */
    s32 dt_type; /* 0x4 */
    s32 dt_size; /* 0x8 */
    char *dt_desc; /* 0xC */
    SceIoDeviceFunction *dt_func; /* 0x10 */
};

#if FW_VERSION < 201
extern SceMScmCLD D_0000883C;
#else
extern s32 D_0000883C;
#endif
extern SceIoDeviceFunction D_0000885C;
extern SceIoDeviceFunction D_000088B4;
extern SceIoDeviceTable D_0000890C;
extern SceIoDeviceTable D_00008920;
#if FW_VERSION < 201
extern SceMSstorIoCtx D_00008934;
#else
extern s32 D_00008934;
#endif
extern SceMSstorDev D_00008AA4;
extern char D_00009248[];
extern char D_00009250[];
extern char D_00009264[];
extern char D_00009270[];
extern char D_00009284[];
extern SceMSstorOps D_00009850;
extern SceMSstorOps D_0000986C;
#if FW_VERSION < 201
extern SceMSstorOps *D_00009888;
#else
extern struct Unk_D_00009888 *D_00009888;
#endif
extern M2C_UNK D_000098DC;
extern struct D_000099D4_s D_000099D4;
extern SceMScmCLDMInfo D_00009A28;
#if FW_VERSION < 201
extern SceMSstorDev *D_00009B50;
#else
extern struct Unk_D_00009B50 *D_00009B50;
#endif
extern struct D_00009B54_s D_00009B54;

s32 Kprintf(const char *fmt, ...);
s32 bzero(void *p, s32 n);
s32 func_00000000(s32 arg);
s32 func_00000060(SceMSstorDev *dev);
s32 func_0000009C(void);
s32 func_00000134(s32 lba, s32 count, void *buf);
s32 func_0000017C(s32 lba, s32 count, void *buf);
#if FW_VERSION < 201
s32 func_000001BC(s32 lba, s32 count, void *buf);
#else
s32 func_000001BC(s32 arg0, s32 arg1, s32 arg2);
#endif
#if FW_VERSION < 201
s32 func_00000220(s32 lba, s32 count, void *buf);
#else
s32 func_00000220(s32 arg0, s32 arg1, s32 arg2);
#endif
#if FW_VERSION < 201
s32 func_00000288(void);
#else
void func_00000288(void);
#endif
void func_000002B8(void);
void func_000002E8(void);
void func_00000318(s32 arg0, s32 arg1, s32 arg2);
s32 func_00000340(s32, s32, s32);
#if FW_VERSION < 201
s32 func_00000518(SceMSstorDev *dev, s32 arg1);
#else
void func_00000518(s32 *arg0);
#endif
s32 func_00000548(SceMSstorDev *dev);
s32 func_00000654(SceMSstorDev *dev, s32 on);
s32 func_000006DC(SceMSstorDev *dev, s32 cmd, u32 addr, u16 count, s32 timeout);
s32 func_00000784(SceMSstorDev *dev, s32 timeout, u8 *intr);
s32 func_0000083C(SceMSstorDev *dev, s32 addr, s32 size, u8 *buf);
s32 func_000008B8(SceMSstorDev *dev, u8 cmd, s32 timeout);
s32 func_000008F0(SceMSstorDev *dev, u32 block, s32 page, s32 cmdParam, u8 *extra, s32 withExtra);
s32 func_00000978(SceMSstorDev *dev, s32 addr, s32 size, u8 *buf);
s32 func_000013E0(SceMSstorDev *dev, u8 *buf);
s32 func_0000140C(SceMSstorDev *dev, s32 size, u8 *buf);
s32 func_00001474(SceMSstorDev *dev);
s32 func_00001534(SceMSstorDev *dev, s32 size, u8 *buf);
s32 func_00001558(struct Unk_func_00001558_0 *arg0);
void func_00001560(s32 arg0);
s32 func_00001568(SceMSstorDev *dev);
void func_00001580(s32 arg0);
s32 func_00001590(SceMSstorDev *dev, s32 cmd);
s32 func_000016E4(SceMSstorDev *dev, s32 on);
s32 func_0000172C(SceMSstorDev *dev, s32 cmd, u32 addr, u16 count);
s32 func_00001794(SceMSstorDev *dev, u8 *intr);
void func_000017BC(s32 *arg0, s32 arg1);
void func_000017E8(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_00001808(SceMSstorDev *dev, u8 *buf);
#if FW_VERSION < 201
s32 func_0000181C(SceMSstorDev *dev, s32 size, u8 *buf);
#else
void func_0000181C(s32 *arg0, s32 arg1, s32 arg2);
#endif
s32 func_00001834(SceMSstorDev *dev, s32 size, u8 *buf);
void func_00001850(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_00001884(s32 *arg0);
void func_000018AC(s32 *arg0, s32 arg1);
s32 func_000018D8(SceMSstorDev *dev, s32 readAddr, s32 readSize, s32 writeAddr, s32 writeSize);
s32 func_00001958(SceMSstorDev *dev, s32 size, u8 *buf);
s32 func_000019C8(SceMSstorDev *dev, s32 timeout, s32 mode);
void func_00001B28(s32 *arg0, s32 arg1);
void func_00001B54(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
#if FW_VERSION < 201
s32 func_00001B88(SceMSstorDev *dev, s32 size, u8 *buf);
#else
void func_00001B88(s32 *arg0, s32 arg1, s32 arg2);
#endif
void func_00001BBC(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_000026A8(SceMSstorDev *dev);
s32 func_000034CC(void *arg0, s32 arg1, s32 *arg2);
s32 func_00003C2C(SceMSstorDev *dev);
s32 func_00003C4C(SceMSstorDev *dev);
void func_00003E88(s32 arg0);
void func_00003EA8(s32 arg0);
s32 func_00004514(void);
s32 func_00004558(void);
void func_00004750(s32 arg0);
s32 func_000048A8(SceIoDeviceEntry *de);
s32 func_0000497C(SceIoDeviceEntry *de);
s32 func_00004990(void);
s32 func_000049E4(void);
s32 func_00004A04(void);
s32 func_00004A0C(SceIoIob *iob, char *name, s32 flags, SceMode mode);
s32 func_00004A48(void);
s32 func_00004A98(SceIoIob *iob, char *name, s32 flags);
s32 func_00004B14(SceIoIob *iob);
s32 func_00004C88(SceIoIob *iob);
s32 func_00004E2C(struct Unk_func_00004E2C_0 *arg0);
s32 func_00004E40(void);
s32 func_00004EC8(void);
s32 func_00006858(SceSize args, void *argp);
s32 func_000075DC(struct Unk_func_000075DC_0 *arg0);
void func_00007798(struct Unk_func_00007798_0 *arg0);
void func_000077A0(struct Unk_func_000077A0_0 *arg0, s32 arg1);
s32 func_000077B8(struct Unk_func_000077B8_0 *arg0);
s32 func_000077C4(s32 err);
s32 memcmp(const void *a, const void *b, SceSize n);
void *memcpy(void *dst, const void *src, SceSize n);
s32 module_reboot_before(void);
s32 sceIoAddDrv(SceIoDeviceTable *drv);
s32 sceIoDelDrv(const char *name);
void sceKernelAssert(s32 ok, s32 lvl);
SceUID sceKernelCreateEventFlag(const char *name, u32 attr, u32 bits, void *opt);
SceUID sceKernelCreateFpl(const char *name, s32 part, s32 attr, SceSize size, s32 count, void *opt);
SceUID sceKernelCreateSema(const char *name, u32 attr, s32 init, s32 max, void *opt);
SceUID sceKernelCreateThread(const char *name, s32 (*entry)(SceSize, void *), s32 prio, SceSize stack, u32 attr, void *opt);
s32 sceKernelDelayThread(u32 usec);
s32 sceKernelDeleteEventFlag(s32);
s32 sceKernelDeleteFpl(SceUID fpl);
s32 sceKernelDeleteSema(s32);
s32 sceKernelFreeFpl(SceUID fpl, void *data);
s32 sceKernelPollSema(SceUID sema, s32 n);
s32 sceKernelPowerLock(s32 type);
s32 sceKernelPowerUnlock(s32 type);
s32 sceKernelSetEventFlag(s32, u32);
s32 sceKernelSignalSema(s32, s32);
s32 sceKernelStartThread(s32, u32, void *);
s32 sceKernelTerminateDeleteThread(s32);
s32 sceKernelTryAllocateFpl(SceUID fpl, void **data);
s32 sceKernelWaitEventFlag(SceUID evf, u32 bits, u32 mode, u32 *res, void *timeout);
s32 sceKernelWaitSema(s32, s32, void *);
s32 sceLedSetMode(s32 led, s32 mode, void *arg);
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
s32 sceMScmRegisterCLDM(SceMScmCLDMInfo *prm);
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
s32 sceMScmUnRegisterCLDM(SceMScmCLDMInfo *prm);
s32 sceMScmWaitAndEndDMA(SceMScmHC *hc, u32 mode, s32 nowait);
s32 sceMScmWaitHCIntr(SceMScmHC *hc, u32 *pattern, s32 timeout);
s32 sceMScmWriteDataPIO(SceMScmHC *hc, u8 *buf, s32 size, s32 timeout);
s32 sceMScmWriteMSReg(SceMScmHC *hc, s32 addr, s32 size, u8 *buf, s32 force, s32 timeout);
s32 sceMScmWriteMSRegHelper(SceMScmHC *hc, u8 *buf, s32 size, s32 timeout);
s32 sceMScm_driver_D6DB3199(SceMScmHC *hc, s32 *arg1, s32 *arg2, s32 *arg3);
void sceMSstorEntry(void);
s32 sceMSstorRegisterCLDMSelf(char *path);

#endif
