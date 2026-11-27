/* lang: c++ */
/* cflags: -O2 */
#include "common.h"
#include "msvideo_plugin_decls.h"

void func_0005ECE0(void) {
    func_ptr *p;

    for (p = D_0006124C - 1; *p != (func_ptr)-1; p--) {
        (*p)();
    }
}

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_crtend", func_0005ED38);

INCLUDE_ASM("nonmatchings/msvideo_plugin_crtend", func_0005EDBC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_crtend", func_0005F104);

INCLUDE_ASM("nonmatchings/msvideo_plugin_crtend", func_0005F16C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_crtend", func_0005F1E0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_crtend", func_0005F558);

INCLUDE_ASM("nonmatchings/msvideo_plugin_crtend", func_0005F77C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_crtend", func_0005F804);

INCLUDE_ASM("nonmatchings/msvideo_plugin_crtend", func_0005F88C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_crtend", func_0005F968);

INCLUDE_ASM("nonmatchings/msvideo_plugin_crtend", func_0005FA3C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_crtend", func_0005FCDC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_crtend", func_0005FDF8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_crtend", D_00065A68);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_crtend", D_00065A6C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_crtend", D_00065A70);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_crtend", D_00065A74);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_crtend", D_00065A78);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_crtend", D_00065A7C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_crtend", D_00065A80);
#endif
