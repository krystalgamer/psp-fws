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

struct Unk_func_00000170_0 {
    u8 pad0[0x7];
    u8 unk7;
};

struct Unk_func_00000170_1 {
    u8 pad0[0x1];
    s8 unk1;
    s8 unk2;
    s8 unk3;
};

struct Unk_func_0000019C_0 {
    u8 pad0[0xA];
    u8 unkA;
};

struct Unk_func_0000019C_1 {
    u8 pad0[0x1];
    s8 unk1;
    s8 unk2;
    s8 unk3;
};

struct Unk_func_000001CC_0 {
    u8 pad0[0x8];
    u8 unk8;
    u8 unk9;
};

struct Unk_func_000001CC_1 {
    u8 pad0[0x1];
    s8 unk1;
    s8 unk2;
    s8 unk3;
};

extern M2C_UNK D_00004B00;
extern struct D_00005150_s D_00005150;
extern M2C_UNK D_00005170;
extern M2C_UNK D_000051A0_v250;

s32 func_00000170(struct Unk_func_00000170_0 *arg0, struct Unk_func_00000170_1 *arg1, s32 arg2);
s32 func_0000019C(struct Unk_func_0000019C_0 *arg0, struct Unk_func_0000019C_1 *arg1, s32 arg2);
s32 func_000001CC(struct Unk_func_000001CC_0 *arg0, struct Unk_func_000001CC_1 *arg1, s32 arg2);
s32 func_000017C4(void);
s32 func_00001840(void);
void func_00003610(void);
void func_00003B58(void);

#endif
