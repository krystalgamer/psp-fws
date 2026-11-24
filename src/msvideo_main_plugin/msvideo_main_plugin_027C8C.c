#include "common.h"
#include "msvideo_main_plugin_decls.h"

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00027C8C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00027CB0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00027FBC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000281C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002824C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000282F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002840C);

void func_00028440(M2C_UNK **arg0) {
    *arg0 = &D_000B0700;
    D_000B61F0 = 0;
    func_00004374((s32) arg0);
}

void func_0002846C(M2C_UNK **arg0) {
    *arg0 = &D_000B0700;
    D_000B61F0 = 0;
    func_00004374((s32) arg0);
    scePaf_6261C0A5((s32) arg0);
}

void func_000284AC(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg2;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B10E0;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void func_000284C8(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg2;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B10E0;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void func_000284E4(M2C_UNK **arg0) {
    *arg0 = &D_000B10E0;
    D_000B61F4 = 0;
}

void func_000284FC(M2C_UNK **arg0) {
    *arg0 = &D_000B10E0;
    D_000B61F4 = 0;
}

void func_00028514(M2C_UNK **arg0) {
    *arg0 = &D_000B10E0;
    D_000B61F4 = 0;
    scePaf_6261C0A5((s32) arg0);
}

void *func_00028540(s32 arg0, s32 arg1) {
    s32 var_v0;
    void *temp_v0;

    var_v0 = D_000B61F4;
    if (var_v0 == 0) {
        temp_v0 = scePaf_61A8E8EC(0x10);
        func_000284C8(temp_v0, arg0, arg1);
        D_000B61F4 = (s32) temp_v0;
        var_v0 = (s32) temp_v0;
    }
    return (void *) var_v0;
}

s32 func_000285B4(void) {
    return D_000B61F4;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000285C0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1088);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B108C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1098);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00028648);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00028754);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00028860);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000288C0);

void func_00028900(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 == 0) {

    } else if (func_0001F018(temp_v0) == 1) {
        func_00001D5C();
        func_000014E8();
        func_0001E4F4(M2C_FIELD(arg0, s32 *, 0xC));
    }
}

void func_00028960(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 == 0) {

    } else if (func_0001F018(temp_v0) == 1) {
        func_00001D5C();
        func_000014E8();
        func_0001E5C8(M2C_FIELD(arg0, s32 *, 0xC));
    }
}

void func_000289C0(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 == 0) {

    } else {
        func_0001E1E4(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000289F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00028A60);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00028AA4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00028AFC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00028C24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00028CD0);

void func_00028D18(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C) = func_0001BE14();
    func_00028AFC(arg0);
    func_00029038(arg0);
    if (func_00029030(arg0) != 0) {

    } else {
        func_000290D4(arg0);
    }
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B10E0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B110C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00028D70);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00028F10);

void func_00029028(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00029030);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00029038);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000290D4);

void func_00029130(M2C_UNK **arg0) {
    *arg0 = &D_000B1378;
    D_000B61F8 = 0;
    func_00004374((s32) arg0);
}

void func_0002915C(M2C_UNK **arg0) {
    *arg0 = &D_000B1378;
    D_000B61F8 = 0;
    func_00004374((s32) arg0);
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002919C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002920C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002925C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1150);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B115C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B117C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1188);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B11A8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B11B8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B11D4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B11E4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1200);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1210);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B122C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B123C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1260);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1270);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1294);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B12CC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B12E0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B12FC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1310);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B132C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1358);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1378);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B13B0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000292AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00029358);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00029414);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00029514);

s32 func_000296F0(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_v0 != 0) {
        sceVshCommonGui_8F414E35(temp_v0);
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    return 1;
}

void func_00029734(void) {
    if (D_000B61FC != NULL) {
        M2C_FIELD(D_000B61FC, s32 *, 0x2C) = 0;
    }
}

void func_0002974C(M2C_UNK **arg0) {
    *arg0 = &D_000B13E0;
    D_000B61FC = NULL;
    func_00004374((s32) arg0);
}

void func_00029778(M2C_UNK **arg0) {
    *arg0 = &D_000B13E0;
    D_000B61FC = NULL;
    func_00004374((s32) arg0);
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000297B8);

s32 func_0002981C(void) {
    return D_000B6200;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00029828);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002988C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B13E0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1418);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000298F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002996C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000299B4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1450);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1460);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1478);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1494);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B14B8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B14D4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B14E4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B14F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00029BD0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00029D40);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00029DC4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002A0B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002A0DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002A19C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002A1BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002A1F4);

void func_0002A22C(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x10) == 0) {

    } else {
        func_0002A25C((s32) arg0);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002A25C);

s32 func_0002A35C(void) {
    sceVshCommonGui_F5A16B4D(0);
    sceVshCommonGui_891DD627(0);
    return 1;
}

void func_0002A384(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_v0 == 0) {

    } else {
        sceVshCommonGui_DDDE22B1(temp_v0);
    }
}

void func_0002A3B4(M2C_UNK **arg0) {
    *arg0 = &D_000B1520;
    D_000B6200 = 0;
    func_00004374((s32) arg0);
}

void func_0002A3E0(M2C_UNK **arg0) {
    *arg0 = &D_000B1520;
    D_000B6200 = 0;
    func_00004374((s32) arg0);
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002A420);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002A490);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002A4E0);

void func_0002A530(M2C_UNK **arg0) {
    *arg0 = &D_000B15A8;
    D_000B6204 = 0;
    func_00004374((s32) arg0);
}

void func_0002A55C(M2C_UNK **arg0) {
    *arg0 = &D_000B15A8;
    D_000B6204 = 0;
    func_00004374((s32) arg0);
}

void func_0002A588(M2C_UNK **arg0) {
    *arg0 = &D_000B15A8;
    D_000B6204 = 0;
    func_00004374((s32) arg0);
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1520);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1558);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002A5C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002A760);

void func_0002A784(void) {
    sceVshCommonGui_1F02F9D5(0);
    func_000027D4();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002A7A8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002A940);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002A950);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002AA08);

s32 func_0002AAA0(s32 arg0) {
    sceVshCommonGui_1F02F9D5(0);
    func_0000283C();
    func_0002A940(arg0);
    return 1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002AADC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002AB48);

void func_0002ABCC(M2C_UNK **arg0) {
    *arg0 = &D_000B1600;
    D_000B6208 = 0;
}

void func_0002ABE4(M2C_UNK **arg0) {
    *arg0 = &D_000B1600;
    D_000B6208 = 0;
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002AC10);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002AC7C);

void func_0002ACA8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x10) == 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 8), M2C_UNK (**)(s32), 0x18)(M2C_FIELD(arg0, s32 *, 0xC));
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002ACDC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002AD58);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1594);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B15A8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B15E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002AD8C);

void func_0002ADD4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 (**)(), 0x2C)();
}

void func_0002AE04(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x10) = arg1;
}

void func_0002AE0C(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), M2C_UNK (**)(), 0x34)();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002AE30);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002AEBC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002AF78);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002AFA8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002AFEC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002B058);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002B098);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002B0F0);

s32 func_0002B144(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = scePaf_3EDD45EF(0, &func_0002B22C, arg0, -1, -1, &func_0002B198);
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002B198);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002B1D8);

s32 func_0002B220(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC) != 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002B22C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002B284);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002B334);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002B394);

void func_0002B3C0(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), M2C_UNK (**)(M2C_UNK), 0x30)(arg1);
}

void func_0002B3E4(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), M2C_UNK (**)(M2C_UNK), 0x34)(arg1);
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1600);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1608);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1614);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002B408);

void func_0002B460(void) {
    void *temp_v0;

    temp_v0 = func_0002AFEC();
    if (temp_v0 != NULL) {
        scePaf_C9686A21(M2C_FIELD(temp_v0, s32 *, 4));
    }
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B163C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002B48C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002B524);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002B634);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002B68C);

void func_0002B6F0(void) {
    if (D_000B621E != 0) {

    } else {
        D_000B621E = 1;
        scePaf_0CFD27E9();
    }
}

void func_0002B724(void) {
    if (D_000B621E == 0) {

    } else {
        D_000B621E = 0;
        scePaf_648CA0C5();
    }
}

void func_0002B754(void) {
    if (D_000B621F != 0) {

    } else {
        D_000B621F = 1;
        scePaf_F042CC8B();
    }
}

void func_0002B788(void) {
    if (D_000B621F == 0) {

    } else {
        D_000B621F = 0;
        scePaf_B94FDC08();
    }
}

s32 func_0002B7B8(void) {
    return M2C_FIELD(scePaf_F77E3DC0(), s32 *, 0x9C);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002B7D8);

void func_0002B840(s32 arg0) {
    void *temp_v0;

    temp_v0 = scePaf_F77E3DC0();
    if (M2C_FIELD(temp_v0, s32 *, 0x9C) == 0) {

    } else {
        scePaf_0A4868F1(temp_v0, arg0);
    }
}

void func_0002B884(s32 arg0) {
    D_000B5C00 = arg0;
}

s32 func_0002B890(void) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = D_000B5C00;
    if (var_v1 == -1) {
        temp_v0 = func_0002B7D8();
        D_000B5C00 = temp_v0;
        var_v1 = temp_v0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002B8D4);

void func_0002B94C(void) {
    if (func_0002B7B8() != 0) {
        if (func_0002B7D8() == 0) {
            func_0002B840(0);
        }
    }
    vsh_3B9060A8(1);
    scePower_EBD177D6(0xDE, 0xDE, 0x6F);
    func_0002B334(0);
    func_0002B058(0);
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1658);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002B9B8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002BA9C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002BAD0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002BB24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002BB8C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002BC2C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002BCA8);

void func_0002BD24(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B1690;
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x3C));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B16C0;
}

void func_0002BD64(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B1690;
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x3C));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B16C0;
}

void func_0002BDA4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B1690;
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x3C));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B16C0;
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002BDEC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002BEB8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002BF34);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002BFA8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002C01C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002C080);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002C118);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002C188);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002C1F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002C268);

void func_0002C280(M2C_UNK **arg0) {
    *arg0 = &D_000B16C0;
}

void func_0002C290(M2C_UNK **arg0) {
    *arg0 = &D_000B16C0;
    scePaf_6261C0A5((s32) arg0);
}

s32 func_0002C2B8(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002C2C0);

s32 func_0002C2D0(void) {
    return 0;
}

s32 func_0002C2D8(void) {
    return 0;
}

s32 func_0002C2E0(void) {
    return 0;
}

s32 func_0002C2E8(void) {
    return 0;
}

s32 func_0002C2F0(void) {
    return 0;
}

s32 func_0002C2F8(void) {
    return 0x1E;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002C300);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002C368);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002C3D8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002C4E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002C6DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002C7FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002C844);

void func_0002C88C(void) {
    void *temp_v0;

    temp_v0 = func_0000CE9C();
    if (temp_v0 != NULL) {
        func_0000E540(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002C8B8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B167C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1690);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B16C0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B16E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002C90C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002CA34);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002CADC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002CB7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002CB90);

void func_0002CBA4(void) {
}

void func_0002CBAC(void) {
}

void func_0002CBB4(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002CBBC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002CC08);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002CC5C);

void func_0002CCAC(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 4) != 1) {
        func_0002CC08((s32) arg0);
    } else {
        func_0002CBBC((s32) arg0);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002CCE8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002CD44);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002CDA0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002CE44);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B16F4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B16F8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1714);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1728);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1738);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002CEE8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002CF80);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002D024);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1748);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002D050);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002D188);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002D278);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002D2A0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002D2E4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002D340);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002D430);

void func_0002D480(void) {
}

void func_0002D488(void) {
}

void func_0002D490(void) {
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1754);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002D498);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002D4CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002D4FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002D550);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002D5BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002D5F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002D648);

void func_0002D69C(void) {
    if (func_0002D6D0() == 0) {

    } else {
        sceNetApctlDisconnect();
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002D6D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002D754);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002D804);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1774);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002D838);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002DAC8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002DB08);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002DB30);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002DBB8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002DBEC);

s32 func_0002DC4C(void) {
    return D_000B6284;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002DC58);

void func_0002DCE4(void) {
    func_0002DC58(1, 0xFFFF);
}

void func_0002DD04(void) {
    func_0002DC58(0, 0xFFFF);
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1814);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1824);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1840);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1864);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1874);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1888);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B18C8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B190C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1910);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1928);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1940);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1948);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1960);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B196C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1988);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B199C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B19B8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B19C4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B19E0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B19E8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1A00);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1A08);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1A24);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1A2C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1A44);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1A50);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1A70);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1A7C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1A9C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1AA4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1ABC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1AC4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1AE0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1AE8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1B00);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1B08);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1B20);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1B28);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1B40);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1B4C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1B68);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1B70);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1B88);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1B94);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1BAC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1C78);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1C90);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1D5C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1DDC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002DD24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002E1A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002E644);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002E6C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002E74C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002E7B8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002E7E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002E854);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002E8E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002E984);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002EAEC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002EE1C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002EEAC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002F208);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002F2C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002F454);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002F524);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002F5D8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002F6AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002F7BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002F8F8);

void func_0002F94C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x440) = arg1;
    func_0002F8F8();
}

s32 func_0002F96C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x440);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002F974);

void func_0002F9F8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x490) = arg1;
}

s32 func_0002FA00(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x490);
}

void func_0002FA08(void *arg0) {
    func_0002FF54(M2C_FIELD(arg0, s32 *, 0x494));
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002FA24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002FA30);

void func_0002FA3C(void) {
}

void func_0002FA44(void) {
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002FA4C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002FAAC);

s32 func_0002FB28(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 func_0002FB30(void *arg0) {
    return 0x11 - M2C_FIELD(arg0, s32 *, 4);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002FB40);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002FBE4);

s32 func_0002FC80(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    return 0;
}

s32 func_0002FC8C(s32 *arg0) {
    return *arg0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002FC94);

s32 func_0002FCF0(void) {
    return 3;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002FCF8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002FEF8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002FF54);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002FFB0);

void func_0003004C(void) {
    func_0002FFB0(1, 0xFFFF);
}

void func_0003006C(void) {
    func_0002FFB0(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003008C);

s32 func_000300B8(void) {
    return D_000B5C0C;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000300C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00030100);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00030144);

s32 func_00030170(void) {
    return D_000B5C10;
}

s32 func_0003017C(s32 arg0) {
    return arg0 + 0x338;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00030184);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000301EC);

void func_00030254(M2C_UNK **arg0) {
    *arg0 = &D_000B2078;
    func_00030494((s32) arg0);
}

void func_0003027C(M2C_UNK **arg0) {
    *arg0 = &D_000B2078;
    func_00030494((s32) arg0);
}

void func_000302A4(M2C_UNK **arg0) {
    *arg0 = &D_000B2078;
    func_00030494((s32) arg0);
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000302DC);

s32 func_00030308(void) {
    return D_000B5C18;
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1EB8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1EC8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B1FA0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2078);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B214C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00030314);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000303D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00030494);

void func_000304E4(M2C_UNK **arg0) {
    *arg0 = &D_000B2188;
    scePaf_6A82A8C6((s32) arg0, 0x01000009);
    scePaf_6A82A8C6((s32) arg0, 0x0100000A);
    scePaf_9E0CA28F(arg0);
}

void func_00030534(M2C_UNK **arg0) {
    *arg0 = &D_000B2188;
    scePaf_6A82A8C6((s32) arg0, 0x01000009);
    scePaf_6A82A8C6((s32) arg0, 0x0100000A);
    scePaf_9E0CA28F(arg0);
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003058C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00030648);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003075C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000307F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000308DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00030908);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00030A64);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00030B9C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00030BB8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00030BF8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00030C3C);

void func_00030C8C(void) {
    func_00030C3C(1, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00030CAC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00030D24);

void func_00030D9C(M2C_UNK **arg0) {
    *arg0 = &D_000B2260;
    func_00030494((s32) arg0);
}

void func_00030DC4(M2C_UNK **arg0) {
    *arg0 = &D_000B2260;
    func_00030494((s32) arg0);
}

void func_00030DEC(M2C_UNK **arg0) {
    *arg0 = &D_000B2260;
    func_00030494((s32) arg0);
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00030E24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00030F2C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00030FA4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00030FE8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000311A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00031204);

void func_00031280(void) {
    func_00031204(1, 0xFFFF);
}

void func_000312A0(void) {
    func_00031204(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000312C0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003131C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2174);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2188);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2260);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00031384);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00031648);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00031804);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003186C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000318D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00031944);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000319B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00031A2C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00031AAC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00031B5C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00031E68);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00031EC8);

void func_00031EF4(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x90)();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00031F18);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00031F4C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00031F98);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00032018);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003210C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00032178);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00032244);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00032314);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000324C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003260C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00032A08);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00032A98);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00032B38);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00032C1C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00032D00);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00032EA0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00032F1C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00032F7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00033224);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00033B70);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00033F54);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00034114);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00034164);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000344A8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00034760);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00034A30);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00034E80);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00034E9C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000351F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00035350);

s32 func_00035394(void) {
    return 0;
}

s32 func_0003539C(void) {
    return 2;
}

s32 func_000353A4(void) {
    return 0;
}

s32 func_000353AC(void) {
    return 0;
}

s32 func_000353B4(void) {
    return 0;
}

s32 func_000353BC(void) {
    return 0;
}

s32 func_000353C4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x55C);
}

s32 func_000353CC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x560);
}

s32 func_000353D4(void) {
    return 0;
}

s32 func_000353DC(void) {
    return 0;
}

s32 func_000353E4(void) {
    return 0;
}

s32 func_000353EC(void) {
    return 8;
}

s32 func_000353F4(void) {
    return 0;
}

void func_000353FC(void) {
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00035404);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00035494);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00035524);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003559C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00035614);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00035694);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B233C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2348);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2358);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2360);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2364);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2368);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B236C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2370);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2374);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2378);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B237C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2380);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2384);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2390);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2428);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2430);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2438);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2440);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2454);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2458);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B245C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2460);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2464);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000356B4);

s32 func_000357F4(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000357FC);

void func_00035878(void) {
    func_000357FC(1, 0xFFFF);
}

void func_00035898(void) {
    func_000357FC(0, 0xFFFF);
}

void func_000358B8(M2C_UNK **arg0) {
    *arg0 = &D_000B24C0;
}

void func_000358C8(M2C_UNK **arg0) {
    *arg0 = &D_000B24C0;
    scePaf_6261C0A5((s32) arg0);
}

s32 func_000358F0(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000358F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00035928);

void func_00035958(M2C_UNK **arg0) {
    *arg0 = &D_000B24E0;
    func_000318D4((s32) arg0);
}

void func_00035980(M2C_UNK **arg0) {
    *arg0 = &D_000B24E0;
    func_000318D4((s32) arg0);
}

void func_000359A8(M2C_UNK **arg0) {
    *arg0 = &D_000B24E0;
    func_000318D4((s32) arg0);
    scePaf_6261C0A5((s32) arg0);
}

void func_000359E0(void) {
    func_00031A2C();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000359FC);

s32 func_00035A58(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00035A60);

void func_00035A8C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00035A94);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00035B24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00035BB4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00035C2C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00035CA4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00035D24);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B24A0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B24C0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B24E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00035D44);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00035E44);

s32 func_00035EC8(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00035ED0);

void func_00035F4C(void) {
    func_00035ED0(1, 0xFFFF);
}

void func_00035F6C(void) {
    func_00035ED0(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00035F8C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00035FC4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00035FFC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000360B4);

void func_000360F8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B25E0;
    scePaf_4729E549(M2C_FIELD(arg0, s32 **, 0x6DC));
    func_000318D4((s32) arg0);
}

void func_00036134(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B25E0;
    scePaf_4729E549(M2C_FIELD(arg0, s32 **, 0x6DC));
    func_000318D4((s32) arg0);
}

void func_00036170(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B25E0;
    scePaf_4729E549(M2C_FIELD(arg0, s32 **, 0x6DC));
    func_000318D4((s32) arg0);
    scePaf_6261C0A5((s32) arg0);
}

void func_000361B4(void) {
    func_00031A2C();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000361D0);

s32 func_00036254(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x6E0);
    if (temp_v0 >= 0) {
        sceIoClose(temp_v0);
    }
    return 0;
}

s32 func_00036280(void *arg0) {
    s32 temp_v0;

    if (func_000A6894(M2C_FIELD(arg0, s32 *, 0x6DC)) == 0) {
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
        temp_v0 = func_000365F4(arg0, arg0 + 0x50);
        M2C_FIELD(arg0, s32 *, 0x3C) = temp_v0;
        if (M2C_FIELD(arg0, u8 *, 0x79) == 0) {
            M2C_FIELD(arg0, s32 *, 0x40) = temp_v0;
        } else {
            M2C_FIELD(arg0, s32 *, 0x40) = func_00036848(arg0, M2C_FIELD(arg0, s32 *, 0x54), arg0 + 0x7C);
        }
        M2C_FIELD(arg0, s32 *, 0x44) = func_000369F4(arg0, arg0 + 0x564);
        M2C_FIELD(arg0, s32 *, 0x48) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *), 0x7C)(arg0);
    }
    return 0;
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2580);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2588);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2598);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00036318);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003655C);

s32 func_000365A0(void) {
    return 4;
}

void func_000365A8(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x6E0);
    if (temp_v0 >= 0) {
        sceIoClose(temp_v0);
        M2C_FIELD(arg0, s32 *, 0x6E0) = -2;
    }
    func_00032D00(arg0);
}

void func_000365EC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000365F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00036848);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000369F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00036C50);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00036E7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00037078);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00037108);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00037180);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000371F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00037278);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B25B8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B25BC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B25C0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B25C4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B25C8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B25CC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B25D0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B25D4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B25E0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2678);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2680);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2688);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2694);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2698);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B269C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000372E0);

s32 func_000373F4(void) {
    sceVshBridge_5317A582();
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00037414);

void func_00037490(void) {
    func_00037414(1, 0xFFFF);
}

void func_000374B0(void) {
    func_00037414(0, 0xFFFF);
}

s32 func_000374D0(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = scePaf_C1B0AA0D((s32) &D_000B26E0);
    temp_v0 = scePaf_79CF7608(arg0 + (temp_s0 + scePaf_C1B0AA0D((s32) &D_000B26F0)), 0, 0xA);
    return ((u32) (temp_v0 - 0x64) < 0x20U) ? temp_v0 : -1;
}

s32 func_00037540(s32 arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;

    temp_s0 = scePaf_C1B0AA0D((s32) &D_000B26E0);
    temp_s0_2 = temp_s0 + scePaf_C1B0AA0D((s32) &D_000B26F4);
    temp_v0 = scePaf_79CF7608(arg0 + (temp_s0_2 + scePaf_C1B0AA0D((s32) &D_000B26F0)) + 5, 0, 0xA);
    return ((u32) (temp_v0 - 1) >= 0x3E7U) ? 0 : temp_v0;
}

s32 func_000375BC(s32 arg0, void *arg1) {
    func_0000C1D0(arg1, arg0);
    M2C_FIELD((M2C_FIELD(arg1, s32 *, 4) + M2C_FIELD(arg1, s32 *, 0)), s8 *, -1) = 0x4C;
    return 1;
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B26BC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B26C8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B26E0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B26F0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B26F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00037600);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000376DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00037834);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00037920);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00037960);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00037A2C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00037A6C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00037B38);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00037B78);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00037DC4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00037F28);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00037F48);

void func_00037F68(M2C_UNK **arg0) {
    *arg0 = &D_000B27F8;
}

void func_00037F78(M2C_UNK **arg0) {
    *arg0 = &D_000B27F8;
}

void func_00037F88(M2C_UNK **arg0) {
    *arg0 = &D_000B27F8;
    scePaf_6261C0A5((s32) arg0);
}

s32 func_00037FB0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00037FB8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00038008);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00038118);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003840C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00038648);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003866C);

s32 func_000386B0(void *arg0) {
    s32 temp_v0;
    s32 var_s2;

    var_s2 = 1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v0 != -1) {
        if (sceVshBridge_C86E65DC(temp_v0) < 0) {
            var_s2 = 0;
        } else {
            M2C_FIELD(arg0, s32 *, 4) = -1;
        }
    }
    return var_s2;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003870C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003873C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003876C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000387C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003881C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003887C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00038948);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00038984);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000389A0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000389E4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00038A90);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2720);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00038AC8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00038DA8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00038EA8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00038F90);

s32 func_000391AC(void) {
    return 1;
}

s32 func_000391B4(void) {
    return 2;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000391BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000392E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00039360);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000393FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000395E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00039828);

void func_0003996C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00039974);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00039A04);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00039A94);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00039B0C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00039B84);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00039C04);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2758);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B27F8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2808);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2810);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2818);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2820);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2824);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00039C24);

s32 func_00039D34(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00039D3C);

void func_00039DB8(void) {
    func_00039D3C(1, 0xFFFF);
}

void func_00039DD8(void) {
    func_00039D3C(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00039DF8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00039E28);

void func_00039E58(M2C_UNK **arg0) {
    *arg0 = &D_000B2870;
    func_0003E250((s32) arg0);
}

void func_00039E80(M2C_UNK **arg0) {
    *arg0 = &D_000B2870;
    func_0003E250((s32) arg0);
}

void func_00039EA8(M2C_UNK **arg0) {
    *arg0 = &D_000B2870;
    func_0003E250((s32) arg0);
    scePaf_6261C0A5((s32) arg0);
}

s32 func_00039EE0(void) {
    return 0x10;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00039EE8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00039F78);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003A008);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003A080);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003A0F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003A178);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003A198);

s32 func_0003A1D4(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003A1DC);

void func_0003A258(void) {
    func_0003A1DC(1, 0xFFFF);
}

void func_0003A278(void) {
    func_0003A1DC(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003A298);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003A2C8);

void func_0003A2F8(M2C_UNK **arg0) {
    *arg0 = &D_000B2960;
    func_000318D4((s32) arg0);
}

void func_0003A320(M2C_UNK **arg0) {
    *arg0 = &D_000B2960;
    func_000318D4((s32) arg0);
}

void func_0003A348(M2C_UNK **arg0) {
    *arg0 = &D_000B2960;
    func_000318D4((s32) arg0);
    scePaf_6261C0A5((s32) arg0);
}

void func_0003A380(void) {
    func_00031A2C();
}

s32 func_0003A39C(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg2;
    func_00074A58((s32) (arg0 + 8), arg1);
    return 0;
}

s32 func_0003A3C0(void) {
    return 0;
}

s32 func_0003A3C8(void) {
    return 5;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003A3D0);

void func_0003A624(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003A62C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003A744);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003A838);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003AA44);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003ADD4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2850);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2870);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2908);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2910);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2918);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2930);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2948);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003AFE0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003B1D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003B380);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003B5FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003B68C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003B704);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003B77C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003B7FC);

u8 func_0003B894(void) {
    return D_000B5C88;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003B8A0);

s32 func_0003B8D4(void) {
    sceVshBridge_5317A582();
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003B8F4);

void func_0003B970(void) {
    func_0003B8F4(1, 0xFFFF);
}

void func_0003B990(void) {
    func_0003B8F4(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003B9B0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003B9FC);

void func_0003BA48(s32 **arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(arg0, s32 **, 0) = &D_000B2B30;
    if (temp_v1 != 0) {
        scePaf_CCFF20ED(temp_v1);
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    if (temp_v0 != 0) {
        scePaf_CCFF20ED(temp_v0);
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
    }
    func_00037F68(arg0);
}

void func_0003BAB8(s32 **arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(arg0, s32 **, 0) = &D_000B2B30;
    if (temp_v1 != 0) {
        scePaf_CCFF20ED(temp_v1);
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    if (temp_v0 != 0) {
        scePaf_CCFF20ED(temp_v0);
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
    }
    func_00037F68(arg0);
}

void func_0003BB28(s32 **arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(arg0, s32 **, 0) = &D_000B2B30;
    if (temp_v1 != 0) {
        scePaf_CCFF20ED(temp_v1);
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    if (temp_v0 != 0) {
        scePaf_CCFF20ED(temp_v0);
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
    }
    func_00037F68(arg0);
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003BBA0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2960);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B29F8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2A00);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2A10);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2A28);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003BE4C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003C2C0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003C3A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003C570);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003C5AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003C60C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003C66C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003C6D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003C7CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003C808);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003C874);

s32 func_0003C8BC(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x6DC), s32 *, 0x14);
}

s32 func_0003C8C8(void) {
    return 6;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003C8D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003CB18);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003CB94);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003CBCC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003CC5C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003CCEC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003CD64);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003CDDC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003CE5C);

u8 func_0003CEF4(void) {
    return D_000B5C89;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003CF00);

s32 func_0003CF34(void) {
    sceVshBridge_5317A582();
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003CF54);

void func_0003CFD0(void) {
    func_0003CF54(1, 0xFFFF);
}

void func_0003CFF0(void) {
    func_0003CF54(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003D010);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003D058);

void func_0003D0A0(s32 **arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(arg0, s32 **, 0) = &D_000B2CE8;
    if (temp_v1 != 0) {
        scePaf_CCFF20ED(temp_v1);
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    func_00037F68(arg0);
}

void func_0003D0F4(s32 **arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(arg0, s32 **, 0) = &D_000B2CE8;
    if (temp_v1 != 0) {
        scePaf_CCFF20ED(temp_v1);
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    func_00037F68(arg0);
}

void func_0003D148(s32 **arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(arg0, s32 **, 0) = &D_000B2CE8;
    if (temp_v1 != 0) {
        scePaf_CCFF20ED(temp_v1);
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    func_00037F68(arg0);
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2A7C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2A90);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2B30);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2B40);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2B48);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2B58);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2B70);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003D1A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003D4E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003D5BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003D674);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003D6B0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003D710);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003D770);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003D7D8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003DB00);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003DC20);

s32 func_0003DC5C(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003DC64);

s32 func_0003DCD0(void) {
    return 7;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003DCD8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003DE8C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003DF08);

s32 func_0003DF40(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003DF48);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003DFD8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003E068);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003E0E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003E158);

s32 func_0003E1D8(void) {
    return 0;
}

s32 func_0003E1E0(void) {
    return 1;
}

s32 func_0003E1E8(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003E1F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003E220);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003E250);

void func_0003E278(M2C_UNK **arg0) {
    *arg0 = &D_000B2D20;
    func_000318D4((s32) arg0);
}

void func_0003E2A0(M2C_UNK **arg0) {
    *arg0 = &D_000B2D20;
    func_000318D4((s32) arg0);
    scePaf_6261C0A5((s32) arg0);
}

void func_0003E2D8(void) {
    func_00031A2C();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003E2F4);

s32 func_0003E340(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003E348);

s32 func_0003E36C(void) {
    return 0xA;
}

s32 func_0003E374(void) {
    return 0xA;
}

void func_0003E37C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003E384);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003E3C0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003E3FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003E460);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003E4C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003E528);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003E58C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003E5C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003E604);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003E644);

void func_0003E674(void) {
}

void func_0003E67C(void) {
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003E684);

void func_0003E6DC(void *arg0, void *arg1) {
    u16 temp_a0;
    u16 temp_v1;
    u16 temp_v1_2;
    u16 temp_v1_3;
    u16 temp_v1_4;
    u16 temp_v1_5;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0);
    if ((u32) (temp_v1 - 1) < 0x270FU) {
        M2C_FIELD(arg1, u16 *, 0) = temp_v1;
    }
    temp_v1_2 = M2C_FIELD(arg0, u16 *, 2);
    if ((u32) (temp_v1_2 - 1) < 0xCU) {
        M2C_FIELD(arg1, u16 *, 2) = temp_v1_2;
    }
    temp_v1_3 = M2C_FIELD(arg0, u16 *, 4);
    if ((u32) (temp_v1_3 - 1) < 0x1FU) {
        M2C_FIELD(arg1, u16 *, 4) = temp_v1_3;
    }
    temp_v1_4 = M2C_FIELD(arg0, u16 *, 6);
    if (temp_v1_4 < 0x18U) {
        M2C_FIELD(arg1, u16 *, 6) = temp_v1_4;
    }
    temp_v1_5 = M2C_FIELD(arg0, u16 *, 8);
    if (temp_v1_5 < 0x3CU) {
        M2C_FIELD(arg1, u16 *, 8) = temp_v1_5;
    }
    temp_a0 = M2C_FIELD(arg0, u16 *, 0xA);
    if (temp_a0 < 0x3CU) {
        M2C_FIELD(arg1, u16 *, 0xA) = temp_a0;
    }
    M2C_FIELD(arg1, s32 *, 0xC) = 0;
}

void func_0003E750(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0xC) = 0;
    M2C_FIELD(arg1, u16 *, 0) = (u16) M2C_FIELD(arg0, u16 *, 0);
    M2C_FIELD(arg1, u16 *, 2) = (u16) M2C_FIELD(arg0, u16 *, 2);
    M2C_FIELD(arg1, u16 *, 4) = (u16) M2C_FIELD(arg0, u16 *, 4);
    M2C_FIELD(arg1, u16 *, 6) = (u16) M2C_FIELD(arg0, u16 *, 6);
    M2C_FIELD(arg1, u16 *, 8) = (u16) M2C_FIELD(arg0, u16 *, 8);
    M2C_FIELD(arg1, u16 *, 0xA) = (u16) M2C_FIELD(arg0, u16 *, 0xA);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003E788);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003E7D8);

s32 func_0003E828(void *arg0) {
    u16 temp_a1;
    u16 temp_a2;
    u16 temp_a3;

    temp_a1 = M2C_FIELD(arg0, u16 *, 4);
    temp_a2 = M2C_FIELD(arg0, u16 *, 6);
    temp_a3 = M2C_FIELD(arg0, u16 *, 8);
    return (((temp_a1 & 0xFF) << 8) | (temp_a1 >> 8)) + (((temp_a2 & 0xFF) << 8) | (temp_a2 >> 8)) + (((temp_a3 & 0xFF) << 8) | (temp_a3 >> 8));
}

s32 func_0003E870(void *arg0) {
    u16 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0xA);
    return ((temp_v1 & 0xFF) << 8) | (temp_v1 >> 8);
}

s32 func_0003E888(void *arg0) {
    u16 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0xC);
    return ((temp_v1 & 0xFF) << 8) | (temp_v1 >> 8);
}

s32 func_0003E8A0(void *arg0) {
    u16 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0xE);
    return ((temp_v1 & 0xFF) << 8) | (temp_v1 >> 8);
}

s32 func_0003E8B8(void *arg0) {
    u16 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0x10);
    return ((temp_v1 & 0xFF) << 8) | (temp_v1 >> 8);
}

s32 func_0003E8D0(void *arg0) {
    u16 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0x12);
    return ((temp_v1 & 0xFF) << 8) | (temp_v1 >> 8);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003E8E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003E958);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003E97C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003EA30);

void func_0003EA64(void *arg0) {
    s32 temp_v0;

    func_0003EEDC();
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x4C);
    if (temp_v0 > 0) {
        func_0003EBF0(arg0, temp_v0);
        M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    }
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2BEC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2C34);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2C48);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2CE8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2D00);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2D20);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2DB8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2DD0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2DE4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2DF8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2E08);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2E18);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2E24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003EAA4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003EB88);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003EBCC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003EBF0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003EC44);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003EC60);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003EC84);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003ECC0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003ECE4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003ED40);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003ED64);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003EDC0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003EE48);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003EEDC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003EF2C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003F12C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003F330);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003F528);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003F680);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003F6D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003F72C);

s32 func_0003F768(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x120) != 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003F774);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003F7B0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003F8C0);

s32 func_0003F948(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003F950);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2E4C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003F98C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003FA08);

void func_0003FA48(s32 arg0, s32 arg1) {
    func_0003F7B0(arg0, arg1, 1);
}

s32 func_0003FA64(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003FA6C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0003FC90);

void func_00040238(void) {
    func_0003EC84();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00040254);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0004028C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000402D8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0004033C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000403B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0004041C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00040478);

s32 func_00040528(void *arg0, M2C_UNK arg1) {
    s32 temp_v0;

    temp_v0 = func_000403B4(arg1);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_v0 == 1);
    return ((temp_v0 ^ 1) == 0) ? 0 : -1;
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2E58);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00040568);

s32 func_00040604(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_000403B4(arg1);
    M2C_FIELD(arg0, s32 *, 0x18) = temp_v0;
    return (~temp_v0 != 0) ? 0 : -1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00040640);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000406D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00040714);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000407C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00040808);

s32 func_000408B8(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000408C0);

s32 func_00040964(void) {
    return 0;
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2E84);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0004096C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00040A08);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00040B34);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00040C10);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00040C88);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00040F54);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00040FD8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000410B8);

void func_000414EC(void) {
    func_00042028();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00041508);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000415CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0004166C);

void func_0004175C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B2F00;
    func_000418D0((s32) arg0);
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void func_00041790(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B2F00;
    func_000418D0((s32) arg0);
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

void func_000417D0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B2F00;
    func_000418D0((s32) arg0);
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

void func_00041810(M2C_UNK **arg0) {
    *arg0 = &D_000B2F00;
    func_00041904((s32) arg0);
}

void func_00041838(M2C_UNK **arg0) {
    *arg0 = &D_000B2F00;
    func_00041904((s32) arg0);
}

void func_00041860(M2C_UNK **arg0) {
    *arg0 = &D_000B2F00;
    func_00041904((s32) arg0);
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00041898);

void func_000418C8(void) {
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000418D0);

void func_00041904(s32 arg0) {
    func_00042390();
    func_00041998(arg0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00041930);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00041998);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000419CC);

void func_00041A10(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x120);
    if (temp_v0 > 0) {
        sceKernelDeleteThread(temp_v0);
    }
    M2C_FIELD(arg0, s32 *, 0x120) = arg1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00041A54);

void func_00041CFC(void) {
    func_00075590();
}

void func_00041D18(void) {
    func_00075648();
}

void func_00041D34(void) {
    func_00075428();
}

void func_00041D50(void) {
    func_000754D8();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00041D6C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00041D98);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00041E68);

s32 func_00041F24(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (arg1 > 0) {
        var_v1 = sceIoClose(arg1);
        if (arg1 == M2C_FIELD(arg0, s32 *, 0x11C)) {
            M2C_FIELD(arg0, s32 *, 0x11C) = 0;
        }
    }
    return var_v1;
}

void func_00041F78(void) {
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00041F80);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00042028);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2EB8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2EC0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2EC4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2ECC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00042098);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00042244);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00042390);

s32 func_000423F0(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;

    var_s1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x120);
    if (temp_v0 > 0) {
        var_s1 = sceKernelWaitThreadEndCB(temp_v0);
        if (var_s1 != 0x800201A8) {
            temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x11C);
            if (temp_v0_2 > 0) {
                func_00041F24(arg0, temp_v0_2);
                func_000419CC(arg0, 0);
            }
            if (var_s1 == 0x800200D2) {
                var_s1 = M2C_FIELD(arg0, s32 *, 0x144);
            }
        }
    }
    return var_s1;
}

s32 func_00042478(void *arg0, void *arg1, s32 arg2, s32 arg3, u32 arg4) {
    u32 temp_v0;

    temp_v0 = sceKernelCreateThread(arg1, arg2, arg3, arg4, 0U, NULL);
    M2C_FIELD(arg0, u32 *, 0x120) = temp_v0;
    return __builtin_allegrex_min(temp_v0, 0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000424C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000424F8);

void func_00042528(M2C_UNK **arg0) {
    *arg0 = &D_000B2F30;
    func_0004276C(arg0);
}

void func_00042550(M2C_UNK **arg0) {
    *arg0 = &D_000B2F30;
    func_0004276C(arg0);
}

void func_00042578(M2C_UNK **arg0) {
    *arg0 = &D_000B2F30;
    func_0004276C(arg0);
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000425B0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000425E4);

void func_00042608(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00042610);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2F00);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00042694);

s32 func_0004276C(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 > 0) {
        sceKernelDeleteSema(temp_v0);
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_v0_2 > 0) {
        sceKernelDeleteEventFlag(temp_v0_2);
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    return 0;
}

s32 func_000427C0(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_v0 > 0) {
        var_v1 = sceKernelSetEventFlag(temp_v0);
    }
    return var_v1;
}

s32 func_000427F4(void *arg0) {
    s32 var_a2;
    u32 temp_a1;
    u32 temp_v0;

    var_a2 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        temp_a1 = M2C_FIELD(arg0, u32 *, 0x24);
        temp_v0 = M2C_FIELD(arg0, u32 *, 0x20);
        var_a2 = temp_v0 - temp_a1;
        if (temp_a1 >= temp_v0) {
            var_a2 = M2C_FIELD(arg0, s32 *, 0x1C) - temp_a1;
        }
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00042824);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00042AE0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00042B14);

s32 func_00042B50(void *arg0, void *arg1) {
    s32 temp_v0;
    s32 var_s2;
    s32 var_v0;

    var_s2 = 0;
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        func_000425B0((s32) arg0, 0x8001000C);
        var_v0 = 0x8001000C;
    } else {
        sceKernelWaitSemaCB(M2C_FIELD(arg0, s32 *, 0xC), 1, 0);
        temp_v0 = func_00042B14(arg0);
        M2C_FIELD(arg1, s32 *, 8) = temp_v0;
        if (temp_v0 != 0) {
            M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
        } else {
            var_s2 = -1;
        }
        sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0xC), 1);
        var_v0 = var_s2;
    }
    return var_v0;
}

s32 func_00042BEC(void *arg0) {
    s32 temp_s1;

    sceKernelWaitSemaCB(M2C_FIELD(arg0, s32 *, 0xC), 1, 0);
    temp_s1 = func_00042B14(arg0);
    sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0xC), 1);
    return temp_s1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00042C40);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00042D8C);

u32 func_00042E18(void *arg0, s32 arg1, s32 arg2) {
    u32 temp_a3;
    u32 var_a1;

    temp_a3 = M2C_FIELD(arg0, u32 *, 0x1C);
    var_a1 = arg1 + arg2;
    if (var_a1 >= temp_a3) {
        var_a1 = M2C_FIELD(arg0, u32 *, 0x18) + (arg2 - (temp_a3 - arg1));
    }
    if (var_a1 == temp_a3) {
        var_a1 = M2C_FIELD(arg0, u32 *, 0x18);
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00042E48);

s32 func_00042E90(void *arg0) {
    s32 temp_s1;

    sceKernelWaitSemaCB(M2C_FIELD(arg0, s32 *, 0xC), 1, 0);
    temp_s1 = func_00042E48(arg0);
    sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0xC), 1);
    return temp_s1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00042EE4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00042F68);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00042F9C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00042FD0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00043034);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000430C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00043120);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000431B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00043294);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000432D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0004330C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00043390);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00043414);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0004344C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00043590);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000435D8);

void func_000436F4(s32 arg0, s32 arg1) {
    func_000435D8(arg0, arg1, 0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00043710);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0004375C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000437D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00043808);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2F30);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2F38);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00043C28);

s32 func_00044218(void) {
    return D_000BD268;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00044224);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2F64);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2F70);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2F7C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2F88);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2F94);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2FA0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", D_000B2FAC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0004425C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_000444D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_00044510);

