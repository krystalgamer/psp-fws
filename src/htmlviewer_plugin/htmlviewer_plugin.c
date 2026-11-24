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

void func_00000274(struct Unk_func_00000274_0 *arg0) {
    s32 temp_s1;

    temp_s1 = (u8 *)arg0 + 0x14;
    arg0->unk0 = &D_00007200;
    sceKernelWaitSema(arg0->unk10, 1, NULL);
    arg0->unkC = 1;
    scePaf_CA5EF446(temp_s1);
    sceKernelSignalSema(arg0->unk10, 1);
    scePaf_5775283A(arg0);
    scePaf_1B043852(temp_s1);
    sceKernelDeleteSema(arg0->unk10);
    scePaf_E977B833(arg0);
}

void func_000002F8(struct Unk_func_000002F8_0 *arg0) {
    s32 temp_s1;

    temp_s1 = (u8 *)arg0 + 0x14;
    arg0->unk0 = &D_00007200;
    sceKernelWaitSema(arg0->unk10, 1, NULL);
    arg0->unkC = 1;
    scePaf_CA5EF446(temp_s1);
    sceKernelSignalSema(arg0->unk10, 1);
    scePaf_5775283A(arg0);
    scePaf_1B043852(temp_s1);
    sceKernelDeleteSema(arg0->unk10);
    scePaf_E977B833(arg0);
}

void func_0000037C(struct Unk_func_0000037C_0 *arg0) {
    s32 temp_s1;

    temp_s1 = (u8 *)arg0 + 0x14;
    arg0->unk0 = &D_00007200;
    sceKernelWaitSema(arg0->unk10, 1, NULL);
    arg0->unkC = 1;
    scePaf_CA5EF446(temp_s1);
    sceKernelSignalSema(arg0->unk10, 1);
    scePaf_5775283A(arg0);
    scePaf_1B043852(temp_s1);
    sceKernelDeleteSema(arg0->unk10);
    scePaf_E977B833(arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00000408);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin", func_00000470);

s32 func_0000055C(struct Unk_func_0000055C_0 *arg0) {
    s32 var_v1;

    var_v1 = arg0->unk8;
    if (!(var_v1 & 1)) {
        if (var_v1 & 2) {
            func_0000156C(3);
            var_v1 = arg0->unk8;
        }
    } else {
        func_00001368();
        var_v1 = arg0->unk8;
    }
    if (!(var_v1 & 4)) {
        arg0->unk8 = 0;
    } else {
        if (func_0000398C() >= 2) {
            func_00003D48(0);
            func_00001760();
            func_000037A4(2);
            func_00000140();
        }
        sceVshBridge_C58090DA(2);
        arg0->unk8 = 0;
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
    D_000081DC.unk0 = arg0;
    D_000081DC.unk4 = arg1;
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

void func_00000940(struct Unk_func_00000940_0 *arg0) {
    scePaf_FD9DE7B9(0x40);
    scePaf_F47CA1C2(arg0, 0x80006, func_00000AD0, 0);
    scePaf_F47CA1C2(arg0, 0x10001, func_00000888, 0);
    scePaf_F47CA1C2(arg0, 0x10002, func_000008B4, 0);
    scePaf_F47CA1C2(arg0, 0x10006, func_000008E0, 0);
    scePaf_F47CA1C2(arg0, 0x10007, func_00000920, 0);
    arg0->unk14 = (s32) (arg0->unk14 | 0x20);
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

