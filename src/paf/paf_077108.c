#include "common.h"
#include "paf_decls.h"

u32 func_00077108(struct Unk_func_00077108_0 *arg0) {
    u16 temp_a0;
    u32 temp_v1;
    u32 var_a1;
    struct Unk_func_00077108_temp_s0 *temp_s0;

    temp_s0 = (u8 *)arg0 + 0x20;
    var_a1 = arg0->unk15C->unk6CC();
    if (var_a1 < (u32) temp_s0->unk14) {
        temp_a0 = temp_s0->unk9A;
        temp_v1 = temp_a0 * 8;
        var_a1 = ((u32) ((var_a1 + temp_v1) - 1) / temp_v1) * temp_a0 * 8;
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/paf_077108", func_00077178);

INCLUDE_ASM("nonmatchings/paf_077108", func_0007721C);

INCLUDE_RODATA("nonmatchings/paf_077108", D_0018F984);

INCLUDE_ASM("nonmatchings/paf_077108", func_00077348);

INCLUDE_ASM("nonmatchings/paf_077108", func_00077528);

INCLUDE_ASM("nonmatchings/paf_077108", func_00077740);

INCLUDE_ASM("nonmatchings/paf_077108", func_0007782C);

INCLUDE_ASM("nonmatchings/paf_077108", func_00077A40);

INCLUDE_ASM("nonmatchings/paf_077108", func_00077ACC);

INCLUDE_ASM("nonmatchings/paf_077108", func_00077B58);

INCLUDE_ASM("nonmatchings/paf_077108", func_00077EA4);

INCLUDE_ASM("nonmatchings/paf_077108", func_00077FC0);

INCLUDE_ASM("nonmatchings/paf_077108", func_00078304);

INCLUDE_ASM("nonmatchings/paf_077108", func_00078390);

INCLUDE_RODATA("nonmatchings/paf_077108", D_0018FA88);

INCLUDE_RODATA("nonmatchings/paf_077108", D_0018FA98);

INCLUDE_RODATA("nonmatchings/paf_077108", D_0018FACC);

INCLUDE_RODATA("nonmatchings/paf_077108", D_0018FAF8);

INCLUDE_RODATA("nonmatchings/paf_077108", D_0018FB08);

INCLUDE_RODATA("nonmatchings/paf_077108", D_0018FB40);

INCLUDE_RODATA("nonmatchings/paf_077108", D_0018FB78);

INCLUDE_RODATA("nonmatchings/paf_077108", D_0018FBC0);

INCLUDE_RODATA("nonmatchings/paf_077108", D_0018FBE0);

INCLUDE_RODATA("nonmatchings/paf_077108", D_0018FBE8);

INCLUDE_RODATA("nonmatchings/paf_077108", D_0018FBF4);

INCLUDE_RODATA("nonmatchings/paf_077108", D_0018FC2C);

INCLUDE_RODATA("nonmatchings/paf_077108", D_0018FC58);

INCLUDE_RODATA("nonmatchings/paf_077108", D_0018FC88);

INCLUDE_RODATA("nonmatchings/paf_077108", D_0018FC98);

INCLUDE_RODATA("nonmatchings/paf_077108", D_0018FCA8);

INCLUDE_RODATA("nonmatchings/paf_077108", D_0018FCD0);

INCLUDE_RODATA("nonmatchings/paf_077108", D_0018FCE0);

INCLUDE_ASM("nonmatchings/paf_077108", func_0007841C);

INCLUDE_ASM("nonmatchings/paf_077108", func_00078484);

INCLUDE_ASM("nonmatchings/paf_077108", func_00078650);

INCLUDE_ASM("nonmatchings/paf_077108", func_000786B4);

INCLUDE_ASM("nonmatchings/paf_077108", func_00078780);

INCLUDE_ASM("nonmatchings/paf_077108", func_000787F4);

INCLUDE_ASM("nonmatchings/paf_077108", func_000789BC);

INCLUDE_ASM("nonmatchings/paf_077108", func_00078A08);

INCLUDE_ASM("nonmatchings/paf_077108", func_00078B00);

INCLUDE_ASM("nonmatchings/paf_077108", func_00078EF0);

INCLUDE_ASM("nonmatchings/paf_077108", func_00079080);

INCLUDE_ASM("nonmatchings/paf_077108", func_00079150);

INCLUDE_ASM("nonmatchings/paf_077108", func_00079268);

INCLUDE_ASM("nonmatchings/paf_077108", func_00079358);

INCLUDE_ASM("nonmatchings/paf_077108", func_000793B4);

INCLUDE_ASM("nonmatchings/paf_077108", func_00079498);

INCLUDE_ASM("nonmatchings/paf_077108", func_00079500);

INCLUDE_ASM("nonmatchings/paf_077108", func_0007956C);

INCLUDE_ASM("nonmatchings/paf_077108", func_000796FC);

INCLUDE_ASM("nonmatchings/paf_077108", func_00079850);

INCLUDE_ASM("nonmatchings/paf_077108", func_00079A28);

INCLUDE_ASM("nonmatchings/paf_077108", func_00079A84);

INCLUDE_ASM("nonmatchings/paf_077108", func_00079B68);

INCLUDE_ASM("nonmatchings/paf_077108", func_00079BD0);

INCLUDE_ASM("nonmatchings/paf_077108", func_00079C3C);

void func_00079E14(void) {
}

INCLUDE_ASM("nonmatchings/paf_077108", func_00079E1C);

