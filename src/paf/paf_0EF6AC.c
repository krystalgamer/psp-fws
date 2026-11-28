/* lang: c++ */
#include "common.h"
#include "paf_decls.h"

void func_000EF6AC(M2C_UNK **arg0) {
    *arg0 = &D_0019B058;
    _ZN3paf8PhWidgetD2Ev((s32) arg0);
    _ZdlPv(arg0);
}

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/paf_0EF6AC", _ZN3paf8PhScroll11SetMaxValueEf);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", _ZN3paf8PhScroll16SetVisibleAmountEf);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", _ZN3paf8PhScroll8SetValueEf);
#else
INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_00093450);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_00093514);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000935D8);
#endif

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000EF900);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000EF9C0);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0EF6AC", _ZN3paf8PhScroll15SetShadowRenderEPNS_9PhSRenderE);
#endif

#if FW_VERSION == 282
void _ZN3paf8PhScroll15SetShadowRenderEPNS_9PhSRenderE(struct Unk_scePaf_C07B7162_0 *arg0) {
    func_00106250(arg0->unk1E8);
}
#endif

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000EFA00);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000EFB48);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000EFBA8);

s32 func_000EFBD4(void) {
    return D_001A481C;
}

s32 _ZN3paf6PhSpin10WidgetTypeEv(void) {
    return D_001A481C;
}

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B044);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B058);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B128);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0018EB50);
#endif

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019ADB0);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019ADD0);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019ADF0);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019AE10);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 280
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_00198C30);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_00198C50);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_00198C70);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_00198C90);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_00198CB0);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0018EBC0);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0018EBE4);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0018EC08);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0018EC2C);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0018EC50);
#endif

#if FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0012F610);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0011D058);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0011D07C);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0011D0A0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0012F680);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0012F6A4);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0012F6C8);
#endif

#if FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0012F6EC);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0012F710);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B130);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B1A0);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B1C0);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B1E0);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B200);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B220);
#endif

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000EFBEC);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000EFF0C);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F022C);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F039C);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F050C);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F0684);

s32 func_000F0920(struct Unk_func_000E4F0C_0 *arg0, struct Unk_func_000E4F0C_1 *arg1) {
    if (((u32) (arg1->unk8 - 1) >= 4U) || (arg0->unk331 == 0) || (arg0->unk1EC != 5)) {
        _ZN3paf8PhWidget22HandleFocusSwitchEventEPNS_7PhEventE(arg0, arg1);
    }
    arg0->unk334 = 0;
    return 0;
}

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F0978);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F0AC0);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F0C3C);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F0D20);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_00094A80);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_00097E48);
#endif

#if FW_VERSION == 282
s32 func_000F0DB8(struct Unk_func_000F0DB8_0 *arg0, s32 arg1) {
    s32 temp_s0;

    temp_s0 = arg1 == 5;
    _ZN3paf7PhSPrim8SetStyleEib((u8 *)arg0 + 0x370, 0xD, temp_s0);
    _ZN3paf7PhSPrim8SetStyleEib((u8 *)arg0 + 0x430, 0xD, temp_s0);
    _ZN3paf7PhSPrim8SetStyleEib((u8 *)arg0 + 0x4F0, 0xD, temp_s0);
    _ZN3paf7PhSPrim8SetStyleEib((u8 *)arg0 + 0x5B0, 0xD, temp_s0);
    arg0->unk1EC = arg1;
    return 0;
}
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F0E3C);
#endif

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F0E94);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F0EE4);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F0F30);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F0F6C);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F1080);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F1194);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F129C);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F13B0);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F14FC);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000EA774);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F1544);
#endif

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F15A4);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", _ZN3paf6PhSpin14SetMaxSelectedEi);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", _ZN3paf6PhSpin11SetSelectedEi);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", _ZN3paf6PhSpin14ChangeSelectedEii);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", _ZN3paf6PhSpin11SetAnimTimeEf);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F1840);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000EAB3C);
#endif

#if FW_VERSION == 282
s32 func_000F18C8(struct Unk_func_000F18C8_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = -1;
    if (arg0->unk332 != 0) {
        var_v1 = 0;
        arg0->unk438 = arg1;
        arg0->unk5B8 = arg1;
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F18E8);

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0011DAD8);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B2A8);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0011DBB8);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0011B2D8);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B2A8);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0011B3B8);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0011D158);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B2A8);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0011D238);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0012F780);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B2A8);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0012F860);
#endif

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F1B14);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000EAE60);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B2A8);
#endif

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019AF88);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_00199DD8);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_00198E08);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_001952A0);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_00193788);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0018F6B8);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0018EDA8);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000EAEC0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F1BF4);

void func_000F1C54(void) {
    func_000F1BF4(1, 0xFFFF);
}
#endif

s32 func_000F1C74(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A4820 != arg1) {
        var_v0 = _ZNK3paf8PhWidget9IsInheritEPKc(arg0, arg1);
    }
    return var_v0;
}

s32 func_000F1CA0(void) {
    return D_001A4820;
}

s32 _ZN3paf6PhText10WidgetTypeEv(void) {
    return D_001A4820;
}

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F1CB8);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", _ZN3paf6PhTextC1EPNS_8PhWidgetEPNS_8PhAppearE);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F1DD0);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B2A8);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B378);
#endif

INCLUDE_ASM("nonmatchings/paf_0EF6AC", _ZN3paf6PhText7SetSizeEfff);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", _ZN3paf6PhText7SetSizeERK4vec4);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", _ZN3paf6PhText12SetFontStyleERKNS_11PhFontStyleE);

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_0EF6AC", _ZN3paf6PhText15SetShadowRenderEPNS_9PhSRenderE);
#endif

void func_000F202C(struct Unk_func_000F202C_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk334 = 1;
    _ZN3paf8PhWidget8SetStyleEib((s32) arg0, arg1, arg2 & 0xFF);
}

void func_000F2050(struct Unk_func_000F2050_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk334 = 1;
    _ZN3paf8PhWidget8SetStyleEii(arg0, arg1, arg2);
}

void func_000F2074(struct Unk_func_000F2074_0 *arg0) {
    arg0->unk334 = 1;
    arg0->unk335 = 1;
    _ZN3paf8PhWidget8SetStyleEif((s32) arg0);
}

void func_000F209C(struct Unk_func_000F209C_0 *arg0) {
    arg0->unk334 = 1;
    arg0->unk335 = 1;
    _ZN3paf8PhWidget8SetStyleEiRK4vec4((s32) arg0);
}

void func_000F20C4(struct Unk_func_000F20C4_0 *arg0) {
    arg0->unk334 = 1;
    scePaf_DB230BE1();
}

s32 scePaf_D1EE972C(struct Unk_scePaf_D1EE972C_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;
    void *temp_v0;

    var_v1 = -1;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != NULL) {
        var_v1 = func_00106950(temp_v0, arg1, arg2, arg3);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/paf_0EF6AC", _ZN3paf6PhText12SetFirstLineEf);

void _ZNK3paf6PhText12GetFirstLineEv(struct Unk_scePaf_FA758B05_0 *arg0) {
    func_00106ABC(arg0->unk1E8);
}

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/paf_0EF6AC", _ZN3paf6PhText15SetColumnOffsetEf);
#else
INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_00095D40);
#endif

s32 _ZNK3paf6PhText13GetTextLengthEv(struct Unk_scePaf_DC8B0309_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != 0) {
        var_v1 = func_00106B1C(temp_v0);
    }
    return var_v1;
}

s32 _ZNK3paf6PhText12GetLineCountEv(struct Unk_scePaf_FA87D725_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != 0) {
        var_v1 = func_00106B34(temp_v0);
    }
    return var_v1;
}

s32 _ZNK3paf6PhText13GetCurrentPosEv(struct Unk_scePaf_409E25A3_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != 0) {
        var_v1 = func_00106B4C(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/paf_0EF6AC", _ZNK3paf6PhText15GetVisibleLinesEv);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", _ZNK3paf6PhText13GetLineHeightEv);
