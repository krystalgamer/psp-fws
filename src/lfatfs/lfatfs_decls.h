#ifndef LFATFS_DECLS_H
#define LFATFS_DECLS_H

#include "common.h"
#include "m2c_macros.h"

typedef int SceMode;
typedef s64 SceOff;
typedef s32 SceSSize;
typedef struct SceIoStat SceIoStat;
typedef struct SceIoDirent SceIoDirent;
typedef struct SceIoIob SceIoIob;
typedef struct SceIoDeviceEntry SceIoDeviceEntry;
typedef struct SceIoDeviceTable SceIoDeviceTable;
typedef struct SceIoDeviceFunction SceIoDeviceFunction;

typedef struct {
    u16 year; /* 0x0 */
    u16 month; /* 0x2 */
    u16 day; /* 0x4 */
    u16 hour; /* 0x6 */
    u16 minute; /* 0x8 */
    u16 second; /* 0xA */
    u32 microsecond; /* 0xC */
} ScePspDateTime;

/* 0x58 bytes */
struct SceIoStat {
    SceMode st_mode; /* 0x0 */
    u32 st_attr; /* 0x4 */
    SceOff st_size; /* 0x8 */
    ScePspDateTime st_ctime; /* 0x10 */
    ScePspDateTime st_atime; /* 0x20 */
    ScePspDateTime st_mtime; /* 0x30 */
    u32 st_private[6]; /* 0x40 */
};

typedef struct UFatUnit UFatUnit;
/* FAT volume (unit), 1.00: 0x274 bytes, array at D_0000D608, count D_0000D604 */
struct UFatUnit {
    s32 flags; /* 0x0 */
    SceUID fd; /* 0x4 */
    s32 nodeCount; /* 0x8 */
    s32 devInfo[5]; /* 0xC */
    s32 bytesPerSector; /* 0x20 */
    s32 sectorShift; /* 0x24 */
    u32 fatMask; /* 0x28 */
    s32 fatStart; /* 0x2C */
    s32 nClusters; /* 0x30 */
    s32 sectorsPerFat; /* 0x34 */
    s32 numFats; /* 0x38 */
    s32 rootDirStart; /* 0x3C */
    s32 rootEntries; /* 0x40 */
    s32 dataStart; /* 0x44 */
    s32 sectorsPerCluster; /* 0x48 */
    s32 clusterSize; /* 0x4C */
    u8 pad50[0xC];
    s32 freeCount; /* 0x5C */
    s32 nextFree; /* 0x60 */
    s32 cachedSector; /* 0x64 */
    u8 sectorBuf[0x200]; /* 0x68 */
    s32 nameMode; /* 0x268 */
    u8 pad26C[0x8];
};

typedef struct LFlashSegment LFlashSegment;
/* lflash segment, 0x1C bytes */
struct LFlashSegment {
    u8 pad0[0x1C];
};

typedef struct LFlashDev LFlashDev;
/* lflash device state (D_0000EED0), 1.00: 0x1C8 bytes */
struct LFlashDev {
    u8 pad0[0x18C];
    u32 pageSize; /* 0x18C */
    s32 unk190; /* 0x190 */
    u32 pagesPerBlock; /* 0x194 */
    u8 pad198[0x14];
    u32 nSegments; /* 0x1AC */
    LFlashSegment *segments; /* 0x1B0 */
    s32 unk1B4; /* 0x1B4 */
    u8 *blockBuf; /* 0x1B8 */
    u8 pad1BC[0xC];
};

typedef struct LFlashPart LFlashPart;
/* lflash partition (iob->i_private of lflash0:), size unknown */
struct LFlashPart {
    u8 pad0[0x4];
    u32 unk4; /* 0x4 */
    u8 pad8[0x4];
    u32 unkC; /* 0xC */
};

typedef struct LFlashDevInfo LFlashDevInfo;
/* ioctl 0x3D001 output (0x44 bytes); fields 0x10..0x20 copied to UFatUnit.devInfo */
struct LFlashDevInfo {
    u8 pad0[0x10];
    u32 unk10; /* 0x10 */
    u32 unk14; /* 0x14 */
    u32 unk18; /* 0x18 */
    u32 unk1C; /* 0x1C */
    u32 flags; /* 0x20 */
    u8 pad24[0x20];
};

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

/* 0x160 bytes */
struct SceIoDirent {
    SceIoStat d_stat; /* 0x0 */
    char d_name[256]; /* 0x58 */
    void *d_private; /* 0x158 */
    s32 dummy; /* 0x15C */
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

struct Unk_Unk_func_00003AE8_0_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_00001980_0 {
    void *unk0;
    void **unk4;
    struct Unk_func_00001980_temp_a2 *unk8;
};

struct Unk_func_00001980_temp_a2 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0000286C_0 {
    u8 pad0[0x10];
    void * unk10;
};

struct Unk_func_00003AA0_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00003AE8_0 {
    struct Unk_Unk_func_00003AE8_0_0 *unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00003B14_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00003B90_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00003BB8_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_00003BD8_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_00003BF8_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_00003C18_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00003C40_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00008718_0 {
    u8 pad0[0x2];
    u8 unk2;
    u8 unk3;
};

struct Unk_func_0000A3A0_0 {
    u8 pad0[0x8];
    s32 ** unk8;
};

struct Unk_func_0000A3DC_0 {
    u8 pad0[0x8];
    s32 ** unk8;
};

extern char D_0000C56C[];
extern char D_0000C5B4[];
extern char D_0000CD6C[];
extern char D_0000CD94[];
extern char D_0000CDB4[];
extern char D_0000CF5C[];
extern char D_0000CF6C[];
extern char D_0000CF84[];
extern char D_0000CF9C[];
extern char D_0000D03C[];
extern char D_0000D084[];
extern char D_0000D22C[];
extern volatile SceUID D_0000D360;
extern void *D_0000D60C;
extern void **D_0000D610;
extern void *D_0000D614;
extern s32 D_0000D72C;
extern char D_0000D874[];
extern char D_0000D8C0[];
extern s32 D_0000D984;
extern M2C_UNK D_0000DA50;
extern char D_0000DCE0[];
extern M2C_UNK D_0000E050;
extern s32 D_0000E094;
extern char D_0000E160[];
extern s32 D_0000E3D4;
extern s32 D_0000E554;
extern void *D_0000E80C;
extern void **D_0000E810;
extern void *D_0000E814;
extern s32 D_0000E8F4;
extern s32 D_0000EB24;
extern s32 D_0000EC14;
extern M2C_UNK D_0000ECA8;
extern void *D_0000EDAC;
extern void **D_0000EDB0;
extern void *D_0000EDB4;
extern LFlashDev D_0000EED0;

s32 Kprintf(const char *fmt, ...);
s32 bcmp(const void *a, const void *b, SceSize n);
void bcopy(const void *src, void *dst, SceSize n);
void bzero(void *s, SceSize n);
s32 func_00000000(s32 arg0);
s32 func_00000000_v310(s32 arg0);
s32 func_00000000_v311(s32 arg0);
s32 func_00000000_v330(s32 arg0);
s32 func_00000000_v340(s32 arg0);
s32 func_000004C4(void);
s32 func_00000584(s32 arg0);
s32 func_000005EC(void);
s32 func_000006AC(s32 arg0);
s32 func_0000168C(s32, s32, s32, s32);
s32 func_00001920(void);
s32 func_00001928(void);
s32 func_00001980(struct Unk_func_00001980_0 *arg0);
s32 func_000019B4(void *arg0);
s32 func_00001C24(void);
s32 func_00001C48(void);
s32 func_000022A4(void *arg0);
s32 func_0000286C(struct Unk_func_0000286C_0 *arg0);
s32 func_000028E8(void);
s32 func_00002C24(void);
s32 func_00002C6C(SceIoIob *iob, const char *oldname, const char *newname);
s32 func_00002CAC(SceIoIob *iob, char *name);
void func_00002D98(void *arg0);
void func_00002DC4(s32 arg0);
void func_00002DE0(void *arg0);
void func_00002E0C(void *arg0);
void func_00002E88(void *arg0);
void func_00002EB0(void *arg0);
void func_00002ED0(void *arg0);
void func_00002EF0(void *arg0);
void func_00002F10(void *arg0);
void func_00002F38(void *arg0);
s32 func_000031DC(void);
s32 func_00003214(s32, s32, s32, s32);
s32 func_0000362C(s32);
s32 func_0000372C_v100(s32, s32, s32);
void func_00003AA0(struct Unk_func_00003AA0_0 *arg0);
void func_00003ACC(s32 arg0);
s32 func_00003AD8(s32, s32, s32);
void func_00003AE8(struct Unk_func_00003AE8_0 *arg0);
void func_00003B14(struct Unk_func_00003B14_0 *arg0);
void func_00003B90(struct Unk_func_00003B90_0 *arg0);
void func_00003BB8(struct Unk_func_00003BB8_0 *arg0);
void func_00003BD8(struct Unk_func_00003BD8_0 *arg0);
void func_00003BF8(struct Unk_func_00003BF8_0 *arg0);
void func_00003C18(struct Unk_func_00003C18_0 *arg0);
void func_00003C40(struct Unk_func_00003C40_0 *arg0);
s32 func_00003F94(s32, s32);
s32 func_00004258(s32, s32);
s32 func_000042D8(s32, s32, s32, s32);
s32 func_00004398(s32, s32);
s32 func_00004458(s32, s32, s32);
s32 func_00004510(s32, s32, s32);
s32 func_000045C8(s32);
s32 func_0000464C(s32, s32, s32, s32);
s32 func_0000466C(s32, s32, s32);
s32 func_00004CFC(s32, s32, s32);
s32 func_00005110(s32, s32);
s32 func_00005388(s32, s32);
s32 func_00005470(s32, s32);
s32 func_000055FC(s32, s32, s32);
s32 func_00005708(s32, s32, s32, s32);
s32 func_00007F58(void *arg0);
void func_000081AC(void *arg0);
void func_000081E8(void *arg0);
s32 func_00008718(struct Unk_func_00008718_0 *arg0);
void func_00008800(void);
s32 func_0000881C(s32 arg0);
s32 func_00008914(void);
s32 func_00008958(void);
void func_000089C0(void);
void func_000089C8(void);
s32 func_00008A4C(s32);
s32 func_00008B14(s32);
s32 func_00008C9C(s32);
s32 func_00009150(void);
s32 func_000091C0(void);
s32 func_00009254(void);
s32 func_000092A4(void);
s32 func_000092B0(void);
s32 func_000092BC(void);
s32 func_000092E0(void);
s32 func_000092EC(void);
s32 func_000092F8(void);
s32 func_00009304(void);
s32 func_00009310(void);
s32 func_0000931C(void);
void func_000093E8(void);
void func_000093F0(void);
void func_000093F8(void);
s32 func_00009638(s32);
s32 func_000097A8(void);
void func_00009838(void);
s32 func_00009934(void);
void func_00009D0C(void);
void func_00009D14(void);
s32 func_00009EBC(void);
s32 func_00009F04(void);
s32 func_00009F74(void);
void func_00009F94(s32 arg0);
s32 func_00009F98(void);
void func_0000A098(void *arg0);
s32 func_0000A320(void);
s32 func_0000A32C(void);
s32 func_0000A3A0(struct Unk_func_0000A3A0_0 *arg0);
s32 func_0000A3DC(struct Unk_func_0000A3DC_0 *arg0);
void func_0000A4E4(void *arg0);
s32 func_0000A4FC(void);
s32 func_0000A508(void);
s32 func_0000A514(void);
void func_0000A528(void *arg0);
s32 func_0000A7AC(void);
s32 func_0000ACF0(SceIoIob *iob, char *name);
s32 func_0000AD24(SceIoIob *iob, char *name);
s32 func_0000ADC0(void *arg0);
s32 func_0000ADFC(void *arg0);
s32 func_0000AF24(void);
s32 func_0000AF30(void);
s32 func_0000AF98(void);
void func_0000B9D4(void *arg0);
void *memcpy(void *dst, const void *src, SceSize n);
void *memset(void *s, s32 c, SceSize n);
s32 module_reboot_before(void);
s32 sceIoAddDrv(SceIoDeviceTable *drv);
s32 sceIoAssign(const char *dev1, const char *dev2, const char *dev3, s32 mode, void *unk1, s32 unk2);
s32 sceIoClose(SceUID fd);
s32 sceIoDelDrv(const char *name);
s32 sceIoIoctl(SceUID fd, u32 cmd, void *indata, s32 inlen, void *outdata, s32 outlen);
SceOff sceIoLseek(SceUID fd, SceOff offset, s32 whence);
SceUID sceIoOpen(const char *file, s32 flags, SceMode mode);
s32 sceIoRead(SceUID fd, void *data, SceSize size);
s32 sceIoUnassign(const char *dev);
s32 sceIoWrite(SceUID fd, const void *data, SceSize size);
void *sceKernelAllocHeapMemory(SceUID heapid, SceSize size);
void sceKernelAssert(s32 test, s32 lvl);
s32 sceKernelCheckThreadKernelStack(void);
void sceKernelCpuResumeIntr(s32 flags);
s32 sceKernelCpuSuspendIntr(void);
SceUID sceKernelCreateHeap(SceUID partitionid, SceSize size, s32 unk, const char *name);
SceUID sceKernelCreateSema(const char *name, u32 attr, s32 initVal, s32 maxVal, void *option);
SceUID sceKernelCreateThread(const char *name, void *entry, s32 initPriority, s32 stackSize, u32 attr, void *option);
SceUID sceKernelCreateVpl(const char *name, s32 part, s32 attr, u32 size, void *opt);
s32 sceKernelDeleteFpl(s32);
s32 sceKernelDeleteSema(SceUID semaid);
s32 sceKernelDeleteVpl(SceUID uid);
s32 sceKernelExitDeleteThread(s32 status);
s32 sceKernelExtendKernelStack(s32 size, void *cb, void *arg);
s32 sceKernelFreeHeapMemory(SceUID heapid, void *block);
s32 sceKernelLockMutex(s32, s32, void *);
s32 sceKernelPowerLock(s32);
s32 sceKernelPowerUnlock(s32);
M2C_UNK sceKernelRegisterSysEventHandler(M2C_UNK *);
s32 sceKernelSignalSema(SceUID semaid, s32 signal);
s32 sceKernelStartThread(SceUID thid, SceSize arglen, void *argp);
s32 sceKernelTryAllocateVpl(SceUID uid, u32 size, void **data);
s32 sceKernelUnlockMutex(s32, s32);
M2C_UNK sceKernelUnregisterSysEventHandler(M2C_UNK *);
s32 sceKernelWaitSema(SceUID semaid, s32 signal, u32 *timeout);
s32 sceKernelWaitThreadEnd(SceUID thid, u32 *timeout);
s32 sceLFatFs_driver_51C7F7AE(void);
s32 sceLFatFs_driver_F1FBA85F(void);
s32 sceLfatfsStop(void);
s32 sceNandEraseBlock(u32 ppn);
s32 sceNandGetPageSize(void);
s32 sceNandGetPagesPerBlock(void);
s32 sceNandGetTotalBlocks(void);
s32 sceNandIsBadBlock(u32 ppn);
s32 sceNandLock(s32 writeFlag);
s32 sceNandReadStatus(void);
s32 sceNandSetWriteProtect(s32 protectFlag);
void sceNandUnlock(void);
s32 sceRtcGetCurrentClock(ScePspDateTime *time, s32 tz);
s32 strcmp(const char *a, const char *b);
SceSize strlen(const char *s);
s32 strncmp(const char *a, const char *b, SceSize n);
char *strrchr(const char *s, s32 c);

#endif
