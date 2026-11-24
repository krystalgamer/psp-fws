#include "common.h"
#include "pafmini_decls.h"

void func_000785E4(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 == 0) {

    } else {
        func_0004B744(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0785E4", func_00078614);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0785E4", func_0007862C);

