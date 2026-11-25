/* cflags: -Os */
#include "common.h"
#include "mm_flash_decls.h"

void func_0001E6A0(struct Unk_func_0001E6A0_0 *arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;
    s32 var_v0;

    temp_s1 = func_00090648(*func_0009F1C0(), 0x14, 0);
    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = sceHVNetfront_Module_15875ED4(arg1);
    }
    func_0001F990(temp_s1, arg1, var_v0, arg2 < 6);
    arg0->unk0 = temp_s1;
    arg0->unk4 = 0;
}

void func_0001E728(struct Unk_func_0001E728_0 *arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;
    s32 var_v0;

    temp_s1 = func_00090648(*func_0009F1C0(), 0x14, 0);
    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = sceHVNetfront_Module_15875ED4(arg1);
    }
    func_0001F990(temp_s1, arg1, var_v0, arg2 < 6);
    arg0->unk0 = temp_s1;
    arg0->unk4 = 0;
}

INCLUDE_ASM("nonmatchings/mm_flash_01E6A0", func_0001E7B0);

INCLUDE_ASM("nonmatchings/mm_flash_01E6A0", func_0001E890);

void func_0001E994(struct Unk_func_0001E994_0 *arg0, void **arg1) {
    struct Unk_func_0001E994_temp_a1 *temp_a1;

    temp_a1 = *arg1;
    arg0->unk4 = 0;
    arg0->unk0 = temp_a1;
    if (temp_a1 != NULL) {
        temp_a1->unk8 = (s32) (temp_a1->unk8 + 1);
    }
}

void func_0001E9B8(struct Unk_func_0001E9B8_0 *arg0, s32 arg1) {
    arg0->unk0 = arg1;
    arg0->unk4 = 0;
}

void func_0001E9C4(struct Unk_func_0001E9C4_0 *arg0, s32 arg1) {
    arg0->unk0 = arg1;
    arg0->unk4 = 0;
}
