#include "common.h"
#include "music_common_decls.h"

s32 music_common_2C03147D(void *arg0) {
    s32 var_v1;
    void **temp_v0;

    var_v1 = 0x8010C701;
    if (M2C_FIELD(arg0, u8 *, 0xAC) != 0) {
        temp_v0 = M2C_FIELD(arg0, void ***, 0);
        var_v1 = M2C_FIELD(*temp_v0, s32 (**)(void **), 8)(temp_v0);
    }
    return var_v1;
}

s32 music_common_3B03E04A(void *arg0) {
    s32 var_v1;
    void **temp_v0;

    var_v1 = 0x8010C701;
    if (M2C_FIELD(arg0, u8 *, 0xAC) != 0) {
        temp_v0 = M2C_FIELD(arg0, void ***, 0);
        var_v1 = M2C_FIELD(*temp_v0, s32 (**)(void **), 0xC)(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/music_common/nonmatchings/music_common_0055B4", func_00005644);

INCLUDE_ASM("tmp/asm/282/music_common/nonmatchings/music_common_0055B4", func_000056CC);

INCLUDE_ASM("tmp/asm/282/music_common/nonmatchings/music_common_0055B4", music_common_9E5A3EE2);

INCLUDE_ASM("tmp/asm/282/music_common/nonmatchings/music_common_0055B4", music_common_74CC985E);

void func_00005B40(M2C_UNK **arg0) {
    *arg0 = &D_0001F2C8;
}

INCLUDE_ASM("tmp/asm/282/music_common/nonmatchings/music_common_0055B4", func_00005B50);

void func_00005B60(M2C_UNK **arg0) {
    *arg0 = &D_0001F2C8;
    scePaf_4E67BB08(arg0);
}

s32 music_common_907343F3(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_00005B90(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 music_common_703558A2(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

INCLUDE_ASM("tmp/asm/282/music_common/nonmatchings/music_common_0055B4", music_common_575CEC09);

