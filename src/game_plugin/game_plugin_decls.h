#ifndef GAME_PLUGIN_DECLS_H
#define GAME_PLUGIN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

#ifdef __cplusplus
#include "paf.h"
#include "vsh.h"
extern "C" {
#endif

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

typedef void (*func_ptr)(void);

extern M2C_UNK D_00010C3C;
extern s32 D_00010E80;
extern M2C_UNK D_00011530;
extern func_ptr D_00011564[];
extern M2C_UNK D_0001157C;
extern s32 D_00011580;
extern M2C_UNK D_000115B0;
extern s32 D_000115D8;
extern s32 D_00011620;
extern s32 D_00011678;
extern s32 D_0001167C;
extern u8 D_00011680;
extern s32 D_000116AC_v100;
extern s32 D_000116C4;
extern s32 D_000116CC;
extern s32 D_000116D0;
extern s32 D_000116F8;
extern s32 D_000116FC;
extern s32 D_00011710;
extern s32 D_00011714;
extern s32 D_0001176C;
extern s32 D_00011890;
extern M2C_UNK D_00011980;
extern M2C_UNK D_00011AC8;
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
extern s32 D_00012984;
extern s32 D_000129D8;
extern s32 D_00012A58;
extern s32 D_00012A5C;
extern s32 D_00012A60;
extern s32 D_00012A64;
extern s32 D_00012A70;
extern s32 D_00012A74;
extern s32 D_00012A80;
extern u8 D_00012A98;
extern s32 D_00012AC8;
extern s32 D_00012AF4;
extern M2C_UNK D_00013F64;
extern s32 D_00014340;
extern void *D_00015840;
extern s32 D_00015AEC;
extern s8 D_00015B0C;
extern u8 D_00015B0D;
extern void *D_0001A180;
extern M2C_UNK D_0001A314;
extern s32 D_0001A42C;
extern s32 D_0001A5C4;
extern M2C_UNK func_00000688;
extern M2C_UNK func_00001260;
extern M2C_UNK func_00002918;
extern M2C_UNK func_00005CE8;
extern M2C_UNK func_00005F40;
extern M2C_UNK func_000064F4;
extern M2C_UNK func_0000669C;
extern M2C_UNK func_000068E4;
extern M2C_UNK func_00006B7C;
extern M2C_UNK func_00006F0C;
extern M2C_UNK func_00007058;

M2C_UNK InputDevice_PspPad_Unlock(...);
M2C_UNK _ZN11PageManager13ReturnTopmenuEi(M2C_UNK *, M2C_UNK);
M2C_UNK _ZN11PageManager4ExitEv(void);
M2C_UNK _ZN11PageManager5ClearEv(void);
M2C_UNK _ZN11PageManagerC2Ei(void *self, s32);
M2C_UNK _ZN3paf4View12PageActivateEPKc(s32, s32);
s32 _ZN3paf4View4FindEPKc(M2C_UNK *);
M2C_UNK _ZN3paf4View8PageOpenEPKcii(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK _ZN3paf4View9PageCloseEPKc(s32);
M2C_UNK _ZN3paf4View9PlaySoundEPKc(s32, M2C_UNK *);
s32 _ZN3paf6Module12SetInterfaceEiPv(s32, s32, s32);
M2C_UNK _ZN3paf9PhHandler11KillTimerCBEi(s32, M2C_UNK);
M2C_UNK _ZN3vsh25ShowButtonNavigation_BackEb(M2C_UNK);
M2C_UNK _ZN3vsh26ShowButtonNavigation_EnterEb(M2C_UNK);
void *_ZNK3paf4View12GetInterfaceEi(s32, M2C_UNK);
M2C_UNK _ZNK3paf4View8PageRootEPKc(s32);
M2C_UNK _ZdlPv(void *);
s32 func_000004E8(s32 arg0);
void func_00000510(void);
void func_0000052C(void);
s32 func_00000534(s32 arg0);
void func_00000558(void);
void func_0000055C(void);
void func_00000578(void);
void func_0000058C(void);
void func_000005C0(s32 arg0, s32 arg1, s32 arg2);
void func_000005CC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_000005F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00000610(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void func_00000620(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00000638(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void func_00000664_v300(s32 arg0);
void func_000006B8(void);
void func_000006FC(s32 arg0);
void func_0000076C(void);
void func_00000868(s32 arg0);
M2C_UNK func_0000088C(M2C_UNK, M2C_UNK);
void func_00000938(void);
void func_00000958(void);
void func_00000978(s32 *arg0, s32 arg1);
void func_00000998(s32 *arg0, s32 arg1);
void func_000009B8(s32 *arg0, s32 arg1);
M2C_UNK func_00000A58(...);
M2C_UNK func_00000A78(...);
M2C_UNK func_00000AA8(...);
void func_00000BC8(void);
s32 func_00000C20(s32, s32);
void func_00000CCC(void);
void func_00000CEC(void);
void func_00000D3C(s32 *arg0, s32 arg1);
void func_00000D5C(s32 *arg0, s32 arg1);
void func_00000D7C(s32 *arg0, s32 arg1);
void func_00000E68(s32 **arg0);
void func_00000E6C(void);
void func_00000E78(s32 **arg0);
s32 func_00000ED0(s32 arg0, u32 arg1);
s32 func_00000FE4(void);
void *func_000010AC(void **arg0);
s32 func_000010C8(s32 arg0, u32 arg1);
void func_00001208(void);
void func_00001298(s32 arg0);
s32 func_000012D0(s32);
void func_000016B8(void);
void func_00001730(s32 arg0);
s32 func_0000179C(void);
void func_00002640(s32 arg0);
s32 func_0000270C(s32 arg0, u32 arg1);
void func_00002880(s32 arg0);
s32 func_00002A60(s32, s32, s32);
void func_00002A98(s32 arg0, void *arg1);
void func_00002B1C(s32 arg0, s32 arg1, s32 arg2);
s32 func_00002B38(void);
s32 func_00002B8C(void);
s32 func_00002CEC(void);
u8 func_00002D00(void);
u8 func_00002D08_v150(void);
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
void func_000040DC(M2C_UNK **arg0);
void func_0000412C(M2C_UNK **arg0);
M2C_UNK func_000042D8(...);
void func_000043D4(void);
void func_00004638(void);
void func_00005C88(void);
void func_00005D88(void);
void func_00005E1C(s32 arg0);
void func_00006030(s32 arg0);
s32 func_0000606C(s32, s32);
void func_000060EC(void);
void func_0000610C(void);
void func_0000612C(void *arg0);
void func_000062D4(void);
void func_000062F0(s32 arg0, s32 arg1);
M2C_UNK func_00006340(...);
M2C_UNK func_0000636C(s32, s32, s32);
void func_00006580(void);
void func_00006584(void);
s32 func_0000659C(void);
void func_0000664C(void **arg0);
void *func_00006664(void **arg0);
void func_0000670C(void);
s32 func_00006768(void);
void func_00006974(void);
s32 func_00006B24(s32);
void func_00006B84(void);
void func_00006BF4(void);
M2C_UNK func_00006EF4(M2C_UNK);
s32 func_00006F48(void);
void func_00007024(s32 arg0);
s32 func_000071AC(s32);
void func_0000731C(s32 *arg0, s32 arg1);
void func_000073D4(void *arg0, s32 arg1);
void func_0000740C(void *arg0, s32 arg1);
s32 func_0000744C(s32);
s32 func_00007490(s32);
void func_000074E0(void *arg0, s32 arg1);
void func_00007500(void *arg0);
void func_00007584(void **arg0);
void func_000075DC(struct Unk_func_000075DC_0 *arg0);
s32 func_000075F4(void *arg0);
void ***func_00007638(void ***arg0, struct Unk_func_00007638_1 *arg1, void **arg2);
s32 func_00007678(s32, s32);
M2C_UNK func_000076A0(...);
void func_000076CC(void);
void func_00007720(void);
void func_00007740(void);
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
s32 func_00007DF0(s32, s32);
s32 func_00007E08(void);
void func_00007E98(void);
void func_00007EB8(void);
void func_00007F88(s32 *arg0, s32 arg1);
M2C_UNK func_00008020(...);
void func_00008040(struct Unk_func_00008040_0 *arg0, s32 arg1);
void func_00008078(struct Unk_func_00008078_0 *arg0, s32 arg1);
void func_000080FC(struct Unk_func_000080FC_0 *arg0);
M2C_UNK func_00008120(...);
void func_00008160(struct Unk_func_00008160_0 *arg0, s32 arg1);
void func_00008180(struct Unk_func_00008180_0 *arg0);
s32 func_000081A4(s32);
s32 func_000081FC(...);
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
s32 func_00008E14(void);
s32 func_00008EB0(void);
s32 func_00009644(s32 arg0);
s32 func_0000B43C(s32, s32);
void func_0000B53C(void);
void func_0000B55C(void);
s32 func_0000F620(s32, s32, s32, s32);
M2C_UNK func_0000FC3C(...);
void func_0001040C(void);
void func_00010788(s32 arg0, s32 arg1);
M2C_UNK func_00010A38(...);
s32 module_stop(void);
M2C_UNK scePaf_39E62C88(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK sceVshCommonGui_57F57F40(s32);
M2C_UNK sceVshCommonUtil_0587F20C(M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK sceVshCommonUtil_622815DD(M2C_UNK *, M2C_UNK *);
M2C_UNK sceVshCommonUtil_8584376D(M2C_UNK *, s32);
M2C_UNK sce_paf_private_free(...);
M2C_UNK sce_paf_private_free2(void *);
M2C_UNK sce_paf_private_snprintf(M2C_UNK *, M2C_UNK, const char *);
s32 sce_paf_private_strlen(s32);
M2C_UNK sce_paf_private_strncpy(M2C_UNK *, s32, M2C_UNK);
s32 sce_paf_private_wcslen(s32);
M2C_UNK vsh_B55C095C(M2C_UNK *);

#ifdef __cplusplus
}
#endif

#endif
