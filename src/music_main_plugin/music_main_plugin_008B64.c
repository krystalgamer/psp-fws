/* cflags: -Os */
#include "common.h"
#include "music_main_plugin_decls.h"

void func_00008B64(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_CA79D58B(arg1);
    }
    func_00008F40(arg0, arg1, var_v0);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_008B64", func_00008BB4);

INCLUDE_ASM("nonmatchings/music_main_plugin_008B64", func_00008C48);

void func_00008CE4(void **arg0) {
    struct Unk_func_00008CE4_temp_a0 *temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != NULL) {
        temp_a0->unk4 = (s32) (temp_a0->unk4 + 1);
    }
}

INCLUDE_ASM("nonmatchings/music_main_plugin_008B64", func_00008D04);

INCLUDE_ASM("nonmatchings/music_main_plugin_008B64", func_00008D30);

INCLUDE_ASM("nonmatchings/music_main_plugin_008B64", func_00008F40);

INCLUDE_ASM("nonmatchings/music_main_plugin_008B64", func_00008FEC);

INCLUDE_ASM("nonmatchings/music_main_plugin_008B64", func_000090C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_008B64", func_00009200);

INCLUDE_ASM("nonmatchings/music_main_plugin_008B64", func_00009254);

INCLUDE_ASM("nonmatchings/music_main_plugin_008B64", func_000092A8);

s32 func_000092C8(void) {
    return 1;
}

void func_000092D0(void) {
    D_000A4234 = 0;
}

void func_000092DC(s8 arg0) {
    D_000A4223 = arg0;
}

