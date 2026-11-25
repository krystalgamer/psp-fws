#include "common.h"
#include "paf_decls.h"

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013BBE8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013BC44);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013BC68);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013BC8C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013BE14);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013C000);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013C1E4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013C268);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013C4B0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013C53C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013C768);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013CB34);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013CB7C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013CE14);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013CF4C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013CFB0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013D028);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013D08C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013D4F4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013D5FC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013D6AC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013DB68);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013DDEC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013DE7C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013DEFC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013DF7C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013E280);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013E350);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013E4AC);

void func_0013E4D4(void) {
}

void func_0013E4DC(void) {
}

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013E4E4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013E500);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013E558);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013E5C4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013E744);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013EDA4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013F308);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013F364);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013F77C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013FA50);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013FA84);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013FBEC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013FE9C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0013FF34);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00140028);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00140290);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00140318);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00140444);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0014057C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001406C4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00140780);

void func_001407C8(void) {
    D_001E0ECC.unk190C = 0;
    D_001E0ECC.unk190A = 0;
    D_001E0ECC.unk18EA = 0;
}

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001407E0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0014094C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00140B20);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00140B58);

s16 func_00140B8C(s32 arg0) {
    s16 var_a0;

    var_a0 = arg0 & 0xFF;
    if ((u32) (var_a0 - 0x61) < 0x1AU) {
        var_a0 -= 0x20;
    }
    return var_a0;
}

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00140BB0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00140C0C);

s32 func_00140C88(s32 arg0) {
    s32 temp_a0;
    s32 var_v1;

    temp_a0 = arg0 & 0xFF;
    var_v1 = 1;
    if ((u32) ((temp_a0 + 0x4A) & 0xFF) >= 0xFU) {
        var_v1 = func_00140CC8(temp_a0);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00140CC8);

s32 func_00140CD8(s16 arg0) {
    s32 var_a1;

    var_a1 = 1;
    if (arg0 != 0xDE) {
        var_a1 = arg0 == 0xDF;
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00140CF8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00140D68);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00140DAC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00140DD4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00140E1C);

s32 func_0014107C(void) {
    return D_001E0ECC.unkA820;
}

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00141094);

void func_00141234(void) {
}

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0014123C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001413A4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00141454);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00141528);

void func_001415A8(s32 arg0, s16 arg1, s32 arg2) {
    func_00141454(arg0, (s32) arg1, arg2);
}

s32 func_001415C4(s32 arg0, s16 arg1, s32 arg2) {
    return func_001416CC(arg0, (s32) arg1, (s32) &D_001E7BE8, arg2) == 1;
}

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001415F4);

void func_00141630(s32 arg0, s16 arg1, s32 arg2) {
    func_001415C4(arg0, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0014164C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00141668);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001416CC);
#else
INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00141D14);
#endif

#if FW_VERSION == 282
void func_00141D14(void) {
    func_001433F0();
}
#else
INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00141D30);
#endif

#if FW_VERSION == 282
void func_00141D30(void) {
    func_00143490();
}
#else
INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00141D4C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E4284);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E43B8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E4514);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E45F4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E46C4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E4800);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E485C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E489C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E48B8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E4914);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E4938);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E495C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E4AE4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E4CD0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E4EB4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E4F38);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E5180);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E520C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E5438);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E5804);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E584C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E5AE4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E5C1C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E5C80);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E5CF8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E5D5C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E61C4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E62CC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E637C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E6838);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E6ABC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E6B4C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E6BCC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E6C4C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E6F50);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E7020);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E717C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E71A4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E71AC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E71B4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E71D0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E7228);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E7294);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E7414);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E7A74);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E7FD8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E8034);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E844C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E8720);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E8754);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E88BC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E8B6C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E8C04);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E8CF8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E8F60);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E8FE8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E9114);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E924C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E9394);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E9450);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E9498);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E94B0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E961C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E97F0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E9828);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E985C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E9880);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E98DC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E9958);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E9998);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E99A8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E99C8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E9A38);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E9A7C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E9AA4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E9AEC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E9D4C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E9D64);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E9F04);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000E9F0C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EA074);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EA124);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EA1F8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EA278);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EA294);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EA2C4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EA300);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EA31C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EA338);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EA39C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EA9E4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EAA00);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EAA1C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EAA38);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EABC8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EAC28);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EAC54);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EADE4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EAF7C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EB170);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EB194);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EB250);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EB298);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EBA90);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EBC40);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EBD94);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EBE10);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EBEEC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EBF38);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EC040);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EC0C0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EC160);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EC270);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EC4D8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EC5C8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000ECAEC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000ECB08);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000ECB64);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000ECDFC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000ED074);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000ED0DC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000ED164);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000ED210);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000ED2A4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000ED370);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000ED448);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000ED4CC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000ED534);
#endif

#if FW_VERSION == 282
void func_00141D4C(void) {
    func_001435A0();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EBFBC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EC160);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EC3B8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EC4D8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EC630);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EC86C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EC8E0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00141D68);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00141EF8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00141F58);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00141F84);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00142114);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001422AC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001424A0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001424C4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00142580);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001425C8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00142DC0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00142F70);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001430C4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00143140);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0014321C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00143268);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00143370);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001433F0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00143490);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001435A0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00143808);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001438F8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00143E1C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00143E38);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00143E94);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0014412C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001443A4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0014440C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00144494);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00144540);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001445D4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001446A0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00144778);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001447FC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00144864);
#else
INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001448F8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000ED5F4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000ED69C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000ED6C8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000ED79C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EDE48);
#endif

#if FW_VERSION == 282
void func_001448F8(s32 arg0) {
    func_00144924();
    func_00147548(arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EC978);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00144924);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001449CC);
#endif

#if FW_VERSION == 282
void func_001449CC(struct Unk_func_001449CC_0 *arg0) {
    struct Unk_func_001449CC_temp_s0 *temp_s0;

    temp_s0 = arg0->unk4;
    func_001494FC(temp_s0->unk3A74);
    temp_s0->unk3A74 = 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000ECA10);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000ECA88);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000ECE20);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000ED1B0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000ED4BC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000ED560);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EDA7C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EDB10);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EDE60);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EE4B0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EE510);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EE910);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EEB64);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EEC88);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EED0C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EEDA8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EF4D8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EF684_v100);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EF7BC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F0008);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F0420);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F04E8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F0588);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F0628);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F0B44);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F0C94);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F0F10);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001449F8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00144ACC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00145178);
#else
INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001454B4);
#endif

#if FW_VERSION == 282
void func_001454B4(void) {
    func_00147650();
}
#else
INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001454D0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EE1BC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EE2B0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EE338);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EE484);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EE5A4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EEC7C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EEECC);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000ED27C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EEFFC_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EF01C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EF2A8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EF394);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EF544);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EF6F0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000EF810);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F0218);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F025C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F02AC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F0320);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F033C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F03C4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F0460);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F04E0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F05A0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F05FC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F0738);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F0790);
#endif

#if FW_VERSION == 282
void func_001454D0(s32 arg0) {
    func_00147548(arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F0F90);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F0FCC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F1064);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F1120);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F135C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F1EC4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F2800);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F289C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F28FC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F307C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F34BC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F3534);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F3768);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F3C08);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F3D48);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F3EAC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F42B8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F4378);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F450C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F47C0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F4A50);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F4B78);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F4BEC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F4C20);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F4E50);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F514C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F5190);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F5210);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F5290);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F52F0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F5380);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F5420);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F548C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F54E4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F5548);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F562C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F56C8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F5748);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F57A4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F5BA4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F5BC8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F5E18);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F5E38);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F5F80);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F6018);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F6114);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F6208);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F62F8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F633C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F63B4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F6420);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F6464);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F64A0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F6580);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F70A4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F70DC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F711C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F7154);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F738C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F73B0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F7440);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F7484);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F76A8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F7908);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F7938);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F7CC4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F7D20);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F7E40);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F7EAC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F8B84);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F8E64);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F9020);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F9150);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F9294);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F9314);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F94C0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F9558);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F9650);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F97C0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F9B08);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F9C60);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FA42C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FA464);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FA4F4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FA9B8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FAE58);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FAF28);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FB080);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FB18C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FB2DC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FB354);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FB448);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FB580);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FB634);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FB71C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FB818);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FB850);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FB92C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FB974);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FBAE4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FC458);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FC920);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FC984);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FC9B4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FC9E4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FCB50);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FCC34);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FCE90);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FD074);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FDB20);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FDF20);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FE0E8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FE138);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FE518);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FE6C0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FEB9C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FF03C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000FF294);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001003B8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0010042C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001004B4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001005CC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00100620);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001006C0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0010082C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00100978);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00100A98);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00100B0C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00100C70);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00100D80);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001454EC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001455E0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00145668);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001457B4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001458D4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00145FAC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001461FC);

void func_0014632C(s32 arg0, s32 arg1, s32 arg2) {
    func_0014634C(arg0, arg1 & 0xFFFF, arg2 & 0xFFFF);
}

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0014634C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001465D8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001466C4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00146874);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00146A20);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00146B40);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00147548);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0014758C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001475DC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00147650);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0014766C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001476F4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00147790);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00147810);

void func_001478D0(struct Unk_func_001478D0_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk8;
    if (temp_v0 == 0) {

    } else {
        func_00148634(arg0->unkC, temp_v0);
        func_0014792C((s32) arg0, 0, 0, 0, 0, 0, 0);
    }
}

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0014792C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00147A68);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00147AC0);
#endif

INCLUDE_RODATA("nonmatchings/paf_13BBE8", D_001A0DAC);

INCLUDE_RODATA("nonmatchings/paf_13BBE8", D_001A0DE0);

INCLUDE_RODATA("nonmatchings/paf_13BBE8", D_001A0DEC);

INCLUDE_RODATA("nonmatchings/paf_13BBE8", D_001A0E20);

INCLUDE_RODATA("nonmatchings/paf_13BBE8", D_001A0E34);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_13BBE8", D_00122E3C);

INCLUDE_RODATA("nonmatchings/paf_13BBE8", D_00122E74);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_13BBE8", D_001354EC);

INCLUDE_RODATA("nonmatchings/paf_13BBE8", D_00135524);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_13BBE8", D_001A0F2C);

INCLUDE_RODATA("nonmatchings/paf_13BBE8", D_001A0F64);
#endif

INCLUDE_RODATA("nonmatchings/paf_13BBE8", D_001A0F78);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_13BBE8", D_00122EF8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_13BBE8", D_001355A8);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_13BBE8", D_001A0FE8);
#endif

INCLUDE_RODATA("nonmatchings/paf_13BBE8", D_001A100C);

INCLUDE_RODATA("nonmatchings/paf_13BBE8", D_001A1014);

INCLUDE_RODATA("nonmatchings/paf_13BBE8", D_001A1020);

INCLUDE_RODATA("nonmatchings/paf_13BBE8", D_001A102C);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F0CC0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F0D8C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F0D94);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F0D9C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F0DA4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F0DAC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F0DB4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F0DBC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F0DC4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F0DCC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F0DD4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F0DDC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F0DE4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F0DEC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F0EC0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F11D8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F1234);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F12EC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F1304);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F136C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F139C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F16DC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F1930);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F1CD8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F1EC0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F2020);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F21CC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F2224);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F2254);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F2308);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F2344);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F23CC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F23EC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F24AC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F24BC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F24CC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F24EC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F251C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F2550);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F25E4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F2630);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F266C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F2690);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F26B0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F2714);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F2738);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F27E4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F28DC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F29F4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F2B08);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F2BE0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F2CD0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F2CF0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F2D14);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F3000);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F305C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F3084);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F30B8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F312C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F314C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F3174);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F31B8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F3204);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F323C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F3270);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F32E4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F3338);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F33A0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F33DC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F34F0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F38AC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_000F39A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0010164C);

INCLUDE_RODATA("nonmatchings/paf_13BBE8", D_00135824);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0010168C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0010181C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00101838);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001019E0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00101F5C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00102058);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0010219C_v100);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001021DC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00102270);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001022D4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0010273C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00102B50_v100);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00103160);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00103404);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00103434);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001036EC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00103A08);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00103A6C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00103AE0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00103C6C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00103D38);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00103E90);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00103F00);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0010407C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001040B4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0010410C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00104150);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001041B0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00104200);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001042D0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0010434C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001043CC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00104414);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00104460);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001044F4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00104544);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00104660);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001047F8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001049F0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00104BEC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00104DA8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00104F6C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00104FB4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00105008);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00105570);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0010566C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001056C4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00105748);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001057F0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00105860);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001058D4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0010597C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00105A28);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00105AA8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00105B10_v100);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00105C48);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00105CF0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00105DE4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00105E60);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00106024);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001066C4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00106878);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00106A80);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00106BD8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00106DB8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00106F10);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00106FE4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0010702C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001070E8);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00107120);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001073F0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0010740C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00107498);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00107524);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00107528);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00107640);
#else
INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00147FF0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001480BC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001480C4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001480CC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001480D4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001480DC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001480E4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001480EC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001480F4);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001480FC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00148104);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0014810C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00148114);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0014811C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001481F0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00148508);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00148564);

s32 func_0014861C(struct Unk_func_0014861C_0 *arg0) {
    return (arg0->unk8 & 0xF) + arg0->unk6 + 9;
}

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00148634);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_0014869C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001486CC);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00148A0C);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00148C60);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00149008);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001491F0);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00149350);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_001494FC);

u16 func_00149554(struct Unk_func_00149554_0 *arg0) {
    u16 var_a1;
    struct Unk_func_00149554_temp_a0 *temp_a0;

    var_a1 = 0;
    if (arg0->unk4 != -1) {
        var_a1 = arg0->unk1CB8;
    } else {
        temp_a0 = arg0->unk0;
        if (temp_a0 != NULL) {
            var_a1 = temp_a0->unkE;
        }
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00149584);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00149638);

INCLUDE_ASM("nonmatchings/paf_13BBE8", func_00149674);
#endif
