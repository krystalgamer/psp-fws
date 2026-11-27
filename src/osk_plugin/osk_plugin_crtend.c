/* cflags: -O2 */
#include "common.h"
#include "osk_plugin_decls.h"

void func_0000FBD8(void) {
    func_ptr *p;

    for (p = D_00011560 - 1; *p != (func_ptr)-1; p--) {
        (*p)();
    }
}

INCLUDE_ASM("nonmatchings/osk_plugin_crtend", func_0000FC30);

INCLUDE_ASM("nonmatchings/osk_plugin_crtend", func_0000FC7C);

INCLUDE_ASM("nonmatchings/osk_plugin_crtend", func_0000FFC4);

INCLUDE_ASM("nonmatchings/osk_plugin_crtend", func_0001002C);

INCLUDE_ASM("nonmatchings/osk_plugin_crtend", func_000100A0);

INCLUDE_ASM("nonmatchings/osk_plugin_crtend", func_00010418);

INCLUDE_ASM("nonmatchings/osk_plugin_crtend", func_0001063C);

INCLUDE_ASM("nonmatchings/osk_plugin_crtend", func_000106C4);

INCLUDE_ASM("nonmatchings/osk_plugin_crtend", func_000106F8);

INCLUDE_ASM("nonmatchings/osk_plugin_crtend", func_00010770);

INCLUDE_ASM("nonmatchings/osk_plugin_crtend", func_00010834);

INCLUDE_ASM("nonmatchings/osk_plugin_crtend", func_00010864);

INCLUDE_ASM("nonmatchings/osk_plugin_crtend", func_00010ACC);

INCLUDE_ASM("nonmatchings/osk_plugin_crtend", func_00010BE0);

INCLUDE_ASM("nonmatchings/osk_plugin_crtend", func_00010D44);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/osk_plugin_crtend", func_00010E74);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin_crtend", D_00013378);
