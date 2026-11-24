#ifndef UPDATE_PLUGIN_DECLS_H
#define UPDATE_PLUGIN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_000002A4_temp_v0 {
    u8 pad0[0x61];
    u8 unk61;
};

struct Unk_func_00002360_temp_v0 {

};

struct Unk_func_0000292C_temp_v0 {

};

struct Unk_func_00002960_temp_v0 {

};

struct Unk_func_00002FE4_1 {
    u8 pad0[0x8];
    u8 unk8;
};

struct Unk_func_00003358_temp_v0 {
    u8 pad0[0x84];
    u8 unk84;
};

struct Unk_func_00004E0C_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00004F5C_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0000553C_0 {
    u8 pad0[0x58];
    s32 unk58;
};

struct Unk_func_00005B74_0 {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 unk60;
};

struct Unk_func_00005BA4_0 {
    u8 pad0[0x5C];
    s32 unk5C;
};

struct Unk_func_00005CA0_0 {
    u8 pad0[0x61];
    u8 unk61;
    u8 pad62[0x1E];
    s32 unk80;
};

struct Unk_func_00005DD4_temp_v0 {

};

struct Unk_func_00006160_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

extern M2C_UNK D_00007520;
extern M2C_UNK D_000075BC;
extern M2C_UNK D_00007788;
extern s32 D_00007EBC;
extern s32 D_00007EC0;
extern s32 D_00007EC4;
extern u8 D_00007EC8;
extern u8 D_00007EC9;
extern s32 D_00007ECC;
extern s8 D_00007ED0;
extern s32 D_00007EDC;
extern M2C_UNK func_00001328;
extern M2C_UNK func_0000175C;
extern M2C_UNK func_00001940;
extern M2C_UNK func_0000231C;
extern s32 func_0000269C;
extern M2C_UNK func_00002870;

s32 func_00000180(void);
void func_00000210(void);
void func_00000258(void);
void func_000002A4(void);
void func_00000314(void);
void func_0000086C(s32 arg0);
s32 func_00000AB4(s32, s32);
void func_00000FF4(void);
void func_00001714(void);
M2C_UNK func_00001EB4(s32, s32);
void func_0000214C(s32 arg0);
s32 func_00002188(void);
void func_000022C0(void);
void func_00002360(s32 arg0);
void func_000023E8(void);
s32 func_00002654(void);
void func_00002770(void);
void func_000027B8(s32 arg0);
void func_00002824(s32 arg0);
s32 func_000028A8(s32);
void func_0000292C(s32 arg0);
void func_00002960(s32 arg0);
void func_000029A0(void);
void func_00002FE4(s32 arg0, struct Unk_func_00002FE4_1 *arg1);
void func_00003358(s32 arg0);
void func_000033B8(s32 arg0);
M2C_UNK func_00003408(M2C_UNK, M2C_UNK);
void func_000034B0(void);
void func_000034D0(void);
s32 func_000034F0(s32);
void func_00003520(void);
s32 func_000036EC(s32);
M2C_UNK func_000038C8();
s32 func_00004B3C(s32, s32);
void func_00004D0C(s32 arg0);
M2C_UNK func_00004D40();
void func_00004E0C(struct Unk_func_00004E0C_0 *arg0, s32 arg1);
void func_00004F5C(struct Unk_func_00004F5C_0 *arg0);
M2C_UNK func_00004FD0(s32, M2C_UNK);
s32 func_00005130(s32, s32);
s32 func_00005364();
void func_000053BC(void);
void func_0000553C(struct Unk_func_0000553C_0 *arg0);
void func_00005B74(struct Unk_func_00005B74_0 *arg0);
s32 func_00005BA4(struct Unk_func_00005BA4_0 *arg0);
void func_00005BD8(void);
void func_00005BF4(void);
s32 func_00005CA0(struct Unk_func_00005CA0_0 *arg0);
M2C_UNK func_00005D10(s32);
s32 func_00005DD4(void);
void func_00006118(void);
void func_00006160(struct Unk_func_00006160_0 *arg0);
s32 func_00006170(s32);
M2C_UNK func_00006900();
s32 module_stop(void);
M2C_UNK sceHttpEnd();
M2C_UNK sceIoClose(s32);
s32 sceIoWrite(s32);
M2C_UNK sceKernelDelayThread(M2C_UNK);
s32 sceKernelPowerLock(s32);
M2C_UNK sceKernelPowerTick(M2C_UNK);
s32 sceKernelPowerUnlock(s32);
s32 sceKernelSignalSema(s32, s32);
s32 sceKernelWaitSema(s32, s32, void *);
M2C_UNK sceLibUpdateDL_4F49C9C1();
M2C_UNK sceLibUpdateDL_D6A09757();
void *scePaf_338C3774(s32, M2C_UNK);
M2C_UNK scePaf_4612DB4B(s32);
M2C_UNK scePaf_4E67BB08(s32);
M2C_UNK scePaf_545FE2DA();
M2C_UNK scePaf_5FAC9869();
M2C_UNK scePaf_66907719();
M2C_UNK scePaf_6B1E90C7();
void **scePaf_72514A05(s32, M2C_UNK *, M2C_UNK);
M2C_UNK scePaf_A0ED77C4(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *);
s32 scePaf_D4FAE7D0(M2C_UNK *);
M2C_UNK scePaf_EAA5AFF6(s32, M2C_UNK);
M2C_UNK scePaf_F47CA1C2(s32, M2C_UNK, void (*)(s32, void *), M2C_UNK);
M2C_UNK scePower_DB62C9CF();
M2C_UNK sceVshCommonGui_1CF884A1();
M2C_UNK sceVshCommonGui_441D55D7(M2C_UNK);
M2C_UNK sceVshCommonGui_4704D5BD(M2C_UNK);
M2C_UNK sceVshCommonGui_54BC644C(void *, s32);
M2C_UNK sceVshCommonGui_6C81492F(void *, s32);
M2C_UNK sceVshCommonGui_72E652AA(s32);
s32 sceVshCommonGui_764A5495();
M2C_UNK sceVshCommonGui_80271F41();
s32 sceVshCommonGui_B45ED019();
M2C_UNK vsh_388428D3(s32);
M2C_UNK vsh_475ABD41(s32);

#endif
