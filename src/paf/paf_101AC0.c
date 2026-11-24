#include "common.h"
#include "paf_decls.h"

void func_00101AC0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_3;
    u32 temp_v0_2;

    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (arg1 * arg2 * 4);
    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, u32 *, 8) = 0U;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    temp_v0 = sceKernelCreateSema(&D_0019BCFC, 0U, 3, 0xFF, NULL);
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    if (temp_v0 > 0) {
        temp_v0_2 = sceKernelCreateSema(&D_0019BD0C, 0U, 0, 0xFF, NULL);
        M2C_FIELD(arg0, u32 *, 8) = temp_v0_2;
        if ((s32) temp_v0_2 > 0) {
            temp_v0_3 = scePaf_3586BE05(0x40, M2C_FIELD(arg0, s32 *, 0x10) * 4);
            M2C_FIELD(arg0, s32 *, 0xC) = temp_v0_3;
            if (temp_v0_3 != 0) {
                M2C_FIELD(arg0, s8 *, 0) = 1;
            }
        }
    }
}

void func_00101B74(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v0 > 0) {
        sceKernelDeleteSema(temp_v0);
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0_2 > 0) {
        sceKernelDeleteSema(temp_v0_2);
    }
    scePaf_545FE2DA(M2C_FIELD(arg0, s32 *, 0xC));
}

void func_00101BC4(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v0 > 0) {
        sceKernelDeleteSema(temp_v0);
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0_2 > 0) {
        sceKernelDeleteSema(temp_v0_2);
    }
    scePaf_545FE2DA(M2C_FIELD(arg0, s32 *, 0xC));
}

void func_00101C14(void *arg0) {
    void *sp0;
    s32 temp_v0;
    s32 temp_v0_2;

    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 4);
        M2C_FIELD(arg0, s8 *, 0) = 0;
        if (temp_v0 > 0) {
            sceKernelCancelSema(temp_v0, -1, &sp0);
        }
        temp_v0_2 = M2C_FIELD(arg0, s32 *, 8);
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

s32 func_00101CCC(void *arg0) {
    s32 var_v0;

    var_v0 = 0xFF;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x20) - M2C_FIELD(arg0, s32 *, 0x1C);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00101CE8);

void func_00101D50(void *arg0) {
    if ((arg0 == NULL) || (M2C_FIELD(arg0, u8 *, 0) == 0)) {

    } else {
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 1);
        sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 8), 1);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00101D94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00101DF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00101F40);

void func_00102094(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 > 0) {
        sceKernelDeleteSema(temp_v0);
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_v0_2 > 0) {
        sceKernelDeleteSema(temp_v0_2);
    }
    scePaf_545FE2DA(M2C_FIELD(arg0, s32 *, 0x14));
}

void func_001020E4(void *arg0) {
    void *sp0;
    s32 temp_v0;
    s32 temp_v0_2;

    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
        M2C_FIELD(arg0, s8 *, 0) = 0;
        if (temp_v0 > 0) {
            sceKernelCancelSema(temp_v0, -1, &sp0);
        }
        temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x10);
        if (temp_v0_2 > 0) {
            sceKernelCancelSema(temp_v0_2, -1, &sp0);
        }
        if (M2C_FIELD(arg0, s32 *, 8) != 0) {

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

s32 func_001021B0(void *arg0) {
    s32 var_v0;

    var_v0 = 0xFF;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x20) - M2C_FIELD(arg0, s32 *, 0x1C);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001021CC);

void func_00102234(void *arg0) {
    if ((arg0 == NULL) || (M2C_FIELD(arg0, u8 *, 0) == 0)) {

    } else {
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 1);
        sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0x10), 1);
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

s32 func_00103AE4(void *arg0, s32 arg1) {
    func_0000C8BC(arg1, M2C_FIELD(arg0, s32 *, 0x84));
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

s32 func_00106744(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if ((temp_v0 == 0) || (var_v1 = 0, (func_000CE7E4(temp_v0) != 0))) {
        var_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *, M2C_UNK, M2C_UNK), 0x10)(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 func_001067B8(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if ((temp_v0 == 0) || (var_v1 = 0, (func_000CE9D0(temp_v0) != 0))) {
        var_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *, M2C_UNK, M2C_UNK), 0x18)(arg0, arg1, arg2);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010682C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106860);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001068D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106918);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106950);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106984);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001069B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001069EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106A20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106A54);

void func_00106A8C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 == 0) {

    } else {
        func_000CFB7C(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106ABC);

void func_00106AD4(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 == 0) {

    } else {
        scePaf_14CE7F6F(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106B04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106B1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106B34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106B4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106B64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106B98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106BCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106C00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106C34);

void func_00106C68(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 == 0) {

    } else {
        func_000CFE84(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106C98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106CB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106CC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106CFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106D30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106D64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106D98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106DCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106DE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106E1C);

void func_00106E54(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 == 0) {

    } else {
        func_000D0C18(temp_v0);
    }
}

s32 func_00106E84(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 != 0) {
        var_v1 = func_000C5EAC(temp_v0 + 0x40);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106EBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106ED4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106F04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106F18);

void scePaf_D4C6CC7A(void *arg0) {
    M2C_FIELD(&D_001A7CC0, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(&D_001A7CC0, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(&D_001A7CC0, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(&D_001A7CC0, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C1F8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C290);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00106F7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010770C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010832C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001087BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00108C54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00108D98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00108EF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00109150);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00109420);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001096C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00109B80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00109DAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00109E9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010A1B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010A3C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010A514);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010A95C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C53C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C540);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C544);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C548);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C54C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C550);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C554);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C558);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C55C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C560);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C564);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C568);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C56C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C570);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C574);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C578);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C57C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C580);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C584);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C588);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C58C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C590);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C594);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C598);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C59C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C5A0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C5A4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C5A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C5AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C5B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C5B4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C5B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C5BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C5C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C5C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C5C8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C5CC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C5D0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C5D4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C5D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C5DC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C5E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C5E4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C5E8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C5EC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C5F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C5F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C5F8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C5FC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C600);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C604);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C608);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C60C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C610);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C614);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C618);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C61C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C620);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C624);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C628);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C62C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C630);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C634);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C638);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C63C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C640);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C644);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C648);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C64C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C650);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C654);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C658);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C65C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C660);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C664);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C690);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019C6AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010B33C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010B438);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010B918);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010B9D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010BB2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010BD78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010BED0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010C5A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010C5F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010C750);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010C8B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010CA10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010CB68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010CCBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010D4A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010D568);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010E448);

void func_0010FA74(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x14F0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x14F4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x14F8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x14FC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010FA98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010FAFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010FB50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010FC34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010FE94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0010FFC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00110650);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00110CD8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00110D3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00110DE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00110EF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001110AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0011126C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0011129C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0011140C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0011145C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001114FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001116D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00111B94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00111BE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00111DD8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00111FCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0011206C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0011210C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001121AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0011224C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001126DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00112AE8);

void func_00112B40(void) {
    func_00112AE8(1, 0xFFFF);
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019CB80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00112B60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001130D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00113820);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001139F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019CC88);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019CC8C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019CC90);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019CC94);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019CC98);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019CC9C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019CCA0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019CCA4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019CCA8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019CCAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019CCB0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019CCB4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019CCB8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019CCBC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019CCC0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019CCC4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019CCC8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019CCCC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019CCD0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019CCD4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019CCD8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019CCDC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019CCE0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_101AC0", D_0019CCE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00113BC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00113D00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00113D7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00113DE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00113E28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00113F58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00114008);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001140B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00114158);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0011448C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0011453C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001145E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0011468C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00114738);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0011519C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001155CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00115A00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00115B18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00115BF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00115DC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00115E64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00115F04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00115FA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0011610C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001161AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00116250);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001162F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00116398);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0011643C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001164E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00116584);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00116678);

s32 func_001167F4(s32 arg0) {
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001167FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00116858);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0011689C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00116904);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00116960);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001169D8);

void func_00116A60(void *arg0, s32 arg1) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x4C);
        if (temp_v0 != 0) {
            func_00116AA0((s32) arg0, temp_v0 + (arg1 * 0x34));
        }
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00116AA0);

s32 func_00116B6C(void *arg0, void *arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (M2C_FIELD(arg0, s32 *, 0) == M2C_FIELD(arg1, s32 *, 0)) {
        if ((M2C_FIELD(arg0, s32 *, 4) == M2C_FIELD(arg1, s32 *, 4)) && (M2C_FIELD(arg0, s32 *, 8) == M2C_FIELD(arg1, s32 *, 8))) {
            var_a2 = M2C_FIELD(arg0, s32 *, 0xC) != M2C_FIELD(arg1, s32 *, 0xC);
        }
    }
    return var_a2;
}

s32 func_00116BB8(void *arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (M2C_FIELD(arg0, s32 *, 0x48) == 0) {
        M2C_FIELD(arg0, s32 *, 0x48) = 1;
        var_v1 = 0;
    }
    return var_v1;
}

s32 func_00116BD8(void *arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (M2C_FIELD(arg0, s32 *, 0x48) != 0) {
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00116BF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00116CE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00116D44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00116E14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00116EE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00116FB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00117084);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00117100);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_0011717C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001171F8);

s32 func_00117274(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A4930 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_001172A0(void) {
    return D_001A4930;
}

s32 func_001172AC(void) {
    return D_001A4930;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_001172B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_101AC0", func_00117338);

