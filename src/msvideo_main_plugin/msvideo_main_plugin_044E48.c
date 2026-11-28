/* lang: c++ */
#include "common.h"
#include "msvideo_main_plugin_decls.h"

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00044E48);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00044E84);

Class_000B3008::~Class_000B3008() {
    D_0017D440 = 0;
}

#if FW_VERSION == 300 || FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00044F58);
#endif

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B2E14);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B2E30);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00045A94);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4190);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B41AC);
#endif

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B2E14_v303);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B2E30_v303);
#endif

#if FW_VERSION == 302
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B2E14_v302);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B2E30_v302);
#endif

#if FW_VERSION == 301
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B2E14_v301);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B2E30_v301);
#endif

s32 func_00044FC8(void) {
    return 0;
}

void func_00044FD0(void) {
}

s32 func_00044FD8(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00044FE0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00045054);

#if FW_VERSION >= 330 && FW_VERSION < 352
void func_00046780(void) {
    func_0002B68C(0);
    func_0002B634(0);
}
#endif

#if FW_VERSION == 352
void func_00045154(void) {
    func_0002B68C(0);
    func_0002B634(0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00045178);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000451E0);

void func_00045248(void) {
    func_00045444();
}

void func_00045264(void) {
    func_000454A0();
}

void func_00045280(void) {
    func_00045444();
}

void func_0004529C(void) {
    func_000454A0();
}

void func_000452B8(void) {
    func_00045444();
}

void func_000452D4(void) {
    func_000454A0();
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000452F0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00045360);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00045444);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000454A0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00045574);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000455EC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00045654);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000456BC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00045730);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000457A4);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00045820);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3008);

__asm__(".globl _ZTV14Class_000B3008\n_ZTV14Class_000B3008 = D_000B3008 - 8\n");

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3088);

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B2F0C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B2F20);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000465C0);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000458A0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000458E0);

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00045974);
#else
void func_00045974(struct Unk_func_00045974_0 *arg0) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = D_0017D448 - 1;
    D_0017D448 = temp_v0;
    if (temp_v0 == 0) {
        temp_a0 = arg0->unk4;
        if (temp_a0 != 0) {
            temp_v0_2 = arg0->unkC;
            if (temp_v0_2 == 0) {

            } else {
                _ZN3paf4View9PageCloseEPv(temp_a0, temp_v0_2);
            }
        }
    }
}
#endif

void func_000459C8(struct Unk_func_000459C8_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk14;
    if (temp_v1 != 0) {
        D_0017D444 = (D_0017D444 == 0) ? temp_v1 : D_0017D444;
    }
    func_000053E0((s32) arg0);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000459FC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00045A48);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00045A88);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00045B48);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00045DF4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00045E24);

#if FW_VERSION < 350
Class_000B31B8::~Class_000B31B8() {
}
#else
void func_00045E54(M2C_UNK **arg0) {
    *arg0 = &D_000B31B8;
    func_0000FCD8((s32) arg0);
}

void func_00045E7C(M2C_UNK **arg0) {
    *arg0 = &D_000B31B8;
    func_0000FCD8((s32) arg0);
}
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00045EA4);
#endif

#if FW_VERSION == 352
void func_00045EA4(M2C_UNK **arg0) {
    *arg0 = &D_000B31B8;
    func_0000FCD8((s32) arg0);
    _ZdlPv((s32) arg0);
}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B30B8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3140);

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B301C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3038);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3060);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3090);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3150);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3158);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3164);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3170);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00045EDC);

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B30DC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B30F0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B310C);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004602C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004624C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004627C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000462E0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046454);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046494);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046654);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046694);

Class_000B31D0::~Class_000B31D0() {
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004675C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046814);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046850);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046890);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046970);

void func_000469E8(void) {
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000469F0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046A8C);

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046B08);
#else
void func_00046B08(struct Unk_func_00046B08_0 *arg0) {
    _ZN3vsh10OptionMenu5CloseEPN3paf4ViewEPKcS5_(arg0->unk4, arg0->unk8, 0);
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046B2C);
#else
void func_00046B2C(void) {
    _ZN3vsh10OptionMenu4ShowEv();
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046B48);
#else
void func_00046B48(void) {
    _ZN3vsh10OptionMenu4HideEv();
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046B64);

void func_00046BF0(struct Unk_func_00046BF0_0 *arg0, s32 arg1) {
    arg0->unk4 = arg1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046BF8);

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046C18);
#else
void func_00046C18(s32 arg0) {
    _ZN3paf9PhSRender8SetStyleEii(arg0 + 8);
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046C34);
#else
void func_00046C34(s32 arg0) {
    _ZN3paf9PhSRender8SetStyleEif(arg0 + 8);
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046C50);
#else
void func_00046C50(s32 arg0) {
    _ZN3paf9PhSRender8SetStyleEiRK4vec4(arg0 + 8);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046C6C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046CB0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046CF0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046D2C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046D6C);

void func_00046D90(struct Unk_vt_func_00046D90_arg0 **arg0) {
    (*arg0)->unk10();
}

void func_00046DB4(struct Unk_vt_func_00046DB4_arg0 **arg0) {
    (*arg0)->unk14();
}

void func_00046DD8(struct Unk_vt_func_00046DD8_arg0 **arg0) {
    (*arg0)->unk18();
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046DFC);

void func_00046E20(struct Unk_vt_func_00046E20_arg0 **arg0) {
    (*arg0)->unk20();
}

void func_00046E44(struct Unk_vt_func_00046E44_arg0 **arg0) {
    (*arg0)->unk24();
}

void func_00046E68(struct Unk_vt_func_00046E68_arg0 **arg0) {
    (*arg0)->unk28();
}

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046E8C);
#else
void func_00046E8C(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiRb(arg0 + 8);
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046EA8);
#else
void func_00046EA8(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiRi(arg0 + 8);
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046EC4);
#else
void func_00046EC4(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiRf(arg0 + 8);
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046EE0);
#else
void func_00046EE0(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiR4vec4(arg0 + 8);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046EFC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046F3C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046F7C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00046FBC);

s32 func_00046FFC(void) {
    return -1;
}

s32 func_00047004(void) {
    return -1;
}

s32 func_0004700C(void) {
    return -1;
}

s32 func_00047014(void) {
    return 0;
}

s32 func_0004701C(void) {
    return 0;
}

s32 func_00047024(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004702C);

void func_00047190(M2C_UNK **arg0) {
    *arg0 = &D_000B3350;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000471A0);
#else
void func_000471A0(M2C_UNK **arg0) {
    *arg0 = &D_000B3350;
    _ZdlPv((s32) arg0);
}
#endif

void func_000471C8(struct Unk_func_000471C8_0 *arg0) {
    arg0->unk0 = &D_000B32B8;
    arg0->unk8 = &D_000B0F88;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000471E4);
#else
void func_000471E4(struct Unk_func_000471E4_0 *arg0) {
    arg0->unk0 = &D_000B32B8;
    arg0->unk8 = &D_000B0F88;
    _ZdlPv((s32) arg0);
}
#endif

void func_00047218(void) {
}

s32 func_00047220(void) {
    return -1;
}

void func_00047228(void) {
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00047230);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00047290);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000472F0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00047340);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00047390);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000473E8);

s32 func_000474C8(void) {
    return func_0002B7B8() != 0;
}
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000481A0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00048304);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000474E8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00047540);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000475C0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00047640);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00047C20);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00047D64);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00047EA8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00048144);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000483E0);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00048684);
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00048C74);
#endif

void func_0004871C(struct Unk_func_0004871C_0 *arg0, struct Unk_func_0004871C_1 *arg1) {
    arg0->unk30 = (s32) arg1->unk0;
    arg0->unk34 = (s32) arg1->unk4;
    arg0->unk38 = (s32) arg1->unk8;
    arg0->unk3C = (s32) arg1->unkC;
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00048740);
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00048CF8);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B31B8);

#if FW_VERSION < 350
__asm__(".globl _ZTV14Class_000B31B8\n_ZTV14Class_000B31B8 = D_000B31B8 - 8\n");
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B31D0);

#if FW_VERSION >= 350
__asm__(".globl _ZTV14Class_000B31D0\n_ZTV14Class_000B31D0 = D_000B31D0 - 8\n");
#else
__asm__(".globl _ZTV14Class_000B31D0\n_ZTV14Class_000B31D0 = D_000B31D0 - 8\n");
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3220);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B32B8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3350);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3368);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00048858);
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00048DD8);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00048F78);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00049194);

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000491D8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004921C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3420);
#endif

#if FW_VERSION == 352
void func_000491D8(struct Unk_func_000491D8_0 *arg0) {
    func_0000E634((u8 *)arg0 + 0xA4, 0);
    func_0000E634((u8 *)arg0 + 0x4C8, 0);
    arg0->unk4D0 = 0;
    arg0->unk4C4 = 0;
    arg0->unk4C0 = 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004921C);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00049284);

void func_000492F4(void) {
    _ZN3paf13PhApplication14FinishDispListEv();
    _ZN3paf13PhApplication13StartDispListEv();
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00049318);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000493F8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00049468);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00049560);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00049660);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000496F0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00049738);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3420);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00049780);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004992C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00049E3C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004A188);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004A558);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004A928);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004AD00);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004AE20);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004B02C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004B09C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004B1C0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004B380);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004B57C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004B6D0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004B85C);
#endif

#if FW_VERSION < 350 || FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3518);
#endif

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3388);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B338C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3390);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3394);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3398);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B339C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B33A0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B33A4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B33A8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B33AC);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B351C);

#if FW_VERSION < 350 || FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3520);
#endif

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B33B8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B33BC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00049864);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4748);
#endif

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B33D0);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000498CC);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004993C);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
void func_0004993C(void) {
    _ZN3paf13PhApplication14FinishDispListEv();
    _ZN3paf13PhApplication13StartDispListEv();
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
s32 func_000499A4(void) {
    return M2C_FIELD(_ZN3paf9Framework8InstanceEv(), s32 *, 0x9C);
}

s32 func_000499C4(void) {
    return func_000499A4() != 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000499E4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00049AC4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00049B34);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004A60C);
#endif

#if FW_VERSION == 311
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00049C2C_v311);
#endif

#if FW_VERSION == 310
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00049C2C_v310);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00049D10);
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00049960);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000499A8);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000499F0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00049A38);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00049A80);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00049C2C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004A11C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004A828);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004AC08);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004B418);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004B194);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004B19C);

void func_0004B804(void *arg0) {
    func_0004DA40();
    func_0000E634(arg0 + 0xEB4, 0);
    func_0000E634(arg0 + 0xEB8, 0);
    func_0000E634(arg0 + 0xEBC, 0);
    M2C_FIELD(arg0, s8 *, 0xEB0) = 0;
    M2C_FIELD(arg0, s8 *, 0xEC4) = 0;
    M2C_FIELD(arg0, s32 *, 0xEA4) = 0;
    M2C_FIELD(arg0, s32 *, 0xEA0) = 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004B85C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004B9E0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004BAD8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004BEC0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004BF7C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004C09C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004C1C8);
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004AFF0);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
void func_0004B194(void) {

}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004B19C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004B2BC);
#endif

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B348C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4830);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4834);
#endif

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3490);
#endif

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3494);
#endif

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3498);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B349C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B34A0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B34A4);
#endif

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B34A8);
#endif

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B34AC);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4850);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4854);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004B194);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004B19C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004B2BC);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3524);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3528);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B352C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3530);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3534);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3538);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B353C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3540);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004B988);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004BB24);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004BC80);
#else
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B34D0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004B788);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004B860);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004BF34);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004BFF0);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004C624);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004C6E4);
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004C2EC);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004C810);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004CE60);
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004C818);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004C950);
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004BAFC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004BC24);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004C1FC);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004C25C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004C388);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004C43C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004D2C0);
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004C5DC);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004C1C0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004C2EC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004C750);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004C818);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004C950);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004CA14);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004CC60);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004CDE4);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004CED4);
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004C7E8);
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
void func_0004D818(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xFB4) = (s32) (((arg1 ^ 4) != 0) ? 0 : 8);
    M2C_FIELD(arg0, s32 *, 0xFAC) = 0;
    M2C_FIELD(arg0, s32 *, 0xFB0) = 0;
    M2C_FIELD(arg0, s32 *, 0xFB8) = 0;
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
void func_0004D818(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xFC0) = (s32) (((arg1 ^ 4) != 0) ? 0 : 8);
    M2C_FIELD(arg0, s32 *, 0xFB8) = 0;
    M2C_FIELD(arg0, s32 *, 0xFBC) = 0;
    M2C_FIELD(arg0, s32 *, 0xFC4) = 0;
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004D838);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004D9DC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004DA90);
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004CAB4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004CC30);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004CDAC);
#endif

#if FW_VERSION == 352
void func_0004D194(struct Unk_func_0004D194_0 *arg0, s32 arg1) {
    arg0->unkFB4 = (s32) (((arg1 ^ 4) != 0) ? 0 : 8);
    arg0->unkFAC = 0;
    arg0->unkFB0 = 0;
    arg0->unkFB8 = 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004D1B4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004D358);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004D40C);
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004D4AC);
#endif

#if FW_VERSION == 352
void func_0004D4AC(struct Unk_func_0004D4AC_0 *arg0) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_v0;
    struct Unk_func_0004D4AC_temp_s2 *temp_s2;

    temp_s2 = arg0->unk4;
    temp_v0 = _ZN3paf7Surface4LockEi(arg0->unkEA8, 0);
    if (sceMpegBaseCscAvc(temp_v0, 0, (s32) arg0->unkEA8->unk3C >> 2, (u8 *)arg0 + 0xF4C) != 0) {
        temp_s2->unk341 = 1;
    }
    func_0004C1C0(temp_v0, arg0->unkEA8->unk3C, arg0->unkE94, arg0->unkE98, arg0->unkE84, arg0->unkE88, arg0->unkE8C, arg0->unkE90);
    temp_a3 = arg0->unkE98;
    if ((u32) temp_a3 < 0x110U) {
        temp_a0 = arg0->unkEA8->unk3C;
        sce_paf_private_memcpy(temp_v0 + (temp_a0 * temp_a3), temp_v0 + (temp_a0 * (temp_a3 - 1)), arg0->unkEAC->unk3C);
        temp_a1 = arg0->unkEA8->unk3C;
        sceKernelDcacheWritebackRange(temp_v0 + (temp_a1 * arg0->unkE98), (u32) temp_a1);
    }
    _ZN3paf7Surface6UnlockEv(arg0->unkEA8);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004D5A8);

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004D70C);
#endif

#if FW_VERSION >= 350
s32 func_0004D70C(s32 arg0, s32 *arg1, s32 arg2) {
    if (arg2 != 0) {

    } else {
        func_0000E634(arg0 + 0xEBC, *arg1);
    }
    return 0;
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
s32 func_0004D70C(s32 arg0, s32 *arg1, s32 arg2) {
    if (arg2 != 0) {

    } else {
        func_0000E634(arg0 + 0xEC8, *arg1);
    }
    return 0;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004D73C);
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
void func_0004D7CC(struct Unk_func_0004D7CC_0 *arg0) {
    s32 var_v0;

    arg0->unkEF4 = arg0->unkF8C;
    var_v0 = 0;
    arg0->unkF04 = arg0->unkF90;
    arg0->unkEFC = arg0->unkF9C;
    arg0->unkF0C = arg0->unkFA0;
    arg0->unkEF8 = arg0->unkF94;
    arg0->unkF00 = arg0->unkFA4;
    arg0->unkF08 = arg0->unkF98;
    arg0->unkF10 = arg0->unkFA8;
    if (arg0->unkEA4 != 0) {
        var_v0 = arg0->unkEA5 != 0;
    }
    func_0004C43C((s32) arg0, var_v0);
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004D160);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
void func_0004DE44(void *arg0) {
    s32 var_v0;

    M2C_FIELD(arg0, s32 *, 0xF00) = (s32) M2C_FIELD(arg0, s32 *, 0xF98);
    var_v0 = 0;
    M2C_FIELD(arg0, s32 *, 0xF10) = (s32) M2C_FIELD(arg0, s32 *, 0xF9C);
    M2C_FIELD(arg0, s32 *, 0xF08) = (s32) M2C_FIELD(arg0, s32 *, 0xFA8);
    M2C_FIELD(arg0, s32 *, 0xF18) = (s32) M2C_FIELD(arg0, s32 *, 0xFAC);
    M2C_FIELD(arg0, s32 *, 0xF04) = (s32) M2C_FIELD(arg0, s32 *, 0xFA0);
    M2C_FIELD(arg0, s32 *, 0xF0C) = (s32) M2C_FIELD(arg0, s32 *, 0xFB0);
    M2C_FIELD(arg0, s32 *, 0xF14) = (s32) M2C_FIELD(arg0, s32 *, 0xFA4);
    M2C_FIELD(arg0, s32 *, 0xF1C) = (s32) M2C_FIELD(arg0, s32 *, 0xFB4);
    if (M2C_FIELD(arg0, u8 *, 0xEB0) != 0) {
        var_v0 = M2C_FIELD(arg0, u8 *, 0xEB1) != 0;
    }
    func_0004C43C((s32) arg0, var_v0);
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004D1D0);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
void func_0004D1D0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xF00) = (s32) M2C_FIELD(arg0, s32 *, 0xF98);
    M2C_FIELD(arg0, s32 *, 0xF10) = (s32) M2C_FIELD(arg0, s32 *, 0xF9C);
    M2C_FIELD(arg0, s32 *, 0xF08) = (s32) M2C_FIELD(arg0, s32 *, 0xFA8);
    M2C_FIELD(arg0, s32 *, 0xF18) = (s32) M2C_FIELD(arg0, s32 *, 0xFAC);
    M2C_FIELD(arg0, s32 *, 0xF04) = (s32) M2C_FIELD(arg0, s32 *, 0xFA0);
    M2C_FIELD(arg0, s32 *, 0xF0C) = (s32) M2C_FIELD(arg0, s32 *, 0xFB0);
    M2C_FIELD(arg0, s32 *, 0xF14) = (s32) M2C_FIELD(arg0, s32 *, 0xFA4);
    M2C_FIELD(arg0, s32 *, 0xF1C) = (s32) M2C_FIELD(arg0, s32 *, 0xFB4);
    func_0004C43C((s32) arg0, (s32) M2C_FIELD(arg0, u8 *, 0xEB1));
}
#endif

#if FW_VERSION == 352
void func_0004D7CC(struct Unk_func_0004D7CC_0 *arg0) {
    s32 var_v0;

    arg0->unkEF4 = (s32) arg0->unkF8C;
    var_v0 = 0;
    arg0->unkF04 = (s32) arg0->unkF90;
    arg0->unkEFC = (s32) arg0->unkF9C;
    arg0->unkF0C = (s32) arg0->unkFA0;
    arg0->unkEF8 = (s32) arg0->unkF94;
    arg0->unkF00 = (s32) arg0->unkFA4;
    arg0->unkF08 = (s32) arg0->unkF98;
    arg0->unkF10 = (s32) arg0->unkFA8;
    if (arg0->unkEA4 != 0) {
        var_v0 = arg0->unkEA5 != 0;
    }
    func_0004CA14((s32) arg0, var_v0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004D83C);

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004DF28);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004D8B0);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004DA40);
#else
void func_0004DA40(void) {
    _ZN3paf13PhApplication14FinishDispListEv();
    _ZN3paf13PhApplication13StartDispListEv();
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004DA64);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004DAA4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004DB10);

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00049960);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000499A8);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004DB84);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004DBCC);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3560);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3580);

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3570);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3590);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B35D8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B35DC);
#endif

#if FW_VERSION < 310 || FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B35E0);
#endif

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B35C4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B35C8);
#endif

#if FW_VERSION < 310 || FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B35E4);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B35F0);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3690);
#else
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3670);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004DC14);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004DD40);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004DDD8);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004DFC8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004E1B8);
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004D7B8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004D9BC);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004E8AC);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004EDB4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004EE9C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004F074);
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005439C);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004E5C4);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004F26C);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004F32C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004F784);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004FAB8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004FC54);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004FDB4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004FE88);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004FFEC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050158);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B36D4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B36E0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B36EC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B36FC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B370C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B371C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3730);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B373C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3744);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3754);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3764);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3774);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3784);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3794);

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004E6AC);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004E890);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004F974);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004FA34);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004FE94);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004F204);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004F3A0);
#endif

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3788);
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004E890);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004EA88);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004EED0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004F204);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004F3A0);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004F500);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004F618);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004F788);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004F900);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B37A0);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005021C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000505FC);

s32 func_000507F4(s32 arg0) {
    func_00069758(arg0 + 0x38C);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050814);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005092C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050B08);

s32 func_00050B9C(s32 arg0) {
    func_00061094(arg0 + 0x940);
    return 0;
}

s32 func_00050BBC(s32 arg0) {
    func_000610B0(arg0 + 0x940);
    return 0;
}
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
s32 func_00050BDC(struct Unk_func_00050BDC_0 *arg0) {
    arg0->unk9E4 = 1;
    func_0006102C(&arg0->pad0[0x948], 1);
    return 0;
}

s32 func_00050C08(struct Unk_func_00050C08_0 *arg0, s32 arg1) {
    arg0->unkB44 = arg1;
    func_0006408C(&arg0->pad0[0x48]);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050C94);

void func_000547B0(s32 arg0) {
    func_0006356C(arg0 + 0x48);
}

void func_00050CB0(s32 arg0) {
    func_00067884(arg0 + 0x2B0);
}

void func_00050CCC(s32 arg0) {
    func_000678D0(arg0 + 0x2B0);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050CE8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050D18);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050E14);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050E8C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050ED4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050F48);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051010);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051124);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000513C8);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004F9D4);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4C5C);
#endif

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3920);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3948);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004FE4C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004FF8C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005004C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050054);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005005C);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050064);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
s32 func_00050064(s32 arg0) {
    func_00069758(arg0 + 0x35C);
    return 0;
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
s32 func_00050064(s32 arg0) {
    func_00069758(arg0 + 0x33C);
    return 0;
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050084);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005019C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050378);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005040C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
s32 func_0005040C(s32 arg0) {
    func_00061094(arg0 + 0x90C);
    return 0;
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
s32 func_0005040C(s32 arg0) {
    func_00061094(arg0 + 0x8EC);
    return 0;
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005042C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
s32 func_0005042C(s32 arg0) {
    func_000610B0(arg0 + 0x90C);
    return 0;
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
s32 func_0005042C(s32 arg0) {
    func_000610B0(arg0 + 0x8EC);
    return 0;
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005044C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
s32 func_0005044C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x9B0) = 1;
    func_0006102C(arg0 + 0x914, 1);
    return 0;
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
s32 func_0005044C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x990) = 1;
    func_0006102C(arg0 + 0x8F4, 1);
    return 0;
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050478);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
s32 func_00050478(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    s32 var_a0;
    void *temp_v0;

    temp_v0 = (arg1 * 0xC) + arg0 + 0xB10;
    var_a0 = 1;
    if (arg1 < 3U) {
        var_a0 = 0;
        M2C_FIELD(temp_v0, u32 *, 8) = arg1;
        M2C_FIELD(temp_v0, s32 *, 4) = arg2;
        M2C_FIELD(temp_v0, s32 *, 0xC) = arg3;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
s32 func_00050478(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    s32 var_a0;
    void *temp_v0;

    temp_v0 = (arg1 * 0xC) + arg0 + 0xAF0;
    var_a0 = 1;
    if (arg1 < 3U) {
        var_a0 = 0;
        M2C_FIELD(temp_v0, u32 *, 8) = arg1;
        M2C_FIELD(temp_v0, s32 *, 4) = arg2;
        M2C_FIELD(temp_v0, s32 *, 0xC) = arg3;
    }
    return var_a0;
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000504B0);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
s32 func_000504B0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xB10) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
s32 func_000504B0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xAF0) = arg1;
    return 0;
}
#endif

#if FW_VERSION == 352
s32 func_00050BDC(struct Unk_func_00050BDC_0 *arg0) {
    arg0->unk9E4 = 1;
    func_0006102C((u8 *)arg0 + 0x948, 1);
    return 0;
}

s32 func_00050C08(struct Unk_func_00050C08_0 *arg0, s32 arg1) {
    arg0->unkB44 = arg1;
    func_0006408C((u8 *)arg0 + 0x48);
    return 0;
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050C2C);
#endif

#if FW_VERSION == 352
void func_00050C2C(struct Unk_func_00050C2C_0 *arg0, M2C_UNK arg1) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = (u8 *)arg0 + 0xB88;
    func_00061094(temp_s0);
    temp_v0 = arg0->unkB84;
    if (temp_v0 != 0) {
        arg0->unkB84 = (s32) (temp_v0 - 1);
    }
    func_000610B0(temp_s0);
    func_0006388C((u8 *)arg0 + 0x48, arg1);
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050524);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
void func_00050524(s32 arg0) {
    func_0006356C(arg0 + 0x50);
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050540);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
void func_00050540(s32 arg0) {
    func_00067884(arg0 + 0x2A4);
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
void func_00050540(s32 arg0) {
    func_00067884(arg0 + 0x284);
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005055C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
void func_0005055C(s32 arg0) {
    func_00067884(arg0 + 0x2A4);
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
void func_0005055C(s32 arg0) {
    func_00067884(arg0 + 0x284);
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050578);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
void func_00050578(s32 arg0) {
    func_000678D0(arg0 + 0x2A4);
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
void func_00050578(s32 arg0) {
    func_000678D0(arg0 + 0x284);
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050594);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050660);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050690);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005078C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050804);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005084C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050854);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005086C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050874);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005087C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005094C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000509C0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000509C8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050A90);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050BAC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050BB4);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051AC4);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050BBC_v303);
#endif

#if FW_VERSION == 302
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050BBC_v302);
#endif

#if FW_VERSION == 301
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050BBC_v301);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050BBC_v300);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050C5C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050D8C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051038);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000511D8);
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3800);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3958);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B39A8);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4C90);
#endif

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3970);
#endif

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3B00);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3B50);
#endif

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3A40);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000513E8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000513F0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000513F8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051400);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051408);
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051410);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051478);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000514D8);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
void func_000514D8(void *arg0) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(arg0, void ***, 0xB10);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 0x10)(temp_a0);
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
void func_000514D8(void *arg0) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(arg0, void ***, 0xAF0);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 0x10)(temp_a0);
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051500);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
void func_00051500(void *arg0) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(arg0, void ***, 0xB10);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 0x14)(temp_a0);
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
void func_00051500(void *arg0) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(arg0, void ***, 0xAF0);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 0x14)(temp_a0);
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051528);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
void func_00051528(void *arg0) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(arg0, void ***, 0xB10);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 0x18)(temp_a0);
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
void func_00051528(void *arg0) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(arg0, void ***, 0xAF0);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 0x18)(temp_a0);
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051550);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
void func_00051550(void *arg0, s32 arg1) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(arg0, void ***, 0xB10);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, s32), 0x1C)(temp_a0, arg1 & 0xFF);
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
void func_00051550(void *arg0, s32 arg1) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(arg0, void ***, 0xAF0);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, s32), 0x1C)(temp_a0, arg1 & 0xFF);
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051578);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
void func_00051578(void *arg0) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(arg0, void ***, 0xB10);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 8)(temp_a0);
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
void func_00051578(void *arg0) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(arg0, void ***, 0xAF0);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 8)(temp_a0);
}
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000515A0);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051628);
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
s32 func_00051628(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x938);
    if (temp_v0 == 0) {

    } else {
        func_000700A0(temp_v0);
    }
    return 0;
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
s32 func_00051628(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x904);
    if (temp_v0 == 0) {

    } else {
        func_000700A0(temp_v0);
    }
    return 0;
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
s32 func_00051628(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x8E4);
    if (temp_v0 == 0) {

    } else {
        func_000700A0(temp_v0);
    }
    return 0;
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005165C);
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
s32 func_0005165C(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (arg1 != 0) {
        var_v1 = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x938), s32 *, 0x390) = arg1;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
s32 func_0005165C(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (arg1 != 0) {
        var_v1 = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x904), s32 *, 0x390) = arg1;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
s32 func_0005165C(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (arg1 != 0) {
        var_v1 = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x8E4), s32 *, 0x450) = arg1;
    }
    return var_v1;
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051678);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051694);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
void func_00051694(s32 arg0) {
    func_0004D7B8(arg0 - 0x40);
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000516B0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000516CC);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000516E8);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
void func_000516E8(s32 arg0) {
    func_0004D9BC(arg0 - 0x40);
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051704);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051720);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005173C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000517B0);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000526B0);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051824);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051840);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005185C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052724);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052740);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005275C);
#endif

#if FW_VERSION == 303
void func_0005187C_v303(s32 arg0, s32 arg1) {
    func_0004F618(arg0 - 0x3C, arg1);
}

void func_00051898_v303(s32 arg0, s32 arg1) {
    func_0004F788(arg0 - 0x3C, arg1);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000518B4_v303);
#endif

#if FW_VERSION == 302
void func_0005187C_v302(s32 arg0, s32 arg1) {
    func_0004F618(arg0 - 0x3C, arg1);
}

void func_00051898_v302(s32 arg0, s32 arg1) {
    func_0004F788(arg0 - 0x3C, arg1);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000518B4_v302);
#endif

#if FW_VERSION == 301
void func_0005187C_v301(s32 arg0, s32 arg1) {
    func_0004F618(arg0 - 0x3C, arg1);
}

void func_00051898_v301(s32 arg0, s32 arg1) {
    func_0004F788(arg0 - 0x3C, arg1);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000518B4_v301);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005187C_v300);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051898_v300);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000518B4_v300);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000518D4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000518F0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005190C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051928);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000527EC);
#endif

#if FW_VERSION == 303
void func_00051944_v303(s32 arg0, s32 arg1) {
    func_0005019C(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION == 302
void func_00051944_v302(s32 arg0, s32 arg1) {
    func_0005019C(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION == 301
void func_00051944_v301(s32 arg0, s32 arg1) {
    func_0005019C(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051944_v300);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051960);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005197C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051998);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000519B4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000519D0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000519EC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051A08);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051A24);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051A40);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051A5C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051A78);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051A94);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051AB0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051ACC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051AE8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051B04);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051B20);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051B3C);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051B8C);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
void func_00051B8C(s32 arg0) {
    func_000514D8(arg0 - 0x40);
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051BA8);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
void func_00051BA8(s32 arg0) {
    func_00051500(arg0 - 0x40);
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051BC4);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
void func_00051BC4(s32 arg0) {
    func_00051528(arg0 - 0x40);
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051BE0);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051C00);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
void func_00051C00(s32 arg0) {
    func_00051578(arg0 - 0x40);
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051C1C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051C38);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051C54);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051C64);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051C8C);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
void func_00051C8C(void) {

}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051C94);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051C9C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051CDC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051D24);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051D40);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
s32 func_00051D40(void *arg0) {
    s32 *temp_v1;
    s32 var_v0;

    temp_v1 = M2C_FIELD(arg0, s32 **, 0x14);
    var_v0 = 1;
    if (temp_v1 != NULL) {
        var_v0 = *temp_v1;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051D58);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
s32 func_00051D58(void *arg0, u32 arg1, s32 *arg2) {
    void *temp_a0;

    if (arg2 != NULL) {
        temp_a0 = M2C_FIELD(arg0, void **, 0x14);
        if (temp_a0 == NULL) {
            *arg2 = 0;
        } else if ((u32) M2C_FIELD(temp_a0, u32 *, 0) >= arg1) {
            *arg2 = M2C_FIELD(((arg1 * 4) + M2C_FIELD(temp_a0, s32 *, 4)), s32 *, -4);
        } else {
            *arg2 = 0;
        }
    }
    return 0;
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051D9C);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
s32 func_00051D9C(void *arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    s32 var_a4;

    var_a4 = 6;
    if (((arg2 == NULL) | (arg3 == NULL)) == 0) {
        *arg2 = 0;
        var_a4 = 0;
        *arg3 = arg1 + M2C_FIELD(arg0, s32 *, 0xC);
    }
    return var_a4;
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051DCC);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
s32 func_00051DCC(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 6;
    if (arg1 != NULL) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x10);
    }
    return var_v1;
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051DE8);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
s32 func_00051DE8(void **arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {

    } else {
        var_v0 = M2C_FIELD(*arg0, s32 (**)(), 0x20)();
    }
    return var_v0;
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051E1C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051E6C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051E88);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051FE8);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
s32 func_00051FE8(void) {
    return 1;
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051FF0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052024);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052094);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052120);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052128);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052168);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
s32 func_00052168(void) {
    return 1;
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052170);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
s32 func_00052170(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xAF4);
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
s32 func_00052170(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xAD4);
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052178);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052194);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000521A4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000521CC);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000531B0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00053258);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004DFC8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004E1B8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00053AD0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004EDB4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004EE9C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004F074);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005439C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00054448);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000547B8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004FAB8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004FC54);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004FDB4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004FE88);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004FFEC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050158);
#endif

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3C3C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3C48);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3C54);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3C64);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3C74);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3C84);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3C98);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3CA8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3CB8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3CC8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3CD8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3CEC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3CFC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3D08);
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052310);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000523C0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004DFC8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004E1B8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052C5C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004EDB4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004EE9C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004F074);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000535EC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00053958);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004FAB8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004FC54);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004FDB4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004FE88);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0004FFEC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050158);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005021C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000505FC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000542BC);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00054314);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
s32 func_00054314(void) {
    return 2;
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005431C);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
s32 func_0005431C(void) {
    return 2;
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00054324);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
s32 func_00054324(void) {
    return 2;
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000507F4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050814);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005092C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050B08);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00054688);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
void func_00054688(s32 arg0) {
    func_00067394(arg0 + 0x29C);
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
void func_00054688(s32 arg0) {
    func_00067394(arg0 + 0x27C);
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050B9C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
s32 func_00050B9C(s32 arg0) {
    func_00061094(arg0 + 0x13BC);
    return 0;
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
s32 func_00050B9C(s32 arg0) {
    func_00061094(arg0 + 0x137C);
    return 0;
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050BBC);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
s32 func_00050BBC(s32 arg0) {
    func_000610B0(arg0 + 0x13BC);
    return 0;
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
s32 func_00050BBC(s32 arg0) {
    func_000610B0(arg0 + 0x137C);
    return 0;
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050BDC);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00054710);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
s32 func_00054710(void) {
    return 2;
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050C08);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
s32 func_00050C08(struct Unk_func_00050C08_0 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1428) = arg1;
    func_0006408C(&arg0->pad0[0x48]);
    func_000566F8(&arg0->pad0[0x350], arg1);
    func_00059A2C(M2C_FIELD(arg0, s32 *, 0x13B4), arg1);
    return 0;
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
s32 func_00050C08(struct Unk_func_00050C08_0 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x13F4) = arg1;
    func_00063FF8((struct Unk_func_00063FF8_0 *) &arg0->pad0[0x48], arg1);
    func_000566F8(&arg0->pad0[0x330], arg1);
    func_00059A2C(M2C_FIELD(arg0, s32 *, 0x1374), arg1);
    return 0;
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005476C);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
s32 func_0005476C(void) {
    return 2;
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00054774);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
s32 func_00054774(void) {
    return 2;
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005477C);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00054784);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
s32 func_00054784(void) {
    return 6;
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005478C);
#endif

#if FW_VERSION < 350 || FW_VERSION == 352
void func_00050C94(s32 arg0) {
    func_00063F50(arg0 + 0x48);
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000547B0);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
void func_000547B0(s32 arg0) {
    func_0006356C(arg0 + 0x48);
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000547CC);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
void func_000547CC(s32 arg0) {
    func_00067884(arg0 + 0x29C);
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
void func_000547CC(s32 arg0) {
    func_00067884(arg0 + 0x27C);
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050CB0);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
void func_00050CB0(s32 arg0) {
    func_00067884(arg0 + 0x29C);
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
void func_00050CB0(s32 arg0) {
    func_00067884(arg0 + 0x27C);
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050CCC);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
void func_00050CCC(s32 arg0) {
    func_000678D0(arg0 + 0x29C);
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
void func_00050CCC(s32 arg0) {
    func_000678D0(arg0 + 0x27C);
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00054820);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050CE8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050D18);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050E14);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050E8C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00054AE8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00054B10);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00054B18);
#endif

#if FW_VERSION == 352
void func_00050CB0(s32 arg0) {
    func_00067884(arg0 + 0x2B0);
}

void func_00050CCC(s32 arg0) {
    func_000678D0(arg0 + 0x2B0);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050CE8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050D18);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050E14);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050E8C);
#endif

#if FW_VERSION < 350 || FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050ED4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00050F48);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051010);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00054CD0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00054CE8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00054CF0);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00054CF8);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
s32 func_00054CF8(void) {
    return 2;
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00054D00);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
s32 func_00054D00(void) {
    return 2;
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00054D08);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
s32 func_00054D08(void) {
    return 2;
}
#endif

#if FW_VERSION < 350 || FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051124);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000513C8);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
s32 func_00055EB8(s32 arg0) {
    return (func_00060FA4(arg0 + 0x13CC, 1, 0x11, 0) != 0) ? 0 : 8;
}

void func_00055EEC(s32 arg0) {
    func_0006102C(arg0 + 0x13CC, 1);
}
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000550E4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00055180);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B37CC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005155C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005176C);

s32 func_000517F4(struct Unk_func_000517F4_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk938;
    if (temp_v0 == 0) {

    } else {
        func_000700A0(temp_v0);
    }
    return 0;
}

s32 func_00051828(struct Unk_func_00051828_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (arg1 != 0) {
        var_v1 = 0;
        arg0->unk938->unk390 = arg1;
    }
    return var_v1;
}
#endif

void func_00051844(s32 arg0) {
    func_0004DFC8(arg0 - 0x40);
}

void func_00051860(s32 arg0) {
    func_0004DFC8(arg0 - 0x3C);
}

void func_0005187C(s32 arg0) {
    func_0004E1B8(arg0 - 0x40);
}

void func_00051898(s32 arg0) {
    func_0004E1B8(arg0 - 0x3C);
}

void func_000518B4(s32 arg0) {
    func_0004EDB4(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000518D0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051944);

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056080);
#endif

#if FW_VERSION == 352
void func_000519B8(s32 arg0) {
    func_0004F26C(arg0 - 0x3C);
}
#endif

void func_000519D4(s32 arg0) {
    func_0004FAB8(arg0 - 0x3C);
}

void func_000519F0(s32 arg0) {
    func_0004FC54(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051A0C);

void func_00051A2C(s32 arg0) {
    func_0004FE88(arg0 - 0x3C);
}

void func_00051A48(s32 arg0) {
    func_0004FFEC(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051A64);

void func_00051A84(s32 arg0) {
    func_0005021C(arg0 - 0x3C);
}

void func_00051AA0(s32 arg0) {
    func_000505FC(arg0 - 0x3C);
}

void func_00051ABC(s32 arg0) {
    func_000507F4(arg0 - 0x3C);
}

void func_00051AD8(s32 arg0) {
    func_00050814(arg0 - 0x3C);
}

void func_00051AF4(s32 arg0) {
    func_0005092C(arg0 - 0x3C);
}

void func_00051B10(s32 arg0) {
    func_00050B08(arg0 - 0x3C);
}

void func_00051B2C(s32 arg0) {
    func_00050B9C(arg0 - 0x3C);
}

void func_00051B48(s32 arg0) {
    func_00050BBC(arg0 - 0x3C);
}

void func_00051B64(s32 arg0) {
    func_00050BDC(arg0 - 0x3C);
}

void func_00051B80(s32 arg0, s32 arg1) {
    func_00050C08(arg0 - 0x3C, arg1);
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051B9C);
#else
void func_00051B9C(s32 arg0, s32 arg1) {
    func_00050C2C(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051BB8);
#else
void func_00051BB8(s32 arg0) {
    func_00050C94(arg0 - 0x3C);
}
#endif

void func_00051BD4(s32 arg0) {
    func_00050CB0(arg0 - 0x3C);
}

void func_00051BF0(s32 arg0) {
    func_00050CCC(arg0 - 0x3C);
}

void func_00051C0C(s32 arg0) {
    func_00050CE8(arg0 - 0x3C);
}

void func_00051C28(s32 arg0) {
    func_00050D18(arg0 - 0x3C);
}

void func_00051C44(s32 arg0) {
    func_00050E14(arg0 - 0x3C);
}

void func_00051C60(s32 arg0) {
    func_00050E8C(arg0 - 0x3C);
}

void func_00051C7C(s32 arg0) {
    func_00050ED4(arg0 - 0x3C);
}

void func_00051C98(s32 arg0) {
    func_00050F48(arg0 - 0x3C);
}

void func_00051CB4(s32 arg0) {
    func_00051010(arg0 - 0x3C);
}

void func_00051CD0(s32 arg0) {
    func_000513C8(arg0 - 0x40);
}

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051CEC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051D08);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051D24);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051D34);

void func_00051D5C(void) {

}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051D64);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051DA4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051DEC);

s32 func_00051E08(struct Unk_func_00051E08_0 *arg0) {
    s32 *temp_v1;
    s32 var_v0;

    temp_v1 = arg0->unk14;
    var_v0 = 1;
    if (temp_v1 != NULL) {
        var_v0 = *temp_v1;
    }
    return var_v0;
}

s32 func_00051E20(struct Unk_func_00051E20_0 *arg0, u32 arg1, s32 *arg2) {
    struct Unk_func_00051E20_temp_a0 *temp_a0;

    if (arg2 != NULL) {
        temp_a0 = arg0->unk14;
        if (temp_a0 == NULL) {
            *arg2 = 0;
        } else if ((u32) temp_a0->unk0 >= arg1) {
            *arg2 = M2C_FIELD(((arg1 * 4) + temp_a0->unk4), s32 *, -4);
        } else {
            *arg2 = 0;
        }
    }
    return 0;
}

s32 func_00051E64(struct Unk_func_00051E64_0 *arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    s32 var_a4;

    var_a4 = 6;
    if (((arg2 == NULL) | (arg3 == NULL)) == 0) {
        *arg2 = 0;
        var_a4 = 0;
        *arg3 = arg1 + arg0->unkC;
    }
    return var_a4;
}

s32 func_00051E94(struct Unk_func_00051E94_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 6;
    if (arg1 != NULL) {
        var_v1 = 0;
        *arg1 = arg0->unk10;
    }
    return var_v1;
}

s32 func_00051EB0(struct Unk_vt_func_00051EB0_arg0 **arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {

    } else {
        var_v0 = (*arg0)->unk20();
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051EE4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051F34);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051F50);

s32 func_000520B0(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000520B8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000520EC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005215C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000521E8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000521F0);

s32 func_00052230(void) {
    return 1;
}

s32 func_00052238(struct Unk_func_00052238_0 *arg0) {
    return arg0->unkB28;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052240);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005225C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005226C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052294);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000523E8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000524D4);

s32 func_00074294(s32 arg0, s32 arg1) {
    return (func_00052C54(arg0 + 4) == 0) ? 0 : 4;
}

s32 func_000525A8(s32 arg0) {
    return (sceMpegAvcDecodeDetailIndex(arg0 + 4) == 0) ? 0 : 4;
}

s32 func_000525D0(s32 arg0) {
    return (sceMpegAvcDecodeDetail2(arg0 + 4) == 0) ? 0 : 4;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000525F8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052808);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052890);

void func_00052914(void) {
    func_00052890(1, 0xFFFF);
}

void func_00052934(void) {
    func_00052890(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052954);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000529F8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052AF0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052B30);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052B7C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052C54);

void func_00052CC4(void) {
    sceMpegDelete();
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052CE0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052D9C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052F88);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3AA0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3AAC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3AB8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3AC8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3AD8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3AE8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3AFC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3B0C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3B1C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3B2C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3B3C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3B50);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3B60);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3B6C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000530C4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005316C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000532D8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00053444);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000539E4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00053E1C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00053EFC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000540C4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000542B0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005435C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000546CC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00054744);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000547FC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00054804);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000548A4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000549D0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00054A88);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00054B30);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00054E88);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00054FC8);

s32 func_00055020(void) {
    return 2;
}

s32 func_00055028(void) {
    return 2;
}

s32 func_00055030(void) {
    return 2;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00055038);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00055080);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00055134);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005529C);

void func_00055394(s32 arg0) {
    func_00067394(arg0 + 0x2B0);
}

s32 func_000553B0(s32 arg0) {
    func_00061094(arg0 + 0x13F4);
    return 0;
}

s32 func_000553D0(s32 arg0) {
    func_000610B0(arg0 + 0x13F4);
    return 0;
}

s32 func_000553F0(struct Unk_func_000553F0_0 *arg0) {
    arg0->unk1440 = 1;
    func_0006102C(&arg0->pad0[0x1404], 1);
    return 0;
}

s32 func_0005541C(void) {
    return 2;
}

s32 func_00055424(struct Unk_func_00055424_0 *arg0, s32 arg1) {
    arg0->unk1460 = arg1;
    func_0006408C(&arg0->pad0[0x48]);
    func_000566F8(&arg0->pad0[0x388], arg1);
    func_00059A2C(arg0->unk13EC, arg1);
    return 0;
}

s32 func_00055478(void) {
    return 2;
}

s32 func_00055480(void) {
    return 2;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00055488);

s32 func_00055490(void) {
    return 6;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00055498);

void func_000554A0(s32 arg0, s32 arg1) {
    func_00063F50(arg0 + 0x48);
}

void func_000554BC(s32 arg0) {
    func_0006356C(arg0 + 0x48);
}

void func_000554D8(s32 arg0) {
    func_00067884(arg0 + 0x2B0);
}

void func_000554F4(s32 arg0) {
    func_00067884(arg0 + 0x2B0);
}

void func_00055510(s32 arg0) {
    func_000678D0(arg0 + 0x2B0);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005552C);

s32 func_00055618(struct Unk_func_00055618_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (arg1 != NULL) {
        var_v1 = func_000636C4((s32) &arg0->pad0[0x48]);
        if (var_v1 == 6) {
            var_v1 = 0;
            *arg1 = arg0->unk1414;
        }
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00055678);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000557AC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000557CC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000557F4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005581C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00055824);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000558D4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000558FC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000559C4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000559DC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000559F4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000559FC);

s32 func_00055A04(void) {
    return 2;
}

s32 func_00055A0C(void) {
    return 2;
}

s32 func_00055A14(void) {
    return 2;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00055A1C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00055CAC);

s32 func_00055DCC(s32 arg0) {
    return (func_00060FA4(arg0 + 0x1404, 1, 0x11, 0) != 0) ? 0 : 8;
}

void func_00055E00(s32 arg0) {
    func_0006102C(arg0 + 0x1404, 1);
}

void func_00055E20(s32 arg0) {
    func_000532D8(arg0 - 0x40);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00055E3C);

void func_00055E58(s32 arg0) {
    func_00053444(arg0 - 0x40);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00055E74);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00055E90);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00055EAC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00055F20);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00055F94);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00055FB0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00055FCC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00055FE8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056008);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056024);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056040);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056060);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005607C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056098);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000560B4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000560D0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000560EC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056108);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056124);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056140);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005615C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056178);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056194);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000561B0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000561CC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000561E8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056204);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056220);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005623C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056258);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056274);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056290);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000562C8);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
s32 func_000562C8(struct Unk_func_000562C8_0 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x140C);
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
s32 func_000562C8(struct Unk_func_000562C8_0 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x13D8);
}
#endif

#if FW_VERSION == 352
void func_00051CEC(s32 arg0) {
    func_000517F4(arg0 - 0x3C);
}

void func_00051D08(s32 arg0, s32 arg1) {
    func_00051828(arg0 - 0x3C, arg1);
}

void func_00051D24(M2C_UNK **arg0) {
    *arg0 = &D_000B39A8;
}

void func_00051D34(M2C_UNK **arg0) {
    *arg0 = &D_000B39A8;
    _ZdlPv((s32) arg0);
}

void func_00051D5C(void) {
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051D64);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051DA4);

void func_00051DEC(s32 arg0) {
    func_00061094(arg0 + 4);
}

s32 func_00051E08(struct Unk_func_00051E08_0 *arg0) {
    s32 *temp_v1;
    s32 var_v0;

    temp_v1 = arg0->unk14;
    var_v0 = 1;
    if (temp_v1 != NULL) {
        var_v0 = *temp_v1;
    }
    return var_v0;
}

s32 func_00051E20(struct Unk_func_00051E20_0 *arg0, u32 arg1, s32 *arg2) {
    struct Unk_func_00051E20_temp_a0 *temp_a0;

    if (arg2 != NULL) {
        temp_a0 = arg0->unk14;
        if (temp_a0 == NULL) {
            *arg2 = 0;
        } else if ((u32) temp_a0->unk0 >= arg1) {
            *arg2 = M2C_FIELD(((arg1 * 4) + temp_a0->unk4), s32 *, -4);
        } else {
            *arg2 = 0;
        }
    }
    return 0;
}

s32 func_00051E64(struct Unk_func_00051E64_0 *arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    s32 var_t0;

    var_t0 = 6;
    if (((arg2 == NULL) | (arg3 == NULL)) == 0) {
        *arg2 = 0;
        var_t0 = 0;
        *arg3 = arg1 + arg0->unkC;
    }
    return var_t0;
}

s32 func_00051E94(struct Unk_func_00051E94_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 6;
    if (arg1 != NULL) {
        var_v1 = 0;
        *arg1 = arg0->unk10;
    }
    return var_v1;
}

s32 func_00051EB0(struct Unk_vt_func_00051EB0_arg0 **arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {

    } else {
        var_v0 = (*arg0)->unk20();
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051EE4);

void func_00051F34(s32 arg0) {
    func_000610B0(arg0 + 4);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00051F50);

s32 func_000520B0(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000520B8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000520EC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005215C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000521E8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000521F0);

s32 func_00052230(void) {
    return 1;
}

s32 func_00052238(struct Unk_func_00052238_0 *arg0) {
    return arg0->unkB28;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052240);

void func_0005225C(M2C_UNK **arg0) {
    *arg0 = &D_000B3A40;
}

void func_0005226C(M2C_UNK **arg0) {
    *arg0 = &D_000B3A40;
    _ZdlPv((s32) arg0);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052294);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000523E8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000524D4);

s32 func_00052580(s32 arg0) {
    return (func_00052C54(arg0 + 4) == 0) ? 0 : 4;
}

s32 func_000525A8(s32 arg0) {
    return (sceMpegAvcDecodeDetailIndex(arg0 + 4) == 0) ? 0 : 4;
}

s32 func_000525D0(s32 arg0) {
    return (sceMpegAvcDecodeDetail2(arg0 + 4) == 0) ? 0 : 4;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000525F8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052808);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3800);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3958);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B39A8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3A40);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052890);

void func_00052914(void) {
    func_00052890(1, 0xFFFF);
}

void func_00052934(void) {
    func_00052890(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052954);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000529F8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052AF0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052B30);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052B7C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052C54);

void func_00052CC4(void) {
    sceMpegDelete();
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052CE0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052D9C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00052F88);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000530C4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005316C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000532D8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00053444);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000539E4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00053E1C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00053EFC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000540C4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000542B0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005435C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000546CC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00054744);

s32 func_000547FC(void) {
    return 0x102;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00054804);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000548A4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000549D0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00054A88);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3AA0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3AAC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3AB8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3AC8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3AD8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3AE8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3AFC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3B0C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3B1C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3B2C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3B3C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3B50);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3B60);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3B6C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00054B30);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00054E88);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00054FC8);

s32 func_00055020(void) {
    return 2;
}

s32 func_00055028(void) {
    return 2;
}

s32 func_00055030(void) {
    return 2;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00055038);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00055080);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00055134);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005529C);

void func_00055394(s32 arg0) {
    func_00067394(arg0 + 0x2B0);
}

s32 func_000553B0(s32 arg0) {
    func_00061094(arg0 + 0x13F4);
    return 0;
}

s32 func_000553D0(s32 arg0) {
    func_000610B0(arg0 + 0x13F4);
    return 0;
}

s32 func_000553F0(struct Unk_func_000553F0_0 *arg0) {
    arg0->unk1440 = 1;
    func_0006102C((u8 *)arg0 + 0x1404, 1);
    return 0;
}

s32 func_0005541C(void) {
    return 2;
}

s32 func_00055424(struct Unk_func_00055424_0 *arg0, s32 arg1) {
    arg0->unk1460 = arg1;
    func_0006408C((u8 *)arg0 + 0x48);
    func_000566F8((u8 *)arg0 + 0x388, arg1);
    func_00059A2C(arg0->unk13EC, arg1);
    return 0;
}

s32 func_00055478(void) {
    return 2;
}

s32 func_00055480(void) {
    return 2;
}

s32 func_00055488(void) {
    return 0;
}

s32 func_00055490(void) {
    return 6;
}

s32 func_00055498(void) {
    return 0;
}

void func_000554A0(s32 arg0, s32 arg1) {
    func_0006388C(arg0 + 0x48, arg1);
}

void func_000554BC(s32 arg0) {
    func_00063F50(arg0 + 0x48);
}

void func_000554D8(s32 arg0) {
    func_00067884(arg0 + 0x2B0);
}

void func_000554F4(s32 arg0) {
    func_00067884(arg0 + 0x2B0);
}

void func_00055510(s32 arg0) {
    func_000678D0(arg0 + 0x2B0);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005552C);

s32 func_00055618(struct Unk_func_00055618_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (arg1 != NULL) {
        var_v1 = func_000636C4((u8 *)arg0 + 0x48);
        if (var_v1 == 6) {
            var_v1 = 0;
            *arg1 = arg0->unk1414;
        }
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00055678);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000557AC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000557CC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000557F4);

s32 func_0005581C(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00055824);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000558D4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000558FC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000559C4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000559DC);

s32 func_000559F4(void) {
    return 0;
}

s32 func_000559FC(void) {
    return 0;
}

s32 func_00055A04(void) {
    return 2;
}

s32 func_00055A0C(void) {
    return 2;
}

s32 func_00055A14(void) {
    return 2;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00055A1C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00055CAC);

s32 func_00055DCC(s32 arg0) {
    return (func_00060FA4(arg0 + 0x1404, 1, 0x11, 0) != 0) ? 0 : 8;
}

void func_00055E00(s32 arg0) {
    func_0006102C(arg0 + 0x1404, 1);
}

void func_00055E20(s32 arg0) {
    func_000532D8(arg0 - 0x40);
}

void func_00055E3C(s32 arg0) {
    func_000532D8(arg0 - 0x3C);
}

void func_00055E58(s32 arg0) {
    func_00053444(arg0 - 0x40);
}

void func_00055E74(s32 arg0) {
    func_00053444(arg0 - 0x3C);
}

void func_00055E90(s32 arg0) {
    func_00053E1C(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00055EAC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00055F20);

void func_00055F94(s32 arg0) {
    func_000542B0(arg0 - 0x3C);
}

void func_00055FB0(s32 arg0) {
    func_00054744(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00055FCC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00055FE8);

void func_00056008(s32 arg0) {
    func_000548A4(arg0 - 0x3C);
}

void func_00056024(s32 arg0) {
    func_000549D0(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056040);

void func_00056060(s32 arg0) {
    func_00054B30(arg0 - 0x3C);
}

void func_0005607C(s32 arg0) {
    func_00054E88(arg0 - 0x3C);
}

void func_00056098(s32 arg0) {
    func_00055038(arg0 - 0x3C);
}

void func_000560B4(s32 arg0) {
    func_00055080(arg0 - 0x3C);
}

void func_000560D0(s32 arg0) {
    func_00055134(arg0 - 0x3C);
}

void func_000560EC(s32 arg0) {
    func_0005529C(arg0 - 0x3C);
}

void func_00056108(s32 arg0) {
    func_000553B0(arg0 - 0x3C);
}

void func_00056124(s32 arg0) {
    func_000553D0(arg0 - 0x3C);
}

void func_00056140(s32 arg0) {
    func_000553F0(arg0 - 0x3C);
}

void func_0005615C(s32 arg0, s32 arg1) {
    func_00055424(arg0 - 0x3C, arg1);
}

void func_00056178(s32 arg0, s32 arg1) {
    func_000554A0(arg0 - 0x3C, arg1);
}

void func_00056194(s32 arg0) {
    func_000554BC(arg0 - 0x3C);
}

void func_000561B0(s32 arg0) {
    func_000554F4(arg0 - 0x3C);
}

void func_000561CC(s32 arg0) {
    func_00055510(arg0 - 0x3C);
}

void func_000561E8(s32 arg0, s32 *arg1) {
    func_00055618(arg0 - 0x3C, arg1);
}

void func_00056204(s32 arg0) {
    func_00055678(arg0 - 0x3C);
}

void func_00056220(s32 arg0) {
    func_000557AC(arg0 - 0x3C);
}

void func_0005623C(s32 arg0) {
    func_000557CC(arg0 - 0x3C);
}

void func_00056258(s32 arg0) {
    func_000558D4(arg0 - 0x3C);
}

void func_00056274(s32 arg0) {
    func_000558FC(arg0 - 0x3C);
}

void func_00056290(s32 arg0) {
    func_000559C4(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 350
void func_000562AC(s32 arg0) {
    func_00055CAC(arg0 - 0x40);
}

s32 func_000562C8(struct Unk_func_000562C8_0 *arg0) {
    return arg0->unk1444;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000562D0);

s32 func_000562EC(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000562F4);

s32 func_00056310(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056318);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056334);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005640C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000564E4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056560);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000565DC);

void func_00056660(void) {
    func_00069D30();
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005667C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000566F8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056704);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3B98);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3BC8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000567E0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056A8C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056B08);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056B18);

void func_00056BD4(s32 arg0) {
    func_00056560(arg0 - 0x3C);
}

void func_00056BF0(s32 arg0) {
    func_000565DC(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056C0C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056C68);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056CC4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056CF4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056D24);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056D64);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056DC0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056E7C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056F6C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00056F88);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00057530);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005757C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00057630);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000576B4);

void func_000577C0(s32 arg0) {
    func_00056CF4(arg0 - 0x3C);
}

void func_000577DC(s32 arg0) {
    func_00056D24(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000577F8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00057858);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000578B8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00057910);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00057968);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000579C8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00057A24);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00057B04);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00057BF4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00057C10);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000581A0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000581EC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000582A0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00058324);

void func_00058430(s32 arg0) {
    func_00057910(arg0 - 0x3C);
}

void func_0005844C(s32 arg0) {
    func_00057968(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00058468);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00058844);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00058C20);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00058DC0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00058F60);

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00059114);
#endif

#if FW_VERSION >= 310
void func_00059114(s32 arg0) {
    func_0005C480(arg0 + 0x630);
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
void func_00059114(s32 arg0) {
    func_0005C480(arg0 + 0x610);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00059130);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00059270);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00059328);

s32 func_000593C0(void) {
    return 2;
}

s32 func_000593C8(void) {
    return 0;
}

s32 func_000593D0(struct Unk_func_000593D0_0 *arg0) {
    s32 temp_s1;

    temp_s1 = (u8 *)arg0 + 0x8C;
    func_00061094(temp_s1);
    if (arg0->unk26C != 0) {
        func_0006102C((u8 *)arg0 + 0xB4, 0x20100000);
        func_000610B0(temp_s1);
        func_00060FA4((s32) ((u8 *)arg0 + 0xBC), 1, 0x11, -1);
    } else {
        func_000610B0(temp_s1);
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005944C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00059594);

s32 func_000595C8(struct Unk_func_000595C8_0 *arg0, s32 arg1, s32 arg2) {
    s32 temp_s3;

    temp_s3 = (u8 *)arg0 + 0x8C;
    func_00061094(temp_s3);
    arg0->unk258 = arg1;
    arg0->unk25C = arg2;
    func_0006102C((u8 *)arg0 + 0xB4, 0x20040000);
    func_000610B0(temp_s3);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00059634);

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000597A0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005980C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00059878);
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00058A74);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000596B4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00059720);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005978C);
#endif

s32 func_00059890(void) {
    return 0;
}

s32 func_00059898(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000598A0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00059960);

s32 func_00059A20(struct Unk_func_00059A20_0 *arg0, s32 arg1) {
    arg0->unk84 = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00059A2C);

s32 func_00059A34(struct Unk_func_00059A34_0 *arg0, s32 arg1) {
    arg0->unk88 = arg1;
    return 0;
}

s32 func_00059A40(void) {
    return 0;
}

s32 func_00059A48(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00059A50);

s32 func_00059DBC(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00059DC4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00059F98);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005A05C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005A0F8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005A270);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005A458);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005A504);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005A5A0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005A628);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005A6AC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005AA14);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005ADB0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005AE6C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005B140);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005B364);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005B5D4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005B8C4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005B9DC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005BAA8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005BB74);

void func_0005BC20(s32 arg0) {
    func_00058DC0(arg0 - 0x7C);
}

void func_0005BC3C(s32 arg0) {
    func_00058DC0(arg0 - 0x68);
}

void func_0005BC58(s32 arg0) {
    func_00058F60(arg0 - 0x7C);
}

void func_0005BC74(s32 arg0) {
    func_00058F60(arg0 - 0x68);
}

void func_0005BC90(s32 arg0) {
    func_00059130(arg0 - 0x68);
}

void func_0005BCAC(s32 arg0) {
    func_00059270(arg0 - 0x7C);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005BCC8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005BD0C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005BD48);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005BE0C);

void func_0005BED8(void) {
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005BEE0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005BFD4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005C0C8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005C1F8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005C328);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005C480);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005C518);

s32 func_0005C7A8(struct Unk_func_0005C7A8_0 *arg0, s32 arg1) {
    s32 temp_s2;

    temp_s2 = (u8 *)arg0 + 0x18;
    func_00061094(temp_s2);
    arg0->unk54 = arg1;
    func_000610B0(temp_s2);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005C7F8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005C8F0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005C968);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005CBE4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005CCE0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005CE6C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005CF6C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005D190);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005D1B0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005D1D0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005D2E4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005D3D8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005D6B8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005D8B4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005DA5C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005DB74);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005DD08);

void func_0005DD98(void) {
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005DDA0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005DDB8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005DE6C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005DED4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005DF48);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005DFC4);

void func_0005E008(struct Unk_func_0005E008_0 *arg0, s32 arg1) {
    if (func_0005E158((s32) arg0, arg1, arg0->unk18, arg0->unk1C) != 0) {
        arg0->unk1C = arg1;
    }
    arg0->unk20 = arg1;
    if (func_0005E0E0(arg0, arg0->unk18, arg1) == 0) {
        arg0->unk24 = (s32) arg0->unk18;
        arg0->unk28 = (s32) arg0->unk20;
    }
}

void func_0005E070(struct Unk_func_0005E070_0 *arg0) {
    func_0005E0E8(arg0, arg0->unk1C, arg0->unk20);
}

void func_0005E090(void) {
    func_0005E204();
}

void func_0005E0AC(struct Unk_func_0005E070_0 *arg0, u32 arg1) {
    func_0005E0E8(arg0, arg0->unk18, arg1);
}

void func_0005E0CC(s32 arg0) {
    D_002320A0 = arg0;
}

void func_0005E0D8(void) {
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005E0E0);

s32 func_0005E0E8(struct Unk_func_0005E070_0 *arg0, u32 arg1, u32 arg2) {
    s32 var_a1;
    u32 temp_a2;
    u32 temp_v0;

    var_a1 = arg2 - arg1;
    if (func_0005E0E0() != 0) {
        temp_v0 = arg0->unk28;
        temp_a2 = arg0->unk24;
        var_a1 = (arg1 < temp_v0) ? (temp_v0 - arg1) : 0;
        if (temp_a2 < arg2) {
            var_a1 += arg2 - temp_a2;
        }
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005E158);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005E1C0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005E204);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005E298);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005E2D0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005E308);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005E724);

void func_0005EADC(M2C_UNK **arg0) {
    *arg0 = &D_000B3A40;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005EAEC);
#else
void func_0005EAEC(M2C_UNK **arg0) {
    *arg0 = &D_000B3A40;
    _ZdlPv((s32) arg0);
}
#endif

void func_0005EB14(s32 arg0) {
    D_002320A4 = arg0;
}

s32 func_0005EB20(struct Unk_func_0005EB20_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (arg1 != NULL) {
        *arg1 = arg0->unk8;
    } else {
        var_v1 = 6;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005EB40);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005EB68);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005EB90);

s32 func_0005EBC4(struct Unk_func_0005EBC4_0 *arg0, struct Unk_func_0005EBC4_1 *arg1) {
    s32 var_a2;

    var_a2 = 0;
    if (arg1 != NULL) {
        arg1->unk0 = (s32) arg0->unkC;
        arg1->unk4 = (s32) arg0->unk10;
    } else {
        var_a2 = 1;
    }
    return var_a2;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005EBEC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005EC64);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005ED5C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005EE0C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005EE64);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005EEF4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005F004);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005F484);

s32 func_0005F7A4(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005F7AC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005F7C8);

s32 func_0005F830(void) {
    return 1;
}

s32 func_0005F838(s32 arg0, s32 arg1, s32 *arg2) {
    s32 var_v1;

    var_v1 = 6;
    if (((arg2 == NULL) | (arg1 != 1)) == 0) {
        *arg2 = arg0 + 0xA8C44;
        var_v1 = 0;
    }
    return var_v1;
}

s32 func_0005F86C(struct Unk_vt_func_0005F86C_arg0 **arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {

    } else {
        var_v0 = (*arg0)->unk20();
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005F8A0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005F8A8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005F8F8);

s32 func_0005F938(void) {
    return 1;
}

void func_0005F940(void) {
}

#if FW_VERSION == 352
void func_0005F948(void) {
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005F950);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005FAC4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005FB58);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005FBEC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005FC50);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005FD20);

s32 func_0005FE0C(struct Unk_func_0005FE0C_0 *arg0, struct Unk_func_0005FE0C_1 *arg1) {
    s32 temp_a0;
    s32 temp_s2;
    s32 temp_v1;
    s32 var_s3;
    struct Unk_func_0005FE0C_temp_v0 *temp_v0;

    temp_s2 = (u8 *)arg0 + 0x1C;
    var_s3 = 0;
    func_00061094(temp_s2);
    temp_v1 = arg0->unk4;
    temp_a0 = temp_v1 - 1;
    if ((temp_a0 != arg0->unk14) && ((temp_v1 != 0) || (arg0->unk18 != 1))) {
        arg0->unk4 = temp_a0;
        var_s3 = 1;
        if (temp_a0 < 0) {
            arg0->unk4 = (s32) (arg0->unk18 - 1);
        }
        temp_v0 = (arg0->unk4 * 0x10) + arg0->unk10;
        temp_v0->unk0 = (s32) arg1->unk0;
        temp_v0->unk4 = (s32) arg1->unk4;
        temp_v0->unk8 = (s32) arg1->unk8;
        temp_v0->unkC = (s32) arg1->unkC;
        func_000612DC(arg0->unkC, 1);
    }
    func_000610B0(temp_s2);
    func_00061BC0(1);
    return var_s3;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005FEEC);

void func_0005FFB8(struct Unk_func_0005FFB8_0 *arg0) {
    arg0->unk0 = &D_000B4070;
    func_000612B4(arg0->unk4);
    _ZdlPv((s32) arg0);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005FFF4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060060);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", _ZN14Class_000B4080D2Ev);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", _ZN14Class_000B4080D1Ev);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", _ZN14Class_000B4080D0Ev);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060194);

void func_000601FC(void) {
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060204);

void func_0006028C(void) {
}

void func_00060294(s32 arg0, M2C_UNK arg1, s32 arg2) {
    func_0006094C(arg1, arg0, arg2 & 0xFFFF);
}

void func_000602BC(s32 arg0, M2C_UNK arg1) {
    func_000609A8(arg1, arg0);
}

Class_000B40A0::~Class_000B40A0() {
}

void func_00060328(struct Unk_func_00060328_0 *arg0) {
    arg0->unk0 = &D_000B40B8;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

void func_00060340(struct Unk_func_00060340_0 *arg0) {
    arg0->unk0 = &D_000B40B8;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

void func_00060358(struct Unk_func_00060358_0 *arg0) {
    void *temp_s0;
    struct Unk_func_00060358_var_v0 *var_v0;

    arg0->unk0 = &D_000B40B8;
    if (arg0->unk4 != 0) {
        var_v0 = arg0->unk8;
        if (var_v0 != NULL) {
            do {
                temp_s0 = var_v0->unk8;
                if (var_v0 != NULL) {
                    _ZdlPv((s32) var_v0);
                }
                var_v0 = temp_s0;
            } while (temp_s0 != NULL);
        }
    }
}

void func_000603B0(struct Unk_func_000603B0_0 *arg0) {
    void *temp_s0;
    struct Unk_func_000603B0_var_v0 *var_v0;

    arg0->unk0 = &D_000B40B8;
    if (arg0->unk4 != 0) {
        var_v0 = arg0->unk8;
        if (var_v0 != NULL) {
            do {
                temp_s0 = var_v0->unk8;
                if (var_v0 != NULL) {
                    _ZdlPv((s32) var_v0);
                }
                var_v0 = temp_s0;
            } while (temp_s0 != NULL);
        }
    }
}

void func_00060408(struct Unk_func_00060408_0 *arg0) {
    void *temp_s0;
    struct Unk_func_00060408_var_v0 *var_v0;

    arg0->unk0 = &D_000B40B8;
    if (arg0->unk4 != 0) {
        var_v0 = arg0->unk8;
        if (var_v0 != NULL) {
            do {
                temp_s0 = var_v0->unk8;
                if (var_v0 != NULL) {
                    _ZdlPv((s32) var_v0);
                }
                var_v0 = temp_s0;
            } while (temp_s0 != NULL);
        }
    }
    _ZdlPv((s32) arg0);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060474);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060504);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006054C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060640);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060800);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000608AC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006094C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000609A8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060A64);

void func_00060A90(void) {
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060A98);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060B44);

s32 func_00060BFC(struct Unk_func_00060BFC_0 *arg0) {
    func_00061C24(arg0->unk8);
    return 1;
}

s32 func_00060C1C(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060C24);

void func_00060C44(struct Unk_func_00060C44_0 *arg0) {
    arg0->unk0 = &D_000B40C8;
    func_000610FC((s32) ((u8 *)arg0 + 0xC));
    arg0->unk8 = 0;
}

void func_00060C7C(struct Unk_func_00060C7C_0 *arg0) {
    arg0->unk0 = &D_000B40C8;
    func_000610FC((s32) ((u8 *)arg0 + 0xC));
    arg0->unk8 = 0;
}

void func_00060CB4(struct Unk_func_00060CB4_0 *arg0) {
    arg0->unk0 = &D_000B40C8;
    func_0006115C((s32) ((u8 *)arg0 + 0xC));
    arg0->unk8 = 0;
}

void func_00060CEC(struct Unk_func_00060CEC_0 *arg0) {
    arg0->unk0 = &D_000B40C8;
    func_0006115C((s32) ((u8 *)arg0 + 0xC));
    arg0->unk8 = 0;
}

void func_00060D24(struct Unk_func_00060D24_0 *arg0) {
    arg0->unk0 = &D_000B40C8;
    if (arg0->unk8 != 0) {
        func_00060B44((s32) arg0);
    }
    _ZN14Class_000B40F0D1Ev((s32) ((u8 *)arg0 + 0xC));
}

void func_00060D70(struct Unk_func_00060D70_0 *arg0) {
    arg0->unk0 = &D_000B40C8;
    if (arg0->unk8 != 0) {
        func_00060B44((s32) arg0);
    }
    _ZN14Class_000B40F0D1Ev((s32) ((u8 *)arg0 + 0xC));
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060DBC);

void func_00060E18(struct Unk_func_00060E18_0 *arg0) {
    arg0->unk0 = &D_000B40E0;
    func_00061220((s32) (&arg0->unk4));
    func_000612DC(arg0->unk4, 0);
}

void func_00060E58(struct Unk_func_00060E58_0 *arg0) {
    arg0->unk0 = &D_000B40E0;
    func_00061220((s32) (&arg0->unk4));
    func_000612DC(arg0->unk4, 0);
}

void func_00060E98(struct Unk_func_00060E98_0 *arg0, s32 arg1) {
    arg0->unk0 = &D_000B40E0;
    func_0006126C(&arg0->unk4, arg1);
    func_000612DC(arg0->unk4, 0);
}

void func_00060ED8(struct Unk_func_00060ED8_0 *arg0, s32 arg1) {
    arg0->unk0 = &D_000B40E0;
    func_0006126C(&arg0->unk4, arg1);
    func_000612DC(arg0->unk4, 0);
}

Class_000B40E0::~Class_000B40E0() {
    func_000612B4(this->unk4);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060FA4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060FE4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006102C);

s32 func_0006104C(struct Unk_func_0006104C_0 *arg0, M2C_UNK arg1) {
    return func_00061304(arg0->unk4, ~arg1) == 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061070);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061094);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000610B0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000610CC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000610FC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006112C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006115C);

Class_000B40F0::~Class_000B40F0() {
    func_00061580(this->unk4);
}
#endif

void func_00061218(void) {
}

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005F950);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005FAC4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005FB58);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005FBEC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005FC50);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005FD20);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005FE0C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005FEEC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005FFB8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005FFF4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060060);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", _ZN14Class_000B4080D2Ev);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", _ZN14Class_000B4080D1Ev);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", _ZN14Class_000B4080D0Ev);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060194);

void func_000601FC(void) {

}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060204);

void func_0006028C(void) {

}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060294);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000602BC);

Class_000B40A0::~Class_000B40A0() {
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005FA3C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005FA9C);
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060328);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060340);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060358);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000603B0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060408);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060474);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060504);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006054C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060640);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060800);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000608AC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006094C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000609A8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060A64);

void func_00060A90(void) {

}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060A98);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060B44);

s32 func_00060BFC(struct Unk_func_00060BFC_0 *arg0) {
    func_00061C24(arg0->unk8);
    return 1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060C1C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006004C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005FAFC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005FB4C);
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060CB4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060CEC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060D24);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060D70);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060DBC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060E18);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060E58);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060E98);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060ED8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060F18);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060F40);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060F68);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060FA4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060FE4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006102C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006104C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061070);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061094);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000610B0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000610CC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060540);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006112C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006115C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006118C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000611B4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000611DC);
#endif

#if FW_VERSION == 351
void func_00061218_v351(void) {

}
#endif

#if FW_VERSION == 350
void func_00061218_v350(void) {

}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005FB9C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005FBF4);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3D28);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3D80);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3DE0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3E38);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3E44);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3E50);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3E5C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3E68);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3E74);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3E80);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3E8C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3E98);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3EB0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3EB4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3EB8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3EBC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3EC0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3EC4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3ED0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3F30);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3F58);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3F60);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3F6C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3F78);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3F84);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3F94);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3FA0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3FB8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3FC8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3FCC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3FD0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3FD4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3FD8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3FDC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3FE0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3FE4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3FE8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3FEC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3FF0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3FF4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3FF8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B3FFC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4000);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4004);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4010);

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B5528);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005F950);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005EE2C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005EEC0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005EF54);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005EFB8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005F088);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005F174);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
s32 func_0005F174(void *arg0, void *arg1) {
    s32 temp_a0;
    s32 temp_s2;
    s32 temp_v1;
    s32 var_s3;
    void *temp_v0;

    temp_s2 = arg0 + 0x1C;
    var_s3 = 0;
    func_00061094(temp_s2);
    temp_v1 = M2C_FIELD(arg0, s32 *, 4);
    temp_a0 = temp_v1 - 1;
    if ((temp_a0 != M2C_FIELD(arg0, s32 *, 0x14)) && ((temp_v1 != 0) || (M2C_FIELD(arg0, s32 *, 0x18) != 1))) {
        M2C_FIELD(arg0, s32 *, 4) = temp_a0;
        var_s3 = 1;
        if (temp_a0 < 0) {
            M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) - 1);
        }
        temp_v0 = (M2C_FIELD(arg0, s32 *, 4) * 0x10) + M2C_FIELD(arg0, s32 *, 0x10);
        M2C_FIELD(temp_v0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
        M2C_FIELD(temp_v0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
        M2C_FIELD(temp_v0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
        M2C_FIELD(temp_v0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
        func_000612DC(M2C_FIELD(arg0, s32 *, 0xC), 1);
    }
    func_000610B0(temp_s2);
    func_00061BC0(1);
    return var_s3;
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005F254);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005F320);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005F35C);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
void func_0005F35C(void) {

}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005FFF4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005F3D0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", _ZN14Class_000B4080D2Ev);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", _ZN14Class_000B4080D1Ev);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", _ZN14Class_000B4080D0Ev);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060194);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000601FC);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
void func_000601FC(void) {

}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060204);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005F614);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
void func_0005F614(void) {

}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060294);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005F644);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
void func_0005F644(s32 arg0, s32 arg1) {
    func_0005FDA0(arg1, arg0);
}
#endif

#if FW_VERSION < 350
Class_000B40A0::~Class_000B40A0() {
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005F6B0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060340);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005F6E0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000603B0);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005F790);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
void func_0005F790(void *arg0) {
    void *temp_s0;
    void *var_v0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B40B8;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        var_v0 = M2C_FIELD(arg0, void **, 8);
        if (var_v0 != NULL) {
            do {
                temp_s0 = M2C_FIELD(var_v0, void **, 8);
                if (var_v0 != NULL) {
                    _ZdlPv((s32) var_v0);
                }
                var_v0 = temp_s0;
            } while (temp_s0 != NULL);
        }
    }
    _ZdlPv((s32) arg0);
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005F7FC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005F88C);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4060);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4070);

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4230);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4080);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B40A0);

#if FW_VERSION >= 350
__asm__(".globl _ZTV14Class_000B40A0\n_ZTV14Class_000B40A0 = D_000B40A0 - 8\n");
#else
__asm__(".globl _ZTV14Class_000B40A0\n_ZTV14Class_000B40A0 = D_000B40A0 - 8\n");

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005F8D4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B42A8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005F9EC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060800);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005FCA4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005FD44);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005FDA0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005FE5C);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060A90);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
void func_00060A90(void) {

}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B40B8);

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0005FE90);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060B44);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060024);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
s32 func_00060024(void *arg0) {
    func_00061C24(M2C_FIELD(arg0, s32 *, 8));
    return 1;
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060044);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006004C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006006C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000600A4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060CB4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060114);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061174);
#endif

#if FW_VERSION == 303
void func_0006014C_v303(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B40C8;
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        func_00060B44((s32) arg0);
    }
    func_000611B4((s32) (arg0 + 0xC));
}
#endif

#if FW_VERSION == 302
void func_0006014C_v302(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B40C8;
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        func_00060B44((s32) arg0);
    }
    func_000611B4((s32) (arg0 + 0xC));
}
#endif

#if FW_VERSION == 301
void func_0006014C_v301(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B40C8;
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        func_00060B44((s32) arg0);
    }
    func_000611B4((s32) (arg0 + 0xC));
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006014C_v300);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060D70);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060DBC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006025C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006029C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000602DC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060ED8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006035C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060F40);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060F68);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060FA4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060FE4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006102C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006104C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061070);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061094);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000610B0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060510);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060540);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006112C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006115C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006118C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000611B4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000611DC);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006065C);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
void func_0006065C(void) {

}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B40C8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B40E0);

#if FW_VERSION == 352
__asm__(".globl _ZTV14Class_000B40E0\n_ZTV14Class_000B40E0 = D_000B40E0 - 8\n");
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B40F0);

#if FW_VERSION == 352
__asm__(".globl _ZTV14Class_000B40F0\n_ZTV14Class_000B40F0 = D_000B40F0 - 8\n");
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061220);

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4104);
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4118);
#endif

s32 func_0006126C(s32 *arg0, M2C_UNK arg1) {
    s32 temp_v0;

    temp_v0 = sceKernelCreateEventFlag(arg1, 0x200, 0, 0);
    *arg0 = temp_v0;
    return (temp_v0 >= 0) ? 0 : -5;
}

s32 func_000612B4(s32 arg0) {
    return (sceKernelDeleteEventFlag(arg0) == 0) ? 0 : -5;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000612DC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061304);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006132C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061378);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000613F0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061438);

s32 func_000614DC(s32 arg0, u32 *arg1) {
    u32 temp_v0;

    temp_v0 = sceKernelCreateSema(&D_000B4104, 0U, arg0, arg0, NULL);
    *arg1 = temp_v0;
    return ((s32) temp_v0 >= 0) ? 0 : -5;
}

s32 func_0006152C(s32 arg0, s32 arg1, u32 *arg2) {
    u32 temp_v0;

    temp_v0 = sceKernelCreateSema(&D_000B4104, 0U, arg0, arg1, NULL);
    *arg2 = temp_v0;
    return ((s32) temp_v0 >= 0) ? 0 : -5;
}

s32 func_00061580(s32 arg0) {
    return (sceKernelDeleteSema(arg0) == 0) ? 0 : -5;
}

s32 func_000615A8(u32 arg0) {
    return (sceKernelWaitSema(arg0, 1, NULL) == 0) ? 0 : -5;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000615D4);

s32 func_0006161C(u32 arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceKernelPollSema(arg0, 1);
    var_v1 = -0x32;
    if (temp_v0 != 0x800201AD) {
        var_v1 = (temp_v0 == 0) ? 0 : -5;
    }
    return var_v1;
}

s32 func_00061658(s32 arg0) {
    return (sceKernelSignalSema(arg0, 1) == 0) ? 0 : -5;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061680);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000616C8);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061758);
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060B9C);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061780);
#endif

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B445C);
#endif

#if FW_VERSION == 300 || FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061780);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061888);

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B44CC);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000618FC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000619A0);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000619FC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061A38);

s32 func_00061B08(void) {
    sceKernelDelayThread(1);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060EF0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00060F54);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061B28);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061BC0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061BEC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061C24);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061CD8);

void func_00061D54(void) {
    func_00061CD8(1, 0xFFFF);
}

void func_00061D74(void) {
    func_00061CD8(0, 0xFFFF);
}

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061D94);
#else
s32 func_00061D94(void) {
    s32 *temp_v0;
    s32 var_v1;

    temp_v0 = func_00061EF4();
    var_v1 = 0;
    if (temp_v0 != NULL) {
        var_v1 = *temp_v0;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000613A8);
#endif

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B465C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4694);
#endif

#if FW_VERSION == 300 || FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061DC0);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061E44);

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4118);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061EF4);

void func_00061F3C(struct Unk_func_00061F3C_0 *arg0) {
    arg0->unk0 = &D_000B4118;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

void func_00061F54(M2C_UNK **arg0) {
    *arg0 = &D_000B4118;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061F64);
#else
void func_00061F64(M2C_UNK **arg0) {
    *arg0 = &D_000B4118;
    _ZdlPv((s32) arg0);
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061594);
#endif

void func_00061F8C(struct Unk_func_00061F8C_0 *arg0, M2C_UNK **arg1, M2C_UNK *arg2) {
    M2C_UNK *temp_v1;

    if ((arg1 != NULL) & (arg2 != NULL)) {
        if (arg1 == arg0->unk8) {
            arg0->unk8 = arg2;
        }
        temp_v1 = *arg1;
        *arg1 = arg2;
        arg0->unk0 = (s32) (arg0->unk0 + 1);
        *arg2 = temp_v1;
    }
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061FCC);

void func_00062010(struct Unk_func_00062010_0 *arg0) {
    arg0->unk8 = (s32) (&arg0->unk4);
    arg0->unk4 = 0;
    arg0->unk0 = 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00062024);

void func_00062098(struct Unk_func_00062098_0 *arg0, s32 *arg1) {
    s32 temp_s2;

    temp_s2 = (u8 *)arg0 + 0xC;
    func_00061094(temp_s2);
    func_00061F8C((Unk_func_00061F8C_0*) arg0, arg0->unk8, arg1);
    func_000610B0(temp_s2);
}

void func_000620F0(void *arg0, s32 *arg1) {
    s32 temp_s2;

    temp_s2 = arg0 + 0xC;
    func_00061094(temp_s2);
    func_00061F8C(arg0, arg0 + 4, arg1);
    func_000610B0(temp_s2);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00062148);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061854);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00061A04);
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000621E4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000623B0);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006257C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00062644);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006270C);

void func_000627DC(s32 arg0) {
    D_002320B4 = arg0;
}

void func_000627E8(void) {
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000627F0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00062938);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00062A0C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00062AE8);

s32 func_00062B9C(void) {
    s32 sp0;
    s32 var_v1;

    var_v1 = 0;
    if (sceDisplayGetMode(&sp0, NULL, NULL) == 0) {
        var_v1 = (sp0 == 0xD1) | (sp0 == 0x1D1);
    }
    return var_v1;
}
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4104);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4118);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4120);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4130);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4140);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B414C);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B415C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4178);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4194);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B5B1C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B5B38);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B5B54);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B5B70);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B5B8C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B5BA8);
#endif

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4754);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4770);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B478C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B47A8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B47C4);
#endif

#if FW_VERSION < 310 || FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B41B0);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000627F0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00062938);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00062184);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00062260);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
s32 func_00063384(void) {
    s32 sp0;
    s32 var_v1;

    var_v1 = 0;
    if (sceDisplayGetMode(&sp0, NULL, NULL) == 0) {
        var_v1 = (sp0 == 0xD1) | (sp0 == 0x1D1);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000633CC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00063604);
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00062304);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00062524);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B41CC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B41E8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4204);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00062BE4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00062E90);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00062FAC);
#else
s32 func_00062FAC(struct Unk_func_00062FAC_0 *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_s0;
    s32 temp_s4;
    struct Unk_vt_func_00062FAC_temp_a0 **temp_a0;
    struct Unk_vt_func_00062FAC_temp_v0 **temp_v0;

    temp_s4 = (u8 *)arg0 + 0x60;
    func_00061094(temp_s4);
    temp_s0 = func_0006506C(arg0, arg1, arg2, arg3);
    if (arg1 == 2) {
        if (temp_s0 == 0) {
            temp_v0 = arg0->unk50;
            (*temp_v0)->unkC(temp_v0, 0, arg0->unk130);
            temp_a0 = arg0->unk50;
            (*temp_a0)->unkC(temp_a0, 1, arg0->unk140);
        }
    }
    func_000610B0(temp_s4);
    return temp_s0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00063074);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000631B0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00063314);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00063448);

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006368C);
#endif

#if FW_VERSION >= 350
s32 func_0006368C(struct Unk_func_0006368C_0 *arg0) {
    struct Unk_func_0006368C_temp_v0 *temp_v0;

    temp_v0 = arg0->unkB0;
    if (temp_v0 != NULL) {
        return temp_v0->unk8;
    }
    return arg0->unkC0;
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
s32 func_0006368C(struct Unk_func_0006368C_0 *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0xA4);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 8);
    }
    return M2C_FIELD(arg0, s32 *, 0xB4);
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
s32 func_0006368C(struct Unk_func_0006368C_0 *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0xA0);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 8);
    }
    return (s32) arg0->unkB0;
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000636A8);
#endif

#if FW_VERSION >= 350
s32 func_000636A8(struct Unk_func_000636A8_0 *arg0) {
    struct Unk_func_000636A8_temp_v0 *temp_v0;

    temp_v0 = arg0->unkB0;
    if (temp_v0 != NULL) {
        return temp_v0->unkC;
    }
    return arg0->unkC4;
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
s32 func_000636A8(struct Unk_func_000636A8_0 *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0xA4);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 0xC);
    }
    return M2C_FIELD(arg0, s32 *, 0xB8);
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
s32 func_000636A8(struct Unk_func_000636A8_0 *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0xA0);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 0xC);
    }
    return M2C_FIELD(arg0, s32 *, 0xB4);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000636C4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00063750);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00063814);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00063F50);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006356C);
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006388C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00063F50);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00063FCC);

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000635F4);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
s32 func_000635F4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x50) = arg1;
    return 0;
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00063600);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
s32 func_00063600(void *arg0, s32 arg1) {
    void *temp_s0;

    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    temp_s0 = arg0 + 0x3C;
    func_00060294((s32) temp_s0, arg1 + 0x94, 0);
    func_00060294((s32) temp_s0, arg1 + 0xA8, 3);
    return 0;
}
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006365C);
#endif

s32 func_00063FF8(struct Unk_func_00063FF8_0 *arg0, s32 arg1) {
    arg0->unk54 = arg1;
    return 0;
}

#if FW_VERSION >= 310 && FW_VERSION < 352
s32 func_00064718(void *arg0, s32 arg1) {
    void *temp_s0;

    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
    temp_s0 = arg0 + 0x3C;
    func_00060294((s32) temp_s0, arg1 + 0x94, 0);
    func_00060294((s32) temp_s0, arg1 + 0xA8, 3);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00064774);
#endif

#if FW_VERSION == 352
s32 func_00064004(struct Unk_func_00064004_0 *arg0, s32 arg1) {
    void *temp_s0;

    arg0->unk48 = arg1;
    temp_s0 = (u8 *)arg0 + 0x3C;
    func_00060294((s32) temp_s0, arg1 + 0x94, 0);
    func_00060294((s32) temp_s0, arg1 + 0xA8, 3);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00064060);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006408C);

#if FW_VERSION >= 310 && FW_VERSION < 352
s32 func_000647AC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x5C) = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000647B8);
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000636A0);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00063730);
#endif

#if FW_VERSION == 352
s32 func_00064098(struct Unk_func_00064098_0 *arg0, s32 arg1) {
    arg0->unk5C = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000640A4);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00064180);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00064638);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000646FC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006476C);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006479C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00064AE0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00064D7C);
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4240);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4244);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00063B88);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00063E40);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000640A4);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006506C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00065250);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00065390);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00065444);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00065908);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00065A84);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00065C24);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00065D50);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00065F7C);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00065FC8);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006603C);

void func_00066260(s32 arg0) {
    func_00062644(arg0 - 0x3C);
}

void func_0006627C(s32 arg0) {
    func_0006270C(arg0 - 0x3C);
}

void func_00066298(s32 arg0) {
    func_00062938(arg0 - 0x3C);
}

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006945C);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000662B4);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000664F4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006656C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000665E4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00066744);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000668A4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00066938);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000669CC);

void func_00066A68(s32 arg0) {
    D_002320C4 = arg0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00066A74);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00066ABC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00066E74);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00066EA0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00066F70);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00067040);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000671CC);

#if FW_VERSION == 300 || (FW_VERSION >= 350 && FW_VERSION < 352)
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00067384);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
s32 func_00067384(struct Unk_func_00067384_0 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    return 0;
}
#endif

#if FW_VERSION == 352
s32 func_00067384(struct Unk_func_00067384_0 *arg0) {
    arg0->unk84 = 0;
    arg0->unk80 = 0;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00067394);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000673AC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000674B4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006757C);

s32 func_0006758C(void) {
    return 0;
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00067594);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00066490);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
s32 func_00066490(void *arg0, s32 *arg1) {
    s32 var_v1;
    void *temp_a0;

    var_v1 = 1;
    if (arg1 != NULL) {
        temp_a0 = M2C_FIELD(arg0, void **, 0x8C);
        var_v1 = 6;
        if (temp_a0 != NULL) {
            var_v1 = 0;
            *arg1 = M2C_FIELD(temp_a0, s32 *, 8);
        }
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00067678);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000676E0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00067838);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00067884);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000678D0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006791C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00067990);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00067A30);
#endif

void func_00067B90(s32 arg0) {
    func_00066938(arg0 - 0x3C);
}

void func_00067BAC(s32 arg0) {
    func_000669CC(arg0 - 0x3C);
}

void func_00067BC8(s32 arg0) {
    func_00066E74(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00067BE4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00067D10);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00067E3C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00067EE0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00067F84);

void func_00068030(s32 arg0) {
    D_002320C8 = arg0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006803C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000680C0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000682F0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00068360);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000683F0);

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006854C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 352
s32 func_0006854C(struct Unk_func_0006854C_0 *arg0, s32 arg1) {
    u8 *temp_s2;

    temp_s2 = &arg0->pad0[0x4C];
    func_00061094((s32) temp_s2);
    arg0->unk60 = arg1;
    func_000610B0((s32) temp_s2);
    return 0;
}
#endif

#if FW_VERSION == 352
s32 func_0006854C(struct Unk_func_0006854C_0 *arg0, s32 arg1) {
    s32 temp_s2;

    temp_s2 = (u8 *)arg0 + 0x4C;
    func_00061094(temp_s2);
    arg0->unk60 = arg1;
    func_000610B0(temp_s2);
    return 0;
}
#endif

s32 func_0006859C(struct Unk_func_0006859C_0 *arg0) {
    s32 temp_s1;

    temp_s1 = (u8 *)arg0 + 0x4C;
    func_00061094(temp_s1);
    arg0->unk5C = 0;
    func_000610B0(temp_s1);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000685E0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00068630);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00068914);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00068994);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000689F4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00068AC0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00068B40);

void func_00068B68(struct Unk_func_00068B68_0 *arg0, s32 arg1) {
    void *temp_s0;

    arg0->unk48 = arg1;
    temp_s0 = (u8 *)arg0 + 0x3C;
    func_00060294((s32) temp_s0, arg1 + 0xEC, 2);
    func_00060294((s32) temp_s0, arg1 + 0x100, 3);
}

void func_00068BC0(s32 arg0) {
    func_00067EE0(arg0 - 0x3C);
}

void func_00068BDC(s32 arg0) {
    func_00067F84(arg0 - 0x3C);
}

void func_00068BF8(s32 arg0) {
    func_000682F0(arg0 - 0x3C);
}

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4240);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4244);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4250);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4280);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4290);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B42A0);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B42B0);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B42C0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B42CC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B42E0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4310);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4320);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4330);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B433C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B434C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4368);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00068C14);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00068F6C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00069060);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00069154);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006925C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000692A4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00069390);

s32 func_000693F0(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000693F8);

s32 func_00069448(struct Unk_func_00069448_0 *arg0) {
    s32 temp_s1;

    temp_s1 = (u8 *)arg0 + 0x48;
    func_00061094(temp_s1);
    arg0->unk50 = 0;
    func_000610B0(temp_s1);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006948C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000694C4);

s32 func_00069548(struct Unk_func_00069548_0 *arg0, s32 arg1) {
    arg0->unk590 = arg1;
    return 0;
}

s32 func_00069554(struct Unk_func_00069554_0 *arg0, s32 arg1) {
    arg0->unk44 = arg1;
    func_00060294((s32) ((u8 *)arg0 + 0x3C), arg1 + 0x2C, (s32) arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00069580);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000695A8);

s32 func_00069608(void) {
    return 0;
}

s32 func_00069610(void) {
    return 0;
}

s32 func_00069618(void) {
    return 0;
}

s32 func_00069620(struct Unk_func_00069620_0 *arg0) {
    struct Unk_vt_func_00069620_temp_a0 **temp_a0;

    temp_a0 = arg0->unk44;
    (*temp_a0)->unk1C(temp_a0);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006964C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00069700);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00069758);

void func_00069764(s32 arg0) {
    func_00069060(arg0 - 0x3C);
}

void func_00069780(s32 arg0) {
    func_00069154(arg0 - 0x3C);
}

void func_0006979C(s32 arg0) {
    func_00069390(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_000697B8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00069998);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00069B78);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00069C04);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00069C90);

void func_00069D24(s32 arg0) {
    D_002320E4 = arg0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00069D30);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_00069D78);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006A088);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006A0AC);

s32 func_0006A0F4(struct Unk_func_0006A0F4_0 *arg0) {
    s32 temp_s1;
    s32 temp_s2;

    temp_s2 = (u8 *)arg0 + 0x48;
    func_00061094(temp_s2);
    arg0->unk54 = 0;
    arg0->unk7C = 0;
    func_0006A300(arg0);
    temp_s1 = arg0->unk0->unk30(arg0);
    arg0->unk0->unk2C(arg0, 0);
    func_000610B0(temp_s2);
    return temp_s1;
}

s32 func_0006A174(struct Unk_func_0006A174_0 *arg0) {
    s32 temp_s1;

    temp_s1 = (u8 *)arg0 + 0x48;
    func_00061094(temp_s1);
    arg0->unk50 = 0;
    func_000610B0(temp_s1);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006A1B8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006A20C);

s32 func_0006A2D4(struct Unk_func_0006A2D4_0 *arg0, s32 arg1) {
    arg0->unk44 = arg1;
    func_00060294((s32) ((u8 *)arg0 + 0x3C), arg1 + 0x18, (s32) arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006A300);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006A358);

void func_0006A73C(s32 arg0) {
    func_00069C04(arg0 - 0x3C);
}

void func_0006A758(s32 arg0) {
    func_00069C90(arg0 - 0x3C);
}

void func_0006A774(s32 arg0) {
    func_0006A088(arg0 - 0x3C);
}

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006945C);
#endif

void func_0006A790(void) {
}

s32 func_0006A798(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006A7A0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006A800);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006A860);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006A8EC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006A978);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006AA0C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B43E8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4440);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4450);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4460);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4470);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B447C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4488);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B448C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4490);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4494);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4498);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B449C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B44A0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B44A4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B44A8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B44AC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B44B0);

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4A7C);
#endif

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4A80);
#endif

#if FW_VERSION < 350 || FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B44B4);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B44C8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4518);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B452C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006ABB0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006AF7C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006AFCC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006AFDC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006B058);

void func_0006B0D0(s32 arg0) {
    func_0006A8EC(arg0 - 0x3C);
}

void func_0006B0EC(s32 arg0) {
    func_0006A978(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006B108);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006B180);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006B1F8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006B250);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006B2A8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006B308);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4550);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006B388);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006B5CC);

void func_0006B898(s32 arg0) {
    func_0006B250(arg0 - 0x3C);
}

void func_0006B8B4(s32 arg0) {
    func_0006B2A8(arg0 - 0x3C);
}

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006A6A0);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006B8D0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006B910);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006B950);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006B980);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006B9B0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B45B8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006B9F0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006BB0C);

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006BD68);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006BDB8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006BDD4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006BE1C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006BF94);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006C14C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006C1B8);

s32 func_0006C258(void *arg0) {
    s32 var_v0;

    var_v0 = M2C_FIELD(arg0, s32 *, 0x220);
    if (var_v0 == 0) {
        func_0006FBE8(M2C_FIELD(arg0, s32 *, 0x44));
        var_v0 = M2C_FIELD(arg0, s32 *, 0x220);
    }
    return var_v0;
}
#endif

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4C10);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4C14);
#endif

#if FW_VERSION < 310 || FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006BD68);

void func_0006BDB8(s32 arg0) {
    func_0006B980(arg0 - 0x3C);
}

void func_0006BDD4(s32 arg0) {
    func_0006B9B0(arg0 - 0x3C);
}
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006ACF0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006AFB4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006B0B0);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006BDF0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006BF68);
#endif

#if FW_VERSION < 310 || FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006C14C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006C1B8);
#endif

#if FW_VERSION == 352
s32 func_0006C22C(struct Unk_func_0006C22C_0 *arg0) {
    s32 var_v0;

    var_v0 = arg0->unk220;
    if (var_v0 == 0) {
        func_0006FBE8(arg0->unk44);
        var_v0 = arg0->unk220;
    }
    return var_v0;
}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4618);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006C264);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006C3EC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006C6F0);

void func_0006C74C(s32 arg0) {
    func_0006C14C(arg0 - 0x3C);
}

void func_0006C768(s32 arg0) {
    func_0006C1B8(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006C784);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006C7CC);

Class_000B4708::~Class_000B4708() {
}

void func_0006C89C(s32 arg0, s32 arg1, s32 arg2) {
    switch (arg1) {                                 /* irregular */
    case 2:
        func_0006CA68(arg0, arg2);
        break;
    case 1:
        func_0006C97C((void *) arg0, arg2);
        break;
    }
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006C8EC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006C920);

s32 func_0006C954(struct Unk_func_0006C954_0 *arg0) {
    arg0->unk40 = 1;
    return 0;
}

s32 func_0006C964(struct Unk_func_0006C964_0 *arg0) {
    arg0->unk40 = 0;
    return 0;
}

s32 func_0006C970(struct Unk_func_0006C970_0 *arg0, s32 arg1) {
    arg0->unk3C = arg1;
    return 0;
}

void func_0006C97C(struct Unk_func_0006C97C_0 *arg0, M2C_UNK arg1) {
    func_0006EF1C(arg0->unk3C, func_00070F60(arg1));
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006C9B0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006CA68);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006CD10);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006CF0C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006D1D8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006D4A4);

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006D780);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006C6B8);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
void func_0006C6B8(void) {

}
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006D778);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006D7A8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006DA8C);

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006CA78);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4670);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4698);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B46E8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B46F4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4708);

#if FW_VERSION >= 350
__asm__(".globl _ZTV14Class_000B4708\n_ZTV14Class_000B4708 = D_000B4708 - 8\n");
#else
__asm__(".globl _ZTV14Class_000B4708\n_ZTV14Class_000B4708 = D_000B4708 - 8\n");
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4720);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B472C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B4738);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006DB48);

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B6228);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B7CE0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_044E48", D_000B7CE4);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006E62C);

s32 func_0006E800(struct Unk_func_0006E800_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 2;
    if (arg0->unkA8 == 0) {
        arg0->unkA8 = arg1;
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006E81C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006E954);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006EA08);

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006ED10);
#endif

#if FW_VERSION >= 310
s32 func_0006ED10(struct Unk_func_0006ED10_0 *arg0) {
    arg0->unk209 = 0;
    return 0;
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
s32 func_0006ED10(struct Unk_func_0006ED10_0 *arg0) {
    M2C_FIELD(arg0, s8 *, 0x2D9) = 0;
    return 0;
}
#endif

#if FW_VERSION == 300 || FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006ED1C);
#else
void func_0006ED1C(s32 arg0, s32 arg1, s32 arg2) {
    func_0006ED38(arg0, arg1, arg2, 0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_044E48", func_0006ED38);
