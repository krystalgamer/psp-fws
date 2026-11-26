#ifndef OPENING_PLUGIN_DECLS_H
#define OPENING_PLUGIN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_00000790_temp_v0_2 {
    u8 pad0[0x10];
    M2C_UNK (*unk10)(M2C_UNK);
};

extern M2C_UNK D_00001648;
extern s32 D_0000177C;
extern s32 D_00001780;
extern s32 D_000017FC;
extern s32 D_00001804;
extern M2C_UNK D_00003F04;
extern s32 D_0001045C;
extern s8 D_00010480;

s32 func_00000570(void);
void func_0000076C(void);
void func_00000790(void);
void func_000009C0(s32 arg0);
void func_00000A24(s32 arg0);
void func_00000D8C(void);
void func_00000DE8(s32 *arg0, s32 arg1);
void func_00000E00(void);
void func_00000E08(s32 arg0, s32 arg1);
void func_00000ED8(s32 *arg0, s32 arg1);
void func_00000EF8(s32 arg0, s32 arg1);
M2C_UNK func_00000F48();
M2C_UNK func_00000F78(s32, s32, s32);
void func_00000FFC(M2C_UNK **arg0);
M2C_UNK func_0000107C();
s32 func_000010EC(s32, s32);
void func_00001194(void);
void func_000011B4(void);
void func_000012EC(void **arg0);
void func_000013E8(void **arg0, void *arg1);
void func_00001AB8(s32 *arg0);
void func_00001B58(s32 *arg0);
s32 module_stop(void);
s32 sceAtracGetNextDecodePosition(s32, void *);
s32 sceAtracReleaseAtracID(s32);
s32 sceKernelPowerUnlock(s32);
void *scePaf_338C3774(s32, M2C_UNK);
M2C_UNK scePaf_37219A3B(s32, s32, M2C_UNK *);
M2C_UNK scePaf_39E62C88(s32, M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK scePaf_4E67BB08();
s32 scePaf_88784487(M2C_UNK *);
s32 scePaf_C1B0AA0D(s32);
s32 scePaf_CA79D58B(s32);
s32 scePaf_CD216C47(s32, M2C_UNK *);
s32 scePaf_D4FAE7D0(M2C_UNK *);
void *scePaf_DCE3D225(s32, M2C_UNK);
M2C_UNK scePower_DB62C9CF();

#endif
