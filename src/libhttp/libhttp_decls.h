#ifndef LIBHTTP_DECLS_H
#define LIBHTTP_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_00005CD0_var_a0 {
    u8 pad0[0x7C];
    void *unk7C;
};

struct Unk_func_00005CD0_var_s1 {
    s32 unk0;
    void *unk4;
};

struct Unk_func_00011B3C_0 {
    u8 pad0[0x28];
    s32 unk28;
    s32 unk2C;
};

struct Unk_func_00011B3C_1 {
    u8 pad0[0x34];
    s32 unk34;
    s32 unk38;
};

extern s32 D_0000E0A0;
extern s32 D_0001A5C4;
extern s32 D_0001AA44;
extern s32 D_0001AB6C;
extern s32 D_0001AE08;
extern s32 D_0001AF9C;
extern s32 D_0001B0CC;
extern s32 D_0001B0E0;

s32 func_000031DC(s32 arg0);
s32 func_0000325C(s32);
s32 func_000032B0(s32);
s32 func_00003614(s32);
s32 func_00003668(s32);
s32 func_000043A0(s32);
s32 func_00005748(s32);
s32 func_00005778(s32 arg0);
s32 func_000057E4(s32);
s32 func_000057F8(s32);
s32 func_0000584C(s32);
s32 func_00005CAC(s32);
void func_00005CD0(void *arg0, void *arg1);
s32 func_00005D20(s32);
s32 func_00005EF4(s32);
s32 func_00006388(s32);
s32 func_00006B7C(s32, s32, s32, s32, s32);
s32 func_00009300(s32);
s32 func_0000992C(s32, s32, s32, s32, s32, s32);
void func_00009A38(void);
s32 func_00009ADC(void);
void func_00009DA0(void *arg0);
s32 func_00009E68(s32);
void func_0000A08C(s32 arg0);
s32 func_0000A0C0();
s32 func_0000A370(s32);
s32 func_0000A4B4(s32);
s32 func_0000A774(s32, s32, s32);
s32 func_0000A9B0(s32);
M2C_UNK func_0000AA9C(s32);
s32 func_0000AE54(s32);
s32 func_0000B2C0(s32);
void func_0000B560(void *arg0, void *arg1);
s32 func_0000C114(s32, s32, s32);
void func_0000CD48(void);
void func_0000CD64(void);
void func_0000CD80(void);
void func_0000CD9C(void);
void func_0000CDB8(void);
void func_0000CDD4(void);
void func_0000CDF0(void);
void func_0000CE0C(void);
void func_0000CE28(void);
void func_0000CE44(void);
void func_0000CE60(void);
s32 func_0000E568(void);
void func_00010A74(void);
void func_00011484(void);
void func_00011B3C(struct Unk_func_00011B3C_0 *arg0, struct Unk_func_00011B3C_1 *arg1);
s32 func_00013294(void);
s32 func_000132B0(void);
void func_00015428(void);
void func_00015444(void);
void func_00015460(void);
void func_0001547C(void);
void func_00015498(void);
void func_000154B4(void);
void func_000154D0(void);
void func_000154EC(void);
void func_00015508(void);
void func_00015524(void);
void func_00015540(void);
void func_00015A10(s32 arg0);
void func_00015A40(void);
s32 module_start(void);
s32 module_stop(void);
s32 sceHttpCreateConnectionWithURL(s32 arg0, void *arg1, s32 arg2);
void sceHttpCreateRequest(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 sceHttpCreateTemplate(void *arg0, s32 arg1, s32 arg2);
s32 sceHttpDeleteConnection(s32 arg0);
s32 sceHttpDeleteRequest(s32 arg0);
s32 sceHttpDeleteTemplate(s32 arg0);
M2C_UNK sceHttpStorage_B33389CE();
M2C_UNK sceHttpStorage_CDA3D8F6();
M2C_UNK sceKernelCpuResumeIntr();
M2C_UNK sceKernelCpuSuspendIntr();
M2C_UNK sceKernelUtilsMd5BlockInit();
M2C_UNK sceKernelUtilsMd5BlockResult();
M2C_UNK sceKernelUtilsMd5BlockUpdate();
M2C_UNK sceKernelUtilsMd5Digest();
M2C_UNK sceNetInetInetPton();
M2C_UNK sceNet_lib_57CC57DA(s32 *, M2C_UNK, M2C_UNK);
M2C_UNK sceRtcFormatRFC2822();
M2C_UNK sceRtcGetCurrentTick();
M2C_UNK sceRtcParseDateTime();
M2C_UNK sceRtcTickAddSeconds();

#endif
