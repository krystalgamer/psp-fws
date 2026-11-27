/* cflags: -O2 */
#include "common.h"
#include "game_plugin_decls.h"

void func_0001040C(void) {
    func_ptr *p;

    for (p = D_00011564 - 1; *p != (func_ptr)-1; p--) {
        (*p)();
    }
}

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/game_plugin_crtend", func_000105E0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/game_plugin_crtend", func_00010464);
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/game_plugin_crtend", func_00014428);

INCLUDE_ASM("nonmatchings/game_plugin_crtend", func_0001499C);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/game_plugin_crtend", func_00010A38);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_crtend", D_000122F8);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/game_plugin_crtend", D_00012468);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/game_plugin_crtend", D_00012300);
#endif
