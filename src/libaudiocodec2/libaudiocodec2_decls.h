#ifndef LIBAUDIOCODEC2_DECLS_H
#define LIBAUDIOCODEC2_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_0000010C_0 {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x18];
    s32 unk28;
    u8 pad2C[0x4];
    u32 unk30;
    u32 unk34;
};

struct Unk_sceAudiocodec2_AA2ED267_0 {
    u8 pad0[0x8];
    s32 unk8;
    s32 unkC;
    s32 unk10;
};


s32 func_0000010C(struct Unk_func_0000010C_0 *arg0);
s32 func_00000278(s32);
s32 func_0000030C(s32);
s32 func_000003E4(s32, s32, s32, s32);
s32 sceAudiocodec2CheckNeedMem(struct Unk_sceAudiocodec2_AA2ED267_0 *arg0, s32 arg1);

#endif
