#include "common.h"
#include "paf_decls.h"

void func_00101AC0(struct Unk_func_00101AC0_0 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_3;
    u32 temp_v0_2;

    arg0->unk10 = (s32) (arg1 * arg2 * 4);
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0U;
    arg0->unkC = 0;
    arg0->unk1C = 0;
    arg0->unk20 = 0;
    temp_v0 = sceKernelCreateSema(&D_0019BCFC, 0U, 3, 0xFF, NULL);
    arg0->unk4 = temp_v0;
    if (temp_v0 > 0) {
        temp_v0_2 = sceKernelCreateSema(&D_0019BD0C, 0U, 0, 0xFF, NULL);
        arg0->unk8 = temp_v0_2;
        if ((s32) temp_v0_2 > 0) {
            temp_v0_3 = scePaf_3586BE05(0x40, arg0->unk10 * 4);
            arg0->unkC = temp_v0_3;
            if (temp_v0_3 != 0) {
                arg0->unk0 = 1;
            }
        }
    }
}

void func_00101B74(struct Unk_func_00101B74_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = arg0->unk4;
    if (temp_v0 > 0) {
        sceKernelDeleteSema(temp_v0);
    }
    temp_v0_2 = arg0->unk8;
    if (temp_v0_2 > 0) {
        sceKernelDeleteSema(temp_v0_2);
    }
    scePaf_545FE2DA(arg0->unkC);
}

void func_00101BC4(struct Unk_func_00101BC4_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = arg0->unk4;
    if (temp_v0 > 0) {
        sceKernelDeleteSema(temp_v0);
    }
    temp_v0_2 = arg0->unk8;
    if (temp_v0_2 > 0) {
        sceKernelDeleteSema(temp_v0_2);
    }
    scePaf_545FE2DA(arg0->unkC);
}

void func_00101C14(struct Unk_func_00101BC4_0 *arg0) {
    void *sp0;
    s32 temp_v0;
    s32 temp_v0_2;

    if (arg0 != NULL) {
        temp_v0 = arg0->unk4;
        arg0->unk0 = 0;
        if (temp_v0 > 0) {
            sceKernelCancelSema(temp_v0, -1, &sp0);
        }
        temp_v0_2 = arg0->unk8;
        if (temp_v0_2 > 0) {
            sceKernelCancelSema(temp_v0_2, -1, &sp0);
        }
        func_00101BC4(arg0);
        scePaf_4E67BB08(arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00101C84);

u8 func_00101CB8(u8 *arg0) {
    u8 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = *arg0;
    }
    return var_v0;
}

s32 func_00101CCC(struct Unk_func_00101CCC_0 *arg0) {
    s32 var_v0;

    var_v0 = 0xFF;
    if (arg0 != NULL) {
        var_v0 = arg0->unk20 - arg0->unk1C;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00101CE8);

void func_00101D50(struct Unk_func_00101D50_0 *arg0) {
    if ((arg0 == NULL) || (arg0->unk0 == 0)) {

    } else {
        arg0->unk20 = (s32) (arg0->unk20 + 1);
        sceKernelSignalSema(arg0->unk8, 1);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00101D94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00101DF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00101F40);

void func_00102094(struct Unk_func_00102094_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = arg0->unkC;
    if (temp_v0 > 0) {
        sceKernelDeleteSema(temp_v0);
    }
    temp_v0_2 = arg0->unk10;
    if (temp_v0_2 > 0) {
        sceKernelDeleteSema(temp_v0_2);
    }
    scePaf_545FE2DA(arg0->unk14);
}

void func_001020E4(struct Unk_func_00102094_0 *arg0) {
    void *sp0;
    s32 temp_v0;
    s32 temp_v0_2;

    if (arg0 != NULL) {
        temp_v0 = arg0->unkC;
        arg0->unk0 = 0;
        if (temp_v0 > 0) {
            sceKernelCancelSema(temp_v0, -1, &sp0);
        }
        temp_v0_2 = arg0->unk10;
        if (temp_v0_2 > 0) {
            sceKernelCancelSema(temp_v0_2, -1, &sp0);
        }
        if (arg0->unk8 != 0) {

        } else {
            func_00102094(arg0);
            scePaf_4E67BB08(arg0);
        }
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00102168);

u8 func_0010219C(u8 *arg0) {
    u8 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = *arg0;
    }
    return var_v0;
}

s32 func_001021B0(struct Unk_func_001021B0_0 *arg0) {
    s32 var_v0;

    var_v0 = 0xFF;
    if (arg0 != NULL) {
        var_v0 = arg0->unk20 - arg0->unk1C;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001021CC);

void func_00102234(struct Unk_func_00102234_0 *arg0) {
    if ((arg0 == NULL) || (arg0->unk0 == 0)) {

    } else {
        arg0->unk20 = (s32) (arg0->unk20 + 1);
        sceKernelSignalSema(arg0->unk10, 1);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00102278);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00102298);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019BCDC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019BCEC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019BCFC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019BD0C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019BD1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019BD2C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019BD3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001023A8);

void func_00102434(void) {
    func_001023A8(1, 0xFFFF);
}

void func_00102454(void) {
    func_001023A8(0, 0xFFFF);
}

void func_00102474(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_0010256C();
}

void func_00102494(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_0010259C();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001024B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00102510);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010256C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010259C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001026B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010279C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001028B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001029C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00102AE0);

void func_00102B34(s32 arg0) {
    func_00102CFC(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00102B50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00102CFC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019BD60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00102D38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00102FCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00103008);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010308C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00103094);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001030B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00103104);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00103120);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010313C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00103158);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00103174);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00103190);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001031AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001031C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001031E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00103200);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00103208);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00103210);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00103440);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00103494);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00103654);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019BE48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00103674);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00103774);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001037A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001037EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00103820);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001038BC);

void func_00103960(s32 arg0, M2C_UNK arg1) {
    scePaf_D6232F26(arg0 + 0x20, 0x12, arg1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00103984);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001039D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00103A18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00103A5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00103AA0);

s32 func_00103AE4(struct Unk_func_00103AE4_0 *arg0, s32 arg1) {
    func_0000C8BC(arg1, arg0->unk84);
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00103B0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00103B74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00103BA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00103C44);

void func_00103CE8(s32 arg0, M2C_UNK arg1) {
    scePaf_D6232F26(arg0 + 0x20, 0x12, arg1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00103D0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00103D5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00103DA0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019BEE8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019BF88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00103DE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00103FE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001041A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001042C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001043F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00104520);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00104560);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00104680);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001047A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001048B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001049D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00104AE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00104B98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00104C54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00104C7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00104D9C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C050);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C0E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00104E84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001050C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001052FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010553C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010577C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001059C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C100);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C104);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C108);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C10C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C110);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C114);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C118);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C11C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C120);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00105A04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00105B10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00105C2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00105D30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00105E3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00105F98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106140);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106210);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106230);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106250);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106260);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106380);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106454);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001064E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010656C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001065B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106604);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106658);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001066D0);

s32 func_00106744(struct Unk_func_00106744_0 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = arg0->unk1C;
    if ((temp_v0 == 0) || (var_v1 = 0, (func_000CE7E4(temp_v0) != 0))) {
        var_v1 = M2C_FIELD(arg0->unk0, s32 (**)(void *, M2C_UNK, M2C_UNK), 0x10)(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 func_001067B8(struct Unk_func_001067B8_0 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = arg0->unk1C;
    if ((temp_v0 == 0) || (var_v1 = 0, (func_000CE9D0(temp_v0) != 0))) {
        var_v1 = M2C_FIELD(arg0->unk0, s32 (**)(void *, M2C_UNK, M2C_UNK), 0x18)(arg0, arg1, arg2);
    }
    return var_v1;
}

