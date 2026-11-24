/* cflags: -Os */
#include "common.h"
#include "music_main_plugin_decls.h"

s32 func_00076710(struct Unk_func_00076710_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 4;
    temp_v0 = arg0->unk6C;
    if (temp_v0 != 0) {
        func_0008CFCC(temp_v0);
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_076710", D_000A1628);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_076710", D_000A1668);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_076710", func_00076744);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_076710", func_00077248);

void func_000772A8(s32 arg0) {
    func_00075BF0(arg0 - 4);
}

void func_000772C4(s32 arg0) {
    func_00075CE8(arg0 - 4);
}

void func_000772E0(s32 arg0) {
    func_00075DE8(arg0 - 4);
}

