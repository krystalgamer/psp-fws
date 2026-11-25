#ifndef VSHMAIN_DECLS_H
#define VSHMAIN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_00030398_s {
    volatile s32 unk0;
    volatile s32 unk4;
    volatile s32 unk8;
    M2C_UNK * unkC;
    volatile s32 unk10;
    volatile s32 unk14;
    volatile s32 unk18;
    volatile s32 unk1C;
    volatile s32 unk20;
};

struct Unk_D_0003089C {
    u8 pad0[0x84];
    s32 unk84;
    u8 pad88[0x18];
    s32 unkA0;
    s32 unkA4;
    u8 padA8[0x8];
    s32 unkB0;
    u8 padB4[0x18];
    u8 unkCC;
    u8 padCD[0x3DF];
    void *unk4AC;
    u8 pad4B0[0x70];
    s32 unk520;
};

struct Unk_func_00002760_temp_v0 {
    u8 pad0[0xC];
    M2C_UNK (*unkC)(M2C_UNK);
};

struct Unk_func_0000362C_temp_v0 {
    u8 pad0[0x4];
    M2C_UNK (*unk4)(void (*)());
};

struct Unk_func_0000482C_var_a0 {
    u8 pad0[0x4];
    void *unk4;
};

struct Unk_func_000049D8_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000049E8_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0000AE30_var_a0 {
    u8 pad0[0x4];
    void *unk4;
};

struct Unk_func_0000B764_1 {
    M2C_UNK *unk0;
    u8 pad4[0x4];
    M2C_UNK *unk8;
};

struct Unk_func_0000B764_temp_a2 {
    u8 pad0[0x4];
    M2C_UNK *unk4;
    M2C_UNK *unk8;
};

struct Unk_func_0000B764_temp_v1 {
    M2C_UNK *unk0;
    M2C_UNK *unk4;
};

struct Unk_func_0000B7A4_1 {
    M2C_UNK *unk0;
    M2C_UNK *unk4;
};

struct Unk_func_0000B7A4_temp_a2 {
    u8 pad0[0x4];
    M2C_UNK *unk4;
    M2C_UNK *unk8;
};

struct Unk_func_0000B7A4_temp_v1 {
    M2C_UNK *unk0;
    u8 pad4[0x4];
    M2C_UNK *unk8;
};

struct Unk_func_0000C184_0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0000E06C_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000162C8_0 {
    u8 pad0[0x114];
    struct Unk_func_000162C8_temp_a0 *unk114;
};

struct Unk_func_000162C8_temp_a0 {
    u8 pad0[0x338];
    s32 unk338;
};

struct Unk_func_000184A4_0 {
    u8 pad0[0xB8];
    s32 unkB8;
};

struct Unk_func_00019EBC_0 {
    u8 pad0[0x4C4];
    s32 unk4C4;
};

struct Unk_func_0001AAA0_0 {
    u8 pad0[0x88];
    s32 unk88;
    u8 pad8C[0x41];
    u8 unkCD;
};

struct Unk_func_0001AE48_0 {
    u8 pad0[0x118];
    struct Unk_func_0001AE48_temp_v1 *unk118;
};

struct Unk_func_0001AE48_temp_v1 {
    u8 pad0[0x30];
    u8 unk30;
};

struct Unk_func_0001C118_0 {
    u8 pad0[0x4C4];
    s32 unk4C4;
};

struct Unk_func_0001C164_0 {
    u8 pad0[0x4C4];
    struct Unk_func_0001C164_temp_v1 *unk4C4;
};

struct Unk_func_0001C164_temp_v1 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_0001D38C_var_a0 {
    u8 pad0[0x4];
    struct Unk_func_0001D38C_var_v0 *unk4;
};

struct Unk_func_0001D38C_var_v0 {
    u8 pad0[0x4];
    void *unk4;
};

struct Unk_func_0001D534_1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0001D534_temp_v1 {
    void *unk0;
    void **unk4;
};

struct Unk_func_00020944_0 {
    u8 pad0[0x98];
    s32 unk98;
    s32 unk9C;
    s32 unkA0;
    s32 unkA4;
    s32 unkA8;
    s32 unkAC;
    s32 unkB0;
    s32 unkB4;
    s32 unkB8;
    s32 unkBC;
    s32 unkC0;
    s32 unkC4;
    s32 unkC8;
    s32 unkCC;
    s32 unkD0;
    s32 unkD4;
    s32 unkD8;
    s32 unkDC;
    s32 unkE0;
    s32 unkE4;
    s32 unkE8;
    s32 unkEC;
};

struct Unk_func_00023AF4_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00023C44_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00023E40_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00023E48_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00023E50_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00023E58_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_00023E60_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_00023E68_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_00023E70_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00023E9C_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00023EB8_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00023ED4_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000251F4_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00025B8C_1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00025B8C_temp_v1 {
    void *unk0;
    void **unk4;
};

struct Unk_func_00025C30_var_a0 {
    u8 pad0[0x4];
    struct Unk_func_00025C30_var_v0 *unk4;
};

struct Unk_func_00025C30_var_v0 {
    u8 pad0[0x4];
    void *unk4;
};

struct Unk_module_start_1 {
    s32 unk0;
    s32 unk4;
};

struct Unk_ret_func_0000BA80 {
    u8 pad0[0x2];
    s8 unk2;
};

struct Unk_vsh_0F553311_0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_vsh_6286E89D_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_vsh_7ADF6A69_0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x14];
    s32 unk1C;
};

struct Unk_vsh_8727574A_0 {
    s32 unk0;
    u8 pad4[0x100];
    s32 unk104;
    s32 unk108;
    s32 unk10C;
};

struct Unk_vsh_FA1DE461_0 {
    u8 pad0[0x1C];
    s32 unk1C;
    s32 unk20;
};

struct Unk_vt_func_0001EBF0_temp_v0 {
    u8 pad0[0x70];
    M2C_UNK (*unk70)(void **, M2C_UNK, M2C_UNK);
};

struct Unk_vt_func_0002129C_temp_v0 {
    u8 pad0[0xB0];
    M2C_UNK (*unkB0)(void **, s32 *, M2C_UNK);
};

extern s32 D_00018CA0;
extern M2C_UNK D_000193BC;
extern s32 D_0001A85C;
extern s32 D_0001A860;
extern s32 D_0001A864;
extern s32 D_0001A86C;
extern s32 D_0001A870;
extern s32 D_0001A874;
extern s32 D_0001A878;
extern s32 D_0001A87C;
extern s32 D_0001A880;
extern s32 D_0001A884;
extern s32 D_0001A888;
extern s32 D_0001A88C;
extern s32 D_0001A890;
extern s32 D_0001A894;
extern s32 D_0001A898;
extern s32 D_0001A950;
extern s32 D_0001A954;
extern s32 D_0001A958;
extern s32 D_0001A95C;
extern s32 D_0001A960;
extern s32 D_0001A964;
extern s32 D_0001A968;
extern s32 D_0001A96C;
extern s32 D_0001A970;
extern s32 D_0001A974;
extern s32 D_0001A978;
extern s32 D_0001A97C;
extern s32 D_0001A980;
extern s32 D_0001A984;
extern s32 D_0001A988;
extern s32 D_0001A98C;
extern s32 D_0001A9A0;
extern s32 D_0001A9A4;
extern M2C_UNK D_0001A9B0;
extern s32 D_0001A9F0;
extern u8 D_0001AA00;
extern s32 D_0001AA48;
extern s32 D_0001AA70;
extern s32 D_0001AA74;
extern s32 D_0001AA78;
extern s32 D_0001AA7C;
extern s32 D_0001AAA0;
extern s32 D_0001AAA4;
extern s32 D_0001AAA8;
extern s32 D_0001AAAC;
extern s32 D_0001AAC0;
extern u8 D_0001AAC4;
extern void *D_0001AAC8;
extern M2C_UNK D_0001C944;
extern s32 D_000208B4;
extern s32 D_00020920;
extern s32 D_00020924;
extern s32 D_00020928;
extern s32 D_0002092C;
extern s32 D_00020930;
extern s32 D_00020934;
extern s32 D_00020938;
extern s32 D_0002093C;
extern s32 D_00020940;
extern s32 D_00020944;
extern s32 D_00020948;
extern s32 D_0002094C;
extern s32 D_0002094C_v151;
extern M2C_UNK D_00020950;
extern s32 D_00020974;
extern s32 D_000209FC;
extern s32 D_00020A00;
extern s32 D_00020A3C;
extern u8 D_00020A44;
extern s32 D_00020A48;
extern M2C_UNK D_00020A4C;
extern s32 D_00020CFC;
extern s32 D_00020E6C;
extern s32 D_00020E74;
extern s32 D_00020E7C;
extern s32 D_00020E9C;
extern s32 D_00020EA0;
extern s32 D_00020EA4;
extern s32 D_00020EA8;
extern void **D_00020F00;
extern void **D_00020F0C;
extern void **D_00020F14;
extern void **D_00020F1C;
extern void **D_00020F20;
extern void **D_00020F24;
extern void **D_00020F28;
extern s32 D_00020F64;
extern s32 D_00020F8C;
extern s32 D_00020F90;
extern s32 D_00020F94;
extern s32 D_00020F98;
extern s32 D_00021224;
extern s32 D_0002124C;
extern s32 D_00021250;
extern s32 D_00021254;
extern s32 D_00021258;
extern s32 D_000283F4;
extern M2C_UNK D_00028D50;
extern M2C_UNK D_0002A540;
extern M2C_UNK D_0002ABF0;
extern M2C_UNK D_0002ACEC;
extern M2C_UNK D_0002AD04;
extern M2C_UNK D_0002B1F4;
extern M2C_UNK D_0002B200;
extern M2C_UNK D_0002B20C;
extern M2C_UNK D_0002B218;
extern s32 D_0002B25C;
extern s32 D_00030304;
extern M2C_UNK D_0003031C;
extern s32 D_0003034C;
extern s32 D_00030350;
extern s32 D_00030360;
extern s32 D_00030364;
extern s32 D_00030368;
extern s32 D_0003036C;
extern s32 D_00030370;
extern s32 D_00030374;
extern s32 D_00030378;
extern s32 D_0003037C;
extern s32 D_00030380;
extern s32 D_00030384;
extern s32 D_00030388;
extern s32 D_0003038C;
extern s32 D_00030390;
extern s32 D_00030394;
extern struct D_00030398_s D_00030398;
extern M2C_UNK D_000303BC;
extern s32 D_00030444;
extern s32 D_00030448;
extern s32 D_0003045C;
extern u8 D_00030464;
extern s32 D_00030468;
extern M2C_UNK D_0003046C;
extern s32 D_0003086C;
extern s32 D_00030884;
extern s32 D_00030894;
extern struct Unk_D_0003089C *D_0003089C;
extern s32 D_000308B4;
extern s32 D_000308B8;
extern s32 D_000308BC;
extern s32 D_000308C4;
extern u8 D_000308CC;
extern s32 D_000308D0;
extern s32 D_000308D4;
extern s32 D_000308D8;
extern s32 D_000308DC;
extern s32 D_000308E0;
extern s32 D_000308E4;
extern s32 D_000308E8;
extern s32 D_000308EC;
extern u8 D_000308F8;
extern s32 D_00030990;
extern s32 D_000309B8;
extern s32 D_000309BC;
extern s32 D_000309C0;
extern s32 D_000309C4;
extern s32 D_000309E8;
extern s32 D_000309EC;
extern s32 D_000309F0;
extern s32 D_000309F4;
extern s32 D_00030A04;
extern u8 D_00030A08;
extern void *D_00030A0C;
extern s32 D_00030A10;
extern s32 D_00030A14;
extern s32 D_00031510;
extern s32 D_00031514;
extern s32 D_00031518;
extern s32 D_0003151C;
extern s32 D_00031520;
extern s32 D_00031608;
extern s32 D_00031B3C;
extern s32 D_00031B40;
extern s32 D_00031B44;
extern s32 D_00031B48;
extern s32 D_00031B68;
extern s32 D_00031B6C;
extern s32 D_00031B70;
extern s32 D_00031B74;
extern s32 D_00031DC0;
extern s32 D_00031DC4;
extern s32 D_00031DC8;
extern s32 D_00031EB8;
extern s32 D_00032418;
extern s32 D_0003241C;
extern s32 D_00032420;
extern s32 D_00032424;
extern s32 D_00032E10;
extern s32 D_00032F9C;
extern s32 D_0003340C;
extern s32 D_000334FC;
extern s32 D_00033500;
extern s32 D_00033504;
extern s32 D_00033508;
extern s32 D_00033984;
extern s32 D_00033988;
extern s32 D_0003398C;
extern s32 D_00033990;
extern M2C_UNK func_0000155C;
extern M2C_UNK func_00007E94;
extern M2C_UNK func_0001FC94;
extern M2C_UNK func_00025388;

M2C_UNK func_00000000();
s32 func_000002B4(void);
void func_00000310(void);
s32 func_00000374(void);
void func_00000458(s32 arg0);
s32 func_00000464(void);
s32 func_00000550(void);
s32 func_000005BC(s32);
void func_00000640(s32 arg0, s32 arg1);
void func_0000097C(void);
s32 func_00000984(void);
void func_000009A4(void);
s32 func_000009AC(void);
s32 func_00000DE4(s32);
void func_000011FC(s32 arg0);
s32 func_00001238(void);
void func_00001798(void);
void func_00001AD4(void);
void func_00001AF4(void);
void func_00001B44(void);
s32 func_00002750(s32, s32);
void func_00002760(void);
M2C_UNK func_000027AC();
void func_00002850(s32 arg0, s32 arg1);
s32 func_00002864(void);
s32 func_0000286C(void);
void func_000028EC(void);
s32 func_00002950(void);
void func_000029B8(void);
void func_00002A40(void);
void func_00002A6C(void);
void func_00002A80(void);
s32 func_00002AA0(void);
void func_00002B14(void);
void func_00002B18(s32 arg0);
s32 func_00002C28(void);
void func_00002CA4(s32 arg0);
void func_00002DD4(void);
s32 func_00002DDC(void);
void func_00002DFC(void);
M2C_UNK func_00003090();
s32 func_000034D4(void);
s32 func_000035B0(void);
void func_0000362C(s32 arg0);
s32 func_00003668(void);
void func_0000377C(void);
void func_00003994(void);
void func_000039B8(void);
s32 func_00003A3C(void);
s32 func_00003BB4(void);
void func_00003C94(s32 arg0);
void func_00003CB0(void);
M2C_UNK func_00003D18(M2C_UNK, M2C_UNK);
void func_00003DFC(void);
void func_00003E1C(void);
s32 func_00003E3C(s32);
void func_00003E6C(void);
void func_00003F40(s32 arg0, s32 *arg1);
void func_000040A8(s32 arg0);
M2C_UNK func_000041B4();
s32 *func_000041D0(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_0000424C(s32, s32, s32);
s32 func_00004378(void);
s32 func_00004524(M2C_UNK, M2C_UNK);
void *func_0000482C(void **arg0);
void func_000049D8(struct Unk_func_000049D8_0 *arg0);
void func_000049E8(struct Unk_func_000049E8_0 *arg0);
void func_00005504(void);
s32 func_00005738(void);
void func_00005864(void);
void func_00005944(void);
void func_00005A38(void);
void func_00005A54(void);
void func_00005A70(void);
void func_00005A8C(s32 arg0);
void func_00005AA8(void);
void func_00005AC4(void);
void func_00005AE0(void *arg0, void *arg1, s32 arg2);
void func_00005AFC(s32 arg0, s32 arg1, s32 arg2);
void func_00005B18(void);
void func_00005B34(void);
void func_00005B7C(s32 arg0, s32 *arg1);
void func_00005B98(void);
void func_00005BB4(s32 *arg0);
void func_00005BD0(void);
void func_00005BEC(void);
void func_00005C08(void);
void func_00005CD8(void);
void func_00005CF8(void);
void func_00005ED8(s32 arg0);
s32 func_00006378(s32, s32);
void func_000074EC(void);
void func_00007AE4(void);
s32 func_00007CDC(s32);
void func_00007E44(s32 arg0);
s32 func_00007EC4(s32, s32);
s32 func_00008224(void);
u8 func_00008D18(u8 arg0);
void func_000090AC(void);
void func_000090F0(M2C_UNK **arg0);
void func_00009100(M2C_UNK **arg0);
void func_00009464(s32 *arg0, s32 arg1);
void func_00009484(s32 *arg0, s32 arg1);
void func_000094A4(s32 *arg0, s32 arg1);
M2C_UNK func_000094C4();
M2C_UNK func_000094E4();
M2C_UNK func_00009514();
s32 func_00009544(s32, s32, s32, s32);
s32 func_000095F0(s32);
s32 func_0000966C(void);
s32 func_000096A8(void);
s32 func_00009704(void);
s32 func_0000973C(void);
void func_00009908(void);
void func_0000994C(void);
void func_000099F4(void);
void func_00009B04(void);
void func_00009B4C(void);
void func_00009C18(void);
s32 func_00009CD8(void);
void func_00009D4C(void);
void func_00009D54(s32 arg0);
s32 func_0000A0A8(s32);
s32 func_0000A620(s32, s32);
void func_0000A658(s32 arg0, M2C_UNK arg1);
M2C_UNK func_0000AC34(M2C_UNK, M2C_UNK);
void func_0000ACE8(void);
void func_0000AD08(void);
s32 *func_0000AD28(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
void *func_0000AE30(void **arg0);
s32 func_0000AF70(M2C_UNK, M2C_UNK);
void func_0000B084(s32 arg0, s32 arg1);
void func_0000B150(void *arg0);
void func_0000B1BC(s32 arg0);
s32 func_0000B57C(s32, s32);
void func_0000B764(M2C_UNK **arg0, struct Unk_func_0000B764_1 *arg1);
void func_0000B7A4(M2C_UNK **arg0, struct Unk_func_0000B7A4_1 *arg1);
void func_0000B7E4(void);
M2C_UNK func_0000B800();
void func_0000B80C(void);
M2C_UNK func_0000B828();
s32 func_0000B89C(void);
s32 func_0000B9C8(void);
void func_0000BA58(void);
struct Unk_ret_func_0000BA80 *func_0000BA80(M2C_UNK);
s32 func_0000BB08(void *arg0);
void func_0000C184(struct Unk_func_0000C184_0 *arg0);
void func_0000C600(s32 arg0);
void func_0000C61C(s32 arg0);
void func_0000C638(void);
s32 func_0000C9CC(void *arg0, s32 arg1);
M2C_UNK func_0000CD00();
u8 func_0000D5F4(void *arg0);
s32 func_0000D738(s32);
void func_0000DD70(void);
void func_0000DD94(void *arg0);
void func_0000E06C(struct Unk_func_0000E06C_0 *arg0);
s32 func_0000E204(s32, s32);
void func_0000E340(void);
s32 func_0000E688(void);
s32 func_0000E770(s32, s32);
void func_0000E8B4(void *arg0);
void func_0000E918(void);
M2C_UNK func_0000EAB4(M2C_UNK, M2C_UNK);
s32 func_0000EB4C(void);
s32 func_0000EBD8(void);
M2C_UNK func_0000EBE4(M2C_UNK, M2C_UNK);
void func_0000EC64(void);
void func_0000EC84(void);
void func_0000EFE0(s32 *arg0, s32 arg1);
void func_0000F000(s32 *arg0, s32 arg1);
void func_0000F040(void);
void func_0000F05C(void);
void func_0000F08C(void **arg0);
void ***func_0000F22C(void ***arg0, void *arg1, void **arg2);
void func_0000F360(s32 *arg0, s32 arg1);
void func_0000F3F8(s32 *arg0, s32 arg1);
s32 func_0000F510(s32);
void func_0000F6B0(M2C_UNK **arg0);
void func_0000FC8C(s32 arg0);
s32 func_0000FCC8(s32);
s32 func_0000FD24(s32);
s32 func_0000FD84(void *arg0);
s32 func_0000FDE0(s32, s32);
s32 func_0000FF64(s32, s32);
void func_0000FFCC(void);
void func_0000FFEC(void);
void func_00010294(void);
M2C_UNK func_000102BC();
void func_000103D0(void);
s32 func_00010DEC(void);
s32 func_00010DF4(void);
s32 func_000115B0(void);
s32 func_00011684(s32);
M2C_UNK func_00011830(s32);
s32 func_00011AC4(s32);
void func_00011DE4(void *arg0);
u8 func_00012088(void);
s32 *func_00012094(s32 *arg0);
s32 func_000120FC(s32);
s32 func_0001228C(s32, s32);
s32 func_00012304(s32, s32);
void func_00012AA4(void);
s32 func_00012E14(void);
void func_00012E88(void);
s32 func_00012EA8(s32 *arg0);
void func_00012EC8(void);
s32 func_00012EEC(s32, s32);
M2C_UNK func_00013170(M2C_UNK);
void func_000131F4(void);
void func_0001349C(void);
s32 func_000134A4(s32, s32);
void func_0001354C(void);
void func_0001356C(void);
void func_00013700(s32 *arg0, s32 arg1);
s32 func_00013780(void);
void func_00013874(s32 *arg0, s32 arg1);
void func_00013894(s32 *arg0, s32 *arg1);
s32 func_000139D0(void);
s32 func_00013BE8(s32);
s32 func_00014014(void);
void func_000140FC(s32 arg0);
s32 func_00014134(void);
s32 func_00014144(void);
void func_0001429C(s32 arg0);
s32 func_00014508(void);
void func_00014610(M2C_UNK **arg0);
s32 func_00014A3C(void *arg0);
s32 func_00014A44(void *arg0);
s32 func_00014A4C(void *arg0);
s32 func_00014A54(void *arg0);
s32 func_00014A5C(void *arg0);
s32 func_00014A64(void *arg0);
s32 func_00014A6C(void *arg0);
void func_00014A98(void *arg0);
void func_00014AB4(void *arg0);
void func_00014AD0(void *arg0);
s32 func_00014B90(void);
s32 func_00014D54(void);
s32 func_00014D60(void);
s32 func_00014D6C(void);
s32 func_00014D78(void);
s32 func_00014D84(s32 arg0);
s32 func_00014DF4(s32 arg0);
s32 func_00014E8C(void);
void func_00014E90(void);
void func_00014EBC(void);
void func_00015254(s32 arg0);
void func_00015260(s32 arg0);
s32 func_0001542C(void);
void func_0001546C(void);
void func_00015598(void *arg0, s32 arg1);
void func_00015640(void **arg0);
M2C_UNK func_00015838();
s32 func_00015B4C(s32);
void func_000162C8(struct Unk_func_000162C8_0 *arg0);
M2C_UNK func_00016310(void *, s32, s32);
s32 func_000172DC(s32, s32, s32);
void func_00017F64(s32 arg0);
void func_000184A4(struct Unk_func_000184A4_0 *arg0);
void func_000187A8(void *arg0);
M2C_UNK func_00019D58();
void func_00019DE8(void);
s32 func_00019EBC(struct Unk_func_00019EBC_0 *arg0);
s32 func_0001A214(s32);
s32 func_0001A2A8(void);
s32 func_0001A2E8(void);
void func_0001A594(s32 arg0);
s32 func_0001A5B0(void);
void func_0001AAA0(struct Unk_func_0001AAA0_0 *arg0);
u8 func_0001AE48(struct Unk_func_0001AE48_0 *arg0);
s32 func_0001AE60(void);
s32 func_0001AE68(void);
void func_0001C118(struct Unk_func_0001C118_0 *arg0);
void func_0001C164(struct Unk_func_0001C164_0 *arg0);
void func_0001C198(void *arg0);
s32 func_0001C534(s32, s32);
M2C_UNK func_0001C8D4(s32);
s32 func_0001CA98(s32);
void func_0001D38C(void **arg0);
s32 func_0001D3D8(s32);
void ***func_0001D534(void ***arg0, struct Unk_func_0001D534_1 *arg1, void **arg2);
void func_0001D924(s32 *arg0, s32 arg1);
M2C_UNK func_0001D9BC();
void func_0001DB5C(M2C_UNK **arg0);
void func_0001EBF0(void);
M2C_UNK func_0001F208();
void func_0001F248(void);
s32 func_0001F5B0(void);
void func_0001F7A4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_0001F7D0(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4);
s32 func_0001F828(s32);
void func_0001FA50(void);
void func_0001FAAC(void);
M2C_UNK func_0001FB5C();
void func_0001FC78(void);
void func_0001FCD8(void);
M2C_UNK func_0001FD34();
s32 func_00020360(void);
u8 func_0002036C(void);
void func_00020944(struct Unk_func_00020944_0 *arg0);
u8 func_00021290(void);
s32 *func_0002129C(s32 *arg0);
void func_00022140(void);
void func_00022164(void);
void func_000226FC(void);
void func_000229EC(void);
M2C_UNK func_000229F4(M2C_UNK, M2C_UNK);
void func_00022B84(void);
void func_00022BA4(void);
s32 func_00022E04(void);
s32 func_00022FC4(void);
s32 func_000230C8(void);
s32 func_00023394(void);
s32 func_000233F4(s32, s32, s32, s32);
s32 func_00023660(void);
void func_000236E8(s32 arg0);
void func_00023AF4(struct Unk_func_00023AF4_0 *arg0, s32 arg1);
M2C_UNK func_00023B28(void *);
void func_00023C44(struct Unk_func_00023C44_0 *arg0);
s32 func_00023CB8(s32, s32);
s32 func_00023E40(struct Unk_func_00023E40_0 *arg0);
s32 func_00023E48(struct Unk_func_00023E48_0 *arg0);
s32 func_00023E50(struct Unk_func_00023E50_0 *arg0);
s32 func_00023E58(struct Unk_func_00023E58_0 *arg0);
s32 func_00023E60(struct Unk_func_00023E60_0 *arg0);
s32 func_00023E68(struct Unk_func_00023E68_0 *arg0);
s32 func_00023E70(struct Unk_func_00023E70_0 *arg0);
void func_00023E9C(struct Unk_func_00023E9C_0 *arg0);
void func_00023EB8(struct Unk_func_00023EB8_0 *arg0);
void func_00023ED4(struct Unk_func_00023ED4_0 *arg0);
M2C_UNK func_00024048();
s32 func_00024150(void);
s32 func_0002415C(void);
s32 func_00024168(void);
s32 func_00024174(void);
s32 func_00024180(s32 arg0);
M2C_UNK func_000241E0(M2C_UNK);
s32 func_00024274(void);
void func_0002427C(void);
s32 func_000242B4(void);
void func_000242BC(void);
void func_000242D8(void);
void func_00024368(void);
void func_00024560(s32 arg0);
M2C_UNK func_0002457C();
void func_000248E8(s32 arg0);
void func_000248F4(s32 arg0);
void func_000251F4(struct Unk_func_000251F4_0 *arg0, s32 arg1);
void func_00025248(void **arg0);
void func_00025264(void **arg0);
void func_000252DC(void);
s32 func_00025354(void);
M2C_UNK func_000256C8();
M2C_UNK func_000257D8();
M2C_UNK func_000259A8(M2C_UNK, M2C_UNK);
void func_00025A40(void);
void func_00025A60(void);
void ***func_00025B8C(void ***arg0, struct Unk_func_00025B8C_1 *arg1, void **arg2);
void func_00025C30(void **arg0);
M2C_UNK func_00025DEC();
s32 module_start(s32 arg0, struct Unk_module_start_1 *arg1);
s32 module_stop(void);
s32 sceAtracReinit(s32, s32);
M2C_UNK sceIoClose(s32);
s32 sceIoRemove(void *);
s32 sceKernelCreateCallback(void *, s32, void *);
s32 sceKernelCreateEventFlag(void *, u32, u32, void *);
s32 sceKernelDeleteCallback(s32);
s32 sceKernelDeleteEventFlag(s32);
s32 sceKernelDeleteFpl(s32);
s32 sceKernelResumeDispatchThread(s32);
s32 sceKernelSuspendDispatchThread(void);
s32 sceMpegFinish(void);
s32 sceMpegInit(void);
s32 sceNetAdhocctlTerm();
M2C_UNK scePaf_10B901E7();
M2C_UNK scePaf_1A45C860(s32, M2C_UNK *);
M2C_UNK scePaf_27F64616(s32);
M2C_UNK scePaf_28F8DE83(s32, s32, M2C_UNK, s32);
M2C_UNK scePaf_296897BC();
void *scePaf_338C3774(s32, M2C_UNK);
M2C_UNK scePaf_3481F595(s32);
M2C_UNK scePaf_3586BE05();
M2C_UNK scePaf_3DD2A27B();
M2C_UNK scePaf_3FBD9639();
M2C_UNK scePaf_44AAF96C();
M2C_UNK scePaf_4612DB4B(s32);
void **scePaf_4708AED4(s32, M2C_UNK *);
M2C_UNK scePaf_4E67BB08(s32);
M2C_UNK scePaf_545FE2DA();
M2C_UNK scePaf_5D786CDD(s32);
s32 scePaf_5FAC9869(s32);
M2C_UNK scePaf_66FE90D7();
M2C_UNK scePaf_6829D7AF(s32, M2C_UNK, s32);
M2C_UNK scePaf_7BED034E();
M2C_UNK scePaf_7EC15225(void *);
M2C_UNK scePaf_809A4F83(s32, s32, s32 *);
s32 scePaf_81667058(void *, M2C_UNK);
M2C_UNK scePaf_86B41BA3(void **);
M2C_UNK scePaf_93538664(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK scePaf_980228BA(s32, s32 *);
M2C_UNK scePaf_A69BABE3(M2C_UNK, s32, s32);
M2C_UNK scePaf_B3D58D25();
s32 scePaf_B7E6052B(M2C_UNK);
M2C_UNK scePaf_C9831AFF(M2C_UNK *, s32);
s32 scePaf_CA79D58B(M2C_UNK *);
M2C_UNK scePaf_CAF05F1D(s32);
s32 scePaf_D7215544(s32, M2C_UNK *);
M2C_UNK scePaf_DAB59652(s32);
M2C_UNK scePaf_DEDF238F();
M2C_UNK scePaf_EAA5AFF6(s32, M2C_UNK);
M2C_UNK scePaf_F95EA3F1(void *, void *, s32);
s32 scePaf_FCB4E053(s32);
M2C_UNK scePaf_FF2F98C6(s32, M2C_UNK *, s32);
s32 scePowerUnregisterCallback(s32);
s32 scePowerUnregitserCallback(M2C_UNK);
M2C_UNK sceReg_92E41280(s32, M2C_UNK, s32);
void sceResmgr_9DC14891(void);
s32 sceRtcGetCurrentTick(void *);
s32 sceUmdActivate(s32, void *);
M2C_UNK sceUmdDeactivate(M2C_UNK, M2C_UNK *);
M2C_UNK sceVshBridge_13AEE247(M2C_UNK, s32);
M2C_UNK sceVshBridge_214D3D0A();
M2C_UNK sceVshBridge_3A7DAD8C();
M2C_UNK sceVshBridge_5D4213EA(M2C_UNK);
M2C_UNK sceVshBridge_A7F0E8E0();
M2C_UNK sceVshBridge_B30A7A02(M2C_UNK);
M2C_UNK sceVshBridge_C6395C03(M2C_UNK *, M2C_UNK);
M2C_UNK sceVshBridge_CBDA2613();
M2C_UNK sceVshBridge_E5DA5E95();
M2C_UNK sceVshBridge_F720C299(M2C_UNK);
M2C_UNK sceVshCommonGui_72E652AA(s32);
M2C_UNK sceVshCommonGui_A0DE7090(M2C_UNK);
M2C_UNK sceVshCommonUtil_29B75E11();
M2C_UNK sceVshCommonUtil_5A3449D5(void *);
M2C_UNK sceVshCommonUtil_D4D66154(void *);
M2C_UNK sceVshCommonUtil_EDED68FB(s32);
M2C_UNK sceVshCommonUtil_FA969B6A(void *, M2C_UNK);
void vsh_0F553311(struct Unk_vsh_0F553311_0 *arg0);
void vsh_2569E27F(s32 arg0);
u8 vsh_2695A5B8(u8 arg0);
void *vsh_34DA1B67(void);
void vsh_388428D3(void);
void vsh_475ABD41(void);
s32 vsh_4A619A1D(void);
M2C_UNK vsh_58925420();
M2C_UNK vsh_595F8E64();
void vsh_5F6E172F(void);
void vsh_6286E89D(struct Unk_vsh_6286E89D_0 *arg0);
void vsh_7485813E(s32 arg0);
void vsh_78A67F41(void);
void vsh_7ADF6A69(struct Unk_vsh_7ADF6A69_0 *arg0);
s32 vsh_7B9AA4D4(void);
void vsh_8432F0B2(void);
void vsh_8727574A(struct Unk_vsh_8727574A_0 *arg0, s32 arg1);
void vsh_8F76CA2A(void);
void vsh_AA8B9556(s32 arg0);
s32 vsh_B55DCA45(void);
void vsh_FA1DE461(struct Unk_vsh_FA1DE461_0 *arg0, s32 arg1, s32 arg2);
s32 vsh_FDEE4109(void);

#endif
