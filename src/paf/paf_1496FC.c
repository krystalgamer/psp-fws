/* cflags: -Os */
#include "common.h"
#include "paf_decls.h"

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_1496FC", func_001496FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_1496FC", func_0014971C);

s32 func_001497DC(s32 arg0, s32 arg1) {
    return arg0 + (arg1 * 8) + 4;
}

s32 func_001497EC(s32 *arg0, s32 arg1) {
    s32 temp_v1;

    temp_v1 = *arg0;
    return (temp_v1 == 0) ? 0 : (temp_v1 + arg1);
}

void func_001497FC(s32 arg0, s32 arg1, s32 arg2) {
    func_00149960(arg0, arg1, 8, arg2);
}

s32 func_0014981C(void *arg0) {
    s32 var_v0;

    var_v0 = -1;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 (**)(s32, M2C_UNK), 0xC)(M2C_FIELD(arg0, s32 *, 0), 1);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_1496FC", func_0014984C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_1496FC", func_00149880);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_1496FC", func_00149914);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_1496FC", func_00149960);

void func_0014999C(s32 arg0, s32 arg1) {
    func_00149960(arg0, 0, 0x1C, arg1);
}

void func_001499C0(s32 arg0, s32 arg1, s32 arg2) {
    func_00149960(arg0, arg1, 8, arg2);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_1496FC", func_001499E0);

s32 func_00149A44(s32 arg0, s32 arg1, s32 arg2) {
    return func_00149880(arg0, arg1, 0x41, arg2) != 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_1496FC", func_00149A68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_1496FC", func_00149B14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_1496FC", func_00149C0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_1496FC", func_00149D24);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_1496FC", func_00149E38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_1496FC", func_00149F10);

void func_0014A000(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1F80) = 0;
    func_00149F10((s32) arg0, arg1, 0);
}

void func_0014A020(void *arg0, s32 arg1) {
    s32 temp_a2;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0x1F80) + 1;
    M2C_FIELD(arg0, s32 *, 0x1F80) = temp_a2;
    func_00149F10((s32) arg0, arg1, temp_a2);
}

