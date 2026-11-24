#include "common.h"
#include "paf_decls.h"

void func_00048F0C(struct Unk_func_00048F0C_0 *arg0) {
    struct Unk_func_00048F0C_temp_v1 *temp_v1;

    temp_v1 = arg0->unk18;
    temp_v1->unk18 = (s32) (M2C_FIELD(temp_v1->unk14, s32 *, 4) - temp_v1->unk4);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00048F28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", scePaf_6DFFCAAE);

s32 scePaf_7796B70B(void **arg0, s32 arg1) {
    void *temp_a0;

    temp_a0 = *arg0;
    M2C_FIELD(temp_a0, s32 *, 0x174) = arg1;
    func_00084A70(temp_a0, temp_a0 + 0x174, 1);
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", scePaf_4EC4EEC6);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00049138);

void func_00049170(struct Unk_func_00049170_0 *arg0) {
    M2C_FIELD(arg0->unk18, s32 *, 0x24) = 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00049180);

void func_000491C8(void) {
}

void func_000491D0(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000491D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004929C);

void scePaf_02A6AA18(void) {
    func_0004929C();
}

