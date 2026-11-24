#include "common.h"
#include "music_main_plugin_decls.h"

void func_000873D4(M2C_UNK **arg0) {
    *arg0 = &D_000A20E0;
    scePaf_4E67BB08(arg0);
}

void func_000873FC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}

s32 func_00087404(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14) == 1;
}

s32 func_00087414(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

s32 func_0008741C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_0873D4", func_00087424);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_0873D4", func_0008743C);

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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_0873D4", func_0008749C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_0873D4", func_0008766C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_0873D4", func_000876C0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_0873D4", func_00087718);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_0873D4", func_00087770);

s32 func_000877D0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}

u8 func_000877D8(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x18);
}

u8 func_000877E0(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x19);
}

s32 func_000877E8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}

s32 func_000877F0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_0873D4", func_000877F8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_0873D4", func_00087800);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_0873D4", func_00087830);

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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_0873D4", func_000878E8);

