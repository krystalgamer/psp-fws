/* cflags: -O0 */
#include "common.h"
#include "lftv_middleware_decls.h"

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00019118);
#else
void func_00019118(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 8)(D_0005BC40);
}
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00034614);
#endif

void func_0001915C(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0xC)(D_0005BC40);
}

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_000191A0);
#else
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_000191EC);
#endif

#if FW_VERSION == 303
void func_000191EC(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0x14)(D_0005BC40);
}

void func_00019230(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0x18)(D_0005BC40);
}
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00019274);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_000192C0);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001930C);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00019368);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_000193AC);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_000193F0);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00019434);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00019490);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00034950);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00019528);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001956C);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00034A2C);
#else
void func_00019368(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0x28)(D_0005BC40);
}

void func_000193AC(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0x2C)(D_0005BC40);
}

void func_000193F0(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0x30)(D_0005BC40);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00019434);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00019490);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_000194DC);

s32 func_00019528(void) {
    return M2C_FIELD(*D_0005BC40, s32 (**)(void **), 0x40)(D_0005BC40);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001956C);

void func_000195B8(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0x48)(D_0005BC40);
}
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_000195FC);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001967C);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_000196D0);
#else
void func_000196D0(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0x54)(D_0005BC40);
}
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00034B88);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00034BCC);
#endif

void func_00019714(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0x58)(D_0005BC40);
}

void func_00019758(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0x5C)(D_0005BC40);
}

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", sceVshLftvMw_8F731E0A);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", sceVshLftvMw_70B40FD8);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_000197F0);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00019834);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00034D84);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_000199EC);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00034DF4);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001979C);
#endif

#if FW_VERSION != 260
void func_000197F0(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0x64)(D_0005BC40);
}

void func_00019834(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0x68)(D_0005BC40);
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00034D84);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_000199EC);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", sceVshLftvMw_8F731E0A);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", sceVshLftvMw_70B40FD8);
#endif

#if FW_VERSION != 260
void func_00019920(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0x74)(D_0005BC40);
}
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00019A74);
#else
void func_00019964(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0x78)(D_0005BC40);
}
#endif

#if FW_VERSION != 260
void func_000199A8(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0x7C)(D_0005BC40);
}
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00034ED8);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00034EC0);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00019A30);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00034F60);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00034F8C);
#endif

#if FW_VERSION == 303
void func_000199EC(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0x80)(D_0005BC40);
}
#endif

#if FW_VERSION != 260
void func_00019A30(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0x84)(D_0005BC40);
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00034F60);
#endif

#if FW_VERSION == 303
void func_00019A74(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0x88)(D_0005BC40);
}
#endif

#if FW_VERSION != 260
void func_00019AB8(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0x8C)(D_0005BC40);
}
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00034FE8);
#else
void func_00019AFC(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0x90)(D_0005BC40);
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00019B40);
#else
void func_00019B40(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0x94)(D_0005BC40);
}
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_000350A0);
#else
void func_00019B84(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0x98)(D_0005BC40);
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00019BC8);
#else
void func_00019BC8(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0x9C)(D_0005BC40);
}
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00019C0C);

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_000351B4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00019C80);
#endif

#if FW_VERSION == 303
void func_00019C80(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0xA4)(D_0005BC40);
}
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00019CC4);

#if FW_VERSION != 260
void func_00019D38(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0xAC)(D_0005BC40);
}
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_000352A8);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00035290);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00019D7C);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00019DF0);

#if FW_VERSION != 260
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00019E3C);
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00019E88);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0003536C);
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00019ECC);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00019F10);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00019F5C);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00019FA8);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00019FF4);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00035524);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001A08C);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001A0D8);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001A11C);
#endif

#if FW_VERSION == 303
void func_00019E88(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0xBC)(D_0005BC40);
}

void func_00019ECC(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0xC0)(D_0005BC40);
}
#endif

#if FW_VERSION != 260
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00019F10);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00019F5C);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00019FA8);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00019FF4);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001A040);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001A08C);

void func_0001A0D8(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0xDC)(D_0005BC40);
}

void func_0001A11C(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0xE0)(D_0005BC40);
}

void func_0001A160(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0xE4)(D_0005BC40);
}
#endif

#if FW_VERSION == 303
void func_0001A1A4(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0xE8)(D_0005BC40);
}

void func_0001A1E8(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0xEC)(D_0005BC40);
}

void func_0001A22C(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0xF0)(D_0005BC40);
}

void func_0001A270(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0xF4)(D_0005BC40);
}
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001A2B4);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001A300);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001A34C);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001A398);

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0003575C);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001A3E4);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001A438);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001A4A0);
#else
void func_0001A4A0(void) {
    M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0x110)(D_0005BC40);
}
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001A4E4);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001A534);
#else
s32 func_0001A534(void) {
    if (D_0005BC40 != NULL) {
        M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 0x48)(D_0005BC40);
    }
    if (D_0005BC40 != NULL) {
        M2C_FIELD(*D_0005BC40, M2C_UNK (**)(void **), 4)(D_0005BC40);
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001A5BC);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001A678);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00035A94);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00035AE8);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00035B3C);
#else
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001A734);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001A7F8);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001A8BC);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001A980);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001A9A4);

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/lftv_middleware_019118", D_000546B8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_019118", D_000546E0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_019118", D_00054700);

INCLUDE_RODATA("nonmatchings/lftv_middleware_019118", D_00054704);

INCLUDE_RODATA("nonmatchings/lftv_middleware_019118", D_0005470C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_019118", D_00054720);

INCLUDE_RODATA("nonmatchings/lftv_middleware_019118", D_00054738);
#endif

INCLUDE_RODATA("nonmatchings/lftv_middleware_019118", D_00054758);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001A9C8);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001AA4C);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001AA70);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001AA94);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00035D18);
#else
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001AADC);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001AB24);

INCLUDE_RODATA("nonmatchings/lftv_middleware_019118", D_000547CC);

INCLUDE_RODATA("nonmatchings/lftv_middleware_019118", D_000547E4);

INCLUDE_RODATA("nonmatchings/lftv_middleware_019118", D_000547F8);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001AC24);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001ACB8);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001ACDC);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001AD00);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001AD24);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001ADA0);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001ADEC);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001AE70);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001AEBC);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001AEF0);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00036230);
#else
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001AF64);
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001AFAC);
#else
s32 func_0001AFAC(s32 arg0) {
    if (D_0005BC48 != NULL) {
        M2C_FIELD(*D_0005BC48, M2C_UNK (**)(void **), 0x1C)(D_0005BC48);
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B008);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B0B0);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B178);
#else
s32 func_0001B178(s32 arg0) {
    s32 sp4;

    if (D_0005BC48 != NULL) {
        sp4 = M2C_FIELD(*D_0005BC48, s32 (**)(void **), 0x14)(D_0005BC48);
    } else {
        sp4 = 1;
    }
    return sp4;
}
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B1E4);
#else
s32 func_0001B1E4(s32 arg0) {
    s32 sp4;

    if (D_0005BC48 != NULL) {
        sp4 = M2C_FIELD(*D_0005BC48, s32 (**)(void **), 0x18)(D_0005BC48);
    } else {
        sp4 = 1;
    }
    return sp4;
}

s32 func_0001B250(s32 arg0) {
    s32 sp4;

    if (D_0005BC48 != NULL) {
        sp4 = M2C_FIELD(*D_0005BC48, s32 (**)(void **), 0x10)(D_0005BC48);
    } else {
        sp4 = 1;
    }
    return sp4;
}
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B2BC);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B338);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B388);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B3DC);

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00036814);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B420);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B45C);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B49C);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B4C0);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B538);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B55C);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B580);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B630);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B654);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B678);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B69C);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B6C0);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B6E4);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B720);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B744);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B780);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B7A4);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B7E0);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B808);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B830);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B854);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B878);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B8A0);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B8C8);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B8F0);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B918);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B940);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B968);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B98C);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B9B0);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B9D4);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001B9F8);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001BA1C);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001BA40);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001BA64);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001BA8C);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001BAB4);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001BADC);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001BB04);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00036F08);
#else
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001BB30);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001BB74);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001BB98);

void func_0001C218(void) {
    func_0001BB98(1, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001C248);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001C2A4);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001C2E4);

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_00037768);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001C304);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001C344);

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001C374);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001C3C8);

INCLUDE_ASM("nonmatchings/lftv_middleware_019118", func_0001C41C);
#endif
