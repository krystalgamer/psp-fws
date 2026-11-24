#ifndef USBSTORMGR_DECLS_H
#define USBSTORMGR_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_00005150_s {
    u8 pad0[0x48];
    volatile s32 unk48;
    volatile s32 unk4C;
    volatile s32 unk50;
    u8 pad54[0x10];
    volatile s32 unk64;
    volatile s32 unk68;
    u8 pad6C[0x4];
    volatile s32 unk70;
    volatile s32 unk74;
};

extern struct D_00005150_s D_00005150;

s32 func_00000170(void *arg0, void *arg1, s32 arg2);
s32 func_0000019C(void *arg0, void *arg1, s32 arg2);
s32 func_000001CC(void *arg0, void *arg1, s32 arg2);
s32 func_000017C4(void);
void func_00003B58(void);

#endif
