/* cflags: -O1 */
#include "common.h"
#include "paf_decls.h"

void func_00155A78(s32 arg0) {
    if (arg0 != 0) {
        func_0015A1E8(arg0);
    }
}

s32 func_00155A98(struct Unk_func_00155A98_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk8;
    }
    return var_v0;
}

s32 func_00155AAC(struct Unk_func_00155AAC_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk24;
    }
    return var_v0;
}

s32 func_00155AC0(struct Unk_func_00155AC0_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk28;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/paf_155A78", func_00155AD4);

INCLUDE_ASM("nonmatchings/paf_155A78", func_00155B04);

INCLUDE_ASM("nonmatchings/paf_155A78", func_00155B34);

INCLUDE_ASM("nonmatchings/paf_155A78", func_00155BC0);

INCLUDE_ASM("nonmatchings/paf_155A78", func_00155C2C);

void func_00155D04(struct Unk_func_00155D04_0 *arg0) {
    if (arg0 != NULL) {
        arg0->unk14 = 0;
        arg0->unk0 = 0;
        arg0->unk10 = 0;
    }
}
