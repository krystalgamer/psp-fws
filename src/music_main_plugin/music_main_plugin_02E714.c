/* cflags: -O1 */
#include "common.h"
#include "music_main_plugin_decls.h"

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02E714", func_0002E714);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02E714", func_0002E72C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02E714", func_0002E738);

s32 func_0002E8E4(s32 arg0) {
    return arg0 & 0x7F;
}

s32 func_0002E8EC(s32 arg0) {
    return arg0 & 0xFF;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02E714", func_0002E8F4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02E714", func_0002EA08);

void func_0002EAC4(s32 arg0) {
    func_0002E738(__builtin_allegrex_min(sceIoClose(arg0), 0));
}

s32 func_0002EAF0(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02E714", func_0002EAF8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02E714", func_0002EB6C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02E714", func_0002EBE0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02E714", func_0002ECAC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02E714", func_0002ED20);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02E714", func_0002ED98);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02E714", func_0002EE10);

void func_0002EE48(void) {
    func_0002E738(sceIoRemove());
}

void func_0002EE6C(void) {
    func_0002E738(sceIoRename());
}

