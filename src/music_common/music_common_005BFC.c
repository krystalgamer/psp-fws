/* lang: c++ */
/* cflags: -O1 */
#include "common.h"
#include "music_common_decls.h"

#if FW_VERSION < 350
s32 music_common_D29A7B4B(struct Unk_music_common_D29A7B4B_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unkC;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk4 = 0;
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/music_common_005BFC", func_00005C10);

void func_00005CC4(struct Unk_func_00005CC4_0 *arg0) {
    s8 *temp_v1;

    temp_v1 = arg0->unkC;
    if ((temp_v1 != NULL) && (arg0->unk4 != 0)) {
        *temp_v1 = 0;
    }
    arg0->unk8 = 0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_common_005BFC", func_00006164);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_005BFC", music_common_E12719F4);
#endif

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/music_common_005BFC", func_00005CE4);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_005BFC", music_common_28010044);
#endif

INCLUDE_ASM("nonmatchings/music_common_005BFC", func_00005D74);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_005BFC", music_common_F4165FC1);
#else
INCLUDE_ASM("nonmatchings/music_common_005BFC", music_common_D27DF99A);
#endif

INCLUDE_ASM("nonmatchings/music_common_005BFC", func_00005E04);

#if FW_VERSION >= 350
s32 music_common_CC127E5B(s32 arg0) {
    return arg0 + 4;
}

s32 music_common_9133AD14(s32 arg0) {
    return arg0 + 0x14;
}

s32 music_common_10968477(s32 arg0) {
    return arg0 + 0x24;
}

s32 music_common_CF9FBA49(s32 arg0) {
    return arg0 + 0x34;
}

INCLUDE_ASM("nonmatchings/music_common_005BFC", music_common_7D34EDD6);
#else
s32 music_common_90D09602(s32 arg0) {
    return arg0 + 4;
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
s32 music_common_D92D810F(s32 arg0) {
    return arg0 + 0x14;
}

s32 music_common_83F66E1F(s32 arg0) {
    return arg0 + 0x24;
}

s32 music_common_EE5C2594(s32 arg0) {
    return arg0 + 0x34;
}
#endif

#if FW_VERSION < 310
s32 music_common_83F66E1F(s32 arg0) {
    return arg0 + 0x14;
}

s32 music_common_EE5C2594(s32 arg0) {
    return arg0 + 0x24;
}
#endif
