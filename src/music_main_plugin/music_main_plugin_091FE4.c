/* cflags: -O1 */
#include "common.h"
#include "music_main_plugin_decls.h"

void func_00091FE4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000A2988;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

void func_00092000(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000A2988;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_091FE4", func_0009201C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_091FE4", func_00092038);

void func_00092054(M2C_UNK **arg0) {
    *arg0 = &D_000A2988;
}

void func_00092064(M2C_UNK **arg0) {
    *arg0 = &D_000A2988;
}

