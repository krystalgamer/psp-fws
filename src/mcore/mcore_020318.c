/* cflags: -Os */
#include "common.h"
#include "mcore_decls.h"

s32 func_00020318(struct Unk_func_00020318_0 *arg0, s32 arg1, s32 arg2) {
    s32 var_a3;

    var_a3 = 0x10000000;
    if (arg0 != NULL) {
        var_a3 = 0x10000004;
        if (arg0->unk2 == 0x17) {
            var_a3 = func_0001FF64((s32) arg0, arg1, arg2);
        }
    }
    return var_a3;
}

s32 func_00020354(struct Unk_func_00020354_0 *arg0, s32 arg1) {
    s32 var_a3;

    var_a3 = 0x10000000;
    if (arg0 != NULL) {
        var_a3 = 0x10000004;
        if (arg0->unk2 == 0x18) {
            var_a3 = func_0001FF64((s32) arg0, 0, arg1);
        }
    }
    return var_a3;
}

s32 func_00020398(struct Unk_func_00020398_0 *arg0, s32 arg1, s32 arg2) {
    s32 var_a3;

    var_a3 = 0x10000000;
    if (arg0 != NULL) {
        var_a3 = 0x10000004;
        if (arg0->unk2 == 0x17) {
            var_a3 = func_000202B4((s32) arg0, arg1, arg2);
        }
    }
    return var_a3;
}

s32 func_000203D4(struct Unk_func_000203D4_0 *arg0, s32 arg1) {
    s32 var_a3;

    var_a3 = 0x10000000;
    if (arg0 != NULL) {
        var_a3 = 0x10000004;
        if (arg0->unk2 == 0x18) {
            var_a3 = func_000202B4((s32) arg0, 0, arg1);
        }
    }
    return var_a3;
}

s32 func_00020418(s8 arg0, struct Unk_func_00020418_1 *arg1) {
    arg1->unk0 = 2;
    arg1->unk2 = arg0;
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_0002042C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_000204AC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_000204F0);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_00029F80);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_00029F8C);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_00029F98);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_00029FA0);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_00029FA8);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_00029FB4);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_00029FBC);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_00029FC4);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_00029FD0);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_00029FE0);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_00029FE8);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_00029FFC);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002A010);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002A01C);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002A024);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002A030);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002A034);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002A040);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002A04C);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002A050);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002A060);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002A074);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002A084);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002A094);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002A0A0);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002A0AC);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002A0C0);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002A0D0);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002A0E0);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002A0F0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_000205D4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_00020744);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_00020A00);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_00020BB8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_00020C70);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_00020CA0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_00020D3C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_00020DCC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_00020E34);

void func_00021194(s32 arg0, M2C_UNK arg1) {
    func_00020A00(arg1, arg0);
}

void func_000211B8(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, s16 arg3) {
    func_00020CA0(arg1, arg2, arg0, arg3);
}

void func_000211E4(s32 arg0, s32 arg1, s16 arg2) {
    func_00020CA0(arg1, arg1, arg0, arg2);
}

void func_0002120C(s32 arg0, s32 arg1) {
    func_00021194(arg0, arg1);
    func_00021194(arg0 + 0x80, arg1 + 8);
}

void func_00021250(s32 arg0, s32 arg1) {
    func_000211E4(arg0, arg1, 0);
    func_000211E4(arg0 + 0x80, arg1, 1);
    func_000211E4(arg0, arg1, 0);
}

void func_000212A4(s32 arg0, s32 arg1, s32 arg2) {
    func_000211B8(arg0, arg1, arg2, 0);
    func_000211E4(arg0 + 0x80, arg2, 1);
    func_000211E4(arg0, arg2, 0);
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_000212F8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_000217A8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_00021AE0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_00022114);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_00022748);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_000227B8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_00022824);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_000228C8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_0002292C);

s32 func_00022998(s32 *arg0, u32 arg1, u32 arg2) {
    s32 temp_a3;
    s32 temp_v0_2;
    s32 var_a1;
    u32 temp_a1;
    u32 temp_a2;
    u32 temp_lo;
    u32 temp_lo_2;
    u32 temp_v0;

    temp_v0_2 = arg1 & 0xFFFF;
    temp_a3 = arg2 & 0xFFFF;
    temp_lo = temp_v0_2 * temp_a3;
    temp_a2 = arg2 >> 0x10;
    temp_a1 = arg1 >> 0x10;
    temp_lo_2 = temp_a1 * temp_a3;
    temp_v0 = (temp_v0_2 * temp_a2) + (temp_lo >> 0x10) + temp_lo_2;
    var_a1 = temp_a1 * temp_a2;
    if (temp_v0 < temp_lo_2) {
        var_a1 += 0x10000;
    }
    *arg0 = (temp_v0 << 0x10) + (temp_lo & 0xFFFF);
    return var_a1 + (temp_v0 >> 0x10);
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_00022A00);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_00022A8C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_00022B28);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002A154);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002A554);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002A954);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002AD54);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002B154);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002B554);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002B954);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002BD54);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002C154);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002C554);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002C954);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002C97C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_00022BC4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_00022D24);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_00022DF4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_00022F9C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_000231B8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_00023790);

void func_00023810(void **arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_00025214(8);
    *arg0 = temp_v0;
    M2C_FIELD(temp_v0, s8 *, 1) = 0;
    M2C_FIELD(*arg0, s32 *, 4) = arg1;
    M2C_FIELD(temp_v0, s16 *, 2) = 1;
}

s32 func_0002385C(struct Unk_func_0002385C_0 *arg0) {
    return arg0->unk2 << 5;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_00023868);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002CA28);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore_020318", D_0002CA34);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_00023A0C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_00023EBC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_00023F18);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore_020318", func_00023FF8);

void func_00024014(struct Unk_func_00024014_0 *arg0) {
    if (func_00024994() == 0) {
        arg0->unk1 = (u8) (1 - arg0->unk1);
    }
}

