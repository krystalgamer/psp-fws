#ifndef REGISTRY_DECLS_H
#define REGISTRY_DECLS_H

#include "common.h"
#include "m2c_macros.h"

typedef struct {
    s32 count;
    struct {
        u16 start;
        u16 num;
    } runs[4];
} SceRegBlockRuns;

/* header of a category's data (system.dreg), key entries follow at 0x20 */
typedef struct __attribute__((packed)) SceRegCatData {
    u8 unk0[6];
    u16 unk6;           /* 0x06: free key slots? (checked when the category has unkC == 4) */
    u16 numEntries;     /* 0x08 */
    u16 unkA;           /* 0x0A */
    u16 numKeys;        /* 0x0C */
    u16 unkE;           /* 0x0E */
    u32 unk10;          /* 0x10 */
    u32 freeBlocks;     /* 0x14 */
    u32 unk18;          /* 0x18 */
    u32 bitmapOffset;   /* 0x1C */
} SceRegCatData;

/* open-category list node */
typedef struct SceRegCatNode {
    s32 hive;                   /* 0x0: hive index */
    s32 unk4;                   /* 0x4: dirty flag */
    struct SceRegIndexEntry *cat;  /* 0x8: the category handle */
    struct SceRegCatNode *next; /* 0xC */
} SceRegCatNode;

/* a loaded registry (system.ireg + system.dreg), 0x220 bytes, unaligned */
typedef struct __attribute__((packed)) SceRegHive {
    u32 unk0;                   /* 0x000: nonzero = slot can be reused */
    u32 unk4;                   /* 0x004: dirty flag */
    u32 openCount;              /* 0x008 */
    u32 regType;                /* 0x00C: RegParam.regtype */
    s32 iregFd;                 /* 0x010 */
    s32 dregFd;                 /* 0x014 */
    u8 unk18[0x200];            /* 0x018 */
    struct SceRegIregHeader *ireg; /* 0x218: system.ireg image */
    struct SceRegHive *next;    /* 0x21C */
} SceRegHive;

/* system.ireg index entry (one per category), 0x3A bytes, unaligned */
typedef struct __attribute__((packed)) SceRegIndexEntry {
    struct SceRegHive *hive; /* 0x00: runtime only */
    u16 unk4;               /* 0x04 */
    u32 unk6;               /* 0x06 */
    u16 numKeys;            /* 0x0A: copy of the data's numKeys */
    u16 unkC;               /* 0x0C */
    char name[0x1B];        /* 0x0E */
    u8 unk29[3];            /* 0x29 */
    u16 blocks[4];          /* 0x2C: system.dreg blocks, 0xFFFF = none */
    u16 unk34;              /* 0x34 */
    struct SceRegOpenCat *opened; /* 0x36: runtime only, cleared on load */
} SceRegIndexEntry;

typedef struct {
    s32 st_mode;
    u32 st_attr;
    s64 st_size;
    u16 st_time[24];
    u32 st_private[6];
} SceRegIoStat;

/* system.ireg file header, 0x28 bytes (unaligned) */
typedef struct __attribute__((packed)) SceRegIregHeader {
    u8 unk0;            /* 0x00 */
    u8 magic[4];        /* 0x01: "IRFP" */
    u8 unk5[3];         /* 0x05 */
    u32 dregSize;       /* 0x08: RegParam.unk2 << 17 */
    u32 blockSize;      /* 0x0C: RegParam.unk3 << 9 */
    u32 blockCount;     /* 0x10: dregSize / blockSize */
    u32 unk14;          /* 0x14: blockCount */
    u32 bitmapSize;     /* 0x18: blockCount / 8, the block bitmap follows the header */
    u32 headerSize;     /* 0x1C: 0x28 */
    u32 entriesSize;    /* 0x20: blockCount * sizeof(SceRegIndexEntry) */
    u32 entriesOffset;  /* 0x24: headerSize + bitmapSize */
} SceRegIregHeader;

/* key entry in a category's data (system.dreg), 0x20 bytes, unaligned */
typedef struct __attribute__((packed)) SceRegKeyEntry {
    u8 type;            /* 0x00: 1 = dir, 2 = int, 3 = string, 4 = binary */
    u8 name[27];        /* 0x01 */
    u32 value;          /* 0x1C: int value, or size (bits 0-15), blocks of 32 bytes (16-23), data offset / 32 (24-31) */
} SceRegKeyEntry;

/* runtime state of an open category (pointed to by its index entry), unaligned */
typedef struct __attribute__((packed)) SceRegOpenCat {
    u16 refCount;   /* 0x00 */
    u16 unk2;       /* 0x02 */
    void *buf;      /* 0x04 */
} SceRegOpenCat;

/* sceRegOpenRegistry parameter (pspsdk RegParam) */
typedef struct SceRegParam {
    u32 regType;        /* 0x000 */
    char name[256];     /* 0x004 */
    u32 nameLen;        /* 0x104 */
    u32 unk2;           /* 0x108: dreg size in 128 KiB units */
    u32 unk3;           /* 0x10C: block size in 512-byte units */
} SceRegParam;

typedef struct {
    s32 size;
    char name[32];
    s32 attr;
    s32 poolSize;
    s32 freeSize;
    s32 numWaitThreads;
} SceRegVplInfo;

extern char D_000066DC[];
extern char D_00006F8C[];
extern s32 D_00006FDC;
extern s32 D_0000706C;
extern s32 g_catCount;
extern SceRegCatNode *g_catHead;
extern SceRegCatNode *g_catTail;
extern s32 g_hiveCount;
extern SceRegHive *g_hiveHead;
extern SceRegHive *g_hiveTail;
extern s32 g_initialized;
extern s32 g_openMode;
extern s32 g_semaId;
extern s32 g_vplId;
extern s32 g_vplMaxUsed;

s32 func_0000086C(s32 index);
s32 func_000008BC(s32 index);
s32 func_000009F8(SceRegIndexEntry *cat);
void func_000010B8(SceRegParam *param, SceRegIregHeader *hdr);
s32 func_000012B0(const char *name, SceRegIregHeader *hdr);
s32 func_00001560(const char *name, SceRegIregHeader *hdr);
s32 func_00001608(s32 fd, u32 size, s32 a, s32 b);
s32 func_00001E2C(const char *path, u32 count);
s32 func_00002350(SceRegIndexEntry *cat);
s32 func_0000236C(SceRegIndexEntry *cat, s32 size);
s32 func_00002630(s32 index, SceRegIregHeader *hdr, s32 parentIdx, s32 idx, const char *name, SceRegIndexEntry **cat);
s32 func_0000263C(SceRegIndexEntry *cat);
s32 func_00002884(SceRegIregHeader *hdr, s32 *index);
s32 func_00002948(s32 index, SceRegIregHeader *hdr, s32 parentIdx, s32 idx, const char *name, SceRegIndexEntry **cat, SceRegIndexEntry **parentCat);
s32 func_00002C3C(const char *path, char *parent, char *name);
s32 func_00002F10(s32 created, SceRegHive *h, SceRegIndexEntry *cat);
s32 func_000046A8(SceRegIndexEntry *cat, const char *name);
s32 func_00004778(SceRegIndexEntry *cat, const char *name);
s32 func_00004AF0(SceRegIndexEntry *cat, const char *name);
s32 func_00004F2C(SceRegIndexEntry *cat, const char *name);
s32 func_00005608(SceRegCatData *d, const char *name);
s32 func_00005718(SceRegCatData *d, s32 type, const char *name, s32 size);
s32 func_000058D8(SceRegIndexEntry *cat, SceRegCatData *d);
s32 func_000061B4(s32 arg0);
s32 func_00006674(s32 arg0);
s32 func_00006998(s32 arg0);
s32 func_00006EF0(s32 arg0);
void *memcpy(void *, const void *, u32);
void *memset(void *, s32, u32);
s32 module_reboot_before(void);
s32 module_reboot_phase(s32 arg0);
void regAddBlockRun(SceRegBlockRuns *runs, u16 start, u16 num);
s32 regAddHive(SceRegHive *h);
void regAddOpenCategory(s32 hive, SceRegIndexEntry *cat);
void *regAlloc(s32 size);
void regCatAddRef(SceRegIndexEntry *cat);
u16 regCatRelease(SceRegIndexEntry *cat);
s32 regCheckCatDirty(SceRegIndexEntry *cat);
s32 regCheckFiles(SceRegParam *param, const char *ireg, const char *dreg);
s32 regCheckHiveDirty(s32 index);
s32 regClearCatDirty(SceRegIndexEntry *cat);
s32 regClearHiveDirty(s32 index);
void regClearOpenedCategories(SceRegIregHeader *hdr);
s32 regCloseCategory(SceRegIndexEntry *cat);
s32 regCloseFile(s32 fd);
s32 regCreateFile(const char *name);
s32 regCreateHive(SceRegParam *param, const char *ireg, const char *dreg);
SceRegCatNode *regFindCatNode(SceRegIndexEntry *cat);
s32 regFindHive(SceRegParam *param, SceRegHive **hive, s32 *index);
SceRegKeyEntry *regFindKey(SceRegIndexEntry *cat, const char *name, void **data);
s32 regFlushCategory(SceRegIndexEntry *cat);
s32 regFlushHive(s32 index);
void regFree(void *ptr);
void regGetBlockRuns(SceRegBlockRuns *runs, u16 *blocks);
void regGetFileNames(s32 type, const char **ireg, const char **dreg);
s32 regGetFileSize(const char *name, u32 *size);
SceRegHive *regGetHive(s32 index);
s32 regGetKeyInfo(SceRegIndexEntry *cat, const char *name, s32 *keyId, s32 *type, u32 *size);
s32 regGetKeyValue(SceRegIndexEntry *cat, s32 keyId, void *buf, s32 size);
void regHeapDelete(void);
s32 regHeapInit(s32 arg0, s32 size);
void regHiveAddRef(SceRegHive *h);
void regInitIndexEntry(SceRegIndexEntry *e);
SceRegIndexEntry *regIsCategoryOpen(SceRegIndexEntry *cat);
s32 regKeyExists(SceRegCatData *d, const char *name);
s32 regLoadHive(SceRegParam *param, const char *ireg, const char *dreg, SceRegHive **hiveOut);
s32 regOpenFile(const char *name);
s32 regOpenFileFd(const char *name, s32 *fd);
s32 regOpenHive(SceRegParam *param, const char *ireg, const char *dreg, s32 *index);
s32 regReadFile(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4);
s32 regRemoveFile(const char *name);
void regRemoveOpenCategory(SceRegIndexEntry *cat);
s32 regSeekFile(s32 fd, s32 offset, s32 whence);
s32 regSetCatDirty(SceRegIndexEntry *cat);
s32 regSetHiveDirty(s32 index);
s32 regStatFile(const char *name, u32 *size);
s32 regWriteFile(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4);
s32 sceIoClose(s32);
s32 sceIoDevctl(void *, s32, void *, u32, void *, u32);
s32 sceIoGetstat(const char *, void *);
s64 sceIoLseek(s32, s64, s32);
s32 sceIoOpen(const char *, s32, s32);
s32 sceIoRead(s32, void *, u32);
s32 sceIoRemove(const char *);
s32 sceIoWrite(s32, void *, u32);
s32 sceKernelCreateMutex(void *, u32, s32, void *);
s32 sceKernelCreateSema(const char *, s32, s32, s32, void *);
s32 sceKernelCreateVpl(const char *, s32, s32, s32, void *);
s32 sceKernelDeleteMutex(s32);
s32 sceKernelDeleteSema(s32);
s32 sceKernelDeleteVpl(s32);
s32 sceKernelFreeVpl(s32, void *);
s32 sceKernelLockMutex(s32, s32, void *);
s32 sceKernelPowerLock(s32);
s32 sceKernelPowerUnlock(s32);
s32 sceKernelReferVplStatus(s32, void *);
s32 sceKernelSignalSema(s32, s32);
s32 sceKernelTryAllocateVpl(s32, s32, void **);
s32 sceKernelWaitSema(s32, s32, void *);
s32 sceRegCloseCategory(s32 hd);
s32 sceRegCloseRegistry(s32 index);
s32 sceRegCreateKey(s32 hd, const char *name, s32 type, s32 size);
M2C_UNK sceRegExit();
s32 sceRegFlushCategory(s32 arg0);
s32 sceRegFlushRegistry(s32 arg0);
s32 sceRegGetKeyInfo(s32 hd, const char *name, s32 *keyId, s32 *type, u32 *size);
s32 sceRegGetKeyInfoByName(s32 hd, const char *name, s32 *type, u32 *size);
s32 sceRegGetKeyValue(s32 hd, s32 keyId, void *buf, s32 size);
s32 sceRegGetKeyValueByName(s32 hd, const char *name, void *buf, s32 size);
s32 sceRegInit(void);
s32 sceRegOpenCategory(s32 index, const char *path, s32 mode, s32 *hd);
s32 sceRegOpenRegistry(SceRegParam *param, s32 mode, s32 *handle);
s32 sceRegRemoveKey(s32 hd, const char *name);
s32 sceRegRemoveRegistry(SceRegParam *param);
s32 sceRegSetKeyValue(s32 hd, const char *name, const void *buf, s32 size);
s32 sprintf(char *, const char *, ...);
s32 strcmp(const char *, const char *);
u32 strlen(const char *);

#endif
