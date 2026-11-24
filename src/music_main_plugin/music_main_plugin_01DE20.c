/* cflags: -Os */
#include "common.h"
#include "music_main_plugin_decls.h"

s32 func_0001DE20(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 != 0) {
        var_v1 = func_00012F18(M2C_FIELD(arg0, s32 *, 4), temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01DE20", func_0001DE54);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01DE20", func_0001DEC0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01DE20", func_0001DEFC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01DE20", func_0001DF4C);

s32 func_0001DFBC(void *arg0) {
    s32 var_v1;

    var_v1 = 0x80100A01;
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        var_v1 = func_000299C0();
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01DE20", func_0001DFF0);

s32 func_0001E024(void *arg0) {
    s32 var_v1;

    var_v1 = 0x80100A01;
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        var_v1 = func_00029A40(0, 0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01DE20", func_0001E060);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01DE20", func_0001E098);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01DE20", func_0001E0D0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01DE20", func_0001E108);

s32 func_0001E140(void *arg0) {
    s32 var_v1;

    var_v1 = 0x80100A01;
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        var_v1 = func_00029B74();
    }
    return var_v1;
}

s32 func_0001E174(void *arg0) {
    s32 var_v1;

    var_v1 = 0x80100A01;
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        var_v1 = func_00029BB4();
    }
    return var_v1;
}

void func_0001E1A8(s32 arg0) {
    func_0001E870(arg0, func_0001E860());
    func_00029BF4();
}

