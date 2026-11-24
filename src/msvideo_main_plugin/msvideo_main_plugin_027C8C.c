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

void func_0002D4CC(void) {
    void *sp0;
    sceVshCommonUtil_094B0219(&sp0, 0);
    func_0002D550();
    sceVshCommonUtil_D24DD449(&sp0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002D4FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_027C8C", func_0002D550);

s32 func_0002D5BC(void) {
    void *sp0;
    sceVshCommonUtil_094B0219(&sp0, 0);
    func_0002D4FC();
    sceVshCommonUtil_D24DD449(&sp0);
    return 0;
}

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

