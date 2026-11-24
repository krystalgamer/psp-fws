/* cflags: -O1 */
#include "common.h"
#include "music_main_plugin_decls.h"

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_087374", func_00087374);

void func_00087394(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000A20E0;
    M2C_FIELD(arg0, s8 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}

void func_000873B4(M2C_UNK **arg0) {
    *arg0 = &D_000A20E0;
}

void func_000873C4(M2C_UNK **arg0) {
    *arg0 = &D_000A20E0;
}

