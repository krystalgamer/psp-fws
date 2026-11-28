/* lang: c++ */
#include "common.h"
#include "paf_decls.h"

void func_000EBD10(M2C_UNK **arg0) {
    *arg0 = &D_0019AB08;
    _ZN3paf8PhWidgetD2Ev((s32) arg0);
    _ZdlPv(arg0);
}

void _ZN3paf7PhModel15SetTextureImageERKNS_12SurfaceRCPtrINS_7SurfaceEEEi(struct Unk_scePaf_22B0D7D8_0 *arg0) {
    func_00102B50(arg0->unk1E8);
}

void _ZNK3paf7PhModel15GetTextureImageERNS_12SurfaceRCPtrINS_7SurfaceEEEi(struct Unk_scePaf_FCABD0E7_0 *arg0) {
    func_00102CFC(arg0->unk1E8);
}

void _ZN3paf7PhModel17SetTexturePaletteERKNS_12SurfaceRCPtrINS_7SurfaceEEEif(struct Unk_scePaf_CA8CDF32_0 *arg0) {
    func_00102D38(arg0->unk1E8);
}

void _ZNK3paf7PhModel17GetTexturePaletteERNS_12SurfaceRCPtrINS_7SurfaceEEEi(struct Unk_scePaf_EE10AEF1_0 *arg0) {
    func_00102FCC(arg0->unk1E8);
}

void _ZN3paf7PhModel8SetModelEPvi(struct Unk_scePaf_E15A64EA_0 *arg0) {
    func_00103008(arg0->unk1E8);
}

void func_000EBDD4(struct Unk_func_000EBDD4_0 *arg0) {
    func_0010308C(arg0->unk1E8);
}

void _ZNK3paf7PhModel14GetMotionCountEv(struct Unk_scePaf_4C5F6657_0 *arg0) {
    func_00103094(arg0->unk1E8);
}

void _ZN3paf7PhModel16SetCurrentMotionEif(struct Unk_scePaf_6A772BF7_0 *arg0) {
    func_001030B0(arg0->unk1E8);
}

void _ZNK3paf7PhModel16GetCurrentMotionEv(struct Unk_scePaf_8CDEDC6F_0 *arg0) {
    func_00103104(arg0->unk1E8);
}

void _ZN3paf7PhModel8SetFrameEf(struct Unk_scePaf_CFAF88AB_0 *arg0) {
    func_00103120(arg0->unk1E8);
}

void _ZNK3paf7PhModel8GetFrameEv(struct Unk_scePaf_DFB912CB_0 *arg0) {
    func_0010313C(arg0->unk1E8);
}

void _ZN3paf7PhModel12SetFrameRateEf(struct Unk_scePaf_D34D0B82_0 *arg0) {
    func_00103158(arg0->unk1E8);
}

void func_000EBE98(struct Unk_func_000EBE98_0 *arg0) {
    func_00103174(arg0->unk1E8);
}

void _ZN3paf7PhModel12SetFrameLoopEff(struct Unk_scePaf_BAA76FDE_0 *arg0) {
    func_00103190(arg0->unk1E8);
}

void func_000EBED0(struct Unk_func_000EBED0_0 *arg0) {
    func_001031AC(arg0->unk1E8);
}

void _ZN3paf7PhModel14SetFrameRepeatEi(struct Unk_scePaf_6CF44237_0 *arg0) {
    func_001031C8(arg0->unk1E8);
}

void func_000EBF08(struct Unk_func_000EBF08_0 *arg0) {
    func_001031E4(arg0->unk1E8);
}

void func_000EBF24(struct Unk_func_000EBF24_0 *arg0) {
    func_00103200(arg0->unk1E8);
}

void _ZN3paf7PhModel14SetPatchDivideEi(struct Unk_scePaf_6B678D44_0 *arg0) {
    func_00103208(arg0->unk1E8);
}

s32 func_000EBF5C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A4808 != arg1) {
        var_v0 = func_000EFBA8(arg0, arg1);
    }
    return var_v0;
}

s32 func_000EBF88(void) {
    return D_001A4808;
}

s32 _ZN3paf9PhNumSpin10WidgetTypeEv(void) {
    return D_001A4808;
}

INCLUDE_ASM("nonmatchings/paf_0EBD10", func_000EBFA0);

INCLUDE_ASM("nonmatchings/paf_0EBD10", _ZN3paf9PhNumSpinC1EPNS_8PhWidgetEPNS_8PhAppearE);

INCLUDE_ASM("nonmatchings/paf_0EBD10", func_000EC168);

INCLUDE_ASM("nonmatchings/paf_0EBD10", func_000EC220);

INCLUDE_ASM("nonmatchings/paf_0EBD10", func_000EC2D8);

INCLUDE_RODATA("nonmatchings/paf_0EBD10", D_0019AA10);

INCLUDE_RODATA("nonmatchings/paf_0EBD10", D_0019AA20);

INCLUDE_RODATA("nonmatchings/paf_0EBD10", D_0019AAF8);

INCLUDE_RODATA("nonmatchings/paf_0EBD10", D_0019AB08);

#if FW_VERSION < 280
INCLUDE_RODATA("nonmatchings/paf_0EBD10", D_0012F0EC);
#endif

INCLUDE_RODATA("nonmatchings/paf_0EBD10", D_0019ABDC);

INCLUDE_RODATA("nonmatchings/paf_0EBD10", D_0019ABE0);

INCLUDE_RODATA("nonmatchings/paf_0EBD10", D_0019ABE4);

INCLUDE_RODATA("nonmatchings/paf_0EBD10", D_0019ABE8);

INCLUDE_RODATA("nonmatchings/paf_0EBD10", D_0019ABEC);

INCLUDE_RODATA("nonmatchings/paf_0EBD10", D_0019ABF0);

INCLUDE_RODATA("nonmatchings/paf_0EBD10", D_0019ABF4);

INCLUDE_RODATA("nonmatchings/paf_0EBD10", D_0019ABF8);

INCLUDE_RODATA("nonmatchings/paf_0EBD10", D_0019ABFC);

INCLUDE_RODATA("nonmatchings/paf_0EBD10", D_0019AC00);

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/paf_0EBD10", D_0019A814);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_0EBD10", D_0019AC04);
#endif

INCLUDE_ASM("nonmatchings/paf_0EBD10", func_000EC398);

INCLUDE_ASM("nonmatchings/paf_0EBD10", func_000ECA00);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0EBD10", func_00090F74);
#else
INCLUDE_ASM("nonmatchings/paf_0EBD10", func_000ECAD0);
#endif

INCLUDE_ASM("nonmatchings/paf_0EBD10", func_000ECB18);

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/paf_0EBD10", func_000EC980);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0EBD10", func_000ECC4C);
#endif

INCLUDE_ASM("nonmatchings/paf_0EBD10", func_000ECC98);

INCLUDE_ASM("nonmatchings/paf_0EBD10", func_000ECD7C);

INCLUDE_ASM("nonmatchings/paf_0EBD10", func_000ECE64);

INCLUDE_ASM("nonmatchings/paf_0EBD10", func_000ED018);

INCLUDE_ASM("nonmatchings/paf_0EBD10", func_000ED100);

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_0EBD10", func_0009156C);
#endif

INCLUDE_ASM("nonmatchings/paf_0EBD10", _ZN3paf9PhNumSpin6CreateEiibiPPNS_7PhSTextEPKi);

INCLUDE_ASM("nonmatchings/paf_0EBD10", _ZN3paf9PhNumSpin14SetDigitMaxTblEPKi);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/paf_0EBD10", _ZN3paf9PhNumSpin15SetVisibleDigitEi);
#endif

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_0EBD10", _ZN3paf9PhNumSpin15SetShadowRenderEPNS_9PhSRenderE);
#endif

INCLUDE_ASM("nonmatchings/paf_0EBD10", func_000ED864);
