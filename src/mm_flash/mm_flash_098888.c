#include "common.h"
#include "mm_flash_decls.h"

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_00098888);

s32 func_000988C8(void *arg0) {
    s32 var_a0;
    void *temp_v0;

    temp_v0 = arg0 + 0x3C;
    var_a0 = (M2C_FIELD(arg0, u8 *, 0x3C) << 0x10) | (M2C_FIELD(temp_v0, u8 *, 1) << 8) | M2C_FIELD(temp_v0, u8 *, 2);
    if (var_a0 == 0xFFFFFF) {
        var_a0 = (M2C_FIELD(arg0, u8 *, 0x47) << 0x18) + (M2C_FIELD(arg0, u8 *, 0x48) << 0x10) + (M2C_FIELD(arg0, u8 *, 0x49) << 8) + M2C_FIELD(arg0, u8 *, 0x4A);
    }
    return var_a0;
}

s32 func_0009892C(void *arg0) {
    void *temp_a1;

    temp_a1 = arg0 + 0x3F;
    return (M2C_FIELD(arg0, u8 *, 0x3F) << 0x10) | (M2C_FIELD(temp_a1, u8 *, 1) << 8) | M2C_FIELD(temp_a1, u8 *, 2);
}

s8 func_00098950(void *arg0) {
    return M2C_FIELD(arg0, s8 *, 0x42);
}

s32 func_00098958(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x43) + (M2C_FIELD(arg0, u8 *, 0x44) << 8) + (M2C_FIELD(arg0, u8 *, 0x45) << 0x10) + (M2C_FIELD(arg0, u8 *, 0x46) << 0x18);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_00098984);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_00098A10);

void func_00098A2C(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x42) = arg1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_00098A34);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_00098A54);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_00098AE4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_00098B74);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_00098BB8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_00098C0C);

s32 func_00098C1C(void *arg0) {
    void *temp_v1;

    temp_v1 = arg0 + 0x3C;
    return ((M2C_FIELD(arg0, u8 *, 0x3C) << 0x10) | (M2C_FIELD(temp_v1, u8 *, 1) << 8) | M2C_FIELD(temp_v1, u8 *, 2)) == 0xFFFFFF;
}

void func_00098C50(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_00098C5C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_00098CAC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_00098CD0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_00098D44);

void func_00098DB8(s32 arg0) {
    func_00098E18();
    func_000986C0(arg0 + 0x2C);
}

void func_00098DE8(s32 arg0) {
    func_00098E18();
    func_000986C0(arg0 + 0x2C);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_00098E18);

void func_00098E88(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    M2C_FIELD(arg0, s32 *, 0xC) = arg2;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_00098E94);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_00098F58);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_00099580);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", D_000C3D5C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", D_000C3D7C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", D_000C3D80);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_0009963C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_000998CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_000999C0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_00099A3C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_00099AB8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_00099B60);

void func_00099B74(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0);
    if (var_v0 != NULL) {
        do {
            M2C_FIELD(var_v0, s32 *, 0x14) = 0;
            var_v0 = M2C_FIELD(var_v0, void **, 0);
        } while (var_v0 != NULL);
    }
    sceHVNetfront_Module_D611E938((s32) (arg0 + 0x10), 0, 0x64);
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_00099BC0);

void func_00099C88(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    M2C_FIELD(arg0, s32 *, 0xC) = arg2;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_00099C94);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_00099DC8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_00099F9C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_0009A534);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_0009A5D4);

void func_0009A650(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void *temp_v0;

    temp_v0 = func_0009850C();
    M2C_FIELD(temp_v0, s8 *, 8) = 4;
    func_0009B380(temp_v0, arg1, arg2);
    func_0009AE40(arg0, temp_v0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_0009A6BC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_0009A7D0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_0009A914);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_0009A924);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_0009A9BC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_0009AB18);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_0009AC30);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_0009ACAC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_0009ADD0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_0009AE40);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_0009AEB0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_0009B000);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_0009B084);

void func_0009B0E4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = func_0009B084(arg1);
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    sceHVNetfront_Module_D611E938((s32) (arg0 + 8), 0, 0xB);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_098888", func_0009B13C);

