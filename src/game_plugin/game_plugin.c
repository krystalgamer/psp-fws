/* cflags: -Os */
#include "common.h"
#include "game_plugin_decls.h"

INCLUDE_ASM("nonmatchings/game_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/game_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/game_plugin", module_start);

#if FW_VERSION < 282
s32 module_stop(void) {
    func_0000FC3C();
    return 0;
}
#else
s32 module_stop(void) {
    func_00010A38();
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/game_plugin", func_0000015C);

INCLUDE_ASM("nonmatchings/game_plugin", func_000003DC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin", func_00000458);

INCLUDE_ASM("nonmatchings/game_plugin", func_00000474);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00010698);

INCLUDE_ASM("nonmatchings/game_plugin", func_000004D0);

INCLUDE_ASM("nonmatchings/game_plugin", func_000005D4);
#endif

INCLUDE_ASM("nonmatchings/game_plugin", func_0000045C);

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/game_plugin", D_00010870);

INCLUDE_RODATA("nonmatchings/game_plugin", D_0001087C);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00010888);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00010894);

INCLUDE_RODATA("nonmatchings/game_plugin", D_000108A8);

INCLUDE_RODATA("nonmatchings/game_plugin", D_000108BC);

INCLUDE_RODATA("nonmatchings/game_plugin", D_000108D0);

INCLUDE_RODATA("nonmatchings/game_plugin", D_000108E4);

INCLUDE_RODATA("nonmatchings/game_plugin", D_000108F4);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00010908);

INCLUDE_RODATA("nonmatchings/game_plugin", D_0001091C);

INCLUDE_RODATA("nonmatchings/game_plugin", D_0001092C);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00010940);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00010958);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00010968);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00010978);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00010988);

INCLUDE_RODATA("nonmatchings/game_plugin", D_0001099C);

INCLUDE_RODATA("nonmatchings/game_plugin", D_000109B0);

INCLUDE_RODATA("nonmatchings/game_plugin", D_000109C4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin", func_000006B8);
#endif

#if FW_VERSION == 100
void func_000006B8(void) {
    vsh_B55C095C(&D_000115D8);
}
#endif

#if FW_VERSION == 282
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
#endif
