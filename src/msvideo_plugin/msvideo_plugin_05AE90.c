/* lang: c++ */
/* cflags: -Os */
#include "common.h"
#include "msvideo_plugin_decls.h"

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_05AE90", func_0005AE90);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05AE90", func_0005AECC);

void func_0005B424(M2C_UNK **arg0) {
    func_00059F54((Unk_func_00059F54_0*) arg0);
    *arg0 = &D_00065968;
}

Class_00065968::~Class_00065968() {
}

INCLUDE_RODATA("nonmatchings/msvideo_plugin_05AE90", D_00065890);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_05AE90", D_000658B0);

__asm__(".globl _ZTV14Class_000658B0\n_ZTV14Class_000658B0 = D_000658B0 - 8\n");

INCLUDE_ASM("nonmatchings/msvideo_plugin_05AE90", func_0005B4DC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05AE90", func_0005B528);
#endif
