/* cflags: -Os */
#include "common.h"
#include "game_plugin_decls.h"

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0081A4", func_000081A4);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0081A4", func_000081FC);

s32 func_00008274(void *arg0) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_000081FC();
    var_v0 = -1;
    if (temp_v0 != 0) {
        scePaf_F609FA81(M2C_FIELD(arg0, s32 *, 4), temp_v0, 0, 0);
        scePaf_CAF05F1D(M2C_FIELD(arg0, s32 *, 4), temp_v0);
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0081A4", func_000082D0);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0081A4", func_00008394);

s32 func_00008458(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 func_00008460(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

s32 func_00008468(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_00008470(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 func_00008478(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 func_00008480(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}

s32 func_00008488(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}

void func_00008490(void *arg0, s32 arg1) {
    scePaf_F609FA81(M2C_FIELD(arg0, s32 *, 4), arg1, 0, 0);
}

void func_000084B4(void *arg0, s32 arg1) {
    scePaf_CAF05F1D(M2C_FIELD(arg0, s32 *, 4), arg1);
}

void func_000084D0(void *arg0) {
    scePaf_3481F595(M2C_FIELD(arg0, s32 *, 4));
}

void func_000084EC(void *arg0) {
    scePaf_DAB59652(M2C_FIELD(arg0, s32 *, 4));
}

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0081A4", func_00008508);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0081A4", func_00008530);

