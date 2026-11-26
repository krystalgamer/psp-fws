#include "common.h"
#include "music_common_decls.h"

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 music_common_2C03147D(struct Unk_music_common_2C03147D_0 *arg0) {
    s32 var_v1;
    struct Unk_vt_music_common_2C03147D_temp_v0 **temp_v0;

    var_v1 = 0x8010C701;
    if (arg0->unkAC != 0) {
        temp_v0 = arg0->unk0;
        var_v1 = (*temp_v0)->unk8(temp_v0);
    }
    return var_v1;
}

s32 music_common_3B03E04A(struct Unk_music_common_3B03E04A_0 *arg0) {
    s32 var_v1;
    struct Unk_vt_music_common_3B03E04A_temp_v0 **temp_v0;

    var_v1 = 0x8010C701;
    if (arg0->unkAC != 0) {
        temp_v0 = arg0->unk0;
        var_v1 = (*temp_v0)->unkC(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/music_common_0055B4", func_00005644);

INCLUDE_ASM("nonmatchings/music_common_0055B4", func_000056CC);

INCLUDE_ASM("nonmatchings/music_common_0055B4", music_common_9E5A3EE2);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_0055B4", music_common_74CC985E);

void func_00005B40(M2C_UNK **arg0) {
    *arg0 = &D_0001F2C8;
}

INCLUDE_ASM("nonmatchings/music_common_0055B4", func_00005B50);

void func_00005B60(M2C_UNK **arg0) {
    *arg0 = &D_0001F2C8;
    scePaf_4E67BB08(arg0);
}

s32 music_common_907343F3(struct Unk_music_common_907343F3_0 *arg0) {
    return arg0->unkC;
}

s32 func_00005B90(struct Unk_func_00005B90_0 *arg0) {
    return arg0->unk4;
}

s32 music_common_703558A2(struct Unk_music_common_703558A2_0 *arg0) {
    return arg0->unk8;
}

INCLUDE_ASM("nonmatchings/music_common_0055B4", music_common_575CEC09);
#endif
