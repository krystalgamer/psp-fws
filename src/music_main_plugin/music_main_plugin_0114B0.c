/* cflags: -Os */
#include "common.h"
#include "music_main_plugin_decls.h"

s32 func_000114B0(s32 arg0) {
    s32 var_v0;

    var_v0 = 3;
    if (arg0 != 0) {
        var_v0 = func_000114E8(func_00014CC4(D_000A43C8, arg0, 1));
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_0114B0", func_000114E8);

s32 func_00011734(void *arg0) {
    s32 var_v0;
    void *temp_a0;

    var_v0 = 0;
    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, void **, 8);
        if (temp_a0 != NULL) {
            var_v0 = M2C_FIELD(temp_a0, s32 *, 4);
        }
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_0114B0", func_00011750);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_0114B0", func_000117D4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_0114B0", func_0001186C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_0114B0", func_00011874);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_0114B0", func_0001187C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_0114B0", func_00011888);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_0114B0", func_00011894);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_0114B0", func_000118C8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_0114B0", func_000118D0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_0114B0", func_00011930);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_0114B0", D_0009B4E0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_0114B0", func_00011990);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_0114B0", func_00011A00);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_0114B0", func_00011A90);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_0114B0", func_00011AC4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_0114B0", func_00011AFC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_0114B0", func_00011B24);

void func_00011B58(void) {
    D_000A43D0 = vsh_81BBD0D1(vsh_34DA1B67(), D_000A3254);
}

void func_00011B8C(void) {
    vsh_6286E89D(vsh_34DA1B67(), D_000A3254);
}

