#include "common.h"
#include "music_main_plugin_decls.h"

void func_000873D4(M2C_UNK **arg0) {
    *arg0 = &D_000A20E0;
    scePaf_4E67BB08(arg0);
}

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

void func_00087454(M2C_UNK **arg0) {
    *arg0 = &D_000A20D0;
}

void func_00087464(M2C_UNK **arg0) {
    *arg0 = &D_000A20D0;
}

void func_00087474(M2C_UNK **arg0) {
    *arg0 = &D_000A20D0;
    scePaf_4E67BB08(arg0);
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
    func_00087424(arg0, arg1, arg2);
    *arg0 = &D_000A20F8;
}

void func_00087830(s32 **arg0, s32 arg1, s32 arg2) {
    func_00087424(arg0, arg1, arg2);
    *arg0 = &D_000A20F8;
}

void func_00087860(s32 **arg0) {
    *arg0 = &D_000A20F8;
    func_00087454(arg0);
}

void func_00087888(s32 **arg0) {
    *arg0 = &D_000A20F8;
    func_00087454(arg0);
}

void func_000878B0(s32 **arg0) {
    *arg0 = &D_000A20F8;
    func_00087454(arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_0873D4", func_000878E8);

