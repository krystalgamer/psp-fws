/* cflags: -Os */
#include "common.h"
#include "mcore_decls.h"

s32 func_00018D98(struct Unk_func_00018D98_0 *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;

    var_v0 = 4;
    if (arg0 != NULL) {
        temp_v0 = arg0->unk8;
        var_v1 = 0;
        if (temp_v0 != 0) {
            var_v1 = func_000182A0(temp_v0, arg1, arg2) != 0;
        }
        *arg3 = var_v1;
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_018D98", func_00018DE4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_018D98", func_00018E28);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_018D98", func_00018E58);

void func_00018EA0(void) {
    func_00018E58();
}

void func_00018EBC(s32 arg0, s32 arg1, s32 arg2) {
    if (func_00018DE4(arg0, arg2) == 0) {
        func_0001E20C(arg2, arg0, arg1);
    }
}

void func_00018F14(struct Unk_func_00018F14_0 *arg0, s32 arg1) {
    if (func_00018DE4(arg0->unk0, arg1) == 0) {
        func_0001E20C(arg1, arg0->unk0, arg0->unk4);
    }
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_018D98", func_00018F5C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_018D98", func_00018FF8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_018D98", func_000191E4);

void func_000192A4(void) {
    func_000191E4();
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_018D98", func_000192C0);

void func_00019400(void) {
    func_000192C0();
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_018D98", func_0001941C);

void func_0001945C(void) {
    func_0001941C();
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_018D98", func_00019478);

void func_0001950C(void) {
    func_00019478();
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_018D98", func_00019528);

void func_000195FC(void **arg0, void **arg1) {
    void *temp_v0;
    void *temp_v1;

    temp_v1 = *arg1;
    temp_v0 = *arg0;
    func_000029B4(M2C_FIELD(temp_v0, s32 *, 0), M2C_FIELD(temp_v0, s32 *, 4), M2C_FIELD(temp_v1, s32 *, 0), M2C_FIELD(temp_v1, s32 *, 4));
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_018D98", func_0001962C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_018D98", func_00019750);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_018D98", func_00019834);

void func_00019934(struct Unk_func_00019934_0 *arg0, s32 arg1) {
    if ((func_00018E28(1, arg1) == 0) && (func_00018E58(arg0->unk0, arg1) == 0) && (func_00018DE4(0, arg1) == 0) && (func_00018DE4(0, arg1) == 0) && (func_00018E58(arg0->unk4, arg1) == 0) && (func_00018E58(arg0->unk8, arg1) == 0)) {
        func_00018F14(arg0->unkC, arg1);
    }
}

