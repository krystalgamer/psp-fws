#include "common.h"
#include "paf_decls.h"

void func_0011BFC0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0019D328;
    if (M2C_FIELD(arg0, u8 *, 0x6C) == 0) {

    } else {
        func_001654B8(0, 0, 0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x68) > 0) {
        sceKernelDeleteEventFlag(M2C_FIELD(arg0, s32 *, 0x68));
    }
    func_0011CE28((s32) arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", func_0011C02C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", func_0011C234);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", func_0011C3C8);

void func_0011C40C(void *arg0) {
    s32 temp_a4;

    temp_a4 = M2C_FIELD(arg0, s32 *, 0x50);
    if ((temp_a4 != 0) && ((u32) M2C_FIELD(arg0, u32 *, 8) < 4U)) {
        if (D_001A7D60 == 0) {
            sceGuDispBuffer((s32) M2C_FIELD(arg0, s16 *, 0x18), (s32) M2C_FIELD(arg0, s16 *, 0x1A), temp_a4 + (M2C_FIELD(arg0, s32 *, 0x38) * M2C_FIELD(arg0, s16 *, 0x42)) + 0xFC000000, (s32) (M2C_FIELD(arg0, s32 *, 0x3C) * 8) >> M2C_FIELD(arg0, s32 *, 0xC));
            D_001A7D60 = 1;
        }
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", func_0011C490);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", func_0011C52C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", func_0011C594);

s32 scePaf_08DD2D50(void *arg0, s32 arg1) {
    return (s32) ((arg1 << M2C_FIELD(arg0, s32 *, 0xC)) + 7) >> 3;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", func_0011C614);

void scePaf_3A69534B(void) {
    scePaf_FCB4E053();
}

void func_0011C6A8(void *arg0, void *arg1) {
    scePaf_7EC15225(arg0, arg1);
}

void func_0011C6C4(s32 arg0, s32 arg1) {
    func_0011FECC((s32) &D_001A7DA8, arg0, arg1);
    D_001A7D88 = 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", func_0011C6FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", func_0011C7C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", scePaf_35F003C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", scePaf_FB3A9617);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", func_0011CCB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", func_0011CE28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", func_0011CF6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", func_0011D0B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_11BFC0", D_0019D310);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_11BFC0", D_0019D328);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", func_0011D1FC);

s16 scePaf_0598FFD6(void *arg0, s32 arg1) {
    if (arg1 != 1) {
        return M2C_FIELD(arg0, s16 *, 0x42);
    }
    return M2C_FIELD(arg0, s16 *, 0x44);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", func_0011D2A8);

s32 func_0011D398(void) {
    return 0x67;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", func_0011D3A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", func_0011D414);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", scePaf_5C4BF618);

void func_0011D4E8(s32 arg0) {
    func_0000C934(arg0 + 0x60, 0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", func_0011D508);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", func_0011D5AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", scePaf_5EE76FC5);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", scePaf_3684D457);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", scePaf_846E1F0A);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", scePaf_21DBFF5B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", func_0011DE30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", func_0011DE74);

s32 func_0011DEA8(void *arg0) {
    s32 var_v0;

    var_v0 = M2C_FIELD(arg0, s32 *, 0x50);
    if (var_v0 == 0) {
        var_v0 = func_0011FF68((s32) &D_001A7DA8, 1 << M2C_FIELD(arg0, s16 *, 0x54), M2C_FIELD(arg0, s32 *, 0x38) * M2C_FIELD(arg0, s16 *, 0x40));
        M2C_FIELD(arg0, s32 *, 0x50) = var_v0;
    }
    return var_v0 != 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", func_0011DF04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", func_0011DF60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", func_0011DFF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", scePaf_EBDC149C);

void scePaf_FF91D139(void) {
    scePaf_FCB4E053();
}

void func_0011E2A8(void *arg0, void *arg1) {
    scePaf_7EC15225(arg0, arg1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", func_0011E2C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", scePaf_4AB0D3F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", func_0011E4AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", scePaf_9122393C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", func_0011E6FC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_11BFC0", D_0019D350);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_11BFC0", D_0019D360);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_11BFC0", D_0019D380);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_11BFC0", D_0019D390);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11BFC0", func_0011E784);

void func_0011E8A0(void) {
    func_0011E784(1, 0xFFFF);
}

void func_0011E8C0(void) {
    func_0011E784(0, 0xFFFF);
}

