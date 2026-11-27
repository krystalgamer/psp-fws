/* cflags: -O2 */
#include "common.h"
#include "auth_plugin_decls.h"

void func_00002658(void) {
    func_ptr *p;

    for (p = D_00002A70 - 1; *p != (func_ptr)-1; p--) {
        (*p)();
    }
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/auth_plugin_crtend", func_000026B0);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/auth_plugin_crtend", D_00002C00_v271);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/auth_plugin_crtend", D_00002C00);
#endif

#if FW_VERSION >= 271
INCLUDE_RODATA("nonmatchings/auth_plugin_crtend", D_00002C10);
#endif
