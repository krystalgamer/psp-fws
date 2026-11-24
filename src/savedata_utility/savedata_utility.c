#include "common.h"
#include "savedata_utility_decls.h"

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000024);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000000AC);

INCLUDE_ASM("nonmatchings/savedata_utility", module_start);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", module_stop);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000015C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000190);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000001B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000001C0);
#endif

#if FW_VERSION != 100
s32 module_stop(void) {
    func_00023820();
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000015C);
#endif

#if FW_VERSION != 100
void func_000001B4(void) {
    func_00000B34((void *) D_00025B10);
}
#endif

#if FW_VERSION != 100
u8 func_000001D8(void) {
    return D_00025B14;
}
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024288);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_0002429C);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000242B4);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000242CC);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000242D8);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F200);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000242E8);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000242FC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000001E4);

#if FW_VERSION == 100
void func_000003B8(void) {
    if ((D_000205B5 == 0) && (D_000205B0 != 0)) {
        D_000205B4 = 1;
    }
}
#endif

#if FW_VERSION != 100
void func_000003D8(void) {
    if ((D_00025B15 == 0) && (D_00025B10 != 0)) {
        D_00025B14 = 1;
    }
}
#endif

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000404);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000440);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000464);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000494);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000004D8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000004F4);
#endif

#if FW_VERSION == 100
s32 func_000008C0(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x54), s32 *, 0x30);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000051C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000610);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000704);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000800);
#endif

#if FW_VERSION != 100
s32 func_00000A78(struct Unk_func_00000A78_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk10;
    if (temp_v0 == 0) {

    } else {
        func_0000BCEC(temp_v0, 0);
    }
    if (arg0->unk18 == 0) {

    } else {
        func_000113C4(arg0->unk18);
        func_000113AC(arg0->unk18);
    }
    if (arg0->unk24 != 0) {
        scePaf_4FC2470C(arg0->unk24, 0);
    }
    return func_000175D0(arg0) != 0;
}
#endif

#if FW_VERSION != 100
s32 func_00000B08(struct Unk_func_00000B08_0 *arg0) {
    return arg0->unk50->unk30;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000B14);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000008EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000AF0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000B40);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000BEC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000C78);
#endif

#if FW_VERSION != 100
void func_00000B34(struct Unk_func_00000B34_0 *arg0) {
    if (arg0->unkC->unk38 != 0) {
        func_000175E0((s32) arg0, 2);
    } else {
        func_000175E0((s32) arg0, 0);
        func_00012848((s32) arg0->unkC, (s32) &func_00001438, (s32) arg0, 0, 0x8010300B);
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000B9C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000BCC);
#endif

#if FW_VERSION != 100
s32 func_00000C70(struct Unk_func_00000B08_0 *arg0, struct Unk_func_00000C70_1 *arg1) {
    s32 var_a2;

    var_a2 = 0;
    if (func_00000B08(arg0) == 7) {
        var_a2 = func_00017598(arg0, arg1);
    }
    return var_a2;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000CC8);
#endif

#if FW_VERSION != 100
s32 func_00000D58(struct Unk_func_00000D58_0 *arg0) {
    return arg0->unk18;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000D60);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000E40);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024390);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000243B0);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000EA8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000D7C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000E3C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000EA4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000F90);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F304);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001040);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024438);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024448);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024458);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024468);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000F88);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001230);
#endif

#if FW_VERSION == 100
void func_00001470(void) {

}
#endif

#if FW_VERSION == 100
void func_00001478(void *arg0, void *arg1) {
    s32 temp_s0;
    void **temp_a0;

    temp_s0 = D_000205B0;
    if (temp_s0 != 0) {
        if (M2C_FIELD(arg1, s32 *, 0xC) != -1) {
            if (M2C_FIELD(temp_s0, s32 *, 0x58) >= 3) {
                func_00013DD0(M2C_FIELD(temp_s0, s32 *, 0x2C), M2C_FIELD(arg0, s32 *, 0x1CC));
                func_00013F4C(M2C_FIELD(temp_s0, s32 *, 0x2C), M2C_FIELD(arg0, s32 *, 0x1CC), M2C_FIELD(arg1, s32 *, 0xC));
                temp_a0 = M2C_FIELD(temp_s0, void ***, 0x20);
                M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, void *), 0xC)(temp_a0, arg0);
                func_0000819C((s32) M2C_FIELD(temp_s0, void ***, 0x20), (s32) arg0);
            }
        }
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001518);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000015CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000068E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000164C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001700);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001054);
#endif

#if FW_VERSION != 100
void func_00001290(struct Unk_func_00001290_0 *arg0, struct Unk_func_00001290_1 *arg1) {
    s32 temp_s0;
    struct Unk_vt_func_00001290_temp_a0 **temp_a0;

    temp_s0 = D_00025B10;
    if (temp_s0 != 0) {
        if (arg1->unkC != -1) {
            func_00013DD0(M2C_FIELD(temp_s0, s32 *, 0x1C), arg0->unk1CC);
            func_00013F4C(M2C_FIELD(temp_s0, s32 *, 0x1C), arg0->unk1CC, arg1->unkC);
            temp_a0 = M2C_FIELD(temp_s0, void ***, 0x10);
            (*temp_a0)->unkC(temp_a0, arg0);
            func_0000CD18((s32) M2C_FIELD(temp_s0, void ***, 0x10), (s32) arg0);
        }
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000131C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000013AC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001404);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001438);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000146C);
#endif

#if FW_VERSION != 100
void func_000014E8(struct Unk_vt_func_000014E8_arg0 **arg0, M2C_UNK arg1) {
    func_0000A290(arg1);
    func_000142C4(2, 0);
    sceVshCommonGui_4704D5BD(0);
    (*arg0)->unk50(arg0, 0);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001538);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000157C);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility", func_000015C0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001438);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001A98);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001CA4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001FF4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000020E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000021DC);
#endif

#if FW_VERSION != 100
void func_000015EC(struct Unk_func_000015EC_0 *arg0, s32 arg1) {
    struct Unk_func_000015EC_temp_v0 *temp_v0;

    temp_v0 = arg0->unk4->unk50;
    if (temp_v0 != NULL) {
        temp_v0->unk1C = arg1;
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001604);
#endif

#if FW_VERSION != 100
void func_00001674(void) {
    func_00001604();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001690);
#endif

#if FW_VERSION != 100
void func_00001718(struct Unk_func_00001718_0 *arg0, s32 arg1) {
    struct Unk_func_00001718_temp_a0 *temp_a0;

    temp_a0 = arg0->unk4;
    temp_a0->unk4E = 1;
    func_00000B9C(arg0->unk4, func_00000BCC(arg1, func_00000B08(temp_a0)));
    if (arg0->unk9 == 0) {

    } else {
        scePaf_49CE42F7(scePaf_D4FAE7D0("system_plugin"), "snd_cancel");
    }
    func_00012848(arg0->unk4->unkC, (s32) func_0000181C, (s32) arg0->unk4, 0, 0);
}
#endif

#if FW_VERSION != 100
void func_000017BC(struct Unk_func_000017BC_0 *arg0, M2C_UNK arg1) {
    struct Unk_func_000017BC_temp_a0 *temp_a0;

    temp_a0 = arg0->unk4;
    temp_a0->unk4E = 1;
    func_00000B9C(arg0->unk4, func_00000BCC(arg1, func_00000B08(temp_a0)));
    func_0000181C(arg0->unk4, 0);
}
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024494);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002248);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000023E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002454);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000244A4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000244C4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000244D8);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000244F0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000024F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000026C0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000244F4);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024508);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024524);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024548);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_0002456C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002738);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002860);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002910);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002A50);
#endif

#if FW_VERSION == 100
void func_00002AD8(s32 arg0) {
    func_000026C0(arg0);
}
#endif

#if FW_VERSION == 100
void func_00002AF4(s32 arg0) {
    func_00002738(arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002B10);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002B34);
#endif

#if FW_VERSION == 100
s32 func_00002C84(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_75062BCF(arg1) == 0) {
        var_v1 = func_00009010(M2C_FIELD(arg0, s32 *, 0x28), 0, 0x800);
    }
    return var_v1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002CD0);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility", D_0002458C);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000245A4);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000245CC);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F4DC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F4F4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F514);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F534);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000245E4);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000245FC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024618);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024630);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024644);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024664);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024688);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000246AC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000246D0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000246EC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024714);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024734);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility", D_0002474C);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F584);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F598);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002DA8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002E18);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000030FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003498);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000038C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000039A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003AA0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F5DC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F5EC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F604);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F608);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024764);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024784);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003B24);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003C60);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000247A4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000247C0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000247E0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000247F4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024808);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024828);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024848);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024868);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024880);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000248A0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000181C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000187C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000018B0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001950);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001A70);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001AC0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001BA8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001C90);
#endif

#if FW_VERSION == 100
void func_00001D3C(s32 arg0) {
    func_00002DA8(arg0);
}
#else
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001D3C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003DF0);
#endif

#if FW_VERSION == 100
void func_00003EEC(s32 arg0) {
    func_00003C60(arg0);
}
#endif

#if FW_VERSION == 100
void func_00003F08(s32 arg0) {
    func_00003C60(arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003F24);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003FDC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003FF8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004040);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000041B8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001D7C);
#endif

#if FW_VERSION != 100
void func_00001DF0(struct Unk_func_00001DF0_0 *arg0, s32 arg1, s8 arg2, s8 arg3) {
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
    arg0->unk9 = arg3;
    arg0->unk0 = &D_00024CE8;
}
#endif

#if FW_VERSION != 100
void func_00001E0C(struct Unk_func_00001E0C_0 *arg0, s32 arg1, s8 arg2, s8 arg3) {
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
    arg0->unk9 = arg3;
    arg0->unk0 = &D_00024CE8;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001E28);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001EB4);
#endif

#if FW_VERSION != 100
void func_00002084(struct Unk_func_00002084_0 *arg0, s32 arg1) {
    struct Unk_vt_func_00002084_temp_a0 **temp_a0;

    func_000068E4(arg1, scePaf_4842A808(M2C_FIELD(arg0->unk4, s32 *, 4), &D_000245CC));
    temp_a0 = arg0->unk4;
    func_000082A4((*temp_a0)->unk10(temp_a0));
    func_0001A860(0x20000);
}
#endif

#if FW_VERSION != 100
void func_000020F4(struct Unk_func_000020F4_0 *arg0, s32 arg1) {
    func_000068E4(arg1, scePaf_4842A808(arg0->unk4->unk4, &D_000245E4));
}
#endif

#if FW_VERSION != 100
void func_00002134(M2C_UNK **arg0, s32 arg1) {
    func_00001DF0(arg0, arg1, 1, 0);
    *arg0 = &D_00024C80;
}
#endif

#if FW_VERSION != 100
void func_0000216C(M2C_UNK **arg0, s32 arg1) {
    func_00001DF0(arg0, arg1, 1, 0);
    *arg0 = &D_00024C80;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000021A4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000225C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002404);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002504);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000025D0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002624);
#endif

#if FW_VERSION != 100
void func_000026EC(M2C_UNK **arg0, s32 arg1) {
    func_00001DF0(arg0, arg1, 0, 1);
    *arg0 = &D_00024C18;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002724);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002854);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000029C8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002AE8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002B48);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002B94);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002C2C);
#endif

#if FW_VERSION != 100
void func_00002D04(struct Unk_func_00002D04_0 *arg0, s32 arg1, s8 arg2) {
    arg0->unk4 = arg1;
    arg0->unk9 = arg2;
    arg0->unk0 = &D_00024BB0;
    arg0->unk8 = 0;
    scePaf_6829D7AF((s32) ((u8 *)arg0 + 0xC), 0, 0x10);
    arg0->unk1C = 0;
}
#endif

#if FW_VERSION != 100
void func_00002D50(struct Unk_func_00002D50_0 *arg0, s32 arg1, s8 arg2) {
    arg0->unk4 = arg1;
    arg0->unk9 = arg2;
    arg0->unk0 = &D_00024BB0;
    arg0->unk8 = 0;
    scePaf_6829D7AF((s32) ((u8 *)arg0 + 0xC), 0, 0x10);
    arg0->unk1C = 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002D9C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002E28);
#endif

#if FW_VERSION != 100
void func_000030D4(struct Unk_func_000030D4_0 *arg0, s32 arg1) {
    struct Unk_vt_func_000030D4_temp_a0 **temp_a0;

    func_000068E4(arg1, scePaf_4842A808(M2C_FIELD(arg0->unk4, s32 *, 4), &D_00024734));
    temp_a0 = arg0->unk4;
    func_000082A4((*temp_a0)->unk10(temp_a0));
    func_0001A860(0x20000);
}
#endif

#if FW_VERSION != 100
void func_00003144(struct Unk_func_00003144_0 *arg0, s32 arg1) {
    func_000068E4(arg1, scePaf_4842A808(arg0->unk4->unk4, &D_0002474C));
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003184);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000032BC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000033C0);
#endif

#if FW_VERSION != 100
void func_00003520(struct Unk_func_00003520_0 *arg0) {
    s32 temp_v0;
    struct Unk_vt_func_00003520_temp_a0 **temp_a0;

    if (arg0 != NULL) {
        temp_v0 = arg0->unk54;
        arg0->unk54 = 0;
        arg0->unk58 = temp_v0;
        arg0->unk0->unkC();
        temp_a0 = arg0->unk60;
        (*temp_a0)->unk30(temp_a0);
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003574);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003680);
#endif

#if FW_VERSION != 100
void func_000036EC(M2C_UNK **arg0, s32 arg1) {
    func_00002D04(arg0, arg1, 0);
    *arg0 = &D_00024B48;
}
#endif

#if FW_VERSION != 100
void func_00003720(M2C_UNK **arg0, s32 arg1) {
    func_00002D04(arg0, arg1, 0);
    *arg0 = &D_00024B48;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003754);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003814);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000394C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003AA4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003BEC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003CDC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003DAC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003EC0);
#endif

#if FW_VERSION != 100
void func_00003FE0(M2C_UNK **arg0, s32 arg1) {
    func_00002D04(arg0, arg1, 1);
    *arg0 = &D_00024AE0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004014);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004144);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000042C0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004428);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004494);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000045A0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004620);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004768);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004858);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004930);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000049B8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004AFC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004BFC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004CB0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004D10);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004D70);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004DFC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004FAC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000506C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000517C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00005474);
#endif

#if FW_VERSION != 100
void func_00005510(struct Unk_func_00005510_0 *arg0, s32 arg1) {
    func_000068E4(arg1, scePaf_4842A808(arg0->unk4->unk4, &D_000248A0));
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00005550);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000055F8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00005714);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000057E0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000058D0);
#endif

#if FW_VERSION != 100
void func_00005A4C(struct Unk_func_00005A4C_0 *arg0) {
    s32 temp_v0;

    temp_v0 = scePaf_DAB59652(arg0->unk4->unk4, &D_00024494);
    if (temp_v0 != 0) {
        func_0000AAC8(temp_v0, (s32) arg0->unk4, 0);
    }
    func_00001A70((s32) arg0);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00005AA4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00005AFC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00005B54);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00005BEC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00005CE8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00005D20);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00005E14);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00005FBC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000060D4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000610C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000622C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000063A0);
#endif

#if FW_VERSION == 100
void func_0000644C(s32 arg0, s32 arg1) {
    func_00013D18(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0001F6D0;
    M2C_FIELD(arg0, s8 *, 0x10) = 1;
}
#else
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000644C);
#endif

#if FW_VERSION == 100
void func_00004290(M2C_UNK **arg0) {
    *arg0 = &D_0001F6D0;
    func_00013D70();
}
#endif

#if FW_VERSION == 100
void func_000042B8(M2C_UNK **arg0) {
    *arg0 = &D_0001F6D0;
    func_00013D70();
}
#endif

#if FW_VERSION == 100
void func_00006484(M2C_UNK **arg0) {
    *arg0 = &D_0001F6D0;
    func_00013D70();
    scePaf_4E67BB08(arg0);
}
#else
INCLUDE_ASM("nonmatchings/savedata_utility", func_00006484);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004318);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004418);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004498);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F658);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004528);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004898);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000064BC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00006578);
#endif

#if FW_VERSION != 100
s32 func_0000671C(struct Unk_vt_func_0000671C_arg0 **arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_75062BCF(arg1) == 0) {
        var_v1 = func_00011584((*arg0)->unk10(arg0), 0, 0x800, 0, 0);
    }
    return var_v1;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00006784);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00006880);
#endif

