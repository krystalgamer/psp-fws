/* cflags: -Os */
#include "common.h"
#include "msvideo_main_plugin_decls.h"

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06ED70", func_0006ED70);
#endif

#if FW_VERSION >= 310
s32 func_0006ED70(struct Unk_func_0006ED70_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 2;
    if (arg0->unk1BC != 0) {
        var_v1 = (func_00071D68(arg0->unkAC, arg1) == 0) ? 0 : 5;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
s32 func_0006ED70(struct Unk_func_0006ED70_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 2;
    if (M2C_FIELD(arg0, s32 *, 0x1B4) != 0) {
        var_v1 = (func_00071D68(arg0->unkAC, arg1) == 0) ? 0 : 5;
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06ED70", func_0006EDA4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06ED70", func_0006EDF4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06ED70", func_0006EE38);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06ED70", func_0006EE90);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06ED70", func_0006EECC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06ED70", func_0006EF1C);

s32 func_0006EF60(struct Unk_func_0006EF60_0 *arg0) {
    func_00070E98(arg0->unkAC);
    return 0;
}

s32 func_0006EF80(struct Unk_func_0006EF80_0 *arg0) {
    func_00071808(arg0->unkAC);
    return 0;
}

void func_0006EFA0(struct Unk_func_0006EF80_0 *arg0) {
    func_0006EF80(arg0);
}

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06ED70", func_0006EFC8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_06ED70", D_000B6228);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_06ED70", D_000B7CE0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_06ED70", D_000B7CE4);
#endif

#if FW_VERSION == 311
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_06ED70", D_000B6280_v311);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_06ED70", D_000B6284_v311);
#endif

#if FW_VERSION == 310
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_06ED70", D_000B6280_v310);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_06ED70", D_000B6284_v310);
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06ED70", func_0006E108);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_06ED70", D_000B4E90);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_06ED70", D_000B4EE8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_06ED70", D_000B4EEC);
#endif
