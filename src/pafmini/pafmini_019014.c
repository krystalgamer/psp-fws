/* cflags: -O1 */
#include "common.h"
#include "pafmini_decls.h"

s32 func_00019014(struct Unk_func_00019014_0 *arg0) {
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

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_019014", func_000381E0);
#else
INCLUDE_ASM("nonmatchings/pafmini_019014", func_00019048);
#endif

INCLUDE_ASM("nonmatchings/pafmini_019014", func_00019128);

INCLUDE_ASM("nonmatchings/pafmini_019014", func_000191D0);

#if FW_VERSION == 100 || FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pafmini_019014", func_00019278);
#endif

#if FW_VERSION == 282
void func_00019278(struct Unk_func_00019278_0 *arg0) {
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
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00019278(struct Unk_func_00019278_0 *arg0) {
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
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_019014", D_000D1D54);

INCLUDE_RODATA("nonmatchings/pafmini_019014", D_000D1D70);

INCLUDE_RODATA("nonmatchings/pafmini_019014", D_000D1D7C);

INCLUDE_RODATA("nonmatchings/pafmini_019014", D_000D1D98);

INCLUDE_RODATA("nonmatchings/pafmini_019014", D_000D1DB4);

INCLUDE_RODATA("nonmatchings/pafmini_019014", D_000D1DD0);
#endif

INCLUDE_ASM("nonmatchings/pafmini_019014", func_000192D8);

INCLUDE_ASM("nonmatchings/pafmini_019014", func_00019330);

INCLUDE_ASM("nonmatchings/pafmini_019014", func_000193E0);

INCLUDE_ASM("nonmatchings/pafmini_019014", func_000194EC);

INCLUDE_ASM("nonmatchings/pafmini_019014", func_00019580);

INCLUDE_ASM("nonmatchings/pafmini_019014", func_000195D0);

void func_00019670(M2C_UNK **arg0) {
    func_00013B68(arg0);
    *arg0 = &D_000D1E30;
}

void func_000196A0(M2C_UNK **arg0) {
    func_00013B68(arg0);
    *arg0 = &D_000D1E30;
}
