/* lang: c++ */
/* cflags: -Os */
#include "common.h"
#include "premo_plugin_decls.h"

#if FW_VERSION == 352
s32 func_000117FC(struct Unk_func_000117FC_0 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = arg0->unkA0;
    if (temp_v0 != 0) {
        var_v1 = func_000149C4(temp_v0, arg1);
    }
    return var_v1;
}

s32 func_00011830(struct Unk_func_00011830_0 *arg0) {
    s32 var_v0;
    struct Unk_func_00011830_temp_v1 *temp_v1;

    temp_v1 = arg0->unkA0;
    var_v0 = 0;
    if (temp_v1 != NULL) {
        var_v0 = temp_v1->unk38 & 1;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_0117FC", func_0001184C);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_0117FC", func_00011B18);
#else
void func_00011B18(M2C_UNK **arg0) {
    *arg0 = &D_0002A7A8;
    scePaf_6261C0A5((s32) arg0);
}
#endif

s32 func_00011B40(void) {
    return 1;
}

s32 func_00011B48(void) {
    return 1;
}
