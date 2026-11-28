/* compiler[271]: 1.9.2 */
/* cflags[271]: -O1 -mext */
/* cflags: -O1 */
#include "common.h"
#include "mm_flash_decls.h"

void func_00043004(struct Unk_func_00043004_0 *arg0, s32 arg1) {
    arg0->unk0 = arg1;
    arg0->unk10 = 0;
    arg0->unk8 = 0;
    arg0->unk14 = 0;
    arg0->unk18 = 0;
    arg0->unkC = 0;
}

void func_00043020(struct Unk_func_00043020_0 *arg0, s32 arg1) {
    arg0->unk0 = arg1;
    arg0->unk10 = 0;
    arg0->unk8 = 0;
    arg0->unk14 = 0;
    arg0->unk18 = 0;
    arg0->unkC = 0;
}

void func_0004303C(struct Unk_func_0004303C_0 *arg0) {
    void *temp_v0;
    void *temp_v0_2;
    struct Unk_func_0004303C_var_v1 *var_v1;
    struct Unk_func_0004303C_var_v1_2 *var_v1_2;

    var_v1 = arg0->unk14;
    if (var_v1 != NULL) {
        do {
            temp_v0 = var_v1->unk50;
            var_v1->unk48 = 0;
            var_v1 = temp_v0;
            arg0->unk14 = temp_v0;
        } while (temp_v0 != NULL);
    }
    var_v1_2 = arg0->unkC;
    if (var_v1_2 != NULL) {
        do {
            temp_v0_2 = var_v1_2->unk5C;
            var_v1_2->unk44 = 0;
            var_v1_2 = temp_v0_2;
            arg0->unkC = temp_v0_2;
        } while (temp_v0_2 != NULL);
    }
    arg0->unk8 = 0;
}

void func_00043084(struct Unk_func_00043084_0 *arg0) {
    void *temp_v0;
    void *temp_v0_2;
    struct Unk_func_00043084_var_v1 *var_v1;
    struct Unk_func_00043084_var_v1_2 *var_v1_2;

    var_v1 = arg0->unk14;
    if (var_v1 != NULL) {
        do {
            temp_v0 = var_v1->unk50;
            var_v1->unk48 = 0;
            var_v1 = temp_v0;
            arg0->unk14 = temp_v0;
        } while (temp_v0 != NULL);
    }
    var_v1_2 = arg0->unkC;
    if (var_v1_2 != NULL) {
        do {
            temp_v0_2 = var_v1_2->unk5C;
            var_v1_2->unk44 = 0;
            var_v1_2 = temp_v0_2;
            arg0->unkC = temp_v0_2;
        } while (temp_v0_2 != NULL);
    }
    arg0->unk8 = 0;
}

void func_000430CC(struct Unk_func_000430CC_0 *arg0) {
    struct Unk_func_000430CC_var_s0 *var_s0;

    var_s0 = arg0->unkC;
    if (var_s0 != NULL) {
        do {
            func_00042B8C(var_s0);
            var_s0 = var_s0->unk5C;
        } while (var_s0 != NULL);
    }
}

INCLUDE_ASM("nonmatchings/mm_flash_043004", func_00043104);

INCLUDE_ASM("nonmatchings/mm_flash_043004", func_00043218);

INCLUDE_ASM("nonmatchings/mm_flash_043004", func_000432B8);

INCLUDE_ASM("nonmatchings/mm_flash_043004", func_00043444);

INCLUDE_ASM("nonmatchings/mm_flash_043004", func_00043484);

void func_000434BC(void) {
    func_000435EC();
}

void func_000434D8(void) {
    func_000435EC();
}
