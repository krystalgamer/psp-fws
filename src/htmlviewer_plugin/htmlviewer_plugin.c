#include "common.h"
#include "htmlviewer_plugin_decls.h"

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00000024);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_000000AC);

void func_0000010C(void) {
    if (D_000081C0 == 0) {

    } else {
        vsh_388428D3(D_000081C0);
    }
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00000140);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_000001F4);

void func_00000274(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x14;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00007200;
    sceKernelWaitSema(M2C_FIELD(arg0, s32 *, 0x10), 1, NULL);
    M2C_FIELD(arg0, s8 *, 0xC) = 1;
    scePaf_CA5EF446(temp_s1);
    sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0x10), 1);
    scePaf_5775283A(arg0);
    scePaf_1B043852(temp_s1);
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x10));
    scePaf_E977B833(arg0);
}

void func_000002F8(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x14;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00007200;
    sceKernelWaitSema(M2C_FIELD(arg0, s32 *, 0x10), 1, NULL);
    M2C_FIELD(arg0, s8 *, 0xC) = 1;
    scePaf_CA5EF446(temp_s1);
    sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0x10), 1);
    scePaf_5775283A(arg0);
    scePaf_1B043852(temp_s1);
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x10));
    scePaf_E977B833(arg0);
}

void func_0000037C(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x14;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00007200;
    sceKernelWaitSema(M2C_FIELD(arg0, s32 *, 0x10), 1, NULL);
    M2C_FIELD(arg0, s8 *, 0xC) = 1;
    scePaf_CA5EF446(temp_s1);
    sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0x10), 1);
    scePaf_5775283A(arg0);
    scePaf_1B043852(temp_s1);
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x10));
    scePaf_E977B833(arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00000408);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00000470);

s32 func_0000055C(void *arg0) {
    s32 var_v1;

    var_v1 = M2C_FIELD(arg0, s32 *, 8);
    if (!(var_v1 & 1)) {
        if (var_v1 & 2) {
            func_0000156C(3);
            var_v1 = M2C_FIELD(arg0, s32 *, 8);
        }
    } else {
        func_00001368();
        var_v1 = M2C_FIELD(arg0, s32 *, 8);
    }
    if (!(var_v1 & 4)) {
        M2C_FIELD(arg0, s32 *, 8) = 0;
    } else {
        if (func_0000398C() >= 2) {
            func_00003D48(0);
            func_00001760();
            func_000037A4(2);
            func_00000140();
        }
        sceVshBridge_C58090DA(2);
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    return 0;
}

void func_00000614(void) {
    scePaf_CAF05F1D(D_000080A4, D_00007E48);
    func_00001304(0);
    func_00001418(0, 0, 0, 0);
    func_00003BDC(0);
}

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006BB8);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006BD8);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006BDC);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006BF8);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006BFC);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006C08);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006C18);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006C2C);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006C40);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006C44);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006C50);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006C64);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006C74);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006C8C);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006C9C);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006CB4);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006D08);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006D2C);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006D50);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006D60);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006D70);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006D98);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006DC0);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006DD0);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006DE0);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006DF4);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006E0C);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006E1C);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006E28);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006E34);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006E44);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006EC4);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006ED4);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006ED8);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006EEC);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006F14);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006F1C);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006F24);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006F4C);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006F70);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006F7C);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006FA0);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006FB0);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006FCC);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006FDC);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006FE8);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006FEC);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00006FF8);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007000);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007008);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007018);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007028);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007040);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007058);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007078);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007080);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_0000708C);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_0000709C);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000070AC);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000070B8);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000070C4);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000070D4);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000070E4);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000070F0);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000070FC);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007110);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_0000711C);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007144);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007168);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007184);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_0000719C);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000071B4);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000071C4);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000071D8);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00000660);

s32 func_000006DC(void) {
    scePaf_FD9DE7B9(0x40);
    D_000081C5 = 0;
    if (D_000081CD != 0) {
        func_00000660(0);
    }
    if (func_000039BC() != 2) {
        if ((u32) (func_0000398C() - 2) >= 5U) {

        } else {
            func_00000614();
        }
    } else {
        func_000024FC();
    }
    return 0;
}

void func_00000770(s32 arg0, s32 arg1) {
    M2C_FIELD(&D_000081DC, s32 *, 0) = arg0;
    M2C_FIELD(&D_000081DC, s32 *, 4) = arg1;
}

s32 func_00000784(s32 arg0) {
    s32 var_v0;

    if ((u32) (func_0000398C() - 2) < 5U) {
        var_v0 = sceHVUI_Module_3A687520(arg0, 0);
    } else {
        func_00002EB4((s32) &D_0000819C, arg0);
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_000007DC);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00000888);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_000008B4);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_000008E0);

void func_00000920(void) {
    func_00003B90(0, 0);
}

void func_00000940(void *arg0) {
    scePaf_FD9DE7B9(0x40);
    scePaf_F47CA1C2(arg0, 0x80006, func_00000AD0, 0);
    scePaf_F47CA1C2(arg0, 0x10001, func_00000888, 0);
    scePaf_F47CA1C2(arg0, 0x10002, func_000008B4, 0);
    scePaf_F47CA1C2(arg0, 0x10006, func_000008E0, 0);
    scePaf_F47CA1C2(arg0, 0x10007, func_00000920, 0);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) | 0x20);
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00000A00);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00000A90);

void func_00000AD0(void) {
    scePaf_D0AD10FF();
    func_00003A18();
    scePaf_7C2C2742();
    if ((u32) (func_0000398C() - 2) >= 2U) {

    } else {
        scePaf_DF642973(3);
    }
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00000B24);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00000BBC);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00000C24);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00000C78);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00000CC0);

void func_00000D14(void) {
    scePaf_66907719();
    func_00003980(4);
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00000D38);

void func_00000F60(void) {
    scePaf_66907719();
    func_00003980(4);
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00000F84);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00001174);

s32 func_00001208(void) {
    func_00005354();
    func_00000408((s32) &D_000081E4, 2);
    return 5;
}

void func_00001238(void) {
    vsh_AA8B9556();
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00001254);

void func_000012BC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000049E8(arg0, arg1, arg2, arg3, D_00007E88 != 0);
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_000012E0);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00001304);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00001368);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00001418);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_0000156C);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00001670);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00001760);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00001840);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00001890);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_000018EC);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00001A1C);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00001B94);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00002178);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_000022A4);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_000023D8);

void func_000024AC(void) {
    func_00003980(1);
    sceVshCommonGui_80271F41();
    scePaf_6B1E90C7();
    scePaf_A0ED77C4(0, &func_000018EC, 0, -1, -1, &func_00001A1C);
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_000024FC);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00002614);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_000026F8);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00002764);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_0000278C);

void func_000027E8(void) {
    func_00005014();
    scePaf_66907719();
}

void func_0000280C(void) {
    func_000050D0();
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00002828);

s32 func_00002930(s32 arg0, s32 arg1, s32 arg2) {
    if (func_0000398C() == 2) {
        scePaf_CAF05F1D(D_000080A4, D_00007E48);
    }
    if (arg2 == 0) {
        if (arg0 != 0) {
            scePaf_1A45C860(arg0, func_0000280C);
        } else {
            scePaf_6844744A(arg1, func_0000280C);
        }
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_000029C8);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00002A28);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00002B08);

void func_00002BF4(void) {
    if (D_000081CD != 0) {
        func_00000660(0);
    }
    if (func_0000398C() >= 2) {
        func_00001418(1, D_00007E4C != 0, D_00007E50 != 0, (s32) D_000081CC);
    }
    func_000052C8(0);
    func_00005354();
    func_00001890(0);
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00002C80);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00002D4C);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00002D70);

void func_00002E44(void) {
    func_00002D70(1, 0xFFFF);
}

void func_00002E64(void) {
    func_00002D70(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00002E84);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00002EB4);

void func_00002F04(void) {
    func_0000312C();
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00002F20);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00002FEC);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00003080);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_0000312C);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00003158);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00003368);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00003444);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_0000357C);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_000035D0);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", module_start);

s32 module_stop(void) {
    func_000061BC();
    return 0;
}

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007200);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007210);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_0000721C);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007228);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007230);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007240);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007248);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007254);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007280);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000072AC);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000072D8);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007304);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007330);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_0000735C);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007388);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000073B4);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000073E0);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_0000740C);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007438);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007464);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_0000746C);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007470);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007474);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007478);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_0000747C);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007480);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007484);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007488);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_0000748C);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007490);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007494);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007498);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000074A0);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000074A8);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00003674);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00003710);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_000037A4);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_0000381C);

s32 func_00003910(void) {
    s32 temp_v0;
    s32 var_v0;

    D_00008B94 = 1;
    temp_v0 = sceHVUI_Module_F7038231();
    var_v0 = 0;
    if (temp_v0 != 0) {
        D_00008240 = 0;
        var_v0 = temp_v0;
    }
    return var_v0;
}

void func_00003950(void) {
    D_00008240 = 8;
    sceHVUI_Module_146CB797();
    D_00008240 = 0;
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00003980);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_0000398C);

void func_00003998(s32 arg0) {
    D_00008244 = arg0;
}

s32 func_000039A4(void) {
    return D_00008244;
}

void func_000039B0(s32 arg0) {
    D_00008B90 = arg0;
}

s32 func_000039BC(void) {
    return D_00008B90;
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_000039C8);

u8 func_000039D4(void) {
    return D_00007F51;
}

void func_000039E0(void) {
    if ((u32) (D_00008240 - 2) >= 4U) {

    } else {
        sceHVUI_Module_789FBBA8();
    }
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00003A18);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00003A8C);

void func_00003B28(void) {
    switch (D_00008240) {                           /* irregular */
    case 4:
        if (D_00007F51 != 0) {
        case 2:
            if (D_00008BB8 != 0) {
                sceHVUI_Module_3ADFED08(D_00008BB8, 0);
                D_00008BB8 = 0;
            }
        }
        break;
    }
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00003B90);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00003BDC);

void func_00003D3C(s8 arg0) {
    D_00008B94 = arg0;
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00003D48);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00003D74);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00003D9C);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00003E2C);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00004008);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_0000411C);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_000042C4);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_000043F8);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_000044CC);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00004554);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_000045D8);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00004688);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_000046E4);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00004788);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_000047F8);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_000048C8);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_000049A4);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_000049E8);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007558);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007568);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007574);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007580);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_0000758C);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_0000759C);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000075A8);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000075B0);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000075BC);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000075C8);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000075D4);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000075E0);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000075EC);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000075FC);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007608);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007618);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007708);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007718);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007730);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007740);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007750);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007760);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007770);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007780);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_0000778C);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_0000779C);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000077B0);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000077C0);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000077D0);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000077E0);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000077F0);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007800);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007810);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007820);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007830);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007840);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000078D0);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000078DC);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000078EC);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000078F8);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007904);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007910);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007924);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_0000793C);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007948);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007954);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_0000795C);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007968);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007970);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007978);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_0000798C);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000079A0);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000079A4);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000079AC);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000079B0);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000079B4);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000079B8);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000079BC);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000079C4);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000079C8);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000079CC);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000079D0);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000079D4);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000079D8);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000079DC);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000079E0);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000079E4);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000079E8);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000079EC);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000079F0);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000079F4);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_000079F8);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007A98);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007AB0);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007AC4);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007ADC);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007AF4);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007B08);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007B20);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007B38);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007B50);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007B68);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007B70);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007B7C);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007B84);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007B90);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007BA8);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007BC8);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007BE8);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007C04);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00004ABC);

void func_00004B54(void) {
    func_000049A4();
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00004B70);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00004CD4);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00004D58);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00004EDC);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00004F50);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00004FB4);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00005014);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_000050D0);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00005238);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_000052C8);

void func_00005324(void) {
    sceKernelWaitEventFlag(D_00008E64, 0x100U, 0, NULL, NULL);
}

void func_00005354(void) {
    sceHtmlViewerHelper_C92C71B7(0);
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00005370);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007CAC);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007CCC);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007CDC);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_000053D4);

void func_00005488(void) {
    func_000052C8(0);
    func_00005354();
    func_00005324();
    if (D_00008E64 != 0) {
        sceKernelDeleteEventFlag(D_00008E64);
        D_00008E64 = 0;
    }
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_000054DC);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", sceHtmlViewerHelper_C92C71B7);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", sceHtmlViewerHelper_232F5D22);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", sceHtmlViewerHelper_E26BCED1);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", sceHtmlViewerHelper_5F1A7733);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", sceHtmlViewerHelper_F27998C2);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", sceHtmlViewerHelper_47F988E6);

s32 sceHtmlViewerHelper_55732F91(s32 arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 == 0) {
        var_v0 = M2C_FIELD(D_00008C00, s32 *, 4);
    }
    return var_v0;
}

void sceHtmlViewerHelper_05E0C3D4(s32 arg0) {
    func_000039C8((arg0 & 0xFF) ^ 1);
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_000058D4);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00005948);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_000059C0);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00005B2C);

s32 func_00005BA0(M2C_UNK **arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = -1;
    if (((arg0 == NULL) | (arg1 == NULL)) == 0) {
        *arg1 = D_00009274;
        *arg0 = &D_000091F4;
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00005BDC);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00005C28);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00005C64);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00005CC8);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00005CDC);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00005D24);

s8 *func_00005D6C(s8 *arg0) {
    s8 *temp_s0;
    s8 *var_a0;

    var_a0 = arg0;
    temp_s0 = var_a0;
    if (*var_a0 != 0) {
        do {
            var_a0 += 1;
        } while (*var_a0 != 0);
    }
    func_00005D24(var_a0);
    return temp_s0;
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00005DB0);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00005E30);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00005ECC);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00005EF4);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00005F20);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00005FE0);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007D38);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007D54);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007D68);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", D_00007D74);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00006044);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00006164);
