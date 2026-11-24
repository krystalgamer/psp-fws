#include "common.h"
#include "savedata_utility_decls.h"

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00006DD4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00006FF4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_000070F0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000727C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_000072DC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00007438);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_000074A0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_000075F4);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024940);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_000249A8);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024A10);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024A78);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024AE0);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024B48);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024BB0);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024C18);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024C80);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024CE8);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024D50);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024DB0);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024DB4);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024DC4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00007754);

void func_000078B8(struct Unk_func_00000B08_0 *arg0, s32 arg1) {
    if (func_00010828() >= 2) {

    } else if ((func_00011100(arg0->unk14) != 0) && (func_00000BCC(arg1, func_00000B08(arg0)), (func_00016CE0(arg0->unk10) != 0))) {
        func_00000CC8(arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00007938);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00007A2C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00007BF8);

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

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00007CD8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00007D30);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00007DA0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00007E8C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00007FF8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_000081EC);

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

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00008300);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00008364);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00008504);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000859C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00008954);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00008DC4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00008DFC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00008E94);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_000090CC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_000093B8);

void func_00009448(s32 arg0, s32 arg1) {
    func_00013D18(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00024EF8;
    M2C_FIELD(arg0, s8 *, 0x18) = 1;
}

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

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024E28);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00009508);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00009644);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_000096C4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000976C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00009B90);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00009C6C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000A25C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000A290);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000A2C4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000A720);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000A82C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000A940);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024E5C);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024E64);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024E78);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024E84);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024E90);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024E98);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024E9C);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024EB0);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024EC8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000AAC8);

void func_0000AC4C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_0000AD38();
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000AC6C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000AD38);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000AD58);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000AD88);

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

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000AE40);

void func_0000AED4(struct Unk_func_0000AED4_0 *arg0, s32 arg1) {
    struct Unk_func_0000AED4_temp_v0 *temp_v0;

    temp_v0 = arg0->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk5C = arg1;
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000AEE8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000AF30);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000AF60);

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

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000B018);

void func_0000B0CC(struct Unk_func_0000B0CC_0 *arg0, struct Unk_func_0000B0CC_1 *arg1) {
    if (arg1 != NULL) {
        arg0->unkA30 = (u8) arg1->unk500;
    }
    func_00015AAC();
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000B0F4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000B218);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024EF8);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024F10);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000B29C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000B35C);

void func_0000B3C4(s32 arg0, s32 arg1, s32 arg2) {
    func_00015C1C(arg0, arg1, arg2);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00024FC8;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
}

void func_0000B3F8(s32 arg0, s32 arg1, s32 arg2) {
    func_00015C1C(arg0, arg1, arg2);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00024FC8;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000B42C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000B490);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000B4F4);

void func_0000B560(struct Unk_func_0000B560_0 *arg0) {
    arg0->unk28 = 0;
    func_00013440();
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000B580);

void func_0000B644(void) {
    func_00015FD0();
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000B660);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000B718);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000B8AC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000B920);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000B9F8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000BAD0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000BBB0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000BCEC);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024F40);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024F48);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024F58);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024F60);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024F74);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000BE34);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000BE8C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000BEC0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000BF1C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000C0F8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000C268);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000C370);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000C430);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000C640);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000C7B0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000C930);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000CA08);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000CBFC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000CD18);

void func_0000CDAC(struct Unk_func_0000CDAC_0 *arg0) {
    s32 temp_v0;

    temp_v0 = scePaf_DAB59652(arg0->unk18->unk4, &D_00024F48);
    if (temp_v0 == 0) {

    } else {
        func_0000CD18((s32) arg0, temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000CDFC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000CF6C);

s32 func_0000CFD4(struct Unk_func_0000CFD4_0 *arg0) {
    s32 var_a2;

    var_a2 = 1;
    if (arg0->unk20 != NULL) {
        func_0000CF6C((s32) arg0);
        if ((func_00013558(arg0->unk20) != 0) || (var_a2 = 0, (arg0->unk20->unk8 == 1))) {
            var_a2 = func_00016F4C((s32) arg0) != 0;
        }
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000D040);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000D0B8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000D108);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000D1C8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000D1E8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000D268);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000D2E8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000D3C4);

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

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000D47C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000D570);

s32 func_0000D57C(void) {
    return D_00025B24;
}

s32 func_0000D588(struct Unk_func_0000D588_0 *arg0) {
    s32 var_v1;

    var_v1 = 0x80103002;
    if (arg0 != NULL) {
        var_v1 = 0;
        if ((u32) arg0->unk38 >= 2U) {
            func_0000D570(1);
            var_v1 = 0x80103008;
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000D5D4);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024FA8);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024FC8);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024FE8);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_00024FF8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000D788);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000D828);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000D8B0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000D954);

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

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000DC40);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000DCBC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000DD10);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000DD54);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000DD98);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000DDDC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000DE20);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000DEB0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000DFB8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000E05C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000E120);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000E250);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000E370);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000E3F4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000E440);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000E4AC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000E60C);

void func_0000E6EC(s32 arg0) {
    func_0000E60C(arg0, 6);
}

void func_0000E708(s32 arg0) {
    func_0000E60C(arg0, 8);
}

s32 func_0000E724(struct Unk_func_0000E724_0 *arg0) {
    s32 var_v1;

    var_v1 = 0x80103002;
    if (arg0 != NULL) {
        var_v1 = 0;
        if ((u32) arg0->unk5EC >= 4U) {
            func_0000D570(0x2F);
            var_v1 = 0x80103008;
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000E770);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000E86C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000E8A0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000EE64);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000F0CC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000F244);

u32 func_0000F420(struct Unk_func_0000F420_0 *arg0, u32 arg1) {
    u32 var_v1;

    var_v1 = 0;
    if ((arg0 != NULL) && (arg0->unk0 != 0) && (arg0->unk4 != 0)) {
        var_v1 = (u32) ((arg0->unk8 + arg1) - 1) / arg1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000F464);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000F568);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000F6A4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000F6FC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000F7EC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000FAF4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000FB7C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000FD6C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000FF90);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", D_0002507C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_0000FFEC);

void func_000102E0(void) {
    func_0000FAF4();
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_000102FC);

s32 func_00010444(s32 arg0) {
    return (arg0 & 1) + __builtin_allegrex_ext(arg0, 1, 1) + __builtin_allegrex_ext(arg0, 2, 1) + __builtin_allegrex_ext(arg0, 3, 1);
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00010464);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00010710);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00010790);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00010828);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00010834);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00010910);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00010A18);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00010A50);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00010A8C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00010BCC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00010C68);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00010CAC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00010E7C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_006DD4", func_00010EF8);

