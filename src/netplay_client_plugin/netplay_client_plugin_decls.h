#ifndef NETPLAY_CLIENT_PLUGIN_DECLS_H
#define NETPLAY_CLIENT_PLUGIN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_00004BA8_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00004BB8_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000051AC_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000051B4_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_000051BC_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_000051C4_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_000051CC_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_000051D4_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_000051DC_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00005208_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00005224_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00005240_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00006CF4_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00006D04_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00006E54_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

extern M2C_UNK D_0000E0B0;
extern M2C_UNK D_0000E0C4;
extern M2C_UNK D_0000E140;
extern M2C_UNK D_0000E158;
extern M2C_UNK D_0000E8CC;
extern u8 D_0000E904;
extern s32 D_0000E90C;
extern s32 D_0000EAD0;
extern s32 D_0000EAD4;
extern s32 D_0000EB00;
extern s32 D_0000EB04;
extern s32 D_0000EB08;

u8 func_000001D4(void);
M2C_UNK func_000003B4(M2C_UNK, M2C_UNK);
void func_00000440(void);
void func_00000460(void);
s32 func_00000480(s32);
s32 func_0000052C(s32, s32);
M2C_UNK func_00000588();
void func_0000083C(s32 arg0);
void func_000008D0(void);
void func_00000BAC(void);
void func_00000C50(void);
void func_00002210(void);
void func_000023F8(void);
s32 func_0000260C(void);
void func_0000262C(void);
void func_00002998(void);
void func_000029A0(void);
void func_00002C70(void);
void func_00002F04(void);
void func_000035E8(void);
void func_000036D8(void);
void func_000036E0(void);
void func_000039C0(void);
M2C_UNK func_00003A28(M2C_UNK, M2C_UNK);
void func_00003B20(void);
void func_00003B40(void);
void func_00003C3C(void);
s32 func_00003E08(s32);
M2C_UNK func_00004338();
void func_00004BA8(struct Unk_func_00004BA8_0 *arg0);
void func_00004BB8(struct Unk_func_00004BB8_0 *arg0);
M2C_UNK func_00004D5C(M2C_UNK);
void func_00004DA0(void);
void func_00005118(void);
void func_00005134(void);
s32 func_00005150(s32);
s32 func_000051AC(struct Unk_func_000051AC_0 *arg0);
s32 func_000051B4(struct Unk_func_000051B4_0 *arg0);
s32 func_000051BC(struct Unk_func_000051BC_0 *arg0);
s32 func_000051C4(struct Unk_func_000051C4_0 *arg0);
s32 func_000051CC(struct Unk_func_000051CC_0 *arg0);
s32 func_000051D4(struct Unk_func_000051D4_0 *arg0);
s32 func_000051DC(struct Unk_func_000051DC_0 *arg0);
void func_00005208(struct Unk_func_00005208_0 *arg0);
void func_00005224(struct Unk_func_00005224_0 *arg0);
void func_00005240(struct Unk_func_00005240_0 *arg0);
s32 func_000052C0(void);
s32 func_0000535C(void);
s32 func_0000544C(void);
s32 func_00005748(void);
void func_00005930(void);
M2C_UNK func_0000594C();
void func_00006060(void);
s32 func_0000638C(void);
void func_0000641C(void);
s32 func_000064A8(void);
s32 func_000068C0(s32 arg0);
M2C_UNK func_000069EC();
M2C_UNK func_00006A80();
void func_00006AA0(void *arg0);
void func_00006CF4(struct Unk_func_00006CF4_0 *arg0);
void func_00006D04(struct Unk_func_00006D04_0 *arg0, s32 arg1);
M2C_UNK func_00006D38(void *);
void func_00006E54(struct Unk_func_00006E54_0 *arg0);
s32 func_00006EC8(s32, s32);
M2C_UNK func_0000D368();
s32 module_stop(void);
M2C_UNK sceKernelPowerTick(M2C_UNK);
s32 sceKernelStopModule(s32, u32, void *, void *, void *);
s32 sceKernelUnloadModule(s32);
s32 sceNetAdhocDownload_314ED31E(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK sceNetAdhocDownload_469F6B83();
s32 sceNetAdhocDownload_8A5500E0();
M2C_UNK sceNetAdhocMatchingTerm();
s32 sceNetAdhocTerm(void);
M2C_UNK sceNetAdhocctlDelHandler(s32);
M2C_UNK sceNetAdhocctlDisconnect();
M2C_UNK sceNetAdhocctlTerm();
M2C_UNK sceNetTerm();
M2C_UNK scePaf_27F64616(s32);
M2C_UNK scePaf_3481F595(s32);
M2C_UNK scePaf_CAF05F1D(s32);
M2C_UNK scePaf_DAB59652(s32);
M2C_UNK sceVshCommonGui_54BC644C(void *, s32);
s32 sceVshCommonGui_DBEE94DC();

#endif
