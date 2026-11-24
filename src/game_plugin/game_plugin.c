/* cflags: -Os */
#include "common.h"
#include "game_plugin_decls.h"

INCLUDE_ASM("nonmatchings/game_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/game_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/game_plugin", module_start);

s32 module_stop(void) {
    func_00010A38();
    return 0;
}

INCLUDE_ASM("nonmatchings/game_plugin", func_0000015C);

INCLUDE_ASM("nonmatchings/game_plugin", func_000003DC);

INCLUDE_ASM("nonmatchings/game_plugin", func_0000045C);

s32 func_000004E8(s32 arg0) {
    func_00008160(&D_0001247C, arg0);
    return 0;
}

void func_00000510(void) {
    func_00006EF4(0);
}

void func_0000052C(void) {
    func_00006EF4(1);
}

INCLUDE_ASM("nonmatchings/game_plugin", func_00000548);

