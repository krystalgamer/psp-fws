/* cflags: -Os */
#include "common.h"
#include "msvideo_main_plugin_decls.h"

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00C098", func_0000C098);
#else
void func_0000C098(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_5E4447F6(arg1);
    }
    func_0000C2B4(arg0, arg1, var_v0);
}
#endif

void func_0000C0E8(void) {
    func_0000C368();
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00C098", func_0000C104);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00C098", func_0000C1D0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00C098", func_0000C220);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00C098", func_0000C2B4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00C098", func_0000C368);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00C098", func_0000C394);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00C098", func_0000C5A4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00C098", func_0000C650);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00C098", func_0000C72C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00C098", func_0000C864);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00C098", func_0000C8B8);

s32 func_0000C90C(void) {
    return 0;
}
