#include "common.h"
#include "mm_flash_decls.h"

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_00098888);

s32 func_000988C8(struct Unk_func_000988C8_0 *arg0) {
    s32 var_a0;
    struct Unk_func_000988C8_temp_v0 *temp_v0;

    temp_v0 = &arg0->unk3C;
    var_a0 = (arg0->unk3C << 0x10) | (temp_v0->unk1 << 8) | temp_v0->unk2;
    if (var_a0 == 0xFFFFFF) {
        var_a0 = (arg0->unk47 << 0x18) + (arg0->unk48 << 0x10) + (arg0->unk49 << 8) + arg0->unk4A;
    }
    return var_a0;
}

s32 func_0009892C(struct Unk_func_0009892C_0 *arg0) {
    struct Unk_func_0009892C_temp_a1 *temp_a1;

    temp_a1 = &arg0->unk3F;
    return (arg0->unk3F << 0x10) | (temp_a1->unk1 << 8) | temp_a1->unk2;
}

s8 func_00098950(struct Unk_func_00098950_0 *arg0) {
    return arg0->unk42;
}

s32 func_00098958(struct Unk_func_00098958_0 *arg0) {
    return arg0->unk43 + (arg0->unk44 << 8) + (arg0->unk45 << 0x10) + (arg0->unk46 << 0x18);
}

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_00098984);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_00098A10);

void func_00098A2C(struct Unk_func_00098A2C_0 *arg0, s8 arg1) {
    arg0->unk42 = arg1;
}

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_00098A34);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_00098A54);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_00098AE4);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_00098B74);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_00098BB8);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_00098C0C);

s32 func_00098C1C(struct Unk_func_00098C1C_0 *arg0) {
    struct Unk_func_00098C1C_temp_v1 *temp_v1;

    temp_v1 = &arg0->unk3C;
    return ((arg0->unk3C << 0x10) | (temp_v1->unk1 << 8) | temp_v1->unk2) == 0xFFFFFF;
}

void func_00098C50(struct Unk_func_00098C50_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
}

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_00098C5C);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_00098CAC);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_00098CD0);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_00098D44);

void func_00098DB8(s32 arg0) {
    func_00098E18();
    func_000986C0(arg0 + 0x2C);
}

void func_00098DE8(s32 arg0) {
    func_00098E18();
    func_000986C0(arg0 + 0x2C);
}

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_00098E18);

void func_00098E88(struct Unk_func_00098E88_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk8 = arg1;
    arg0->unkC = arg2;
}

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_00098E94);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_00098F58);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_00099580);

INCLUDE_RODATA("nonmatchings/mm_flash_098888", D_000C3D5C);

INCLUDE_RODATA("nonmatchings/mm_flash_098888", D_000C3D7C);

INCLUDE_RODATA("nonmatchings/mm_flash_098888", D_000C3D80);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_0009963C);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_000998CC);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_000999C0);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_00099A3C);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_00099AB8);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_00099B60);

void func_00099B74(struct Unk_func_00099B74_0 *arg0) {
    struct Unk_func_00099B74_var_v0 *var_v0;

    var_v0 = arg0->unk0;
    if (var_v0 != NULL) {
        do {
            var_v0->unk14 = 0;
            var_v0 = var_v0->unk0;
        } while (var_v0 != NULL);
    }
    sceHVNetfront_Module_D611E938((s32) ((u8 *)arg0 + 0x10), 0, 0x64);
    arg0->unk74 = 0;
}

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_00099BC0);

void func_00099C88(struct Unk_func_00099C88_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk8 = arg1;
    arg0->unkC = arg2;
}

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_00099C94);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_00099DC8);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_00099F9C);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_0009A534);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_0009A5D4);

void func_0009A650(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    struct Unk_func_0009A650_temp_v0 *temp_v0;

    temp_v0 = func_0009850C();
    temp_v0->unk8 = 4;
    func_0009B380(temp_v0, arg1, arg2);
    func_0009AE40(arg0, temp_v0);
}

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_0009A6BC);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_0009A7D0);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_0009A914);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_0009A924);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_0009A9BC);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_0009AB18);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_0009AC30);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_0009ACAC);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_0009ADD0);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_0009AE40);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_0009AEB0);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_0009B000);

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_0009B084);

void func_0009B0E4(struct Unk_func_0009B0E4_0 *arg0, s32 arg1) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk14 = 0;
    arg0->unk14 = func_0009B084(arg1);
    arg0->unk4 = arg1;
    sceHVNetfront_Module_D611E938((s32) ((u8 *)arg0 + 8), 0, 0xB);
}

INCLUDE_ASM("nonmatchings/mm_flash_098888", func_0009B13C);
