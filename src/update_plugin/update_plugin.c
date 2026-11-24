#include "common.h"
#include "update_plugin_decls.h"

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00000024);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_000000AC);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", module_start);

s32 module_stop(void) {
    func_00006900();
    return 0;
}

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_0000015C);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_000072C8);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_000072E0);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_000072F0);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007310);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007328);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007348);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007360);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007380);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007398);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_000073B4);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00000180);

void func_00000210(void) {
    if ((D_00007EC8 != 0) && (D_00007EC9 != 0)) {
        vsh_475ABD41(D_00007ECC);
        D_00007EC9 = 0;
    }
}

void func_00000258(void) {
    if ((D_00007EC8 != 0) && (D_00007EC9 == 0)) {
        vsh_388428D3(D_00007ECC);
        D_00007EC9 = 1;
    }
}

void func_000002A4(void) {
    void *temp_v0;

    D_00007ED0 = 1;
    temp_v0 = func_00005364();
    if (M2C_FIELD(temp_v0, u8 *, 0x61) == 0) {

    } else {
        sceLibUpdateDL_4F49C9C1();
    }
    sceKernelWaitSema(D_00007EC0, 1, NULL);
    func_00005CA0(temp_v0);
    func_00000210();
}

void func_00000314(void) {
    func_00000258();
    sceKernelSignalSema(D_00007EC0, 1);
}

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00000340);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_0000039C);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_0000049C);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_000004DC);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_000073F8);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_0000050C);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_0000741C);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_0000742C);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_0000743C);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007448);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_0000745C);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007484);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007494);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_000074BC);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_000074C4);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_000074CC);

void func_0000086C(s32 arg0) {
    void *sp0;
    void **temp_v0;

    M2C_FIELD(func_00005364(), s8 *, 0x84) = 0;
    func_00001714();
    sceVshCommonGui_6C81492F(&sp0, sceVshCommonGui_764A5495());
    func_000036EC(&sp0);
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_B45ED019());
    func_000036EC(&sp0);
    sceVshCommonGui_441D55D7(1);
    sceVshCommonGui_80271F41();
    scePaf_F47CA1C2(arg0, 0x10001, func_00002FE4, 0);
    temp_v0 = scePaf_72514A05(arg0, "update_network_check_version_text", 0);
    M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK), 0x70)(temp_v0, 0xF, 0x20);
}

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007500);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007520);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007544);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007560);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_0000756C);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007584);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_000075A0);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_000075BC);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_000075DC);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_000075F4);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_0000760C);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007624);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007648);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007650);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007670);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007678);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_0000768C);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_000076AC);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_000076B8);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_000076E0);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007704);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_0000771C);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007744);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007760);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007788);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_000077A4);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_000077AC);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_000077E8);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_000077F4);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007800);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007804);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007824);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_0000783C);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007850);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007868);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007894);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_000078C0);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_000078D0);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_000078F0);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_0000790C);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007930);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007954);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007968);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007980);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_000079A0);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_000079C4);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_000079E4);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007A0C);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007A34);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007A50);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007A94);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007AD8);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007ADC);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007AE8);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007AF4);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00000928);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00000AB4);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00000C8C);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00000EE8);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00000F18);

void func_00000FF4(void) {
    func_00005D10(func_00005364());
}

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00001018);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_000010B0);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_000011E0);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00001328);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_000013D8);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_000015D8);

void func_00001714(void) {
    M2C_FIELD(func_00005364(), s8 *, 0x40) = 1;
    scePaf_A0ED77C4(0, &func_0000175C, 0, -1, -1, &func_00001940);
}

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_0000175C);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00001940);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00001B1C);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00001B90);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00001E54);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00001EB4);

void func_0000214C(s32 arg0) {
    sceKernelPowerTick(0);
    func_00001EB4(arg0, M2C_FIELD(func_00005364(), s32 *, 0x4C));
}

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00002188);

void func_000022C0(void) {
    s32 temp_s0;

    temp_s0 = D_00007EBC;
    if (temp_s0 != 0) {
        scePaf_4612DB4B(temp_s0);
        scePaf_4E67BB08(temp_s0);
    }
    D_00007EBC = 0;
    func_00000180();
    func_00002188();
}

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_0000231C);

void func_00002360(s32 arg0) {
    s32 temp_s0;
    void *temp_v0;

    temp_s0 = func_00005364();
    sceVshCommonGui_4704D5BD(0);
    sceVshCommonGui_1CF884A1();
    scePower_DB62C9CF();
    sceKernelPowerUnlock(0);
    func_0000553C((void *) temp_s0);
    scePaf_66907719();
    temp_v0 = scePaf_338C3774(arg0, 1);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, M2C_UNK (**)(M2C_UNK *, M2C_UNK), 4)(&func_0000231C, 0);
    }
}

void func_000023E8(void) {
    sceKernelDelayThread(0x4C4B40);
}

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00002408);

s32 func_00002654(void) {
    sceKernelWaitSema(D_00007EC0, 1, NULL);
    sceKernelPowerLock(0);
    sceKernelSignalSema(D_00007EC0, 1);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_0000269C);

void func_00002770(void) {
    scePaf_6B1E90C7();
    sceVshCommonGui_80271F41();
    scePaf_A0ED77C4(0, (s32 *) func_00002654, 0, -1, -1, &func_0000269C);
}

void func_000027B8(s32 arg0) {
    s32 temp_a0;

    temp_a0 = func_00005364();
    if (arg0 == 0) {
        D_00007ED0 = 0;
        if (D_00007EC4 != 1) {
            func_00002188();
        } else {
            func_00002770();
        }
    } else {
        func_00005D10(temp_a0);
    }
}

void func_00002824(s32 arg0) {
    s32 temp_a0;
    s32 temp_v0;

    temp_v0 = func_00005364();
    temp_a0 = temp_v0;
    if (arg0 == 0) {
        func_00004B3C(temp_a0, (s32) &D_00007520);
    } else {
        func_00005D10(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00002870);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_000028A8);

void func_0000292C(s32 arg0) {
    void *temp_v0;

    temp_v0 = scePaf_338C3774(arg0, 1);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, M2C_UNK (**)(void (*)(s32)), 0x10)(func_000027B8);
    }
}

void func_00002960(s32 arg0) {
    void *temp_v0;

    temp_v0 = scePaf_338C3774(arg0, 1);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, M2C_UNK (**)(M2C_UNK *, M2C_UNK *, M2C_UNK), 0xC)(&D_000075BC, &func_00001328, 0);
    }
}

void func_000029A0(void) {
    func_00005D10(func_00005364());
}

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_000029C4);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00002B24);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00002BFC);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00002D84);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00002F68);

void func_00002FE4(s32 arg0, struct Unk_func_00002FE4_1 *arg1) {
    if ((u32) (arg1->unk8 - 5) >= 2U) {

    } else {
        func_00000AB4(arg0, (s32) arg1);
    }
}

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_0000301C);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00003068);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_0000319C);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_000031FC);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_0000328C);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00003318);

void func_00003358(s32 arg0) {
    void *temp_v0;

    temp_v0 = func_00005364();
    if (M2C_FIELD(temp_v0, u8 *, 0x84) != 0) {

    } else {
        scePaf_EAA5AFF6(arg0, 1);
        func_00004B3C((s32) temp_v0, (s32) &D_00007788);
    }
}

void func_000033B8(s32 arg0) {
    if (M2C_FIELD(func_00005364(), u8 *, 0x40) != 0) {

    } else {
        scePaf_EAA5AFF6(arg0, 3);
        func_000028A8((s32) &func_00002870);
    }
}

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00003408);

void func_000034B0(void) {
    func_00003408(1, 0xFFFF);
}

void func_000034D0(void) {
    func_00003408(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_000034F0);

void func_00003520(void) {
    func_000038C8();
}

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_0000353C);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00003608);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00003658);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_000036EC);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_0000371C);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_000037B8);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00003808);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_000038C8);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_000038F4);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00003B04);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00003BB0);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00003C64);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00003D40);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00003E78);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00003ECC);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00003F20);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00004308);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_0000439C);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_000043D4);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00004490);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_0000454C);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007B94);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007BA8);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007BBC);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_000046B4);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00004714);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00004740);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_0000493C);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00004A80);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00004AB8);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00004B3C);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00004BF0);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00004C24);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00004C94);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00004CC4);

void func_00004D0C(s32 arg0) {
    func_00004D40();
    func_00004FD0(arg0 + 4, 0);
}

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00004D40);

void func_00004E0C(struct Unk_func_00004E0C_0 *arg0, s32 arg1) {
    if (arg0->unk8 >= arg1) {

    } else {
        func_00005130((s32) arg0, arg1);
    }
}

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00004E40);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00004EC8);

void func_00004F5C(struct Unk_func_00004F5C_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    func_000034F0((arg0->unk0 + (arg0->unk4 * 0xC)) - 0xC);
    temp_v1 = arg0->unk4 - 1;
    temp_v0 = arg0->unk8;
    arg0->unk4 = temp_v1;
    if (temp_v1 >= (temp_v0 - 0x14)) {

    } else {
        func_00005130((s32) arg0, temp_v0 - 0xA);
    }
}

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00004FD0);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00005130);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_000052DC);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00005364);

void func_000053BC(void) {
    s32 temp_s0;

    temp_s0 = D_00007EDC;
    if (temp_s0 == 0) {
        D_00007EDC = 0;
    } else {
        func_000034F0(temp_s0 + 0x64);
        func_000034F0(temp_s0 + 0x14);
        func_00006170(temp_s0 + 4);
        scePaf_4E67BB08(temp_s0);
        D_00007EDC = 0;
    }
}

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_0000541C);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_000054B4);

void func_0000553C(struct Unk_func_0000553C_0 *arg0) {
    sceVshCommonGui_72E652AA(arg0->unk58);
}

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00005558);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007C14);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007C24);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007C40);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007C58);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007C68);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_000058D8);

void func_00005B74(struct Unk_func_00005B74_0 *arg0) {
    if (arg0->unk60 != 0) {
        arg0->unk60 = 0U;
        sceIoClose(arg0->unk5C);
    }
}

s32 func_00005BA4(struct Unk_func_00005BA4_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = arg0->unk5C;
    if (temp_v0 >= 0) {
        var_v1 = sceIoWrite(temp_v0);
    }
    return var_v1;
}

void func_00005BD8(void) {
    scePaf_5FAC9869();
}

void func_00005BF4(void) {
    scePaf_545FE2DA();
}

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007C84);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007C88);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00005C10);

s32 func_00005CA0(struct Unk_func_00005CA0_0 *arg0) {
    s32 temp_s1;

    if (arg0->unk61 != 0) {
        arg0->unk61 = 0U;
        sceHttpEnd();
        sceLibUpdateDL_D6A09757();
        temp_s1 = arg0->unk80;
        if (temp_s1 == 0) {
            arg0->unk80 = 0;
        } else {
            scePaf_4612DB4B(temp_s1);
            scePaf_4E67BB08(temp_s1);
            arg0->unk80 = 0;
        }
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00005D10);

s32 func_00005DD4(void) {
    s32 var_v1;
    void *temp_v0;

    temp_v0 = scePaf_338C3774(scePaf_D4FAE7D0("system_plugin"), 1);
    var_v1 = 0;
    if (temp_v0 != NULL) {
        var_v1 = M2C_FIELD(temp_v0, s32 (**)(), 0x7C)();
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00005E1C);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00005F34);

void func_00006118(void) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(func_00005364(), s32 *, 0x44);
    if (temp_s0 == 0) {

    } else {
        scePaf_4612DB4B(temp_s0);
        scePaf_4E67BB08(temp_s0);
    }
}

void func_00006160(struct Unk_func_00006160_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_00006170);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_000061EC);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_000062D4);

INCLUDE_ASM("tmp/asm/282/update_plugin/nonmatchings/update_plugin", func_0000632C);

INCLUDE_RODATA("tmp/asm/282/update_plugin/nonmatchings/update_plugin", D_00007CF0);
