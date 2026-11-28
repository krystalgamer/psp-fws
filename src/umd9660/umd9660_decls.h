#ifndef UMD9660_DECLS_H
#define UMD9660_DECLS_H

#include "common.h"
#include "m2c_macros.h"

typedef s64 SceOff;
typedef int SceMode;

/* iofilemgr file descriptor block (first 0x20 bytes) */
typedef struct SceIoIob {
    s32 i_flgs; /* 0x0 */
    s32 i_unit; /* 0x4 */
    void *i_de; /* 0x8 */
    s32 d_type; /* 0xC */
    void *i_private; /* 0x10 */
    void *i_cwd; /* 0x14 */
    SceOff i_fpos; /* 0x18 */
} SceIoIob;

/* sceBLKRegister operations (g_umd9660BlkOps[2], 0x88 bytes) */
typedef struct {
    u32 attr; /* 0x00: 0x80000003 */
    s32 (*open)(void *, void *, s32 *); /* 0x04 */
    s32 (*sync)(void); /* 0x08 */
    void *unkC[0x1D]; /* 0x0C */
    s32 (*close)(void *, void *, s32 *); /* 0x80 */
    void *gp; /* 0x84 */
} SceUmd9660BlkOps;

/* copy of the umdman disc info (sceUmdMan_driver_E192C10A() + 0x64); 1.00: 0x24 bytes, 1.02+: 0x28 */
typedef struct {
    u8 unk0; /* 0x0 */
    u8 unk1; /* 0x1 */
    u8 unk2; /* 0x2 */
    u8 unk3; /* 0x3 */
#if FW_VERSION == 100
    u16 unk4; /* 0x4 */
    u16 unk6; /* 0x6 */
#else
    u32 unk4; /* 0x4 */
    u32 unk6; /* 0x8 */
#endif
    u8 unk8[0x10]; /* 0x8 (1.02+: 0xC) */
    u32 maxLbn; /* 0x18 (1.02+: 0x1C) */
    u32 unk1C; /* 0x1C */
    u32 numSectors; /* 0x20 (1.02+: 0x24) */
} SceUmd9660DiscInfo;
#if FW_VERSION == 100
typedef char chk_SceUmd9660DiscInfo[(sizeof(SceUmd9660DiscInfo) == 0x24) ? 1 : -1];
#else
typedef char chk_SceUmd9660DiscInfo[(sizeof(SceUmd9660DiscInfo) == 0x28) ? 1 : -1];
#endif

/* one per unit (g_umd9660Drives[2], 0x864 bytes in 1.00, 0x868 in 1.02+); the sceBLK device data */
typedef struct {
    u8 sectorBuf[0x800]; /* 0x000 */
    char name[0x20]; /* 0x800: "umd%01x:" (sceBLKRegister name) */
    SceUID semaId; /* 0x820 */
    s32 unk824[3]; /* 0x824 */
    s32 unk830[3]; /* 0x830: [2] = BLK open count */
    SceUmd9660DiscInfo disc; /* 0x83C */
    struct SceUmdDrive *umdDrive; /* 0x860 (1.02+: 0x864) */
} SceUmd9660Drive;
typedef char chk_SceUmd9660Drive[(sizeof(SceUmd9660Drive) == ((FW_VERSION == 100) ? 0x864 : 0x868)) ? 1 : -1];

/* umd9660_exec_devctl arguments for sceKernelExtendKernelStack */
typedef struct {
    SceIoIob *iob; /* 0x00 */
    s32 cmd; /* 0x04 */
    SceSize inlen; /* 0x08 */
    SceSize outlen; /* 0x0C */
    const char *name; /* 0x10 */
    void *indata; /* 0x14 */
    void *outdata; /* 0x18 */
    SceUmd9660Drive *drive; /* 0x1C */
} SceUmd9660DevctlArgs;

/* open file (g_umd9660Files[maxFiles], 0x60 bytes) */
typedef struct {
    u64 pos; /* 0x00: current sector */
    char devName[0x20]; /* 0x08 */
    char path[0x20]; /* 0x28 */
    s32 state; /* 0x48: 1 = free, 0x80 = allocated */
    s32 mode; /* 0x4C: (flags >> 16) & 0xF */
    u32 numSectors; /* 0x50 */
    u32 size; /* 0x54: numSectors * 0x800 */
    SceIoIob *iob; /* 0x58 */
    SceUmd9660Drive *drive; /* 0x5C */
} SceUmd9660File;
typedef char chk_SceUmd9660File[(sizeof(SceUmd9660File) == 0x60) ? 1 : -1];

/* g_umd9660Mgr */
typedef struct {
    SceUID semaId; /* 0x00: "SceUmd9660Mgr" */
    u32 unk4; /* 0x04 */
    u32 unk8; /* 0x08 */
    u32 unkC; /* 0x0C */
    u32 unk10; /* 0x10 */
    s32 maxFiles; /* 0x14 */
    SceUID heapId; /* 0x18 */
} SceUmd9660Mgr;

/* sceUmdGetDiscInfo result */
typedef struct {
    u32 size; /* 0x0 */
    u32 type; /* 0x4 */
    u32 unk8; /* 0x8 */
} SceUmdDiscInfo;

/* umdman drive (sceUmdManGetUmdDrive), only the fields umd9660 touches */
typedef struct SceUmdDrive {
    struct { s8 driveId; } *ataDrive; /* 0x00 */
    u8 pad4[0x24];
    s32 unk28; /* 0x28 */
    s32 unk2C; /* 0x2C */
    s32 unk30; /* 0x30 */
    s32 unk34; /* 0x34 */
    s32 unk38; /* 0x38 */
    s32 unk3C; /* 0x3C */
} SceUmdDrive;

/* umdman read request (1.00: uOFW LbnParams without unk20) */
typedef struct {
    u32 unk0;
    u32 cmd;
    u32 lbn;
    u32 lbnSize;
    u32 size;
    u32 byteSizeMiddle;
    u32 byteSizeFirst;
    u32 byteSizeLast;
} SceUmdLbnParam;

/* SCE assert: Kprintf(fmt, __FILE__, __FUNCTION__, __LINE__) */
#define UMD9660_ASSERT(cond, fmt, file, func, line) \
    do { \
        const char *_file = (file); \
        const char *_func = (func); \
        s32 _ok = (cond); \
        if (!_ok) { \
            Kprintf((fmt), _file, _func, (line)); \
            sceKernelAssert(_ok, 0); \
        } \
    } while (0)

/* per-version constant (assert line numbers) for 1.00, 1.02, 1.03, 1.50/1.51, 1.52 */
#if FW_VERSION == 100
#define UMD9660_V(v100, v102, v103, v150, v152) (v100)
#elif FW_VERSION == 102
#define UMD9660_V(v100, v102, v103, v150, v152) (v102)
#elif FW_VERSION == 103
#define UMD9660_V(v100, v102, v103, v150, v152) (v103)
#elif FW_VERSION < 152
#define UMD9660_V(v100, v102, v103, v150, v152) (v150)
#else
#define UMD9660_V(v100, v102, v103, v150, v152) (v152)
#endif

struct Unk_Unk_func_00003FF0_0_64 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00003FF0_0 {
    u8 pad0[0x64];
    struct Unk_Unk_func_00003FF0_0_64 *unk64;
};

struct Unk_func_00003FFC_0 {
    u8 pad0[0x64];
    s32 unk64;
};

struct Unk_func_00004164_0 {
    u8 pad0[0x64];
    s32 unk64;
};

struct Unk_ret_sceUmdMan_driver_E192C10A {
    u8 pad0[0x64];
    u8 unk64; /* 0x64 */
    u8 unk65; /* 0x65 */
    u8 unk66; /* 0x66 */
    u8 unk67; /* 0x67 */
    u8 unk68; /* 0x68 */
    u32 unk6C; /* 0x6C */
    u32 unk70; /* 0x70 */
    s32 unk74; /* 0x74 */
};

extern char D_00005A70[];
extern char D_00005AD0[];
extern char D_00005AF0[];
extern char D_00005AFC[];
extern M2C_UNK D_00005C80;
extern M2C_UNK D_00005C88;
extern M2C_UNK D_00005CA0;
extern M2C_UNK D_00005D38;
extern s32 D_00005D80;
extern SceUmd9660Mgr D_00005D90;
extern SceUmd9660Drive D_00005DC0[2];
extern s32 D_00006318;
extern s32 D_00006CC0;
extern SceUmd9660BlkOps D_00006EC0[2];
extern SceUmd9660File D_00007000[8];
extern u8 D_000070B0;
extern u8 D_000070B1;
extern u8 D_000070B2;
extern u8 D_000070B3;
extern s32 D_000070B8;
extern s32 D_000070BC;
extern s32 D_000070C0;
extern s32 D_000070CC;
extern s32 D_000070D0;
extern s32 D_000070D4;
extern s32 D_000070D8;
extern s32 D_00007690;
extern s32 D_00007A50;
extern u8 D_000083A4;
extern u8 D_000083A5;
extern u8 D_000083A6;
extern u8 D_000083A7;
extern u8 D_000083A8;
extern s32 D_000083AC;
extern s32 D_000083B0;
extern s32 D_000083C0;
extern s32 D_000083D0;
extern s32 D_00008CA0;
extern s32 D_00008CB0;
extern M2C_UNK func_000036D8;

s32 Kprintf(const char *fmt, ...);
s32 func_00000964(s32 arg0);
s32 func_00000984(s32 arg0);
s32 func_000009BC(s32 arg0);
s32 func_00000B34(s32 arg0);
s32 func_00000B48(s32 arg0);
s32 func_000013F4(SceUmd9660DevctlArgs *args);
M2C_UNK *func_000019D0(void);
s32 func_00001D6C(void);
s32 func_00001D78(void);
s32 func_00001DD0(void);
s32 func_00001DDC(void);
s32 func_00001DE8(void);
s32 func_00001DF4(void);
s32 func_00001E00(void);
s32 func_00001E0C(void);
s32 func_00001E18(void);
s32 func_00001E24(void);
SceOff func_00001E30(SceUmd9660File *file, SceOff ofs, s32 whence);
void func_000022E8(void);
SceUmd9660Mgr *func_000026E4(void);
SceUmd9660File *func_00002910(SceIoIob *iob);
s32 func_00002974(SceUmd9660Drive *drive, void *buf, SceSize size, SceUmdLbnParam *param);
s32 func_000029FC(SceUmd9660Drive *drive, void *buf, SceSize size, s32 arg3, SceUmdLbnParam *param);
s32 func_000036D0(s32 arg0);
s32 func_00003A58(void);
s32 func_00003BFC(void);
M2C_UNK *func_00003C04(void);
s32 func_00003C80(s32 arg0);
s32 func_00003D24(s32);
s32 func_00003D28(SceIoIob *iob);
s32 func_00003F70(void);
s32 func_00003F7C(const char *name);
void func_00003FAC(void);
void func_00003FD4(void);
s32 func_00003FF0(struct Unk_func_00003FF0_0 *arg0);
s32 func_00003FFC(struct Unk_func_00003FFC_0 *arg0);
s32 func_00004024(void *arg0);
s32 func_00004064(void *arg0);
s32 func_000040A4(void *arg0);
s32 func_000040E4(void *arg0);
s32 func_00004124(void *arg0, s32 arg1);
s32 func_00004148(s32 *arg0);
s32 func_00004164(struct Unk_func_00004164_0 *arg0);
s32 func_0000420C(void);
s32 func_00004250(SceUmdDiscInfo *info);
s32 func_00004264(s32 *arg0);
s32 func_00004300(s32);
s32 func_00004308(void);
void func_00004330(void);
s32 func_0000434C(void *arg0);
s32 func_00004358(void *arg0);
s32 func_000043DC(void);
s32 func_000043FC(void);
M2C_UNK *func_00004404(void);
s32 func_000044C0(void *arg0);
s32 func_00004544(SceIoIob *iob);
s32 func_00004568(void);
void func_000046C4(void);
s32 func_00004ADC(void *arg0);
s32 func_00004B30(void *arg0);
s32 func_00004B84(void *arg0);
s32 func_00004BD8(void *arg0);
s32 func_00004C2C(void *arg0, s32 arg1);
void func_00004E14(void);
void func_00004E20(void);
void func_00005334(s32 arg0);
s32 func_00005340(void);
u8 func_00005358(void);
u8 func_00005364(void);
u8 func_00005370(void);
u8 func_0000537C(void);
u8 func_000053B4(void);
s32 func_000053B8(void);
u8 func_000053CC(void);
u8 func_000053D8(void);
u8 func_000053E4(void);
u8 func_000053F0(void);
u32 func_00005420(s32 arg0);
void func_00005B20(s32 arg0);
void func_00005B2C(s32 arg0);
void *memcpy(void *dst, const void *src, SceSize n);
void *memset(void *dst, s32 c, SceSize n);
s32 module_start(void);
s32 sceAtaIsDvdDrive(void);
M2C_UNK sceIoAddDrv(M2C_UNK *);
void sceKernelAssert(s32 ok, s32 lvl);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelDipsw(M2C_UNK);
u32 sceKernelDipswAll(void);
SceUmd9660Drive *sceUmd9660GetDrive(s32 unit);
s32 sceUmd9660Init(void);
s32 sceUmd9660Term(void);
s32 sceUmd9660_driver_2C6C3F4C(void);
s32 sceUmd9660_driver_3C150E0D(void);
s32 sceUmd9660_driver_44EF600C(void);
s32 sceUmd9660_driver_B23266CA(void);
s32 sceUmd9660_driver_C7CD9CE8(void);
s32 sceUmd9660_driver_CAAFFE8D(void);
s32 sceUmd9660_driver_F42C0AEE(void);
s32 sceUmdManGetDiscInfo(SceUmdDiscInfo *info);
s32 sceUmdManGetDiscInfo4VSH(SceUmdDiscInfo *info);
s32 sceUmdManGetInquiry(SceUmdDrive *umd, s32 size, void *buf);
s32 sceUmdManGetIntrStateFlag();
s32 sceUmdManIsDvdDrive();
s32 sceUmdManSetCachedRead(s32);
s32 sceUmdManSetDisableReadAhead(s32);
s32 sceUmdManSetEnableReadAhead(s32);
s32 sceUmdManSetReadAheadSize(s32);
s32 sceUmdManSetUnCachedRead(s32);
M2C_UNK sceUmdManSignalSema();
s32 sceUmdManValidateUMD(s32, s32);
M2C_UNK sceUmdManWaitSema();
s32 sceUmdMan_driver_85AEA6C5();
struct Unk_ret_sceUmdMan_driver_E192C10A *sceUmdMan_driver_E192C10A();
M2C_UNK sceUmdRegisterGetUMDInfoCallBack(M2C_UNK *, M2C_UNK *);
M2C_UNK sceUmdUnRegisterGetUMDInfoCallBack();
s32 sprintf(char *buf, const char *fmt, ...);
SceSize strlen(const char *s);

#endif
