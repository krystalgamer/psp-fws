#include "common.h"
#include "savedata_utility_decls.h"

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00000024);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000000AC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", module_start);

s32 module_stop(void) {
    func_00023820();
    return 0;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000015C);

void func_000001B4(void) {
    func_00000B34((void *) D_00025B10);
}

u8 func_000001D8(void) {
    return D_00025B14;
}

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024288);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_0002429C);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000242B4);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000242CC);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000242D8);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000242E8);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000242FC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000001E4);

void func_000003D8(void) {
    if ((D_00025B15 == 0) && (D_00025B10 != 0)) {
        D_00025B14 = 1;
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00000404);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00000440);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00000464);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00000494);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000004D8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000051C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00000610);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00000704);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00000800);

s32 func_00000A78(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_v0 == 0) {

    } else {
        func_0000BCEC(temp_v0, 0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x18) == 0) {

    } else {
        func_000113C4(M2C_FIELD(arg0, s32 *, 0x18));
        func_000113AC(M2C_FIELD(arg0, s32 *, 0x18));
    }
    if (M2C_FIELD(arg0, s32 *, 0x24) != 0) {
        scePaf_4FC2470C(M2C_FIELD(arg0, s32 *, 0x24), 0);
    }
    return func_000175D0(arg0) != 0;
}

s32 func_00000B08(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x50), s32 *, 0x30);
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00000B14);

void func_00000B34(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38) != 0) {
        func_000175E0((s32) arg0, 2);
    } else {
        func_000175E0((s32) arg0, 0);
        func_00012848((s32) M2C_FIELD(arg0, void **, 0xC), (s32) &func_00001438, (s32) arg0, 0, 0x8010300B);
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00000B9C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00000BCC);

s32 func_00000C70(void *arg0, void *arg1) {
    s32 var_a2;

    var_a2 = 0;
    if (func_00000B08(arg0) == 7) {
        var_a2 = func_00017598(arg0, arg1);
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00000CC8);

s32 func_00000D58(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00000D60);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00000E40);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024390);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000243B0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00000EA8);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024438);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024448);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024458);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024468);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00000F88);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00001054);

void func_00001290(void *arg0, void *arg1) {
    s32 temp_s0;
    void **temp_a0;

    temp_s0 = D_00025B10;
    if (temp_s0 != 0) {
        if (M2C_FIELD(arg1, s32 *, 0xC) != -1) {
            func_00013DD0(M2C_FIELD(temp_s0, s32 *, 0x1C), M2C_FIELD(arg0, s32 *, 0x1CC));
            func_00013F4C(M2C_FIELD(temp_s0, s32 *, 0x1C), M2C_FIELD(arg0, s32 *, 0x1CC), M2C_FIELD(arg1, s32 *, 0xC));
            temp_a0 = M2C_FIELD(temp_s0, void ***, 0x10);
            M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, void *), 0xC)(temp_a0, arg0);
            func_0000CD18((s32) M2C_FIELD(temp_s0, void ***, 0x10), (s32) arg0);
        }
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000131C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000013AC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00001404);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00001438);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000146C);

void func_000014E8(void **arg0, M2C_UNK arg1) {
    func_0000A290(arg1);
    func_000142C4(2, 0);
    sceVshCommonGui_4704D5BD(0);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **, M2C_UNK), 0x50)(arg0, 0);
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00001538);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000157C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000015C0);

void func_000015EC(void *arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x50);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x1C) = arg1;
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00001604);

void func_00001674(void) {
    func_00001604();
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00001690);

void func_00001718(void *arg0, s32 arg1) {
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(temp_a0, s8 *, 0x4E) = 1;
    func_00000B9C(M2C_FIELD(arg0, void **, 4), func_00000BCC(arg1, func_00000B08(temp_a0)));
    if (M2C_FIELD(arg0, u8 *, 9) == 0) {

    } else {
        scePaf_49CE42F7(scePaf_D4FAE7D0("system_plugin"), "snd_cancel");
    }
    func_00012848(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0xC), (s32) func_0000181C, (s32) M2C_FIELD(arg0, void **, 4), 0, 0);
}

void func_000017BC(void *arg0, M2C_UNK arg1) {
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(temp_a0, s8 *, 0x4E) = 1;
    func_00000B9C(M2C_FIELD(arg0, void **, 4), func_00000BCC(arg1, func_00000B08(temp_a0)));
    func_0000181C(M2C_FIELD(arg0, void **, 4), 0);
}

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024494);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000244A4);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000244C4);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000244D8);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000244F0);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000244F4);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024508);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024524);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024548);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_0002456C);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_0002458C);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000245A4);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000245CC);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000245E4);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000245FC);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024618);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024630);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024644);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024664);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024688);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000246AC);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000246D0);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000246EC);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024714);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024734);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_0002474C);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024764);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024784);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000247A4);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000247C0);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000247E0);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000247F4);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024808);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024828);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024848);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024868);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024880);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000248A0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000181C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000187C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000018B0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00001950);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00001A70);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00001AC0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00001BA8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00001C90);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00001D3C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00001D7C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00001DF0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00001E0C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00001E28);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00001EB4);

void func_00002084(void *arg0, s32 arg1) {
    void **temp_a0;

    func_000068E4(arg1, scePaf_4842A808(M2C_FIELD(M2C_FIELD(arg0, void ***, 4), s32 *, 4), &D_000245CC));
    temp_a0 = M2C_FIELD(arg0, void ***, 4);
    func_000082A4(M2C_FIELD(*temp_a0, s32 (**)(void **), 0x10)(temp_a0));
    func_0001A860(0x20000);
}

void func_000020F4(void *arg0, s32 arg1) {
    func_000068E4(arg1, scePaf_4842A808(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4), &D_000245E4));
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00002134);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000216C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000021A4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000225C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00002404);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00002504);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000025D0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00002624);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000026EC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00002724);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00002854);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000029C8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00002AE8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00002B48);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00002B94);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00002C2C);

void func_00002D04(void *arg0, s32 arg1, s8 arg2) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s8 *, 9) = arg2;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00024BB0;
    M2C_FIELD(arg0, s8 *, 8) = 0;
    scePaf_6829D7AF((s32) (arg0 + 0xC), 0, 0x10);
    M2C_FIELD(arg0, s8 *, 0x1C) = 0;
}

void func_00002D50(void *arg0, s32 arg1, s8 arg2) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s8 *, 9) = arg2;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00024BB0;
    M2C_FIELD(arg0, s8 *, 8) = 0;
    scePaf_6829D7AF((s32) (arg0 + 0xC), 0, 0x10);
    M2C_FIELD(arg0, s8 *, 0x1C) = 0;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00002D9C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00002E28);

void func_000030D4(void *arg0, s32 arg1) {
    void **temp_a0;

    func_000068E4(arg1, scePaf_4842A808(M2C_FIELD(M2C_FIELD(arg0, void ***, 4), s32 *, 4), &D_00024734));
    temp_a0 = M2C_FIELD(arg0, void ***, 4);
    func_000082A4(M2C_FIELD(*temp_a0, s32 (**)(void **), 0x10)(temp_a0));
    func_0001A860(0x20000);
}

void func_00003144(void *arg0, s32 arg1) {
    func_000068E4(arg1, scePaf_4842A808(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4), &D_0002474C));
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00003184);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000032BC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000033C0);

void func_00003520(void *arg0) {
    s32 temp_v0;
    void **temp_a0;

    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x54);
        M2C_FIELD(arg0, s32 *, 0x54) = 0;
        M2C_FIELD(arg0, s32 *, 0x58) = temp_v0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(), 0xC)();
        temp_a0 = M2C_FIELD(arg0, void ***, 0x60);
        M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 0x30)(temp_a0);
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00003574);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00003680);

void func_000036EC(M2C_UNK **arg0, s32 arg1) {
    func_00002D04(arg0, arg1, 0);
    *arg0 = &D_00024B48;
}

void func_00003720(M2C_UNK **arg0, s32 arg1) {
    func_00002D04(arg0, arg1, 0);
    *arg0 = &D_00024B48;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00003754);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00003814);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000394C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00003AA4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00003BEC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00003CDC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00003DAC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00003EC0);

void func_00003FE0(M2C_UNK **arg0, s32 arg1) {
    func_00002D04(arg0, arg1, 1);
    *arg0 = &D_00024AE0;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00004014);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00004144);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000042C0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00004428);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00004494);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000045A0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00004620);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00004768);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00004858);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00004930);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000049B8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00004AFC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00004BFC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00004CB0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00004D10);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00004D70);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00004DFC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00004FAC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000506C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000517C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00005474);

void func_00005510(void *arg0, s32 arg1) {
    func_000068E4(arg1, scePaf_4842A808(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4), &D_000248A0));
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00005550);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000055F8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00005714);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000057E0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000058D0);

void func_00005A4C(void *arg0) {
    s32 temp_v0;

    temp_v0 = scePaf_DAB59652(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4), &D_00024494);
    if (temp_v0 != 0) {
        func_0000AAC8(temp_v0, (s32) M2C_FIELD(arg0, void **, 4), 0);
    }
    func_00001A70((s32) arg0);
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00005AA4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00005AFC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00005B54);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00005BEC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00005CE8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00005D20);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00005E14);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00005FBC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000060D4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000610C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000622C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000063A0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000644C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00006484);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000064BC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00006578);

s32 func_0000671C(void **arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_75062BCF(arg1) == 0) {
        var_v1 = func_00011584(M2C_FIELD(*arg0, s32 (**)(void **), 0x10)(arg0), 0, 0x800, 0, 0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00006784);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00006880);

