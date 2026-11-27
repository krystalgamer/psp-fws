#ifndef COMMON_GUI_DECLS_H
#define COMMON_GUI_DECLS_H

#include "common.h"
#include "m2c_macros.h"

#ifdef __cplusplus
#include "paf.h"
#include "vsh.h"
extern "C" {
#endif

struct Unk_func_000008A8_temp_a0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000008C8_0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
};

struct Unk_func_000008F0_0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
};

struct Unk_func_00000EFC_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00000F6C_0 {
    u8 pad0[0x24];
    s32 unk24;
};

struct Unk_sceVshCommonGui_80271F41_temp_v0_2 {
    u8 pad0[0x6C];
    M2C_UNK (*unk6C)();
};

struct Unk_sceVshCommonGui_88F5E3A8_0 {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x4];
    s32 unk14;
};

struct Unk_sceVshCommonGui_ACFE7BE7_temp_a0 {
    u8 pad0[0x84];
    s32 unk84;
};

typedef void (*func_ptr)(void);

extern func_ptr D_00003234[];
extern s32 D_00003264;
extern s32 D_00003314;
extern M2C_UNK D_000037F0;
extern M2C_UNK D_00003920;
extern s32 D_00003934;
extern s32 D_00003B00;
extern s32 D_00003B04;
extern s32 D_00004344;
extern s32 D_00004390;
extern s32 D_00004394;
extern M2C_UNK D_00008148;
extern s32 D_0000826C;

M2C_UNK _ZN3paf10MessageBox10HideDeleteEv(s32);
s32 _ZN3paf4View4FindEPKc(M2C_UNK *);
M2C_UNK _ZN3paf6PhList6RedrawEv(s32);
void _ZN3vsh10OptionMenu11UpdateItemsEv(void);
s32 *_ZN3vsh10OptionMenu12ShadowRenderEv(void);
s32 _ZN3vsh10OptionMenu6IsOpenEv(void);
void _ZN3vsh11ContentInfo13SetOnplayFuncEPFvPvES1_(void *arg0, s32 arg1, s32 arg2);
void _ZN3vsh12BusyIcon_DecEv(void);
void _ZN3vsh12BusyIcon_IncEv(void);
void _ZN3vsh12GetString_OKEv(void);
void _ZN3vsh13Infobar_CloseEv(void);
void _ZN3vsh13MessageDialog10HideDeleteEv(s32 *arg0);
s32 _ZN3vsh13MessageDialog12GetBasePlaneEv(void **arg0);
void _ZN3vsh13MessageDialog16SetDeleteHandlerEPFvPvES1_(struct Unk_sceVshCommonGui_88F5E3A8_0 *arg0, s32 arg1, s32 arg2);
void _ZN3vsh14GetString_BackEv(void);
void _ZN3vsh15GetString_EnterEv(void);
void _ZN3vsh16GetString_CancelEv(void);
void _ZN3vsh16GetString_OptionEv(void);
void *_ZNK3paf4View12GetInterfaceEi(s32, M2C_UNK);
M2C_UNK _ZdlPv(void *);
M2C_UNK func_00000000(...);
void func_00000438(s32 arg0, s32 arg1);
s32 func_00000488(s32, s32, s32);
s32 func_000005CC(s32);
void func_0000061C(void);
void func_0000063C(void);
void func_000006DC(void);
void func_00000888(void **arg0, void **arg1);
void func_000008A8(void **arg0);
void func_000008C8(struct Unk_func_000008C8_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void func_000008F0(struct Unk_func_000008F0_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void func_00000EFC(struct Unk_func_00000EFC_0 *arg0, s32 arg1);
void func_00000F4C(void *arg0, s32 arg1);
void func_00000F6C(struct Unk_func_00000F6C_0 *arg0, s32 arg1);
void func_000017BC(void);
void func_000017C4(void);
void func_000017CC(void);
M2C_UNK func_00002C7C(M2C_UNK, M2C_UNK);
void func_00002CE8(void);
void func_00002D08(void);
void func_00002D28(M2C_UNK **arg0);
void func_00002D38(M2C_UNK **arg0);
void func_00002D60(void);
M2C_UNK func_00002DB8(...);
void func_00003508(void **arg0, void *arg1);
void func_00003528(s32 *arg0, s32 arg1);
void func_00003548(s32 *arg0, s32 arg1);
s32 func_00003588(s32);
s32 func_000035B8(s32);
void func_00003878(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void func_00003894(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void func_000071EC(void);
void func_000071F0(void);
void func_0000720C(M2C_UNK **arg0);
void func_00007210(M2C_UNK **arg0);
void func_0000721C(M2C_UNK **arg0);
void func_00007220(M2C_UNK **arg0);
s32 module_start(void);
s32 module_stop(void);
M2C_UNK scePaf_4208F869(s32);
s32 scePaf_5E4447F6(s32);
M2C_UNK scePaf_6615D1B8(s32);
M2C_UNK scePaf_6C3BBB68(s32);
M2C_UNK scePaf_7C960C90(s32);
s32 scePaf_88784487(M2C_UNK *);
M2C_UNK scePaf_9ADF22F7(s32);
M2C_UNK scePaf_CA8AFB1B(s32);
M2C_UNK scePaf_D88ADD11(s32);
void *scePaf_DCE3D225(s32, M2C_UNK);
M2C_UNK scePaf_FA05BF7B(s32);
M2C_UNK scePaf_FE575092(s32);
void sceVshCommonGui_00FBD201(void);
void sceVshCommonGui_0131C97D(s32 *arg0);
void sceVshCommonGui_25AC25C0(void);
void sceVshCommonGui_30FA68C3(void);
s32 sceVshCommonGui_37296C55(void **arg0);
void sceVshCommonGui_3E737100(void);
void sceVshCommonGui_450F3CF0(s32 *arg0);
void sceVshCommonGui_5C700F6F(void);
void sceVshCommonGui_68778E5A(void);
void sceVshCommonGui_6BC16C05(void);
void sceVshCommonGui_6F4C9FDB(void);
void sceVshCommonGui_77812115(s32 *arg0);
void sceVshCommonGui_82535BC4(s32 *arg0);
void sceVshCommonGui_87B1CFE5(s32 *arg0);
void sceVshCommonGui_8F414E35(s32 *arg0);
void sceVshCommonGui_9F196654(s32 *arg0);
void sceVshCommonGui_9F41313E(void *arg0, s32 arg1, s32 arg2);
s32 sceVshCommonGui_C1660004(void);
void sceVshCommonGui_C9529428(void);
void sceVshCommonGui_DDDE22B1(s32 *arg0);
void sceVshCommonGui_E9B8D6AB(void);
M2C_UNK *sceVshCommonGui_EBB7B7DE(void);
void sceVshCommonGui_EC899EBE(void);
s32 sce_paf_private_wcslen(s32);

#ifdef __cplusplus
}
#endif

#endif
