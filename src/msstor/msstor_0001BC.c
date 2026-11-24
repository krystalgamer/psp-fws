/* cflags: -Os */
#include "common.h"
#include "msstor_decls.h"

s32 func_000001BC(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_v1;

    var_v1 = -0xD;
    if (D_00009B50->unk18 != 0) {
        var_v1 = -0xC;
        if (D_00009B50->unk1C == 0) {
            var_v1 = D_00009888->unk4(D_00009B50, arg0 + D_00009B50->unk4, arg1, arg2);
        }
    }
    return var_v1;
}

s32 func_00000220(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_t0;

    var_t0 = -0xD;
    if (D_00009B50->unk18 != 0) {
        var_t0 = -0xC;
        if (D_00009B50->unk1C == 0) {
            var_t0 = D_00009888->unk4(D_00009B50, arg0, arg1, arg2);
        }
    }
    return var_t0;
}

void func_00000288(void) {
    D_00009888->unk10(D_00009B50);
}

void func_000002B8(void) {
    D_00009888->unk14(D_00009B50);
}

void func_000002E8(void) {
    D_00009888->unk18(D_00009B50);
}

void func_00000318(s32 arg0, s32 arg1, s32 arg2) {
    func_00000340(arg0 + D_00009B50->unk4, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/201/msstor/nonmatchings/msstor_0001BC", func_00000340);

INCLUDE_ASM("tmp/asm/201/msstor/nonmatchings/msstor_0001BC", func_000004B0);

void func_00000518(s32 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4E90) = -1;
    M2C_FIELD(arg0, s32 *, 0x18) = 1;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    func_00001884(arg0);
}

INCLUDE_ASM("tmp/asm/201/msstor/nonmatchings/msstor_0001BC", func_00000548);

INCLUDE_ASM("tmp/asm/201/msstor/nonmatchings/msstor_0001BC", func_00000654);

INCLUDE_ASM("tmp/asm/201/msstor/nonmatchings/msstor_0001BC", func_000006DC);

INCLUDE_ASM("tmp/asm/201/msstor/nonmatchings/msstor_0001BC", func_00000784);

INCLUDE_ASM("tmp/asm/201/msstor/nonmatchings/msstor_0001BC", func_0000083C);

INCLUDE_ASM("tmp/asm/201/msstor/nonmatchings/msstor_0001BC", func_000008B8);

INCLUDE_ASM("tmp/asm/201/msstor/nonmatchings/msstor_0001BC", func_000008F0);

INCLUDE_ASM("tmp/asm/201/msstor/nonmatchings/msstor_0001BC", func_00000978);

INCLUDE_ASM("tmp/asm/201/msstor/nonmatchings/msstor_0001BC", func_00000A84);

INCLUDE_ASM("tmp/asm/201/msstor/nonmatchings/msstor_0001BC", func_00000D20);

INCLUDE_ASM("tmp/asm/201/msstor/nonmatchings/msstor_0001BC", func_00000DD4);

INCLUDE_ASM("tmp/asm/201/msstor/nonmatchings/msstor_0001BC", func_00000F0C);

INCLUDE_ASM("tmp/asm/201/msstor/nonmatchings/msstor_0001BC", func_00000FD0);

INCLUDE_ASM("tmp/asm/201/msstor/nonmatchings/msstor_0001BC", func_000010B0);

INCLUDE_ASM("tmp/asm/201/msstor/nonmatchings/msstor_0001BC", func_00001160);

INCLUDE_ASM("tmp/asm/201/msstor/nonmatchings/msstor_0001BC", func_00001288);

INCLUDE_ASM("tmp/asm/201/msstor/nonmatchings/msstor_0001BC", func_00001400);

INCLUDE_ASM("tmp/asm/201/msstor/nonmatchings/msstor_0001BC", func_00001474);

INCLUDE_ASM("tmp/asm/201/msstor/nonmatchings/msstor_0001BC", func_0000149C);

s32 func_00001558(struct Unk_func_00001558_0 *arg0) {
    return arg0->unk4E60;
}

void func_00001560(s32 arg0) {
    func_000008B8(arg0, 0x11, 0x3E8);
}

void func_00001580(s32 arg0) {
    func_000008B8(arg0, 0x25, 0x5DC);
}

