/* cflags: -O1 */
#include "common.h"
#include "mm_flash_decls.h"

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_043004", func_00043004);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_043004", func_00043020);

void func_0004303C(void *arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *var_v1;
    void *var_v1_2;

    var_v1 = M2C_FIELD(arg0, void **, 0x14);
    if (var_v1 != NULL) {
        do {
            temp_v0 = M2C_FIELD(var_v1, void **, 0x50);
            M2C_FIELD(var_v1, s32 *, 0x48) = 0;
            var_v1 = temp_v0;
            M2C_FIELD(arg0, void **, 0x14) = temp_v0;
        } while (temp_v0 != NULL);
    }
    var_v1_2 = M2C_FIELD(arg0, void **, 0xC);
    if (var_v1_2 != NULL) {
        do {
            temp_v0_2 = M2C_FIELD(var_v1_2, void **, 0x5C);
            M2C_FIELD(var_v1_2, s32 *, 0x44) = 0;
            var_v1_2 = temp_v0_2;
            M2C_FIELD(arg0, void **, 0xC) = temp_v0_2;
        } while (temp_v0_2 != NULL);
    }
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

void func_00043084(void *arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *var_v1;
    void *var_v1_2;

    var_v1 = M2C_FIELD(arg0, void **, 0x14);
    if (var_v1 != NULL) {
        do {
            temp_v0 = M2C_FIELD(var_v1, void **, 0x50);
            M2C_FIELD(var_v1, s32 *, 0x48) = 0;
            var_v1 = temp_v0;
            M2C_FIELD(arg0, void **, 0x14) = temp_v0;
        } while (temp_v0 != NULL);
    }
    var_v1_2 = M2C_FIELD(arg0, void **, 0xC);
    if (var_v1_2 != NULL) {
        do {
            temp_v0_2 = M2C_FIELD(var_v1_2, void **, 0x5C);
            M2C_FIELD(var_v1_2, s32 *, 0x44) = 0;
            var_v1_2 = temp_v0_2;
            M2C_FIELD(arg0, void **, 0xC) = temp_v0_2;
        } while (temp_v0_2 != NULL);
    }
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

void func_000430CC(void *arg0) {
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 0xC);
    if (var_s0 != NULL) {
        do {
            func_00042B8C(var_s0);
            var_s0 = M2C_FIELD(var_s0, void **, 0x5C);
        } while (var_s0 != NULL);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_043004", func_00043104);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_043004", func_00043218);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_043004", func_000432B8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_043004", func_00043444);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_043004", func_00043484);

void func_000434BC(void) {
    func_000435EC();
}

void func_000434D8(void) {
    func_000435EC();
}

