#include "common.h"
#include "mcore_decls.h"

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_0002404C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_000240C8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00024140);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_000244C8);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_02404C", D_0002CBB0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00024540);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00024680);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00024764);

s32 func_000248B0(void *arg0, void *arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (M2C_FIELD(arg0, u8 *, 1) == 0) {
        if (M2C_FIELD(arg1, u8 *, 1) == 0) {
            var_a2 = func_00023790((s32) arg0, (s32) arg1);
        }
    } else {
        var_a2 = -1;
        if (M2C_FIELD(arg1, u8 *, 1) != 0) {
            var_a2 = -func_00023790((s32) arg0, (s32) arg1);
        }
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_0002490C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00024994);

s32 func_00024A24(void *arg0, u32 arg1) {
    s32 var_v0;
    u32 temp_a1;

    temp_a1 = arg1 >> 5;
    var_v0 = 0;
    if (temp_a1 < (u16) M2C_FIELD(arg0, u16 *, 2)) {
        var_v0 = ((u32) M2C_FIELD(((temp_a1 * 4) + arg0), u32 *, 4) >> (arg1 & 0x1F)) & 1;
    }
    return var_v0;
}

s32 func_00024A58(void *arg0, u32 arg1) {
    s32 var_v0;
    u32 temp_a1;

    temp_a1 = arg1 >> 2;
    var_v0 = 0;
    if (temp_a1 < (u16) M2C_FIELD(arg0, u16 *, 2)) {
        var_v0 = ((u32) M2C_FIELD(((temp_a1 * 4) + arg0), u32 *, 4) >> ((arg1 & 3) * 8)) & 0xFF;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00024A90);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00024AD4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00024B38);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00024B9C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00024C60);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00024CB8);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_02404C", D_0002CBF0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00024D80);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00024E4C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00024EA8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00024ECC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00024F0C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00024F2C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00024F60);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00024FC8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_000251A0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00025214);

void func_00025230(s32 arg0) {
    func_0000274C(arg0);
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_0002524C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00025288);

void func_000255B4(s32 arg0, s32 arg1, s32 arg2) {
    func_000257C8(arg0, arg1, arg2, arg2);
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_000255D0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_000256F0);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_02404C", D_0002CC74);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_000257C8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_000258E8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_000259FC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00025AF0);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_02404C", D_0002CCE4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00025D04);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00025F30);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00025FDC);

void func_000260C0(void *arg0) {
    func_00023FF8(M2C_FIELD(arg0, s32 *, 4));
}

void func_000260DC(void **arg0, void *arg1, s32 arg2) {
    void *sp0;
    s32 temp_s0_2;
    u16 temp_s0;

    temp_s0 = M2C_FIELD(*arg0, u16 *, 2);
    temp_s0_2 = temp_s0 << 5;
    func_00023868(&sp0, func_0002385C(arg1) + temp_s0_2);
    func_00023F18(sp0, (s32) arg1);
    func_00024680(sp0, temp_s0_2);
    func_00024540(arg2, sp0, (s32) *arg0);
    func_00023FF8(sp0);
}

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_02404C", D_0002CD48);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00026170);

void func_00026278(void **arg0, s32 arg1) {
    void *sp0;
    func_00023EBC(&sp0, M2C_FIELD(*arg0, u16 *, 2) << 5);
    func_00024540(arg1, sp0, (s32) *arg0);
    func_00023FF8(sp0);
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_000262D0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_000266F8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00026810);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00026B3C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00026BE0);

void func_00026E04(s32 arg0, s32 arg1) {
    func_00026BE0(arg0, 0, arg1);
}

void func_00026E24(s32 arg0, s32 arg1) {
    func_00026BE0(arg0, 1, arg1);
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00026E44);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00026EC8);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_02404C", D_0002CD94);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_02404C", D_0002CD98);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_02404C", D_0002CDA4);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_02404C", D_0002CDB8);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_02404C", D_0002CDCC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00026F18);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_0002785C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00027964);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00027B08);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00027BB4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00027D84);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00027F80);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00027FF0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_00028068);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_02404C", func_000281D0);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_02404C", D_0002CED8);
