#ifndef FATMSMOD_DECLS_H
#define FATMSMOD_DECLS_H

#include "common.h"
#include "m2c_macros.h"

/* prfile_mod.c heap bookkeeping (g_heapTbl, 128 entries). mem = -1 while being created. */
typedef struct {
    SceUID heap; /* 0x0 */
    void *mem; /* 0x4 */
} FatmsHeapEnt;

/* prfile_mod.c mount state (0x4C bytes, cleared on the last umount). */
typedef struct {
    s32 unit; /* 0x0, -1 = none */
    u8 pad4[0x48];
} FatmsMountInfo;

/* Per-iob private block checked by check_heap_alive: mode 0x10 = file (heap at 0x6C), 2 = directory (heap at 0x8). */
typedef struct {
    s32 mode; /* 0x0 */
    s32 unk4; /* 0x4 */
    SceUID dirHeap; /* 0x8 */
    u8 padC[0x60];
    SceUID fileHeap; /* 0x6C */
} FatmsPrivate;

typedef int SceMode;
typedef s64 SceOff;
typedef s32 SceSSize;
typedef struct SceIoStat SceIoStat;
typedef struct SceIoDirent SceIoDirent;
typedef struct SceIoIob SceIoIob;
typedef struct SceIoDeviceEntry SceIoDeviceEntry;
typedef struct SceIoDeviceTable SceIoDeviceTable;
typedef struct SceIoDeviceFunction SceIoDeviceFunction;

/* 1.00: 8 bytes (no d_userfd_count yet). */
struct SceIoDeviceEntry {
    SceIoDeviceTable *d_dp; /* 0x0 */
    void *d_private; /* 0x4 */
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

typedef struct SceKernelMsgPacket {
    struct SceKernelMsgPacket *next; /* 0x0 */
    u8 msgPriority; /* 0x4 */
    u8 dummy[3]; /* 0x5 */
} SceKernelMsgPacket;

/* Request passed by the FcpSendMsg wrappers to the MS stub thread (on the caller's stack).
   cmd selects the PrFILE call; the argument words are per-command. 1.50 added p7 (one more
   argument word before ret); 2.01 grew the tail to x7; 3.00+ widened cmd to a word. */
typedef struct {
    SceUID evf; /* 0x0, set by FcpSendMsg: signalled when the request is done */
    s32 prio; /* 0x4, caller's thread priority */
#if FW_VERSION < 300
    u8 cmd; /* 0x8 */
    s8 drive; /* 0x9, drive letter for drive-level commands */
    u8 pad0A[2];
#else
    s32 cmd; /* 0x8 */
    s8 drive; /* 0xC */
    u8 pad0D[3];
#endif
    s32 p0; /* 0xC (3.00+: 0x10) */
    s32 p1;
    s32 p2;
    s32 p3;
    s32 p4;
    s32 p5;
    s32 p6;
#if FW_VERSION >= 150
    s32 p7;
#endif
    s32 ret; /* 0x28 (1.50-2.82: 0x2C, 3.00+: 0x30) */
    s32 x0;
    s32 x1;
    s32 x2;
#if FW_VERSION >= 201
    s32 x3;
    s32 x4;
    s32 x5;
    s32 x6;
    s32 x7;
#endif
} SceMsStubMsg; /* 1.00: 0x38, 1.50: 0x3C, 2.01-2.82: 0x50, 3.00+: 0x54 */

/* Mailbox packet built by FcpSendMsg: header + a copy of the request. */
typedef struct {
    SceKernelMsgPacket hdr; /* 0x0 */
    u8 body[sizeof(SceMsStubMsg)]; /* 0x8 */
} SceMsStubPacket;

struct Unk_Unk_func_00013798_0_FA78 {
    u8 pad0[0x40];
    u32 unk40;
};

struct Unk_func_0000E3C0_0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x10];
    s32 unk18;
};

struct Unk_func_0000E3D8_0 {
    u32 unk0;
    u32 unk4;
    u8 pad8[0x18];
    s32 unk20;
    u8 pad24[0x2];
    u16 unk26;
};

struct Unk_func_00013044_0 {
    s8 unk0;
    s8 unk1;
};

struct Unk_func_000135A8_0 {
    s8 unk0;
    s8 unk1;
};

struct Unk_func_00013798_0 {
    u8 pad0[0x20];
    s32 unk20;
    u8 pad24[0xFA54];
    struct Unk_Unk_func_00013798_0_FA78 *unkFA78;
    u8 padFA7C[0x48];
    s32 unkFAC4;
    u8 padFAC8[0x18];
    s32 unkFAE0;
};

extern const char D_00014704[]; /* "FATMS" */
extern u8 D_000193F8;
extern u8 D_000193FC;
extern s32 D_00019500; /* mount count */
extern s32 D_00019508;
extern FatmsMountInfo D_0001950C;
extern FatmsHeapEnt D_00019558[128];
extern M2C_UNK D_00019AD4;
extern s32 D_00019B00;
extern s8 D_00019B04;
extern s32 D_00019E04;
extern s32 D_00019E08;
extern s8 D_00019E0C; /* current drive letter */
extern s32 D_00019E10[26]; /* last driver error per drive, index drive - 'A' */
extern s32 D_00019E28;
extern s32 D_0001A040;
extern s32 D_0001B0C8;
extern s32 D_0001B248;
extern FatmsHeapEnt D_0001B298[128];
extern s32 D_0001B6A4;
extern s32 D_0001B790;
extern M2C_UNK D_0001BCC4;
extern s32 D_0001BCE4;
extern char D_00023B8C[]; /* "prfile_mod.c:%s:driver deleted\n" */
extern M2C_UNK D_0002411C;
extern void *D_000276E4;
extern s32 (*D_000276E8)(s32, s32, s32);
extern s32 (*D_000276EC)(s32, s32, s32);
extern void *D_00027800;
extern M2C_UNK D_00027804;
extern s32 D_00027908;
extern M2C_UNK D_00027934;
extern s32 D_0002B568;
extern s32 D_0002B5CC;
extern s32 D_0002BA10[1][32];
extern s32 D_0002BA90[1]; /* per-unit media status, 0x1022 = ? */
extern M2C_UNK D_0002BAA0;
extern s32 D_0002BAC0;
extern s32 D_0002BD1C;
extern s32 D_0002C7CC;
extern s32 D_0002D054;
extern s8 D_0002D730;
extern s32 D_0002DC10;
extern s32 D_0002EF50;
extern void *D_0003F728;
extern M2C_UNK D_00042A80;
extern SceUID g_msStubMbx;

s32 FcpSendMsg(SceMsStubMsg *msg);
s32 Kprintf(const char *fmt, ...);
s32 add_drive_name(char *buf, const char *name, s32 unit);
s32 check_heap_alive(FatmsPrivate *priv);
s32 check_reload_status(s32 checkMedia, FatmsPrivate *priv);
s32 df_close(); /* 1.00 df_close(SceIoIob *) */
s32 df_dclose(); /* 1.00 df_dclose */
s32 df_ioctl(); /* 1.00 df_ioctl */
s32 df_read(); /* 1.00 df_read(SceIoIob *, void *, SceSize) */
s32 df_rename(); /* 1.00 df_rename */
s32 df_write(); /* 1.00 df_write(SceIoIob *, const void *, SceSize) */
s32 free_heap(SceUID heap, void *mem);
s32 free_heap_all(void);
M2C_UNK func_00000020();
void func_00000048(void);
M2C_UNK func_00000134();
void func_0000022C(void);
M2C_UNK func_00000264();
void func_000004B8(void);
M2C_UNK func_00000CE4();
M2C_UNK func_00000E00();
M2C_UNK func_00000EF8();
s32 func_00001834(u32 attr);
char *func_00001A18(char *s);
s32 func_00001F98(void);
s32 func_000026FC(void);
M2C_UNK func_00002708();
s32 func_00002778(s32);
M2C_UNK func_00002880();
s32 func_00002B48(void);
s32 func_00002B98(); /* FcpSendMsg wrapper; 1.50+ take one more argument */
s32 func_00002CA0(); /* FcpSendMsg wrapper; 1.50+ take one more argument */
s32 func_00002D24(); /* FcpSendMsg wrapper; 1.50+ take one more argument */
s32 func_00002EFC(); /* FcpSendMsg wrapper; 1.50+ take one more argument */
s32 func_00002F8C(); /* FcpSendMsg wrapper; 1.50+ take one more argument */
void func_0000322C(void);
void func_00003248(void);
void func_0000326C(void);
void func_00003298(void);
void func_000032B4(s32 arg0, s32 arg1, s32 arg2);
void func_000032D0(s32 arg0, s32 arg1, s32 arg2);
void func_000032EC(void);
void func_0000340C(void);
void func_00003530(s32 arg0);
void func_000036A8(void);
void func_000036C4(s32 arg0, s32 arg1, s32 arg2);
void func_000036E0(s32 arg0, s32 arg1, s32 arg2);
void func_000036FC(void);
void func_0000381C(void);
void func_00003940(s32 arg0);
s32 func_00003A34(s32 unit, s32 stat);
s32 func_00003CD8(void);
s32 func_00004544(void);
s8 *func_000045F4(void);
s32 func_00004600(void);
s32 func_0000465C(void);
void func_0000475C(void);
void func_00004778(void);
void func_000047C8(void);
void func_000047E4(void);
void func_00004800(void);
void func_0000481C(void);
void func_00004950(void);
void func_00004A58(void);
void func_00004A74(void);
s32 func_00004B88(); /* FcpSendMsg wrapper; 1.50+ take one more argument */
s32 func_00004BBC(s32 arg0);
s32 func_00004C58(); /* FcpSendMsg wrapper; 1.50+ take one more argument */
s32 func_00004E68(s8 *arg0);
s32 func_00004F40(); /* FcpSendMsg wrapper; 1.50+ take one more argument */
s32 func_00004F88(); /* FcpSendMsg wrapper; 1.50+ take one more argument */
s32 func_00005068(); /* FcpSendMsg wrapper; 1.50+ take one more argument */
s32 func_000050E4(); /* FcpSendMsg wrapper; 1.50+ take one more argument */
s32 func_00005118(void);
s32 func_00005124(); /* FcpSendMsg wrapper; 1.50+ take one more argument */
s32 func_000051F8(); /* FcpSendMsg wrapper; 1.50+ take one more argument */
s32 func_00005238(); /* FcpSendMsg wrapper; 1.50+ take one more argument */
s32 func_0000527C(); /* FcpSendMsg wrapper; 1.50+ take one more argument */
s32 func_000052D0(); /* FcpSendMsg wrapper; 1.50+ take one more argument */
void func_000053FC(void);
s32 func_0000565C(void);
void func_000057CC(s32 arg0);
s32 func_00006148(s32, s32, s32);
s32 func_0000635C(void);
s32 func_00006724(void);
s8 *func_000067D4(void);
s32 func_000067E0(void);
s32 func_000067EC(void);
s32 func_00006918(void);
s32 func_00006960(void);
s32 func_000075CC(); /* FcpSendMsg wrapper; 1.50+ take one more argument */
s32 func_0000764C(void);
s32 func_000076F4(s32, s32);
void *func_00007718(void *dst0, const void *src0, u32 length);
void *func_0000793C(void *s, s32 c, u32 n);
s32 func_00007968(const void *s1, const void *s2, u32 n);
s32 func_000079A8(s8 *arg0);
char *func_000079CC(char *dst, const char *src);
char *func_000079F8(const char *s, s32 c);
char *func_00007A20(char *dst, const char *src);
s32 func_00007A5C(const char *s1, const char *s2);
char *func_00007AB4(char *dst, const char *src, u32 n);
s32 func_00007BB0(s32 arg0);
s32 func_00008274(s32, s32, s32, s32);
s32 func_00008708(s32 arg0);
s32 func_000088F8(s32 arg0);
s8 func_00008900(s8 arg0);
s32 func_0000931C(void);
void func_00009C74(void);
s32 func_00009D50(void);
s32 func_00009E3C(void);
s32 func_00009FA0(s32);
s32 func_0000A3AC(s32);
s32 func_0000A698(s32 a0, s32 a1, s32 a2);
s32 func_0000A714(s32 a0, s32 a1, s32 n);
s32 func_0000A744(s32 a0, s32 a1, s32 a2);
s32 func_0000A7C0(const u8 *s);
s32 func_0000A8F8(s32);
s32 func_0000AE30(void);
s32 func_0000B1D8(s32, s32);
void func_0000B418(u8 *p, u32 v);
s32 func_0000B440_v201(s32, s32, s32);
void func_0000B574(s32 arg0, s32 arg1, s32 arg2);
void func_0000B57C(void);
s32 func_0000B59C(s32, s32, s32);
s32 func_0000B71C(s32, s32);
s32 func_0000B738(s32, s32, s32, s32);
s32 func_0000B7E4(void *arg0);
void func_0000B818(s32 arg0);
s32 func_0000B978(s32, s32);
void func_0000BA20(void *arg0);
void func_0000BAF8(u32 arg0);
s32 func_0000BBAC(s32);
s32 func_0000C108(s32 drv);
s32 func_0000C120(s32);
s32 func_0000C7A8(s32, s32, s32, s32);
s32 func_0000CC88(void);
s32 func_0000D440(s32, s32);
void func_0000D70C(s32 arg0, s32 arg1, s8 arg2, s8 arg3);
s32 func_0000DA6C(s32, s32, s32, s32);
void func_0000DBD4(s32 arg0, s32 arg1, s8 arg2, s32 arg3);
s32 func_0000DCF4(s32);
s32 func_0000E050(void);
void func_0000E0BC(void);
s32 func_0000E278(s32, s32);
void func_0000E344(s32 arg0, s32 arg1);
s32 func_0000E3B4(void *arg0, s32 arg1);
s32 func_0000E3C0(struct Unk_func_0000E3C0_0 *arg0, s32 arg1);
s32 func_0000E3CC(void *arg0, u32 arg1);
s32 func_0000E3D8(struct Unk_func_0000E3D8_0 *arg0, u32 arg1);
s32 func_0000E5E8(void);
s32 func_0000E5F8(s32);
s32 func_00010238(s32, s32, s32);
s32 func_00010A64(s32);
s32 func_00011318(s32);
void func_000113C4(s32 arg0);
s32 func_00011430(s32, s32, s32);
s32 func_000118E4(const char *s);
s32 func_00012280(void);
void func_000122FC(void);
s32 func_00012480(s32);
s32 func_00012788(void);
s32 func_000128A4(s32, s32);
s32 func_00012964(s32, s32);
void func_00012B7C(s32 arg0, s32 arg1);
s32 func_00013044(struct Unk_func_00013044_0 *arg0);
s32 func_00013110(s32, s32);
void func_000131D8(s32 arg0, s32 arg1);
s32 func_00013214(void *arg0);
s32 func_00013248(s32);
s32 func_000132E8(s32);
s32 func_00013448(s32);
void func_000135A8(struct Unk_func_000135A8_0 *arg0);
void func_00013654(void *arg0);
s32 func_00013684(s32, s32);
void func_000136FC(s32 arg0, s32 arg1);
void func_0001378C(void *arg0, u32 arg1);
void func_00013798(struct Unk_func_00013798_0 *arg0, u32 arg1);
void func_000137DC(void *arg0);
s32 func_00013A44(s32, s32);
void func_00013B38(s32 arg0, s32 arg1);
void func_000149D4(void);
void func_000149E0(void);
s32 func_00014AF8(s32);
void func_00014E4C(s32 arg0);
s32 func_00015468(s32, s32, s32);
s32 func_000155DC(s32, s32);
s32 func_00015908(s32, s32);
s32 func_00015AE8(s32, s32, s32);
s32 func_000163EC(s32, s32);
void func_00016484(s32 arg0, s32 arg1);
s32 func_000166C4(s32, s32);
void func_0001675C(s32 arg0, s32 arg1);
s32 func_00017164(s32, s32);
s32 func_00017A14(s32, s32);
void func_000183CC(s32 arg0, s32 arg1);
s32 func_00018520(s32, s32);
void func_00018638(s32 arg0, s32 arg1);
s32 func_00019430(s32);
void func_00019A48(s32 arg0);
s32 func_0001A1B8(s32);
void func_0001A630(s32 arg0);
s32 func_0001BB34(void);
s32 func_0001D1FC(s32, s32, s32);
void func_0001DA7C(s32 arg0, s32 arg1, s32 arg2);
s32 func_0001E46C(s32);
void func_0001EE2C(s32 arg0);
s32 func_0001F234(s32, s32, s32);
void func_0001F448(s32 arg0, s32 arg1, s8 arg2);
s32 func_0001F594(s32);
void func_0001F5E8(s32 arg0);
s32 func_00020690(s32);
void func_00020984(s32 arg0);
s32 func_00020C0C(void);
void func_00020DC8(void);
s32 func_000216E0(s32, s32);
void func_00022054(s32 arg0, s32 arg1);
s32 func_0002214C(s32 arg0);
s8 func_00022338(s8 arg0);
s32 func_0002233C(s32 arg0);
s8 func_00022344(s8 arg0);
void *get_heap(SceUID *heap, SceSize size);
void memset(void *s, s32 c, SceSize n);
s32 module_start(void);
s32 prErr(s32 err);
s32 sceFatMS_driver_BCB9DEDB(void);
s32 sceIoClose(s32);
M2C_UNK sceIoDelDrv(s32);
s32 sceIoDevctl(void *, s32, void *, u32, void *, u32);
void *sceKernelAllocHeapMemory(SceUID heapid, SceSize size);
void sceKernelCpuResumeIntr(s32 intr);
s32 sceKernelCpuSuspendIntr(void);
SceUID sceKernelCreateEventFlag(const char *name, s32 attr, s32 bits, void *opt);
SceUID sceKernelCreateHeap(SceUID partitionid, SceSize size, s32 unk, const char *name);
SceUID sceKernelCreateMbx(const char *name, u32 attr, void *opt);
s32 sceKernelDeleteEventFlag(SceUID evf);
M2C_UNK sceKernelDeleteFpl();
s32 sceKernelDeleteHeap(SceUID heapid);
s32 sceKernelDeleteMbx(SceUID mbx);
s32 sceKernelFreeHeapMemory(SceUID heapid, void *block);
s32 sceKernelGetThreadCurrentPriority(void);
s32 sceKernelReceiveMbx(SceUID mbx, void **msg, u32 *timeout);
s32 sceKernelSendMbx(SceUID mbx, void *msg);
s32 sceKernelSetEventFlag(SceUID evf, u32 bits);
s32 sceKernelWaitEventFlag(SceUID evf, u32 bits, u32 wait, u32 *outBits, u32 *timeout);
char *strcat(char *d, const char *s);
u32 strlen(const char *s);
s32 stub_pf_errnum(); /* FcpSendMsg wrapper; 1.50+ take one more argument */
s32 stub_pf_fclose(); /* FcpSendMsg wrapper; 1.50+ take one more argument */
s32 stub_pf_feof(); /* FcpSendMsg wrapper; 1.50+ take one more argument */
s32 stub_pf_ferror(); /* FcpSendMsg wrapper; 1.50+ take one more argument */
s32 stub_pf_fopen(); /* FcpSendMsg wrapper; 1.50+ take one more argument */
s32 stub_pf_fread(); /* FcpSendMsg wrapper; 1.50+ take one more argument */
s32 stub_pf_fwrite(); /* FcpSendMsg wrapper; 1.50+ take one more argument */
s32 stub_pf_mkdir(); /* FcpSendMsg wrapper; 1.50+ take one more argument */
s32 stub_pf_remove(); /* FcpSendMsg wrapper; 1.50+ take one more argument */
s32 stub_pf_rename(); /* FcpSendMsg wrapper; 1.50+ take one more argument */
s32 stub_pf_rmdir(); /* FcpSendMsg wrapper; 1.50+ take one more argument */

#endif
