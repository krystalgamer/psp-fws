/* cflags: -O2 -frename-registers */
#include "common.h"
#include "libfont_hv_decls.h"

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/libfont_hv", func_00000000);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00000068);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00000108);

INCLUDE_ASM("nonmatchings/libfont_hv", func_000001B4);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/libfont_hv", func_00000214);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00000244);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000AF64);
#endif

#if FW_VERSION == 340
s32 func_00000214(u8 *arg0) {
    s32 var_a1;

    var_a1 = -3;
    if (D_0000BBD0 == 0) {
        D_0000BBD4 = (s32) *arg0;
        var_a1 = 0;
        D_0000BBD0 = 1;
    }
    return var_a1;
}

s32 func_00000244(void) {
    s32 var_v1;

    var_v1 = -2;
    if (D_0000BBD0 != 0) {
        D_0000BBD4 = -1;
        var_v1 = 0;
        D_0000BBD0 = 0;
    }
    return var_v1;
}

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000AFA4);
#endif

INCLUDE_ASM("nonmatchings/libfont_hv", sceFontNewLib);

INCLUDE_ASM("nonmatchings/libfont_hv", sceFontDoneLib);

INCLUDE_ASM("nonmatchings/libfont_hv", sceFontSetResolution);

INCLUDE_ASM("nonmatchings/libfont_hv", sceFontGetNumFontList);

INCLUDE_ASM("nonmatchings/libfont_hv", sceFontGetFontList);

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B384);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B398);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B3AC);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B3C0);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B3D4);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B3E8);
#endif

#if FW_VERSION != 260
INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B3FC);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/libfont_hv", D_000098E8);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_000098FC);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_00009910);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B400);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B414);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B428);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B43C);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B450);
#endif

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B464);

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B360);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B374);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B388);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B39C);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B3B0);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/libfont_hv", D_00009928);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000993C);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_00009950);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_00009964);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_00009978);
#endif

#if FW_VERSION < 340
INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000998C);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B3C8);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B3DC);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B3F0);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B404);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B418);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B42C);
#endif

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B478);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B484);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B490);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B4A8);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B4B4);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B4C0);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B4C8);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B4D0);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B4E0);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B4F0);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B4F8);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B504);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B50C);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B518);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B528);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B534);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B544);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B550);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B55C);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B570);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B57C);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B5F4);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B610);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B61C);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B630);

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B60C);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B658);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B66C);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B648);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B65C);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B670);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B684);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/libfont_hv", D_00009B6C);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B658);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B66C);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_00009BA8);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_00009BBC);
#endif

#if FW_VERSION < 340
INCLUDE_RODATA("nonmatchings/libfont_hv", D_00009BD0);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B6B4);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B644);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B658);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B66C);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B680);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B694);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B6A8);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B6BC);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B6D0);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B6EC);
#endif

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B700);

INCLUDE_ASM("nonmatchings/libfont_hv", sceFontFindOptimumFont);

INCLUDE_ASM("nonmatchings/libfont_hv", sceFontFindFont);

INCLUDE_ASM("nonmatchings/libfont_hv", sceFontCalcMemorySize);

INCLUDE_ASM("nonmatchings/libfont_hv", sceFontGetFontInfoByIndexNumber);

INCLUDE_ASM("nonmatchings/libfont_hv", sceFontOpen);

INCLUDE_ASM("nonmatchings/libfont_hv", sceFontOpenUserFile);

INCLUDE_ASM("nonmatchings/libfont_hv", sceFontOpenUserMemory);

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/libfont_hv", sceLibFont_HV_33FFD07C);
#endif

INCLUDE_ASM("nonmatchings/libfont_hv", sceFontGetFontInfo);

INCLUDE_ASM("nonmatchings/libfont_hv", sceFontGetCharInfo);

INCLUDE_ASM("nonmatchings/libfont_hv", sceFontGetShadowInfo);

INCLUDE_ASM("nonmatchings/libfont_hv", sceFontGetCharImageRect);

INCLUDE_ASM("nonmatchings/libfont_hv", sceFontGetShadowImageRect);

INCLUDE_ASM("nonmatchings/libfont_hv", sceFontGetCharGlyphImage);

INCLUDE_ASM("nonmatchings/libfont_hv", sceFontGetShadowGlyphImage);

INCLUDE_ASM("nonmatchings/libfont_hv", sceFontGetCharGlyphImage_Clip);

INCLUDE_ASM("nonmatchings/libfont_hv", sceFontGetShadowGlyphImage_Clip);

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/libfont_hv", func_000022F0);

INCLUDE_ASM("nonmatchings/libfont_hv", func_0000259C);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/libfont_hv", func_00002344);

INCLUDE_ASM("nonmatchings/libfont_hv", func_0000260C);
#endif

INCLUDE_ASM("nonmatchings/libfont_hv", func_00002798);

INCLUDE_ASM("nonmatchings/libfont_hv", func_000028A8);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00002988);

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/libfont_hv", func_00002AA4);
#endif

INCLUDE_ASM("nonmatchings/libfont_hv", func_00002BB4);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00002BF8);

s32 func_00002C74(struct Unk_func_00002C74_0 *arg0) {
    s32 var_s1;
    s32 var_s2;
    s32 var_v1;
    struct Unk_func_00002C74_temp_a0 *temp_a0;
    struct Unk_func_00002C74_temp_a1 *temp_a1;
    struct Unk_func_00002C74_temp_s0 *temp_s0;

    var_v1 = arg0->unk4;
    var_s2 = 0;
    if (var_v1 > 0) {
        var_s1 = 0;
        do {
            var_s2 += 1;
            temp_s0 = arg0->unk2C + var_s1;
            var_s1 += 0x4C;
            if (temp_s0 != NULL) {
                if (temp_s0->unk0 != 0) {
                    temp_s0->unk0 = 0U;
                    temp_a0 = temp_s0->unk4;
                    temp_a1 = temp_a0->unk48;
                    temp_a1->unk34 = (u16) (temp_a1->unk34 - 1);
                    func_00009234((s32) temp_a0);
                    func_00002BF8((s32) temp_s0);
                    var_v1 = arg0->unk4;
                }
            }
        } while (var_s2 < var_v1);
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/libfont_hv", func_00002D14);

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/libfont_hv", func_00002BA4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/libfont_hv", func_00001FE8);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/libfont_hv", func_00002D68);
#endif

INCLUDE_ASM("nonmatchings/libfont_hv", func_0000331C);

INCLUDE_ASM("nonmatchings/libfont_hv", func_000034A8);

INCLUDE_ASM("nonmatchings/libfont_hv", func_0000372C);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00003A04);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00003CBC);

#if FW_VERSION < 340
INCLUDE_ASM("nonmatchings/libfont_hv", func_00004204);
#else
s32 func_00004204(struct Unk_func_00004204_0 *arg0, s32 *arg1) {
    s32 temp_a5;
    u8 temp_a3;

    temp_a5 = ((u32) ((arg0->unk1E8 * arg0->unk1E4) + 7) >> 3) * 2;
    *arg1 = temp_a5;
    temp_a3 = arg0->unk1EA;
    *arg1 = ((s32) ((temp_a5 + temp_a3) - 1) / (s32) temp_a3) * temp_a3;
    return 0;
}
#endif

#if FW_VERSION < 340
INCLUDE_ASM("nonmatchings/libfont_hv", func_00004254);
#else
s32 func_00004254(struct Unk_func_00004254_0 *arg0, s32 *arg1) {
    s32 temp_a5;
    u8 temp_a3;

    temp_a5 = ((u32) ((arg0->unk1F0 * arg0->unk1EC) + 7) >> 3) * 2;
    *arg1 = temp_a5;
    temp_a3 = arg0->unk1F2;
    *arg1 = ((s32) ((temp_a5 + temp_a3) - 1) / (s32) temp_a3) * temp_a3;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/libfont_hv", func_000042A4);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00004804);

#if FW_VERSION < 340
INCLUDE_ASM("nonmatchings/libfont_hv", func_00003EF8);
#else
INCLUDE_ASM("nonmatchings/libfont_hv", func_00004CD8);
#endif

INCLUDE_ASM("nonmatchings/libfont_hv", func_00005014);

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/libfont_hv", func_0000509C);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/libfont_hv", func_00005248);
#endif

INCLUDE_ASM("nonmatchings/libfont_hv", func_000054B0);

INCLUDE_ASM("nonmatchings/libfont_hv", func_000055E8);

INCLUDE_ASM("nonmatchings/libfont_hv", func_000056A4);

INCLUDE_ASM("nonmatchings/libfont_hv", func_000059D0);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00005BE4);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00005D04);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00006068);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00006318);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00006390);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00006488);

INCLUDE_ASM("nonmatchings/libfont_hv", func_000064E4);

INCLUDE_ASM("nonmatchings/libfont_hv", func_0000655C);

INCLUDE_ASM("nonmatchings/libfont_hv", func_000065A8);

INCLUDE_ASM("nonmatchings/libfont_hv", func_0000668C);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00006990);

INCLUDE_ASM("nonmatchings/libfont_hv", func_000069F8);

s32 func_00006D0C(void) {
    sceReg_FA8A5739();
    return 0;
}

INCLUDE_ASM("nonmatchings/libfont_hv", func_00006D2C);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00006E84);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00006ECC);

INCLUDE_ASM("nonmatchings/libfont_hv", func_000070FC);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00007190);

INCLUDE_ASM("nonmatchings/libfont_hv", func_000072C8);

INCLUDE_ASM("nonmatchings/libfont_hv", func_0000737C);

INCLUDE_ASM("nonmatchings/libfont_hv", func_000073B8);

INCLUDE_ASM("nonmatchings/libfont_hv", func_000074E0);

INCLUDE_ASM("nonmatchings/libfont_hv", sceLibFont_HV_E0DBDE75);

INCLUDE_ASM("nonmatchings/libfont_hv", sceLibFont_HV_F0AD0FE7);

INCLUDE_ASM("nonmatchings/libfont_hv", sceLibFont_HV_26149723);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00007A40);

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/libfont_hv", func_00007D28);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/libfont_hv", func_00007ED0);
#endif

INCLUDE_ASM("nonmatchings/libfont_hv", sceLibFont_HV_48592C48);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00008714);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00008B60);

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/libfont_hv", sceLibFont_HV_E4606649);
#endif

INCLUDE_ASM("nonmatchings/libfont_hv", sceFontClose);

INCLUDE_ASM("nonmatchings/libfont_hv", sceFontPixelToPointH);

INCLUDE_ASM("nonmatchings/libfont_hv", sceFontPixelToPointV);

INCLUDE_ASM("nonmatchings/libfont_hv", sceFontPointToPixelH);

INCLUDE_ASM("nonmatchings/libfont_hv", sceFontPointToPixelV);

INCLUDE_ASM("nonmatchings/libfont_hv", sceFontSetAltCharacterCode);

INCLUDE_ASM("nonmatchings/libfont_hv", sceFontFlush);

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/libfont_hv", func_000090BC);
#endif

INCLUDE_ASM("nonmatchings/libfont_hv", func_00009234);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00009420);

INCLUDE_ASM("nonmatchings/libfont_hv", func_000095A0);

s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/libfont_hv", func_0000965C);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00009694);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00009708);

u8 *func_00009750(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 var_a2;
    u8 *var_a1;
    u8 *var_v0;
    u8 *var_v1;
    u8 temp_a3;

    var_a1 = arg1;
    var_a2 = arg2;
    var_v0 = NULL;
    if (arg0 != NULL) {
        var_v1 = arg0;
        if (var_a2 > 0) {
            do {
                temp_a3 = *var_a1;
                var_a2 -= 1;
                var_a1 += 1;
                *var_v1 = temp_a3;
                var_v1 += 1;
            } while (var_a2 > 0);
        }
        var_v0 = arg0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/libfont_hv", func_00009784);

INCLUDE_ASM("nonmatchings/libfont_hv", func_000097B0);

INCLUDE_ASM("nonmatchings/libfont_hv", func_0000981C);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00009844);

INCLUDE_ASM("nonmatchings/libfont_hv", func_000098E4);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00009A40);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00009A88);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00009ABC);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00009B24);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00009C88);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00009D04);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00009D34);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00009DF8);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00009E40);

INCLUDE_ASM("nonmatchings/libfont_hv", func_00009F10);

u8 *func_00009FE4(u8 *arg0, u8 *arg1) {
    u8 *var_a1;
    u8 *var_a2;
    u8 *var_v0;
    u8 temp_a3;

    var_a1 = arg1;
    var_v0 = NULL;
    var_a2 = arg0;
    if (((arg0 == NULL) | (var_a1 == NULL)) == 0) {
        do {
            temp_a3 = *var_a1;
            var_a1 += 1;
            *var_a2 = temp_a3;
            var_a2 += 1;
        } while (temp_a3 != 0);
        var_v0 = arg0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/libfont_hv", func_0000A01C);

INCLUDE_ASM("nonmatchings/libfont_hv", func_0000A03C);

INCLUDE_ASM("nonmatchings/libfont_hv", func_0000A088);

INCLUDE_ASM("nonmatchings/libfont_hv", func_0000A7CC);

INCLUDE_ASM("nonmatchings/libfont_hv", func_0000A7F4);

INCLUDE_ASM("nonmatchings/libfont_hv", func_0000A820);

INCLUDE_ASM("nonmatchings/libfont_hv", func_0000A84C);

INCLUDE_ASM("nonmatchings/libfont_hv", func_0000A860);

INCLUDE_ASM("nonmatchings/libfont_hv", func_0000A870);

INCLUDE_ASM("nonmatchings/libfont_hv", func_0000A8E8);

INCLUDE_ASM("nonmatchings/libfont_hv", func_0000AA40);

void sceReg_9B25EDF1(void) {
}

void sceReg_92E41280(void) {
}

void sceReg_FA8A5739(void) {
}

void sceReg_DEDA92BF(void) {
}

void sceReg_1D8A762E(void) {
}

void sceReg_0CAE832B(void) {
}

void sceReg_39461B4D(void) {
}

void sceReg_0D69BF40(void) {
}

void sceReg_57641A81(void) {
}

void sceReg_17768E14(void) {
}

void sceReg_D4475AA8(void) {
}

void sceReg_28A8E98A(void) {
}

void sceReg_2C0DB9DD(void) {
}

void sceReg_2D211135(void) {
}

void sceReg_4CA16893(void) {
}

void sceReg_3615BC87(void) {
}

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B7EC);

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B7BC);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/libfont_hv", D_00009CA4);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B7F4);
#endif

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B9D8);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B9EC);

INCLUDE_RODATA("nonmatchings/libfont_hv", D_0000B9F4);
