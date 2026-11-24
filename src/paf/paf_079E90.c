#include "common.h"
#include "paf_decls.h"

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_00079E90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_00079EBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_00079FC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007A0A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007A1F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007A37C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007A508);

void func_0007A538(void *arg0) {
    s32 temp_v1;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x15C);
    temp_v1 = M2C_FIELD(temp_s0, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x1B4) = (s32) M2C_FIELD(temp_s0, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x1B0) = (s32) M2C_FIELD(temp_s0, s32 *, 0x1C);
    if (temp_v1 != 0) {
        func_0006A618(temp_v1);
    }
    func_0006A618((s32) temp_s0);
    M2C_FIELD(arg0, void **, 0x15C) = NULL;
    func_0006D55C((s32) arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007A5A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007A78C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007A824);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007A968);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_079E90", D_0018FEC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007AA60);

void func_0007AB7C(void *arg0) {
    func_0005FFE0(M2C_FIELD(arg0, s32 *, 0x188), M2C_FIELD(arg0, s32 *, 0), (s32) "LZWDecode: Bogus encoding, loop in the code table; scanline %d", M2C_FIELD(arg0, s32 *, 0xEC));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007ABAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_079E90", D_0019000C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007B070);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007B4BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007B524);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", LZWEncode);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", LZWPostEncode);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", cl_hash);

void func_0007BABC(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    func_00083940();
    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x15C), s32 *, 0x64);
    if (temp_v0 != 0) {
        func_0006A618(temp_v0);
    }
    temp_v0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x15C), s32 *, 0x80);
    if (temp_v0_2 != 0) {
        func_0006A618(temp_v0_2);
    }
    func_0006A618((s32) M2C_FIELD(arg0, void **, 0x15C));
    M2C_FIELD(arg0, void **, 0x15C) = NULL;
    func_0006D55C((s32) arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007BB30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007BC14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007BE50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007BE6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007BEEC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_079E90", D_00190178);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_079E90", D_00190184);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_079E90", D_00190190);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_079E90", D_001901A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_079E90", D_001901C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_079E90", D_001901D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_079E90", D_001901F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_079E90", D_00190204);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_079E90", D_00190210);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_079E90", D_00190220);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_079E90", D_00190230);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_079E90", D_00190244);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_079E90", D_00190254);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_079E90", D_00190344);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_079E90", D_00190354);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_079E90", D_0019037C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_079E90", D_001903B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_079E90", D_001903F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007BF20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007BF60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007BF84);

void func_0007BFD4(void *arg0, s32 arg1) {
    s32 temp_v0;

    if (arg1 > 0) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x654);
        if (temp_v0 >= arg1) {
            M2C_FIELD(arg0, s32 *, 0x654) = (s32) (temp_v0 - arg1);
            M2C_FIELD(arg0, s32 *, 0x650) = (s32) (M2C_FIELD(arg0, s32 *, 0x650) + arg1);
        } else {
            func_0007BF84((s32) arg0);
        }
    }
}

void func_0007C020(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007C028);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007C108);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007C21C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007C458);

s32 func_0007C5F0(void) {
    return 1;
}

s32 func_0007C5F8(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007C600);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007C84C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_079E90", D_0019042C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007C8C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007D230);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007D2D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007D388);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_079E90", func_0007DE18);

void func_0007E298(void) {
}

