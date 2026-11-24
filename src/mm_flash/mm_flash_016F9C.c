/* cflags: -Os */
#include "common.h"
#include "mm_flash_decls.h"

void func_00016F9C(struct Unk_func_00016F9C_0 *arg0, s32 arg1) {
    s32 temp_s1;
    s32 temp_v0;

    temp_v0 = func_0001E044(arg1);
    if (temp_v0 != 0) {
        temp_s1 = arg0->unk10;
        if (temp_s1 != 0) {
            func_00090730(*func_0009F1C0(), temp_s1, 0);
        }
        arg0->unk10 = temp_v0;
        func_00016E90((s32) arg0);
    }
}

void func_0001700C(struct Unk_func_0001700C_0 *arg0) {
    func_000170A8((s32) ((u8 *)arg0 + 0x30), *arg0->unk20);
    func_000170A8((s32) ((u8 *)arg0 + 0x38), *arg0->unk20);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_016F9C", func_00017050);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_016F9C", func_000170A8);

s32 func_00017118(struct Unk_func_00017118_0 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (arg0->unk0 == 0) {
        var_v1 = arg0->unk4 == 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_016F9C", func_00017134);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_016F9C", func_000171C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_016F9C", func_00017254);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_016F9C", func_000172E0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_016F9C", func_0001736C);

void func_000177F4(struct Unk_func_000177F4_0 *arg0, s32 arg1) {
    s32 var_a2;
    s32 var_v1;

    arg0->unk94 = arg1;
    var_a2 = 0;
    if (arg0->unk170 > 0) {
        var_v1 = 0;
        do {
            var_a2 += 1;
            M2C_FIELD((arg0->unk160 + var_v1), s32 *, 0x4C) = arg1;
            var_v1 += 0x64;
        } while (var_a2 < arg0->unk170);
    }
}

void func_00017830(struct Unk_func_00017830_0 *arg0, s32 arg1) {
    func_00017884((s32) arg0, 0, arg0->unk268);
    func_000133D0((s32) arg0, arg1, sceHVNetfront_Module_15875ED4(arg1), 0);
}

