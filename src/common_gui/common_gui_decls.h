#ifndef COMMON_GUI_DECLS_H
#define COMMON_GUI_DECLS_H

#include "common.h"
#include "m2c_macros.h"

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

extern M2C_UNK D_00003264;
extern s32 D_00003314;
extern M2C_UNK D_000037F0;
extern M2C_UNK D_00003920;
extern s32 D_00003934;
extern M2C_UNK D_00008148;

M2C_UNK func_00000000();
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
void func_00000F6C(struct Unk_func_00000F6C_0 *arg0, s32 arg1);
void func_000017BC(void);
void func_000017C4(void);
void func_000017CC(void);
M2C_UNK func_00002C7C(M2C_UNK, M2C_UNK);
void func_00002CE8(void);
void func_00002D08(void);
void func_00002D28(M2C_UNK **arg0);
void func_00002D38(M2C_UNK **arg0);
M2C_UNK func_00002DB8();
void func_00003508(void **arg0, void *arg1);
void func_00003528(s32 *arg0, s32 arg1);
void func_00003548(s32 *arg0, s32 arg1);
s32 func_00003588(s32);
s32 func_000035B8(s32);
void func_00003878(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void func_00003894(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void func_000071EC(void);
void func_0000720C(M2C_UNK **arg0);
void func_0000721C(M2C_UNK **arg0);
s32 module_start(void);
s32 module_stop(void);
void *scePaf_338C3774(s32, M2C_UNK);
M2C_UNK scePaf_41BCFB59(s32);
M2C_UNK scePaf_4E67BB08();
M2C_UNK scePaf_6C3BBB68(s32);
s32 scePaf_D4FAE7D0(M2C_UNK *);
M2C_UNK scePaf_FA05BF7B(s32);
s32 scePaf_FD4C9F47(s32);
M2C_UNK scePaf_FE575092(s32);
void sceVshCommonGui_0131C97D(s32 *arg0);
M2C_UNK *sceVshCommonGui_25D6E91D(void);
void sceVshCommonGui_450F3CF0(s32 *arg0);
void sceVshCommonGui_68778E5A(void);
void sceVshCommonGui_72E652AA(s32 *arg0);
void sceVshCommonGui_764A5495(void);
void sceVshCommonGui_80271F41(void);
void sceVshCommonGui_88F5E3A8(struct Unk_sceVshCommonGui_88F5E3A8_0 *arg0, s32 arg1, s32 arg2);
void sceVshCommonGui_93107A60(void);
void sceVshCommonGui_9F196654(s32 *arg0);
void sceVshCommonGui_A0334323(void);
s32 sceVshCommonGui_ACFE7BE7(void **arg0);
void sceVshCommonGui_B45ED019(void);
void sceVshCommonGui_DBEE94DC(void);
void sceVshCommonGui_E9B8D6AB(void);
s32 sceVshCommonGui_F7A03543(void);
void sceVshCommonGui_FA1DE461(void *arg0, s32 arg1, s32 arg2);

#endif
