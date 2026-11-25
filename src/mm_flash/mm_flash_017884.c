#include "common.h"
#include "mm_flash_decls.h"

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_00017884);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_00017C44);

void func_00017EDC(struct Unk_func_00017EDC_0 *arg0) {
    if (arg0->unkE4 & 8) {

    } else {
        func_00017F68();
        func_00016218(arg0);
    }
}

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/mm_flash_017884", func_00017F20);
#else
void func_00017F20(struct Unk_func_00017F20_0 *arg0) {
    if (!(arg0->unkE4 & 0x200)) {
        func_000152E4((s32) arg0, 0, arg0->unk268, (s32) "\r");
    } else {
        func_00015B0C((s32) arg0, 0, arg0->unk268);
    }
}
#endif

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_00017F68);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_00017FF0);

s32 func_0001812C(struct Unk_func_0001812C_0 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (!(arg0->unkE4 & 8)) {
        var_v1 = func_0008C66C(*arg0->unk2C) != 0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_00018168);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_000181EC);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_000182AC);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_00018354);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_000183D8);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_00018548);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_00018628);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_00018C64);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_00018CB8);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_00018EC4);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_00019814);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_00019A98);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_00019D98);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_00019FBC);

void func_0001A35C(s32 *arg0) {
    *arg0 = 0;
    func_0001A37C();
}

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001A37C);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001A3E0);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001A4A8);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001A624);

s32 func_0001A72C(struct Unk_func_0001A72C_0 *arg0, s32 arg1) {
    if ((arg1 >= 0) && (arg1 < arg0->unk170)) {
        return arg0->unk160 + (arg1 * 0x64);
    }
    return 0;
}

s32 func_0001A764(struct Unk_func_0001A764_0 *arg0, s32 arg1) {
    if ((arg1 >= 0) && (arg1 < arg0->unk174)) {
        return arg0->unk164 + (arg1 * 0x24);
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001A798);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001A810);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001AAF0);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001AB7C);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001AC14);

INCLUDE_RODATA("nonmatchings/mm_flash_017884", D_000B5978);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001ACAC);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001ACF8);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001AD70);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001ADEC);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001AE5C);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001AFF8);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001B214);

INCLUDE_RODATA("nonmatchings/mm_flash_017884", D_000B59A8);

INCLUDE_RODATA("nonmatchings/mm_flash_017884", D_000B59AC);

INCLUDE_RODATA("nonmatchings/mm_flash_017884", D_000B59B8);

INCLUDE_RODATA("nonmatchings/mm_flash_017884", D_000B59C8);

INCLUDE_RODATA("nonmatchings/mm_flash_017884", D_000B59D0);

INCLUDE_RODATA("nonmatchings/mm_flash_017884", D_000B59D8);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001B80C);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001B944);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001BA90);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001BB84);

void func_0001BCA8(struct Unk_func_0001BCA8_0 *arg0) {
    s32 temp_s1;

    if (func_0001BD18((s32) arg0, arg0->unk2C, arg0->unk30) == 0) {
        temp_s1 = arg0->unk2C;
        if (temp_s1 == 0) {
            arg0->unk2C = 0;
        } else {
            func_00090730(*func_0009F1C0(), temp_s1, 0);
            arg0->unk2C = 0;
        }
        arg0->unk30 = 0;
    }
}

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001BD18);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001C104);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001C244);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001C360);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001C548);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001C60C);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001C6F4);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001C7DC);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001C930);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001CA7C);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001CAA0);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001CAC4);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001CAF4);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001CB50);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001CC0C);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001CCE0);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001CD64);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001CDDC);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001CE14);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001CE54);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001CEB8);

s32 func_0001CF38(s32 arg0, M2C_UNK arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 > 0) {
        var_v0 = func_0001CEB8(arg1) % arg0;
    }
    return var_v0;
}

void func_0001CF7C(struct Unk_func_0001CF7C_0 *arg0, s32 arg1) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    func_0001D150((s32) arg0, arg1);
}

void func_0001CFA4(struct Unk_func_0001CFA4_0 *arg0, s32 arg1) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    func_0001D150((s32) arg0, arg1);
}

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001CFCC);

void func_0001D06C(struct Unk_func_0001D06C_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    func_0001CFCC();
}

s32 func_0001D094(s32 arg0, s32 arg1) {
    if (arg0 != arg1) {
        func_0001CFCC();
    }
    return arg0;
}

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001D0C4);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001D0F0);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001D108);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001D150);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001D208);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001D2E4);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001D3D8);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001D400);

void func_0001D4F0(s32 arg0, struct Unk_func_0001D4F0_1 *arg1) {
    func_0001D2E4(arg0, (s32) arg1->unk0);
    func_0001D2E4(arg0, (s32) arg1->unk1);
    func_0001D2E4(arg0, (s32) arg1->unk2);
}

void func_0001D53C(s32 arg0, s32 arg1) {
    if (arg1 >= 0xA) {

    } else {
        func_0001D2E4(arg0, 0x30);
    }
    func_0001D400(arg0, arg1, 0xA);
}

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001D594);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001D664);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001D6A8);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001D6D0);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001D7D0);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001D858);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001D9A0);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001DA90);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001DBA8);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001DD84);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001DE04);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001DE4C);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001DEA4);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001DF00);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001DF84);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001E044);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001E0BC);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001E13C);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001E198);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001E1CC);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001E244);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001E2CC);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001E300);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001E494);

s32 func_0001E4E8(s32 arg0) {
    return (u32) ((arg0 - 0x41) & 0xFF) < 0x1AU;
}

s32 func_0001E4F8(s32 arg0) {
    return (u32) ((arg0 - 0x61) & 0xFF) < 0x1AU;
}

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001E508);

INCLUDE_ASM("nonmatchings/mm_flash_017884", func_0001E55C);

void func_0001E5B0(struct Unk_func_0001E5B0_0 *arg0, struct Unk_func_0001E5B0_1 *arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_00090648(*func_0009F1C0(), 0x14, 0);
    func_0001F990(temp_v0, arg1->unk0, arg1->unk4, arg2 < 6);
    arg0->unk0 = temp_v0;
    arg0->unk4 = 0;
}

void func_0001E628(struct Unk_func_0001E628_0 *arg0, struct Unk_func_0001E628_1 *arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_00090648(*func_0009F1C0(), 0x14, 0);
    func_0001F990(temp_v0, arg1->unk0, arg1->unk4, arg2 < 6);
    arg0->unk0 = temp_v0;
    arg0->unk4 = 0;
}
