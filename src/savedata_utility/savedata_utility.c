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

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000001B4);

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

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000068E4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00006934);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00006964);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00006A00);

void func_00006AB4(M2C_UNK **arg0) {
    *arg0 = &D_00024D50;
}

void func_00006AC4(M2C_UNK **arg0) {
    *arg0 = &D_00024D50;
    scePaf_4E67BB08();
}

void func_00006AEC(M2C_UNK **arg0) {
    *arg0 = &D_00024D50;
    scePaf_4E67BB08();
}

void func_00006B14(M2C_UNK **arg0) {
    *arg0 = &D_00024D50;
}

void func_00006B24(M2C_UNK **arg0) {
    *arg0 = &D_00024D50;
}

void func_00006B34(M2C_UNK **arg0) {
    *arg0 = &D_00024D50;
    scePaf_4E67BB08();
}

void func_00006B5C(void *arg0) {
    func_000072DC(M2C_FIELD(arg0, s32 *, 4));
}

void func_00006B78(M2C_UNK **arg0) {
    *arg0 = &D_00024D50;
}

void func_00006B88(M2C_UNK **arg0) {
    *arg0 = &D_00024D50;
    scePaf_4E67BB08();
}

void func_00006BB0(void *arg0) {
    func_000075F4(M2C_FIELD(arg0, s32 *, 4));
}

void func_00006BCC(M2C_UNK **arg0) {
    *arg0 = &D_00024D50;
    scePaf_4E67BB08();
}

void func_00006BF4(M2C_UNK **arg0) {
    *arg0 = &D_00024D50;
}

void func_00006C04(M2C_UNK **arg0) {
    *arg0 = &D_00024D50;
}

void func_00006C14(M2C_UNK **arg0) {
    *arg0 = &D_00024D50;
    scePaf_4E67BB08();
}

void func_00006C3C(void *arg0) {
    func_000072DC(M2C_FIELD(arg0, s32 *, 4));
}

void func_00006C58(M2C_UNK **arg0) {
    *arg0 = &D_00024D50;
}

void func_00006C68(M2C_UNK **arg0) {
    *arg0 = &D_00024D50;
    scePaf_4E67BB08();
}

void func_00006C90(void *arg0) {
    func_000075F4(M2C_FIELD(arg0, s32 *, 4));
}

void func_00006CAC(M2C_UNK **arg0) {
    *arg0 = &D_00024D50;
    scePaf_4E67BB08();
}

void func_00006CD4(M2C_UNK **arg0) {
    *arg0 = &D_00024D50;
}

void func_00006CE4(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x1D) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    func_000075F4(M2C_FIELD(arg0, s32 *, 4));
}

void func_00006D08(M2C_UNK **arg0) {
    *arg0 = &D_00024D50;
}

void func_00006D18(M2C_UNK **arg0) {
    *arg0 = &D_00024D50;
    scePaf_4E67BB08();
}

void func_00006D40(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x1D) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    func_000072DC(M2C_FIELD(arg0, s32 *, 4));
}

void func_00006D64(M2C_UNK **arg0) {
    *arg0 = &D_00024D50;
}

void func_00006D74(M2C_UNK **arg0) {
    *arg0 = &D_00024D50;
    scePaf_4E67BB08();
}

void func_00006D9C(M2C_UNK **arg0) {
    *arg0 = &D_00024D50;
}

void func_00006DAC(M2C_UNK **arg0) {
    *arg0 = &D_00024D50;
    scePaf_4E67BB08();
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00006DD4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00006FF4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000070F0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000727C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000072DC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00007438);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000074A0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000075F4);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024940);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000249A8);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024A10);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024A78);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024AE0);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024B48);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024BB0);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024C18);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024C80);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024CE8);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024D50);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024DB0);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024DB4);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024DC4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00007754);

void func_000078B8(void *arg0, s32 arg1) {
    if (func_00010828() >= 2) {

    } else if ((func_00011100(M2C_FIELD(arg0, s32 *, 0x14)) != 0) && (func_00000BCC(arg1, func_00000B08(arg0)), (func_00016CE0(M2C_FIELD(arg0, s32 *, 0x10)) != 0))) {
        func_00000CC8(arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00007938);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00007A2C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00007BF8);

void func_00007C50(M2C_UNK **arg0) {
    *arg0 = &D_00024E28;
    func_00011324((s32) arg0);
}

void func_00007C78(M2C_UNK **arg0) {
    *arg0 = &D_00024E28;
    func_00011324((s32) arg0);
}

void func_00007CA0(M2C_UNK **arg0) {
    *arg0 = &D_00024E28;
    func_00011324((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00007CD8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00007D30);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00007DA0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00007E8C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00007FF8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000081EC);

s32 func_000082A4(s32 arg0) {
    func_000113C4(arg0);
    return 0;
}

s32 func_000082C4(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = arg1 >> 5;
    var_v0 = 0;
    if ((M2C_FIELD(arg0, s32 *, 4) - 1) >= arg1) {
        var_v0 = ((u32) M2C_FIELD(((temp_v0 * 4) + arg0), u32 *, 0x14) >> (arg1 - (temp_v0 << 5))) & 1;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00008300);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00008364);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00008504);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000859C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00008954);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00008DC4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00008DFC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00008E94);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000090CC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000093B8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00009448);

void func_00009480(M2C_UNK **arg0) {
    *arg0 = &D_00024EF8;
    func_00013D70();
}

void func_000094A8(M2C_UNK **arg0) {
    *arg0 = &D_00024EF8;
    func_00013D70();
}

void func_000094D0(M2C_UNK **arg0) {
    *arg0 = &D_00024EF8;
    func_00013D70();
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024E28);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00009508);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00009644);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000096C4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000976C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00009B90);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00009C6C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000A25C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000A290);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000A2C4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000A720);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000A82C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000A940);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024E5C);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024E64);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024E78);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024E84);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024E90);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024E98);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024E9C);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024EB0);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024EC8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000AAC8);

void func_0000AC4C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_0000AD38();
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000AC6C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000AD38);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000AD58);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000AD88);

void func_0000ADB8(M2C_UNK **arg0) {
    *arg0 = &D_00024F10;
    func_00011A98((s32) arg0);
}

void func_0000ADE0(M2C_UNK **arg0) {
    *arg0 = &D_00024F10;
    func_00011A98((s32) arg0);
}

void func_0000AE08(M2C_UNK **arg0) {
    *arg0 = &D_00024F10;
    func_00011A98((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000AE40);

void func_0000AED4(void *arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x24);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x5C) = arg1;
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000AEE8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000AF30);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000AF60);

void func_0000AF90(M2C_UNK **arg0) {
    *arg0 = &D_00024F40;
    func_00015770((s32) arg0);
}

void func_0000AFB8(M2C_UNK **arg0) {
    *arg0 = &D_00024F40;
    func_00015770((s32) arg0);
}

void func_0000AFE0(M2C_UNK **arg0) {
    *arg0 = &D_00024F40;
    func_00015770((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000B018);

void func_0000B0CC(void *arg0, void *arg1) {
    if (arg1 != NULL) {
        M2C_FIELD(arg0, u8 *, 0xA30) = (u8) M2C_FIELD(arg1, u8 *, 0x500);
    }
    func_00015AAC();
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000B0F4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000B218);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024EF8);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024F10);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000B29C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000B35C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000B3C4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000B3F8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000B42C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000B490);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000B4F4);

void func_0000B560(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    func_00013440();
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000B580);

void func_0000B644(void) {
    func_00015FD0();
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000B660);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000B718);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000B8AC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000B920);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000B9F8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000BAD0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000BBB0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000BCEC);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024F40);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024F48);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024F58);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024F60);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024F74);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000BE34);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000BE8C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000BEC0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000BF1C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000C0F8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000C268);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000C370);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000C430);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000C640);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000C7B0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000C930);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000CA08);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000CBFC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000CD18);

void func_0000CDAC(void *arg0) {
    s32 temp_v0;

    temp_v0 = scePaf_DAB59652(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 4), &D_00024F48);
    if (temp_v0 == 0) {

    } else {
        func_0000CD18((s32) arg0, temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000CDFC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000CF6C);

s32 func_0000CFD4(void *arg0) {
    s32 var_a2;

    var_a2 = 1;
    if (M2C_FIELD(arg0, void **, 0x20) != NULL) {
        func_0000CF6C((s32) arg0);
        if ((func_00013558(M2C_FIELD(arg0, void **, 0x20)) != 0) || (var_a2 = 0, (M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 8) == 1))) {
            var_a2 = func_00016F4C((s32) arg0) != 0;
        }
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000D040);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000D0B8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000D108);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000D1C8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000D1E8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000D268);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000D2E8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000D3C4);

void func_0000D3F4(M2C_UNK **arg0) {
    *arg0 = &D_00024FE8;
    func_00013644((s32) arg0);
}

void func_0000D41C(M2C_UNK **arg0) {
    *arg0 = &D_00024FE8;
    func_00013644((s32) arg0);
}

void func_0000D444(M2C_UNK **arg0) {
    *arg0 = &D_00024FE8;
    func_00013644((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000D47C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000D570);

s32 func_0000D57C(void) {
    return D_00025B24;
}

s32 func_0000D588(void *arg0) {
    s32 var_v1;

    var_v1 = 0x80103002;
    if (arg0 != NULL) {
        var_v1 = 0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x38) >= 2U) {
            func_0000D570(1);
            var_v1 = 0x80103008;
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000D5D4);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024FA8);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024FC8);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024FE8);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00024FF8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000D788);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000D828);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000D8B0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000D954);

s32 func_0000DBE0(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (func_00010828() >= 2) {
        var_v1 = 0x80103002;
        if (arg0 != NULL) {
            var_v1 = 0;
            if (M2C_FIELD(arg0, s8 *, 0x64) != 0) {
                var_v1 = func_0000D828(arg0 + 0x64);
            }
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000DC40);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000DCBC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000DD10);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000DD54);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000DD98);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000DDDC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000DE20);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000DEB0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000DFB8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000E05C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000E120);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000E250);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000E370);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000E3F4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000E440);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000E4AC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000E60C);

void func_0000E6EC(s32 arg0) {
    func_0000E60C(arg0, 6);
}

void func_0000E708(s32 arg0) {
    func_0000E60C(arg0, 8);
}

s32 func_0000E724(void *arg0) {
    s32 var_v1;

    var_v1 = 0x80103002;
    if (arg0 != NULL) {
        var_v1 = 0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x5EC) >= 4U) {
            func_0000D570(0x2F);
            var_v1 = 0x80103008;
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000E770);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000E86C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000E8A0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000EE64);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000F0CC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000F244);

u32 func_0000F420(void *arg0, u32 arg1) {
    u32 var_v1;

    var_v1 = 0;
    if ((arg0 != NULL) && (M2C_FIELD(arg0, s32 *, 0) != 0) && (M2C_FIELD(arg0, s32 *, 4) != 0)) {
        var_v1 = (u32) ((M2C_FIELD(arg0, s32 *, 8) + arg1) - 1) / arg1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000F464);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000F568);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000F6A4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000F6FC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000F7EC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000FAF4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000FB7C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000FD6C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000FF90);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_0002507C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0000FFEC);

void func_000102E0(void) {
    func_0000FAF4();
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000102FC);

s32 func_00010444(s32 arg0) {
    return (arg0 & 1) + __builtin_allegrex_ext(arg0, 1, 1) + __builtin_allegrex_ext(arg0, 2, 1) + __builtin_allegrex_ext(arg0, 3, 1);
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00010464);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00010710);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00010790);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00010828);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00010834);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00010910);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00010A18);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00010A50);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00010A8C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00010BCC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00010C68);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00010CAC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00010E7C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00010EF8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00010F6C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00010F9C);

void func_00010FCC(M2C_UNK **arg0) {
    *arg0 = &D_000250F0;
}

void func_00010FDC(M2C_UNK **arg0) {
    *arg0 = &D_000250F0;
}

void func_00010FEC(M2C_UNK **arg0) {
    *arg0 = &D_000250F0;
    scePaf_4E67BB08();
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00011014);

s32 func_00011044(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001104C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00011068);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00011100);

void func_00011150(s32 arg0) {
    func_00019318(arg0 + 8, arg0 + 0x14, arg0 + 0xC, arg0 + 0x10);
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001117C);

void func_000112D4(M2C_UNK **arg0) {
    *arg0 = &D_000250E0;
    func_000113AC((s32) arg0);
}

void func_000112FC(M2C_UNK **arg0) {
    *arg0 = &D_000250E0;
    func_000113AC((s32) arg0);
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00011324);

void func_0001134C(M2C_UNK **arg0) {
    *arg0 = &D_000250E0;
    func_000113C4((s32) arg0);
}

void func_00011374(M2C_UNK **arg0) {
    *arg0 = &D_000250E0;
    func_000113C4((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000113AC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000113C4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00011424);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000114AC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000114EC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00011584);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000116E0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00011738);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00011794);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000117E0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00011898);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000118C8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00011904);

void func_00011968(M2C_UNK **arg0) {
    *arg0 = &D_00025100;
}

void func_00011978(M2C_UNK **arg0) {
    *arg0 = &D_00025100;
    scePaf_4E67BB08();
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000119A0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00011A1C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00011A98);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00011AD4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00011B10);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00011B60);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00011B78);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000250E0);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000250F0);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025100);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00011BDC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00011C58);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00011CB0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00011DD4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00011DE0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00011E5C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00011EDC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00011F5C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00011F6C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00011FAC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00012000);

void func_000120A4(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    temp_v0 = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_000120E8((s32) arg0, temp_v1 - 0xA);
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000120E8);

void func_000121E0(void) {
}

void func_000121E8(void) {
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000121F0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00012268);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000122E0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00012350);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000123C0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00012434);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001244C);

void func_0001249C(s32 arg0) {
    func_00012CF0(arg0 + 8);
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000124B8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001250C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000126C0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00012714);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00012848);

void func_00012928(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38) = scePaf_A0ED77C4(0, &func_000124B8, arg0, -1, -1, &func_0001250C);
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00012970);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00012980);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000129FC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00012A0C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00012A4C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00012A5C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00012A9C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00012AF0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00012B78);

void func_00012BB4(void **arg0) {
    void *temp_s0;
    void *var_a0;
    void *var_v0;

    var_a0 = *arg0;
    var_v0 = M2C_FIELD(var_a0, void **, 4);
    if (var_v0 != var_a0) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            scePaf_7EC15225(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    scePaf_7EC15225(var_a0);
}

void func_00012C0C(void *arg0) {
    M2C_UNK *temp_v0;
    M2C_UNK *var_v1;
    void *temp_s0;
    void *var_v0;

    var_v1 = M2C_FIELD(arg0, M2C_UNK **, 0);
    var_v0 = M2C_FIELD(var_v1, void **, 4);
    if (var_v0 != var_v1) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            scePaf_7EC15225(var_v0);
            var_v1 = M2C_FIELD(arg0, M2C_UNK **, 0);
            var_v0 = temp_s0;
        } while (temp_s0 != var_v1);
    }
    M2C_FIELD(var_v1, M2C_UNK **, 4) = var_v1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    temp_v0 = M2C_FIELD(arg0, M2C_UNK **, 0);
    *temp_v0 = temp_v0;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00012C68);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00012CF0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00012D64);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00012E6C);

void ***func_00012F10(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    *temp_s0 = M2C_FIELD(temp_v1, void **, 0);
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00012F78);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001300C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001311C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00013214);

void func_000132F0(void) {
    scePaf_5FAC9869();
}

void func_0001330C(void) {
    scePaf_3586BE05();
}

void func_00013328(void) {
    scePaf_545FE2DA();
}

void func_00013344(void) {
    scePaf_10B901E7();
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00013360);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000133AC);

void func_000133F8(M2C_UNK **arg0) {
    *arg0 = &D_00025160;
}

void func_00013408(M2C_UNK **arg0) {
    *arg0 = &D_00025160;
}

void func_00013418(M2C_UNK **arg0) {
    *arg0 = &D_00025160;
    scePaf_4E67BB08();
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00013440);

void func_00013450(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00013458);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000134B8);

s32 func_0001354C(void *arg0) {
    return __builtin_allegrex_ext(M2C_FIELD(arg0, s32 *, 8), 4, 1);
}

s32 func_00013558(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 8) & 0xD8) != 0;
}

s32 func_00013568(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (!((M2C_FIELD(arg0, u8 *, 8) ^ 1) & 1) || (arg1 != M2C_FIELD(arg0, s32 *, 0x10))) {
        var_v1 = 0;
    }
    return var_v1;
}

void func_00013594(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 != 0) {
        scePaf_35F25BA1(0, temp_v0);
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000135D4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001360C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00013644);

void func_0001366C(s32 **arg0) {
    *arg0 = &D_00025148;
    func_000133F8(arg0);
}

void func_00013694(s32 **arg0) {
    *arg0 = &D_00025148;
    func_000133F8(arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000136CC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000136D8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00013704);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00013724);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000137B8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001384C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00013960);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00013A4C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00013B28);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00013B68);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00013BA4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00013BE0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00013C30);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00013CDC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00013D18);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00013D44);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00013D70);

void func_00013D80(M2C_UNK **arg0) {
    *arg0 = &D_00025288;
}

void func_00013D90(M2C_UNK **arg0) {
    *arg0 = &D_00025288;
    scePaf_4E67BB08();
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00013DB8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00013DD0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00013F4C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00014034);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000141B8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001425C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000142C4);

void func_00014344(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    func_000143E4(arg0);
    M2C_FIELD(arg0, s32 *, 0xC) = arg3;
    M2C_FIELD(arg0, s32 *, 0x10) = sceVshCommonGui_10906D79(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

void func_000143E4(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_v0 != 0) {
        sceVshCommonGui_72E652AA(temp_v0);
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
}

void func_00014420(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00014428);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000144AC);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025118);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025138);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025148);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025160);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025170);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025174);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000145D4);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025194);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_0002519C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00014824);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000149D8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00014B8C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00014DD0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00014E34);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00014EEC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00014FA8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00015310);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00015320);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00015388);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00015404);

void func_0001549C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_000156E0();
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000154BC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00015534);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000155C8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000156E0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00015700);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00015738);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00015770);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00015798);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000157C0);

void func_000157FC(s32 arg0) {
    scePaf_6829D7AF(arg0 + 0xA20, 0, 0x10);
    func_00015834(arg0);
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00015834);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00015884);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00015934);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001599C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000159B8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00015A68);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00015AAC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00015B7C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00015BEC);

void func_00015C14(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00015C1C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00015C74);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00015CCC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00015D64);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00015DFC);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025288);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000252A0);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000252A8);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000252B8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00015E9C);

void func_00015F1C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00015F24);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00015FD0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00016138);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000161D4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00016390);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000163E0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001644C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000164B8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00016548);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000165D8);

void func_00016678(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_00017068(arg0 + 0xC);
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000166A4);

void func_0001672C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00016734);

s32 func_00016828(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00016830);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000169EC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00016A44);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00016A78);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00016BBC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00016C7C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00016CE0);

s32 func_00016D54(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00016D5C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00016E94);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00016EC0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00016F4C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00016FD4);

void func_00017010(void **arg0) {
    void *temp_s0;
    void *var_a0;
    void *var_v0;

    var_a0 = *arg0;
    var_v0 = M2C_FIELD(var_a0, void **, 4);
    if (var_v0 != var_a0) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            scePaf_7EC15225(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    scePaf_7EC15225(var_a0);
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00017068);

void ***func_000170C4(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    *temp_s0 = M2C_FIELD(temp_v1, void **, 0);
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001712C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00017174);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000171BC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00017234);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000172AC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001732C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000173B0);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000252E0);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025300);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00017430);

s32 func_00017598(void *arg0, void *arg1) {
    s32 var_v1;
    u8 temp_a0;
    u8 temp_v0;

    var_v1 = 0;
    if (arg1 != NULL) {
        temp_a0 = M2C_FIELD(arg0, u8 *, 0x4C);
        if ((temp_a0 != 0) && ((temp_v0 = M2C_FIELD(arg1, u8 *, 0xA30), var_v1 = 1, (temp_v0 == 0)) || (temp_a0 >= temp_v0))) {
            var_v1 = 0;
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000175D0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000175E0);

void func_000175FC(void) {
}

void func_00017604(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x4D) = arg1;
}

s32 func_0001760C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}

M2C_UNK *func_00017614(void) {
    return &D_00025B3C;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00017620);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001764C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00017678);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025348);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000176AC);

s32 func_000176EC(void *arg0) {
    scePaf_6829D7AF((s32) &D_00025B2C, 0, 0x10);
    scePaf_F95EA3F1(&D_00025B2C, arg0, 0x10);
    func_00022CF0(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 8));
    scePaf_6829D7AF((s32) &D_00025C48, 0, 0xC);
    return 0;
}

s32 func_00017760(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00017768);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001784C);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025370);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_0002537C);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025390);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000179AC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00017CCC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00017D48);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000253C8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00017DD0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00017EBC);

s32 func_00017F54(s32 arg0, u32 arg1) {
    return ((s32) (arg0 + 1) / (s32) (arg1 >> 5)) + 1;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00017F74);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00018040);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000181D0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00018358);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025400);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_0002540C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00018498);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000186CC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000187C8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00018924);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000189DC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00018A08);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00018A6C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00018AF4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00018B60);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00018BF4);

s32 func_00018C28(void) {
    return 0x1330;
}

void func_00018C30(s32 arg0, s32 arg1) {
    func_00017DD0(arg0, (s32) &D_00025458, arg1);
}

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025458);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025464);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_0002546C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00018C54);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00018D4C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00018E3C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00018EE8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00018F68);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00018FC4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00019048);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00019154);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000192E0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00019318);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000193D4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001948C);

void func_00019610(s32 arg0, s32 arg1) {
    func_0001948C(arg0, arg1, 0);
}

void func_0001962C(s32 arg0, s32 arg1) {
    func_0001948C(arg0, arg1, 1);
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00019648);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025498);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000254A4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00019820);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00019930);

void func_00019A20(s32 arg0) {
    if (func_00019820() >= 0) {
        func_00019930(arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00019A54);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00019AA0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00019AFC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00019C08);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000254C4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00019C5C);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000254E4);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000254EC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00019DE0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00019EE0);

void func_0001A2B8(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;

    temp_a1 = arg1 * 2;
    *arg0 = (*arg0 & ~(3 << temp_a1)) | (arg2 << temp_a1);
}

void func_0001A2E0(s32 *arg0, s32 arg1) {
    *arg0 &= ~(3 << arg1);
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001A2FC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001A30C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001A320);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001A338);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001A59C);

void func_0001A5C0(void *arg0) {
    s32 temp_v1;

    if (arg0 != NULL) {
        func_0001F558(M2C_FIELD(arg0, s32 *, 8));
        temp_v1 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_v1 != 0) {
            func_00017678(temp_v1);
            M2C_FIELD(arg0, s32 *, 0) = 0;
        }
        scePaf_6829D7AF((s32) arg0, 0, 0x10C);
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001A618);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001A6E0);

s32 func_0001A848(void *arg0) {
    s32 var_v0;

    var_v0 = 0x80084002;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x100);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001A860);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001A8D4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001A910);

s32 func_0001A91C(void) {
    s32 var_a0;

    var_a0 = 0;
    if (M2C_FIELD(&D_00025C48, s32 *, 0) != 0) {
        var_a0 = M2C_FIELD(&D_00025C48, s32 *, 4);
    }
    return var_a0;
}

void func_0001A93C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg4 != 1) {
        func_0001A970(arg0, arg1, arg2, arg3);
    } else {
        func_0001AB50(arg0, arg1, arg2, arg3);
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001A970);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001AB50);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001AE50);

void func_0001AFBC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg4 != 1) {
        func_0001AFF0(arg0, arg1, arg2, arg3);
    } else {
        func_0001B128(arg0, arg1, arg2);
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001AFF0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001B128);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025530);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001B3D4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001B5D0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001B6B4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001B7E4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001B8A4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001B948);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001BA70);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001BB30);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001BCE0);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025560);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_0002556C);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025580);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025598);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000255A8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001BDA0);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000255C8);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000255DC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001BE90);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001BFF0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001C05C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001C2E0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001C360);

M2C_UNK *func_0001C3B8(s32 arg0) {
    M2C_UNK *var_v0;

    var_v0 = NULL;
    if (!(arg0 & 0xFF)) {
        var_v0 = &D_000256A8;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001C3D4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001C454);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001C520);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001C564);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001C9EC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001CBCC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001CC78);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001CE2C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001CFB4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001D124);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001D3A0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001DB94);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001E214);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001E4F4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001E660);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001E9A4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001EC3C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001F0E0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001F1E8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001F558);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001F644);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001F7C4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001FB7C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001FBC4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001FCA8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0001FDF8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0002055C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000205C4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0002061C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000207AC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00020844);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00020A0C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00020A64);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00020ADC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00020B4C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00020BD8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00020D60);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00020EF4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00021074);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0002126C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00021384);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00021498);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0002195C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00021D20);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00021DF4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00022198);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00022260);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000223B8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000224BC);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000255FC);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025604);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025614);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025624);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025634);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025640);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025654);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025668);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025678);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025684);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_00025690);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_0002569C);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000256A8);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000256B4);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000256C0);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000256C8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00022684);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_0002293C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00022A0C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00022AE8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00022CF0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00022D64);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00022DB8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00022DF4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00022EB0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00022F44);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00022FD8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00023050);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00023120);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00023194);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000231F4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00023290);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00023380);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_00023484);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000235F4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", func_000237C8);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility", D_000256F0);
