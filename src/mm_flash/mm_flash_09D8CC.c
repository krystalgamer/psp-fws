/* cflags: -Os */
#include "common.h"
#include "mm_flash_decls.h"

void func_0009D8CC(s32 arg0) {
    if (arg0 != 0) {
        func_00055FAC();
        func_00090730(*func_0009F1C0(), arg0, 0);
    }
}

s32 func_0009D910(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4C);
}

void func_0009D918(s32 arg0) {
    func_00059CC0(arg0, 1);
}

void func_0009D934(s32 arg0) {
    func_00059D2C(arg0);
}

void func_0009D950(void) {
    func_0006B894();
}

void func_0009D96C(void) {
    func_0006A914();
}

void func_0009D988(s32 arg0) {
    func_000608F4(arg0 + 0x148);
}

void func_0009D9A4(void) {
    func_0006A628();
}

void func_0009D9C0(void) {
    func_0006BC2C();
}

void func_0009D9DC(void) {
    func_0006BC98();
}

void func_0009D9F8(void) {
    func_000730E0();
}

s32 func_0009DA14(void) {
    return func_00079454() == 4;
}

s32 func_0009DA38(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xBE4);
}

s32 func_0009DA40(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x68);
}

s32 func_0009DA48(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC70);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09D8CC", func_0009DA50);

s32 func_0009DA78(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC1C) == 0x80000000;
}

s32 func_0009DA8C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC10) == 3;
}

s32 func_0009DA9C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xBD4) == 2;
}

s32 func_0009DAAC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xBD4) == 1;
}

s32 func_0009DABC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xBD4) == 0;
}

s32 func_0009DAC8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}

s32 func_0009DAD0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x54);
}

s32 func_0009DAD8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1000);
}

void func_0009DAE0(void *arg0) {
    func_0003E4E4(arg0 + 0x5C0);
    func_0005A5D4(arg0 + 8);
    func_0004CCFC(M2C_FIELD(M2C_FIELD(arg0, void **, 0xFFC), s32 *, 8));
}

void func_0009DB1C(void) {
    func_000905C0();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09D8CC", func_0009DB38);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09D8CC", func_0009DB98);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09D8CC", func_0009DC00);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09D8CC", func_0009DC70);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09D8CC", func_0009DE44);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09D8CC", func_0009DF48);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09D8CC", func_0009E104);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09D8CC", func_0009E1E4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09D8CC", func_0009E2B4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09D8CC", func_0009E380);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09D8CC", func_0009E4D8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09D8CC", func_0009E604);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09D8CC", func_0009E77C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09D8CC", func_0009E8A8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09D8CC", func_0009E9A4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09D8CC", func_0009EA80);

s32 func_0009EBEC(void) {
    s32 temp_v0;

    temp_v0 = sceHVWWW_Library_27C4AC1F(0x7C8);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_D611E938(temp_v0, 0, 0x7C8);
    }
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09D8CC", func_0009EC30);

void func_0009EC94(s32 arg0) {
    if (arg0 != 0) {
        func_000905C0();
        sceHVWWW_Library_2E58A543(arg0);
    }
}

void func_0009ECC8(void *arg0) {
    if (arg0 != NULL) {
        func_000907D8(arg0);
    }
}

void func_0009ECE8(void *arg0) {
    if (arg0 != NULL) {
        func_0009081C(arg0);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09D8CC", func_0009ED08);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09D8CC", func_0009ED30);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09D8CC", func_0009F020);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09D8CC", func_0009F054);

void func_0009F090(void) {
    func_000933A0();
}

void func_0009F0AC(void) {
    func_0008D274();
}

