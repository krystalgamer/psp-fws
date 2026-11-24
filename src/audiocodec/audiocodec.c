#include "common.h"
#include "audiocodec_decls.h"

INCLUDE_ASM("nonmatchings/audiocodec", sceAudiocodec_9D3F790C);

INCLUDE_ASM("nonmatchings/audiocodec", sceAudiocodec_5B37EB1D);

INCLUDE_ASM("nonmatchings/audiocodec", sceAudiocodec_70A703F8);

INCLUDE_ASM("nonmatchings/audiocodec", sceAudiocodec_8ACA11D5);

INCLUDE_ASM("nonmatchings/audiocodec", sceAudiocodec_6CD2A861);

INCLUDE_ASM("nonmatchings/audiocodec", sceAudiocodec_59176A0F);

INCLUDE_ASM("nonmatchings/audiocodec", sceAudiocodec_3A20A200);

INCLUDE_ASM("nonmatchings/audiocodec", sceAudiocodec_29681260);

INCLUDE_ASM("nonmatchings/audiocodec", func_000007D4);

INCLUDE_ASM("nonmatchings/audiocodec", func_000008B4);

INCLUDE_ASM("nonmatchings/audiocodec", func_00000970);

INCLUDE_ASM("nonmatchings/audiocodec", func_00000A58);

INCLUDE_ASM("nonmatchings/audiocodec", func_00000AAC);

s32 sceAudiocodec_driver_62518B7E(void) {
    return 0;
}

#if FW_VERSION < 201
s32 module_stop(void) {
    return 0;
}
#else
s32 func_00000AF8(void) {
    return 0;
}
#endif

INCLUDE_RODATA("nonmatchings/audiocodec", D_00000D1C);

INCLUDE_RODATA("nonmatchings/audiocodec", D_00000D94);
