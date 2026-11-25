#include "common.h"
#include "pafmini_decls.h"

INCLUDE_ASM("nonmatchings/pafmini_0189B4", func_000189B4);

INCLUDE_ASM("nonmatchings/pafmini_0189B4", func_00018B5C);

INCLUDE_ASM("nonmatchings/pafmini_0189B4", func_00018C78);

INCLUDE_ASM("nonmatchings/pafmini_0189B4", func_00018CF4);

s32 func_00018D50(struct Unk_func_00018D50_0 *arg0, s32 arg1) {
    s32 var_a3;

    var_a3 = 0;
    if ((arg1 >= 0) && (arg1 < (arg0->unk8 * arg0->unkC))) {
        var_a3 = arg0->unk0 + (arg1 * 8);
    }
    return var_a3;
}

INCLUDE_ASM("nonmatchings/pafmini_0189B4", func_00018D84);

INCLUDE_ASM("nonmatchings/pafmini_0189B4", func_00018DF0);

INCLUDE_ASM("nonmatchings/pafmini_0189B4", func_00018F1C);
