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


void func_0000015C(struct Unk_func_0000015C_0 *arg0);
void func_00000180(struct Unk_func_00000180_0 *arg0);
void func_00000D64(void);
M2C_UNK func_00000DE8();
void func_0000104C(void);
M2C_UNK func_000010D0();
s32 module_stop(void);
M2C_UNK scePaf_86B41BA3();

#endif
