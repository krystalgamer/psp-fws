#include "common.h"
#include "mm_flash_decls.h"

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", func_0009B7D4);

void func_0009B7FC(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    func_0009BB48((s32) arg0, 0);
    if (arg2 == 0) {

    } else {
        func_0009BC3C((s32) arg0, 0);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", func_0009B85C);

s32 func_0009B8F4(s32 *arg0, s32 *arg1) {
    s32 temp_s1;
    s32 temp_v1;
    s32 var_a0;

    temp_s1 = func_0009BAEC();
    temp_v1 = temp_s1 & 0x3F;
    var_a0 = -1;
    if (*arg0 == 0) {
        *arg1 = temp_v1;
        if (temp_v1 == 0x3F) {
            *arg1 = func_0009BBB0(arg0);
        }
        var_a0 = temp_s1 >> 6;
    }
    return var_a0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", func_0009B968);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", func_0009BA58);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", func_0009BA98);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", func_0009BAEC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", func_0009BB48);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", func_0009BBB0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", func_0009BC3C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", func_0009BCC0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", func_0009BD40);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", func_0009BD94);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", func_0009BF04);

void func_0009C0FC(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    sceHVNetfront_Module_4C5A5066(1, arg0, arg1, arg2);
}

void func_0009C128(void) {
}

void func_0009C130(s32 arg0, M2C_UNK arg1) {
    sceHVNetfront_Module_AF7B3F4B(1, arg0, arg1);
}

void func_0009C154(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    sceHVNetfront_Module_BA0DA285(1, arg0, arg1, arg2);
}

void func_0009C180(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0) {
    sceHVNetfront_Module_74FB57AC(1, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg_sp0);
}

s32 func_0009C1E8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

s32 func_0009C1F0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x104) != 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", func_0009C1FC);

void func_0009C290(void) {
    func_0004B81C();
}

void func_0009C2AC(void) {
    func_0004B56C();
}

void func_0009C2C8(void) {
    func_0006808C();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", func_0009C2E4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", func_0009C300);

void func_0009C350(void) {
    func_0006C390();
}

void func_0009C36C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s8 *, 0x1052) = (s8) (arg1 != 0);
}

void func_0009C378(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xB60) = arg1;
}

void func_0009C380(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10D4) = arg1;
}

void func_0009C388(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xBD8) = arg1;
}

void func_0009C390(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10D0) = arg1;
}

void func_0009C398(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x10E4) = arg1;
}

void func_0009C3A0(void) {
    func_0009174C();
}

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", D_000C3E00);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", D_000C3E04);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", D_000C3E08);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", D_000C3E0C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", D_000C3E10);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", D_000C3E14);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", func_0009C3BC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", func_0009C4D0);

s32 func_0009C518(void *arg0) {
    s32 temp_s0;

    temp_s0 = func_0009C4D0(M2C_FIELD(arg0, s8 *, 0)) * 0x10;
    return temp_s0 + func_0009C4D0(M2C_FIELD(arg0, s8 *, 1));
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", func_0009C55C);

void func_0009CCCC(void) {
    func_0006C30C();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", func_0009CCE8);

void func_0009CCFC(void *arg0) {
    func_000725B0(arg0);
}

void func_0009CD18(void) {
    func_000716F4();
}

void func_0009CD34(void) {
    func_00091CD0();
}

s32 func_0009CD50(s32 arg0) {
    return arg0 + 0x10B0;
}

s32 func_0009CD58(void *arg0) {
    s32 var_s1;
    void **temp_v0;

    var_s1 = 0;
    temp_v0 = func_000000E8(M2C_FIELD(M2C_FIELD(arg0, void **, 0xFFC), s32 *, 4));
    if ((temp_v0 != NULL) && (M2C_FIELD(*temp_v0, s32 (**)(void **), 8)(temp_v0) != 0)) {
        var_s1 = M2C_FIELD(*temp_v0, s32 (**)(void **), 8)(temp_v0);
    }
    return var_s1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", func_0009CDCC);

void func_0009CE3C(s32 arg0) {
    func_0009F1FC(arg0, 1);
}

s32 func_0009CE58(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1098) != 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", func_0009CE64);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", func_0009CFCC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", func_0009D044);

s32 func_0009D110(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

s32 func_0009D118(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10D0);
}

void func_0009D120(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1098) = arg1;
}

void func_0009D128(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10E0) = arg1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", func_0009D130);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09B7D4", func_0009D150);

void func_0009D174(void) {
    func_00088484();
}

void func_0009D190(void) {
    func_00088608();
}

