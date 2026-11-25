#include "common.h"
#include "savedata_utility_decls.h"

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000024);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000000AC);

INCLUDE_ASM("nonmatchings/savedata_utility", module_start);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", module_stop);

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000015C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000190);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000001B4);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000001C0);
#else
s32 module_stop(void) {
    func_00023820();
    return 0;
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000015C);

void func_000001B4(void) {
    func_00000B34((void *) D_00025B10);
}

u8 func_000001D8(void) {
    return D_00025B14;
}
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024288);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_0002429C);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000242B4);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000242CC);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000242D8);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F200);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000242E8);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000242FC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000001E4);

#if FW_VERSION < 282
void func_000003B8(void) {
    if ((D_000205B5 == 0) && (D_000205B0 != 0)) {
        D_000205B4 = 1;
    }
}
#else
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

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000544);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000608);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000006CC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000798);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000008A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000004F4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000008C0(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x58), s32 *, 0x30);
}
#endif

#if FW_VERSION == 100
s32 func_000008C0(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x54), s32 *, 0x30);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000920);

void func_00000B14(void *arg0) {
    if (func_0000ABD8(M2C_FIELD(arg0, void **, 0x18)) != 0) {
        func_000124E0((s32) arg0, 2);
    } else {
        func_000124E0((s32) arg0, 0);
        func_0000ADC4((s32) M2C_FIELD(arg0, void **, 0x18), (s32) &func_00001DE0, (s32) arg0, 0x8010300B);
    }
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_000009A8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000051C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000610);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000704);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000800);

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

s32 func_00000B08(struct Unk_func_00000B08_0 *arg0) {
    return arg0->unk50->unk30;
}
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000B14);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000008EC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000AF0);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000B40);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000BEC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000C00);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000212F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000C78);
#endif

#if FW_VERSION == 282
void func_00000B34(struct Unk_func_00000B34_0 *arg0) {
    if (arg0->unkC->unk38 != 0) {
        func_000175E0((s32) arg0, 2);
    } else {
        func_000175E0((s32) arg0, 0);
        func_00012848((s32) arg0->unkC, (s32) &func_00001438, (s32) arg0, 0, 0x8010300B);
    }
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000B9C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000BCC);

s32 func_00000C70(struct Unk_func_00000B08_0 *arg0, struct Unk_func_00000C70_1 *arg1) {
    s32 var_a2;

    var_a2 = 0;
    if (func_00000B08(arg0) == 7) {
        var_a2 = func_00017598(arg0, arg1);
    }
    return var_a2;
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000CC8);

s32 func_00000D58(struct Unk_func_00000D58_0 *arg0) {
    return arg0->unk18;
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000D60);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000E40);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024390);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000243B0);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000EA8);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000D40);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000D7C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000E3C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000F80);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000EA4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000F90);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F304);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001040);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024438);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024448);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024458);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00021454);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024468);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000F88);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001230);

void func_00001470(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00001478(void *arg0, void *arg1) {
    s32 temp_s0;
    void **temp_a0;

    temp_s0 = D_000205B0;
    if (temp_s0 != 0) {
        if (M2C_FIELD(arg1, s32 *, 0xC) != -1) {
            func_00013DD0(M2C_FIELD(temp_s0, s32 *, 0x2C), M2C_FIELD(arg0, s32 *, 0x1CC));
            func_00013F4C(M2C_FIELD(temp_s0, s32 *, 0x2C), M2C_FIELD(arg0, s32 *, 0x1CC), M2C_FIELD(arg1, s32 *, 0xC));
            temp_a0 = M2C_FIELD(temp_s0, void ***, 0x20);
            M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, void *), 0xC)(temp_a0, arg0);
            func_000084B0((s32) M2C_FIELD(temp_s0, void ***, 0x20), (s32) arg0);
        }
    }
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

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001610);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001518);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_000015CC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000068E4);

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000164C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001700);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001054);

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

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000131C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000013AC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001404);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001438);

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000146C);

void func_000014E8(struct Unk_vt_func_000014E8_arg0 **arg0, M2C_UNK arg1) {
    func_0000A290(arg1);
    func_000142C4(2, 0);
    sceVshCommonGui_4704D5BD(0);
    (*arg0)->unk50(arg0, 0);
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001538);

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000157C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_000015C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001438);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001A98);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001CA4);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001FF4);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000020E0);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000021DC);
#endif

#if FW_VERSION == 282
void func_000015EC(struct Unk_func_000015EC_0 *arg0, s32 arg1) {
    struct Unk_func_000015EC_temp_v0 *temp_v0;

    temp_v0 = arg0->unk4->unk50;
    if (temp_v0 != NULL) {
        temp_v0->unk1C = arg1;
    }
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001604);

void func_00001674(void) {
    func_00001604();
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001690);

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

void func_000017BC(struct Unk_func_000017BC_0 *arg0, M2C_UNK arg1) {
    struct Unk_func_000017BC_temp_a0 *temp_a0;

    temp_a0 = arg0->unk4;
    temp_a0->unk4E = 1;
    func_00000B9C(arg0->unk4, func_00000BCC(arg1, func_00000B08(temp_a0)));
    func_0000181C(arg0->unk4, 0);
}
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024494);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_000017DC);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00021494);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001BD8);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001C4C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001C80);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001D20);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001DE0);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001E88);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001F04);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001F30);

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000203C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00002138);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000214E8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002248);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000023E4);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00002454);
#else
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000244A4);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000244C4);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000244D8);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000244F0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_000024F0);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000026C0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00021554);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000244F4);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024508);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024524);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024548);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_0002456C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002738);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002838);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002860);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002910);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00002A50);

void func_00002AD8(s32 arg0) {
    func_000026C0(arg0);
}

void func_00002AF4(s32 arg0) {
    func_00002738(arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002B10);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00002B10(void *arg0, s32 arg1) {
    return __builtin_allegrex_min(func_00008E9C(M2C_FIELD(arg0, s32 *, 0x28), (s32) &func_00001F04, arg1), 0);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002B34);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002C84);
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

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002D00);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00002E00);

void func_00002F68(void) {
    D_000225C4 = 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002CD0);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility", D_0002458C);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000245A4);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000245CC);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F4DC);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F4F4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000215FC);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_0002161C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F514);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F534);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000245E4);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000245FC);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024618);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024630);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024644);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024664);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024688);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000246AC);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000246D0);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000246EC);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024714);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024734);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility", D_0002474C);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F584);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F598);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/savedata_utility", D_0002167C);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/savedata_utility", D_0002168C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002DA8);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00002E18);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_000032F0);

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000368C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000030FC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00003498);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_000038C8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003CCC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00003E04);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000039A8);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00003AA0);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F5DC);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F5EC);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F604);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F608);
#else
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024764);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024784);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003EAC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00003FB4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003B24);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003C60);
#else
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000247A4);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000247C0);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000247E0);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000247F4);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024808);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024828);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024848);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024868);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024880);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000248A0);

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000181C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000187C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000018B0);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001950);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001A70);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001AC0);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001BA8);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001C90);
#endif

#if FW_VERSION < 282
void func_00001D3C(s32 arg0) {
    func_00002DA8(arg0);
}
#else
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001D3C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003DF0);

void func_00003EEC(s32 arg0) {
    func_00003C60(arg0);
}

void func_00003F08(s32 arg0) {
    func_00003C60(arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_000043C4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003F24);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004530);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003FDC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003FF8);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004040);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004758);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004808);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000041B8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001D7C);

void func_00001DF0(struct Unk_func_00001DF0_0 *arg0, s32 arg1, s8 arg2, s8 arg3) {
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
    arg0->unk9 = arg3;
    arg0->unk0 = &D_00024CE8;
}

void func_00001E0C(struct Unk_func_00001E0C_0 *arg0, s32 arg1, s8 arg2, s8 arg3) {
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
    arg0->unk9 = arg3;
    arg0->unk0 = &D_00024CE8;
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001E28);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001EB4);

void func_00002084(struct Unk_func_00002084_0 *arg0, s32 arg1) {
    struct Unk_vt_func_00002084_temp_a0 **temp_a0;

    func_000068E4(arg1, scePaf_4842A808(M2C_FIELD(arg0->unk4, s32 *, 4), &D_000245CC));
    temp_a0 = arg0->unk4;
    func_000082A4((*temp_a0)->unk10(temp_a0));
    func_0001A860(0x20000);
}

void func_000020F4(struct Unk_func_000020F4_0 *arg0, s32 arg1) {
    func_000068E4(arg1, scePaf_4842A808(arg0->unk4->unk4, &D_000245E4));
}

void func_00002134(M2C_UNK **arg0, s32 arg1) {
    func_00001DF0(arg0, arg1, 1, 0);
    *arg0 = &D_00024C80;
}

void func_0000216C(M2C_UNK **arg0, s32 arg1) {
    func_00001DF0(arg0, arg1, 1, 0);
    *arg0 = &D_00024C80;
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_000021A4);

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000225C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00002404);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00002504);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000025D0);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00002624);

void func_000026EC(M2C_UNK **arg0, s32 arg1) {
    func_00001DF0(arg0, arg1, 0, 1);
    *arg0 = &D_00024C18;
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_00002724);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00002854);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000029C8);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00002AE8);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00002B48);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00002B94);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00002C2C);

void func_00002D04(struct Unk_func_00002D04_0 *arg0, s32 arg1, s8 arg2) {
    arg0->unk4 = arg1;
    arg0->unk9 = arg2;
    arg0->unk0 = &D_00024BB0;
    arg0->unk8 = 0;
    scePaf_6829D7AF((s32) ((u8 *)arg0 + 0xC), 0, 0x10);
    arg0->unk1C = 0;
}

void func_00002D50(struct Unk_func_00002D50_0 *arg0, s32 arg1, s8 arg2) {
    arg0->unk4 = arg1;
    arg0->unk9 = arg2;
    arg0->unk0 = &D_00024BB0;
    arg0->unk8 = 0;
    scePaf_6829D7AF((s32) ((u8 *)arg0 + 0xC), 0, 0x10);
    arg0->unk1C = 0;
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_00002D9C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00002E28);

void func_000030D4(struct Unk_func_000030D4_0 *arg0, s32 arg1) {
    struct Unk_vt_func_000030D4_temp_a0 **temp_a0;

    func_000068E4(arg1, scePaf_4842A808(M2C_FIELD(arg0->unk4, s32 *, 4), &D_00024734));
    temp_a0 = arg0->unk4;
    func_000082A4((*temp_a0)->unk10(temp_a0));
    func_0001A860(0x20000);
}

void func_00003144(struct Unk_func_00003144_0 *arg0, s32 arg1) {
    func_000068E4(arg1, scePaf_4842A808(arg0->unk4->unk4, &D_0002474C));
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_00003184);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000032BC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000033C0);

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

INCLUDE_ASM("nonmatchings/savedata_utility", func_00003574);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00003680);

void func_000036EC(M2C_UNK **arg0, s32 arg1) {
    func_00002D04(arg0, arg1, 0);
    *arg0 = &D_00024B48;
}

void func_00003720(M2C_UNK **arg0, s32 arg1) {
    func_00002D04(arg0, arg1, 0);
    *arg0 = &D_00024B48;
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_00003754);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00003814);

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000394C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00003AA4);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00003BEC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00003CDC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00003DAC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00003EC0);

void func_00003FE0(M2C_UNK **arg0, s32 arg1) {
    func_00002D04(arg0, arg1, 1);
    *arg0 = &D_00024AE0;
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004014);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004144);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000042C0);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004428);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004494);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000045A0);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004620);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004768);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004858);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004930);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000049B8);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004AFC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004BFC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004CB0);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004D10);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004D70);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004DFC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004FAC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000506C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000517C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00005474);

void func_00005510(struct Unk_func_00005510_0 *arg0, s32 arg1) {
    func_000068E4(arg1, scePaf_4842A808(arg0->unk4->unk4, &D_000248A0));
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_00005550);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000055F8);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00005714);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000057E0);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000058D0);

void func_00005A4C(struct Unk_func_00005A4C_0 *arg0) {
    s32 temp_v0;

    temp_v0 = scePaf_DAB59652(arg0->unk4->unk4, &D_00024494);
    if (temp_v0 != 0) {
        func_0000AAC8(temp_v0, (s32) arg0->unk4, 0);
    }
    func_00001A70((s32) arg0);
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_00005AA4);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00005AFC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00005B54);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00005BEC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00005CE8);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00005D20);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00005E14);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00005FBC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000060D4);

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000610C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000622C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000063A0);

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000644C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0000644C(s32 arg0, s32 arg1) {
    func_00013D18(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0001F6D0;
    M2C_FIELD(arg0, s8 *, 0x1D) = 1;
}
#endif

#if FW_VERSION == 100
void func_0000644C(s32 arg0, s32 arg1) {
    func_00013D18(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0001F6D0;
    M2C_FIELD(arg0, s8 *, 0x10) = 1;
}
#endif

#if FW_VERSION < 282
void func_00004290(M2C_UNK **arg0) {
    *arg0 = &D_0001F6D0;
    func_00013D70();
}

void func_000042B8(M2C_UNK **arg0) {
    *arg0 = &D_0001F6D0;
    func_00013D70();
}

void func_00006484(M2C_UNK **arg0) {
    *arg0 = &D_0001F6D0;
    func_00013D70();
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004318);
#else
INCLUDE_ASM("nonmatchings/savedata_utility", func_00006484);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004418);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004498);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004C88);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00005080);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00005168);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00005738);

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000576C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000057A0);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00005B80);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/savedata_utility", func_00005C7C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/savedata_utility", func_00005C8C_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00005DA8);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_0002178C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F658);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000217AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004528);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004898);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_000064BC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00006578);

s32 func_0000671C(struct Unk_vt_func_0000671C_arg0 **arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_75062BCF(arg1) == 0) {
        var_v1 = func_00011584((*arg0)->unk10(arg0), 0, 0x800, 0, 0);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_00006784);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00006880);
#endif
