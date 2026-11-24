#ifndef VIDEOCODEC_DECLS_H
#define VIDEOCODEC_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_00000EB4_0 {
    u8 pad0[0x10];
    void * unk10;
    u8 pad14[0x18];
    void * unk2C;
    void * unk30;
    u8 pad34[0x4];
    void * unk38;
};


void func_00000EB4(struct Unk_func_00000EB4_0 *arg0, s32 arg1);
s32 sceKernelDcacheInvalidateRange(void *, u32);
M2C_UNK sceMePower_driver_05B2C420(M2C_UNK);
M2C_UNK sceMePower_driver_B6FE3E62(M2C_UNK);
s32 sceVideocodec_driver_CB3312D1(void);
s32 sceVideocodec_driver_E76D65FE(void);

#endif
