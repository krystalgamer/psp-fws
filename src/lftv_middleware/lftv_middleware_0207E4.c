/* cflags: -Os -frename-registers */
#include "common.h"
#include "lftv_middleware_decls.h"

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_000207E4);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00020874);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_000208C8);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00020908);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00020948);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00020990);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_000209DC);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00020B14);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00020BE8);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00020CBC);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00020D1C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0207E4", D_000551E8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0207E4", D_00055208);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0207E4", D_00055228);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0207E4", D_00055240);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00020DEC);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00020EDC);

void func_00020F1C(M2C_UNK **arg0) {
    *arg0 = &D_00055518;
    func_00020FCC((s32) arg0);
}

void func_00020F44(M2C_UNK **arg0) {
    *arg0 = &D_00055518;
    func_00020FCC((s32) arg0);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00020F6C);

s32 func_00020FA4(struct Unk_func_00020FA4_0 *arg0, s32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 4;
    if (((arg1 == 0) | (arg2 == 0)) == 0) {
        var_v0 = 0;
        arg0->unk18 = arg1;
        arg0->unk1C = arg2;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00020FCC);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_0002106C);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_000211E8);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00021490);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_000215F0);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00021754);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_000217E0);
#endif

INCLUDE_RODATA("nonmatchings/lftv_middleware_0207E4", D_000552E0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0207E4", D_000552F8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0207E4", D_00055344);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0207E4", D_000553B4);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0207E4", D_00055430);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0207E4", D_00055480);

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_000217E0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0207E4", D_0007BB28);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00021868);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00021A70);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00021B24);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00021C04);

void func_00021C94(struct Unk_func_00021C94_0 *arg0, s32 arg1, s32 arg2) {
    func_00022700(arg0, arg1);
    arg0->unk14 = arg2;
    arg0->unk0 = &D_00055558;
    arg0->unk18 = 0;
    arg0->unk8 = 0;
}

void func_00021CDC(struct Unk_func_00021CDC_0 *arg0, s32 arg1, s32 arg2) {
    func_00022700(arg0, arg1);
    arg0->unk14 = arg2;
    arg0->unk0 = &D_00055558;
    arg0->unk18 = 0;
    arg0->unk8 = 0;
}

INCLUDE_RODATA("nonmatchings/lftv_middleware_0207E4", D_00055518);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0207E4", D_00055538);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00021D24);

void func_000221E8(void) {
}

void func_000221F0(void) {
}

void func_000221F8(s32 **arg0) {
    *arg0 = &D_00055580;
    func_00043840((s32) arg0);
    scePaf_4E67BB08(arg0);
}

void func_00022230(s32 **arg0) {
    *arg0 = &D_00055580;
    func_00043840((s32) arg0);
}

void func_00022258(struct Unk_func_00022258_0 *arg0, s32 arg1) {
    func_0003E42C(arg0, (s32) &D_000555AC, (s32) &D_000555A8);
    arg0->unk18 = arg1;
    arg0->unk0 = &D_00055590;
}

void func_000222A8(struct Unk_func_000222A8_0 *arg0, s32 arg1) {
    func_0003E42C(arg0, (s32) &D_000555AC, (s32) &D_000555A8);
    arg0->unk18 = arg1;
    arg0->unk0 = &D_00055590;
}

void func_000222F8(struct Unk_func_000222F8_0 *arg0, s32 arg1, s32 arg2) {
    func_00022DF0(arg0->unk18, arg1, arg2);
}

void func_00022314(M2C_UNK **arg0) {
    *arg0 = &D_00055590;
    func_0003E64C((s32) arg0);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_0002233C);

s32 func_00022374(void) {
    return 1;
}

s32 func_0002237C(void) {
    return -1;
}

s32 func_00022384(void) {
    return -1;
}

void func_0002238C(M2C_UNK **arg0) {
    func_00043FA4();
    *arg0 = &D_000555C0;
}

void func_000223BC(M2C_UNK **arg0) {
    func_00043FA4();
    *arg0 = &D_000555C0;
}

void func_000223EC(M2C_UNK **arg0) {
    func_00044064();
    *arg0 = &D_000555C0;
}

void func_0002241C(M2C_UNK **arg0) {
    func_00044064();
    *arg0 = &D_000555C0;
}

void func_0002244C(s32 arg0) {
    func_00044938(func_000441AC(arg0));
}

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00022470);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_0002250C);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_0002257C);

void func_00022630(M2C_UNK **arg0) {
    *arg0 = &D_000555C0;
    func_00044124((s32) arg0);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00022658);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00022690);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_000226C8);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00022700);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00022754);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_000227A8);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_000227E8);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00022828);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00022870);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00022988);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00022A10);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00022AD0);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00022B90);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00022C78);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00022DF0);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00022E74);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_00022F8C);

INCLUDE_ASM("nonmatchings/lftv_middleware_0207E4", func_0002303C);
