#ifndef RSS_SUBSCRIBER_DECLS_H
#define RSS_SUBSCRIBER_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_00002948_var_a0 {
    u8 pad0[0x4];
    struct Unk_func_00002948_var_v0 *unk4;
};

struct Unk_func_00002948_var_v0 {
    u8 pad0[0x4];
    void *unk4;
};

extern M2C_UNK D_000039F4;
extern M2C_UNK D_00003D20;
extern M2C_UNK D_00003D30;
extern M2C_UNK D_00003D40;
extern M2C_UNK D_00003DB0;

s32 func_0000028C(void);
M2C_UNK func_000002B0(M2C_UNK, M2C_UNK);
void func_0000032C(void);
void func_0000034C(void);
void func_0000036C(void *arg0);
void func_0000044C(void *arg0);
s32 func_00000818(s32);
M2C_UNK func_0000273C(M2C_UNK, M2C_UNK);
void func_00002784(void);
void func_000027A4(s32 *arg0, s32 arg1);
void func_000027C4(s32 arg0, s32 arg1);
void func_000028BC(s32 arg0, s32 arg1);
void func_00002948(void **arg0);
void func_00002A20(void);
void func_00002A3C(void);
M2C_UNK func_00002A58();
M2C_UNK func_00002A78(s32, s32, s32);
M2C_UNK func_00002B24(s32, s32, s32);
M2C_UNK func_00002BD8();
M2C_UNK func_00002C30();
void func_00002D28(M2C_UNK **arg0);
s32 func_00002D50(void);
void func_00002D70(M2C_UNK **arg0);
M2C_UNK func_00003278();
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);
s32 module_stop(void);
s32 sceKernelCreateSema(void *, u32, s32, s32, void *);
M2C_UNK scePaf_4E67BB08();
s32 scePaf_75062BCF();
M2C_UNK scePaf_7EC15225(void *);
s32 scePaf_CA79D58B(s32);
s32 scePaf_FD4C9F47(s32);

#endif
