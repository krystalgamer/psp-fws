#ifndef REBOOTI_DECLS_H
#define REBOOTI_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_00003BB4_0 {
    u8 pad0[0x48];
    s32 unk48;
};

struct Unk_func_00007EF0_0 {
    u8 pad0[0x10];
    s32 unk10;
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
    u32 devStart; /* 0xC */
    s32 devSectors; /* 0x10 */
    u32 devSectorSize; /* 0x14 */
    s32 devShift; /* 0x18 */
    u32 devFlags; /* 0x1C */
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
    s32 activeFat; /* 0x50 */
    u8 pad54[0x8];
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
    u8 pad0[0x4];
    u16 firstLbn; /* 0x4 */
    u8 pad6[0x2];
    u16 maxLbn; /* 0x8 */
    u8 padA[0x2];
    u16 *lpTable; /* 0xC */
    u8 pad10[0xC];
};

/* NAND chip geometry (D_00018BCC); filled by sceNandDetectChip */
typedef struct {
    u32 pageSize; /* 0x0 */
    u32 pagesPerBlock; /* 0x4 */
    u32 totalBlocks; /* 0x8 */
    u8 makerId; /* 0xC */
    u8 deviceId; /* 0xD */
    u8 padE[2];
} SceNandInfo;
/* known chip table entry (D_00016C14, 17 entries) */
typedef struct {
    u8 makerId; /* 0x0 */
    u8 deviceId; /* 0x1 */
    u16 pageSize; /* 0x2 */
    u16 pagesPerBlock; /* 0x4 */
    u16 unk6;
    u32 totalBlocks; /* 0x8 */
} SceNandChipEntry;

typedef struct LFlashDev LFlashDev;
/* lflash device state (D_0000EED0), reboot 1.00: at least 0x1D4 bytes (lfatfs 1.00: 0x1C8) */
struct LFlashDev {
    u8 pad0[0x18C];
    u32 pageSize; /* 0x18C */
    s32 pageShift; /* 0x190 */
    u32 pagesPerBlock; /* 0x194 */
    u8 pad198[0x14];
    u32 nSegments; /* 0x1AC */
    LFlashSegment *segments; /* 0x1B0 */
    s32 unk1B4; /* 0x1B4 */
    u8 *blockBuf; /* 0x1B8 */
    void *unk1BC; /* 0x1BC */
    void *unk1C0; /* 0x1C0 */
    void *unk1C4; /* 0x1C4 */
    u32 unk1C8; /* 0x1C8 */
    u32 unk1CC; /* 0x1CC */
    u16 unk1D0; /* 0x1D0 */
    u16 unk1D2; /* 0x1D2 */
};

/* .rodata.sceModuleInfo */
typedef struct {
    u16 modAttribute; /* 0x0 */
    u8 modVersion[2]; /* 0x2 */
    char modName[27]; /* 0x4 */
    char terminal; /* 0x1F */
    void *gpValue; /* 0x20 */
    void *entTop; /* 0x24 */
    void *entEnd; /* 0x28 */
    void *stubTop; /* 0x2C */
    void *stubEnd; /* 0x30 */
} SceModuleInfo;

/* loadcore exec file info (1.00 copy in loadelf.c). Offsets 0x8, 0x10, 0x20, 0x28, 0x34-0x3C, 0x48-0x58, 0x70-0x80 confirmed in the 1.00 asm;
   names from uOFW (6.60 layout, same offsets up to here). */
typedef struct {
    u32 unk0;
    u32 modeAttribute; /* 0x4 */
    u32 apiType; /* 0x8 */
    u32 unkC;
    u32 execSize; /* 0x10 */
    u32 maxAllocSize; /* 0x14 */
    s32 decompressionMemId; /* 0x18 */
    void *fileBase; /* 0x1C */
    s32 elfType; /* 0x20, 1 = PRX, 2 = ELF */
    void *topAddr; /* 0x24 */
    u32 entryAddr; /* 0x28 */
    u32 unk2C;
    u32 modCodeSize; /* 0x30 */
    u32 textSize; /* 0x34 */
    u32 dataSize; /* 0x38 */
    u32 bssSize; /* 0x3C */
    u32 partitionId; /* 0x40 */
    u32 isKernelMod; /* 0x44 */
    u32 isDecrypted; /* 0x48 */
    u32 moduleInfoOffset; /* 0x4C */
    SceModuleInfo *moduleInfo; /* 0x50 */
    u32 isCompressed; /* 0x54 */
    u16 modInfoAttribute; /* 0x58 */
    u16 execAttribute; /* 0x5A */
    u32 decSize; /* 0x5C */
    u32 isDecompressed; /* 0x60 */
    u32 isSignChecked; /* 0x64 */
    char *secureInstallId; /* 0x68 */
    u32 overlapSize; /* 0x6C */
    void *exportsInfo; /* 0x70 */
    u32 exportsSize; /* 0x74 */
    void *importsInfo; /* 0x78 */
    u32 importsSize; /* 0x7C */
    char *strtab; /* 0x80 */
} SceLoadCoreExecFileInfo;
/* "~SCE" wrapper header in front of a module (magic 0x4543537E, size at 4) */
typedef struct {
    u32 magic; /* 0x0 */
    u32 size; /* 0x4 */
} SceHeader;

struct Unk_func_00003ED8_0 {
    s32 unk0;
    s32 unk4;
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

struct Unk_func_00008F0C_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_000091C4_0 {
    u8 pad0[0x10];
    struct Unk_func_000091C4_temp_a0 *unk10;
};

struct Unk_func_000091C4_temp_a0 {
    void *unk0;
    void **unk4;
    struct Unk_func_000091C4_temp_a3 *unk8;
};

struct Unk_func_000091C4_temp_a1 {
    u8 pad0[0x4];
    void **unk4;
};

struct Unk_func_000091C4_temp_a3 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0000D694_0 {
    u8 pad0[0x2];
    u8 unk2;
    u8 unk3;
};

extern char D_00013430[];
extern char D_00014C70[];
extern char D_00014CB8[];
extern s32 (*D_00014F14)(); /* (void *arg, const char *fmt, va_list ap[, 0 in 1.50]) */
extern void *D_00014F18;
extern s32 D_00014F1C;
extern s8 D_00014F21[];
extern void (*D_00015254)(s32);
extern s32 D_00015264;
extern s32 (*D_00015268)(void);
extern s32 (*D_0001526C)(void);
extern u32 D_00015270;
extern s32 D_00015274;
extern s32 D_00015278;
extern s32 (*D_00015464)(s32, u32);
extern void *D_00015474;
extern void **D_00015478;
extern void *D_0001547C;
extern u32 D_00015494;
extern u8 D_00016598[];
extern u8 D_000165C0[];
extern s32 D_000165D0;
extern u32 D_000165F0;
extern u8 D_000165F8[];
extern SceNandInfo D_00016CF4;
extern u32 D_00016CF8;
extern u32 D_00016CFC;
extern u8 D_000177B8[];
extern LFlashDev D_0001B9B8;
extern u8 D_0001BB90[];
extern u8 D_00027D10[];
extern M2C_UNK D_0002BD1C;
extern u8 D_0002EB1C[];
extern u8 D_0002EBFC[];

s32 func_00000000(void);
s32 func_0000004C(s32);
void func_000004BC(void (*arg0)(s32));
void func_000004C8(s32 test, u32 lvl);
u32 func_00000684(char **pp);
void func_00000768(s32 arg0);
void func_0000129C(s32 arg0);
void func_000012A8(s32 arg0, s32 arg1);
void *func_000012BC(const void *s, s32 c, s32 n);
s32 func_000012F4(const char *s);
s32 func_00001A54(const char *fmt, ...);
s32 func_00001B10(s32 arg0);
s32 func_00001B20(void);
s32 func_00001B50(s32 (*arg0)(void));
s32 func_00001B60(void);
s32 func_00001B6C(s32 arg0);
s32 func_00001B7C(u32 arg0, s32 arg1);
s32 func_00001B94(u32 bit);
s32 func_00001BC0(void);
s32 func_00001BCC(u32 bit);
s32 func_00001C04(void);
s32 func_00001C10(s32 arg0);
s32 func_00001C20(void);
s32 func_00001C2C(void);
void func_00001C58(s32 intr);
s32 func_00001CB8(s32 arg0);
void func_00001CCC(const void *src, void *dst, u32 n);
void func_00001CF0(const void *a, const void *b, s32 n);
void func_00001D0C(void *s, u32 n);
s32 func_00001D2C(s32 arg0);
s32 func_00001D68(s32 arg0);
s32 func_00001DA4(s32 c);
M2C_UNK *func_00001DB4(void);
void *func_00001DC0(const void *s, s32 c, s32 n);
void *func_00001DF8(void *dst, const void *src, s32 n);
void *func_00001E60(void *s, s32 c, s32 n);
void *func_00001ED0(void *dst, const void *src, s32 n);
s32 func_00001F44(const void *a, const void *b, s32 n);
s32 func_000020E0(const char *s);
char *func_00002114(const char *s, s32 c);
s32 func_000022A0(void (*put)(char **, s32), char **arg, const char *fmt, void *ap);
void func_000029B4(char **pp, s32 c);
s32 func_000029D8(char *buf, const char *fmt, ...);
s32 func_00002A24(char *buf, const char *fmt, void *ap);
M2C_UNK func_00003174();
s32 func_0000326C(s32 baud);
s32 func_000032CC(s8 c);
s32 func_000032F8(s8 arg0);
s32 func_000033C4(void);
s32 func_000033EC(void);
s32 func_0000340C(u8 *buf, s32 n);
void func_00003470(void);
void func_0000348C(s8 arg0);
s32 func_000034A8(s32 unused, s32 a1, s32 a2);
s32 func_000034C8(s32 unused, s32 a1, s32 a2);
s32 func_000034E8(void);
s32 func_000034F0(void);
s32 func_00003AC8(s32 arg0);
void func_00003BB4(SceLoadCoreExecFileInfo *execInfo, s32 ret);
s32 func_00003ED8(SceHeader *hdr);
void func_000054EC(u32 *p, s32 n);
s32 func_00006114(void);
s32 func_000061C4(void);
s32 func_000061CC(void);
s32 func_00006230(void);
s32 func_00006290(s32 a0, s32 a1);
s32 func_00006968(const u8 *a, const char *b);
M2C_UNK func_000069D4(s32, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_00006E34(s32, M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_0000724C(s32);
s32 func_00007428();
s32 func_00007D00();
s32 func_00007E4C(void);
s32 func_00007E54(void);
void func_00007E5C(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3);
s32 func_00007EB8(s32 arg0);
void func_00007EF0(struct Unk_func_00008F0C_0 *arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_00007F40(s32 arg0, s32 arg1, s32 arg2);
s64 func_00007F98(void *iob, SceOff off, s32 whence);
s32 func_00007FF0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5);
s32 func_00008078(s32 arg0, s32 arg1);
s32 func_000080C0(s32 arg0, s32 arg1, s32 arg2);
s32 func_00008118(s32 arg0, s32 arg1);
s32 func_00008160(s32 arg0, s32 arg1);
s32 func_000081A8(struct Unk_func_000091C4_0 *arg0);
void func_00008238(s32 arg0, M2C_UNK arg1);
void func_00008274(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_000082C0(s32 a0, s32 a1, s32 a2, s32 a3);
s32 func_00008328(s32 arg0, s32 arg1, s32 arg2);
s32 func_00008368(s32 arg0, s32 arg1);
s32 func_000083A0(void);
s32 func_000083CC(void);
s32 func_000083F8(void);
s32 func_00008A98(UFatUnit *unit, u32 cluster);
s32 func_00009284(s32, s32, s32);
s32 func_00009630(s32, s32, s32);
s32 func_00009A08(s32, s32);
s32 func_00009CCC(s32, s32);
M2C_UNK func_00009E0C(s32, M2C_UNK);
M2C_UNK func_00009F84(s32, M2C_UNK, M2C_UNK);
s32 func_0000ADC8(UFatUnit *unit, s32 sector);
s32 func_0000AE38(UFatUnit *unit);
s32 func_0000AEF0(UFatUnit *unit, s32 cluster);
s32 func_0000C18C(UFatUnit *unit);
s32 func_0000C21C(UFatUnit *unit);
s32 func_0000C4D4(struct Unk_func_0000D694_0 *arg0);
s32 func_0000C7A4(LFlashDev *dev);
void func_0000C820(void *arg0, s32 arg1, u8 *arg2);
s32 func_0000C8B0(LFlashDev *dev);
s32 func_0000C9F8(void *arg);
s32 func_0000CA8C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_0000CE50(void);
s32 func_0000CE94(void);
s32 func_0000CEB4(void);
void func_0000CEE4(void);
void func_0000CF04(void);
s32 func_0000CF24(void);
s32 func_0000CF74(void);
s32 func_0000CFD8(void *arg);
s64 func_0000D02C(SceOff off, s32 whence);
s32 func_0000D090(s32 a0, s32 a1);
s32 func_0000D0E0(void);
s32 func_0000D0EC(s32);
s32 func_0000D5B4(void);
s32 func_0000E190(s32);
s32 func_0000E544(s32, s32, s32, s32, s32);
s64 func_0000E880(void *iob, SceOff off, s32 whence);
M2C_UNK func_0000EA00();
void func_0000F0FC(s32 arg0);
s32 func_0000F734(void);
s32 func_0000FAF4(void *iob, char *name, void *stat);
s32 func_0000FB44(void *iob, char *name);
s32 func_0000FB78(void *iob, const char *oldname);
s32 func_0000FBAC(void *iob, char *name);
s32 func_0000FBE0(void);
s32 func_0000FBEC(void);
s32 func_0000FC94(void);
s32 func_0000FCA0(void);
s32 func_0001006C(u8 *buf, s32 len);
s32 func_000100C4(u32 ppn, void *user, void *spare, u32 len, s32 mode);
s32 func_000102AC(u32 ppn, void *user, void *spare, u32 len, s32 mode);
s32 func_000106F0(void);
s32 func_00010744(s32 protect);
s32 func_00010778(void);
s32 func_000107AC(s32 a0);
s32 func_000107E4(void);
s32 func_000107EC(u32 ppn, void *user, void *spare, u32 len);
s32 func_00010838(u32 ppn, void *user, void *spare, u32 len);
s32 func_00010868(u32 ppn, void *user, void *spare, u32 len);
s32 func_00010884(u32 ppn, void *user, void *spare, u32 len);
s32 func_000108B0(u32 ppn, void *user, void *spare, u32 len);
s32 func_000108CC(u32 ppn, void *user, void *spare, u32 len);
s32 func_000110E8(u32 ppn, void *user, void *spare);
s32 func_000112BC(u32 ppn);
s32 func_0001192C(void);
s32 func_00011938(void);
s32 func_00011944(void);
s32 func_00011950(u32 ppn, void *user, void *spare);
s32 func_00011BDC(s32 a0, s32 a1);
s32 func_00011BF8(s32 a0, s32 a1);
void func_00011ED8(void);
void func_00011EF8(void);
void func_00011F18(void);
void func_00011F38(void);
void func_00011F58(void);
void func_00011F78(void);
void func_00011F98(void);
void func_00011FB8(void);
void func_00011FD8(void);
s32 func_00011FF8(u32 n);
s32 func_0001203C(u32 n);
void func_00012080(void);
void func_000120A0(void);
void func_000120C0(void);
void func_000120E0(void);
void func_00012100(void);
void func_00012120(void);
s32 func_00012140(u32 n);
s32 func_00012184(u32 n);
void func_000121C8(void);
void func_000121E8(void);
void func_00012208(void);
void func_00012228(void);
void func_00012248(void);
void func_00012268(void);
s32 func_00012288(u32 n);
s32 func_000122CC(u32 n);
s32 func_00012310(u32 mask, s32 on);
void func_0001233C(void);
void func_0001235C(void);
void func_0001237C(void);
void func_0001239C(void);
void func_000123BC(void);
void func_000123DC(void);
s32 func_000123FC(u32 n);
s32 func_00012440(u32 n);
void func_00012484(void);
void func_000124A4(void);
s32 func_000124C4(u32 n);
s32 func_00012508(u32 n);
void func_0001254C(void);
void func_0001256C(void);
void func_0001258C(void);
void func_000125AC(void);
void func_000125CC(void);
void func_000125EC(void);
s32 func_0001260C(void);
s32 func_00012618(void);
void func_00012624(void);
void func_00012644(void);
s32 func_00012664(u32 n);
s32 func_000126A8(u32 n);
s32 func_000126EC(u32 n);
s32 func_00012730(u32 n);
s32 func_00012774(s32 a0);
s32 func_00012790(s32 a0);
s32 func_000127AC(u32 bit, s32 on);
s32 func_000127F8(u32 mask, s32 on);
s32 module_bootstart(void);

#endif
