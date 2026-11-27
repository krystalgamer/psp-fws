/* lang: c++ */
#include "common.h"
#include "savedata_utility_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000024);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000000AC);

INCLUDE_ASM("nonmatchings/savedata_utility", module_start);

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility", module_stop);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 module_stop(void) {
    func_0001E7AC();
    return 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000015C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000190);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00000190(void) {
    func_00000B14((void *) D_000205B0);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_000001B4);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_utility", func_000001C0);
#endif

#if FW_VERSION >= 282
s32 module_stop(void) {
    func_00023820();
    return 0;
}
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024310);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024314);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024324);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_0002433C);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024350);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024368);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024374);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024380);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024398);
#endif

#if FW_VERSION >= 351
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024660);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000243B0_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000243C4);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000243E4);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024428);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_0002442C);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024440);
#endif

#if FW_VERSION >= 351
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024708);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024458_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000245B0);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000245B4);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000245C0);
#endif

#if FW_VERSION >= 351
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000248AC);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000245FC_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024624);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024634);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_0002467C);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024264);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000247B4);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024270);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024274);
#endif

#if FW_VERSION >= 282
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

#if FW_VERSION < 250
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

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000440);
#else
void func_00000440(s32 arg0) {
    _ZN3paf6Module12SetInterfaceEiPv(arg0, 1, (s32) &D_00025774);
}
#endif

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000464);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000494);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000004D8);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000053C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000630);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000724);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000820);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000544);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000608);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000006CC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000798);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_utility", func_000008A4);
#endif

#if FW_VERSION == 271
s32 func_000008A4(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_v0 == 0) {

    } else {
        func_0000BCF0(temp_v0, 0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x18) == 0) {

    } else {
        func_00008E40(M2C_FIELD(arg0, s32 *, 0x18));
        func_00008E24(M2C_FIELD(arg0, s32 *, 0x18));
    }
    if (M2C_FIELD(arg0, s32 *, 0x24) != 0) {
        _ZN3paf8PhXmList10SetItemNumEi(M2C_FIELD(arg0, s32 *, 0x24), 0);
    }
    return func_000124D0(arg0) != 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000004F4);
#endif

#if FW_VERSION == 271
s32 func_000008C0(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x50), s32 *, 0x30);
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 250 && FW_VERSION < 271)
s32 func_000008C0(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x54), s32 *, 0x30);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
s32 func_000008C0(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x58), s32 *, 0x30);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000920);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000B14);
#endif

#if FW_VERSION == 250
void func_00000B14(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38) != 0) {
        func_000124E0((s32) arg0, 2);
    } else {
        func_000124E0((s32) arg0, 0);
        func_00012E04((s32) M2C_FIELD(arg0, void **, 0xC), (s32) &func_00001DE0, (s32) arg0, 0x8010300B);
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
void func_00000B14(void *arg0) {
    if (func_0000ABD8(M2C_FIELD(arg0, void **, 0x18)) != 0) {
        func_000124E0((s32) arg0, 2);
    } else {
        func_000124E0((s32) arg0, 0);
        func_0000ADC4((s32) M2C_FIELD(arg0, void **, 0x18), (s32) &func_00001DE0, (s32) arg0, 0x8010300B);
    }
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000BB8);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000BE8);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000243C4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_00000C8C(void *arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 0;
    if (func_000008C0(arg0) == 7) {
        var_a2 = func_00018A4C((s32) arg0, arg1);
    }
    return var_a2;
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000CE4);
#endif

#if FW_VERSION == 271
s32 func_00000D74(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
s32 func_00000D74(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_000009A8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000051C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000610);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000704);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000800);
#endif

#if FW_VERSION >= 350
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
        scePaf_A76BB96F(arg0->unk24, 0);
    }
    return func_000175D0(arg0) != 0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
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
        _ZN3paf8PhXmList10SetItemNumEi(arg0->unk24, 0);
    }
    return func_000175D0(arg0) != 0;
}
#endif

#if FW_VERSION >= 282
s32 func_00000B08(struct Unk_func_00000B08_0 *arg0) {
    return arg0->unk50->unk30;
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000B14);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000008EC);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000AF0);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000B40);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000BEC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000C00);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000212F8);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000243F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000C78);
#endif

#if FW_VERSION >= 282
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

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000243B0);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000EA8);
#endif

#if FW_VERSION == 260
void func_00000EA8(void) {
    s32 temp_s1;
    void **temp_s0;
    void **temp_v0;

    temp_s1 = D_000205B0;
    func_00013C30(M2C_FIELD(temp_s1, s32 *, 0x24), 0, (s32) "page_listdata");
    func_00013C30(M2C_FIELD(temp_s1, s32 *, 0x24), 2, (s32) "savedata_title_text");
    func_00013C30(M2C_FIELD(temp_s1, s32 *, 0x24), 3, (s32) "detail_text");
    func_00013C30(M2C_FIELD(temp_s1, s32 *, 0x24), 4, (s32) "detail_sub_text");
    func_00013C30(M2C_FIELD(temp_s1, s32 *, 0x24), 5, (s32) "mini_title_name");
    func_00013C30(M2C_FIELD(temp_s1, s32 *, 0x24), 6, (s32) "mini_size");
    func_00013C30(M2C_FIELD(temp_s1, s32 *, 0x24), 7, (s32) "mini_makedate");
    func_00013C30(M2C_FIELD(temp_s1, s32 *, 0x24), 8, (s32) "empty_space");
    temp_s0 = M2C_FIELD(temp_s1, void ***, 0x64);
    if (temp_s0 != NULL) {
        temp_v0 = M2C_FIELD(temp_s1, void ***, 0x10);
        M2C_FIELD(*temp_s0, M2C_UNK (**)(void **, s32), 0x24)(temp_s0, M2C_FIELD(*temp_v0, s32 (**)(void **), 0x20)(temp_v0));
    }
}
#endif

#if FW_VERSION == 250
void func_00000EA8(void) {
    s32 temp_s1;
    void **temp_s0;
    void **temp_v0;

    temp_s1 = D_000205B0;
    func_00013C30(M2C_FIELD(temp_s1, s32 *, 0x24), 0, (s32) "page_listdata");
    func_00013C30(M2C_FIELD(temp_s1, s32 *, 0x24), 2, (s32) "savedata_title_text");
    func_00013C30(M2C_FIELD(temp_s1, s32 *, 0x24), 3, (s32) "detail_text");
    func_00013C30(M2C_FIELD(temp_s1, s32 *, 0x24), 4, (s32) "detail_sub_text");
    func_00013C30(M2C_FIELD(temp_s1, s32 *, 0x24), 5, (s32) "mini_title_name");
    func_00013C30(M2C_FIELD(temp_s1, s32 *, 0x24), 6, (s32) "mini_size");
    func_00013C30(M2C_FIELD(temp_s1, s32 *, 0x24), 7, (s32) "mini_makedate");
    func_00013C30(M2C_FIELD(temp_s1, s32 *, 0x24), 8, (s32) "empty_space");
    temp_s0 = M2C_FIELD(temp_s1, void ***, 0x60);
    if (temp_s0 != NULL) {
        temp_v0 = M2C_FIELD(temp_s1, void ***, 0x10);
        M2C_FIELD(*temp_s0, M2C_UNK (**)(void **, s32), 0x24)(temp_s0, M2C_FIELD(*temp_v0, s32 (**)(void **), 0x20)(temp_v0));
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000D40);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000D7C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000E3C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000F80);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00000EA4);
#endif

#if FW_VERSION < 250
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

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024468);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility", func_00000F88);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001230);
#endif

#if FW_VERSION < 250
void func_00001470(void) {

}
#endif

#if FW_VERSION == 271
void func_00001478(void *arg0, void *arg1) {
    s32 temp_s0;
    void **temp_a0;

    temp_s0 = D_000205B0;
    if (temp_s0 != 0) {
        if (M2C_FIELD(arg1, s32 *, 0xC) != -1) {
            func_00013DD0(M2C_FIELD(temp_s0, s32 *, 0x1C), M2C_FIELD(arg0, s32 *, 0x1CC));
            func_00013F4C(M2C_FIELD(temp_s0, s32 *, 0x1C), M2C_FIELD(arg0, s32 *, 0x1CC), M2C_FIELD(arg1, s32 *, 0xC));
            temp_a0 = M2C_FIELD(temp_s0, void ***, 0x10);
            M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, void *), 0xC)(temp_a0, arg0);
            func_000084B0((s32) M2C_FIELD(temp_s0, void ***, 0x10), (s32) arg0);
        }
    }
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
void func_00001478(void *arg0, void *arg1) {
    s32 temp_s0;
    void **temp_a0;

    temp_s0 = D_000205B0;
    if (temp_s0 != 0) {
        if (M2C_FIELD(arg1, s32 *, 0xC) != -1) {
            func_00013DD0(M2C_FIELD(temp_s0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 0x1CC));
            func_00013F4C(M2C_FIELD(temp_s0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 0x1CC), M2C_FIELD(arg1, s32 *, 0xC));
            temp_a0 = M2C_FIELD(temp_s0, void ***, 0x14);
            M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, void *), 0xC)(temp_a0, arg0);
            func_000084B0((s32) M2C_FIELD(temp_s0, void ***, 0x14), (s32) arg0);
        }
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
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

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001418);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001470);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001DE0);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000014D8);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001554);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_utility", func_000015A4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
s32 func_000015A4(void *arg0) {
    s32 var_a0;
    u8 temp_v1;

    var_a0 = 0x80101008;
    temp_v1 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x18), u8 *, 0x24);
    if (!((temp_v1 >> 2) & 1)) {
        var_a0 = 0x80101005;
        if (!(temp_v1 & 1)) {
            var_a0 = !((temp_v1 >> 1) & 1) ? 0 : 0x80101009;
        }
    }
    return var_a0;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_utility", func_000015F0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
s32 func_000015F0(void *arg0) {
    s32 var_a0;
    u8 temp_v1;

    var_a0 = 0x80101008;
    temp_v1 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x18), u8 *, 0x24);
    if (!((temp_v1 >> 2) & 1) && ((var_a0 = 0x80101009, ((temp_v1 & 1) != 0)) || !((temp_v1 >> 1) & 1))) {
        var_a0 = 0;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000163C);
#endif

#if FW_VERSION == 271
void func_00001668(void *arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x50);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x1C) = arg1;
    }
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
void func_00001668(void *arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x54);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x1C) = arg1;
    }
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001680);

void func_000016F0(s32 arg0) {
    func_00001680(arg0);
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000170C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001794);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001848);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026AAC);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000244E4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026ABC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026ADC);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026AF0);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026B08);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026B0C);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026B20);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026B3C);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026B60);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00025B9C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026B84);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026B9C);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026BC4);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026BDC);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026BF4);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026C10);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026C28);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026C4C);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026C60);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026C80);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026CA4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00025CDC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026CC8);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00025D1C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026CE4);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026D04);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026D1C);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000247A4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026D34);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026D54);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026D74);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026D90);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026DB0);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026DC4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026DE4);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026DF8);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026E18);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00025E78);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026E38);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026E50);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026E70);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001838);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001898);

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000190C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001940);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000019E0);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001B00);
#endif

#if FW_VERSION == 250
void func_00001B00(void *arg0) {
    func_0000BE0C(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 8), 0x80101001, (s32) func_00001470);
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x58) = 1;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001B48);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001C40);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001D28);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001E18);
#endif

#if FW_VERSION == 250
void func_00001DE8(void *arg0) {
    func_0000BE0C(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 8), 0x8010100C, (s32) func_00001470);
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x58) = 7;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001E30);

void func_00001EA0(void *arg0, s32 arg1, s8 arg2, s8 arg3) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s8 *, 8) = arg2;
    M2C_FIELD(arg0, s8 *, 9) = arg3;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000272C0;
}

void func_00001EBC(void *arg0, s32 arg1, s8 arg2, s8 arg3) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s8 *, 8) = arg2;
    M2C_FIELD(arg0, s8 *, 9) = arg3;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000272C0;
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001ED8);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001F68);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002114);
#endif

#if FW_VERSION == 250
void func_00002114(void *arg0, s32 arg1) {
    void **temp_a0;
    void **temp_a0_2;

    temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void ***, 4), void ***, 0x10);
    func_000068E4(arg1, scePaf_BB3CBD19(M2C_FIELD(*temp_a0, s32 (**)(void **), 0x20)(temp_a0), &D_00026BC4, -1));
    temp_a0_2 = M2C_FIELD(arg0, void ***, 4);
    func_00003F08(M2C_FIELD(*temp_a0_2, s32 (**)(void **), 0x10)(temp_a0_2));
    func_0001D04C(0x20000);
}
#endif

#if FW_VERSION == 271
void func_00002198(void *arg0, s32 arg1) {
    func_000068E4(arg1, _ZNK3paf4View9GetStringEPKc(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4), &D_00026BDC));
}
#endif

#if FW_VERSION == 260
void func_00002198(void *arg0, s32 arg1) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void ***, 0x10);
    func_000068E4(arg1, _ZNK3paf4View9GetStringEPKc(M2C_FIELD(*temp_a0, s32 (**)(void **), 0x20)(temp_a0), &D_00026BDC));
}
#endif

#if FW_VERSION == 250
void func_00002198(void *arg0, s32 arg1) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void ***, 0x10);
    func_000068E4(arg1, scePaf_BB3CBD19(M2C_FIELD(*temp_a0, s32 (**)(void **), 0x20)(temp_a0), &D_00026BDC, -1));
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_000021EC(M2C_UNK **arg0, s32 arg1) {
    func_00001EA0(arg0, arg1, 1, 0);
    *arg0 = &D_00027258;
}

void func_00002224(M2C_UNK **arg0, s32 arg1) {
    func_00001EA0(arg0, arg1, 1, 0);
    *arg0 = &D_00027258;
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000225C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00002314);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000024E0);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000025E0);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_utility", func_000025CC);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_000026BC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000276C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000279C);

void func_00002854(M2C_UNK **arg0, s32 arg1) {
    func_00001EA0(arg0, arg1, 0, 1);
    *arg0 = &D_000271F0;
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000288C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000029BC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00002B3C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00002C5C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002B44);
#endif

#if FW_VERSION == 260
void func_00002CD0(void *arg0, s32 arg1) {
    func_0000B634(arg1, M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x54));
}
#endif

#if FW_VERSION == 250
void func_00002CD0(void *arg0, s32 arg1) {
    func_0000B580_v250(arg1, M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x54));
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002CF4);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00002D7C);

void func_00002E54(void *arg0, s32 arg1, s8 arg2) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s8 *, 9) = arg2;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00027188;
    M2C_FIELD(arg0, s8 *, 8) = 0;
    sce_paf_private_memset((s32) (arg0 + 0xC), 0, 0x10);
    M2C_FIELD(arg0, s8 *, 0x1C) = 0;
}

void func_00002EA0(void *arg0, s32 arg1, s8 arg2) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s8 *, 9) = arg2;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00027188;
    M2C_FIELD(arg0, s8 *, 8) = 0;
    sce_paf_private_memset((s32) (arg0 + 0xC), 0, 0x10);
    M2C_FIELD(arg0, s8 *, 0x1C) = 0;
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_00002EEC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00002F7C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_000031E8);
#endif

#if FW_VERSION == 250
void func_000031E8(void *arg0, s32 arg1) {
    void **temp_a0;
    void **temp_a0_2;

    temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void ***, 4), void ***, 0x10);
    func_000068E4(arg1, scePaf_BB3CBD19(M2C_FIELD(*temp_a0, s32 (**)(void **), 0x20)(temp_a0), &D_00026D04, -1));
    temp_a0_2 = M2C_FIELD(arg0, void ***, 4);
    func_00003F08(M2C_FIELD(*temp_a0_2, s32 (**)(void **), 0x10)(temp_a0_2));
    func_0001D04C(0x20000);
}
#endif

#if FW_VERSION == 271
void func_0000326C(void *arg0, s32 arg1) {
    func_000068E4(arg1, _ZNK3paf4View9GetStringEPKc(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4), &D_00026D1C));
}
#endif

#if FW_VERSION == 260
void func_0000326C(void *arg0, s32 arg1) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void ***, 0x10);
    func_000068E4(arg1, _ZNK3paf4View9GetStringEPKc(M2C_FIELD(*temp_a0, s32 (**)(void **), 0x20)(temp_a0), &D_00026D1C));
}
#endif

#if FW_VERSION == 250
void func_0000326C(void *arg0, s32 arg1) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void ***, 0x10);
    func_000068E4(arg1, scePaf_BB3CBD19(M2C_FIELD(*temp_a0, s32 (**)(void **), 0x20)(temp_a0), &D_00026D1C, -1));
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_000032C8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_000032C0);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00003370);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_000034C0);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000035C4);
#endif

#if FW_VERSION == 271
void func_00003724(void *arg0) {
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
#endif

#if FW_VERSION == 260
void func_00003724(void *arg0) {
    s32 temp_v0;
    void **temp_a0;

    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x58);
        M2C_FIELD(arg0, s32 *, 0x58) = 0;
        M2C_FIELD(arg0, s32 *, 0x5C) = temp_v0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(), 0xC)();
        temp_a0 = M2C_FIELD(arg0, void ***, 0x64);
        M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 0x30)(temp_a0);
    }
}
#endif

#if FW_VERSION == 250
void func_00003724(void *arg0) {
    void **temp_a0;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x58) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(), 0xC)();
        temp_a0 = M2C_FIELD(arg0, void ***, 0x60);
        M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 0x30)(temp_a0);
    }
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003770);

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000387C);

void func_000038E8(M2C_UNK **arg0, s32 arg1) {
    func_00002E54(arg0, arg1, 0);
    *arg0 = &D_00027120;
}

void func_0000391C(M2C_UNK **arg0, s32 arg1) {
    func_00002E54(arg0, arg1, 0);
    *arg0 = &D_00027120;
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_00003950);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00003A10);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00003B5C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00003CC8);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00003E10);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003E88);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003F08_v250);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003FDC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000411C);

void func_00004228(M2C_UNK **arg0, s32 arg1) {
    func_00002E54(arg0, arg1, 1);
    *arg0 = &D_000270B8;
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000425C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000438C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004514);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004424);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000467C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000459C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004808);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004890);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004A18);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004854);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004B10);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004BEC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004C74);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004DE4);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004EFC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004FB0);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00005010);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00005070);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00005100);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000052A0);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_utility", func_00005068);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_utility", func_00005380);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00005444);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00005728);
#endif

#if FW_VERSION == 271
void func_000057D8(void *arg0, s32 arg1) {
    func_000068E4(arg1, _ZNK3paf4View9GetStringEPKc(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4), &D_00026E70));
}
#endif

#if FW_VERSION == 260
void func_000057D8(void *arg0, s32 arg1) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void ***, 0x10);
    func_000068E4(arg1, _ZNK3paf4View9GetStringEPKc(M2C_FIELD(*temp_a0, s32 (**)(void **), 0x20)(temp_a0), &D_00026E70));
}
#endif

#if FW_VERSION == 250
void func_000057D8(void *arg0, s32 arg1) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void ***, 0x10);
    func_000068E4(arg1, scePaf_BB3CBD19(M2C_FIELD(*temp_a0, s32 (**)(void **), 0x20)(temp_a0), &D_00026E70, -1));
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000582C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_000058B8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_000058D4);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00005974);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00005ACC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00005BAC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00005CB0);
#endif

#if FW_VERSION == 271
void func_00005E30(void *arg0) {
    s32 temp_v0;

    temp_v0 = _ZNK3paf4View8PageRootEPKc(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4), &D_00026AAC);
    if (temp_v0 != 0) {
        func_00005F30(temp_v0, (s32) M2C_FIELD(arg0, void **, 4), 0);
    }
    func_00001B00(arg0);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
void func_00005E30(void *arg0) {
    s32 temp_v0;
    void **temp_a0;

    temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void ***, 0x10);
    temp_v0 = _ZNK3paf4View8PageRootEPKc(M2C_FIELD(*temp_a0, s32 (**)(void **), 0x20)(temp_a0), &D_00026AAC);
    if (temp_v0 != 0) {
        func_00005F30(temp_v0, (s32) M2C_FIELD(arg0, void **, 4), 0);
    }
    func_00001B00(arg0);
}
#endif

#if FW_VERSION == 271
void func_00005E9C(void *arg0) {
    s32 temp_v0;

    temp_v0 = _ZNK3paf4View8PageRootEPKc(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4), &D_00026AAC);
    if (temp_v0 != 0) {
        func_00005F30(temp_v0, (s32) M2C_FIELD(arg0, void **, 4), 0);
    }
    func_00001B48((s32) arg0);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
void func_00005E9C(void *arg0) {
    s32 temp_v0;
    void **temp_a0;

    temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void ***, 0x10);
    temp_v0 = _ZNK3paf4View8PageRootEPKc(M2C_FIELD(*temp_a0, s32 (**)(void **), 0x20)(temp_a0), &D_00026AAC);
    if (temp_v0 != 0) {
        func_00005F30(temp_v0, (s32) M2C_FIELD(arg0, void **, 4), 0);
    }
    func_00001B48((s32) arg0);
}
#endif

#if FW_VERSION == 271
void func_00005F08(void *arg0) {
    s32 temp_v0;

    temp_v0 = _ZNK3paf4View8PageRootEPKc(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4), &D_00026AAC);
    if (temp_v0 != 0) {
        func_00005F30(temp_v0, (s32) M2C_FIELD(arg0, void **, 4), 0);
    }
    func_00001C40((s32) arg0);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
void func_00005F08(void *arg0) {
    s32 temp_v0;
    void **temp_a0;

    temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void ***, 0x10);
    temp_v0 = _ZNK3paf4View8PageRootEPKc(M2C_FIELD(*temp_a0, s32 (**)(void **), 0x20)(temp_a0), &D_00026AAC);
    if (temp_v0 != 0) {
        func_00005F30(temp_v0, (s32) M2C_FIELD(arg0, void **, 4), 0);
    }
    func_00001C40((s32) arg0);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00005F74);

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000600C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00006118);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00006150);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00006244);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00006410);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00006528);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00006560);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00006680);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00006800);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000068AC);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00006820);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_000068E4_v250);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000691C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000069D8);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026F18);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026F80);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00026FE8);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00027050);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000270B8);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00027120);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00027188);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000271F0);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00027258);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000272C0);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00027328);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024DF0);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000263E0);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00027388);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 func_00006B7C(void **arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (Job_isCanceled(arg1) == 0) {
        var_v1 = func_00011B44(M2C_FIELD(*arg0, s32 (**)(void **), 0x10)(arg0), 0, 0x800, 0, 0);
    }
    return var_v1;
}
#endif

#if FW_VERSION == 250
s32 func_00006B7C(void **arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (Job_isCanceled(arg1) == 0) {
        var_v1 = func_000119A0_v250(M2C_FIELD(*arg0, s32 (**)(void **), 0x10)(arg0), 0, 0x800, 0, 0);
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00006BE4);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00006CE4);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000068E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001518);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_000015CC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00006DC8);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_000068E4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000164C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00006F18(M2C_UNK **arg0) {
    *arg0 = &D_00027328;
}

void func_00006F28(M2C_UNK **arg0) {
    *arg0 = &D_00027328;
    _ZdlPv(arg0);
}

void func_00006F50(M2C_UNK **arg0) {
    *arg0 = &D_00027328;
    _ZdlPv(arg0);
}

void func_00006F78(M2C_UNK **arg0) {
    *arg0 = &D_00027328;
}

void func_00006F88(M2C_UNK **arg0) {
    *arg0 = &D_00027328;
}

void func_00006F98(M2C_UNK **arg0) {
    *arg0 = &D_00027328;
    _ZdlPv(arg0);
}

void func_00006FC0(void *arg0) {
    func_00007758(M2C_FIELD(arg0, s32 *, 4));
}

void func_00006FDC(M2C_UNK **arg0) {
    *arg0 = &D_00027328;
}

void func_00006FEC(M2C_UNK **arg0) {
    *arg0 = &D_00027328;
    _ZdlPv(arg0);
}

void func_00007014(void *arg0) {
    func_00007A68(M2C_FIELD(arg0, s32 *, 4));
}

void func_00007030(M2C_UNK **arg0) {
    *arg0 = &D_00027328;
    _ZdlPv(arg0);
}

void func_00007058(M2C_UNK **arg0) {
    *arg0 = &D_00027328;
}

void func_00007068(M2C_UNK **arg0) {
    *arg0 = &D_00027328;
}

void func_00007078(M2C_UNK **arg0) {
    *arg0 = &D_00027328;
    _ZdlPv(arg0);
}

void func_000070A0(void *arg0) {
    func_00007758(M2C_FIELD(arg0, s32 *, 4));
}

void func_000070BC(M2C_UNK **arg0) {
    *arg0 = &D_00027328;
}

void func_000070CC(M2C_UNK **arg0) {
    *arg0 = &D_00027328;
    _ZdlPv(arg0);
}

void func_000070F4(void *arg0) {
    func_00007A68(M2C_FIELD(arg0, s32 *, 4));
}

void func_00007110(M2C_UNK **arg0) {
    *arg0 = &D_00027328;
    _ZdlPv(arg0);
}

void func_00007138(M2C_UNK **arg0) {
    *arg0 = &D_00027328;
}

void func_00007148(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x1D) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    func_00007A68(M2C_FIELD(arg0, s32 *, 4));
}

void func_0000716C(M2C_UNK **arg0) {
    *arg0 = &D_00027328;
}

void func_0000717C(M2C_UNK **arg0) {
    *arg0 = &D_00027328;
    _ZdlPv(arg0);
}

void func_000071A4(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x1D) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    func_00007758(M2C_FIELD(arg0, s32 *, 4));
}

void func_000071C8(M2C_UNK **arg0) {
    *arg0 = &D_00027328;
}

void func_000071D8(M2C_UNK **arg0) {
    *arg0 = &D_00027328;
    _ZdlPv(arg0);
}

void func_00007200(M2C_UNK **arg0) {
    *arg0 = &D_00027328;
}

void func_00007210(M2C_UNK **arg0) {
    *arg0 = &D_00027328;
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_00007238);

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000744C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00007548);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000076E4);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00007758);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000078C0);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00007928);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00007A68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001700);
#endif

#if FW_VERSION >= 282
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
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility", func_000014E8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_000014E8(struct Unk_vt_func_000014E8_arg0 **arg0, M2C_UNK arg1) {
    func_0000A290(arg1);
    func_000142C4(2, 0);
    _ZN3vsh13Infobar_CloseEb(0);
    (*arg0)->unk50(arg0, 0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001538);

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000157C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000015C0);
#endif

#if FW_VERSION == 100
void func_000015C0(void *arg0) {
    func_0000FE18(M2C_FIELD(arg0, void **, 0x1C));
    D_000205B4 = 0;
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001438);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001A98);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001CA4);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00001FF4);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000020E0);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000021DC);
#endif

#if FW_VERSION >= 282
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
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001718);
#endif

#if FW_VERSION >= 350
void func_00001718(struct Unk_func_00001718_0 *arg0, s32 arg1) {
    struct Unk_func_00001718_temp_a0 *temp_a0;

    temp_a0 = arg0->unk4;
    temp_a0->unk4E = 1;
    func_00000B9C(arg0->unk4, func_00000BCC(arg1, func_00000B08((struct Unk_func_00000B08_0 *) temp_a0)));
    if (arg0->unk9 == 0) {

    } else {
        scePaf_6428A1DE(scePaf_88784487("system_plugin"), "snd_cancel");
    }
    func_00012848(arg0->unk4->unkC, (s32) func_0000181C, (s32) arg0->unk4, 0, 0);
}
#endif

#if FW_VERSION == 282
void func_00001718(struct Unk_func_00001718_0 *arg0, s32 arg1) {
    struct Unk_func_00001718_temp_a0 *temp_a0;

    temp_a0 = arg0->unk4;
    temp_a0->unk4E = 1;
    func_00000B9C(arg0->unk4, func_00000BCC(arg1, func_00000B08(temp_a0)));
    if (arg0->unk9 == 0) {

    } else {
        _ZN3paf4View9PlaySoundEPKc(_ZN3paf4View4FindEPKc("system_plugin"), "snd_cancel");
    }
    func_00012848(arg0->unk4->unkC, (s32) func_0000181C, (s32) arg0->unk4, 0, 0);
}
#endif

#if FW_VERSION >= 282
void func_000017BC(struct Unk_func_000017BC_0 *arg0, M2C_UNK arg1) {
    struct Unk_func_000017BC_temp_a0 *temp_a0;

    temp_a0 = arg0->unk4;
    temp_a0->unk4E = 1;
    func_00000B9C(arg0->unk4, func_00000BCC(arg1, func_00000B08(temp_a0)));
    func_0000181C(arg0->unk4, 0);
}
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024494);

#if FW_VERSION >= 150 && FW_VERSION < 250
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
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000214E8);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002248);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000023E4);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00002454);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000244A4);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000244C4);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000244D8);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000244F0);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_000024F0);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000026C0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00021554);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000244F4);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024508);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024524);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024548);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_0002456C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002738);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002838);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002860);
#endif

#if FW_VERSION < 250
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

#if FW_VERSION >= 150 && FW_VERSION < 250
s32 func_00002B10(void *arg0, s32 arg1) {
    return __builtin_allegrex_min(func_00008E9C(M2C_FIELD(arg0, s32 *, 0x28), (s32) &func_00001F04, arg1), 0);
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002B34);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002C84);
#endif

#if FW_VERSION == 100
s32 func_00002C84(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (Job_isCanceled(arg1) == 0) {
        var_v1 = func_00009010(M2C_FIELD(arg0, s32 *, 0x28), 0, 0x800);
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002D00);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002E00);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00007D38);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
void func_00002F68(void) {
    D_000225C4 = 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002CD0);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_0002458C);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000245A4);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_000245CC);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F4DC);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F4F4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000215FC);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_0002161C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F514);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F534);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_000245E4);
#endif

#if FW_VERSION >= 282
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

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_0002474C);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F584);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F598);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/savedata_utility", D_0002167C);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/savedata_utility", D_0002168C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002DA8);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00002E18);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_000032F0);

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000368C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000030FC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00003498);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_000038C8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003CCC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00003E04);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000039A8);

void func_00003AA0(void *arg0) {
    s32 temp_v0;
    void **temp_a0;

    if (arg0 != NULL) {
        func_0000C860(M2C_FIELD(arg0, void **, 0x2C));
        func_000142C4(3, 1);
        temp_a0 = M2C_FIELD(arg0, void ***, 0x1C);
        temp_v0 = _ZNK3paf4View8PageRootEPKc(M2C_FIELD(*temp_a0, s32 (**)(void **), 0x24)(temp_a0), &D_0002458C);
        if (temp_v0 != 0) {
            func_0000A940(temp_v0, (s32) arg0, 0);
        }
        func_000039A8((s32) arg0);
    }
}
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F5DC);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F5EC);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F604);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_0001F608);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024764);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024784);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003EAC);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024E58);

INCLUDE_RODATA("nonmatchings/savedata_utility", D_00027400);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003FB4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000808C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003B24);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003C60);
#endif

#if FW_VERSION >= 282
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

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_00001D3C);
#else
void func_00001D3C(s32 arg0) {
    func_00002DA8(arg0);
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_00003DF0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003EEC);
#endif

#if FW_VERSION < 250
void func_00003EEC(s32 arg0) {
    func_00003C60(arg0);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00008134(s32 **arg0) {
    *arg0 = &D_00027400;
    func_00008D9C(arg0);
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000816C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000081C4);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00008234);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00008320);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00027400);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00008488);

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000867C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00003F08);
#endif

#if FW_VERSION < 250
void func_00003F08(s32 arg0) {
    func_00003C60(arg0);
}
#endif

#if FW_VERSION == 271
s32 func_00008754(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = arg1 >> 5;
    var_v0 = 0;
    if ((M2C_FIELD(arg0, s32 *, 4) - 1) >= arg1) {
        var_v0 = ((u32) M2C_FIELD(((temp_v0 * 4) + arg0), u32 *, 0x14) >> (arg1 - (temp_v0 << 5))) & 1;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
s32 func_00008754(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = arg1 >> 5;
    var_v0 = 0;
    if ((M2C_FIELD(arg0, s32 *, 8) - 1) >= arg1) {
        var_v0 = ((u32) M2C_FIELD(((temp_v0 * 4) + arg0), u32 *, 0x14) >> (arg1 - (temp_v0 << 5))) & 1;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00008790);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000087F4);

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000897C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00008A14);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00008DA8);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000091C4);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000091FC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00009294);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000094C8);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00009774);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_000043C4);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003F24);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004530);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003FDC);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_00003FF8);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004040);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004758);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004808);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility", func_000041B8);
#endif

#if FW_VERSION >= 282
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
#endif

#if FW_VERSION >= 350
void func_00002084(struct Unk_func_00002084_0 *arg0, s32 arg1) {
    void **temp_a0;

    func_000068E4(arg1, scePaf_2CD3AB9E(M2C_FIELD(arg0->unk4, s32 *, 4), &D_000245CC));
    temp_a0 = arg0->unk4;
    func_000082A4(M2C_FIELD(*temp_a0, s32 (**)(void **), 0x10)(temp_a0));
    func_0001A860(0x20000);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00002084(struct Unk_func_00002084_0 *arg0, s32 arg1) {
    struct Unk_vt_func_00002084_temp_a0 **temp_a0;

    func_000068E4(arg1, _ZNK3paf4View9GetStringEPKc(M2C_FIELD(arg0->unk4, s32 *, 4), &D_000245CC));
    temp_a0 = arg0->unk4;
    func_000082A4((*temp_a0)->unk10(temp_a0));
    func_0001A860(0x20000);
}
#endif

#if FW_VERSION >= 350
void func_000020F4(struct Unk_func_000020F4_0 *arg0, s32 arg1) {
    func_000068E4(arg1, scePaf_2CD3AB9E(arg0->unk4->unk4, &D_000245E4));
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_000020F4(struct Unk_func_000020F4_0 *arg0, s32 arg1) {
    func_000068E4(arg1, _ZNK3paf4View9GetStringEPKc(arg0->unk4->unk4, &D_000245E4));
}
#endif

#if FW_VERSION >= 282
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
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002D04);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00002D04(struct Unk_func_00002D04_0 *arg0, s32 arg1, s8 arg2) {
    arg0->unk4 = arg1;
    arg0->unk9 = arg2;
    arg0->unk0 = &D_00024BB0;
    arg0->unk8 = 0;
    sce_paf_private_memset((s32) ((u8 *)arg0 + 0xC), 0, 0x10);
    arg0->unk1C = 0;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002D50);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00002D50(struct Unk_func_00002D50_0 *arg0, s32 arg1, s8 arg2) {
    arg0->unk4 = arg1;
    arg0->unk9 = arg2;
    arg0->unk0 = &D_00024BB0;
    arg0->unk8 = 0;
    sce_paf_private_memset((s32) ((u8 *)arg0 + 0xC), 0, 0x10);
    arg0->unk1C = 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00002D9C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00002E28);
#endif

#if FW_VERSION >= 350
void func_000030D4(struct Unk_func_000030D4_0 *arg0, s32 arg1) {
    void **temp_a0;

    func_000068E4(arg1, scePaf_2CD3AB9E(M2C_FIELD(arg0->unk4, s32 *, 4), &D_00024734));
    temp_a0 = arg0->unk4;
    func_000082A4(M2C_FIELD(*temp_a0, s32 (**)(void **), 0x10)(temp_a0));
    func_0001A860(0x20000);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_000030D4(struct Unk_func_000030D4_0 *arg0, s32 arg1) {
    struct Unk_vt_func_000030D4_temp_a0 **temp_a0;

    func_000068E4(arg1, _ZNK3paf4View9GetStringEPKc(M2C_FIELD(arg0->unk4, s32 *, 4), &D_00024734));
    temp_a0 = arg0->unk4;
    func_000082A4((*temp_a0)->unk10(temp_a0));
    func_0001A860(0x20000);
}
#endif

#if FW_VERSION >= 350
void func_00003144(struct Unk_func_00003144_0 *arg0, s32 arg1) {
    func_000068E4(arg1, scePaf_2CD3AB9E(arg0->unk4->unk4, &D_0002474C));
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00003144(struct Unk_func_00003144_0 *arg0, s32 arg1) {
    func_000068E4(arg1, _ZNK3paf4View9GetStringEPKc(arg0->unk4->unk4, &D_0002474C));
}
#endif

#if FW_VERSION >= 282
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
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/savedata_utility", D_00024920);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_000042C0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004428);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004494);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000045A0);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004620);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004768);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004858);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004930);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000049B8);
#endif

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/savedata_utility", func_000049DC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004AFC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004BFC);
#endif

#if FW_VERSION >= 351
INCLUDE_ASM("nonmatchings/savedata_utility", func_000049DC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004CB0);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004D10);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004D70);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004DFC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004FAC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000506C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_0000517C);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00005474);
#endif

#if FW_VERSION >= 350
void func_00005510(struct Unk_func_00005510_0 *arg0, s32 arg1) {
    func_000068E4(arg1, scePaf_2CD3AB9E(arg0->unk4->unk4, &D_000248A0));
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00005510(struct Unk_func_00005510_0 *arg0, s32 arg1) {
    func_000068E4(arg1, _ZNK3paf4View9GetStringEPKc(arg0->unk4->unk4, &D_000248A0));
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00005550);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000055F8);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00005714);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000057E0);

INCLUDE_ASM("nonmatchings/savedata_utility", func_000058D0);
#endif

#if FW_VERSION >= 350
void func_00005A4C(struct Unk_func_00005A4C_0 *arg0) {
    s32 temp_v0;

    temp_v0 = scePaf_CD216C47(arg0->unk4->unk4, &D_00024494);
    if (temp_v0 != 0) {
        func_0000AAC8(temp_v0, (s32) arg0->unk4, 0);
    }
    func_00001A70((s32) arg0);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00005A4C(struct Unk_func_00005A4C_0 *arg0) {
    s32 temp_v0;

    temp_v0 = _ZNK3paf4View8PageRootEPKc(arg0->unk4->unk4, &D_00024494);
    if (temp_v0 != 0) {
        func_0000AAC8(temp_v0, (s32) arg0->unk4, 0);
    }
    func_00001A70((s32) arg0);
}
#endif

#if FW_VERSION >= 282
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

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_0000644C(s32 arg0, s32 arg1) {
    func_00013D18(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0001F6D0;
    M2C_FIELD(arg0, s8 *, 0x18) = 1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
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
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_000098C4);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004318);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00006484);
#else
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004418);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00004498);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00004C88);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00005080);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00005168);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_00005738);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 250) || (FW_VERSION >= 260 && FW_VERSION < 282)
void func_00005738(s32 arg0) {
    _ZN3paf9PhHandler11KillTimerCBEi(arg0, 0xDC);
    _ZN3paf9PhHandler11KillTimerCBEi(arg0, 0xCC);
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000576C);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 250) || (FW_VERSION >= 260 && FW_VERSION < 282)
void func_0000576C(s32 arg0) {
    _ZN3paf9PhHandler11KillTimerCBEi(arg0, 0xC9);
    _ZN3paf9PhHandler11KillTimerCBEi(arg0, 0xCA);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_0000A648);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility", func_000057A0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00005B80);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00005C7C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/savedata_utility", func_00005C8C_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00005DA8);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility", D_0002648C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
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

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_000064BC);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00006578);
#endif

#if FW_VERSION >= 350
s32 func_0000671C(struct Unk_vt_func_0000671C_arg0 **arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_723D0C80(arg1) == 0) {
        var_v1 = func_00011584((*arg0)->unk10((void **) arg0), 0, 0x800, 0, 0);
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 func_0000671C(struct Unk_vt_func_0000671C_arg0 **arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (Job_isCanceled(arg1) == 0) {
        var_v1 = func_00011584((*arg0)->unk10(arg0), 0, 0x800, 0, 0);
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility", func_00006784);

INCLUDE_ASM("nonmatchings/savedata_utility", func_00006880);
#endif
