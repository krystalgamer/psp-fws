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

extern M2C_UNK D_0000D384;
extern M2C_UNK D_0000E48C;
extern M2C_UNK D_0000E684;
extern M2C_UNK D_0000E87C;
extern M2C_UNK D_0000EA74;
extern M2C_UNK D_0000EC6C;
extern M2C_UNK D_0000EE64;
extern s32 D_0000F140;
extern s32 D_0000F144;
extern s8 D_0000F156;
extern s32 D_0000F164;
extern s8 D_0000F2A0;
extern s32 D_0000F360;
extern M2C_UNK D_0000F364;
extern s32 D_0000F390;
extern s32 D_0000F394;
extern M2C_UNK D_00010920;
extern M2C_UNK D_000118CC;
extern M2C_UNK D_00011ABC;
extern M2C_UNK D_00011AC4;
extern M2C_UNK D_00011AD0;
extern M2C_UNK D_000120FC;
extern M2C_UNK D_00012220;
extern M2C_UNK D_00012228;
extern M2C_UNK D_00012230;
extern void *D_00015F80;
extern s32 D_00015F9C;
extern s8 D_00015FA8;
extern s8 D_000160E0;
extern s32 D_000160EC;
extern s32 D_000160F0;
extern s32 D_00016168;
extern s32 D_0001617C;
extern s32 D_00016F8C;
extern s32 D_00019840;
extern u8 D_0001984C;
extern s32 D_00019A0C;
extern s32 D_00019A10;
extern s32 D_00019A14;
extern s32 D_00019A18;
extern s32 D_00019A20;
extern s32 D_0001C56C;
extern s32 D_0001C57C;
extern s32 D_0001CAA4;
extern s32 D_0001CAB0;
extern s8 D_0001CBD3;
extern s8 D_0001CBD4;
extern s32 D_0001CBD8;
extern s32 D_0001CBDC;
extern s32 D_0001CBE0;
extern s32 D_0001CBE4;
extern s32 D_0001CBE8;
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

void func_00000330(void);
s32 func_00000338(void *arg0, s32 arg1);
void func_00000368(void);
void func_0000038C(void);
void func_000003E4(void);
u8 func_0000042C(void);
void func_0000044C(void);
void func_00000468(s32 arg0);
s32 func_00000A98(s32);
void func_000010D8(void);
void func_00001188(void);
s32 func_0000192C(s32, s32);
void func_00001B18(s32 arg0);
void func_00001B34(void);
void func_00001B64(void);
void func_00001B74(s32 arg0);
void func_00001BC0(void);
void func_00002F9C(void);
void func_000035CC(void);
void func_00004044(void);
s32 func_000047B8(void);
s32 func_00004880(s32, s32, s32);
s32 func_000048D8(void);
void func_00004998(void);
s32 func_00004C20(void);
void func_00004C24(s32 arg0, s32 arg1);
s32 func_00004CE8(s32, s32, s32);
s32 func_00004DE0(s32, s32);
s32 func_00004FE8(s32 arg0, s32 arg1);
M2C_UNK func_000051C0(M2C_UNK);
s32 func_00005244(s32, s32);
void func_00005364(void);
void func_0000536C(void);
void func_0000538C(void);
void func_000053E8(void);
void func_0000545C(s32 *arg0, s32 arg1);
void func_0000547C(s32 *arg0, s32 *arg1);
s32 func_00005664(s32);
void func_000058A0(void);
void func_000059A4(s32 arg0, s32 arg1);
s32 func_00005B64(void *arg0, s32 arg1);
M2C_UNK func_00005B8C(s32, M2C_UNK);
void func_00005BA4(void);
void func_00005E8C(void);
s32 func_0000601C(struct Unk_func_0000601C_0 *arg0, s32 arg1);
M2C_UNK func_00006134();
void func_00006344(void);
void func_0000643C(void *arg0);
s32 func_000064F0(void);
s32 func_0000664C(s32);
s32 func_000066FC(s32, s32);
void func_00006860(void);
void func_00006880(void);
void func_00006900(s32 *arg0, s32 arg1);
void func_00006920(s32 *arg0, s32 *arg1);
s32 func_00006AA4(s32);
M2C_UNK func_00006BB4(M2C_UNK, M2C_UNK);
void func_00006D10(M2C_UNK **arg0);
void func_00006D18(void);
void func_00006D38(void);
void func_00006DB8(s32 *arg0, s32 arg1);
M2C_UNK func_00006F5C();
void func_000071C8(M2C_UNK **arg0);
void func_0000772C(M2C_UNK **arg0);
void func_0000773C(M2C_UNK **arg0);
void func_000078E0(void);
void func_00007904(void);
void func_00007920(void);
void func_00007944(void);
void func_000079F0(void *arg0, s32 arg1);
void func_00007FB0(void);
void func_00007FD4(void);
void func_00007FF0(void);
void func_00008014(void);
void func_00008588(void *arg0);
void func_000085E0(void *arg0);
s32 func_00008618(void *arg0);
s32 func_000086C8(void);
s32 func_0000967C(void);
void func_00009C00(s32 arg0, s32 arg1);
void func_00009C14(void);
s32 func_00009C7C(s32);
s32 func_00009F7C(void);
void func_0000A164(struct Unk_func_0000A164_0 *arg0, M2C_UNK arg1);
s32 func_0000AAC4(struct Unk_func_0000AAC4_0 *arg0);
void func_0000AAE4(struct Unk_func_0000AAE4_0 *arg0);
s32 func_0000AB20(void *arg0, s32 arg1);
void func_0000AEF8(struct Unk_func_0000AEF8_0 *arg0);
void func_0000AF50(struct Unk_func_0000AF50_0 *arg0);
s32 func_0000AF88(struct Unk_func_0000AF88_0 *arg0);
void func_0000B01C(s32 arg0);
s32 func_0000B074(void);
void func_0000B328(void);
M2C_UNK func_0000B80C(s32);
s32 func_0000B868(s32, s32);
M2C_UNK func_0000B888();
s32 func_0000BDF4(s32);
s32 func_0000C710(struct Unk_func_0000C710_0 *arg0);
s32 func_0000C79C(s32);
s32 func_0000C800(struct Unk_func_0000C800_0 *arg0);
u16 func_0000C828(struct Unk_func_0000C828_0 *arg0);
s32 func_0000C8D8(void);
void func_0000C8E4(s32 arg0);
s32 func_0000C960(s32 arg0);
s32 func_0000D160(s32);
s32 func_0000D2AC(struct Unk_func_0000D2AC_0 *arg0);
s32 func_0000D318(void *arg0);
s32 func_0000D380(s32);
s32 func_0000D3A4(s32);
s32 func_0000D408(void *arg0);
u16 func_0000D430(void *arg0);
s32 func_0000D568(s32 arg0);
s32 func_0000D6F4(void);
s32 func_0000D6FC(void);
s32 func_0000D704(void);
s32 func_0000D70C(void);
s32 func_0000D714(void);
s32 func_0000D784(void);
s32 func_0000D78C(void);
s32 func_0000D794(void);
s32 func_0000D79C(void);
s32 func_0000D7A4(void);
s32 func_0000D7AC(void);
s32 func_0000D7B4(void);
s32 func_0000D7BC(void);
s32 func_0000D7C4(void);
s32 func_0000D814(struct Unk_func_0000D814_0 *arg0);
s32 func_0000D81C(struct Unk_func_0000D81C_0 *arg0);
void func_0000D824(struct Unk_func_0000D824_0 *arg0, struct Unk_func_0000D824_1 *arg1);
u16 func_0000D85C(struct Unk_func_0000D85C_0 *arg0);
s32 func_0000D8E4(void);
void func_0000DA5C(s32 arg0);
s32 func_0000DB68(void);
void func_0000DB74(s32 arg0);
s32 func_0000DBB0(void);
s32 func_0000DD68(s32);
void func_0000DE34(s32 arg0, s32 arg1);
void func_0000DE48(void);
s32 func_0000DE64(void);
s32 func_0000DE70(void);
s32 func_0000DEB4(void *arg0);
s32 func_0000DEBC(s32);
s32 func_0000DF5C(s32);
s32 func_0000DF88(s32);
void func_0000E0B0(void);
s32 func_0000E41C(void *arg0);
s32 func_0000E424(void *arg0);
void func_0000E42C(void *arg0, void *arg1);
void func_0000E450(void *arg0, s32 arg1);
u16 func_0000E468(void *arg0);
s32 func_0000E6A0(s32 arg0, s32 arg1);
s32 func_0000E7F0(s32, s32);
M2C_UNK func_0000E870();
s32 func_0000EA70(void);
s32 func_0000EA7C(void);
s32 func_0000EAC8(s32);
s32 func_0000EB68(s32);
s32 func_0000EDB8(s32, s32, s32);
s32 func_0000F16C(void);
s32 func_0000F4E8(void);
void func_0000F664(void);
s32 func_0000F894(void);
s32 func_000100F4(void);
void func_00010270(void);
s32 func_00010394(void);
s32 func_000104A0(void);
M2C_UNK func_00010E74();
s32 module_stop(void);
M2C_UNK sceKernelPowerLock(M2C_UNK);
M2C_UNK sceKernelPowerUnlock(M2C_UNK);
M2C_UNK scePaf_1A45C860(void *, M2C_UNK);
M2C_UNK scePaf_3481F595(s32, M2C_UNK *);
M2C_UNK scePaf_37DD37B8(s32, M2C_UNK, s32);
void *scePaf_3DD2A27B(s32, M2C_UNK *, M2C_UNK, M2C_UNK, void (*)());
s32 scePaf_4708AED4(s32, M2C_UNK *);
M2C_UNK scePaf_4E67BB08();
M2C_UNK scePaf_545FE2DA(s32);
M2C_UNK scePaf_5EBC648F(void *, s32);
M2C_UNK scePaf_66FE90D7();
s32 scePaf_79F4AE65(s32);
s32 scePaf_962FA087();
M2C_UNK scePaf_AEEF2A7C(s32, M2C_UNK, M2C_UNK, s32);
M2C_UNK scePaf_B2ED6CAA(s32);
M2C_UNK scePaf_CAF05F1D(s32, M2C_UNK *);
M2C_UNK scePaf_D1EE972C(s32, M2C_UNK, M2C_UNK, s32);
M2C_UNK scePaf_D24E4016(s32, M2C_UNK, s32);
void *scePaf_D4FAE7D0(s32);
s32 scePaf_DC8B0309(s32);
M2C_UNK scePaf_F47CA1C2(s32, M2C_UNK, M2C_UNK *, M2C_UNK);
M2C_UNK scePaf_F609FA81(s32, M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK scePaf_F93D4E1F(s32);
M2C_UNK sceUtility_private_3CEAE1DF(M2C_UNK);
M2C_UNK sceUtility_private_56BEDCA4(M2C_UNK);
s32 sceVshCommonGui_441D55D7(M2C_UNK);
s32 sceVshCommonGui_A0DE7090(M2C_UNK);
s32 sceVshCommonGui_EEB86F0E(M2C_UNK);
M2C_UNK sceVshCommonUtil_249059B5();
M2C_UNK sceVshCommonUtil_7683BE4D();

#endif
