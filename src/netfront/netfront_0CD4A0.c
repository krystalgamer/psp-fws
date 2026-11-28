/* compiler[282,303,311,340]: 1.9.2 */
/* cflags[282,303,311,340]: -Os */
/* compiler[271]: 1.9.2 */
/* cflags[271]: -Os -mext */
/* cflags: -Os */
#include "common.h"
#include "netfront_decls.h"

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CD4A0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CD568);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CD5E4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CD980);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CD9B4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CD9EC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CDCD4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CDD3C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CDF30);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CDFB4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CE044);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CE0C8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CE130);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CE198);

s32 func_000CE200(struct Unk_func_000CE200_0 *arg0, s32 *arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceHVNetfront_Module_1DF9F3CD(arg0, arg0->unk18);
    var_v1 = 0;
    if (temp_v0 != 0) {
        var_v1 = func_0008952C(arg0, temp_v0, arg1);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CE258);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CE30C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CE3A4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CE4C0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CE84C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CE900);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CE9BC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CEA60);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CEAF0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CEB2C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CEBB8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CEC50);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CED80);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CEE74);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CEEE4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CF4D4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CF614);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CF710);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CF7A4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CF834);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CF9F4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000CFA4C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D0344);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D03E0);

s32 func_000D0500(s32 arg0) {
    func_000CEE74(arg0, 1);
    return 0;
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D0520);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D05E8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D0650);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D06E8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D0764);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D0814);

s32 func_000D08C4(void) {
    func_000CEA60();
    return 1;
}

s32 func_000D08E4(void) {
    func_000CEBB8();
    return 1;
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D0904);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D0984);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D0BCC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D0EE8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D1030);

s32 func_000D1070(void *arg0) {
    return M2C_FIELD(M2C_FIELD(((*M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), s32 **, 0x20) * 0xC) + arg0), void **, 0xA8), s32 *, 8);
}

s32 func_000D1098(struct Unk_func_000D1098_0 *arg0) {
    return arg0->unk4D0->unk20 + 0x1C;
}

s32 func_000D10A8(void *arg0) {
    return M2C_FIELD(M2C_FIELD(((*M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), s32 **, 0x20) * 0xC) + arg0), void **, 0xA8), s32 *, 0xC);
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D10D0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D11D0);

s32 func_000D122C(struct Unk_func_000202C8_0 *arg0) {
    return *arg0->unk4D0->unk20;
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D123C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D1290);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D12F4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D1348);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D13DC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D1430);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D1484);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D16F0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D185C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D1B30);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D1BD0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D1D84);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D1E24);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D1EC0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D1F60);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D1FFC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D2090);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D20F8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D21A4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D223C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D22A4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D2350);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D254C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D25F0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D26EC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D2760);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D27B8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D2834);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D288C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D28F0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D295C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D2A2C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D2B70);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D2CA0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D2D3C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D2DEC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D2E3C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D2E90);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D2F1C);

s32 func_000D2F70(void) {
    return 1;
}

s32 func_000D2F78(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D2F80);

s32 func_000D2FA0(void) {
    return 1;
}

s32 func_000D2FA8(void) {
    return 1;
}

s32 func_000D2FB0(void) {
    return 1;
}

s32 func_000D2FB8(void) {
    return 1;
}

s32 func_000D2FC0(void) {
    return 1;
}

s32 func_000D2FC8(s32 arg0, M2C_UNK arg1) {
    func_000CC464();
    func_000CCD18(arg0, arg1);
    return 1;
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3008);

s32 func_000D3088(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_v1;

    var_v1 = 1;
    if (func_000CCD10() == 0) {
        var_v1 = func_000CCB28(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 func_000D30E8(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_v1;

    var_v1 = 1;
    if (func_000CCD08() == 0) {
        var_v1 = func_000CCAE0(arg0, arg1, arg2);
    }
    return var_v1;
}

void func_000D3148(void) {
    func_000CCA4C();
}

s32 func_000D3164(void) {
    return 1;
}

s32 func_000D316C(void) {
    func_000CC590();
    return 0;
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D318C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D371C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D38CC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3B30);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3DB4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4014);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D409C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4104);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4170);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4268);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4428);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4488);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4530);

struct Unk_ret_func_000D45B0 *func_000D45B0(s32 arg0, struct Unk_func_000D45B0_1 *arg1) {
    s32 temp_v1;
    s32 var_a2;
    s32 var_v1;

    temp_v1 = arg1->unk0;
    var_a2 = 0;
    if (temp_v1 >= 0) {
        var_v1 = M2C_FIELD(((temp_v1 * 0xC) + arg0), s32 *, 0xA0);
        if (var_v1 < 0) {
            var_v1 = arg1->unk4;
        }
        var_a2 = M2C_FIELD(((var_v1 * 0xC) + arg0), s32 *, 0xA8);
    }
    return var_a2;
}

s32 func_000D45F4(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 (*temp_v1)(M2C_UNK, M2C_UNK);
    s32 var_v0;

    temp_v1 = M2C_FIELD(M2C_FIELD(((arg1 * 0xC) + arg0), void **, 0xA8), s32 (**)(M2C_UNK, M2C_UNK), 0x14);
    var_v0 = 0;
    if (temp_v1 != NULL) {
        var_v0 = temp_v1(0, arg2);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4638);

s32 func_000D4718(s32 *arg0, struct Unk_func_000D4718_1 *arg1) {
    void *sp0;
    func_000C9C24(arg0, &sp0);
    arg1->unkC = (s32) func_000CA098((void **) arg0)->unkC;
    func_000C12D0((s32) arg1, &sp0);
    return 1;
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D476C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D47D8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D484C);

s32 func_000D488C(void) {
    return 0x4038;
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4894);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4960);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4B04);

s32 func_000D4B18(s32 arg0, s32 arg1, s32 arg2) {
    return (arg1 - arg0) >= arg2;
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4B28);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4C0C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4CD0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4D44);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4D84);

void func_000D4DDC(void) {
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4DE4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4E5C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4E80);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4EA4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4EC8);

void func_000D4F2C(s32 arg0) {
    sceHVNetfront_Module_D611E938(arg0, 0, 0x60);
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4F4C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D50C8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D511C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D5140);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D5204);

void func_000D5268(s32 arg0) {
    sceHVNetfront_Module_D611E938(arg0, 0, 0x118);
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D5288);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D536C);

void func_000D5418(struct Unk_func_000D5418_0 *arg0) {
    sceHVNetfront_Module_D611E938(arg0, 0, 0x10);
    sceHVNetfront_Module_D611E938((u8 *)arg0 + 0x30, 0, 0x10);
    arg0->unk40 = 0;
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D5458);

void func_000D5524(struct Unk_func_000D5524_0 *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a1;

    temp_a0 = arg0->unk40;
    temp_a1 = 0x10 - temp_a0;
    sceHVNetfront_Module_D611E938((s32) ((u8 *)arg0 + temp_a0 + 0x10), temp_a1, temp_a1);
    func_000D5288(arg0);
    func_000D536C(arg0);
    if (arg1 != 0) {
        sceHVNetfront_Module_1A02495A(arg1, (s32) arg0, 0x10);
    }
    sceHVNetfront_Module_D611E938((s32) arg0, 0, 0x44);
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D55A4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D5604);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D6988);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D69D0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D6AD0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D6BFC);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D0F94);
#else
INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D6EF4);
#endif

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D7164);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D720C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D7308);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D73E4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D75D4);

void func_000D77C4(s32 arg0, M2C_UNK arg1) {
    func_000D7164(arg1, arg0);
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D77E8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D784C);

void func_000D78B0(s32 arg0, s32 arg1) {
    func_000D7164(arg1, arg0);
    func_000D7164(arg1 + 8, arg0 + 0x80);
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D78FC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D7990);

void func_000D7A24(s32 arg0, s32 arg1) {
    func_000D7164(arg1, arg0);
    func_000D7164(arg1 + 8, arg0 + 0x80);
    func_000D7164(arg1 + 0x10, arg0 + 0x100);
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D7A7C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D7B14);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D7BA8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D7C08);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D8690);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D86CC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D87CC);

#if FW_VERSION >= 311
INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DC690);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DC6E8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EAD54);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EAE04);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D2AB4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D2AC4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D2B00);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EAEDC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D2B6C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EAF58);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D2BE4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EAFD0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EB014);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EB05C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EB0B0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D2D5C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D2DB0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D2E10);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D2E7C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EB2A0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D2F4C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EB358);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EB39C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EB3E0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D309C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3108);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3184);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D31C4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3204);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3254);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EB648);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EB664);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D32D0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D32EC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3308);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3324);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3340);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EB734);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EB740);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D339C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D33F0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3444);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3488);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D34FC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3540);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D35AC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EB9B0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3664);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D36B8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D371C_v250);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D37AC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3928);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3AD4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3B28);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3B44);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3B50);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3C54);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3C60);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3C7C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EC040);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EC158);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EC1C0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3ED8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3EE8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3EFC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3F08);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3F24);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EC2D4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EC2F0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EC2FC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3F74);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EC324);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3FAC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3FB4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3FD0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3FD8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D3FF4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4038);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D40D4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4120);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D42F4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4384);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D43F4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D44AC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D459C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D46C0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4934);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4AAC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4B44);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4B64);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4B80);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4BDC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4C5C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4CDC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4D2C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4DD8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4E7C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D4ED8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D5050);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/netfront_0CD4A0", inflateReset);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", inflateInit2_);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/netfront_0CD4A0", inflateInit_);
#endif

#if FW_VERSION >= 311
INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DC820);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DC84C);
#endif

#if FW_VERSION == 303
void fixedtables(struct Unk_fixedtables_0 *arg0) {
    arg0->unk44 = &D_0012A78C;
    arg0->unk4C = 9;
    arg0->unk48 = &D_0012AF8C;
    arg0->unk50 = 5;
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", updatewindow);
#endif

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_00129DF4);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_00129E08);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_00129E1C);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_00129E30);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_00129E44);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_00129F44);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012A548);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012A648);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012A748);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012A788);

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012DB08);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D5154);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D537C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D5528);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D55DC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D566C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D56A0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D5984);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012DBCC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D5D40);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EE138);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D5DA0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D5DD4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D5E5C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D5ED4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D60BC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D61C0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D6224);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D6270);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D62CC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D63D8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D654C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D6640);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D6704);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D67C4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D689C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D6984);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D6AD4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EEF40);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EEF48);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EEF54);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D6BC4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D6BDC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D6C28);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D6CCC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D6D88);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D6DA4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D6DC0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D6DDC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D6DE4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D6F0C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D7108);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D72DC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D7408);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D7410);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D7418);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D7420);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D759C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D76F4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EFBB8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D7824);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D784C_v250);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D78C4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D7930);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D7984);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D79F4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D7A30);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D7AA8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D7AF8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D7B4C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D7BA4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D7CE4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D7ED0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D8168);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D8238);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D8384);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D8464);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D84C8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D85B8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D88A8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D89A4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D89F8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D8BDC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D8C68);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D8E20);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D8EC8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D8F5C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D8FDC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D90B4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000F1458);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D91B0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D91D8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D9218);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_00006048);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D9288);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D92E8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D9364);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D9380);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D939C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D93B8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D93EC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D9410);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_00006268);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D94A4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D94AC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D960C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D96A0);
#else
INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012A78C);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012AF8C);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012B00C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", inflate);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", inflateEnd);
#endif

#if FW_VERSION >= 311
INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DDF5C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DE060);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DE0DC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DE228);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DE260);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/netfront_0CD4A0", inflateSetDictionary);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", syncsearch);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", inflateSync);

s32 inflateSyncPoint(struct Unk_inflateSyncPoint_0 *arg0) {
    s32 var_a1;
    s32 var_v0;
    struct Unk_inflateSyncPoint_temp_a0 *temp_a0;

    var_v0 = -2;
    if (arg0 != NULL) {
        temp_a0 = arg0->unk1C;
        var_a1 = 0;
        if (temp_a0 != NULL) {
            if (temp_a0->unk0 == 0xD) {
                var_a1 = temp_a0->unk34 == 0;
            }
            var_v0 = var_a1;
        }
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", inflateCopy);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DA690);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012B26C);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012B29C);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012B2DC);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012B31C);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012B35C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", uncompress);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012B3A4);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012B3B4);
#endif

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012B3C0);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D9788);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D982C);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_00121C34);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_00121C38_v250);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_00121CB4);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_00121DB4);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_00121DB8);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_00121DE4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D99E8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D9A60);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D9AE4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D9B68);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D9D3C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D9EB0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000D9EE4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DA000);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DA048);
#else
INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012B3C4);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012B3D0);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012B3E0);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012B3EC);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012B400);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012B410);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012B428);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DAC40);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DAC4C);
#else
s32 func_000DAC4C(void) {
    return 0x55;
}
#endif

#if FW_VERSION == 250
void func_00007570(void) {

}

void func_00007578(void) {

}

void func_00007580(void) {

}

void func_00007588(void) {

}

void func_00007590(void) {

}

void func_00007598(void) {

}

s32 func_000075A0(void) {
    return 1;
}

void func_000075A8(void) {

}

s32 func_000075B0(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DA4E8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DA4F0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DA4F8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DA500);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DA508);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DA510);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DA518);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DA520);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DA554);
#else
INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DAC54);
#endif

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DAC74);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DA578);
#endif

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DAC94);

#if FW_VERSION >= 311
INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DEA48);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DEBCC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DEBD8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DEC04);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DF000);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DA5B0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DA5CC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DA664);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DA7B4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DA82C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DA9B8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DA9EC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DAB44);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DAB98);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DAD0C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DAD14);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DAD70);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DADB4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DAE18);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DAE74);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DAEE8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DAF24);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DAFD0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DB018);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DB038);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DB054);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DB148);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DB19C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DB264);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DB32C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DB3F4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DB4BC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DB52C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DB59C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DB60C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DB67C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DB7A4);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/netfront_0CD4A0", adler32);

M2C_UNK *get_crc_table(void) {
    return &D_0012B458;
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", crc32);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", crc32_little);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", crc32_big);
#endif

#if FW_VERSION >= 303
INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012B458);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DB6A4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", jpeg_CreateDecompress);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", jpeg_destroy_decompress);
#endif

void func_000DBD14(void) {
    func_000E6350();
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DBD30);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DB9E8);
#else
INCLUDE_ASM("nonmatchings/netfront_0CD4A0", jpeg_read_header);
#endif

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DC000);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DC0FC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DC158);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DBC60);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DBD70);
#else
INCLUDE_ASM("nonmatchings/netfront_0CD4A0", jpeg_finish_decompress);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", jpeg_start_decompress);
#endif

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DC408);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DBFD4);
#else
INCLUDE_ASM("nonmatchings/netfront_0CD4A0", jpeg_read_scanlines);
#endif

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DC61C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DC744);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DC7D8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DC8C8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DCB34);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DCD20);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DCE3C);

void func_000DCE98(struct Unk_func_000DCE98_0 *arg0) {
    *arg0->unk1B0 = &func_000DCEAC;
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DCEAC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DCFC8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DD028);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DD0A0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DD168);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DD590);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DD934);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DDD50);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DE078);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DE1E0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DE4D0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DE5EC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DE7AC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DEAD8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DEBE8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DED6C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DEE74);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DF168);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DECCC);
#else
INCLUDE_ASM("nonmatchings/netfront_0CD4A0", jpeg_resync_to_restart);
#endif

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DF380);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DF3A4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DF44C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DF53C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DF5A0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DF678);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DF958);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DFA90);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DFD30);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DFF10);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000DFF54);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E0008);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E0064);

void func_000E0190(struct Unk_func_000E0190_0 *arg0) {
    struct Unk_func_000E0190_temp_v1 *temp_v1;

    temp_v1 = arg0->unk1C0;
    temp_v1->unk24 = 0;
    temp_v1->unk2C = (s32) arg0->unk70;
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E01A4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E02C0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E0320);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E04CC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E0740);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E0810);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E0AF8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E0BA4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E0E40);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E10F8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E123C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E16F0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E17A8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E18C4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E196C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E1A7C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E1B88);

void func_000E1C70(struct Unk_func_000E1C70_0 *arg0) {
    struct Unk_func_000E1C70_temp_v1 *temp_v1;

    temp_v1 = arg0->unk1C0;
    temp_v1->unk5C = (s32) arg0->unk134;
    temp_v1->unk60 = (s32) arg0->unk70;
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E1C88);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E1DF8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E1E00);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E1E08);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E1F00);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E1F74);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E2038);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E2124);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E229C);

void func_000E2548(struct Unk_vt_func_000E2548_arg0 **arg0) {
    (*arg0)->unk8();
    func_000E63A8(arg0);
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E257C);

void func_000E25A0(void **arg0, s32 arg1) {
    struct Unk_func_000E25A0_temp_s0 *temp_s0;

    temp_s0 = *arg0;
    if (arg1 < 0) {
        if ((temp_s0->unk6C == 0) || (temp_s0->unk68 >= 3)) {
            temp_s0->unk8();
        }
        temp_s0->unk6C = (s32) (temp_s0->unk6C + 1);
    } else if (temp_s0->unk68 >= arg1) {
        temp_s0->unk8();
    }
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E2618);

void func_000E2734(void **arg0) {
    struct Unk_func_000E2734_temp_v0 *temp_v0;

    temp_v0 = *arg0;
    temp_v0->unk6C = 0;
    temp_v0->unk14 = 0;
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E2744);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E27B4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E27E8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E29B0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E2AAC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E2BC4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E2CEC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E2DB0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E2E74);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E30F4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E3204);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E3318);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E352C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E3744);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E38C8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E3918);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E3A5C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E3A78);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E3A94);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E3AB0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E3ACC);

void func_000E3AD4(void **arg0) {
    struct Unk_func_000E3AD4_temp_v1 *temp_v1;

    temp_v1 = *arg0;
    temp_v1->unk14 = 0x31;
    temp_v1->unk0();
}

s32 func_000E3B00(void) {
    return 0;
}

void func_000E3B08(void) {
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E3B10);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E3C7C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E3CAC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E3CDC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E3EAC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E4074);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E414C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E41F8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E4288);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E4324);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E4450);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E4590);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E476C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E47F4);

void func_000E4954(void) {
}

void func_000E495C(void **arg0) {
    struct Unk_func_000E495C_temp_v1 *temp_v1;

    temp_v1 = *arg0;
    temp_v1->unk14 = 0x2E;
    temp_v1->unk0();
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E4988);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E4A7C);

void *func_000E4B08(void *arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_a1;
    s32 var_a3;
    void *var_a0;
    void *var_a2;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a3 = 0;
    var_a2 = NULL;
    if (var_a1 > 0) {
        do {
            temp_v1 = M2C_FIELD(var_a0, s32 *, 0x1C);
            var_a1 -= 1;
            if ((var_a3 < temp_v1) && (M2C_FIELD(var_a0, s32 *, 0x18) > 0)) {
                var_a3 = temp_v1;
                var_a2 = var_a0;
            }
            var_a0 += 0x20;
        } while (var_a1 != 0);
    }
    return var_a2;
}

void *func_000E4B48(void *arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_a1;
    s32 var_a3;
    void *var_a0;
    void *var_a2;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a3 = 0;
    var_a2 = NULL;
    if (var_a1 > 0) {
        do {
            temp_v1 = M2C_FIELD(var_a0, s32 *, 0x18);
            var_a1 -= 1;
            if (var_a3 < temp_v1) {
                var_a3 = temp_v1;
                var_a2 = var_a0;
            }
            var_a0 += 0x20;
        } while (var_a1 != 0);
    }
    return var_a2;
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E4B7C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E4FE0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E51A8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E5348);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E543C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E5670);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E5800);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E5930);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E5A50);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E5DAC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E5E88);

void func_000E5EC0(void) {
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E5EC8);

void func_000E6068(struct Unk_func_000E6068_0 *arg0) {
    arg0->unk1C8->unk1C = 1;
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E6078);

s32 func_000E6258(s32 arg0, s32 arg1) {
    return (s32) ((arg0 + arg1) - 1) / arg1;
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E6278);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E6298);

void func_000E6308(s32 arg0, M2C_UNK arg1, s32 arg2) {
    func_0010C3E0(arg1, arg0, arg2 << 7);
}

void func_000E6330(s32 arg0, s32 arg1) {
    func_0010C4EC(arg0, 0, arg1);
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E6350);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E63A8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E63E4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E6410);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E643C);

void func_000E6488(struct Unk_func_000E6488_0 *arg0) {
    arg0->unk90 = 0;
    func_000E643C();
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E64A8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E6510);

s32 func_000E67D4(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E67DC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E69D4);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E6C08);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E6D58);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E7508);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E7690);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E77BC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E78E4);

void func_000E7960(struct Unk_func_000E7960_0 *arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_000E6298(*arg1, arg2, arg3, 0, arg4, arg0->unk6C);
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E7990);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E79F8);

void func_000E7B40(void) {
}

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012D4F0);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012D530);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012D570);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012D574);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012D768);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012D770);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012D778);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012D878);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012D884);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E7B48);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E7D68);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E8030);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E80F0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E8294);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E8600);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E8790);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E88DC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E8984);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E8E44);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E8EB0);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E8EF8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E9014);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E9144);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E923C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E9310);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E93AC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E9470);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E964C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E9684);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012D9D8);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012DA58);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012DA78);

INCLUDE_RODATA("nonmatchings/netfront_0CD4A0", D_0012DAB8);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E97CC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000E9BDC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EA098);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EA6BC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EAAAC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EAD18);

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EAD54);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EAE04);

s32 func_000EAE64(s32 ***arg0) {
    return ***arg0;
}

void func_000EAE74(s32 **arg0, s32 arg1) {
    M2C_FIELD(sceHVNetfront_Module_896E55F6(arg0), s32 *, 4) = arg1;
    sceHVNetfront_Module_B29BE9CE(arg0);
}

void func_000EAEB0(s32 **arg0) {
    sceHVNetfront_Module_896E55F6(arg0);
    sceHVNetfront_Module_B29BE9CE(arg0);
}

s32 func_000EAEDC(s32 **arg0, s32 arg1) {
    M2C_FIELD(sceHVNetfront_Module_896E55F6(arg0), s32 *, 0x38) = arg1;
    sceHVNetfront_Module_B29BE9CE(arg0);
    return arg1;
}

s32 func_000EAF1C(s32 **arg0) {
    s32 temp_s1;

    temp_s1 = M2C_FIELD(sceHVNetfront_Module_896E55F6(arg0), s32 *, 0x38);
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s1;
}

void func_000EAF58(s32 **arg0, s32 arg1) {
    M2C_FIELD(sceHVNetfront_Module_896E55F6(arg0), s32 *, 0x60) = arg1;
    sceHVNetfront_Module_B29BE9CE(arg0);
}

s32 func_000EAF94(s32 **arg0) {
    s32 temp_s1;

    temp_s1 = M2C_FIELD(sceHVNetfront_Module_896E55F6(arg0), s32 *, 0x60);
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s1;
}

void func_000EAFD0(s32 arg0, s32 arg1) {
    func_000EB0B0(arg0, arg1, sceHVNetfront_Module_15875ED4(arg1));
}

void func_000EB014(s32 arg0, s32 arg1) {
    func_000EAFD0(arg0, sceHVNetfront_Module_E459881C(arg1));
    sceHVNetfront_Module_08549708(arg1);
}

void func_000EB05C(s32 arg0, s32 **arg1) {
    func_000EB0B0(arg0, sceHVNetfront_Module_896E55F6(arg1) + 0xC, M2C_FIELD(*arg1, s32 *, 4));
    sceHVNetfront_Module_B29BE9CE(arg1);
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EB0B0);

void func_000EB10C(s32 arg0, M2C_UNK arg1, s32 arg2) {
    func_000EB22C(arg0, arg1, arg2, sceHVNetfront_Module_15875ED4(arg2));
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EB160);

s32 func_000EB1C0(s32 arg0, s32 arg1, s32 **arg2) {
    s32 temp_s0;

    temp_s0 = func_000EB22C(arg0, arg1, sceHVNetfront_Module_896E55F6(arg2) + 0xC, M2C_FIELD(*arg2, s32 *, 4));
    sceHVNetfront_Module_B29BE9CE(arg2);
    return temp_s0;
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EB22C);

void func_000EB2A0(s32 **arg0, M2C_UNK arg1, M2C_UNK arg2) {
    struct Unk_vt_func_000EB2A0_temp_v0 **temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    (*temp_v0)->unk20(temp_v0, arg1, arg2);
    sceHVNetfront_Module_B29BE9CE(arg0);
}

void func_000EB2FC(s32 **arg0, M2C_UNK arg1, M2C_UNK arg2) {
    struct Unk_vt_func_000EB2FC_temp_v0 **temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    (*temp_v0)->unk24(temp_v0, arg1, arg2);
    sceHVNetfront_Module_B29BE9CE(arg0);
}

s32 func_000EB358(s32 **arg0) {
    s32 temp_s1;

    temp_s1 = func_000EC008(sceHVNetfront_Module_896E55F6(arg0));
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s1;
}

s32 func_000EB39C(s32 **arg0) {
    s32 temp_s1;

    temp_s1 = func_000EC024(sceHVNetfront_Module_896E55F6(arg0));
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s1;
}

s32 func_000EB3E0(s32 **arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_s0;

    temp_s0 = func_000EC040(sceHVNetfront_Module_896E55F6(arg0), arg1, arg2, arg3);
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s0;
}

s32 func_000EB44C(s32 **arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_s0;

    temp_s0 = func_000EC158(sceHVNetfront_Module_896E55F6(arg0), arg1, arg2, arg3);
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s0;
}

s32 func_000EB4B8(s32 **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_s0;

    temp_s0 = func_000EC1C0(sceHVNetfront_Module_896E55F6(arg0), arg1, arg2, arg3, arg4);
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s0;
}

void func_000EB534(s32 **arg0) {
    struct Unk_vt_func_000EB534_temp_v0 **temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    (*temp_v0)->unk28(temp_v0);
    sceHVNetfront_Module_B29BE9CE(arg0);
}

void func_000EB574(s32 **arg0) {
    struct Unk_vt_func_000EB574_temp_v0 **temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    (*temp_v0)->unk2C(temp_v0);
    sceHVNetfront_Module_B29BE9CE(arg0);
}

s32 func_000EB5B4(s32 **arg0) {
    s32 temp_s0;
    struct Unk_vt_func_000EB5B4_temp_v0 **temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    temp_s0 = (*temp_v0)->unk30(temp_v0);
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s0;
}

s32 func_000EB604(s32 **arg0) {
    s32 temp_s1;

    temp_s1 = func_000EC2A0(sceHVNetfront_Module_896E55F6(arg0));
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s1;
}

void func_000EB648(s32 *arg0) {
    func_000EC2AC(*arg0);
}

void func_000EB664(s32 *arg0) {
    func_000EC2C8(*arg0);
}

void func_000EB680(s32 *arg0) {
    func_000EC2D4(*arg0);
}

void func_000EB69C(s32 *arg0) {
    func_000EC2F0(*arg0);
}

void func_000EB6B8(s32 *arg0) {
    func_000EC2FC(*arg0);
}

void func_000EB6D4(s32 *arg0) {
    func_000EC318(*arg0);
}

void func_000EB6F0(s32 **arg0, M2C_UNK arg1) {
    func_000EC324(sceHVNetfront_Module_896E55F6(arg0), arg1);
    sceHVNetfront_Module_B29BE9CE(arg0);
}

void func_000EB734(struct Unk_vt_func_000EB734_arg0 **arg0, s32 arg1) {
    (*arg0)->unk5C = arg1;
}

s32 func_000EB740(struct Unk_vt_func_000EB740_arg0 **arg0) {
    return (*arg0)->unk5C;
}

s32 func_000EB74C(s32 **arg0, M2C_UNK arg1) {
    s32 temp_s0;
    struct Unk_vt_func_000EB74C_temp_v0 **temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    temp_s0 = (*temp_v0)->unk3C(temp_v0, arg1);
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s0;
}

s32 func_000EB7A0(s32 **arg0, M2C_UNK arg1) {
    s32 temp_s0;
    struct Unk_vt_func_000EB7A0_temp_v0 **temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    temp_s0 = (*temp_v0)->unk40(temp_v0, arg1);
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s0;
}

void func_000EB7F4(s32 **arg0, M2C_UNK arg1) {
    func_000EC350(sceHVNetfront_Module_896E55F6(arg0), arg1);
    sceHVNetfront_Module_B29BE9CE(arg0);
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EB838);

s32 func_000EB8AC(s32 **arg0) {
    s32 temp_s1;

    temp_s1 = func_000EC374(sceHVNetfront_Module_896E55F6(arg0));
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s1;
}

s32 func_000EB8F0(s32 **arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_s0;

    temp_s0 = func_000EC37C(sceHVNetfront_Module_896E55F6(arg0), arg1, arg2, arg3);
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s0;
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EB95C);

s32 func_000EB9B0(s32 **arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_s0;
    struct Unk_vt_func_000EB9B0_temp_v0 **temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    temp_s0 = (*temp_v0)->unk58(temp_v0, arg1, arg2);
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s0;
}

s32 func_000EBA14(s32 **arg0, M2C_UNK arg1) {
    s32 temp_s0;
    struct Unk_vt_func_000EBA14_temp_v0 **temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    temp_s0 = (*temp_v0)->unk5C(temp_v0, arg1);
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s0;
}

s32 func_000EBA68(s32 **arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_s0;
    struct Unk_vt_func_000EBA68_temp_v0 **temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    temp_s0 = (*temp_v0)->unk18(temp_v0, arg1, arg2);
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s0;
}

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EBACC);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EBB5C);

INCLUDE_ASM("nonmatchings/netfront_0CD4A0", func_000EBCD4);

void func_000EBE7C(s32 arg0, M2C_UNK arg1, s32 *arg2) {
    func_000EBCD4(arg0, arg1, arg2, sceHVNetfront_Module_3EDA77E7(*arg2));
}

void func_000EBED0(s32 arg0) {
    func_000F0F48(arg0 + 0xC);
}
#endif
