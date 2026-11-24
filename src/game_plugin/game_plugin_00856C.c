/* cflags: -O2 */
#include "common.h"
#include "game_plugin_decls.h"

s32 func_0000856C(s32 arg0) {
    s32 var_v0;

    switch (arg0) {                                 /* irregular */
    default:
        var_v0 = 0x801085F2;
        break;
    case 1:
        var_v0 = func_0000896C();
        break;
    case 4:
        var_v0 = func_000089DC();
        break;
    case 3:
        var_v0 = func_000089D4();
        break;
    case 2:
        var_v0 = func_000089A0();
        break;
    }
    return var_v0;
}

s32 func_000085FC(void) {
    scePaf_545FE2DA();
    return 0;
}

INCLUDE_RODATA("nonmatchings/game_plugin_00856C", D_00012158);

INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_0000861C);

INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_0000896C);

INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_000089A0);

s32 func_000089D4(void) {
    return 0;
}

s32 func_000089DC(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_000089E4);

s32 func_00008A50(void) {
    D_0001266C = -1;
    func_00008DB0();
    if (D_00012678 != 0) {
        scePaf_545FE2DA(D_00012678);
        D_00012678 = 0;
    }
    return 0;
}

INCLUDE_RODATA("nonmatchings/game_plugin_00856C", D_0001222C);

INCLUDE_RODATA("nonmatchings/game_plugin_00856C", D_0001223C);

INCLUDE_RODATA("nonmatchings/game_plugin_00856C", D_00012240);

INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_00008AA0);

INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_00008DB0);

INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_00008EB0);

INCLUDE_RODATA("nonmatchings/game_plugin_00856C", D_0001224C);

INCLUDE_RODATA("nonmatchings/game_plugin_00856C", D_00012250);

INCLUDE_RODATA("nonmatchings/game_plugin_00856C", D_00012258);

INCLUDE_RODATA("nonmatchings/game_plugin_00856C", D_00012264);

INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_000090C0);

INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_000091D4);

INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_0000932C);

INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_000093B4);

INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_00009418);

INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_000094D4);

INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_00009574);

INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_000095DC);

s32 func_00009644(s32 arg0) {
    s32 var_a1;

    var_a1 = 0x801085FE;
    if (D_0001266C == 2) {
        var_a1 = 0;
        if ((arg0 < 0) || (arg0 >= D_00012674)) {
            var_a1 = 0x801085E8;
        }
    }
    return var_a1;
}

