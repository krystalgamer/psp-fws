#ifndef OPENING_PLUGIN_DECLS_H
#define OPENING_PLUGIN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_000017FC;

void func_00000790(void);
void func_00000A24(s32 arg0);
void func_00000ED8(s32 *arg0, s32 arg1);
void func_00000EF8(s32 arg0, s32 arg1);
M2C_UNK func_00000F48();
M2C_UNK func_00000F78(s32, s32, s32);
M2C_UNK func_0000107C();
s32 module_stop(void);
void *scePaf_338C3774(s32, M2C_UNK);
s32 scePaf_CA79D58B(s32);
s32 scePaf_D4FAE7D0(M2C_UNK *);

#endif
