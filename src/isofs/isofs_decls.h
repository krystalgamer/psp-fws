#ifndef ISOFS_DECLS_H
#define ISOFS_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_00007608_s {
    u8 pad0[0x1C];
    volatile s32 unk1C;
    volatile s32 unk20;
};

/* SCE assert: Kprintf(fmt, __FILE__, __FUNCTION__, __LINE__) */
#define ISOFS_ASSERT(cond, fmt, file, func, line) \
    do { \
        const char *_file = (file); \
        const char *_func = (func); \
        s32 _ok = (cond); \
        if (!_ok) { \
            Kprintf((fmt), _file, _func, (line)); \
            sceKernelAssert(_ok, 0); \
        } \
    } while (0)

/* per-version constant (assert line numbers) for the 1.x family: 1.00-1.03, 1.50/1.51, 1.52 */
#if FW_VERSION < 150
#define ISOFS_V(v100, v150, v152) (v100)
#elif FW_VERSION < 152
#define ISOFS_V(v100, v150, v152) (v150)
#else
#define ISOFS_V(v100, v150, v152) (v152)
#endif
/* same with 1.02/1.03 separate from 1.00 */
#define ISOFS_V4(v100, v102, v150, v152) ((FW_VERSION == 100) ? (v100) : ISOFS_V(v102, v150, v152))

/* ISO9660 recording date/time (7 bytes) */
typedef struct __attribute__((packed)) {
    u8 yearsSince1900;
    u8 month;
    u8 day;
    u8 hour;
    u8 minute;
    u8 second;
    s8 offset;
} IsoDirectoryDateTime;

/* ISO9660 directory record (both-endian fields: LSB first, MSB copy) */
typedef struct __attribute__((packed)) {
    u8 recLen; /* 0x0 */
    u8 earLen; /* 0x1 */
    u32 lbn; /* 0x2 */
    u32 lbnMsb; /* 0x6 */
    u32 size; /* 0xA */
    u32 sizeMsb; /* 0xE */
    IsoDirectoryDateTime dateTime; /* 0x12 */
    u8 flags; /* 0x19, 2 = directory */
    u8 fileUnitSize; /* 0x1A */
    u8 interleaveGap; /* 0x1B */
    u16 volSeqNum; /* 0x1C */
    u16 volSeqNumMsb; /* 0x1E */
    u8 nameLen; /* 0x20 */
    char name[0]; /* 0x21 */
} IsoDirectory;

/* ISO9660 path table record (L table) */
typedef struct __attribute__((packed)) {
    u8 nameLen; /* 0x0 */
    u8 earLen; /* 0x1 */
    u32 lbn; /* 0x2 */
    u16 parentNum; /* 0x6 */
    char name[0]; /* 0x8 */
} IsoPath;

/* sceBLKGetDeviceData() result kept in IsofsUnit.blkDev (only maxLbn known) */
typedef struct {
#if FW_VERSION == 100
    u8 unk0[0x854];
#else
    u8 unk0[0x858];
#endif
    u32 maxLbn;
} IsofsBlkDevData;

/* cache entry (0x30), 16 of them */
typedef struct {
    union {
        char umdId[32]; /* 0x0 */
        u32 umdIdW[8];
    };
    s8 used; /* 0x20 */
    s8 unk21;
    s16 refCount; /* 0x22 */
    u32 lbn; /* 0x24 */
    u32 size; /* 0x28 */
    void *memory; /* 0x2C */
} IsofsCacheEntry;
typedef char chk_IsofsCacheEntry[(sizeof(IsofsCacheEntry) == 0x30) ? 1 : -1];

/* open directory (iob->i_private for dopen) */
typedef struct {
    IsoDirectory *isoDir; /* 0x0 */
    void *paths; /* 0x4 */
    void *fplData; /* 0x8 */
} IsofsDir;

typedef s64 SceOff;
typedef int SceMode;
/* iofilemgr file descriptor block (1.00, 0x80) */
typedef struct SceIoIob {
    s32 i_flgs; /* 0x0 */
    s32 i_unit; /* 0x4 */
    void *i_de; /* 0x8 */
    s32 d_type; /* 0xC */
    void *i_private; /* 0x10 */
    void *i_cwd; /* 0x14 */
    SceOff i_fpos; /* 0x18 */
} SceIoIob;
typedef struct {
    u16 year;
    u16 month;
    u16 day;
    u16 hour;
    u16 minute;
    u16 second;
    u32 microsecond;
} ScePspDateTime;
/* iofilemgr stat (0x58) */
typedef struct {
    SceMode st_mode; /* 0x0 */
    u32 st_attr; /* 0x4 */
    SceOff st_size; /* 0x8 */
    ScePspDateTime st_ctime; /* 0x10 */
    ScePspDateTime st_atime; /* 0x20 */
    ScePspDateTime st_mtime; /* 0x30 */
    u32 st_private[6]; /* 0x40 */
} SceIoStat;
typedef struct IsofsFdw IsofsFdw;
typedef struct IsofsUnit IsofsUnit;
typedef struct IsofsFile IsofsFile;
/* list of file slots (0x24) */
typedef struct IsofsFd {
    u16 unk0;
    u16 filesCount; /* 0x2 */
    u32 idx; /* 0x4 */
    u32 unk8;
    u32 unkC;
    SceUID heapId; /* 0x10 */
    u32 unk14;
    IsofsFile *files; /* 0x18 */
    IsofsFdw *fdw; /* 0x1C */
    IsofsUnit *unit; /* 0x20 */
} IsofsFd;

/* "super block" (sceIsofsSb*) (0x2C) */
struct IsofsFdw {
    u32 idx; /* 0x0 */
    u32 unk4;
    IsofsFd fd; /* 0x8 */
};
typedef char chk_IsofsFdw[(sizeof(IsofsFdw) == 0x2C) ? 1 : -1];

/* open file slot (0x80) */
struct IsofsFile {
    u32 readFlags; /* 0x0 */
    u8 openFlags; /* 0x4, 3 = raw (sce_lbn), 2 = normal, 0 = free */
    s8 flags; /* 0x5 */
    s8 usedFlag; /* 0x6 */
    u8 unk7;
    u16 unk8;
    s16 unkA;
    u32 lbn; /* 0xC */
    u32 unk10;
    u32 unk14;
    SceOff size; /* 0x18 */
    SceOff fpos; /* 0x20 */
    ScePspDateTime dateTime; /* 0x28 */
    u32 unk38[4];
    ScePspDateTime dateTime2; /* 0x48 */
    SceIoIob *iob; /* 0x58 */
    IsofsFd *fd; /* 0x5C */
    char umdId[32]; /* 0x60 */
};
typedef char chk_IsofsFile[(sizeof(IsofsFile) == 0x80) ? 1 : -1];

/* global manager (1.00: 0x30) */
typedef struct {
    s32 maxUnits0; /* 0x0, setup arg 0 */
    s32 unk4;
    s32 unk8;
    s32 maxUnits; /* 0xC */
    s32 maxFiles; /* 0x10 */
    s32 fdwCount; /* 0x14 */
    SceUID semaId; /* 0x18 */
    s32 unk1C;
    SceUID heapId; /* 0x20 */
    SceUID fplId; /* 0x24, cache data fpl */
    s32 unk28;
    s32 driveType; /* 0x2C */
} IsofsMgr;
typedef char chk_IsofsMgr[(sizeof(IsofsMgr) == 0x30) ? 1 : -1];

/* one mounted ISO9660 unit ("layer", sceIsofsLb*) (1.00: 0xA4) */
struct IsofsUnit {
    char umdId[32]; /* 0x0 */
    char blockDev[32]; /* 0x20 */
    SceUID heapId; /* 0x40 */
    u16 unk44;
    s16 unk46;
    s16 unitNum; /* 0x48 */
    u16 unk4A;
    u16 mountFlags; /* 0x4C */
    u16 pathTableEntryCount; /* 0x4E */
    u8 fdwCount; /* 0x50 */
    u8 unk51;
    u16 mountState; /* 0x52 */
    u32 pathTableSize; /* 0x54 */
    SceUID semaId; /* 0x58 */
    u32 pathTableLbn; /* 0x5C */
    u32 rootDirLbn; /* 0x60 */
    u32 rootDirSize; /* 0x64 */
    u32 unkNextLbn; /* 0x68 */
    u32 lastLbn; /* 0x6C */
    u32 unkLbnTillEnd; /* 0x70 */
    u32 totalSectors; /* 0x74 */
    u32 unkCurrentLbn; /* 0x78 */
    u32 unk7C;
    u32 unk80;
    u32 unk84;
    u32 unk88;
    u32 unk8C;
    u32 unk90;
    void *paths; /* 0x94 */
    IsofsFdw *fdw; /* 0x98 */
    void *pathTable; /* 0x9C */
    IsofsBlkDevData *blkDev; /* 0xA0, sceBLKGetDeviceData() */
};
typedef char chk_IsofsUnit[(sizeof(IsofsUnit) == 0xA4) ? 1 : -1];

struct Unk_func_00000440_0 {
    u8 pad0[0x40];
    s32 unk40;
    u8 pad44[0xC];
    u8 unk50;
    u8 pad51[0x47];
    s32 unk98;
};

struct Unk_func_000004E4_0 {
    u8 pad0[0x98];
    s32 unk98;
};

struct Unk_func_00002364_0 {
    s8 unk0;
    s8 unk1;
};

struct Unk_func_00003BB4_0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x8];
    s32 unk10;
};

struct Unk_func_00003BB4_temp_v0 {
    u8 pad0[0x58];
    s32 unk58;
};

extern s32 D_00005A00;
extern s32 D_00005A04;
extern char D_00005F30[];
extern char D_00005F38[];
extern s32 D_00005F98;
extern char D_00005FCC[];
extern char D_00005FE0[];
extern char D_00006070[];
extern char D_000061C8[];
extern char D_00006200[];
extern char D_00006224[];
extern s32 D_000065C0;
extern s32 D_000065C4;
extern s32 D_000067C4;
extern struct D_00007608_s D_00007608;
extern s32 D_00007B40;
extern char D_000084D8[];
extern s32 D_00008A90;
extern s32 D_00009AC0;
extern s32 D_00009B00;
extern s32 D_00009B40;
extern s32 D_00009B80;
extern s32 D_00009BC0;
extern s32 D_00009C00;
extern s32 D_00009C70;
extern u8 D_00009C81;
extern u8 D_00009C82;
extern u8 D_00009C83;
extern u8 D_00009C84;
extern u16 D_00009C86;
extern s32 D_00009C8C;
extern s32 func_00004614;
extern M2C_UNK func_000048CC;
extern M2C_UNK func_000073FC;
extern IsofsCacheEntry *g_isofsCache;
extern IsofsMgr g_isofsMgr;
extern IsofsUnit *g_isofsUnits;

s32 Kprintf(const char *fmt, ...);
s32 SysMemForKernel_7B749390(SceUID heapId, void *p);
s32 func_000001B8(void);
s32 func_00000250(s32 arg0);
s32 func_000003C8(IsofsUnit *unit, u32 lbn);
s32 func_00000440(struct Unk_func_00000440_0 *arg0);
s32 func_00000494(IsofsUnit *unit, s32 count);
s32 func_000004E4(struct Unk_func_000004E4_0 *arg0, s32 arg1);
s32 func_00000620(void);
s32 func_0000065C(s32);
s32 func_000006EC(void);
s32 func_00000790(s32);
void func_000007FC(IsofsFdw *fdw, s32 count);
s32 func_00000D28(void);
s32 func_00000DA8(IsofsFile *file);
s32 func_00000DB4(const char *umdId, u32 lbn, u32 size);
s32 func_00000E6C(void);
s32 func_00000EBC(IsofsFdw *fdw, u32 idx, s32 filesCount);
s32 func_00001A4C(void *arg0);
s32 func_00001B0C(const char *path, s32 flag);
s32 func_00001C5C(const char *path);
void func_00002328(void);
void func_00002364(struct Unk_func_00002364_0 *arg0);
s32 func_00002374(void *arg0);
s32 func_00002D7C(void);
s32 func_00003A24(IsofsUnit *unit, u32 lbn, void *buf);
void func_00003AE8(void *arg0);
s32 func_00003BB4(struct Unk_func_00003BB4_0 *arg0);
s32 func_00004024(IsofsUnit *unit, s32 unitNum);
s32 func_00004064(s32 arg0);
s32 func_00004DB0(void);
s32 func_00004E30(s32);
s32 func_00004F08(void);
s32 func_00004F74(void);
void func_00004FC4(void);
s32 func_00004FE8(void);
s32 func_00004FF4(void);
s32 func_00005000(void);
s32 func_0000500C(void);
s32 func_00005018(void);
u8 func_00005024(void);
u8 func_00005030(void);
s32 func_0000503C(void);
u16 func_00005048(void);
u8 func_00005054(void);
u8 func_00005060(void);
s32 func_0000506C(u32 arg0);
void func_000050CC(void *arg0);
s32 func_000054D4(s32 arg0);
s32 func_00005908(void *arg0);
s32 func_00005970(s32 arg0);
s32 func_000059DC(void);
s32 func_00005E10(void);
void func_00005E1C(s32 arg0, void *arg1, u32 arg2);
s32 func_0000664C(s32 arg0);
s32 func_00006720(s32 arg0);
s32 func_0000770C(void);
s32 func_00007718(void);
s32 func_00007724(void);
s32 func_00007730(void);
s32 func_0000773C(void);
s32 func_00007748(void);
s32 func_00007ED8(SceIoIob *iob, s32 cmd, void *indata, SceSize inlen, void *outdata, SceSize outlen);
s32 func_00007FC0(s32 arg0);
s32 func_00007FF0(void);
IsofsMgr *isofsGetMgr(void);
IsoDirectory *isofsReadIsoDir(IsofsUnit *unit, char *path, char *name, s32 flag, s32 *outRet);
s32 isofs_chdir(SceIoIob *iob, char *path);
s32 isofs_close(SceIoIob *iob);
s32 isofs_dclose(SceIoIob *iob);
s32 isofs_devctl(SceIoIob *iob, char *dev, s32 cmd, void *indata, SceSize inlen, void *outdata, SceSize outlen);
s32 isofs_exec_ioctl_cmd(SceIoIob *iob, s32 cmd, void *indata, SceSize inlen, void *outdata, SceSize outlen);
s32 isofs_exit(void *entry);
s32 isofs_getstat(SceIoIob *iob, char *path, SceIoStat *stat);
s32 isofs_ioctl(SceIoIob *iob, s32 cmd, void *indata, SceSize inlen, void *outdata, SceSize outlen);
SceOff isofs_lseek(SceIoIob *iob, SceOff ofs, s32 whence);
s32 isofs_open(SceIoIob *iob, char *path, s32 flags, SceMode mode);
s32 isofs_read(SceIoIob *iob, void *buf, SceSize size);
s32 isofs_release_blkdev(void *blkDev, s32 unitNum);
SceOff isofs_set_lseek(IsofsFile *file, SceOff ofs, s32 whence);
s32 isofs_setup_manager(s32 arg0, s32 maxUnits, s32 maxFiles, s32 fdwCount);
s32 isofs_umount(SceIoIob *iob);
s32 memcmp(const void *a, const void *b, SceSize n);
void *memcpy(void *dst, const void *src, SceSize n);
void *memset(void *s, s32 c, SceSize n);
s32 sceBLKInvalidateDeviceName(const char *name);
s32 sceIoDevctl(const char *dev, u32 cmd, void *indata, SceSize inlen, void *outdata, SceSize outlen);
s32 sceIsofsCheckVFile(const char *path, u32 *outLbn, u32 *outSize);
IsofsFile *sceIsofsFileAllocNfile(IsofsUnit *unit, SceIoIob *iob, IsoDirectory *dir, s32 *outRet);
IsofsFile *sceIsofsFileAllocVfile(IsofsUnit *unit, SceIoIob *iob, u32 lbn, u32 size, s32 *outRet);
s32 sceIsofsFileInit(IsofsFd *fd, s32 filesCount);
s32 sceIsofsFileTerm(IsofsFile *files);
IsofsUnit *sceIsofsGetFileSystem(s32 unitNum);
s32 sceIsofsLbInit(IsofsUnit *unit, s32 count, s32 filesCount);
void sceIsofsLbTerm(IsofsUnit *unit);
s32 sceIsofsReadFile(const char *blockDev, IsofsFile *file, void *buf, SceSize size, u32 *args);
void sceIsofsSbTerm(IsofsFd *fd);
void *sceKernelAllocHeapMemory(SceUID heapId, SceSize size);
void sceKernelAssert(s32 ok, s32 lvl);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
SceUID sceKernelCreateFpl(const char *name, s32 part, s32 attr, SceSize size, SceSize blocks, void *opt);
SceUID sceKernelCreateHeap(s32 partId, SceSize size, s32 attr, const char *name);
s32 sceKernelDeleteFpl(s32);
s32 sceKernelDeleteHeap(SceUID heapId);
s32 sceKernelDeleteSema(SceUID semaId);
s32 sceKernelFreeFpl(SceUID fplId, void *data);
s32 sceKernelSignalSema(SceUID semaId, s32 count);
s32 sceKernelWaitSema(SceUID semaId, s32 count, u32 *timeout);
u32 sceUmd9660_driver_2C6C3F4C();
s32 sceUmd9660_driver_44EF600C();
s32 sceUmd9660_driver_C7CD9CE8();
M2C_UNK sceUmd9660_driver_DB1AC979(s32);
s32 sceUmdManRegisterInsertEjectUMDCallBack(M2C_UNK, M2C_UNK *, s32);
M2C_UNK sceUmdManUnRegisterInsertEjectUMDCallBack(M2C_UNK);
s32 sceUmdRegisterInsertEjectUMDCallBack(M2C_UNK *, s32);
M2C_UNK sceUmdUnRegisterInsertEjectUMDCallBack(s32);
char *strchr(const char *s, s32 c);
s32 strcmp(const char *a, const char *b);
SceSize strlen(const char *s);
s32 strncmp(const char *a, const char *b, SceSize n);
char *strrchr(const char *s, s32 c);
s32 strtol(const char *s, char **end, s32 base);

#endif
