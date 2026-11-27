/* cflags: -O2 */
#include "common.h"
#include "netplay_client_plugin_decls.h"

void func_0000D310(void) {
    func_ptr *p;

    for (p = D_0000DD68 - 1; *p != (func_ptr)-1; p--) {
        (*p)();
    }
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/netplay_client_plugin_crtend", func_0000D368);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netplay_client_plugin_crtend", D_0000E658);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/netplay_client_plugin_crtend", D_0000E6C0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/netplay_client_plugin_crtend", D_0000E740);
#endif
