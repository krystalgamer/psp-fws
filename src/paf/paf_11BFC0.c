#include "common.h"
#include "paf_decls.h"

#if FW_VERSION == 282
void func_0011BFC0(struct Unk_func_0011BFC0_0 *arg0) {
    arg0->unk0 = &D_0019D328;
    if (arg0->unk6C == 0) {

    } else {
        func_001654B8(0, 0, 0);
    }
    if (arg0->unk68 > 0) {
        sceKernelDeleteEventFlag(arg0->unk68);
    }
    func_0011CE28((s32) arg0);
}

INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011C02C);

INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011C234);
#endif

INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011C3C8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011BFC0);

INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011C02C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11BFC0", func_000C2D68);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011C490);

INCLUDE_ASM("nonmatchings/paf_11BFC0", func_000C73D0);
#endif

#if FW_VERSION == 282
void func_0011C40C(struct Unk_func_0011C40C_0 *arg0) {
    s32 temp_a4;

    temp_a4 = arg0->unk50;
    if ((temp_a4 != 0) && ((u32) arg0->unk8 < 4U)) {
        if (D_001A7D60 == 0) {
            sceGuDispBuffer((s32) arg0->unk18, (s32) arg0->unk1A, temp_a4 + (arg0->unk38 * arg0->unk42) + 0xFC000000, (s32) (arg0->unk3C * 8) >> arg0->unkC);
            D_001A7D60 = 1;
        }
    }
}
#endif

#if FW_VERSION != 150
INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011C490);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011C52C);

INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011C594);

s32 scePaf_08DD2D50(struct Unk_scePaf_08DD2D50_0 *arg0, s32 arg1) {
    return (s32) ((arg1 << arg0->unkC) + 7) >> 3;
}
#endif

INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011C614);

#if FW_VERSION == 282
void scePaf_3A69534B(void) {
    scePaf_FCB4E053();
}

void func_0011C6A8(void *arg0, void *arg1) {
    scePaf_7EC15225(arg0, arg1);
}
#endif

void func_0011C6C4(s32 arg0, s32 arg1) {
    func_0011FECC((s32) &D_001A7DA8, arg0, arg1);
    D_001A7D88 = 1;
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11BFC0", func_000C2F38);
#else
INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011C6FC);
#endif

INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011C7C0);

INCLUDE_ASM("nonmatchings/paf_11BFC0", scePaf_35F003C0);

INCLUDE_ASM("nonmatchings/paf_11BFC0", scePaf_FB3A9617);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11BFC0", func_000C354C);

INCLUDE_ASM("nonmatchings/paf_11BFC0", func_000C3694);

INCLUDE_ASM("nonmatchings/paf_11BFC0", func_000C37C4);

INCLUDE_ASM("nonmatchings/paf_11BFC0", func_000C38F4);
#else
INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011CCB8);

INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011CE28);

INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011CF6C);

INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011D0B0);

INCLUDE_RODATA("nonmatchings/paf_11BFC0", D_0019D310);
#endif

INCLUDE_RODATA("nonmatchings/paf_11BFC0", D_0019D328);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_11BFC0", D_001317F0);

INCLUDE_RODATA("nonmatchings/paf_11BFC0", D_00131834);

INCLUDE_RODATA("nonmatchings/paf_11BFC0", D_00131874);
#endif

INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011D1FC);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_11BFC0", D_00131890);

INCLUDE_RODATA("nonmatchings/paf_11BFC0", D_001318A0);

INCLUDE_RODATA("nonmatchings/paf_11BFC0", D_001318C0);

INCLUDE_RODATA("nonmatchings/paf_11BFC0", D_0019D390);

INCLUDE_ASM("nonmatchings/paf_11BFC0", scePaf_0598FFD6);
#else
s16 scePaf_0598FFD6(struct Unk_scePaf_0598FFD6_0 *arg0, s32 arg1) {
    if (arg1 != 1) {
        return arg0->unk42;
    }
    return arg0->unk44;
}
#endif

INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011D2A8);

s32 func_0011D398(void) {
    return 0x67;
}

INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011D3A0);

INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011D414);

INCLUDE_ASM("nonmatchings/paf_11BFC0", scePaf_5C4BF618);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011D4E8);
#else
void func_0011D4E8(s32 arg0) {
    func_0000C934(arg0 + 0x60, 0);
}
#endif

INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011D508);

INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011D5AC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11BFC0", scePaf_359CBCAF);
#else
INCLUDE_ASM("nonmatchings/paf_11BFC0", scePaf_5EE76FC5);
#endif

INCLUDE_ASM("nonmatchings/paf_11BFC0", scePaf_3684D457);

INCLUDE_ASM("nonmatchings/paf_11BFC0", scePaf_846E1F0A);

INCLUDE_ASM("nonmatchings/paf_11BFC0", scePaf_21DBFF5B);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11BFC0", func_000C45FC);
#else
INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011DE30);
#endif

INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011DE74);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011DEA8);
#else
s32 func_0011DEA8(struct Unk_func_0011DEA8_0 *arg0) {
    s32 var_v0;

    var_v0 = arg0->unk50;
    if (var_v0 == 0) {
        var_v0 = func_0011FF68((s32) &D_001A7DA8, 1 << arg0->unk54, arg0->unk38 * arg0->unk40);
        arg0->unk50 = var_v0;
    }
    return var_v0 != 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11BFC0", func_000C46C8);

INCLUDE_ASM("nonmatchings/paf_11BFC0", func_000C4758);
#else
INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011DF04);

INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011DF60);
#endif

INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011DFF8);

INCLUDE_ASM("nonmatchings/paf_11BFC0", scePaf_EBDC149C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11BFC0", func_000C4A90);
#else
void scePaf_FF91D139(void) {
    scePaf_FCB4E053();
}

void func_0011E2A8(void *arg0, void *arg1) {
    scePaf_7EC15225(arg0, arg1);
}

INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011E2C4);
#endif

INCLUDE_ASM("nonmatchings/paf_11BFC0", scePaf_4AB0D3F4);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/paf_11BFC0", func_000C9268);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011E4AC);
#endif

INCLUDE_ASM("nonmatchings/paf_11BFC0", scePaf_9122393C);

INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011E6FC);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_11BFC0", D_0019D350);

INCLUDE_RODATA("nonmatchings/paf_11BFC0", D_0019D360);

INCLUDE_RODATA("nonmatchings/paf_11BFC0", D_0019D380);

INCLUDE_RODATA("nonmatchings/paf_11BFC0", D_0019D390);
#endif

INCLUDE_ASM("nonmatchings/paf_11BFC0", func_0011E784);

void func_0011E8A0(void) {
    func_0011E784(1, 0xFFFF);
}

void func_0011E8C0(void) {
    func_0011E784(0, 0xFFFF);
}
