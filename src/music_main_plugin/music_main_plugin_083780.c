/* cflags: -O1 */
#include "common.h"
#include "music_main_plugin_decls.h"

void func_00083780(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000A1F70;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

void func_0008379C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000A1F70;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_083780", func_000837B8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_083780", func_000837D4);

void func_000837F0(M2C_UNK **arg0) {
    *arg0 = &D_000A1F70;
}

void func_00083800(M2C_UNK **arg0) {
    *arg0 = &D_000A1F70;
}

