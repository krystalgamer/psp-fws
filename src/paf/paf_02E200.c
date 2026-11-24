/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

void func_0002E200(struct Unk_func_0002E200_0 *arg0) {
    s32 temp_v0;

    func_00013BF8((u8 *)arg0 + 8);
    temp_v0 = arg0->unk14;
    if (temp_v0 == 0) {
        arg0->unk14 = 0;
    } else {
        scePaf_48B5C1C0(temp_v0);
        arg0->unk14 = 0;
    }
}

void func_0002E248(s32 arg0) {
    func_00013BF8(arg0 + 8);
}

INCLUDE_ASM("nonmatchings/paf_02E200", func_0002E264);

INCLUDE_ASM("nonmatchings/paf_02E200", func_0002E344);

INCLUDE_ASM("nonmatchings/paf_02E200", func_0002E3E4);

INCLUDE_ASM("nonmatchings/paf_02E200", func_0002E484);

INCLUDE_ASM("nonmatchings/paf_02E200", func_0002E884);

void scePaf_79E57CAF(void) {
    scePaf_E1242646();
}

void scePaf_548AA4E7(void) {
    scePaf_0F3527DD();
}

void func_0002E988(void) {
    scePaf_E1242646();
}

void func_0002E9A4(void) {
    scePaf_0F3527DD();
}

void func_0002E9C0(void) {
    func_0002EB0C();
}

