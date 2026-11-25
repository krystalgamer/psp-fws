/* cflags: -O1 */
#include "common.h"
#include "paf_decls.h"

s32 func_00049B9C(struct Unk_func_00049B9C_0 *arg0) {
    s32 var_a1;

    var_a1 = 0;
    if (arg0->unk11 != 0) {
        var_a1 = 1;
        if ((arg0->unk8 * arg0->unkC) != 0) {
            arg0->unk11 = 0U;
            arg0->unk10 = 0;
        }
    }
    return var_a1;
}

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_049B9C", func_000388C4);
#else
INCLUDE_ASM("nonmatchings/paf_049B9C", func_00049BD0);
#endif

INCLUDE_ASM("nonmatchings/paf_049B9C", func_00049CB0);

INCLUDE_ASM("nonmatchings/paf_049B9C", func_00049D58);

#if FW_VERSION == 100
void func_00049E00(struct Unk_func_00049E00_0 *arg0) {
    arg0->unk50 = -1;
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk10 = 0;
    arg0->unk14 = 0;
    arg0->unk18 = 0;
    arg0->unk1C = 0;
    arg0->unk20 = 0;
    arg0->unk24 = 0;
    arg0->unk28 = 0;
    arg0->unk2C = 0;
    arg0->unk34 = 0;
    arg0->unk38 = -1;
    arg0->unk3C = 0;
    arg0->unk40 = 0;
    arg0->unk44 = 0;
    arg0->unk48 = 0;
    arg0->unk4A = 0;
    arg0->unk4C = 0;
}
#else
void func_00049E00(struct Unk_func_00049E00_0 *arg0) {
    arg0->unk50 = -1;
    arg0->unk30 = 0;
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk10 = 0;
    arg0->unk14 = 0;
    arg0->unk18 = 0;
    arg0->unk1C = 0;
    arg0->unk20 = 0;
    arg0->unk24 = 0;
    arg0->unk28 = 0;
    arg0->unk2C = 0;
    arg0->unk34 = 0;
    arg0->unk38 = -1;
    arg0->unk3C = 0;
    arg0->unk40 = 0;
    arg0->unk44 = 0;
    arg0->unk48 = 0;
    arg0->unk4A = 0;
    arg0->unk4C = 0;
}

INCLUDE_RODATA("nonmatchings/paf_049B9C", D_00171564);

INCLUDE_RODATA("nonmatchings/paf_049B9C", D_00171580);

INCLUDE_RODATA("nonmatchings/paf_049B9C", D_0017158C);

INCLUDE_RODATA("nonmatchings/paf_049B9C", D_001715A8);

INCLUDE_RODATA("nonmatchings/paf_049B9C", D_001715C4);

INCLUDE_RODATA("nonmatchings/paf_049B9C", D_001715E0);
#endif

INCLUDE_ASM("nonmatchings/paf_049B9C", func_00049E60);

INCLUDE_ASM("nonmatchings/paf_049B9C", func_00049EB8);

INCLUDE_ASM("nonmatchings/paf_049B9C", func_00049F68);

INCLUDE_ASM("nonmatchings/paf_049B9C", func_0004A074);

INCLUDE_ASM("nonmatchings/paf_049B9C", func_0004A108);

INCLUDE_ASM("nonmatchings/paf_049B9C", func_0004A158);

void func_0004A1F8(M2C_UNK **arg0) {
    func_00044154(arg0);
    *arg0 = &D_00171640;
}

void func_0004A228(M2C_UNK **arg0) {
    func_00044154(arg0);
    *arg0 = &D_00171640;
}
