/* cflags: -Os */
#include "common.h"
#include "premo_plugin_decls.h"

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_0117FC", func_000117FC);

s32 func_00011830(void *arg0) {
    s32 var_v0;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0xA0);
    var_v0 = 0;
    if (temp_v1 != NULL) {
        var_v0 = M2C_FIELD(temp_v1, s32 *, 0x38) & 1;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_0117FC", func_0001184C);

void func_00011B18(M2C_UNK **arg0) {
    *arg0 = &D_0002A7A8;
    scePaf_6261C0A5((s32) arg0);
}

s32 func_00011B40(void) {
    return 1;
}

s32 func_00011B48(void) {
    return 1;
}

