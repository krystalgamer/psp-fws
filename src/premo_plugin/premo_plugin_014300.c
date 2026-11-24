/* cflags: -Os */
#include "common.h"
#include "premo_plugin_decls.h"

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

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_014300", func_00014368);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_014300", func_000143E4);

void func_00014410(M2C_UNK **arg0) {
    *arg0 = &D_0002AAF0;
}

void func_00014420(M2C_UNK **arg0) {
    *arg0 = &D_0002AAF0;
}

void func_00014430(M2C_UNK **arg0) {
    *arg0 = &D_0002AAF0;
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_014300", D_0002A9E8);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_014300", D_0002A9F8);

