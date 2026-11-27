/* lang: c++ */
#include "common.h"
#include "pafmini_decls.h"

s32 func_00065F80(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1270 != arg1) {
        var_v0 = _ZNK3paf8PhWidget9IsInheritEPKc(arg0, arg1);
    }
    return var_v0;
}

s32 func_00065FAC(void) {
    return D_000E1270;
}

s32 _ZN3paf7PhPlane10WidgetTypeEv(void) {
    return D_000E1270;
}

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00065FC4);

INCLUDE_ASM("nonmatchings/pafmini_065F80", _ZN3paf7PhPlaneC1EPNS_8PhWidgetEPNS_8PhAppearE);

void func_0006617C(M2C_UNK **arg0) {
    *arg0 = &D_000D8E30;
    _ZN3paf8PhWidgetD2Ev((s32) arg0);
}

void func_000661A4(M2C_UNK **arg0) {
    *arg0 = &D_000D8E30;
    _ZN3paf8PhWidgetD2Ev((s32) arg0);
    _ZdlPv(arg0);
}

s32 func_000661DC(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1274 != arg1) {
        var_v0 = _ZNK3paf8PhWidget9IsInheritEPKc(arg0, arg1);
    }
    return var_v0;
}

s32 func_00066208(void) {
    return D_000E1274;
}

s32 _ZN3paf10PhProgress10WidgetTypeEv(void) {
    return D_000E1274;
}

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D8D50);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D8E20);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D8E30);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D8F04);

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D73E0);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D8F10);
#endif

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00066220);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_000662FC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00066414);
#else
void func_00066414(struct Unk_func_00066414_0 *arg0) {
    arg0->unk0 = &D_000D8F40;
    sceKernelDeleteSema(arg0->unk370);
    _ZN3paf8PhWidgetD2Ev((s32) arg0);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00066450);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00068120);
#endif

#if FW_VERSION == 282
void func_00066450(struct Unk_func_00066450_0 *arg0) {
    arg0->unk0 = &D_000D8F40;
    sceKernelDeleteSema(arg0->unk370);
    _ZN3paf8PhWidgetD2Ev((s32) arg0);
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00066494);
#endif

INCLUDE_ASM("nonmatchings/pafmini_065F80", _ZN3paf10PhProgress11SetMaxValueEf);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_065F80", _ZN3paf10PhProgress8SetValueEf);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pafmini_065F80", _ZN3paf10PhProgress15RequestSetValueEf);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_065F80", scePaf_4E62343D);

INCLUDE_ASM("nonmatchings/pafmini_065F80", scePaf_3CEDE012);

INCLUDE_ASM("nonmatchings/pafmini_065F80", _ZN3paf10PhProgress8GetValueEi);
#endif

INCLUDE_ASM("nonmatchings/pafmini_065F80", _ZN3paf10PhProgress11ChangeValueEffi);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/pafmini_065F80", _ZN3paf10PhProgress18RequestChangeValueEffi);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_065F80", func_0007E18C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_065F80", _ZN3paf10PhProgress15SetShadowRenderEPNS_9PhSRenderE);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_065F80", _ZN3paf10PhProgress9StopValueEi);

void _ZN3paf10PhProgress15SetShadowRenderEPNS_9PhSRenderE(struct Unk_scePaf_2A5DDF04_0 *arg0, s32 arg1) {
    arg0->unk1E8->unk3F8 = arg1;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00066980);

s32 func_000669F4(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1278 != arg1) {
        var_v0 = _ZNK3paf8PhWidget9IsInheritEPKc(arg0, arg1);
    }
    return var_v0;
}

s32 func_00066A20(void) {
    return D_000E1278;
}

s32 _ZN3paf7PhScene10WidgetTypeEv(void) {
    return D_000E1278;
}

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D8F2C);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D8F40);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D9010);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D9018);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D9024);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00066A38);

INCLUDE_ASM("nonmatchings/pafmini_065F80", _ZN3paf7PhSceneC1EPNS_8PhWidgetEPNS_8PhAppearE);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00066DB4);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00066E10);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00066E74);
#endif

#if FW_VERSION < 201
void func_00066E74(struct Unk_vt_func_00066E74_arg0 **arg0) {
    func_000F865C(2);
    func_000F7A30();
    M2C_FIELD(*arg0, M2C_UNK (**)(struct Unk_vt_func_00066E74_arg0 **), 0x5C)(arg0);
}
#endif

#if FW_VERSION == 282
void func_00066E74(struct Unk_vt_func_00066E74_arg0 **arg0) {
    sceGumMatrixMode(2);
    sceGumLoadIdentity();
    (*arg0)->unk60(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00066EB4);

INCLUDE_ASM("nonmatchings/pafmini_065F80", _ZNK3paf7PhScene9GetCameraEi);

s32 func_000670A0(struct Unk_func_000670A0_0 *arg0) {
    return arg0->unk554;
}

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_000670A8);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00067120);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_000671BC);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_000671E0);

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pafmini_065F80", func_0007E9F8);
#endif

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00067230);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_065F80", func_000672AC);
#endif

#if FW_VERSION < 201
s32 func_000672AC(s32 arg0, s32 arg1) {
    _ZN3paf9PhHandler17HandleSystemEventEPNS_7PhEventE(arg0, arg1);
    _ZN3paf9PhHandler10DoCallBackEiPNS_7PhEventE(arg0, 0x80004, arg1);
    return 1;
}
#endif

#if FW_VERSION == 282
s32 func_000672AC(s32 arg0, M2C_UNK arg1) {
    _ZN3paf9PhHandler17HandleSystemEventEPNS_7PhEventE(arg0, arg1);
    _ZN3paf9PhHandler10DoCallBackEiPNS_7PhEventE(arg0, 0x80005, arg1);
    return 1;
}
#endif

void func_000672F4(struct Unk_func_000672F4_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00067304);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00067344);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00067430);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_000674A4);

s32 func_00067564(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E127C != arg1) {
        var_v0 = _ZNK3paf8PhWidget9IsInheritEPKc(arg0, arg1);
    }
    return var_v0;
}

s32 func_00067590(void) {
    return D_000E127C;
}

s32 _ZN3paf8PhScroll10WidgetTypeEv(void) {
    return D_000E127C;
}

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D9040);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D9050);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D9120);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_000675A8);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pafmini_065F80", _ZN3paf8PhScrollC1EPNS_8PhWidgetEPNS_8PhAppearE);
#else
INCLUDE_ASM("nonmatchings/pafmini_065F80", func_0007EE78);
#endif

void func_00067728(M2C_UNK **arg0) {
    *arg0 = &D_000D9150;
    _ZN3paf8PhWidgetD2Ev((s32) arg0);
}

void func_00067750(M2C_UNK **arg0) {
    *arg0 = &D_000D9150;
    _ZN3paf8PhWidgetD2Ev((s32) arg0);
    _ZdlPv(arg0);
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_065F80", func_0007EFAC);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_0007F070);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_0007F134);
#else
INCLUDE_ASM("nonmatchings/pafmini_065F80", _ZN3paf8PhScroll11SetMaxValueEf);

INCLUDE_ASM("nonmatchings/pafmini_065F80", _ZN3paf8PhScroll16SetVisibleAmountEf);

INCLUDE_ASM("nonmatchings/pafmini_065F80", _ZN3paf8PhScroll8SetValueEf);
#endif

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_000679A4);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00067A64);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_065F80", _ZN3paf8PhScroll15SetShadowRenderEPNS_9PhSRenderE);
#endif

#if FW_VERSION == 282
void _ZN3paf8PhScroll15SetShadowRenderEPNS_9PhSRenderE(struct Unk_scePaf_C07B7162_0 *arg0) {
    func_00077BCC(arg0->unk1E8);
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00067AA4);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00067BEC);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00067C4C);

s32 func_00067C78(void) {
    return D_000E1280;
}

s32 _ZN3paf6PhSpin10WidgetTypeEv(void) {
    return D_000E1280;
}

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D913C);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D9150);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D9220);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D5AD0);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D5B40);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D5B64);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D5B88);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D5BAC);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D5BD0);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_00106278);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000F3B30);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000F3B54);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000F3B78);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_001062E8);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_0010630C);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_00106330);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_00106354);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_00106378);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D9228);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D9298);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D92B8);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D92D8);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D92F8);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D9318);
#endif

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00067C90);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00067FB0);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_000682D0);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00068440);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_000685B0);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00068728);

s32 func_000689C4(struct Unk_func_0005D398_0 *arg0, struct Unk_func_0005D398_1 *arg1) {
    if (((u32) (arg1->unk8 - 1) >= 4U) || (arg0->unk331 == 0) || (arg0->unk1EC != 5)) {
        _ZN3paf8PhWidget22HandleFocusSwitchEventEPNS_7PhEventE(arg0, arg1);
    }
    arg0->unk334 = 0;
    return 0;
}

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00068A1C);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00068B64);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00068CE0);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00068DC4);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_065F80", func_000805DC);
#else
s32 func_00068E5C(struct Unk_func_00068E5C_0 *arg0, s32 arg1) {
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

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00068EE0);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00068F38);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00068F88);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00068FD4);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00069010);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00069124);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00069238);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00069340);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00069454);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_000695A0);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_065F80", func_0006956C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_065F80", func_000695E8);
#endif

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00069648);

INCLUDE_ASM("nonmatchings/pafmini_065F80", _ZN3paf6PhSpin14SetMaxSelectedEi);

INCLUDE_ASM("nonmatchings/pafmini_065F80", _ZN3paf6PhSpin11SetSelectedEi);

INCLUDE_ASM("nonmatchings/pafmini_065F80", _ZN3paf6PhSpin14ChangeSelectedEii);

INCLUDE_ASM("nonmatchings/pafmini_065F80", _ZN3paf6PhSpin11SetAnimTimeEf);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_000698E4);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00069934);
#endif

#if FW_VERSION == 282
s32 func_0006996C(struct Unk_func_0006996C_0 *arg0, s32 arg1) {
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

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_0006998C);

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000F3C70);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D93A0);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000F3D50);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000F1EB0);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D93A0);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000F1F90);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000F3C30);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D93A0);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000F3D10);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_001063E8);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D93A0);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_001064C8);
#endif

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00069BB8);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00069C58);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D93A0);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D7950);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D5D28);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00069CB8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00069C98);

void func_00069CF8(void) {
    func_00069C98(1, 0xFFFF);
}
#endif

s32 func_00069D18(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1284 != arg1) {
        var_v0 = _ZNK3paf8PhWidget9IsInheritEPKc(arg0, arg1);
    }
    return var_v0;
}

s32 func_00069D44(void) {
    return D_000E1284;
}

s32 _ZN3paf6PhText10WidgetTypeEv(void) {
    return D_000E1284;
}

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00069D5C);

INCLUDE_ASM("nonmatchings/pafmini_065F80", _ZN3paf6PhTextC1EPNS_8PhWidgetEPNS_8PhAppearE);

INCLUDE_ASM("nonmatchings/pafmini_065F80", func_00069E74);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D93A0);

INCLUDE_RODATA("nonmatchings/pafmini_065F80", D_000D9470);
#endif

INCLUDE_ASM("nonmatchings/pafmini_065F80", _ZN3paf6PhText7SetSizeEfff);

INCLUDE_ASM("nonmatchings/pafmini_065F80", _ZN3paf6PhText7SetSizeERK4vec4);

INCLUDE_ASM("nonmatchings/pafmini_065F80", _ZN3paf6PhText12SetFontStyleERKNS_11PhFontStyleE);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pafmini_065F80", _ZN3paf6PhText15SetShadowRenderEPNS_9PhSRenderE);
#endif

void func_0006A0D0(struct Unk_func_0006A0D0_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk334 = 1;
    _ZN3paf8PhWidget8SetStyleEib((s32) arg0, arg1, arg2 & 0xFF);
}

void func_0006A0F4(struct Unk_func_0006A0F4_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk334 = 1;
    _ZN3paf8PhWidget8SetStyleEii(arg0, arg1, arg2);
}

void func_0006A118(struct Unk_func_0006A118_0 *arg0) {
    arg0->unk334 = 1;
    arg0->unk335 = 1;
    _ZN3paf8PhWidget8SetStyleEif((s32) arg0);
}

void func_0006A140(struct Unk_func_0006A140_0 *arg0) {
    arg0->unk334 = 1;
    arg0->unk335 = 1;
    _ZN3paf8PhWidget8SetStyleEiRK4vec4((s32) arg0);
}

void func_0006A168(struct Unk_func_0006A168_0 *arg0) {
    arg0->unk334 = 1;
    scePaf_DB230BE1();
}

s32 scePaf_D1EE972C(struct Unk_scePaf_D1EE972C_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;
    void *temp_v0;

    var_v1 = -1;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != NULL) {
        var_v1 = func_000782CC(temp_v0, arg1, arg2, arg3);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/pafmini_065F80", _ZN3paf6PhText12SetFirstLineEf);

void _ZNK3paf6PhText12GetFirstLineEv(struct Unk_scePaf_FA758B05_0 *arg0) {
    func_00078438(arg0->unk1E8);
}

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_065F80", _ZN3paf6PhText15SetColumnOffsetEf);
#else
INCLUDE_ASM("nonmatchings/pafmini_065F80", func_0008189C);
#endif

s32 _ZNK3paf6PhText13GetTextLengthEv(struct Unk_scePaf_DC8B0309_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != 0) {
        var_v1 = func_00078498(temp_v0);
    }
    return var_v1;
}

s32 _ZNK3paf6PhText12GetLineCountEv(struct Unk_scePaf_FA87D725_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != 0) {
        var_v1 = func_000784B0(temp_v0);
    }
    return var_v1;
}

s32 _ZNK3paf6PhText13GetCurrentPosEv(struct Unk_scePaf_409E25A3_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != 0) {
        var_v1 = func_000784C8(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/pafmini_065F80", _ZNK3paf6PhText15GetVisibleLinesEv);

INCLUDE_ASM("nonmatchings/pafmini_065F80", _ZNK3paf6PhText13GetLineHeightEv);
