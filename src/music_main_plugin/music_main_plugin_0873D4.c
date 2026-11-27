/* lang: c++ */
#include "common.h"
#include "music_main_plugin_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", _ZN14Class_000A20E0D0Ev);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", func_000873D4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void _ZN14Class_000A20E0D0Ev(M2C_UNK **arg0) {
    *arg0 = &D_000A20E0;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", func_00076C10);

INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", func_00076CEC);

INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", func_00076DAC);

INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", func_00076E64);

INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", func_00077228);

INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", func_0007734C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0873D4", D_00097450);

INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", func_00077720);

INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", func_00077910);

INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", func_00077B00);

INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", func_00077CD0);

INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", func_00077D90);

INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", func_00077DA0);

INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", func_00077DB4);

INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", func_00077DCC);

INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", func_00077DE4);

INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", func_00077DFC);

INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", func_00077E14);

INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", func_00077EC0);

INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", func_00077F6C);

INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", func_00077FE0);

INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", func_00078054);
#endif

#if FW_VERSION >= 282
void func_000873FC(struct Unk_func_000873FC_0 *arg0) {
    arg0->unk14 = 0;
}

s32 func_00087404(struct Unk_func_00087404_0 *arg0) {
    return arg0->unk14 == 1;
}

s32 func_00087414(struct Unk_func_00087414_0 *arg0) {
    return arg0->unk8;
}

s32 func_0008741C(struct Unk_func_0008741C_0 *arg0) {
    return arg0->unkC;
}

void func_00087424(struct Unk_func_00087424_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = &D_000A20D0;
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
}

void func_0008743C(struct Unk_func_0008743C_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = &D_000A20D0;
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
}

Class_000A20D0::~Class_000A20D0() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", func_0008749C);

INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", func_0008766C);

INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", func_000876C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", func_00087718);

INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", func_00087770);

s32 func_000877D0(struct Unk_func_000877D0_0 *arg0) {
    return arg0->unk30;
}

u8 func_000877D8(struct Unk_func_000877D8_0 *arg0) {
    return arg0->unk18;
}

u8 func_000877E0(struct Unk_func_000877E0_0 *arg0) {
    return arg0->unk19;
}

s32 func_000877E8(struct Unk_func_000877E8_0 *arg0) {
    return arg0->unk1C;
}

s32 func_000877F0(struct Unk_func_000877F0_0 *arg0) {
    return arg0->unk24;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", func_000877F8);

void func_00087800(s32 **arg0, s32 arg1, s32 arg2) {
    func_00087424((Unk_func_00087424_0*) arg0, arg1, arg2);
    *arg0 = &D_000A20F8;
}

void func_00087830(s32 **arg0, s32 arg1, s32 arg2) {
    func_00087424((Unk_func_00087424_0*) arg0, arg1, arg2);
    *arg0 = &D_000A20F8;
}

Class_000A20F8::~Class_000A20F8() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", func_000878E8);
#endif
