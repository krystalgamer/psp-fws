#include "common.h"
#include "music_common_decls.h"

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_common_003774", music_common_100366B3);

INCLUDE_ASM("nonmatchings/music_common_003774", music_common_4BAF5236);
#endif

INCLUDE_ASM("nonmatchings/music_common_003774", music_common_BA8D36C8);

INCLUDE_ASM("nonmatchings/music_common_003774", music_common_469373C5);

INCLUDE_ASM("nonmatchings/music_common_003774", music_common_442E45E3);

INCLUDE_ASM("nonmatchings/music_common_003774", music_common_D4EA4ED1);

INCLUDE_RODATA("nonmatchings/music_common_003774", D_0001EDF0);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/music_common_003774", D_0001C5B8);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_common_003774", D_0001EE18);
#endif

INCLUDE_RODATA("nonmatchings/music_common_003774", D_0001EE50);

INCLUDE_ASM("nonmatchings/music_common_003774", music_common_301D0ED4);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_common_003774", func_000047C4);

INCLUDE_ASM("nonmatchings/music_common_003774", func_00004808);

void music_common_F6EAB2FA(void) {
    s32 temp_v0;

    if (D_0001D714 == 0) {
        temp_v0 = scePaf_B7E6052B(0x14);
        func_00004808(temp_v0);
        D_0001D714 = temp_v0;
    }
}

INCLUDE_ASM("nonmatchings/music_common_003774", music_common_0D0F5D23);

s32 music_common_E79F4C9B(void) {
    return D_0001D714;
}

INCLUDE_ASM("nonmatchings/music_common_003774", music_common_F97B96B0);

INCLUDE_ASM("nonmatchings/music_common_003774", music_common_73D4788A);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_common_003774", D_00016090);

INCLUDE_RODATA("nonmatchings/music_common_003774", D_000160C8);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_common_003774", func_00004100);

INCLUDE_ASM("nonmatchings/music_common_003774", func_00004AE0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_common_003774", func_000048CC);
#else
INCLUDE_ASM("nonmatchings/music_common_003774", func_00003EFC);

INCLUDE_ASM("nonmatchings/music_common_003774", func_00003F40);

void music_common_F6EAB2FA(void) {
    s32 temp_v0;

    if (D_00020674 == 0) {
        temp_v0 = scePaf_B7E6052B(0x14);
        func_00003F40(temp_v0);
        D_00020674 = temp_v0;
    }
}

INCLUDE_ASM("nonmatchings/music_common_003774", music_common_0D0F5D23);

s32 music_common_E79F4C9B(void) {
    return D_00020674;
}

INCLUDE_ASM("nonmatchings/music_common_003774", music_common_F97B96B0);

INCLUDE_ASM("nonmatchings/music_common_003774", music_common_73D4788A);

INCLUDE_RODATA("nonmatchings/music_common_003774", D_0001EEA8);

INCLUDE_RODATA("nonmatchings/music_common_003774", D_0001EEE0);

INCLUDE_ASM("nonmatchings/music_common_003774", func_00004100);
#endif

#if FW_VERSION == 300
INCLUDE_RODATA("nonmatchings/music_common_003774", D_0001EF10);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_common_003774", func_00004218);

INCLUDE_ASM("nonmatchings/music_common_003774", func_00004254);
#endif

INCLUDE_ASM("nonmatchings/music_common_003774", func_0000438C);
