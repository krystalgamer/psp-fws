/* cflags: -O2 */
#include "common.h"
#include "photo_plugin_decls.h"

void func_0002D1F0(void) {
    func_ptr *p;

    for (p = D_0002E4E4 - 1; *p != (func_ptr)-1; p--) {
        (*p)();
    }
}

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/photo_plugin_crtend", func_0002D7DC);

INCLUDE_ASM("nonmatchings/photo_plugin_crtend", func_0002D828);

INCLUDE_ASM("nonmatchings/photo_plugin_crtend", func_0002DB70);

INCLUDE_ASM("nonmatchings/photo_plugin_crtend", func_0002DBD8);

INCLUDE_ASM("nonmatchings/photo_plugin_crtend", func_0002DC4C);

INCLUDE_ASM("nonmatchings/photo_plugin_crtend", func_0002DFC4);

INCLUDE_ASM("nonmatchings/photo_plugin_crtend", func_0002DFF8);

INCLUDE_ASM("nonmatchings/photo_plugin_crtend", func_0002E070);

INCLUDE_ASM("nonmatchings/photo_plugin_crtend", func_0002E13C);

INCLUDE_ASM("nonmatchings/photo_plugin_crtend", func_0002E16C);

INCLUDE_ASM("nonmatchings/photo_plugin_crtend", func_0002E40C);

INCLUDE_ASM("nonmatchings/photo_plugin_crtend", func_0002E528);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/photo_plugin_crtend", func_0002D248);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/photo_plugin_crtend", D_000250D0);

INCLUDE_RODATA("nonmatchings/photo_plugin_crtend", D_000250E8);

INCLUDE_RODATA("nonmatchings/photo_plugin_crtend", D_00025100);

INCLUDE_RODATA("nonmatchings/photo_plugin_crtend", D_00025118);

INCLUDE_RODATA("nonmatchings/photo_plugin_crtend", D_00025130);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/photo_plugin_crtend", D_00025020);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/photo_plugin_crtend", D_00025148);
#endif
