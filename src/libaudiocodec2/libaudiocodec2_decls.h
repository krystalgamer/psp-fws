#ifndef LIBAUDIOCODEC2_DECLS_H
#define LIBAUDIOCODEC2_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_sceAudiocodec2_AA2ED267_0 {
    u8 pad0[0x8];
    s32 unk8;
    s32 unkC;
    s32 unk10;
};


s32 func_0000010C(s32 arg0);
s32 func_00000278(s32);
s32 func_0000030C(s32);
s32 func_000003E4(s32, s32, s32, s32);
s32 sceAudiocodec2_AA2ED267(struct Unk_sceAudiocodec2_AA2ED267_0 *arg0, s32 arg1);

#endif
