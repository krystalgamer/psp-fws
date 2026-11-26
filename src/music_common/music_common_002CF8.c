/* cflags: -Os */
#include "common.h"
#include "music_common_decls.h"

#if FW_VERSION >= 350
void func_00002CF8(void) {
    s32 temp_v0;

    temp_v0 = music_common_A05B4714();
    if (temp_v0 != 0) {
        func_00004100(temp_v0);
    }
}
#else
void func_00002CF8(void) {
    s32 temp_v0;

    temp_v0 = music_common_E79F4C9B();
    if (temp_v0 != 0) {
        func_00004100(temp_v0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/music_common_002CF8", func_00002D24);

void func_00002D68(void) {
    sceIoClose();
}

INCLUDE_ASM("nonmatchings/music_common_002CF8", func_00002D84);

INCLUDE_ASM("nonmatchings/music_common_002CF8", func_00002DC0);

INCLUDE_ASM("nonmatchings/music_common_002CF8", func_00002DF0);

INCLUDE_ASM("nonmatchings/music_common_002CF8", func_00002E2C);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_002CF8", music_common_0F283001);

INCLUDE_ASM("nonmatchings/music_common_002CF8", music_common_AB01684D);

INCLUDE_ASM("nonmatchings/music_common_002CF8", music_common_5E9661B6);

INCLUDE_ASM("nonmatchings/music_common_002CF8", music_common_C8EB5F17);

INCLUDE_ASM("nonmatchings/music_common_002CF8", music_common_290A738D);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_common_002CF8", music_common_7C3D8FE0);

INCLUDE_ASM("nonmatchings/music_common_002CF8", music_common_A507007E);

INCLUDE_ASM("nonmatchings/music_common_002CF8", music_common_A5ED9F3D);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_002CF8", music_common_F58380B2);

INCLUDE_ASM("nonmatchings/music_common_002CF8", music_common_88D3D8C8);

INCLUDE_ASM("nonmatchings/music_common_002CF8", music_common_2830D0CE);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_002CF8", music_common_7DBFD08B);

INCLUDE_ASM("nonmatchings/music_common_002CF8", music_common_CC674C55);
#endif

INCLUDE_ASM("nonmatchings/music_common_002CF8", func_00003560);

INCLUDE_ASM("nonmatchings/music_common_002CF8", func_000035A8);

INCLUDE_ASM("nonmatchings/music_common_002CF8", func_000035F0);

#if FW_VERSION >= 350
u8 music_common_4C27C0B8(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 8);
}

s32 music_common_9D08BEA6(void *arg0) {
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

INCLUDE_ASM("nonmatchings/music_common_002CF8", music_common_32452553);

INCLUDE_ASM("nonmatchings/music_common_002CF8", music_common_675C84CB);

INCLUDE_ASM("nonmatchings/music_common_002CF8", music_common_3C0BED13);

s32 music_common_AAFECBCA(s32 arg0) {
    return arg0 + 0xC;
}

INCLUDE_ASM("nonmatchings/music_common_002CF8", music_common_EF761975);

INCLUDE_ASM("nonmatchings/music_common_002CF8", music_common_8F65DD08);

INCLUDE_ASM("nonmatchings/music_common_002CF8", music_common_70DC580F);

INCLUDE_ASM("nonmatchings/music_common_002CF8", music_common_00E75CCB);

INCLUDE_ASM("nonmatchings/music_common_002CF8", music_common_86225216);

INCLUDE_ASM("nonmatchings/music_common_002CF8", music_common_39BFF23D);
#else
u8 music_common_266E7951(struct Unk_music_common_266E7951_0 *arg0) {
    return arg0->unk8;
}

s32 music_common_55F1B860(struct Unk_music_common_55F1B860_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    if (arg0->unk8 != 0) {
        temp_v0 = func_00004450(arg0->unk4, &arg0->unk20);
        var_v1 = temp_v0;
        if (temp_v0 >= 0) {
            var_v1 = arg0->unk20;
        }
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/music_common_002CF8", music_common_89CDD289);

INCLUDE_ASM("nonmatchings/music_common_002CF8", music_common_2650B4C5);

INCLUDE_ASM("nonmatchings/music_common_002CF8", music_common_3B1DDE2B);

s32 music_common_E0EB40AC(s32 arg0) {
    return arg0 + 0xC;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_common_002CF8", music_common_AE08C566);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_common_002CF8", music_common_4BAF5236);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_common_002CF8", music_common_DE737EA4);
#endif
