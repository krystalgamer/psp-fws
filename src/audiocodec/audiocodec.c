/* cflags[100]: -O3 */
/* cflags[150]: -Os -frename-registers */
#include "common.h"
#include "audiocodec_decls.h"

INCLUDE_ASM("nonmatchings/audiocodec", sceAudiocodecCheckNeedMem);

INCLUDE_ASM("nonmatchings/audiocodec", sceAudiocodecInit);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/audiocodec", sceAudiocodec_3DD7EE1A);
#endif

INCLUDE_ASM("nonmatchings/audiocodec", sceAudiocodecDecode);

INCLUDE_ASM("nonmatchings/audiocodec", sceAudiocodecGetInfo);

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/audiocodec", sceAudiocodec_6CD2A861);
#endif

INCLUDE_ASM("nonmatchings/audiocodec", sceAudiocodecAlcExtendParameter);

INCLUDE_ASM("nonmatchings/audiocodec", sceAudiocodecGetEDRAM);

INCLUDE_ASM("nonmatchings/audiocodec", sceAudiocodecReleaseEDRAM);

#if FW_VERSION >= 250
INCLUDE_RODATA("nonmatchings/audiocodec", D_00000E18);

INCLUDE_RODATA("nonmatchings/audiocodec", D_00000E30);

INCLUDE_ASM("nonmatchings/audiocodec", func_00000948);

INCLUDE_ASM("nonmatchings/audiocodec", func_00000A28);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/audiocodec", func_00000A78);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/audiocodec", func_00000AF0);

INCLUDE_ASM("nonmatchings/audiocodec", func_00000BD4);

INCLUDE_ASM("nonmatchings/audiocodec", func_00000C20);
#endif

#if FW_VERSION >= 250
INCLUDE_RODATA("nonmatchings/audiocodec", D_00000E74);

INCLUDE_RODATA("nonmatchings/audiocodec", D_00000E94);
#else
INCLUDE_ASM("nonmatchings/audiocodec", func_000007D4);

INCLUDE_ASM("nonmatchings/audiocodec", func_000008B4);

INCLUDE_ASM("nonmatchings/audiocodec", func_00000970);

INCLUDE_ASM("nonmatchings/audiocodec", func_00000A58);

INCLUDE_ASM("nonmatchings/audiocodec", func_00000AAC);

s32 sceAudiocodecStartEntry(void) {
    return 0;
}
#endif

#if FW_VERSION < 201
s32 module_stop(void) {
    return 0;
}
#endif

#if FW_VERSION == 201
s32 func_00000AF8(void) {
    return 0;
}
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/audiocodec", D_00000D1C);

INCLUDE_RODATA("nonmatchings/audiocodec", D_00000D94);
#endif
