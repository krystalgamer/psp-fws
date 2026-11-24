#include "common.h"
#include "paf_decls.h"

void func_00106C68(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 == 0) {

    } else {
        func_000CFE84(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_106C68", func_00106C98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_106C68", func_00106CB0);

