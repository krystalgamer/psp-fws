/* cflags: -Os */
#include "common.h"
#include "msvideo_plugin_decls.h"

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_05AE90", func_0005AE90);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05AE90", func_0005AECC);

void func_0005B424(M2C_UNK **arg0) {
    func_00059F54(arg0);
    *arg0 = &D_00065968;
}

void func_0005B454(M2C_UNK **arg0) {
    *arg0 = &D_00065968;
    func_0005A044((s32) arg0);
}

void func_0005B47C(M2C_UNK **arg0) {
    *arg0 = &D_00065968;
    func_0005A044((s32) arg0);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_05AE90", func_0005B4A4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_05AE90", D_00065890);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_05AE90", D_000658B0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05AE90", func_0005B4DC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05AE90", func_0005B528);
#endif
