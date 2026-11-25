/* cflags: -O2 */
#include "common.h"
#include "game_plugin_decls.h"

#if FW_VERSION == 282
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
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_00856C", D_00012158);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_00008AB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_0000799C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_0000861C);
#endif

INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_0000896C);

INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_000089A0);

#if FW_VERSION < 282
s32 func_00007D98(void) {
    return 0;
}

s32 func_00007DA0(void) {
    return 0;
}
#else
s32 func_000089D4(void) {
    return 0;
}

s32 func_000089DC(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_000089E4);

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_00008EB0);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 func_00008EB0(void) {
    D_000116CC = -1;
    func_00008E14();
    if (D_00012AF4 != 0) {
        scePaf_545FE2DA(D_00012AF4);
        D_00012AF4 = 0;
    }
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_00007E08);
#endif

#if FW_VERSION == 282
s32 func_00008A50(void) {
    D_0001266C = -1;
    func_00008DB0();
    if (D_00012678 != 0) {
        scePaf_545FE2DA(D_00012678);
        D_00012678 = 0;
    }
    return 0;
}
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_00856C", D_0001222C);

INCLUDE_RODATA("nonmatchings/game_plugin_00856C", D_0001223C);

INCLUDE_RODATA("nonmatchings/game_plugin_00856C", D_00012240);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_00008A70);

INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_00008E14);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_00008FDC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_00007EE4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_00008284);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/game_plugin_00856C", D_0001271C);

INCLUDE_RODATA("nonmatchings/game_plugin_00856C", D_00012720);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/game_plugin_00856C", D_000123C0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/game_plugin_00856C", D_00012728);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_00008AA0);

INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_00008DB0);

INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_00008EB0);

INCLUDE_RODATA("nonmatchings/game_plugin_00856C", D_0001224C);

INCLUDE_RODATA("nonmatchings/game_plugin_00856C", D_00012250);
#endif

#if FW_VERSION != 271
INCLUDE_RODATA("nonmatchings/game_plugin_00856C", D_00012258);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/game_plugin_00856C", D_00012264);
#endif

INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_000090C0);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_00009158);

INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_000092B0);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_00008578);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_000091D4);

INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_0000932C);
#endif

INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_000093B4);

INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_00009418);

INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_000094D4);

INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_00009574);

INCLUDE_ASM("nonmatchings/game_plugin_00856C", func_000095DC);

#if FW_VERSION < 282
s32 func_00008940(s32 arg0) {
    s32 var_a1;

    var_a1 = 0x801085FE;
    if (D_000116CC == 2) {
        var_a1 = 0;
        if ((arg0 < 0) || (arg0 >= D_000116D0)) {
            var_a1 = 0x801085E8;
        }
    }
    return var_a1;
}
#else
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
#endif
