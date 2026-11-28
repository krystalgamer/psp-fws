#ifndef ATA_DECLS_H
#define ATA_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_000046A8_s {
    s32 unk0;
    s32 unk4;
};

/* AHB bridge setup, sceAtaAhbSetAtaBlock / sceAtaAhbGetAtaBlock */
typedef struct {
    s32 pioMode;    /* 0x00 */
    s32 pioArg;     /* 0x04 */
    u32 flags;      /* 0x08: 0x20 MDMA, 0x40 UDMA, & 7 = DMA mode */
    s32 pioCtl;     /* 0x0C */
    s32 ahb0;       /* 0x10: sceAtaAhbSetAHBCtl args */
    s32 ahb1;
    s32 ahb2;
} SceAtaAhbBlock;

/* per-command completion state (caller's stack) */
typedef struct {
    u32 unk0;
    u32 driveStat;
    u32 unk8;
    u32 unkC;
} SceAtaCmdState;

typedef s32 (*SceAtaIntrFunc)();
typedef struct {
    SceAtaIntrFunc func;
    void *arg;
    u32 gp;
} SceAtaIntrHandler;

/* g_ataCallBack (0x40), returned by sceAtaGetAtaCallBack() */
typedef struct {
    SceAtaIntrFunc func;       /* 0x00: sceAta_driver_638EEA14 */
    u32 gp;                    /* 0x04 */
    SceAtaIntrHandler device;  /* 0x08: sceAtaSetDeviceIntr */
    SceAtaIntrHandler descTable; /* 0x14: sceAtaSetDescriptorTableIntr */
    SceAtaIntrHandler unk20;   /* 0x20: sceAta_driver_689FCB7D */
    SceAtaIntrHandler busError; /* 0x2C: sceAtaSetBusErrorIntr */
    SceAtaIntrFunc execPacketCmd; /* 0x38: sceAta_driver_C144826E */
    u32 execPacketCmdGp;       /* 0x3C */
} SceAtaCallBack;
typedef char chk_SceAtaCallBack[(sizeof(SceAtaCallBack) == 0x40) ? 1 : -1];

/* ATA task-file registers (byte wide, 0xBD700000); data port is 16-bit */
#define ATA_REG8(off) (*(volatile u8 *)(0xBD700000 + (off)))
#define ATA_DATA      (*(volatile u16 *)0xBD700000)
#define ATA_ERROR     ATA_REG8(1)  /* read: error, write: features */
#define ATA_FEATURES  ATA_REG8(1)
#define ATA_NSECTOR   ATA_REG8(2)  /* ATAPI: interrupt reason */
#define ATA_SECTOR    ATA_REG8(3)
#define ATA_LCYL      ATA_REG8(4)  /* ATAPI: byte count low */
#define ATA_HCYL      ATA_REG8(5)  /* ATAPI: byte count high */
#define ATA_SELECT    ATA_REG8(6)  /* device/head */
#define ATA_STATUS    ATA_REG8(7)  /* read: status, write: command */
#define ATA_COMMAND   ATA_REG8(7)
#define ATA_ALTSTATUS ATA_REG8(0xE) /* read: alt status, write: device control */
#define ATA_DEVCTL    ATA_REG8(0xE)
/* ATA AHB bridge registers (0xBD600000) */
#define ATA_AHB_REG(off) (*(volatile u32 *)(0xBD600000 + (off)))

/* AHB sub-interrupt handlers 1..16 (func_00003440) */
typedef struct {
    u32 unk0;
    SceAtaIntrHandler h[17];
} SceAtaSubIntrTable;
typedef char chk_SceAtaSubIntrTable[(sizeof(SceAtaSubIntrTable) == 0xD0) ? 1 : -1];

/* ATA task-file image, written to ATA_FEATURES..ATA_COMMAND */
typedef struct {
    u8 unk0;
    u8 features;  /* 0x1 */
    u8 nsector;   /* 0x2 */
    u8 sector;    /* 0x3 */
    u8 lcyl;      /* 0x4 */
    u8 hcyl;      /* 0x5 */
    u8 select;    /* 0x6 */
    u8 command;   /* 0x7 */
} SceAtaTaskFile;

/* command block (caller's stack), drive->cmd */
typedef struct {
    SceAtaTaskFile tf;  /* 0x00 */
    u32 unk8;
#if FW_VERSION < 150
    u32 unkC;
    void *buf;          /* 0x10: func_000020F8 */
    u8 pad14[0xC];
#else
    void *buf;          /* 0x0C: func_000020F8 */
#endif
} SceAtaCmd;
#if FW_VERSION < 150
typedef char chk_SceAtaCmd[(sizeof(SceAtaCmd) == 0x20) ? 1 : -1];
#endif

/* drive descriptor: g_ataDrive[2] (0x24 each) in 1.00-1.03, one 0x20-byte drive in 1.50 */
typedef struct {
    s8 driveId;               /* 0x00: -1 = not present */
    u8 unk1;
    u8 pad2[2];
    u32 driveStat;            /* 0x04: sceAta{Set,Clear,Get}DriveStat */
    u32 unk8;
    u32 protocol;             /* 0x0C: sceAtaExecCmd data phase: 1 none, 2 PIO in, 4 PIO out, 0x10, 0x20, 0x80 packet */
#if FW_VERSION < 150
    SceUID semaId;            /* 0x10 */
    SceUID evfId;             /* 0x14 */
#else
    s32 unk10;                /* 0x10 (1.50: -1 at init; sema or event flag) */
#endif
    u32 byteLimit;            /* 0x18 (1.50: 0x14) */
    SceAtaCmd *cmd;           /* 0x1C (1.50: 0x18): current command (caller's stack) */
    void *unk20;              /* 0x20 (1.50: 0x1C) */
} SceAtaDrive;
#if FW_VERSION < 150
typedef char chk_SceAtaDrive[(sizeof(SceAtaDrive) == 0x24) ? 1 : -1];
#elif FW_VERSION < 201
typedef char chk_SceAtaDrive[(sizeof(SceAtaDrive) == 0x20) ? 1 : -1];
#endif

struct Unk_func_0000277C_0 {
    u8 pad0[0x1C];
    void * unk1C;
};

struct Unk_func_0000277C_1 {
    u8 pad0[0xC];
    s32 unkC;
};

static inline u32 pspGetGp(void) {
    u32 gp;
    asm volatile("move %0, $gp" : "=r"(gp));
    return gp;
}
static inline u32 pspSetGp(u32 gp) {
    u32 old;
    asm volatile("move %0, $gp\n\tmove $gp, %1" : "=&r"(old) : "r"(gp));
    return old;
}

extern M2C_UNK D_00003F1C;
extern u32 D_00004140[3];
extern s32 D_00004180;
extern SceAtaDrive D_00004200[2];
extern s32 D_00004250;
extern s32 D_00004260;
extern SceAtaAhbBlock D_00004280;
extern s32 D_000042A0;
extern SceUID D_000042E0;
extern SceAtaSubIntrTable D_000042F0;
extern s32 D_00004324;
extern s32 D_00004328;
extern s32 D_00004370;
extern s32 D_00004640;
extern SceAtaCallBack D_000046A8;
extern s32 D_000046E8;
extern s32 D_000046EC;
extern SceAtaAhbBlock D_00004700;
extern s32 D_00004728;
extern M2C_UNK func_00003D3C;

M2C_UNK Kprintf(M2C_UNK *, M2C_UNK *, M2C_UNK *);
s32 func_00000000(s32);
s32 func_00001134(u32 id);
void func_00001274(u32 arg0);
s32 func_000012C8(void);
void func_000012D4(s32 arg0);
void func_00001810(void);
s32 func_000018B8(s32 *flag);
void func_00001ED8(s32 mode);
void func_00001F14(s32 mode);
void func_00001F5C(s32 mode);
s32 func_00002074(SceAtaDrive *drive, u8 features, s8 a2, s8 a3, u32 a4, SceAtaCmd *cmd, s32 a6);
s32 func_000020F8(SceAtaDrive *drive, SceAtaCmd *cmd, void *buf);
s32 func_00002120(void);
s32 func_0000212C(void);
void func_00002134(void);
SceAtaAhbBlock *func_00002160(void);
s32 func_000022E0(void);
s32 func_000022EC(void);
void func_000022F4(void);
void func_00002500(s32 mode);
void func_00002570(s32 mode);
void func_000025E4(s32 mode);
s32 func_0000277C(struct Unk_func_0000277C_0 *arg0, struct Unk_func_0000277C_1 *arg1, s32 arg2);
s32 func_00003264(void);
s32 func_000032C8(void);
s32 func_000033D4(void);
s32 func_0000341C(void);
s32 func_00003440(u32 no, SceAtaIntrFunc func, void *arg);
s32 func_000034CC(void);
s32 func_0000356C(s32 a0, s32 a1, s32 a2);
s32 func_0000358C(s32 a0, s32 a1);
s32 func_000036FC(void);
s32 func_00003704(void);
s32 func_0000370C(void);
s32 func_00003714(void);
s32 func_0000371C(void);
void func_00003C58(void);
void func_00003CA0(u32 arg0);
s32 func_00003CBC(u32 cmd, SceAtaTaskFile *tf);
void func_00003CF4(s32 arg0);
s32 func_00003D28(u32 cmd, SceAtaDrive *drive);
s32 func_00003D30(void);
void func_00003FB0(void);
void func_00003FF0(u32 arg0);
void func_00004044(s32 arg0);
s32 func_00004080(void);
s32 func_0000408C(s32 *arg0);
s32 module_start(void);
void sceAtaAhbClearIntr(u32 mask);
void sceAtaAhbEnableIntr(u32 mask);
SceAtaAhbBlock *sceAtaAhbGetAtaBlock(void);
u32 sceAtaAhbGetDDRSize(void);
s32 sceAtaAhbGetDevStat(u32 *stat);
s32 sceAtaAhbGetEventFlag(void);
u32 sceAtaAhbGetIntrMask(void);
void sceAtaAhbInit(void);
u32 sceAtaAhbReadIntr(void);
s32 sceAtaAhbSetAHBCtl(s32 a0, s32 a1, s32 a2);
void sceAtaAhbSetAtaBlock(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 sceAtaAhbSetDDRSize(u32 size);
void sceAtaAhbSetIntrMask(u32 mask);
s32 sceAtaAhbSetMDMATiming(s32 mode, s32 arg);
s32 sceAtaAhbSetPioCtl(s32 n, s32 a, s32 b);
s32 sceAtaAhbSetPioTiming(s32 mode, s32 arg);
s32 sceAtaAhbSetUDMATiming();
void sceAtaAhbTerm(void);
s32 sceAtaBufferSelectSemaphore(u32 *stat);
void sceAtaClearDriveStat(s32 arg0, s32 arg1);
void sceAtaClearIntrStateFlag(s32 arg0);
s32 sceAtaDisableClkIo(u32 flags);
void sceAtaDisplayReqSense(void);
s32 sceAtaEnableClkIo(u32 flags);
s32 sceAtaExecCmd(SceAtaDrive *drive, u32 cmd, s32 protocol, u32 *args);
s32 sceAtaExecDeviceResetCmd(SceAtaDrive *drive);
s32 sceAtaExecIPDCmd(SceAtaDrive *drive, u32 cmd, void *buf, u32 arg);
s32 sceAtaExecIdleStandbyCmd(u32 cmd, SceAtaDrive *drive, u8 count);
s32 sceAtaExecPSPResetCmd(SceAtaDrive *drive, u8 features);
s32 sceAtaExecSeekCmd(SceAtaDrive *drive, u32 lba, s8 dev);
s32 sceAtaExecSetFeaturesCmd(SceAtaDrive *drive, u8 feature, s8 a2, s8 a3, s32 a4);
SceAtaCallBack *sceAtaGetAtaCallBack(void);
SceAtaDrive *sceAtaGetAtaDrive(u32 id);
s32 sceAtaGetDriveStat(s32 arg0);
s32 sceAtaGetIntrFlag(void);
s32 sceAtaGetIntrStateFlag(void);
s32 sceAtaIsDvdDrive(void);
s32 sceAtaIsNormalDriveStat(void);
s32 sceAtaIsReadableDriveStat(void);
s32 sceAtaIsUmdDrive(void);
s32 sceAtaSetBusErrorIntr(SceAtaIntrFunc func, void *arg);
s32 sceAtaSetDescriptorTableIntr(SceAtaIntrFunc func, void *arg);
s32 sceAtaSetDeviceIntr(SceAtaIntrFunc func, void *arg);
void sceAtaSetDriveStat(s32 arg0, s32 arg1);
void sceAtaSetIntrFlag(s32 arg0);
void sceAtaSetIntrStateFlag(s32 arg0);
SceAtaDrive *sceAtaStart(u32 id);
s32 sceAtaStop(u32 flags);
s32 sceAtaTerm(void);
void sceAta_driver_4222D6F3(void);
void sceAta_driver_4D225674(void);
void sceAta_driver_638EEA14(SceAtaIntrFunc func);
s32 sceAta_driver_689FCB7D(SceAtaIntrFunc func, void *arg);
s32 sceAta_driver_76C0923D(u32 *stat);
void sceAta_driver_B5982381(void);
s32 sceAta_driver_C144826E(SceAtaIntrFunc func);
s32 sceAta_driver_E3E1EED7(s32 on);
void sceAta_driver_F61EAFC0(void);
s32 sceKernelCancelAlarm(s32);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
SceUID sceKernelCreateEventFlag(const char *name, s32 attr, s32 bits, void *opt);
s32 sceKernelDeleteEventFlag(SceUID id);
s32 sceKernelDeleteSema(SceUID id);
s32 sceKernelDipsw(M2C_UNK);
u32 sceKernelDipswAll();
M2C_UNK sceKernelDisableIntr(M2C_UNK);
M2C_UNK sceKernelDisableSubIntr(M2C_UNK, M2C_UNK);
s32 sceKernelEnableIntr(s32 intno);
s32 sceKernelEnableSubIntr(s32 intno, s32 no);
s32 sceKernelRegisterIntrHandler(s32 intno, s32 no, void *handler, void *arg, void *opt);
s32 sceKernelRegisterSubIntrHandler(s32 intno, s32 no, void *handler, void *arg);
M2C_UNK sceKernelReleaseIntrHandler(M2C_UNK);
M2C_UNK sceKernelReleaseSubIntrHandler(M2C_UNK, M2C_UNK);
s32 sceKernelSetAlarm(u32, s32, void *);
s32 sceKernelSignalSema(SceUID id, s32 signal);
s32 sceKernelWaitSema(SceUID id, s32 signal, u32 *timeout);
s32 sceSysregAtaBusClockDisable(void);
s32 sceSysregAtaBusClockEnable(void);
s32 sceSysregAtaClkDisable(void);
s32 sceSysregAtaClkEnable(void);
s32 sceSysregAtaClkSelect(s32 clk);
s32 sceSysregAtaIoDisable(void);
s32 sceSysregAtaIoEnable(void);
s32 sceSysregAtaResetDisable(void);
s32 sceSysregAtaResetEnable(void);

#endif
