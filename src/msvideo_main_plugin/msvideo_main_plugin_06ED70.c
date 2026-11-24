/* cflags: -Os */
#include "common.h"
#include "msvideo_main_plugin_decls.h"

s32 func_0006ED70(struct Unk_func_0006ED70_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 2;
    if (arg0->unk1BC != 0) {
        var_v1 = (func_00071D68(arg0->unkAC, arg1) == 0) ? 0 : 5;
    }
    return var_v1;
}

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

