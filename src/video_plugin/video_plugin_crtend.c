/* cflags: -O2 */
#include "common.h"
#include "video_plugin_decls.h"

void func_000020A0(void) {
    func_ptr *p;

    for (p = D_00002558 - 1; *p != (func_ptr)-1; p--) {
        (*p)();
    }
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_plugin_crtend", func_000020F8);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/video_plugin_crtend", D_00003194);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/video_plugin_crtend", func_0004CF24);

INCLUDE_ASM("nonmatchings/video_plugin_crtend", func_0004CFA8);

INCLUDE_ASM("nonmatchings/video_plugin_crtend", func_0004D2F0);

INCLUDE_ASM("nonmatchings/video_plugin_crtend", func_0004D358);

INCLUDE_ASM("nonmatchings/video_plugin_crtend", func_0004D3CC);

INCLUDE_ASM("nonmatchings/video_plugin_crtend", func_0004D744);

INCLUDE_ASM("nonmatchings/video_plugin_crtend", func_0004D968);

INCLUDE_ASM("nonmatchings/video_plugin_crtend", func_0004D9F0);

INCLUDE_ASM("nonmatchings/video_plugin_crtend", func_0004DACC);

INCLUDE_ASM("nonmatchings/video_plugin_crtend", func_0004DBA0);

INCLUDE_ASM("nonmatchings/video_plugin_crtend", func_0004DE40);

INCLUDE_ASM("nonmatchings/video_plugin_crtend", func_0004DF5C);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin_crtend", D_000450B0);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_crtend", D_00045158);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin_crtend", D_000451C0);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin_crtend", D_000451CC);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_crtend", D_000451D8);

INCLUDE_RODATA("nonmatchings/video_plugin_crtend", D_000451E4);

INCLUDE_RODATA("nonmatchings/video_plugin_crtend", D_000451F4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin_crtend", D_0004A13C);

INCLUDE_RODATA("nonmatchings/video_plugin_crtend", D_0004A148);

INCLUDE_RODATA("nonmatchings/video_plugin_crtend", D_0004A150);

INCLUDE_RODATA("nonmatchings/video_plugin_crtend", D_0004A154);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_crtend", D_00045204);

INCLUDE_RODATA("nonmatchings/video_plugin_crtend", D_00045218);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin_crtend", D_00045238);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_crtend", D_00045248);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/video_plugin_crtend", D_000546C0);

INCLUDE_RODATA("nonmatchings/video_plugin_crtend", D_000546C4);

INCLUDE_RODATA("nonmatchings/video_plugin_crtend", D_000546C8);

INCLUDE_RODATA("nonmatchings/video_plugin_crtend", D_000546CC);

INCLUDE_RODATA("nonmatchings/video_plugin_crtend", D_000546D0);

INCLUDE_RODATA("nonmatchings/video_plugin_crtend", D_000546D4);

INCLUDE_RODATA("nonmatchings/video_plugin_crtend", D_000546D8);
#endif
