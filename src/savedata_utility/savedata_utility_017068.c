#include "common.h"
#include "savedata_utility_decls.h"

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00017068);

void ***func_000170C4(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    *temp_s0 = M2C_FIELD(temp_v1, void **, 0);
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001712C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00017174);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_000171BC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00017234);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_000172AC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001732C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_000173B0);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_000252E0);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_00025300);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00017430);

s32 func_00017598(void *arg0, void *arg1) {
    s32 var_v1;
    u8 temp_a0;
    u8 temp_v0;

    var_v1 = 0;
    if (arg1 != NULL) {
        temp_a0 = M2C_FIELD(arg0, u8 *, 0x4C);
        if ((temp_a0 != 0) && ((temp_v0 = M2C_FIELD(arg1, u8 *, 0xA30), var_v1 = 1, (temp_v0 == 0)) || (temp_a0 >= temp_v0))) {
            var_v1 = 0;
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_000175D0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_000175E0);

void func_000175FC(void) {
}

void func_00017604(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x4D) = arg1;
}

s32 func_0001760C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}

M2C_UNK *func_00017614(void) {
    return &D_00025B3C;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00017620);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001764C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00017678);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_00025348);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_000176AC);

s32 func_000176EC(void *arg0) {
    scePaf_6829D7AF((s32) &D_00025B2C, 0, 0x10);
    scePaf_F95EA3F1(&D_00025B2C, arg0, 0x10);
    func_00022CF0(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 8));
    scePaf_6829D7AF((s32) &D_00025C48, 0, 0xC);
    return 0;
}

s32 func_00017760(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00017768);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001784C);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_00025370);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_0002537C);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_00025390);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_000179AC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00017CCC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00017D48);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_000253C8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00017DD0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00017EBC);

s32 func_00017F54(s32 arg0, u32 arg1) {
    return ((s32) (arg0 + 1) / (s32) (arg1 >> 5)) + 1;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00017F74);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00018040);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_000181D0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00018358);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_00025400);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_0002540C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00018498);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_000186CC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_000187C8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00018924);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_000189DC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00018A08);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00018A6C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00018AF4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00018B60);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00018BF4);

s32 func_00018C28(void) {
    return 0x1330;
}

void func_00018C30(s32 arg0, s32 arg1) {
    func_00017DD0(arg0, (s32) &D_00025458, arg1);
}

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_00025458);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_00025464);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_0002546C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00018C54);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00018D4C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00018E3C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00018EE8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00018F68);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00018FC4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00019048);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00019154);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_000192E0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00019318);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_000193D4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001948C);

void func_00019610(s32 arg0, s32 arg1) {
    func_0001948C(arg0, arg1, 0);
}

void func_0001962C(s32 arg0, s32 arg1) {
    func_0001948C(arg0, arg1, 1);
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00019648);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_00025498);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_000254A4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00019820);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00019930);

void func_00019A20(s32 arg0) {
    if (func_00019820() >= 0) {
        func_00019930(arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00019A54);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00019AA0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00019AFC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00019C08);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_000254C4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00019C5C);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_000254E4);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_000254EC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00019DE0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00019EE0);

void func_0001A2B8(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;

    temp_a1 = arg1 * 2;
    *arg0 = (*arg0 & ~(3 << temp_a1)) | (arg2 << temp_a1);
}

void func_0001A2E0(s32 *arg0, s32 arg1) {
    *arg0 &= ~(3 << arg1);
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001A2FC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001A30C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001A320);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001A338);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001A59C);

void func_0001A5C0(void *arg0) {
    s32 temp_v1;

    if (arg0 != NULL) {
        func_0001F558(M2C_FIELD(arg0, s32 *, 8));
        temp_v1 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_v1 != 0) {
            func_00017678(temp_v1);
            M2C_FIELD(arg0, s32 *, 0) = 0;
        }
        scePaf_6829D7AF((s32) arg0, 0, 0x10C);
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001A618);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001A6E0);

s32 func_0001A848(void *arg0) {
    s32 var_v0;

    var_v0 = 0x80084002;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x100);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001A860);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001A8D4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001A910);

s32 func_0001A91C(void) {
    s32 var_a0;

    var_a0 = 0;
    if (M2C_FIELD(&D_00025C48, s32 *, 0) != 0) {
        var_a0 = M2C_FIELD(&D_00025C48, s32 *, 4);
    }
    return var_a0;
}

void func_0001A93C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg4 != 1) {
        func_0001A970(arg0, arg1, arg2, arg3);
    } else {
        func_0001AB50(arg0, arg1, arg2, arg3);
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001A970);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001AB50);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001AE50);

void func_0001AFBC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg4 != 1) {
        func_0001AFF0(arg0, arg1, arg2, arg3);
    } else {
        func_0001B128(arg0, arg1, arg2);
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001AFF0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001B128);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_00025530);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001B3D4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001B5D0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001B6B4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001B7E4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001B8A4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001B948);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001BA70);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001BB30);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001BCE0);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_00025560);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_0002556C);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_00025580);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_00025598);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_000255A8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001BDA0);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_000255C8);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_000255DC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001BE90);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001BFF0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001C05C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001C2E0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001C360);

M2C_UNK *func_0001C3B8(s32 arg0) {
    M2C_UNK *var_v0;

    var_v0 = NULL;
    if (!(arg0 & 0xFF)) {
        var_v0 = &D_000256A8;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001C3D4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001C454);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001C520);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001C564);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001C9EC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001CBCC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001CC78);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001CE2C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001CFB4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001D124);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001D3A0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001DB94);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001E214);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001E4F4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001E660);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001E9A4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001EC3C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001F0E0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001F1E8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001F558);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001F644);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001F7C4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001FB7C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001FBC4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001FCA8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0001FDF8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0002055C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_000205C4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0002061C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_000207AC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00020844);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00020A0C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00020A64);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00020ADC);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00020B4C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00020BD8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00020D60);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00020EF4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00021074);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0002126C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00021384);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00021498);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0002195C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00021D20);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00021DF4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00022198);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00022260);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_000223B8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_000224BC);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_000255FC);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_00025604);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_00025614);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_00025624);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_00025634);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_00025640);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_00025654);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_00025668);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_00025678);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_00025684);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_00025690);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_0002569C);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_000256A8);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_000256B4);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_000256C0);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_000256C8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00022684);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_0002293C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00022A0C);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00022AE8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00022CF0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00022D64);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00022DB8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00022DF4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00022EB0);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00022F44);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00022FD8);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00023050);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00023120);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00023194);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_000231F4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00023290);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00023380);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_00023484);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_000235F4);

INCLUDE_ASM("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", func_000237C8);

INCLUDE_RODATA("tmp/asm/282/savedata_utility/nonmatchings/savedata_utility_017068", D_000256F0);
