/* lang: c++ */
/* cflags: -Os */
#include "common.h"
#include "music_main_plugin_decls.h"

s32 func_0001DE20(struct Unk_func_0001DE20_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = arg0->unkC;
    if (temp_v0 != 0) {
        var_v1 = func_00012F18(arg0->unk4, temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_01DE20", func_0001DE54);

INCLUDE_ASM("nonmatchings/music_main_plugin_01DE20", func_0001DEC0);

INCLUDE_ASM("nonmatchings/music_main_plugin_01DE20", func_0001DEFC);

INCLUDE_ASM("nonmatchings/music_main_plugin_01DE20", func_0001DF4C);

s32 func_0001DFBC(struct Unk_func_0001DFBC_0 *arg0) {
    s32 var_v1;

    var_v1 = 0x80100A01;
    if (arg0->unkC != 0) {
        var_v1 = func_000299C0();
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_01DE20", func_0001DFF0);

s32 func_0001E024(struct Unk_func_0001E024_0 *arg0) {
    s32 var_v1;

    var_v1 = 0x80100A01;
    if (arg0->unkC != 0) {
        var_v1 = func_00029A40(0, 0);
    }
    return var_v1;
}

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin_01DE20", func_00022288);

INCLUDE_ASM("nonmatchings/music_main_plugin_01DE20", func_000222F8);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_01DE20", func_0001E060);

INCLUDE_ASM("nonmatchings/music_main_plugin_01DE20", func_0001E098);

INCLUDE_ASM("nonmatchings/music_main_plugin_01DE20", func_0001E0D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_01DE20", func_0001E108);

s32 func_0001E140(struct Unk_func_0001E140_0 *arg0) {
    s32 var_v1;

    var_v1 = 0x80100A01;
    if (arg0->unkC != 0) {
        var_v1 = func_00029B74();
    }
    return var_v1;
}

s32 func_0001E174(struct Unk_func_0001E174_0 *arg0) {
    s32 var_v1;

    var_v1 = 0x80100A01;
    if (arg0->unkC != 0) {
        var_v1 = func_00029BB4();
    }
    return var_v1;
}

void func_0001E1A8(s32 arg0) {
    func_0001E870(arg0, func_0001E860());
    func_00029BF4();
}
