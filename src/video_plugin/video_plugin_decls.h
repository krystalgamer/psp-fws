#ifndef VIDEO_PLUGIN_DECLS_H
#define VIDEO_PLUGIN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_00000550_temp_v0_2 {
    u8 pad0[0x8];
    M2C_UNK (*unk8)(M2C_UNK);
};

struct Unk_func_00000B84_temp_v0 {
    u8 pad0[0x4];
    M2C_UNK (*unk4)(M2C_UNK *, M2C_UNK);
};

extern M2C_UNK D_00002614;
extern M2C_UNK func_00000C18;
extern M2C_UNK func_00000D70;

void func_00000540(void);
void func_00000548(void);
void func_00000550(void);
void func_00000B84(s32 arg0);
void func_00000DF8(void);
s32 func_00001174(s32);
M2C_UNK func_00001294();
M2C_UNK func_00001360();
void func_00001444(void);
void func_00001460(void);
M2C_UNK func_00001768(M2C_UNK, M2C_UNK);
void func_000017F4(void);
void func_00001814(void);
void func_00001864(void);
void func_0000194C(s32 arg0, s32 arg1);
M2C_UNK func_00001AFC();
M2C_UNK func_00001D38(s32, s32, s32);
M2C_UNK func_000020F8();
s32 module_stop(void);
void *scePaf_338C3774(s32, M2C_UNK);
M2C_UNK scePaf_A0ED77C4(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, void (*)());
s32 scePaf_CA79D58B(s32);
s32 scePaf_D4FAE7D0(M2C_UNK *);

#endif
