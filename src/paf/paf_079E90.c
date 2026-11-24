#include "common.h"
#include "paf_decls.h"

u32 func_00079E90(u32 arg0, s32 arg1) {
    u32 var_v1;

    var_v1 = arg0 * arg1;
    if (arg0 != 0) {
        var_v1 = (((var_v1 / arg0) ^ arg1) != 0) ? 0U : var_v1;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/paf_079E90", func_00079EBC);

INCLUDE_ASM("nonmatchings/paf_079E90", func_00079FC0);

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007A0A8);

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007A1F0);

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007A37C);

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007A508);

void func_0007A538(struct Unk_func_0007A538_0 *arg0) {
    s32 temp_v1;
    struct Unk_func_0007A538_temp_s0 *temp_s0;

    temp_s0 = arg0->unk15C;
    temp_v1 = temp_s0->unkC;
    arg0->unk1B4 = (s32) temp_s0->unk18;
    arg0->unk1B0 = (s32) temp_s0->unk1C;
    if (temp_v1 != 0) {
        func_0006A618(temp_v1);
    }
    func_0006A618((s32) temp_s0);
    arg0->unk15C = NULL;
    func_0006D55C((s32) arg0);
}

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007A5A4);

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007A78C);

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007A824);

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007A968);

INCLUDE_RODATA("nonmatchings/paf_079E90", D_0018FEC8);

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007AA60);

void func_0007AB7C(struct Unk_func_0007AB7C_0 *arg0) {
    func_0005FFE0(arg0->unk188, arg0->unk0, (s32) "LZWDecode: Bogus encoding, loop in the code table; scanline %d", arg0->unkEC);
}

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007ABAC);

INCLUDE_RODATA("nonmatchings/paf_079E90", D_0019000C);

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007B070);

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007B4BC);

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007B524);

INCLUDE_ASM("nonmatchings/paf_079E90", LZWEncode);

INCLUDE_ASM("nonmatchings/paf_079E90", LZWPostEncode);

INCLUDE_ASM("nonmatchings/paf_079E90", cl_hash);

void func_0007BABC(struct Unk_func_0007BABC_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    func_00083940();
    temp_v0 = arg0->unk15C->unk64;
    if (temp_v0 != 0) {
        func_0006A618(temp_v0);
    }
    temp_v0_2 = arg0->unk15C->unk80;
    if (temp_v0_2 != 0) {
        func_0006A618(temp_v0_2);
    }
    func_0006A618((s32) arg0->unk15C);
    arg0->unk15C = NULL;
    func_0006D55C((s32) arg0);
}

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007BB30);

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007BC14);

s32 func_0007BE50(struct Unk_func_0007BE50_0 *arg0) {
    arg0->unk130 = &func_0007BC14;
    arg0->unk138 = &func_0007BC14;
    arg0->unk140 = &func_0007BC14;
    return 1;
}

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007BE6C);

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007BEEC);

INCLUDE_RODATA("nonmatchings/paf_079E90", D_00190178);

INCLUDE_RODATA("nonmatchings/paf_079E90", D_00190184);

INCLUDE_RODATA("nonmatchings/paf_079E90", D_00190190);

INCLUDE_RODATA("nonmatchings/paf_079E90", D_001901A8);

INCLUDE_RODATA("nonmatchings/paf_079E90", D_001901C4);

INCLUDE_RODATA("nonmatchings/paf_079E90", D_001901D8);

INCLUDE_RODATA("nonmatchings/paf_079E90", D_001901F0);

INCLUDE_RODATA("nonmatchings/paf_079E90", D_00190204);

INCLUDE_RODATA("nonmatchings/paf_079E90", D_00190210);

INCLUDE_RODATA("nonmatchings/paf_079E90", D_00190220);

INCLUDE_RODATA("nonmatchings/paf_079E90", D_00190230);

INCLUDE_RODATA("nonmatchings/paf_079E90", D_00190244);

INCLUDE_RODATA("nonmatchings/paf_079E90", D_00190254);

INCLUDE_RODATA("nonmatchings/paf_079E90", D_00190344);

INCLUDE_RODATA("nonmatchings/paf_079E90", D_00190354);

INCLUDE_RODATA("nonmatchings/paf_079E90", D_0019037C);

INCLUDE_RODATA("nonmatchings/paf_079E90", D_001903B0);

INCLUDE_RODATA("nonmatchings/paf_079E90", D_001903F4);

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007BF20);

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007BF60);

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007BF84);

void func_0007BFD4(struct Unk_func_0007BFD4_0 *arg0, s32 arg1) {
    s32 temp_v0;

    if (arg1 > 0) {
        temp_v0 = arg0->unk654;
        if (temp_v0 >= arg1) {
            arg0->unk654 = (s32) (temp_v0 - arg1);
            arg0->unk650 = (s32) (arg0->unk650 + arg1);
        } else {
            func_0007BF84((s32) arg0);
        }
    }
}

void func_0007C020(void) {
}

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007C028);

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007C108);

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007C21C);

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007C458);

s32 func_0007C5F0(void) {
    return 1;
}

s32 func_0007C5F8(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007C600);

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007C84C);

INCLUDE_RODATA("nonmatchings/paf_079E90", D_0019042C);

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007C8C8);

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007D230);

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007D2D4);

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007D388);

INCLUDE_ASM("nonmatchings/paf_079E90", func_0007DE18);

void func_0007E298(void) {
}

