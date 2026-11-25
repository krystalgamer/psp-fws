#include "common.h"
#include "paf_decls.h"

void func_00106C68(struct Unk_func_00106C68_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk1C;
    if (temp_v0 == 0) {

    } else {
        func_000CFE84(temp_v0);
    }
}

INCLUDE_ASM("nonmatchings/paf_106C68", func_00106C98);

INCLUDE_ASM("nonmatchings/paf_106C68", func_00106CB0);
