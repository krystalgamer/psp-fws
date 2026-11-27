#ifndef DNAS_PLUGIN_DECLS_H
#define DNAS_PLUGIN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

#ifdef __cplusplus
#include "paf.h"
#include "vsh.h"
extern "C" {
#endif

struct Unk_func_000014F0_temp_a0 {
    u8 pad0[0x4];
    s32 unk4;
};

extern M2C_UNK D_00001AB4;
extern s32 D_00001F4C;
extern s32 D_00001F50;

M2C_UNK _ZN3paf4View12PageActivateEPKc(s32, M2C_UNK *);
M2C_UNK _ZN3paf4View8PageOpenEPKcii(s32, M2C_UNK *, M2C_UNK, M2C_UNK);
void func_0000015C(void);
void func_000001AC(void);
s32 func_00000210(void);
void func_00000810(void);
void func_00000F58(void);
void func_00001068(void);
void func_0000117C(void);
M2C_UNK func_00001198(...);
void func_000013B4(void **arg0, void **arg1);
void func_000014F0(void **arg0);
M2C_UNK func_0000161C(...);
s32 module_stop(void);

#ifdef __cplusplus
}
#endif

#endif
