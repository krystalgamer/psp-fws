/* cflags: -Os */
#include "common.h"
#include "lftv_main_plugin_decls.h"

#if FW_VERSION >= 282
s32 func_0003E2F8(void) {
    s32 var_v1;

    var_v1 = -1;
    if (func_0003E950() != 0) {
        sceVshLftvMw_6FE56DA2();
        var_v1 = 0;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03E2F8", func_00040728);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03E2F8", func_0003E32C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03E2F8", func_0003E368);

void func_0003E3C8(s32 arg0) {
    func_0003E32C(arg0, sceVshLftvMw_21257ACD());
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03E2F8", func_0003E3F8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03E2F8", func_0003E438);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03E2F8", func_0003E524);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03E2F8", func_0003E5C0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
s32 func_0003E5C0(struct Unk_func_0003E5C0_0 *arg0) {
    return arg0->unk1DC > 0;
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03E2F8", func_0003E5CC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
s32 func_0003E5CC(struct Unk_func_0003E5C0_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = -1;
    if (func_0003E5C0(arg0) != 0) {
        var_v1 = sceKernelSetEventFlag(arg0->unk1DC, arg1);
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03E2F8", func_0003E618);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
s32 func_0003E618(struct Unk_func_0003E5C0_0 *arg0, u32 arg1, void *arg2, void *arg3) {
    s32 var_v1;

    var_v1 = -1;
    if (func_0003E5C0(arg0) != 0) {
        var_v1 = sceKernelWaitEventFlag(arg0->unk1DC, arg1, 1, arg2, arg3);
    }
    return var_v1;
}
#endif
