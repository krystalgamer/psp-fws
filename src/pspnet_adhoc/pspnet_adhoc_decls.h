#ifndef PSPNET_ADHOC_DECLS_H
#define PSPNET_ADHOC_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_000079C0_s {
    s32 unk0;
    M2C_UNK * unk4;
};

struct Unk_func_00000974_temp_a1 {
    u8 pad0[0x10];
    u8 unk10;
};

struct Unk_func_00000974_temp_s0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00000974_temp_s0_2 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00000974_temp_v0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00002D20_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00003BB0_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_00005594_0 {
    u8 pad0[0x34];
    s32 unk34;
    s32 unk38;
    u8 pad3C[0x10];
    s32 unk4C;
    s32 unk50;
};

struct Unk_func_000055B0_0 {
    u8 pad0[0xCC];
    s32 unkCC;
    s32 unkD0;
};

struct Unk_func_000056E4_0 {
    u8 pad0[0x58];
    struct Unk_func_000056E4_temp_a2 *unk58;
    s32 unk5C;
    u8 pad60[0x7C];
    s32 unkDC;
};

struct Unk_func_000056E4_temp_a2 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00005708_0 {
    u8 pad0[0x10];
    void *unk10;
    void **unk14;
    u8 pad18[0xC];
    s16 unk24;
    u8 pad26[0xB2];
    s32 unkD8;
};

struct Unk_func_00005708_temp_a1 {
    u8 pad0[0xC];
    void **unkC;
};

struct Unk_func_00005708_var_s0 {
    u8 pad0[0x8];
    struct Unk_func_00005708_temp_a1 *unk8;
    void **unkC;
    u8 pad10[0x48];
    s32 unk58;
};

extern M2C_UNK D_00007450;
extern struct D_000079C0_s D_000079C0;
extern M2C_UNK D_000079CC;
extern M2C_UNK D_000079E8;
extern M2C_UNK D_00007A8C;
extern M2C_UNK D_00007CC8;

void func_00000444(s32 arg0);
void func_00000490(s32 arg0);
s32 func_0000092C(void *arg0, s32 arg1);
s32 func_00000974(void *arg0, s32 arg1);
s32 func_00000FFC(s32);
s32 func_00002B84(void *arg0, s32 arg1);
s32 func_00002B90(s32);
s32 func_00002C00(s32, s32);
s32 func_00002D20(struct Unk_func_00002D20_0 *arg0, s32 arg1);
s32 func_00002D2C(s32);
s32 func_00002D94(s32, s32);
void func_000039FC(void *arg0);
void func_00003BB0(struct Unk_func_00003BB0_0 *arg0);
s32 func_00004AE4(s32);
s32 func_00004B30(s32);
s32 func_00004E98(s32);
s32 func_00004F50(s32);
s32 func_00005024(s32, s32);
s32 func_000050F8(s32, s32);
s32 func_00005544(void *arg0, s32 arg1, s32 arg2);
void func_00005560(void *arg0, s32 arg1, s32 arg2);
s32 func_00005594(struct Unk_func_00005594_0 *arg0, s32 arg1, s32 arg2);
void func_000055B0(struct Unk_func_000055B0_0 *arg0, s32 arg1, s32 arg2);
s32 func_000056B0(void *arg0, s32 arg1);
void func_000056D4(void *arg0);
s32 func_000056E4(struct Unk_func_000056E4_0 *arg0, s32 arg1);
void func_00005708(struct Unk_func_00005708_0 *arg0);
s32 func_00006C3C(s32, s32, s32);
s32 func_00006DA4(s32, s32);
u8 *func_00006E58(u8 *arg0, u8 *arg1, s32 arg2);
void func_00006EF8(s32 arg0, s32 arg1);
s32 func_00006F68(void);
s32 func_00007298(s32, s32, s32);
s32 module_start(void);
s32 module_stop(void);
void sceNetAdhocGameModeUpdateReplica(s32 arg0, s32 arg1);
void sceNetAdhocGameModeUpdateReplicaInternal(s32 arg0, s32 arg1);
void sceNetAdhoc_lib_62B875A8(void);
void sceNetAdhoc_lib_F9240FBA(void);
M2C_UNK sceNetMemset(void *, M2C_UNK, M2C_UNK);

#endif
