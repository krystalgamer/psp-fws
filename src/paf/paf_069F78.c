#include "common.h"
#include "paf_decls.h"

s32 TIFFNumberOfTiles(void *arg0) {
    M2C_UNK *temp_s0;
    u32 var_a1;
    u32 var_a3;
    u32 var_a4;
    u32 var_s2;
    void *temp_s1;

    temp_s1 = arg0 + 0x20;
    var_a3 = M2C_FIELD(temp_s1, u32 *, 0x1C);
    var_a4 = M2C_FIELD(temp_s1, u32 *, 0x20);
    var_s2 = M2C_FIELD(temp_s1, u32 *, 0x24);
    if (var_a3 == -1U) {
        var_a3 = M2C_FIELD(temp_s1, u32 *, 0x10);
    }
    if (var_a4 == -1U) {
        var_a4 = M2C_FIELD(temp_s1, u32 *, 0x14);
    }
    if (var_s2 == -1U) {
        var_s2 = M2C_FIELD(temp_s1, u32 *, 0x18);
    }
    var_a1 = 0;
    if (((var_a3 != 0) & (var_a4 != 0)) && (var_s2 != 0)) {
        temp_s0 = "TIFFNumberOfTiles";
        var_a1 = multiply(arg0, multiply(arg0, (s32) ((u32) ((M2C_FIELD(temp_s1, u32 *, 0x10) + var_a3) - 1) / var_a3), (u32) ((M2C_FIELD(temp_s1, u32 *, 0x14) + var_a4) - 1) / var_a4, (s32) temp_s0), (u32) ((M2C_FIELD(temp_s1, u32 *, 0x18) + var_s2) - 1) / var_s2, (s32) temp_s0);
    }
    if (M2C_FIELD(temp_s1, u16 *, 0x56) == 2) {
        var_a1 = multiply(arg0, (s32) var_a1, (u32) M2C_FIELD(temp_s1, u16 *, 0x3A), (s32) "TIFFNumberOfTiles");
    }
    return (s32) var_a1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", TIFFTileRowSize);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", TIFFVTileSize);

void TIFFTileSize(struct Unk_TIFFTileSize_0 *arg0) {
    TIFFVTileSize((s32) arg0, arg0->unk40);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", TIFFDefaultTileSize);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", _TIFFDefaultTileSize);

void func_0006A3CC(void) {
    sceIoRead();
}

void func_0006A3E8(void) {
    sceIoWrite();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006A404);

void func_0006A42C(s32 arg0) {
    sceIoClose(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006A448);

s32 func_0006A4A4(void) {
    return 0;
}

void func_0006A4AC(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006A4B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006A52C);

void func_0006A5FC(void) {
    scePaf_5FAC9869();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006A618);

void func_0006A634(void) {
    scePaf_8FC65EB0();
}

void func_0006A650(void) {
    scePaf_6829D7AF();
}

void func_0006A66C(void) {
    scePaf_F95EA3F1();
}

void func_0006A688(void) {
    scePaf_3FBD9639();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006A6A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006A6B0);

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

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006A6DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006A7B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006B064);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006B3D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006B50C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006B6A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006B7CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006B904);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006BB18);

void func_0006BBAC(struct Unk_TIFFCheckpointDirectory_0 *arg0, s32 arg1) {
    arg0->unkF8 = arg1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006BBB4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00175E0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006BC54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006BE8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006C8DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006C954);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006CAE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006CD8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", TIFFYCbCrtoRGB);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", TIFFYCbCrToRGBInit);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006D370);

void func_0006D3E4(s32 arg0) {
    func_0006D370(arg0, (s32) &D_00175EFC);
}

void func_0006D404(s32 arg0) {
    func_0006D370(arg0, (s32) &D_00175F08);
}

void func_0006D424(s32 arg0) {
    func_0006D370(arg0, (s32) &D_00175F10);
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00175EFC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00175F08);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00175F10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006D444);

void func_0006D4B8(s32 arg0) {
    func_0006D444(arg0, (s32) &D_00175EFC);
}

void func_0006D4D8(s32 arg0) {
    func_0006D444(arg0, (s32) &D_00175F08);
}

void func_0006D4F8(s32 arg0) {
    func_0006D444(arg0, (s32) &D_00175F10);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006D518);

s32 func_0006D544(void) {
    return 1;
}

s32 func_0006D54C(void) {
    return 1;
}

void func_0006D554(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006D55C);

s32 func_0006D618(s32 arg0, s32 arg1) {
    s32 var_v0;
    void *temp_s2;

    temp_s2 = func_0006D680(arg1 & 0xFFFF);
    func_0006D55C(arg0);
    var_v0 = 1;
    if (temp_s2 != NULL) {
        var_v0 = M2C_FIELD(temp_s2, s32 (**)(s32, s32), 8)(arg0, arg1);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006D680);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006D6E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", _TIFFWriteDirectory);

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
    func_0006BBAC(arg0, M2C_FIELD(arg0, s32 (**)(s32, M2C_UNK, M2C_UNK), 0x194)(arg0->unk188, 0, 2));
    return temp_s0;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176078);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176098);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_001760C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_001760EC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176118);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", TIFFWriteNormalTag);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", TIFFSetupShortLong);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", TIFFSetupShort);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", TIFFWritePerSampleShorts);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", TIFFWritePerSampleAnys);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", TIFFSetupShortPair);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", TIFFWriteShortTable);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", TIFFWriteByteArray);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", TIFFWriteShortArray);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", TIFFWriteLongArray);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", TIFFWriteRationalArray);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", TIFFWriteFloatArray);

void TIFFWriteDoubleArray(void) {
    func_0006F340();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006EEA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006F24C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006F308);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006F340);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176378);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176398);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_001763B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006F6C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_0017642C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176430);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176434);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176438);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_0017643C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176440);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176448);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_0017644C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176458);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176464);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_0017646C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176474);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176484);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176490);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_0017649C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_001764AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_001764BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_001764C8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_001764D0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_001764E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_001764EC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_001764F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006F988);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006F9CC);

s32 func_0006F9EC(s32 arg0) {
    s32 temp_v1;
    s32 var_a0;
    void *temp_v0;

    temp_v0 = func_0006D680(arg0 & 0xFFFF);
    var_a0 = 0;
    if (temp_v0 != NULL) {
        temp_v1 = M2C_FIELD(temp_v0, s32 *, 8);
        if (temp_v1 != 0) {
            var_a0 = temp_v1 != (s32) &func_0006F9CC;
        }
    }
    return var_a0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006FA2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006FB00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006FB94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006FBC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006FBFC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_0017655C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_001767EC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176A7C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176A84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006FC58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006FCB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006FD18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006FD9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0006FDFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00070524);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176BE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00071554);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00071884);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00071A2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00071B64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00071EE8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176CC0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176CE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176DE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176EE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176EEC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176F20);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176F28);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176F34);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176F40);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176F50);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176F68);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176F78);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176F88);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176F94);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00176F9C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00177078);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00177088);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_0017709C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_001770AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_001770C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_001770D4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_001770F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00177100);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_00177134);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00072118);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_000721D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00072384);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_000726DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00072814);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_000728A4);

void func_00072988(struct Unk_func_00072988_0 *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    void *temp_s1;

    temp_s1 = arg0->unk15C;
    temp_v1 = M2C_FIELD(temp_s1, s32 *, 0x4C);
    arg0->unk1B4 = (s32) M2C_FIELD(temp_s1, s32 *, 0x30);
    arg0->unk1B0 = (s32) M2C_FIELD(temp_s1, s32 *, 0x34);
    if (temp_v1 == 0) {

    } else {
        func_0006A618(temp_v1);
    }
    if (M2C_FIELD(temp_s1, s32 *, 0x5C) == 0) {

    } else {
        func_0006A618(M2C_FIELD(temp_s1, s32 *, 0x5C));
    }
    temp_v1_2 = M2C_FIELD(arg0->unk15C, s32 *, 0x24);
    if (temp_v1_2 != 0) {
        func_0006A618(temp_v1_2);
    }
    func_0006A618((s32) arg0->unk15C);
    arg0->unk15C = NULL;
    func_0006D55C((s32) arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00072A30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00072D70);

void func_0007304C(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00073054);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_000731D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00073234);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00073DF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00073E84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00073F34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00073FC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_000745B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0007460C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00074668);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_000747B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00074910);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00074970);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_000749B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00074A2C);

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

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00074DB8);

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

s32 func_00074FFC(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        var_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 (**)(void *, M2C_UNK, M2C_UNK, M2C_UNK), 8)(arg0, arg1, arg2, arg3);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0007507C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00075094);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_000750E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00075104);

void func_00075134(struct Unk_func_00075134_0 *arg0) {
    arg0->unk654 = (s32) arg0->unk6D4;
    arg0->unk658 = (s32) arg0->unk6D8;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00075148);

void func_000751DC(struct Unk_func_000751DC_0 *arg0) {
    arg0->unk6D8 = (s32) (arg0->unk6D8 - arg0->unk658);
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_0017714C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_0017754C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_0017F54C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_0018F54C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_0018F558);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_0018F55C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_0018F56C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_0018F57C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_0018F588);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_0018F590);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_0018F630);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_000751F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_000752A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_000752B8);

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

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_0007535C);

void func_000753AC(struct Unk_func_000753AC_0 *arg0) {
    arg0->unk668 = (s32) arg0->unk6D4;
    arg0->unk66C = (s32) arg0->unk6D8;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_000753C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_000753F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_069F78", D_0018F668);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_000754A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00075588);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_000759F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00075C2C);

void func_00075E24(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(((arg1 * 4) + arg0), void **, 0x40);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x80) = 0;
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00075E40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00075E68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00075F6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_000761EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_000764F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_000765D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00076828);

void func_0007694C(struct Unk_func_0007694C_0 *arg0) {
    void *temp_s0;

    temp_s0 = arg0->unk15C;
    arg0->unk1B4 = (s32) M2C_FIELD(temp_s0, s32 *, 0x6C4);
    arg0->unk1B0 = (s32) M2C_FIELD(temp_s0, s32 *, 0x6C8);
    if (temp_s0 != NULL) {
        if (M2C_FIELD(temp_s0, s32 *, 0x1CC) == 0) {

        } else {
            func_00074FB4((s32) temp_s0);
        }
        if (M2C_FIELD(temp_s0, s32 *, 0x6D4) != 0) {
            func_0006A618(M2C_FIELD(temp_s0, s32 *, 0x6D4));
        }
    }
    func_0006A618((s32) arg0->unk15C);
    arg0->unk15C = NULL;
    func_0006D55C((s32) arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_000769D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00076D74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_069F78", func_00076E28);

void func_00077100(void) {
}

