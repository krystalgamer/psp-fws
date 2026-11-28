/* lang: c++ */
#include "common.h"
#include "paf_decls.h"

void func_000D6370(M2C_UNK **arg0) {
    *arg0 = &D_00199AF8;
    _ZdlPv(arg0);
}

void func_000D6398(void) {
}

s32 _ZNK3paf8PhWidget9IsInheritEPKc(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47B0 != arg1) {
        var_v0 = func_000C46A8(arg0, arg1);
    }
    return var_v0;
}

s32 func_000D63CC(void) {
    return D_001A47B0;
}

s32 _ZN3paf8PhWidget10WidgetTypeEv(void) {
    return D_001A47B0;
}

INCLUDE_RODATA("nonmatchings/paf_0D6370", D_00199AF8);

INCLUDE_RODATA("nonmatchings/paf_0D6370", D_00199B08);

INCLUDE_RODATA("nonmatchings/paf_0D6370", D_00199B14);

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/paf_0D6370", D_001A4C30);
#endif

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/paf_0D6370", D_00199730_v280);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/paf_0D6370", D_00198578);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/paf_0D6370", D_001975A8);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/paf_0D6370", D_00193958);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/paf_0D6370", D_00191E40_v250);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/paf_0D6370", D_0018DDB0);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_0D6370", D_0018D4A0);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/paf_0D6370", D_0011C360);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/paf_0D6370", D_00119B60);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/paf_0D6370", D_0011B9E0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_0D6370", D_0012E070);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_0D6370", D_00199B20);
#endif

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidgetC2EPS0_PNS_8PhAppearE);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidgetC1EPS0_PNS_8PhAppearE);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidgetD2Ev);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D6B20);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D6C0C);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget13DestroyWidgetEv);

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget13SetAppearanceEPNS_8PhAppearE);
#endif

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZNK3paf8PhWidget8GetChildEi);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget11RemoveChildEi);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget11RemoveChildEPKS0_);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget11RegistChildEPS0_);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget9FindChildEPKci);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D71B8);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget15ReorderChildrenEPKS0_S2_i);

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget13UpdateDestroyEv);
#else
INCLUDE_ASM("nonmatchings/paf_0D6370", func_0007DD34);
#endif

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D76C8);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget11UpdateStateEv);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget8DrawThisEv);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D78D4);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0D6370", func_000800B4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D7964);
#endif

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget9PauseAnimEb);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget9StartAnimEb);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget20SetMetaAlpha_ontimerEfb);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D7C20);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget14SetPos_ontimerERK4vec4PS0_);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget6GetPosEPS0_RK4vec4);

void _ZN3paf8PhWidget16SetScale_ontimerERK4vec4(struct Unk_scePaf_58BFC2AC_0 *arg0, struct Unk_scePaf_58BFC2AC_1 *arg1) {
    arg0->unk230 = (s32) arg1->unk0;
    arg0->unk234 = (s32) arg1->unk4;
    arg0->unk238 = (s32) arg1->unk8;
    arg0->unk23C = (s32) arg1->unkC;
    func_000D89B0((s32) arg0, 1);
}

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget15SetSize_ontimerERK4vec4);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget14SetRot_ontimerERK4vec4PS0_i);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D8138);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget6GetRotEPS0_RK4vec4i);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D82A0);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget6LookAtEPS0_RK4vec4S1_S4_);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D8738);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D89B0);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D8A74);

s32 _ZN3paf8PhWidget22HandleFocusSwitchEventEPNS_7PhEventE(struct Unk_func_000E4F0C_0 *arg0, struct Unk_func_000E4F0C_1 *arg1) {
    u8 temp_a2;

    func_000C7708();
    temp_a2 = arg1->unk8;
    if ((u32) (temp_a2 - 1) >= 4U) {
        if (arg0->unk1D4 == 0) {

        } else {
            func_000D90A4(arg0, 0, temp_a2);
        }
    }
    return 1;
}

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget18HandleFocusInEventEPNS_7PhEventE);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget11SetDispatchEv);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget8SetFocusEPNS_7PhEventEb);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget12ReleaseFocusEb);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D90A4);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D913C);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D91D4);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D9270);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D930C);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D9368);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D9404);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D9498);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D94E0);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D9580);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget8ShowFadeEfbi);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget8HideFadeEfbi);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget7SetAnimEiffiRK4vec4);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget11SetIntervalEifPFvPS0_PNS_7PhTimerEiPvES4_);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget10SetTimeoutEifPFvPS0_PNS_7PhTimerEiPvES4_);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget8SetStyleEib);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget8SetStyleEii);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget8SetStyleEif);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget8SetStyleEiRK4vec4);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget8SetStyleEiib);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget8SetStyleEiii);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget8SetStyleEiif);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget8SetStyleEiiRK4vec4);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget8GetStyleEiRb);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget8GetStyleEiRi);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget8GetStyleEiRf);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget8GetStyleEiR4vec4);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget8GetStyleEiiRb);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget8GetStyleEiiRi);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget8GetStyleEiiRf);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget8GetStyleEiiR4vec4);

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhWidget10SetTextureERKNS_12SurfaceRCPtrINS_7SurfaceEEEi);

s32 _ZNK3paf8PhWidget10GetTextureERNS_12SurfaceRCPtrINS_7SurfaceEEEi(struct Unk_scePaf_4EA868E6_0 *arg0) {
    s32 var_v0;
    struct Unk_vt_scePaf_4EA868E6_temp_v1 **temp_v1;

    var_v0 = -1;
    temp_v1 = arg0->unk1E8;
    if (temp_v1 != NULL) {
        var_v0 = (*temp_v1)->unk74(temp_v1);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_DB230BE1);

s32 scePaf_C2E4423A(struct Unk_scePaf_C2E4423A_0 *arg0) {
    s32 var_v0;
    struct Unk_vt_scePaf_C2E4423A_temp_v1 **temp_v1;

    var_v0 = -1;
    temp_v1 = arg0->unk1E8;
    if (temp_v1 != NULL) {
        var_v0 = (*temp_v1)->unk7C(temp_v1);
    }
    return var_v0;
}

void _ZN3paf8PhWidget13UpdateCamerasEv(struct Unk_scePaf_86B41BA3_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk1D0;
    if (temp_v0 == 0) {

    } else {
        func_000EF13C(temp_v0);
    }
}

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA0BC);

s32 func_000DA1CC(struct Unk_func_000DA1CC_0 *arg0) {
    return arg0->unk1D4;
}

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA1D4);

s32 func_000DA228(struct Unk_func_000DA228_0 *arg0, s32 arg1) {
    arg0->unk1EC = arg1;
    return 0;
}

void func_000DA234(struct Unk_func_000DA234_0 *arg0) {
    arg0->unk0 = &D_00199C78;
    arg0->unk8 = &D_0016EE58;
}

void func_000DA250(struct Unk_func_000DA250_0 *arg0) {
    arg0->unk0 = &D_00199C78;
    arg0->unk8 = &D_0016EE58;
    _ZdlPv(arg0);
}

void func_000DA284(struct Unk_func_000DA284_0 *arg0, s32 arg1) {
    arg0->unk4 = arg1;
}

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA28C);

void func_000DA2AC(s32 arg0) {
    _ZN3paf9PhSRender8SetStyleEii(arg0 + 8);
}

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA2C8);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA2E4);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA300);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA344);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA384);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA3C0);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA400);

void func_000DA424(struct Unk_vt_func_000DA424_arg0 **arg0) {
    (*arg0)->unk10();
}

void func_000DA448(struct Unk_vt_func_000DA448_arg0 **arg0) {
    (*arg0)->unk14();
}

void func_000DA46C(struct Unk_vt_func_000DA46C_arg0 **arg0) {
    (*arg0)->unk18();
}

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA490);

void func_000DA4B4(struct Unk_vt_func_000DA4B4_arg0 **arg0) {
    (*arg0)->unk20();
}

void func_000DA4D8(struct Unk_vt_func_000DA4D8_arg0 **arg0) {
    (*arg0)->unk24();
}

void func_000DA4FC(struct Unk_vt_func_000DA4FC_arg0 **arg0) {
    (*arg0)->unk28();
}

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA520);

void func_000DA53C(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiRi(arg0 + 8);
}

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA558);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA574);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA590);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA5D0);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA610);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA650);

void func_000DA690(void) {
}

s32 func_000DA698(void) {
    return -1;
}

s32 func_000DA6A0(void) {
    return -1;
}

s32 func_000DA6A8(void) {
    return -1;
}

s32 func_000DA6B0(void) {
    return -1;
}

s32 func_000DA6B8(void) {
    return 0;
}

s32 func_000DA6C0(void) {
    return 0;
}

s32 func_000DA6C8(void) {
    return 1;
}

void func_000DA6D0(void) {
}

s32 _ZNK3paf8PhButton9IsInheritEPKc(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47B4 != arg1) {
        var_v0 = _ZNK3paf8PhWidget9IsInheritEPKc(arg0, arg1);
    }
    return var_v0;
}

s32 func_000DA704(void) {
    return D_001A47B4;
}

s32 _ZN3paf8PhButton10WidgetTypeEv(void) {
    return D_001A47B4;
}

INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhButtonC2EPNS_8PhWidgetEPNS_8PhAppearE);

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_0D6370", _ZN3paf8PhButtonC1EPNS_8PhWidgetEPNS_8PhAppearE);
#else
INCLUDE_ASM("nonmatchings/paf_0D6370", func_00080E7C);
#endif
