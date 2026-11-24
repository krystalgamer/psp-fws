#ifndef OSK_PLUGIN_DECLS_H
#define OSK_PLUGIN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_D_0001D580 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_0000601C_0 {
    s32 unk0;
    u8 pad4[0x30];
    s32 unk34;
};

struct Unk_func_00006344_temp_v0 {
    u8 pad0[0x1B8];
    s32 unk1B8;
};

struct Unk_func_0000A164_0 {
    u8 pad0[0x41C];
    s32 unk41C;
};

struct Unk_func_0000AAC4_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0000AAE4_0 {
    u8 pad0[0x410];
    s32 unk410;
    u8 pad414[0x4];
    s32 unk418;
    s32 unk41C;
    u8 pad420[0x50];
    s32 unk470;
    s32 unk474;
    u8 pad478[0x4];
    s32 unk47C;
    u8 pad480[0x4];
    s32 unk484;
};

struct Unk_func_0000AEF8_0 {
    u8 pad0[0x41C];
    s32 unk41C;
};

struct Unk_func_0000AF50_0 {
    u8 pad0[0x41C];
    s32 unk41C;
};

struct Unk_func_0000AF88_0 {
    u8 pad0[0x41C];
    s32 unk41C;
};

struct Unk_func_0000C710_0 {
    s32 unk0;
    s16 unk4;
    s16 unk6;
};

struct Unk_func_0000C800_0 {
    s32 unk0;
    u16 unk4;
};

struct Unk_func_0000C828_0 {
    u8 pad0[0x4];
    u16 unk4;
};

struct Unk_func_0000D2AC_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0000D814_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0000D81C_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_0000D824_0 {
    u8 pad0[0x8];
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
};

struct Unk_func_0000D824_1 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_0000D85C_0 {
    u8 pad0[0x14];
    u16 unk14;
};

extern M2C_UNK D_00012220;
extern M2C_UNK D_00012228;
extern M2C_UNK D_00012230;
extern s32 D_00016F8C;
extern struct Unk_D_0001D580 *D_0001D580;
extern s32 D_0001D590;
extern s8 D_0001D6B3;
extern s8 D_0001D6B4;
extern s32 D_0001D6B8;
extern s32 D_0001D6BC;
extern s32 D_0001D6D0;
extern s32 D_0001D74C;
extern s32 D_0001D764;
extern s32 D_0001D768;
extern s32 D_0001D76C;
extern s32 D_0001D77C;
extern s32 D_0001D78C;
extern M2C_UNK func_0000085C;

void func_0000038C(void);
void func_0000044C(void);
void func_00000468(s32 arg0);
s32 func_0000192C(s32, s32);
void func_00001B74(s32 arg0);
void func_00001BC0(void);
s32 func_00004C20(void);
s32 func_00004CE8(s32, s32, s32);
M2C_UNK func_000051C0(M2C_UNK);
void func_000058A0(void);
void func_000059A4(s32 arg0, s32 arg1);
M2C_UNK func_00005B8C(s32, M2C_UNK);
s32 func_0000601C(struct Unk_func_0000601C_0 *arg0, s32 arg1);
M2C_UNK func_00006134();
void func_00006344(void);
M2C_UNK func_00006BB4(M2C_UNK, M2C_UNK);
void func_00006D18(void);
void func_00006D38(void);
void func_00006DB8(s32 *arg0, s32 arg1);
M2C_UNK func_00006F5C();
void func_000071C8(M2C_UNK **arg0);
void func_00007FB0(void);
void func_00007FD4(void);
void func_00007FF0(void);
void func_00008014(void);
void func_0000A164(struct Unk_func_0000A164_0 *arg0, M2C_UNK arg1);
s32 func_0000AAC4(struct Unk_func_0000AAC4_0 *arg0);
void func_0000AAE4(struct Unk_func_0000AAE4_0 *arg0);
void func_0000AEF8(struct Unk_func_0000AEF8_0 *arg0);
void func_0000AF50(struct Unk_func_0000AF50_0 *arg0);
s32 func_0000AF88(struct Unk_func_0000AF88_0 *arg0);
M2C_UNK func_0000B80C(s32);
s32 func_0000BDF4(s32);
s32 func_0000C710(struct Unk_func_0000C710_0 *arg0);
s32 func_0000C79C(s32);
s32 func_0000C800(struct Unk_func_0000C800_0 *arg0);
u16 func_0000C828(struct Unk_func_0000C828_0 *arg0);
s32 func_0000C960(s32 arg0);
s32 func_0000D160(s32);
s32 func_0000D2AC(struct Unk_func_0000D2AC_0 *arg0);
s32 func_0000D380(s32);
s32 func_0000D814(struct Unk_func_0000D814_0 *arg0);
s32 func_0000D81C(struct Unk_func_0000D81C_0 *arg0);
void func_0000D824(struct Unk_func_0000D824_0 *arg0, struct Unk_func_0000D824_1 *arg1);
u16 func_0000D85C(struct Unk_func_0000D85C_0 *arg0);
void func_0000DA5C(s32 arg0);
s32 func_0000DB68(void);
void func_0000DB74(s32 arg0);
s32 func_0000DBB0(void);
void func_0000DE34(s32 arg0, s32 arg1);
void func_0000DE48(void);
s32 func_0000DE64(void);
s32 func_0000DE70(void);
s32 func_0000DEBC(s32);
s32 func_0000DF5C(s32);
void func_0000E0B0(void);
M2C_UNK func_0000E870();
s32 func_0000F16C(void);
s32 func_0000F4E8(void);
void func_0000F664(void);
s32 func_0000F894(void);
M2C_UNK func_00010E74();
s32 module_stop(void);
M2C_UNK sceKernelPowerLock(M2C_UNK);
M2C_UNK sceKernelPowerUnlock(M2C_UNK);
M2C_UNK scePaf_1A45C860(void *, M2C_UNK);
M2C_UNK scePaf_37DD37B8(s32, M2C_UNK, s32);
s32 scePaf_4708AED4(s32, M2C_UNK *);
M2C_UNK scePaf_4E67BB08();
M2C_UNK scePaf_545FE2DA(s32);
M2C_UNK scePaf_5EBC648F(void *, s32);
M2C_UNK scePaf_66FE90D7();
s32 scePaf_79F4AE65(s32);
M2C_UNK scePaf_AEEF2A7C(s32, M2C_UNK, M2C_UNK, s32);
M2C_UNK scePaf_B2ED6CAA(s32);
M2C_UNK scePaf_D1EE972C(s32, M2C_UNK, M2C_UNK, s32);
void *scePaf_D4FAE7D0(s32);
s32 scePaf_DC8B0309(s32);
M2C_UNK scePaf_F47CA1C2(s32, M2C_UNK, M2C_UNK *, M2C_UNK);
M2C_UNK sceUtility_private_3CEAE1DF(M2C_UNK);
M2C_UNK sceUtility_private_56BEDCA4(M2C_UNK);
M2C_UNK sceVshCommonUtil_249059B5();
M2C_UNK sceVshCommonUtil_7683BE4D();

#endif
