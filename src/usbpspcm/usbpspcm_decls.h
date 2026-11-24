#ifndef USBPSPCM_DECLS_H
#define USBPSPCM_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_0000377C_0 {
    u8 pad0[0x10];
    struct Unk_func_0000377C_temp_s0 *unk10;
};

struct Unk_func_0000377C_temp_s0 {
    u8 pad0[0x14];
    s32 unk14;
    u8 pad18[0xD8];
    s32 unkF0;
};


M2C_UNK func_000006BC(void *);
s32 func_000020F4(s32 *arg0);
s32 func_000033E0(void);
s32 func_000033E8(void);
s32 func_0000377C(struct Unk_func_0000377C_0 *arg0);
M2C_UNK sceKernelSetEventFlag(s32, M2C_UNK);

#endif
