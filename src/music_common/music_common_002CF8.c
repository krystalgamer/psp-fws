/* cflags: -Os */
#include "common.h"
#include "music_common_decls.h"

void func_00002CF8(void) {
    s32 temp_v0;

    temp_v0 = music_common_E79F4C9B();
    if (temp_v0 != 0) {
        func_00004100(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/music_common/nonmatchings/music_common_002CF8", func_00002D24);

void func_00002D68(void) {
    sceIoClose();
}

INCLUDE_ASM("tmp/asm/282/music_common/nonmatchings/music_common_002CF8", func_00002D84);

INCLUDE_ASM("tmp/asm/282/music_common/nonmatchings/music_common_002CF8", func_00002DC0);

INCLUDE_ASM("tmp/asm/282/music_common/nonmatchings/music_common_002CF8", func_00002DF0);

INCLUDE_ASM("tmp/asm/282/music_common/nonmatchings/music_common_002CF8", func_00002E2C);

INCLUDE_ASM("tmp/asm/282/music_common/nonmatchings/music_common_002CF8", music_common_F58380B2);

INCLUDE_ASM("tmp/asm/282/music_common/nonmatchings/music_common_002CF8", music_common_88D3D8C8);

INCLUDE_ASM("tmp/asm/282/music_common/nonmatchings/music_common_002CF8", music_common_2830D0CE);

INCLUDE_ASM("tmp/asm/282/music_common/nonmatchings/music_common_002CF8", music_common_7DBFD08B);

INCLUDE_ASM("tmp/asm/282/music_common/nonmatchings/music_common_002CF8", music_common_CC674C55);

INCLUDE_ASM("tmp/asm/282/music_common/nonmatchings/music_common_002CF8", func_00003560);

INCLUDE_ASM("tmp/asm/282/music_common/nonmatchings/music_common_002CF8", func_000035A8);

INCLUDE_ASM("tmp/asm/282/music_common/nonmatchings/music_common_002CF8", func_000035F0);

u8 music_common_266E7951(struct Unk_music_common_266E7951_0 *arg0) {
    return arg0->unk8;
}

s32 music_common_55F1B860(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    if (M2C_FIELD(arg0, u8 *, 8) != 0) {
        temp_v0 = func_00004450(M2C_FIELD(arg0, s32 *, 4), arg0 + 0x20);
        var_v1 = temp_v0;
        if (temp_v0 >= 0) {
            var_v1 = M2C_FIELD(arg0, s32 *, 0x20);
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/music_common/nonmatchings/music_common_002CF8", music_common_89CDD289);

INCLUDE_ASM("tmp/asm/282/music_common/nonmatchings/music_common_002CF8", music_common_2650B4C5);

INCLUDE_ASM("tmp/asm/282/music_common/nonmatchings/music_common_002CF8", music_common_3B1DDE2B);

s32 music_common_E0EB40AC(s32 arg0) {
    return arg0 + 0xC;
}

