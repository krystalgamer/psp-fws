/* cflags: -Os */
#include "common.h"
#include "mm_flash_decls.h"

s32 func_0004AC08(struct Unk_func_0004AC08_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a2;

    if (arg1 != 0) {
        temp_a2 = arg0->unk10;
        sceHVNetfront_Module_1A02495A(arg1, arg0->unk4 + (arg0->unkC * temp_a2), arg2 * temp_a2, arg3);
    }
    arg0->unkC = (s32) (arg0->unkC + arg2);
    return arg2;
}

INCLUDE_ASM("nonmatchings/mm_flash_04AC08", func_0004AC70);

INCLUDE_ASM("nonmatchings/mm_flash_04AC08", func_0004AE14);

INCLUDE_ASM("nonmatchings/mm_flash_04AC08", func_0004AEC0);

INCLUDE_ASM("nonmatchings/mm_flash_04AC08", func_0004B034);

s32 func_0004B068(void) {
    return 0;
}

void func_0004B070(M2C_UNK **arg0) {
    *arg0 = &D_000BDB40;
}

void func_0004B080(M2C_UNK **arg0) {
    *arg0 = &D_000BDB40;
    func_00090730(*func_0009F1C0(), (s32) arg0, 0);
}

void func_0004B0C0(M2C_UNK **arg0) {
    *arg0 = &D_000BDB40;
    func_00090730(*func_0009F1C0(), (s32) arg0, 0);
}

void func_0004B100(M2C_UNK **arg0) {
    *arg0 = &D_000BDB40;
}

void func_0004B110(M2C_UNK **arg0) {
    *arg0 = &D_000BDB40;
    func_00090730(*func_0009F1C0(), (s32) arg0, 0);
}

void func_0004B150(M2C_UNK **arg0) {
    *arg0 = &D_000BDB40;
}

void func_0004B160(struct Unk_func_0004B160_0 *arg0, s32 arg1) {
    arg0->unk8 = arg1;
}
