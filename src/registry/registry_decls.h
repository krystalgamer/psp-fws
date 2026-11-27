#ifndef REGISTRY_DECLS_H
#define REGISTRY_DECLS_H

#include "common.h"
#include "m2c_macros.h"

typedef struct {
    s32 count;
    struct {
        u16 start;
        u16 num;
    } runs[];
} SceRegBlockRuns;

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
    u16 unk0;               /* 0x00 */
    u32 unk2;               /* 0x02 */
    u32 unk6;               /* 0x06 */
    u8 unkA[4];             /* 0x0A */
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
extern s32 D_00007050;
extern s32 D_0000706C;
extern s32 D_00007070;
extern s32 g_catCount;
extern SceRegCatNode *g_catHead;
extern SceRegCatNode *g_catTail;
extern s32 g_hiveCount;
extern SceRegHive *g_hiveHead;
extern SceRegHive *g_hiveTail;
extern s32 g_semaId;
extern s32 g_vplId;
extern s32 g_vplMaxUsed;

s32 func_000006CC(s32);
s32 func_000008E4(s32);
SceRegHive *func_00000B6C(s32 index);
s32 func_00000CA0(u32 *regType, SceRegHive **hive, s32 *index);
void func_00000D7C(SceRegHive *h);
s32 func_00001730(s32 arg0, s32 *arg1);
s32 func_00001828(const char *name, u32 *size);
s32 func_00001874(s32 arg0, s32 *arg1);
void func_00001908(s32 type, const char **ireg, const char **dreg);
void func_00001938(SceRegIregHeader *hdr);
void func_00001A44(s32 arg0, M2C_UNK **arg1, M2C_UNK **arg2);
void func_00001AC4(SceRegBlockRuns *runs, u16 *blocks);
void func_00001B7C(SceRegBlockRuns *runs, u16 start, u16 num);
void func_000039E0(SceRegIndexEntry *e);
s32 func_00003A3C(s32 index);
s32 func_00003A80(SceRegIndexEntry *cat);
void func_00003D1C(s32 hive, SceRegIndexEntry *cat);
SceRegIndexEntry *func_00003E60(SceRegIndexEntry *cat);
SceRegCatNode *func_00003EA4(SceRegIndexEntry *cat);
s32 func_00003EE8(s32 index);
s32 func_00004024(SceRegIndexEntry *cat);
s32 func_00004058(SceRegIndexEntry *cat);
s32 func_000046A8(s32, s32);
s32 func_00004A28(s32, s32, s32, s32, s32);
s32 func_00005F54(s32 arg0);
s32 func_00005F78(const char *name);
s32 func_000061B4(s32 arg0);
void func_00006228(void);
void func_000062E0(void *ptr);
s32 func_00006524(const char *name);
s32 func_000065E4(const char *name);
s32 func_00006674(s32 arg0);
s32 func_000067A0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4);
s32 func_00006828(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4);
s32 func_00006888(s32 fd, s32 offset, s32 whence);
s32 func_000068EC(const char *name, u64 *size);
s32 func_00006998(s32 arg0);
s32 func_000069A0(s32 arg0, s32 size);
void func_00006A0C(void);
void *func_00006A48(s32 size);
void func_00006AC0(void *ptr);
s32 func_00006EF0(s32 arg0);
void *memset(void *, s32, u32);
s32 module_reboot_before(void);
s32 module_reboot_phase(s32 arg0);
s32 sceIoClose(s32);
s32 sceIoDevctl(void *, s32, void *, u32, void *, u32);
s32 sceIoGetstat(const char *, void *);
s64 sceIoLseek(s32, s64, s32);
s32 sceIoOpen(const char *, s32, s32);
s32 sceIoRead(s32, void *, u32);
s32 sceIoRemove(const char *);
s32 sceIoWrite(s32, void *, u32);
s32 sceKernelCreateMutex(void *, u32, s32, void *);
s32 sceKernelCreateVpl(const char *, s32, s32, s32, void *);
s32 sceKernelDeleteMutex(s32);
s32 sceKernelDeleteVpl(s32);
s32 sceKernelFreeVpl(s32, void *);
s32 sceKernelLockMutex(s32, s32, void *);
s32 sceKernelReferVplStatus(s32, void *);
s32 sceKernelSignalSema(s32, s32);
s32 sceKernelTryAllocateVpl(s32, s32, void **);
s32 sceKernelWaitSema(s32, s32, void *);
M2C_UNK sceRegExit();
s32 sceRegFlushCategory(s32 arg0);
s32 sceRegFlushRegistry(s32 arg0);
s32 sceRegGetKeyInfo(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 sceRegGetKeyInfoByName(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 sceRegInit(void);
s32 sceRegRemoveKey(s32 arg0, s32 arg1);
s32 sprintf(char *, const char *, ...);

#endif
