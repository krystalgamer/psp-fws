#include "common.h"
#include "savedata_utility_decls.h"

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00006DD4);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00006FF4);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000070F0);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000727C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000072DC);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007438);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000074A0);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000075F4);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024940);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_000249A8);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024A10);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024A78);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024AE0);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024B48);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024BB0);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024C18);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024C80);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024CE8);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024D50);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024DB0);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024DB4);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024DC4);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00005F30);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007754);

void func_000078B8(struct Unk_func_00000B08_0 *arg0, s32 arg1) {
    if (func_00010828() >= 2) {

    } else if ((func_00011100(arg0->unk14) != 0) && (func_00000BCC(arg1, func_00000B08(arg0)), (func_00016CE0(arg0->unk10) != 0))) {
        func_00000CC8(arg0);
    }
}

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007938);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007A2C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007BF8);

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

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007CD8);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007D30);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007DA0);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007E8C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007FF8);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000081EC);

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

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008300);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008364);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008504);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000859C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008954);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008DC4);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008DFC);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008E94);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000090CC);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000093B8);

void func_00009448(struct Unk_func_00009448_0 *arg0, s32 arg1) {
    func_00013D18(arg0, arg1);
    arg0->unk0 = &D_00024EF8;
    arg0->unk18 = 1;
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
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024E28);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00004974);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009508);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009644);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000096C4);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000976C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009B90);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009C6C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000A25C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000A290);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00004E20);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000A2C4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000A720);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000A82C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000A940);
#endif

#if FW_VERSION < 282
void func_0000553C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_0000AD38();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000060E8);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024E5C);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024E64);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024E78);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024E84);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024E90);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024E98);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024E9C);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024EB0);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024EC8);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000AAC8);

void func_0000AC4C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_0000AD38();
}

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000AC6C);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000AD38);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000AD58);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000AD88);

#if FW_VERSION < 282
void func_000055DC(M2C_UNK **arg0) {
    *arg0 = &D_00024F10;
    func_00009DFC((s32) arg0);
}

void func_00005604(M2C_UNK **arg0) {
    *arg0 = &D_00024F10;
    func_00009DFC((s32) arg0);
}

void func_0000562C(M2C_UNK **arg0) {
    *arg0 = &D_00024F10;
    func_00009DFC((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00005664);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000063C0(void *arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x38);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x64) = arg1;
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_0001F6D0);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000573C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00005B6C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00005BC0);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00005C8C);

void func_00005CBC(M2C_UNK **arg0) {
    *arg0 = &D_0001F908;
    func_00015770((s32) arg0);
}

void func_00005CE4(M2C_UNK **arg0) {
    *arg0 = &D_0001F908;
    func_00015770((s32) arg0);
}

void func_00005D0C(M2C_UNK **arg0) {
    *arg0 = &D_0001F908;
    func_00015770((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00005D44);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00006AC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00005DAC);

void func_00005E74(void *arg0, s32 arg1) {
    func_00005DAC(M2C_FIELD(arg0, s32 *, 4), arg1);
}

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00005E90);
#endif

#if FW_VERSION < 282
void func_00006064(void *arg0, void *arg1) {
    if (arg1 != NULL) {
        M2C_FIELD(arg0, u8 *, 0xA30) = (u8) M2C_FIELD(arg1, u8 *, 0x500);
    }
    func_00015AAC();
}

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000608C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000611C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000618C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000062B0);

u32 func_000063D4(s32 arg0, void *arg1, u32 arg2) {
    s32 temp_v1;
    u32 var_a3;

    var_a3 = 0;
    if ((((arg0 == 0) | (arg1 == NULL)) == 0) && (M2C_FIELD(arg1, s32 *, 0) != 0)) {
        temp_v1 = M2C_FIELD(arg1, s32 *, 4);
        if (temp_v1 != 0) {
            var_a3 = (u32) ((temp_v1 + arg2) - 1) / arg2;
        }
    }
    return var_a3;
}

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000641C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000064D0);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00006650);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024F10);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00006C30);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000066BC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00006A98);
#endif

#if FW_VERSION == 100
s32 func_00006B04(void) {
    return 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00006B0C);
#else
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

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000AE40);

void func_0000AED4(struct Unk_func_0000AED4_0 *arg0, s32 arg1) {
    struct Unk_func_0000AED4_temp_v0 *temp_v0;

    temp_v0 = arg0->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk5C = arg1;
    }
}

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000AEE8);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000AF30);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000AF60);

#if FW_VERSION == 282
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

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000B018);

void func_0000B0CC(struct Unk_func_0000B0CC_0 *arg0, struct Unk_func_0000B0CC_1 *arg1) {
    if (arg1 != NULL) {
        arg0->unkA30 = (u8) arg1->unk500;
    }
    func_00015AAC();
}

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000B0F4);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000B218);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024EF8);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024F10);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000B29C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000B35C);

void func_0000B3C4(struct Unk_func_0000B3C4_0 *arg0, s32 arg1, s32 arg2) {
    func_00015C1C(arg0, arg1, arg2);
    arg0->unk0 = &D_00024FC8;
    arg0->unk28 = 0;
}

void func_0000B3F8(struct Unk_func_0000B3C4_0 *arg0, s32 arg1, s32 arg2) {
    func_00015C1C(arg0, arg1, arg2);
    arg0->unk0 = &D_00024FC8;
    arg0->unk28 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000B42C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000B490);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000B4F4);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00006C9C);
#else
void func_0000B560(struct Unk_func_0000B560_0 *arg0) {
    arg0->unk28 = 0;
    func_00013440();
}
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000B580);

#if FW_VERSION < 282
void func_00006DFC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0000ECD0(arg0, arg1, arg2, arg3);
}

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00006E18);
#else
void func_0000B644(void) {
    func_00015FD0();
}

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000B660);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000B718);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000B8AC);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007278);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000734C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007420);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00006FE8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000B920);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000B9F8);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000BAD0);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000BBB0);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007638);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007320);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_0001F908);
#else
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000BCEC);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024F40);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024F48);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024F58);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024F60);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024F74);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000BE34);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000BE8C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000BEC0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000075A0);
#else
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000BF1C);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000C0F8);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007848);
#else
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000C268);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000C370);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007A34);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007B20);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_0001F920);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_0001F924);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00021A88);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_0001F928);
#else
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000C430);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000C640);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000C7B0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007E0C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007ED4);
#else
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000C930);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000CA08);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000CBFC);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000084B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000819C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00008210(void *arg0) {
    s32 temp_v0;
    void **temp_a0;

    temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), void ***, 0x1C);
    temp_v0 = scePaf_DAB59652(M2C_FIELD(*temp_a0, s32 (**)(void **), 0x24)(temp_a0), &D_00021ABC);
    if (temp_v0 == 0) {

    } else {
        func_00005168(temp_v0, (s32) M2C_FIELD(arg0, void **, 0x38), 0);
        func_0000827C(temp_v0, 0, 0, (s32) arg0);
    }
}
#endif

#if FW_VERSION == 100
void func_00008210(void *arg0) {
    s32 temp_v0;
    void **temp_a0;

    temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), void ***, 0x1C);
    temp_v0 = scePaf_DAB59652(M2C_FIELD(*temp_a0, s32 (**)(void **), 0x24)(temp_a0), &D_0001F958);
    if (temp_v0 == 0) {

    } else {
        func_0000827C(temp_v0, 0, 0, (s32) arg0);
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000827C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008724);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000087F0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000CD18);

void func_0000CDAC(struct Unk_func_0000CDAC_0 *arg0) {
    s32 temp_v0;

    temp_v0 = scePaf_DAB59652(arg0->unk18->unk4, &D_00024F48);
    if (temp_v0 == 0) {

    } else {
        func_0000CD18((s32) arg0, temp_v0);
    }
}

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000CDFC);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000CF6C);

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

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000D040);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000D0B8);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000D108);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000D1C8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000849C);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000D1E8);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000D268);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000D2E8);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000D3C4);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008644);

void func_00008674(M2C_UNK **arg0) {
    *arg0 = &D_00024FE8;
    func_00013644((s32) arg0);
}

void func_0000869C(M2C_UNK **arg0) {
    *arg0 = &D_00024FE8;
    func_00013644((s32) arg0);
}

void func_000086C4(M2C_UNK **arg0) {
    *arg0 = &D_00024FE8;
    func_00013644((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008B30);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008BD4);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008D7C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008F50);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009074);

u32 func_00009198(s32 arg0, void *arg1, u32 arg2) {
    s32 temp_v1;
    u32 var_a3;

    var_a3 = 0;
    if ((((arg0 == 0) | (arg1 == NULL)) == 0) && (M2C_FIELD(arg1, s32 *, 0) != 0)) {
        temp_v1 = M2C_FIELD(arg1, s32 *, 4);
        if (temp_v1 != 0) {
            var_a3 = (u32) ((temp_v1 + arg2) - 1) / arg2;
        }
    }
    return var_a3;
}

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000091E0);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009294);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009364);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00021ABC);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00021AD8);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024F40);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024FE8);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000093D0);

s32 func_00009910(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009918);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009C04);

void func_0000A108(s32 arg0) {
    D_000225C8 = arg0;
}

s32 func_0000A114(void) {
    return D_000225C8;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000086FC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000088CC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000A184);
#endif

#if FW_VERSION == 282
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

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000D47C);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000D570);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010FDC);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010FEC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000A230);

s32 func_0000A260(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x20);
}

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000A268);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008974);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000A3B8);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000A41C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000A448);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000A46C_v150);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008AA0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008BE8);

void func_00008D74(M2C_UNK **arg0) {
    *arg0 = &D_000250E0;
    func_00008E24((s32) arg0);
}

void func_00008D9C(M2C_UNK **arg0) {
    *arg0 = &D_000250E0;
    func_00008E40((s32) arg0);
}

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0001134C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00011374);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008E24);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008E40);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008E9C);

s32 func_00008F10(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00008F18(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_v1;

    var_v1 = 0;
    if ((arg1 >= 0) && (M2C_FIELD(arg0, s32 *, 8) >= arg1)) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x10);
        if (temp_a0 != 0) {
            var_v1 = temp_a0 + (arg1 * 0x34) + 0x20;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 100
s32 func_00008F18(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_v1;

    var_v1 = 0;
    if ((arg1 >= 0) && (M2C_FIELD(arg0, s32 *, 8) >= arg1)) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0xC);
        if (temp_a0 != 0) {
            var_v1 = temp_a0 + (arg1 * 0x34) + 0x20;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008F58);
#endif

#if FW_VERSION == 100
s32 func_00008FEC(s32 arg0) {
    func_000090CC(arg0, 0, -1);
    return 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009010);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000090CC);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000912C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009188);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000091D4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000AB64);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000AC58);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000AE40);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009288);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_0000936C(void *arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_a2;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
    var_a2 = 0;
    if ((temp_v1 != 0) && (M2C_FIELD(arg0, s32 *, 8) >= arg1)) {
        var_a2 = M2C_FIELD(((arg1 * 0x34) + temp_v1), s32 *, 0x30);
    }
    return var_a2;
}
#endif

#if FW_VERSION == 100
s32 func_0000936C(void *arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_a2;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0xC);
    var_a2 = 0;
    if ((temp_v1 != 0) && (M2C_FIELD(arg0, s32 *, 8) >= arg1)) {
        var_a2 = M2C_FIELD(((arg1 * 0x34) + temp_v1), s32 *, 0x30);
    }
    return var_a2;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000093A4);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000966C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009688);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000098BC);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000098EC);

s32 func_0000998C(s32 arg0) {
    return func_000138D0(arg0) != 0;
}

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000099AC);

s32 func_000099E8(s32 arg0) {
    return func_00013A48(arg0) != 0;
}

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009A08);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009A44);

s32 func_00009AEC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return __builtin_allegrex_min(func_00013B70(arg0, arg1, arg2, arg3), 0);
}

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009B10);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00015534);

void func_00009C94(M2C_UNK **arg0) {
    *arg0 = &D_00025100;
    scePaf_4E67BB08();
}

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000119A0);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009D5C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009DFC);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009E50);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009EA4);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009EFC);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009F14);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_0001F958);
#endif

#if FW_VERSION == 282
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

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000D5D4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024FA8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024F40);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024FC8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024FE8);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024FF8);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000D788);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000D828);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000D8B0);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000D954);

s32 func_0000DBE0(struct Unk_func_0000DBE0_0 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (func_00010828() >= 2) {
        var_v1 = 0x80103002;
        if (arg0 != NULL) {
            var_v1 = 0;
            if (arg0->unk64 != 0) {
                var_v1 = func_0000D828(&arg0->unk64);
            }
        }
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000DC40);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000DCBC);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000DD10);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000DD54);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000DD98);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000DDDC);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000DE20);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000DEB0);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000DFB8);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000E05C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000E120);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000E250);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000E370);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000E3F4);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000E440);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000E4AC);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000E60C);

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

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000E770);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000E86C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000E8A0);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000EE64);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000F0CC);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000F244);

u32 func_0000F420(struct Unk_func_0000F420_0 *arg0, u32 arg1) {
    u32 var_v1;

    var_v1 = 0;
    if ((arg0 != NULL) && (arg0->unk0 != 0) && (arg0->unk4 != 0)) {
        var_v1 = (u32) ((arg0->unk8 + arg1) - 1) / arg1;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000F464);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000F568);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000F6A4);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000F6FC);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000F7EC);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000FAF4);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000FB7C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000FD6C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000FF90);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_0002507C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000FFEC);

void func_000102E0(void) {
    func_0000FAF4();
}

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000102FC);

s32 func_00010444(s32 arg0) {
    return (arg0 & 1) + __builtin_allegrex_ext(arg0, 1, 1) + __builtin_allegrex_ext(arg0, 2, 1) + __builtin_allegrex_ext(arg0, 3, 1);
}

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010464);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010710);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010790);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010828);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010834);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010910);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010A18);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010A50);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010A8C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010BCC);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010C68);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010CAC);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010E7C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010EF8);
#endif
