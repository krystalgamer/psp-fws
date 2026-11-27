/* cflags: -O2 */
#include "common.h"
#include "savedata_plugin_decls.h"

void func_00020510(void) {
    func_ptr *p;

    for (p = D_00021734 - 1; *p != (func_ptr)-1; p--) {
        (*p)();
    }
}

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_crtend", func_00021158);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_plugin_crtend", func_00020568);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_plugin_crtend", func_00020B3C);
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin_crtend", D_00022BD8);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_plugin_crtend", D_00023828);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_plugin_crtend", D_00022BE0);
#endif
