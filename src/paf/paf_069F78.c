#include "common.h"
#include "paf_decls.h"

#if FW_VERSION == 282
s32 TIFFNumberOfTiles(void *arg0) {
    M2C_UNK *temp_s0;
    u32 var_a1;
    u32 var_a3;
    u32 var_a4;
    u32 var_s2;
    struct Unk_TIFFNumberOfTiles_temp_s1 *temp_s1;

    temp_s1 = arg0 + 0x20;
    var_a3 = temp_s1->unk1C;
    var_a4 = temp_s1->unk20;
    var_s2 = temp_s1->unk24;
    if (var_a3 == -1U) {
        var_a3 = temp_s1->unk10;
    }
    if (var_a4 == -1U) {
        var_a4 = temp_s1->unk14;
    }
    if (var_s2 == -1U) {
        var_s2 = temp_s1->unk18;
    }
    var_a1 = 0;
    if (((var_a3 != 0) & (var_a4 != 0)) && (var_s2 != 0)) {
        temp_s0 = "TIFFNumberOfTiles";
        var_a1 = multiply(arg0, multiply(arg0, (s32) ((u32) ((temp_s1->unk10 + var_a3) - 1) / var_a3), (u32) ((temp_s1->unk14 + var_a4) - 1) / var_a4, (s32) temp_s0), (u32) ((temp_s1->unk18 + var_s2) - 1) / var_s2, (s32) temp_s0);
    }
    if (temp_s1->unk56 == 2) {
        var_a1 = multiply(arg0, (s32) var_a1, (u32) temp_s1->unk3A, (s32) "TIFFNumberOfTiles");
    }
    return (s32) var_a1;
}

INCLUDE_ASM("nonmatchings/paf_069F78", TIFFTileRowSize);

INCLUDE_ASM("nonmatchings/paf_069F78", TIFFVTileSize);

void TIFFTileSize(struct Unk_TIFFTileSize_0 *arg0) {
    TIFFVTileSize((s32) arg0, arg0->unk40);
}

INCLUDE_ASM("nonmatchings/paf_069F78", TIFFDefaultTileSize);

INCLUDE_ASM("nonmatchings/paf_069F78", _TIFFDefaultTileSize);

void func_0006A3CC(void) {
    sceIoRead();
}

void func_0006A3E8(void) {
    sceIoWrite();
}

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006A404);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_069F78", func_0006A42C);
#endif

#if FW_VERSION == 282
void func_0006A42C(s32 arg0) {
    sceIoClose(arg0);
}
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_069F78", func_0006C83C);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006C858);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006C8B8);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006C8D4);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006C964);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006C9A8);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006C9E8);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006A5FC);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006A618);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006CBC8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_069F78", func_0006A448);

s32 func_0006A4A4(void) {
    return 0;
}

void func_0006A4AC(void) {
}

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006A4B4);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006A52C);

void func_0006A5FC(void) {
    scePaf_5FAC9869();
}

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006A618);

void func_0006A634(void) {
    scePaf_8FC65EB0();
}

void func_0006A650(void) {
    scePaf_6829D7AF();
}

void func_0006A66C(void) {
    scePaf_F95EA3F1();
}
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_069F78", func_0006A688);
#endif

#if FW_VERSION == 282
void func_0006A688(void) {
    scePaf_3FBD9639();
}
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_069F78", func_0006A66C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_069F78", func_0006A6A4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/paf_069F78", func_0006A6B0);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_069F78", func_0006CC38);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006CC78);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006CD50);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006CE40);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006CF40);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006D1A8);
#endif

#if FW_VERSION == 282
s32 func_0006A6BC(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_001A358C;
    D_001A358C = arg0;
    return temp_v0;
}

s32 func_0006A6CC(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_001A506C;
    D_001A506C = arg0;
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006A6DC);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006A7B0);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006B064);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006B3D8);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006B50C);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006B6A8);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006B7CC);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006B904);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006BB18);

void func_0006BBAC(struct Unk_TIFFCheckpointDirectory_0 *arg0, s32 arg1) {
    arg0->unkF8 = arg1;
}

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006BBB4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_069F78", D_00175E0C);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/paf_069F78", D_00180B7C);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00180B94);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00180BAC);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00180BC0);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00180BD8);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00180BEC);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00180C0C);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006D34C);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00180D34);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006D514);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006D610);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006DB24);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006DC24);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006E254);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006E5C4);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006E6A4);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006E6E8);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006E7B4);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006F084);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_069F78", func_0006BC54);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006BE8C);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006C8DC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/paf_069F78", func_0006C954);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_069F78", func_0006F34C);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006F668);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006F9A8);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006FAB0);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006FDAC);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006FF1C);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006FF40);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_069F78", func_0006CAE0);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006CD8C);

INCLUDE_ASM("nonmatchings/paf_069F78", TIFFYCbCrtoRGB);

INCLUDE_ASM("nonmatchings/paf_069F78", TIFFYCbCrToRGBInit);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006D370);

void func_0006D3E4(s32 arg0) {
    func_0006D370(arg0, (s32) &D_00175EFC);
}

void func_0006D404(s32 arg0) {
    func_0006D370(arg0, (s32) &D_00175F08);
}

void func_0006D424(s32 arg0) {
    func_0006D370(arg0, (s32) &D_00175F10);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_069F78", D_00175EFC);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00175F08);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00175F10);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_069F78", func_0006FF64);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00070038);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0007005C);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00070080);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_069F78", func_0006D444);

void func_0006D4B8(s32 arg0) {
    func_0006D444(arg0, (s32) &D_00175EFC);
}

void func_0006D4D8(s32 arg0) {
    func_0006D444(arg0, (s32) &D_00175F08);
}

void func_0006D4F8(s32 arg0) {
    func_0006D444(arg0, (s32) &D_00175F10);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/paf_069F78", func_0006D518);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_069F78", func_00070104);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00070148);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0007018C);
#endif

#if FW_VERSION == 282
s32 func_0006D544(void) {
    return 1;
}

s32 func_0006D54C(void) {
    return 1;
}

void func_0006D554(void) {
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/paf_069F78", func_0006D55C);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_069F78", func_000702C4);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000704E4);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0007069C);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00070748);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000707D8);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000709C0);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00070AB8);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00070D44);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00070DF0);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00070E98);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00070F10);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00070F74);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00070F90);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00070FF4);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000713EC);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_001811D0);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_001811F0);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000728C8);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00072970);
#endif

#if FW_VERSION == 282
s32 func_0006D618(s32 arg0, s32 arg1) {
    s32 var_v0;
    struct Unk_func_0006D618_temp_s2 *temp_s2;

    temp_s2 = func_0006D680(arg1 & 0xFFFF);
    func_0006D55C(arg0);
    var_v0 = 1;
    if (temp_s2 != NULL) {
        var_v0 = temp_s2->unk8(arg0, arg1);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006D680);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006D6E4);

INCLUDE_ASM("nonmatchings/paf_069F78", _TIFFWriteDirectory);

void TIFFWriteDirectory(void *arg0) {
    _TIFFWriteDirectory(arg0, 1);
}

s32 TIFFCheckpointDirectory(struct Unk_TIFFCheckpointDirectory_0 *arg0) {
    s32 temp_s0;

    if (arg0->unkA4 != 0) {

    } else {
        func_0006B3D8();
    }
    temp_s0 = _TIFFWriteDirectory(arg0, 0);
    func_0006BBAC(arg0, arg0->unk194(arg0->unk188, 0, 2));
    return temp_s0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176078);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176098);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_001760C0);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_001760EC);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176118);

INCLUDE_ASM("nonmatchings/paf_069F78", TIFFWriteNormalTag);

INCLUDE_ASM("nonmatchings/paf_069F78", TIFFSetupShortLong);

INCLUDE_ASM("nonmatchings/paf_069F78", TIFFSetupShort);

INCLUDE_ASM("nonmatchings/paf_069F78", TIFFWritePerSampleShorts);

INCLUDE_ASM("nonmatchings/paf_069F78", TIFFWritePerSampleAnys);

INCLUDE_ASM("nonmatchings/paf_069F78", TIFFSetupShortPair);

INCLUDE_ASM("nonmatchings/paf_069F78", TIFFWriteShortTable);

INCLUDE_ASM("nonmatchings/paf_069F78", TIFFWriteByteArray);

INCLUDE_ASM("nonmatchings/paf_069F78", TIFFWriteShortArray);

INCLUDE_ASM("nonmatchings/paf_069F78", TIFFWriteLongArray);

INCLUDE_ASM("nonmatchings/paf_069F78", TIFFWriteRationalArray);

INCLUDE_ASM("nonmatchings/paf_069F78", TIFFWriteFloatArray);

void TIFFWriteDoubleArray(void) {
    func_0006F340();
}

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006EEA4);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006F24C);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006F308);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006F340);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176378);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_069F78", func_00072990);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_001812D8);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00181300);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176398);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/paf_069F78", D_00181348);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00181410);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_069F78", D_001763B8);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/paf_069F78", D_00181460);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00181464);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_069F78", func_0006F6C0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_069F78", D_0017642C);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176430);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176434);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176438);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_0017643C);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176440);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176448);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_0017644C);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176458);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176464);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_0017646C);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176474);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176484);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176490);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_0017649C);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_001764AC);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_001764BC);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_001764C8);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_001764D0);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_001764E0);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_001764EC);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_001764F4);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006F988);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_069F78", func_00072C5C);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00072CB8);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00072D38);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00072E3C);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00072EFC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_069F78", func_0006F9CC);

s32 func_0006F9EC(s32 arg0) {
    s32 temp_v1;
    s32 var_a0;
    struct Unk_func_0006F9EC_temp_v0 *temp_v0;

    temp_v0 = func_0006D680(arg0 & 0xFFFF);
    var_a0 = 0;
    if (temp_v0 != NULL) {
        temp_v1 = temp_v0->unk8;
        if (temp_v1 != 0) {
            var_a0 = temp_v1 != (s32) &func_0006F9CC;
        }
    }
    return var_a0;
}

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006FA2C);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006FB00);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006FB94);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/paf_069F78", func_0006FBC0);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_069F78", func_00072FDC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_069F78", func_0006FBFC);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_0017655C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_069F78", D_001767EC);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/paf_069F78", D_00181824);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00181AB4);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00181B90);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00181BB4);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00181BE8);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00181BF0);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00181CF0);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00181DF0);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00181E04);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176A7C);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176A84);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/paf_069F78", D_00181E38);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_069F78", func_0006FC58);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006FCB8);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006FD18);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006FD9C);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0006FDFC);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00070524);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176BE4);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/paf_069F78", D_00181E78);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00181E98);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_069F78", func_00071554);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00071884);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00071A2C);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00071B64);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00071EE8);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176CC0);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176CE4);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176DE4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176EE4);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/paf_069F78", D_00181EC4);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00181EF8);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176EEC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176F20);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176F28);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176F34);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176F40);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176F50);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176F68);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176F78);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176F88);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176F94);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/paf_069F78", D_00181F84);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_069F78", D_00176F9C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_069F78", D_00177078);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00177088);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_069F78", func_0007306C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_069F78", D_0017709C);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_069F78", func_000730E0);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00073154);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00073220);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00073294);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00073AAC);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00074D7C);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000750E8);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000752DC);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00075470);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_069F78", D_001770AC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_069F78", D_001770C0);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_001770D4);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_069F78", func_000758A0);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00182184);

INCLUDE_RODATA("nonmatchings/paf_069F78", func_001690E8);

INCLUDE_RODATA("nonmatchings/paf_069F78", func_00169128);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00185ADC);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00192184);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00199A60);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00199AD0);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00199AF0);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00199F00);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000759B4);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00075A78);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00075B98);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00075C38);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00075EC4);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000760E8);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_069F78", D_001770F4);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00177100);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_00177134);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00072118);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000721D4);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00072384);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000726DC);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00072814);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000728A4);

void func_00072988(struct Unk_func_00072988_0 *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    struct Unk_func_00072988_temp_s1 *temp_s1;

    temp_s1 = arg0->unk15C;
    temp_v1 = temp_s1->unk4C;
    arg0->unk1B4 = (s32) temp_s1->unk30;
    arg0->unk1B0 = (s32) temp_s1->unk34;
    if (temp_v1 == 0) {

    } else {
        func_0006A618(temp_v1);
    }
    if (temp_s1->unk5C == 0) {

    } else {
        func_0006A618(temp_s1->unk5C);
    }
    temp_v1_2 = arg0->unk15C->unk24;
    if (temp_v1_2 != 0) {
        func_0006A618(temp_v1_2);
    }
    func_0006A618((s32) arg0->unk15C);
    arg0->unk15C = NULL;
    func_0006D55C((s32) arg0);
}

INCLUDE_ASM("nonmatchings/paf_069F78", func_00072A30);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00072D70);

void func_0007304C(void) {
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/paf_069F78", func_00073054);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_069F78", func_000762DC);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00076370);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00076FF4);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000770D8);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000771A0);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000777F0);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00077884);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00077918);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00077D7C);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000790C4);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000794A8);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00079564);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00079604);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00079690);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00079714);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000797A8);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00079850);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000798E4);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0007998C);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00079A0C);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00079A60);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00079AE4);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00079B40);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00079B90);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00079C54);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00079CA4);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00079CF8);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00079D7C);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00079DF0);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00079E30);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00079EBC);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00079F0C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_069F78", func_000731D4);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00073234);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00073DF8);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00073E84);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00073F34);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00073FC8);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000745B0);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0007460C);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00074668);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000747B8);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00074910);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00074970);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000749B8);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00074A2C);

s32 func_00074AA0(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        jpeg_set_defaults(arg0);
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00074AE8(s32 arg0, M2C_UNK arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        jpeg_set_colorspace(arg0, arg1);
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00074B40(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        jpeg_set_quality(arg0, arg1, arg2);
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00074BA8(s32 arg0, M2C_UNK arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        func_0008458C(arg0, arg1);
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00074C00(s32 arg0, M2C_UNK arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        func_000849A8(arg0, arg1);
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00074C58(void *arg0, void *arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = -1;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        var_v1 = func_00084A70(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 func_00074CC0(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_v1;

    var_v1 = -1;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        var_v1 = func_00084BA4(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 func_00074D28(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        func_000845E4(arg0);
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00074D70(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        func_00084910(arg0);
        var_v1 = 1;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/paf_069F78", func_00074DB8);

s32 func_00074E0C(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        func_0008A69C(arg0);
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00074E54(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = -1;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        var_v1 = func_0008A928(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 func_00074EBC(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_v1;

    var_v1 = -1;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        var_v1 = func_0008AA20(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 func_00074F24(s32 arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        var_v1 = func_0008A588(arg0);
    }
    return var_v1;
}

s32 func_00074F6C(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        jpeg_abort(arg0);
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00074FB4(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        jpeg_destroy(arg0);
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00074FFC(struct Unk_func_00074FFC_0 *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A((u8 *)arg0 + 0x254) == 0) {
        var_v1 = arg0->unk4->unk8(arg0, arg1, arg2, arg3);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/paf_069F78", func_0007507C);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00075094);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000750E4);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00075104);

void func_00075134(struct Unk_func_00075134_0 *arg0) {
    arg0->unk654 = (s32) arg0->unk6D4;
    arg0->unk658 = (s32) arg0->unk6D8;
}

INCLUDE_ASM("nonmatchings/paf_069F78", func_00075148);

void func_000751DC(struct Unk_func_000751DC_0 *arg0) {
    arg0->unk6D8 = (s32) (arg0->unk6D8 - arg0->unk658);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_069F78", D_0017714C);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_069F78", D_0017754C);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_0017F54C);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_0018F54C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_069F78", D_0018F558);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_0018F55C);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_0018F56C);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_0018F57C);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_0018F588);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/paf_069F78", D_0018F54C);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_0019A5C8);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0007A034);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0007A504);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0007A748);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0007A970);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0007A9C4);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0007A9DC);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0007AA24);

INCLUDE_RODATA("nonmatchings/paf_069F78", D_0019A7B4);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0007AD90);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0007AEB8);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0007B108);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0007B270);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0007B30C);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0007B614);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0007B7F0);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0007BC34);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0007BD50);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0007C034);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0007C074);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0007C118);

INCLUDE_ASM("nonmatchings/paf_069F78", func_0007C1F8);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_069F78", D_0018F590);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_069F78", D_0018F630);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000751F0);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000752A0);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000752B8);

void func_00075308(struct Unk_func_00075308_0 *arg0, s32 arg1) {
    s32 temp_v0;

    if (arg1 > 0) {
        temp_v0 = arg0->unk66C;
        if (temp_v0 >= arg1) {
            arg0->unk66C = (s32) (temp_v0 - arg1);
            arg0->unk668 = (s32) (arg0->unk668 + arg1);
        } else {
            func_000752B8((s32) arg0);
        }
    }
}

void func_00075354(void) {
}

INCLUDE_ASM("nonmatchings/paf_069F78", func_0007535C);

void func_000753AC(struct Unk_func_000753AC_0 *arg0) {
    arg0->unk668 = (s32) arg0->unk6D4;
    arg0->unk66C = (s32) arg0->unk6D8;
}

INCLUDE_ASM("nonmatchings/paf_069F78", func_000753C0);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000753F0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_069F78", D_0018F668);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_069F78", func_000754A8);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00075588);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000759F0);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00075C2C);

void func_00075E24(s32 arg0, s32 arg1) {
    struct Unk_func_00075E24_temp_v0 *temp_v0;

    temp_v0 = M2C_FIELD(((arg1 * 4) + arg0), void **, 0x40);
    if (temp_v0 != NULL) {
        temp_v0->unk80 = 0;
    }
}

INCLUDE_ASM("nonmatchings/paf_069F78", func_00075E40);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00075E68);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00075F6C);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000761EC);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000764F8);

INCLUDE_ASM("nonmatchings/paf_069F78", func_000765D4);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00076828);

void func_0007694C(struct Unk_func_0007694C_0 *arg0) {
    struct Unk_func_0007694C_temp_s0 *temp_s0;

    temp_s0 = arg0->unk15C;
    arg0->unk1B4 = (s32) temp_s0->unk6C4;
    arg0->unk1B0 = (s32) temp_s0->unk6C8;
    if (temp_s0 != NULL) {
        if (temp_s0->unk1CC == 0) {

        } else {
            func_00074FB4((s32) temp_s0);
        }
        if (temp_s0->unk6D4 != 0) {
            func_0006A618(temp_s0->unk6D4);
        }
    }
    func_0006A618((s32) arg0->unk15C);
    arg0->unk15C = NULL;
    func_0006D55C((s32) arg0);
}

INCLUDE_ASM("nonmatchings/paf_069F78", func_000769D8);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00076D74);

INCLUDE_ASM("nonmatchings/paf_069F78", func_00076E28);

void func_00077100(void) {
}
#endif
