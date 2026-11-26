#ifndef LICENSE_PLUGIN_DECLS_H
#define LICENSE_PLUGIN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_00005468_1 {
    u8 pad0[0x4];
    u16 unk4;
    u8 pad6[0x6];
    s32 unkC;
};

struct Unk_func_000067B0_var_a0 {
    u8 pad0[0x4];
    struct Unk_func_000067B0_var_v0 *unk4;
};

struct Unk_func_000067B0_var_v0 {
    u8 pad0[0x4];
    void *unk4;
};

struct Unk_func_00006808_0 {
    M2C_UNK *unk0;
    s32 unk4;
};

struct Unk_func_00006808_var_v0 {
    u8 pad0[0x4];
    void *unk4;
};

struct Unk_func_00006864_1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00006864_temp_v1 {
    void *unk0;
    void **unk4;
};

struct Unk_func_000071B4_0 {
    u8 pad0[0x30];
    s32 unk30;
};

struct Unk_func_000072A0_0 {
    u8 pad0[0x30];
    s32 unk30;
};

struct Unk_func_000072C0_0 {
    u8 pad0[0x30];
    s32 unk30;
};

struct Unk_func_000076F8_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00007700_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00007708_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00007710_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_00007718_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_00007720_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_00007728_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00007754_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00007770_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0000778C_0 {
    u8 pad0[0x4];
    s32 unk4;
};

extern M2C_UNK D_0000F498;
extern M2C_UNK D_0000F890;
extern M2C_UNK D_0000FEAC;
extern M2C_UNK D_0000FF18;
extern M2C_UNK D_0000FF30;
extern s32 D_00010048;
extern s32 D_00010050;
extern s32 D_00010054;
extern s32 D_000110BC;
extern u8 D_000110C0;
extern s32 D_000110DC;
extern M2C_UNK func_0000015C;
extern M2C_UNK func_00000330;
extern M2C_UNK func_000053B0;

void func_000003B4(void);
void func_000003D4(s32 arg0);
s32 func_00000478(s32 arg0);
void func_000004A0(s32 arg0);
s32 func_000004C4(void);
void func_000005D4(void);
void func_00000608(void);
M2C_UNK func_00000668(M2C_UNK, M2C_UNK);
void func_000008DC(void);
void func_000008FC(void);
void func_000009F8(M2C_UNK **arg0);
s32 func_00000BB0(void);
s32 func_00000F5C(void);
s32 func_00001A48(s32 arg0);
void func_000024C0(void);
s32 func_000033F0(void);
s32 func_00003E08(void);
s32 func_00003E40(void);
void func_0000417C(void);
void func_00004790(s32 *arg0, s32 arg1);
M2C_UNK func_00004830();
void func_00004914(M2C_UNK **arg0);
M2C_UNK func_00004AC0();
void func_00004DFC(void);
s32 func_00005410(s32, s32, s32);
void func_00005468(s32 arg0, struct Unk_func_00005468_1 *arg1);
s32 func_000057E0(void);
s32 func_000057F0(void);
s32 func_0000668C(s32);
void func_000067B0(void **arg0);
void func_00006808(struct Unk_func_00006808_0 *arg0);
void ***func_00006864(void ***arg0, struct Unk_func_00006864_1 *arg1, void **arg2);
M2C_UNK func_000068CC();
void func_000068F8(void);
void func_000071B4(struct Unk_func_000071B4_0 *arg0);
M2C_UNK func_00007274();
void func_000072A0(struct Unk_func_000072A0_0 *arg0, s32 arg1);
void func_000072C0(struct Unk_func_000072C0_0 *arg0);
s32 func_0000733C(s32);
M2C_UNK func_00007680(s32, M2C_UNK);
s32 func_000076F8(struct Unk_func_000076F8_0 *arg0);
s32 func_00007700(struct Unk_func_00007700_0 *arg0);
s32 func_00007708(struct Unk_func_00007708_0 *arg0);
s32 func_00007710(struct Unk_func_00007710_0 *arg0);
s32 func_00007718(struct Unk_func_00007718_0 *arg0);
s32 func_00007720(struct Unk_func_00007720_0 *arg0);
s32 func_00007728(struct Unk_func_00007728_0 *arg0);
void func_00007754(struct Unk_func_00007754_0 *arg0);
void func_00007770(struct Unk_func_00007770_0 *arg0);
void func_0000778C(struct Unk_func_0000778C_0 *arg0);
M2C_UNK func_0000EB40();
s32 module_stop(void);
M2C_UNK _ZN3paf4View9PageCloseEPKc(s32);
M2C_UNK _ZdlPv();
M2C_UNK sce_paf_private_free(s32);
M2C_UNK InputDevice_PspPad_Lock();
M2C_UNK sce_paf_private_free2(void *);
M2C_UNK Job_Start(M2C_UNK, M2C_UNK *, s32 *, M2C_UNK, M2C_UNK, M2C_UNK *);
s32 *_Znwj(M2C_UNK);
M2C_UNK _ZN3paf4View12PageActivateEPKc(s32);
M2C_UNK _ZNK3paf4View8PageRootEPKc(s32);
M2C_UNK sceVshBridge_E1941520(M2C_UNK);
M2C_UNK _ZN3vsh12BusyIcon_IncEv();
M2C_UNK sceVshCommonUtil_0587F20C(M2C_UNK *, M2C_UNK, s32);
M2C_UNK sceVshCommonUtil_622815DD(M2C_UNK *, s32 (*)());
M2C_UNK sceVshCommonUtil_8584376D(M2C_UNK *, s32);
M2C_UNK sceVshCommonUtil_9E42444E(M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK _ZN11PageManager4ExitEv(void *);
M2C_UNK _ZN11PageManager5ClearEv();

#endif
