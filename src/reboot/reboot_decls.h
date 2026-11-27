#ifndef REBOOT_DECLS_H
#define REBOOT_DECLS_H

#include "common.h"
#include "m2c_macros.h"

/* small-data globals: these TUs were built with -G8 (gp-size 8) and assembled with -G0,
   so gcc emits `sw $4,sym` macros that gas expands with $at */
#define SDATA __attribute__((section(".sdata")))

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

typedef struct FatDirEntry FatDirEntry;
/* FAT 8.3 directory entry (32 bytes) */
struct FatDirEntry {
    u8 name[8]; /* 0x0 */
    u8 ext[3]; /* 0x8 */
    u8 attr; /* 0xB */
    u8 ntRes; /* 0xC */
    u8 crtTimeTenth; /* 0xD */
    u16 crtTime; /* 0xE */
    u16 crtDate; /* 0x10 */
    u16 lstAccDate; /* 0x12 */
    u16 fstClusHi; /* 0x14 */
    u16 wrtTime; /* 0x16 */
    u16 wrtDate; /* 0x18 */
    u16 fstClusLo; /* 0x1A */
    u32 fileSize; /* 0x1C */
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

typedef struct LFlashDev LFlashDev;
/* lflash device state (D_0000EED0), 1.00: 0x1C8 bytes */
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

typedef struct UFatNode UFatNode;
/* open file/dir node (0x54 bytes); lists D_0000D60C (head) / D_0000D610 (tail), free list D_0000D614 */
struct UFatNode {
    struct UFatNode *next; /* 0x0 */
    struct UFatNode *prev; /* 0x4 */
    UFatUnit *unit; /* 0x8 */
    u32 startCluster; /* 0xC */
    s32 size; /* 0x10 */
    s32 pos; /* 0x14 */
    s32 clusterOff; /* 0x18 */
    s32 curCluster; /* 0x1C */
    u8 pad20[0x4];
    FatDirEntry dirent; /* 0x24 */
    u8 pad44[0x10];
};

typedef struct UFatBuf UFatBuf;
/* sector buffer cache entry (buf_lookup), size unknown */
struct UFatBuf {
    u8 pad0[0x14];
    u8 *data; /* 0x14 */
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

extern void *D_00014D00;
extern s32 (*D_00014EE4)(s32, s32) SDATA;
extern char D_00015D38[];
extern const SceNandChipEntry D_00016C14[17];
extern s32 D_00016DE4 SDATA;
extern s32 D_00016DE8 SDATA;
extern s32 D_00016DEC SDATA;
extern s8 D_00016DF1[] SDATA;
extern s32 D_00017124 SDATA;
extern s32 D_00017134 SDATA;
extern s32 D_00017138 SDATA;
extern s32 (*D_0001713C)(void) SDATA;
extern u32 D_00017140 SDATA;
extern s32 D_00017144 SDATA;
extern s32 D_00017148 SDATA;
extern void *D_00017344;
extern void **D_00017348;
extern void *D_0001734C;
extern u32 D_00017364;
extern u8 D_00018468[];
extern u8 D_00018490[];
extern SceNandInfo D_00018BCC;
extern u32 D_00018BD0;
extern u32 D_00018BD4;
extern LFlashDev D_0001D890;
extern M2C_UNK D_0002B79C;
extern M2C_UNK D_0002DB34;
extern M2C_UNK D_0002DBF4;

s32 Kprintf(const char *fmt, ...);
s32 UFatChdir(s32 arg0, s32 arg1);
s32 UFatRename(s32 arg0, s32 arg1, s32 arg2);
void bcmp(const void *a, const void *b, s32 n);
void bcopy(const void *src, void *dst, u32 n);
void bzero(void *s, u32 n);
s32 df_chdir(void *iob, char *name);
s32 df_chstat(void *iob, char *name);
s32 df_dclose(void *arg0);
s32 df_dopen(void *iob, char *name);
s32 df_dread(void *arg0);
s32 df_getstat(void *iob, char *name, void *stat);
s32 df_mkdir(void *iob, char *name);
s32 df_open_locked(s32, s32, s32, s32, s32);
s32 df_remove(void *iob, char *name);
s32 df_rename(void *iob, const char *oldname);
s32 df_rmdir(void *iob, char *name);
s32 func_00000000(s32);
void func_000003BC(s32 arg0);
void func_00000768(s32 arg0);
void *func_000012BC(const void *s, s32 c, s32 n);
s32 func_000012F4(const char *s);
s32 func_00001B94(u32 bit);
s32 func_00001BCC(u32 bit);
void func_00001C14(s32 arg0);
void func_00001C20(s32 arg0, s32 arg1);
s32 func_00001C64(s32 arg0);
s32 func_00001C74(void);
s32 func_00001CA4(s32 (*arg0)(void));
s32 func_00001CB4(void);
s32 func_00001CC0(s32 arg0);
s32 func_00001CD0(u32 arg0, s32 arg1);
s32 func_00001D14(void);
s32 func_00001D2C(s32 arg0);
s32 func_00001D58(void);
s32 func_00001D64(s32 arg0);
s32 func_00001D68(s32 arg0);
s32 func_00001D74(void);
void func_000029B4(char **pp, s32 c);
void func_00002A00(u8 *arg0, u8 *arg1);
void func_00002A4C(u8 *arg0, u8 *arg1, u32 arg2);
s32 func_00002C2C(void);
void func_00002C58(s32 intr);
s32 func_00002CB8(s32 arg0);
void *func_00002FDC(void *dst, const void *src, s32 n);
s32 func_0000326C(s32 baud);
s32 func_000032F8(s8 arg0);
s32 func_000033C4(void);
s32 func_000033EC(void);
void func_0000348C(s8 arg0);
s32 func_00003AC8(s32 arg0);
void func_00003B50(void *arg0, s32 arg1);
s32 func_00003B68(s32 arg0, void *arg1);
s32 func_00003DD8(void *arg0);
M2C_UNK func_000040CC();
s32 func_00004244(s8 c);
s32 func_0000436C(u8 *buf, s32 n);
void func_000043B8(void);
s32 func_000043FC(s32 unused, s32 a1, s32 a2);
s32 func_0000441C(s32 unused, s32 a1, s32 a2);
s32 func_0000443C(void);
s32 func_00004444(void);
s32 func_00004558(void *dst, void *src, s32 cmd);
void func_00005290(u32 *p, s32 n);
s32 func_00007140(void);
s32 func_000071F0(void);
s32 func_000071F8(void);
s32 func_0000725C(void);
s32 func_00007978(const u8 *a, const char *b);
M2C_UNK func_000079E4(s32, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_00007E50(s32, M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_00008268(s32);
s32 func_00008444();
s32 func_00008D1C();
s32 func_00008E68(void);
s32 func_00008E70(void);
void func_00008E78(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3);
s32 func_00008ED4(s32 arg0);
void func_00008F0C(struct Unk_func_00008F0C_0 *arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_00008F5C(s32 arg0, s32 arg1, s32 arg2);
s32 func_000090DC(s32 arg0, s32 arg1, s32 arg2);
s32 func_00009134(s32 arg0, s32 arg1);
s32 func_0000917C(s32 arg0, s32 arg1);
s32 func_000091C4(struct Unk_func_000091C4_0 *arg0);
void func_00009254(s32 arg0, M2C_UNK arg1);
void func_00009290(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_000093BC(void);
s32 func_000093E8(void);
s32 func_00009484(void);
s32 func_00009BC8(UFatUnit *unit, u32 cluster);
s32 func_0000A3B4(s32, s32, s32);
s32 func_0000A7F4(s32, s32, s32);
s32 func_0000ABCC(s32, s32);
s32 func_0000AE8C(s32, s32);
M2C_UNK func_0000AFCC(s32, M2C_UNK);
M2C_UNK func_0000B148(s32, M2C_UNK, M2C_UNK);
s32 func_0000BFFC(UFatUnit *unit);
s32 func_0000C0B4(UFatUnit *unit, s32 cluster);
s32 func_0000D34C(UFatUnit *unit);
s32 func_0000D3DC(UFatUnit *unit);
s32 func_0000D694(struct Unk_func_0000D694_0 *arg0);
void func_0000D9E0(void *arg0, s32 arg1, u8 *arg2);
s32 func_0000DC4C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_0000E020(void);
s32 func_0000E028(void);
s32 func_0000E098(void);
s32 func_0000E0B8(void);
void func_0000E0E8(void);
void func_0000E108(void);
s32 func_0000E2E4(void);
s32 func_0000E2F0(s32);
s32 func_0000F3D8(s32);
M2C_UNK func_0000FC60();
void func_00010328(s32 arg0);
s32 func_00010960(void);
s32 func_00010E08(void);
s32 func_00010E14(void);
s32 func_00010EBC(void);
s32 func_000113DC(u32 ppn, void *user, void *spare, u32 len, s32 mode);
s32 func_000115B8(u32 ppn, void *user, void *spare, u32 len, s32 mode);
s32 func_000119F0(void);
s32 func_00011A80(s32 a0);
s32 func_00011AB0(void);
s32 func_00012BE0(void);
s32 func_00012BEC(void);
s32 func_00012BF8(void);
void func_0001318C(void);
void func_000131AC(void);
void func_000131CC(void);
void func_000131EC(void);
void func_0001320C(void);
void func_0001322C(void);
void func_0001324C(void);
void func_0001326C(void);
void func_0001328C(void);
void func_00013334(void);
void func_00013354(void);
void func_00013374(void);
void func_00013394(void);
void func_000133B4(void);
void func_000133D4(void);
void func_000134BC(void);
void func_000134DC(void);
s32 func_000135C4(u32 mask, s32 on);
void func_000135F0(void);
void func_00013610(void);
void func_00013630(void);
void func_00013650(void);
void func_00013670(void);
void func_00013690(void);
void func_00013738(void);
void func_00013758(void);
void func_00013800(void);
void func_00013820(void);
void func_00013840(void);
void func_00013860(void);
s32 func_000138C0(void);
s32 func_000138CC(void);
void func_000138D8(void);
void func_000138F8(void);
s32 func_00013A60(u32 bit, s32 on);
s32 func_00013AAC(u32 mask, s32 on);
M2C_UNK *get_ctype_table(void);
s32 look_ctype_table(s32);
void *memchr(const void *s, s32 c, s32 n);
s32 memcmp(const void *a, const void *b, s32 n);
void *memcpy(void *dst, const void *src, s32 n);
void *memmove(void *dst, const void *src, s32 n);
void *memset(void *s, s32 c, s32 n);
s32 module_bootstart(void);
s32 prnt(void (*put)(char **, s32), char **arg, const char *fmt, void *ap);
s32 sceNandCollectEcc(s32 a0, s32 a1);
s32 sceNandEraseBlockWithRetry(u32 ppn);
s32 sceNandReadBlockWithRetry(u32 ppn, void *user, void *spare);
s32 sceNandReadId(u8 *buf, s32 len);
s32 sceNandReadPages(u32 ppn, void *user, void *spare, u32 len);
s32 sceNandReadPagesRawAll(u32 ppn, void *user, void *spare, u32 len);
s32 sceNandReadPagesRawExtra(u32 ppn, void *user, void *spare, u32 len);
s32 sceNandReadStatus(void);
s32 sceNandSetWriteProtect(s32 protect);
s32 sceNandVerifyBlockWithRetry(u32 ppn, void *user, void *spare);
s32 sceNandVerifyEcc(s32 a0, s32 a1);
s32 sceNandWriteBlock(u32 ppn, void *user, void *spare);
s32 sceNandWritePages(u32 ppn, void *user, void *spare, u32 len);
s32 sceNandWritePagesRawAll(u32 ppn, void *user, void *spare, u32 len);
s32 sceNandWritePagesRawExtra(u32 ppn, void *user, void *spare, u32 len);
void sceSysregApbBusClockDisable(void);
void sceSysregApbBusClockEnable(void);
s32 sceSysregAudioBusClockDisable(u32 n);
s32 sceSysregAudioBusClockEnable(u32 n);
void sceSysregAudioClkoutIoDisable(void);
void sceSysregAudioClkoutIoEnable(void);
s32 sceSysregAudioIoDisable(u32 n);
s32 sceSysregAudioIoEnable(u32 n);
s32 sceSysregDmacBusClockDisable(u32 n);
s32 sceSysregDmacBusClockEnable(u32 n);
void sceSysregEmcddrBusClockDisable(void);
void sceSysregEmcddrBusClockEnable(void);
s32 sceSysregGpioIoDisable(s32 a0);
s32 sceSysregGpioIoEnable(s32 a0);
s32 sceSysregMsifBusClockDisable(u32 n);
s32 sceSysregMsifBusClockEnable(u32 n);
s32 sceSysregMsifIoDisable(u32 n);
s32 sceSysregMsifIoEnable(u32 n);
s32 sceSysregSpiIoDisable(u32 n);
s32 sceSysregSpiIoEnable(u32 n);
s32 sceSysregUartIoDisable(u32 n);
s32 sceSysregUartIoEnable(u32 n);
char *strchr(const char *s, s32 c);
s32 strlen(const char *s);
void *wmemset(void *s, s32 c, s32 n);

#endif
