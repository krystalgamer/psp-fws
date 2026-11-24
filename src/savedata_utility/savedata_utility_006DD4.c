#include "common.h"
#include "savedata_utility_decls.h"

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00006DD4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00006FF4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000070F0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000727C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000072DC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007438);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000074A0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000075F4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024940);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_000249A8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024A10);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024A78);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024AE0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024B48);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024BB0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024C18);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024C80);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024CE8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024D50);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024DB0);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024DB4);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024DC4);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007754);
#endif

#if FW_VERSION != 100
void func_000078B8(struct Unk_func_00000B08_0 *arg0, s32 arg1) {
    if (func_00010828() >= 2) {

    } else if ((func_00011100(arg0->unk14) != 0) && (func_00000BCC(arg1, func_00000B08(arg0)), (func_00016CE0(arg0->unk10) != 0))) {
        func_00000CC8(arg0);
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007938);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007A2C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007BF8);
#endif

#if FW_VERSION != 100
void func_00007C50(M2C_UNK **arg0) {
    *arg0 = &D_00024E28;
    func_00011324((s32) arg0);
}
#endif

#if FW_VERSION != 100
void func_00007C78(M2C_UNK **arg0) {
    *arg0 = &D_00024E28;
    func_00011324((s32) arg0);
}
#endif

#if FW_VERSION != 100
void func_00007CA0(M2C_UNK **arg0) {
    *arg0 = &D_00024E28;
    func_00011324((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007CD8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007D30);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007DA0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007E8C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007FF8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000081EC);
#endif

#if FW_VERSION != 100
s32 func_000082A4(s32 arg0) {
    func_000113C4(arg0);
    return 0;
}
#endif

#if FW_VERSION != 100
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
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008300);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008364);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008504);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000859C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008954);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008DC4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008DFC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008E94);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000090CC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000093B8);
#endif

#if FW_VERSION != 100
void func_00009448(struct Unk_func_00009448_0 *arg0, s32 arg1) {
    func_00013D18(arg0, arg1);
    arg0->unk0 = &D_00024EF8;
    arg0->unk18 = 1;
}
#endif

#if FW_VERSION != 100
void func_00009480(M2C_UNK **arg0) {
    *arg0 = &D_00024EF8;
    func_00013D70();
}
#endif

#if FW_VERSION != 100
void func_000094A8(M2C_UNK **arg0) {
    *arg0 = &D_00024EF8;
    func_00013D70();
}
#endif

#if FW_VERSION != 100
void func_000094D0(M2C_UNK **arg0) {
    *arg0 = &D_00024EF8;
    func_00013D70();
    scePaf_4E67BB08(arg0);
}
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024E28);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00004974);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009508);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009644);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000096C4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000976C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009B90);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009C6C);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000A25C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000A290);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00004E20);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000A2C4);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000A720);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000A82C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000A940);

#if FW_VERSION == 100
void func_0000553C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_0000AD38();
}
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024E5C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024E64);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024E78);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024E84);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024E90);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024E98);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024E9C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024EB0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024EC8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000AAC8);
#endif

#if FW_VERSION != 100
void func_0000AC4C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_0000AD38();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000AC6C);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000AD38);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000AD58);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000AD88);

#if FW_VERSION == 100
void func_000055DC(M2C_UNK **arg0) {
    *arg0 = &D_00024F10;
    func_00009DFC((s32) arg0);
}
#endif

#if FW_VERSION == 100
void func_00005604(M2C_UNK **arg0) {
    *arg0 = &D_00024F10;
    func_00009DFC((s32) arg0);
}
#endif

#if FW_VERSION == 100
void func_0000562C(M2C_UNK **arg0) {
    *arg0 = &D_00024F10;
    func_00009DFC((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00005664);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_0001F6D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000573C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00005B6C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00005BC0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00005C8C);
#endif

#if FW_VERSION == 100
void func_00005CBC(M2C_UNK **arg0) {
    *arg0 = &D_0001F908;
    func_00015770((s32) arg0);
}
#endif

#if FW_VERSION == 100
void func_00005CE4(M2C_UNK **arg0) {
    *arg0 = &D_0001F908;
    func_00015770((s32) arg0);
}
#endif

#if FW_VERSION == 100
void func_00005D0C(M2C_UNK **arg0) {
    *arg0 = &D_0001F908;
    func_00015770((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00005D44);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00005DAC);
#endif

#if FW_VERSION == 100
void func_00005E74(void *arg0, s32 arg1) {
    func_00005DAC(M2C_FIELD(arg0, s32 *, 4), arg1);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00005E90);
#endif

#if FW_VERSION == 100
void func_00006064(void *arg0, void *arg1) {
    if (arg1 != NULL) {
        M2C_FIELD(arg0, u8 *, 0xA30) = (u8) M2C_FIELD(arg1, u8 *, 0x500);
    }
    func_00015AAC();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000608C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000611C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000618C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000062B0);
#endif

#if FW_VERSION == 100
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
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000641C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000064D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00006650);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024F10);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000066BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00006A98);
#endif

#if FW_VERSION == 100
s32 func_00006B04(void) {
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00006B0C);
#endif

#if FW_VERSION != 100
void func_0000ADB8(M2C_UNK **arg0) {
    *arg0 = &D_00024F10;
    func_00011A98((s32) arg0);
}
#endif

#if FW_VERSION != 100
void func_0000ADE0(M2C_UNK **arg0) {
    *arg0 = &D_00024F10;
    func_00011A98((s32) arg0);
}
#endif

#if FW_VERSION != 100
void func_0000AE08(M2C_UNK **arg0) {
    *arg0 = &D_00024F10;
    func_00011A98((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000AE40);
#endif

#if FW_VERSION != 100
void func_0000AED4(struct Unk_func_0000AED4_0 *arg0, s32 arg1) {
    struct Unk_func_0000AED4_temp_v0 *temp_v0;

    temp_v0 = arg0->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk5C = arg1;
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000AEE8);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000AF30);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000AF60);

#if FW_VERSION != 100
void func_0000AF90(M2C_UNK **arg0) {
    *arg0 = &D_00024F40;
    func_00015770((s32) arg0);
}
#endif

#if FW_VERSION != 100
void func_0000AFB8(M2C_UNK **arg0) {
    *arg0 = &D_00024F40;
    func_00015770((s32) arg0);
}
#endif

#if FW_VERSION != 100
void func_0000AFE0(M2C_UNK **arg0) {
    *arg0 = &D_00024F40;
    func_00015770((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000B018);
#endif

#if FW_VERSION != 100
void func_0000B0CC(struct Unk_func_0000B0CC_0 *arg0, struct Unk_func_0000B0CC_1 *arg1) {
    if (arg1 != NULL) {
        arg0->unkA30 = (u8) arg1->unk500;
    }
    func_00015AAC();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000B0F4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000B218);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024EF8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024F10);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000B29C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000B35C);
#endif

#if FW_VERSION != 100
void func_0000B3C4(struct Unk_func_0000B3C4_0 *arg0, s32 arg1, s32 arg2) {
    func_00015C1C(arg0, arg1, arg2);
    arg0->unk0 = &D_00024FC8;
    arg0->unk28 = 0;
}
#endif

#if FW_VERSION != 100
void func_0000B3F8(struct Unk_func_0000B3C4_0 *arg0, s32 arg1, s32 arg2) {
    func_00015C1C(arg0, arg1, arg2);
    arg0->unk0 = &D_00024FC8;
    arg0->unk28 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000B42C);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000B490);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000B4F4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00006C9C);
#endif

#if FW_VERSION != 100
void func_0000B560(struct Unk_func_0000B560_0 *arg0) {
    arg0->unk28 = 0;
    func_00013440();
}
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000B580);

#if FW_VERSION == 100
void func_00006DFC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0000ECD0(arg0, arg1, arg2, arg3);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00006E18);
#endif

#if FW_VERSION != 100
void func_0000B644(void) {
    func_00015FD0();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000B660);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000B718);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000B8AC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00006FE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000B9F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000BAD0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000B920);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000B9F8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000BAD0);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000BBB0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007320);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_0001F908);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000BCEC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024F40);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024F48);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024F58);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024F60);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024F74);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000BE34);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000BE8C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000BEC0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000075A0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000BEC0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000BF1C);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000C0F8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007848);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000C268);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000C370);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007A34);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007B20);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_0001F920);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_0001F924);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_0001F928);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000C430);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000C640);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000C7B0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007E0C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00007ED4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000C930);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000CA08);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000CBFC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000819C);
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

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000827C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000CD18);
#endif

#if FW_VERSION != 100
void func_0000CDAC(struct Unk_func_0000CDAC_0 *arg0) {
    s32 temp_v0;

    temp_v0 = scePaf_DAB59652(arg0->unk18->unk4, &D_00024F48);
    if (temp_v0 == 0) {

    } else {
        func_0000CD18((s32) arg0, temp_v0);
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000CDFC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000CF6C);
#endif

#if FW_VERSION != 100
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
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000D040);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000D0B8);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000D108);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000D1C8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000849C);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000D1E8);

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000D268);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000D2E8);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000D3C4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008644);
#endif

#if FW_VERSION == 100
void func_00008674(M2C_UNK **arg0) {
    *arg0 = &D_00024FE8;
    func_00013644((s32) arg0);
}
#endif

#if FW_VERSION == 100
void func_0000869C(M2C_UNK **arg0) {
    *arg0 = &D_00024FE8;
    func_00013644((s32) arg0);
}
#endif

#if FW_VERSION == 100
void func_000086C4(M2C_UNK **arg0) {
    *arg0 = &D_00024FE8;
    func_00013644((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000086FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000088CC);
#endif

#if FW_VERSION != 100
void func_0000D3F4(M2C_UNK **arg0) {
    *arg0 = &D_00024FE8;
    func_00013644((s32) arg0);
}
#endif

#if FW_VERSION != 100
void func_0000D41C(M2C_UNK **arg0) {
    *arg0 = &D_00024FE8;
    func_00013644((s32) arg0);
}
#endif

#if FW_VERSION != 100
void func_0000D444(M2C_UNK **arg0) {
    *arg0 = &D_00024FE8;
    func_00013644((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000D47C);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000D570);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010FDC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010FEC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008974);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008AA0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008BE8);
#endif

#if FW_VERSION == 100
void func_00008D74(M2C_UNK **arg0) {
    *arg0 = &D_000250E0;
    func_00008E24((s32) arg0);
}
#endif

#if FW_VERSION == 100
void func_00008D9C(M2C_UNK **arg0) {
    *arg0 = &D_000250E0;
    func_00008E40((s32) arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0001134C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00011374);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008E24);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008E40);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008E9C);
#endif

#if FW_VERSION == 100
s32 func_00008F10(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
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

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00008F58);
#endif

#if FW_VERSION == 100
s32 func_00008FEC(s32 arg0) {
    func_000090CC(arg0, 0, -1);
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009010);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000090CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000912C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009188);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000091D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009288);
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

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000093A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000966C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009688);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000098BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000098EC);
#endif

#if FW_VERSION == 100
s32 func_0000998C(s32 arg0) {
    return func_000138D0(arg0) != 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000099AC);
#endif

#if FW_VERSION == 100
s32 func_000099E8(s32 arg0) {
    return func_00013A48(arg0) != 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009A08);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009A44);
#endif

#if FW_VERSION == 100
s32 func_00009AEC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return __builtin_allegrex_min(func_00013B70(arg0, arg1, arg2, arg3), 0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009B10);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00015534);
#endif

#if FW_VERSION == 100
void func_00009C94(M2C_UNK **arg0) {
    *arg0 = &D_00025100;
    scePaf_4E67BB08();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000119A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009D5C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009DFC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009E50);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009EA4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009EFC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00009F14);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_0001F958);
#endif

#if FW_VERSION != 100
s32 func_0000D57C(void) {
    return D_00025B24;
}
#endif

#if FW_VERSION != 100
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
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000D5D4);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024FA8);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024F40);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024FC8);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024FE8);

INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_00024FF8);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000D788);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000D828);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000D8B0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000D954);
#endif

#if FW_VERSION != 100
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
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000DC40);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000DCBC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000DD10);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000DD54);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000DD98);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000DDDC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000DE20);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000DEB0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000DFB8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000E05C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000E120);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000E250);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000E370);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000E3F4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000E440);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000E4AC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000E60C);
#endif

#if FW_VERSION != 100
void func_0000E6EC(s32 arg0) {
    func_0000E60C(arg0, 6);
}
#endif

#if FW_VERSION != 100
void func_0000E708(s32 arg0) {
    func_0000E60C(arg0, 8);
}
#endif

#if FW_VERSION != 100
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
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000E770);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000E86C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000E8A0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000EE64);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000F0CC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000F244);
#endif

#if FW_VERSION != 100
u32 func_0000F420(struct Unk_func_0000F420_0 *arg0, u32 arg1) {
    u32 var_v1;

    var_v1 = 0;
    if ((arg0 != NULL) && (arg0->unk0 != 0) && (arg0->unk4 != 0)) {
        var_v1 = (u32) ((arg0->unk8 + arg1) - 1) / arg1;
    }
    return var_v1;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000F464);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000F568);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000F6A4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000F6FC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000F7EC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000FAF4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000FB7C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000FD6C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000FF90);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_006DD4", D_0002507C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_0000FFEC);
#endif

#if FW_VERSION != 100
void func_000102E0(void) {
    func_0000FAF4();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_000102FC);
#endif

#if FW_VERSION != 100
s32 func_00010444(s32 arg0) {
    return (arg0 & 1) + __builtin_allegrex_ext(arg0, 1, 1) + __builtin_allegrex_ext(arg0, 2, 1) + __builtin_allegrex_ext(arg0, 3, 1);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010464);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010710);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010790);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010828);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010834);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010910);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010A18);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010A50);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010A8C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010BCC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010C68);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010CAC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010E7C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_006DD4", func_00010EF8);
#endif

