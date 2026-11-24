/* cflags: -O1 */
#include "common.h"
#include "paf_decls.h"

void func_00155A78(s32 arg0) {
    if (arg0 != 0) {
        func_0015A1E8(arg0);
    }
}

s32 func_00155A98(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 8);
    }
    return var_v0;
}

s32 func_00155AAC(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x24);
    }
    return var_v0;
}

s32 func_00155AC0(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x28);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155A78", func_00155AD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155A78", func_00155B04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155A78", func_00155B34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155A78", func_00155BC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155A78", func_00155C2C);

void func_00155D04(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        M2C_FIELD(arg0, s32 *, 0) = 0;
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
}

