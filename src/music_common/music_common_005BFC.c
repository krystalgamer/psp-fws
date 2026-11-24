/* cflags: -O1 */
#include "common.h"
#include "music_common_decls.h"

s32 music_common_D29A7B4B(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/music_common/nonmatchings/music_common_005BFC", func_00005C10);

void func_00005CC4(void *arg0) {
    s8 *temp_v1;

    temp_v1 = M2C_FIELD(arg0, s8 **, 0xC);
    if ((temp_v1 != NULL) && (M2C_FIELD(arg0, s32 *, 4) != 0)) {
        *temp_v1 = 0;
    }
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("tmp/asm/282/music_common/nonmatchings/music_common_005BFC", func_00005CE4);

INCLUDE_ASM("tmp/asm/282/music_common/nonmatchings/music_common_005BFC", music_common_28010044);

INCLUDE_ASM("tmp/asm/282/music_common/nonmatchings/music_common_005BFC", func_00005D74);

INCLUDE_ASM("tmp/asm/282/music_common/nonmatchings/music_common_005BFC", music_common_D27DF99A);

INCLUDE_ASM("tmp/asm/282/music_common/nonmatchings/music_common_005BFC", func_00005E04);

s32 music_common_90D09602(s32 arg0) {
    return arg0 + 4;
}

s32 music_common_83F66E1F(s32 arg0) {
    return arg0 + 0x14;
}

s32 music_common_EE5C2594(s32 arg0) {
    return arg0 + 0x24;
}

