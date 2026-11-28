/* lang: c++ */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION == 282
s32 func_000BDD58(struct Unk_func_000BDD58_0 *arg0, s32 *arg1) {
    s32 temp_v1;
    u8 temp_a2;

    temp_v1 = ((u32) ((arg0->unk1F0 * arg0->unk1EC) + 7) >> 3) * 2;
    *arg1 = temp_v1;
    temp_a2 = arg0->unk1F2;
    *arg1 = ((s32) ((temp_v1 + temp_a2) - 1) / (s32) temp_a2) * temp_a2;
    return 0;
}

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000BDDA8);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000BDF28);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000BE470);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000BE9A8);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000BECDC);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000BEF0C);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000BF170);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000BF33C);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000BF3F8);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000BF6A4);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000BF8AC);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000BF9BC);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000BFE40);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C0048);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C0140);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C018C);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C0270);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C0500);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C0574);

s32 func_000C07DC(void) {
    sceRegCloseRegistry();
    return 0;
}

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C07FC);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C0938);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C0980);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C0BB4);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C0C48);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C0D80);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C0E34);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C0E70);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C0F98);

s32 func_000C0FF8(u8 *arg0) {
    s32 var_a1;

    var_a1 = -3;
    if (D_001A53C0 == 0) {
        D_001A53C4 = (s32) *arg0;
        var_a1 = 0;
        D_001A53C0 = 1;
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C1028);

s32 func_000C1090(void) {
    s32 var_v1;

    var_v1 = -2;
    if (D_001A53C0 != 0) {
        D_001A53C0 = 0;
        D_001A53C4 = -1;
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C10BC);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C115C);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C1208);
#endif

M2C_UNK *_ZN3paf8PhAppear12ShadowRenderEv(void) {
    return &D_001A53C8;
}

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0BDD58", _ZN3paf8PhAppear18SetShadowBlendModeEi);
#endif

#if FW_VERSION == 282
s32 _ZN3paf8PhAppear18SetShadowBlendModeEi(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_001A3ED0;
    D_001A3ED0 = arg0;
    return temp_v0;
}
#endif

INCLUDE_ASM("nonmatchings/paf_0BDD58", _ZN3paf9PhSRender8SetStyleEii);

s32 _ZN3paf9PhSRender8SetStyleEib(void) {
    return -1;
}

s32 _ZN3paf9PhSRender8SetStyleEif(void) {
    return -1;
}

s32 _ZN3paf9PhSRender8SetStyleEiRK4vec4(void) {
    return -1;
}

INCLUDE_ASM("nonmatchings/paf_0BDD58", _ZNK3paf9PhSRender8GetStyleEiRi);

s32 _ZNK3paf9PhSRender8GetStyleEiRb(void) {
    return -1;
}

s32 _ZNK3paf9PhSRender8GetStyleEiRf(void) {
    return -1;
}

s32 _ZNK3paf9PhSRender8GetStyleEiR4vec4(void) {
    return -1;
}

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/paf_0BDD58", _ZN3paf7PhSPrim8SetStyleEii);

INCLUDE_ASM("nonmatchings/paf_0BDD58", _ZN3paf7PhSPrim8SetStyleEib);

INCLUDE_ASM("nonmatchings/paf_0BDD58", _ZN3paf7PhSPrim8SetStyleEif);
#else
INCLUDE_ASM("nonmatchings/paf_0BDD58", func_00069170);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_00069234);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_00069280);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_0BDD58", D_00198C04);
#endif

INCLUDE_ASM("nonmatchings/paf_0BDD58", _ZN3paf7PhSPrim8SetStyleEiRK4vec4);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/paf_0BDD58", _ZNK3paf7PhSPrim8GetStyleEiRi);

INCLUDE_ASM("nonmatchings/paf_0BDD58", _ZNK3paf7PhSPrim8GetStyleEiRb);

INCLUDE_ASM("nonmatchings/paf_0BDD58", _ZNK3paf7PhSPrim8GetStyleEiRf);

INCLUDE_ASM("nonmatchings/paf_0BDD58", _ZNK3paf7PhSPrim8GetStyleEiR4vec4);
#else
INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000693F8);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_0006946C);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000694B4);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000694FC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0BDD58", func_00069608);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0BDD58", func_00069740);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C182C);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/paf_0BDD58", _ZNK3paf9PhSRender12SetupTextureERKNS_12SurfaceRCPtrINS_7SurfaceEEERK4vec4);
#endif

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C1A2C);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/paf_0BDD58", _ZN3paf7PhSPrimC2ERNS_9PhSRenderE);
#else
INCLUDE_ASM("nonmatchings/paf_0BDD58", func_00069820);
#endif

INCLUDE_ASM("nonmatchings/paf_0BDD58", _ZN3paf7PhSPrimC1ERNS_9PhSRenderE);

void func_000C1CA0(struct Unk_func_000C1CA0_0 *arg0, s32 *arg1, s32 arg2) {
    func_0000C8BC((u8 *)arg0 + 0x64, *arg1);
    arg0->unk60 = arg2;
}

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/paf_0BDD58", _ZN3paf7PhSPrim11SetupMatrixEPKNS_8PhWidgetE);
#else
INCLUDE_ASM("nonmatchings/paf_0BDD58", func_00069A64);
#endif

INCLUDE_ASM("nonmatchings/paf_0BDD58", _ZN3paf7PhSPrim6RenderEPKNS_8PhWidgetERK4vec4);

INCLUDE_ASM("nonmatchings/paf_0BDD58", _ZN3paf7PhSPrim6SpriteEPKNS_8PhWidgetEiiRK4vec4);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C2410);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C24C8);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C2580);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C25D8);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C2614);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C2990);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C2B64);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C2C80);

void func_000C2CEC(void) {
    func_000C2C80(1, 0xFFFF);
}

void func_000C2D0C(void) {
    func_000C2C80(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C2D2C);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C2D98);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C2E0C);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C2E78);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C2EEC);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 200) || FW_VERSION == 282
void func_000C2EEC(s32 arg0, s32 arg1, s32 arg2) {
    _ZN3paf7PhSPrim8SetStyleEib(arg0, arg1, arg2 & 0xFF);
}
#endif

#if FW_VERSION == 100
void func_000C2EEC(s32 arg0, s32 arg1, s32 arg2) {
    func_00069234(arg0, arg1, arg2 & 0xFF);
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 200 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C2F08);
#else
void func_000C2F08(void* arg0, s32 arg1, float arg2) {
    _ZN3paf7PhSPrim8SetStyleEif(arg0, arg1, arg2);
}
#endif

void func_000C2F24(void* arg0, s32 arg1, void* arg2) {
    _ZN3paf7PhSPrim8SetStyleEiRK4vec4(arg0, arg1, arg2);
}

#if FW_VERSION == 100 || (FW_VERSION >= 200 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C2F40);
#else
void func_000C2F40(void* arg0, s32 arg1, bool* arg2) {
    _ZNK3paf7PhSPrim8GetStyleEiRb(arg0, arg1, arg2);
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 200 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C2F5C);
#else
void func_000C2F5C(void* arg0, s32 arg1, float* arg2) {
    _ZNK3paf7PhSPrim8GetStyleEiRf(arg0, arg1, arg2);
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 200 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C2F78);
#else
void func_000C2F78(void* arg0, s32 arg1, void* arg2) {
    _ZNK3paf7PhSPrim8GetStyleEiR4vec4(arg0, arg1, arg2);
}
#endif
