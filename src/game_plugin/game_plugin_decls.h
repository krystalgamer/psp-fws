#ifndef GAME_PLUGIN_DECLS_H
#define GAME_PLUGIN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_00005C88_temp_v0_2 {
    u8 pad0[0xC];
    M2C_UNK (*unkC)(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK);
};

struct Unk_func_00006584_temp_v0_2 {
    u8 pad0[0xC];
    M2C_UNK (*unkC)(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK);
};

struct Unk_func_00006974_temp_v0_2 {
    u8 pad0[0xC];
    M2C_UNK (*unkC)(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK);
};

struct Unk_func_00007024_temp_v0 {
    u8 pad0[0x4];
    M2C_UNK (*unk4)(M2C_UNK *);
};

struct Unk_func_00007584_var_a0 {
    u8 pad0[0x4];
    struct Unk_func_00007584_var_v0 *unk4;
};

struct Unk_func_00007584_var_v0 {
    u8 pad0[0x4];
    void *unk4;
};

struct Unk_func_000075DC_0 {
    M2C_UNK *unk0;
    s32 unk4;
};

struct Unk_func_000075DC_var_v0 {
    u8 pad0[0x4];
    void *unk4;
};

struct Unk_func_00007638_1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00007638_temp_v1 {
    void *unk0;
    void **unk4;
};

struct Unk_func_00008040_0 {
    M2C_UNK * unk0;
    u8 pad4[0x2C];
    s32 unk30;
};

struct Unk_func_00008078_0 {
    M2C_UNK * unk0;
    u8 pad4[0x2C];
    s32 unk30;
};

struct Unk_func_000080FC_0 {
    u8 pad0[0x30];
    s32 unk30;
};

struct Unk_func_00008160_0 {
    u8 pad0[0x30];
    s32 unk30;
};

struct Unk_func_00008180_0 {
    u8 pad0[0x30];
    s32 unk30;
};

struct Unk_func_00008274_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00008458_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00008460_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00008468_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00008470_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_00008478_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_00008480_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_00008488_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00008490_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000084B4_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000084D0_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000084EC_0 {
    u8 pad0[0x4];
    s32 unk4;
};

extern M2C_UNK D_0001157C;
extern s32 D_00011580;
extern M2C_UNK D_000115B0;
extern M2C_UNK D_000115D8;
extern s32 D_00011678;
extern s32 D_0001167C;
extern u8 D_00011680;
extern s32 D_000116AC_v100;
extern s32 D_000116C4;
extern s32 D_000116CC;
extern s32 D_000116D0;
extern M2C_UNK D_00011890;
extern M2C_UNK D_00011980;
extern M2C_UNK D_00011AD8;
extern M2C_UNK D_00011AE8;
extern M2C_UNK D_00011CFC;
extern s32 D_00011D88;
extern s32 D_00011DEC;
extern M2C_UNK D_00012158;
extern M2C_UNK D_0001247C;
extern s32 D_000125F0;
extern s32 D_000125F4;
extern s32 D_000125F8;
extern s32 D_000125FC;
extern s32 D_00012608;
extern s32 D_0001260C;
extern s32 D_00012634;
extern u8 D_00012638;
extern s32 D_0001266C;
extern s32 D_00012674;
extern s32 D_00012678;
extern M2C_UNK func_00002918;
extern M2C_UNK func_00005CE8;
extern M2C_UNK func_00005F40;
extern M2C_UNK func_000064F4;
extern M2C_UNK func_000068E4;
extern M2C_UNK func_00007058;

s32 func_000004E8(s32 arg0);
void func_00000510(void);
void func_0000052C(void);
void func_000005CC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00000610(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void func_000006B8(void);
void func_0000076C(void);
M2C_UNK func_0000088C(M2C_UNK, M2C_UNK);
void func_00000938(void);
void func_00000958(void);
void func_00000978(s32 *arg0, s32 arg1);
void func_00000998(s32 *arg0, s32 arg1);
void func_000009B8(s32 *arg0, s32 arg1);
M2C_UNK func_00000A58();
M2C_UNK func_00000A78();
M2C_UNK func_00000AA8();
void func_00000BC8(void);
s32 func_00000C20(s32, s32);
void func_00000CCC(void);
void func_00000CEC(void);
void func_00000D3C(s32 *arg0, s32 arg1);
void func_00000D5C(s32 *arg0, s32 arg1);
void func_00000D7C(s32 *arg0, s32 arg1);
void func_00000E68(M2C_UNK **arg0);
void func_00000E6C(void);
void func_00000E78(M2C_UNK **arg0);
s32 func_00000ED0(s32 arg0, u32 arg1);
s32 func_00000FE4(void);
void *func_000010AC(void **arg0);
void func_00002640(s32 arg0);
void func_00002880(s32 arg0);
s32 func_00002A60(s32, s32, s32);
void func_00002A98(s32 arg0, void *arg1);
void func_00002B1C(s32 arg0, s32 arg1, s32 arg2);
s32 func_00002B38(void);
s32 func_00002B8C(void);
void func_000031CC(void);
void func_00003244(void);
void func_000033F4(void);
void func_000035AC(void);
void func_000036CC(void);
void func_000036D4(void);
void func_000039C4(void);
void func_00003B64(s32 arg0, s32 arg1);
void func_00003DF8(s32 arg0, s32 arg1);
void func_00003F18(M2C_UNK **arg0);
M2C_UNK func_00003F78(s32, s32, s32);
void func_0000403C(M2C_UNK **arg0);
void func_0000412C(M2C_UNK **arg0);
M2C_UNK func_000042D8();
void func_000043D4(void);
void func_00004638(void);
void func_00005C88(void);
void func_00005E1C(s32 arg0);
void func_00006030(s32 arg0);
s32 func_0000606C(s32, s32);
void func_000060EC(void);
void func_0000610C(void);
void func_0000612C(void *arg0);
void func_000062D4(void);
void func_000062F0(s32 arg0, s32 arg1);
M2C_UNK func_00006340();
M2C_UNK func_0000636C(s32, s32, s32);
void func_00006584(void);
void func_0000664C(void **arg0);
s32 func_00006768(void);
void func_00006974(void);
s32 func_00006B24(s32);
void func_00006B84(void);
M2C_UNK func_00006EF4(M2C_UNK);
s32 func_00006F48(void);
void func_00007024(s32 arg0);
void func_0000731C(s32 *arg0, s32 arg1);
void func_000073D4(void *arg0);
void func_0000740C(void *arg0);
s32 func_0000744C(s32);
s32 func_00007490(s32);
void func_000074E0(void *arg0, s32 arg1);
void func_00007500(void *arg0);
void func_00007584(void **arg0);
void func_000075DC(struct Unk_func_000075DC_0 *arg0);
s32 func_000075F4(void *arg0);
void ***func_00007638(void ***arg0, struct Unk_func_00007638_1 *arg1, void **arg2);
M2C_UNK func_000076A0();
void func_000076CC(void);
s32 func_000077D8(void *arg0);
s32 func_000077E0(void *arg0);
s32 func_000077E8(void *arg0);
s32 func_000077F0(void *arg0);
s32 func_000077F8(void *arg0);
s32 func_00007800(void *arg0);
s32 func_00007808(void *arg0);
void func_00007810(void *arg0, s32 arg1);
void func_00007834(void *arg0, s32 arg1);
void func_00007850(void *arg0);
void func_0000786C(void *arg0);
s32 func_0000797C(void);
s32 func_00007D98(void);
s32 func_00007DA0(void);
s32 func_00007E08(void);
void func_00007F88(s32 *arg0, s32 arg1);
M2C_UNK func_00008020();
void func_00008040(struct Unk_func_00008040_0 *arg0);
void func_00008078(struct Unk_func_00008078_0 *arg0);
void func_000080FC(struct Unk_func_000080FC_0 *arg0);
M2C_UNK func_00008120();
void func_00008160(struct Unk_func_00008160_0 *arg0, s32 arg1);
void func_00008180(struct Unk_func_00008180_0 *arg0);
s32 func_000081FC();
s32 func_00008274(struct Unk_func_00008274_0 *arg0);
s32 func_00008458(struct Unk_func_00008458_0 *arg0);
s32 func_00008460(struct Unk_func_00008460_0 *arg0);
s32 func_00008468(struct Unk_func_00008468_0 *arg0);
s32 func_00008470(struct Unk_func_00008470_0 *arg0);
s32 func_00008478(struct Unk_func_00008478_0 *arg0);
s32 func_00008480(struct Unk_func_00008480_0 *arg0);
s32 func_00008488(struct Unk_func_00008488_0 *arg0);
void func_00008490(struct Unk_func_00008490_0 *arg0, s32 arg1);
void func_000084B4(struct Unk_func_000084B4_0 *arg0, s32 arg1);
void func_000084D0(struct Unk_func_000084D0_0 *arg0);
void func_000084EC(struct Unk_func_000084EC_0 *arg0);
s32 func_0000856C(s32 arg0);
s32 func_000085FC(void);
s32 func_00008940(s32 arg0);
s32 func_0000896C(void);
s32 func_000089A0(void);
s32 func_000089D4(void);
s32 func_000089DC(void);
s32 func_00008A50(void);
s32 func_00008DB0(void);
s32 func_00009644(s32 arg0);
M2C_UNK func_0000FC3C();
M2C_UNK func_00010A38();
s32 module_stop(void);
void *scePaf_338C3774(s32, M2C_UNK);
M2C_UNK scePaf_3481F595(s32);
M2C_UNK scePaf_4E67BB08();
M2C_UNK scePaf_545FE2DA();
M2C_UNK scePaf_66907719();
M2C_UNK scePaf_7EC15225(void *);
s32 scePaf_CA79D58B(s32);
M2C_UNK scePaf_CAF05F1D(s32, s32);
s32 scePaf_D4FAE7D0(M2C_UNK *);
M2C_UNK scePaf_DAB59652(s32);
M2C_UNK scePaf_EAA5AFF6(s32, M2C_UNK);
M2C_UNK scePaf_F609FA81(s32, s32, M2C_UNK, M2C_UNK);
s32 scePaf_FD4C9F47(s32);
M2C_UNK sceVshCommonGui_441D55D7(M2C_UNK);
M2C_UNK sceVshCommonGui_57F57F40(s32);
M2C_UNK sceVshCommonGui_A0DE7090(M2C_UNK);
M2C_UNK vsh_0B8DE38E(M2C_UNK *, M2C_UNK);
M2C_UNK vsh_5452A47B();
M2C_UNK vsh_61FE226A();
M2C_UNK vsh_7ADF6A69();
M2C_UNK vsh_B55C095C(M2C_UNK *);

#endif
