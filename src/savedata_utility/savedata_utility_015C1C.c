/* cflags: -Os */
#include "common.h"
#include "savedata_utility_decls.h"

void func_00015C1C(s32 arg0, s32 arg1, s32 arg2) {
    func_00013360(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00025300;
    func_0000AC4C(arg0 + 0x20, 0);
    M2C_FIELD(arg0, s32 *, 0x24) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    func_00015E9C(arg0);
}

void func_00015C74(s32 arg0, s32 arg1, s32 arg2) {
    func_00013360(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00025300;
    func_0000AC4C(arg0 + 0x20, 0);
    M2C_FIELD(arg0, s32 *, 0x24) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    func_00015E9C(arg0);
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", func_00015CCC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", func_00015D64);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", func_00015DFC);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", D_00025288);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", D_000252A0);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", D_000252A8);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", D_000252B8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", func_00015E9C);

void func_00015F1C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", func_00015F24);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", func_00015FD0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", func_00016138);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", func_000161D4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", func_00016390);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", func_000163E0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", func_0001644C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", func_000164B8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", func_00016548);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", func_000165D8);

void func_00016678(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_00017068(arg0 + 0xC);
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", func_000166A4);

void func_0001672C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", func_00016734);

s32 func_00016828(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", func_00016830);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", func_000169EC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", func_00016A44);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", func_00016A78);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", func_00016BBC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", func_00016C7C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", func_00016CE0);

s32 func_00016D54(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", func_00016D5C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", func_00016E94);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", func_00016EC0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", func_00016F4C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_015C1C", func_00016FD4);

void func_00017010(void **arg0) {
    void *temp_s0;
    void *var_a0;
    void *var_v0;

    var_a0 = *arg0;
    var_v0 = M2C_FIELD(var_a0, void **, 4);
    if (var_v0 != var_a0) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            scePaf_7EC15225(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    scePaf_7EC15225(var_a0);
}

