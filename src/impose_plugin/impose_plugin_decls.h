#ifndef IMPOSE_PLUGIN_DECLS_H
#define IMPOSE_PLUGIN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_0000015C_0 {
    u8 pad0[0x1FD];
    s8 unk1FD;
    s8 unk1FE;
};

struct Unk_func_00000180_0 {
    u8 pad0[0x1FD];
    s8 unk1FD;
    s8 unk1FE;
};

extern M2C_UNK D_000013A4;

void func_0000015C(struct Unk_func_0000015C_0 *arg0);
void func_00000180(struct Unk_func_00000180_0 *arg0);
void func_00000964(void);
void func_00000D64(void);
M2C_UNK func_00000DE8();
void func_0000104C(void);
M2C_UNK func_000010D0();
s32 module_stop(void);
void *scePaf_338C3774(s32, M2C_UNK);
M2C_UNK scePaf_3DEE8DB4();
M2C_UNK scePaf_499FF48D();
M2C_UNK scePaf_86B41BA3();
M2C_UNK scePaf_A69BABE3(M2C_UNK, s32, s32);
s32 scePaf_D4FAE7D0(M2C_UNK *);
s32 sceVshBridge_639C3CB3(M2C_UNK);

#endif
