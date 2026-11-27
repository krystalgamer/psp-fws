/* cflags: -O2 */
#include "common.h"
#include "update_plugin_decls.h"

void func_000062D4(void) {
    func_ptr *p;

    for (p = D_00007280 - 1; *p != (func_ptr)-1; p--) {
        (*p)();
    }
}

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/update_plugin_crtend", func_00006294);

INCLUDE_RODATA("nonmatchings/update_plugin_crtend", D_00007C50);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/update_plugin_crtend", func_0000632C);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/update_plugin_crtend", func_00006900);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/update_plugin_crtend", D_00007CF0);
#endif
