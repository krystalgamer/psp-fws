/* lang: c++ */
/* cflags: -Os */
#include "common.h"
#include "premo_plugin_decls.h"

#if FW_VERSION == 352
void func_00014300(struct Unk_func_00014300_0 *arg0) {
    void *temp_v0;

    temp_v0 = arg0->unk1E8;
    if (temp_v0 != NULL) {
        arg0->unk344 = 0;
        func_00012C70(temp_v0);
    }
}

void func_0001432C(struct Unk_func_0001432C_0 *arg0) {
    void *temp_v0;

    temp_v0 = arg0->unk1E8;
    if (temp_v0 != NULL) {
        func_00012C94(temp_v0);
        arg0->unk344 = 1;
    }
}

INCLUDE_ASM("nonmatchings/premo_plugin_014300", func_00014368);
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_014300", func_000143E4);

void func_00014410(M2C_UNK **arg0) {
    *arg0 = &D_0002AAF0;
}

void func_00014420(M2C_UNK **arg0) {
    *arg0 = &D_0002AAF0;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_014300", func_00014430);
#else
void func_00014430(M2C_UNK **arg0) {
    *arg0 = &D_0002AAF0;
    scePaf_6261C0A5((s32) arg0);
}
#endif

INCLUDE_RODATA("nonmatchings/premo_plugin_014300", D_0002A9E8);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/premo_plugin_014300", D_0002A9F8);
#else
INCLUDE_RODATA("nonmatchings/premo_plugin_014300", D_00023DA0);
#endif
