/* cflags: -Os */
#include "common.h"
#include "netfront_decls.h"

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0005FFF8);

s32 func_00060220(void *arg0) {
    sceHVNetfront_Module_5D4D03A3(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x1C));
    return 7;
}

void func_00060244(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006024C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000602C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00060444);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00060464);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006049C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000604BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000604DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000604FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006053C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000605AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00060660);

s32 func_00060740(void *arg0, s32 arg1) {
    s32 *temp_v0;
    s32 var_a3;
    void *temp_v0_2;

    temp_v0 = func_00060660();
    if ((temp_v0 == NULL) || (var_a3 = 1, (*temp_v0 != arg1))) {
        func_000602C0(arg0, arg1, temp_v0);
        var_a3 = 0;
    } else {
        temp_v0_2 = M2C_FIELD(arg0, void **, 4);
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        M2C_FIELD(temp_v0_2, s32 *, 0x18) = (s32) (M2C_FIELD(temp_v0_2, s32 *, 0x18) + 1);
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) - 1);
    }
    return var_a3;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000607C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00060B4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00060DF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00061704);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00061770);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000619C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00061C88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00061D00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00061D8C);

void func_00061DF4(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00061DFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00061E54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00062024);

void func_00062194(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_v0 > 0) {
        temp_v0_2 = sceHVNetfront_Module_234F9191((s32) arg0, sceHVNetfront_Module_4681A961((s32) arg0, temp_v0 - 1));
        temp_a0 = temp_v0_2 + 0x10;
        temp_a2 = temp_a0;
        if (arg1 != 0) {
            func_0006FFA0(temp_a0, arg1 + 0x10, temp_a2);
        }
        M2C_FIELD(temp_v0_2, s32 *, 0x18) = (s32) (M2C_FIELD(temp_v0_2, s32 *, 0x18) | arg2);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00062214);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000635F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_AAF146AE);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00063780);

void func_00063870(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = -1;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = -1;
    func_000590D0((s32) arg0, arg1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_85311068);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00063904);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00063980);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_B3E4445A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_0E1F569F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_4E297BC5);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_62803759);

void func_00063AD0(void *arg0, s32 arg1) {
    if (arg1 < M2C_FIELD(arg0, s32 *, 8)) {
        func_000591DC(arg0, arg1);
    }
}

void func_00063AFC(void *arg0, s32 arg1, s32 *arg2) {
    if (arg1 < M2C_FIELD(arg0, s32 *, 8)) {
        func_000591B4(arg0, arg1);
        return;
    }
    *arg2 = 6;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00063B34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00063BD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00063CA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00063CF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00063D50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00063DD4);

s32 func_00063EF0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    void *temp_v0;

    temp_v0 = sceHVNetfront_Module_4E297BC5(arg1, arg2);
    if (M2C_FIELD(temp_v0, s32 *, 0) != 0xB) {
        sceHVNetfront_Module_62803759(arg1, arg2);
        return 1;
    }
    temp_s0 = M2C_FIELD(temp_v0, s32 *, 8);
    sceHVNetfront_Module_62803759(arg1, arg2);
    return func_00063DD4(arg0, temp_s0, arg1, arg2, arg3);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_DD454C67);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006410C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000641E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_A11D9FB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006447C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00064514);

void sceHVNetfront_Module_CF69A52B(void *arg0, s32 arg1) {
    void *sp0;
    func_00063AFC(arg0, arg1, &sp0);
    sceHVNetfront_Module_EAA204F0(&sp0);
}

s32 func_00064654(s32 arg0, M2C_UNK arg1) {
    s32 temp_s0;

    temp_s0 = sceHVNetfront_Module_57FC5C24(sceHVNetfront_Module_B3E4445A());
    sceHVNetfront_Module_0E1F569F(arg0, arg1);
    return temp_s0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000646A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00064810);

M2C_UNK *func_00064888(void) {
    return &D_0012435B;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00064894);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000648CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00122FB0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00123250);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00123260);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000649D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00064B70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00064C1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00064DE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00064E84);

void func_00065038(s32 arg0, s32 arg1) {
    func_0005EFBC(arg0, arg1, (s32) &D_001232E4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00065058);

s32 func_000651A8(void *arg0, s32 arg1) {
    return sceHVNetfront_Module_52564790(arg0, arg1) == (s32) &D_00123260;
}

void func_000651D4(s32 arg0) {
    func_00057FC8(arg0, (s32) &D_0012435B, 6, 7);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000651FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000653DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000653FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00065434);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00065480);

void func_00065790(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s1;

    temp_s1 = __builtin_allegrex_max(arg1, 0);
    func_0008C868(arg0, temp_s1, arg3);
    func_0008C868(arg0, arg2 - temp_s1, arg3);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000657F8);

M2C_UNK *func_000658EC(void) {
    return &D_00123DA2;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000658F8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_0012329C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001232E4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00123308);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000659D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00065B60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00065B88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00065C08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00065D4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00065E2C);

void func_00065FB0(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_7C762DEC(arg0, arg1, (s32) &D_00123344, 1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00065FD4);

void func_00066058(void) {
    func_00065FD4();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00066074);

void func_00066204(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00066074(arg0, arg1, arg2, arg3, 3);
}

void func_00066220(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00066074(arg0, arg1, arg2, arg3, 4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006623C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00066334);

void func_000664D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00066334(arg0, arg1, arg2, arg3, 5);
}

void func_000664F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00066334(arg0, arg1, arg2, arg3, 6);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00066510);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006660C);

void func_0006684C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0006660C(arg0, arg1, arg2, arg3, 0);
}

void func_00066868(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0006660C(arg0, arg1, arg2, arg3, 1);
}

void func_00066884(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0006660C(arg0, arg1, arg2, arg3, 2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000668A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000669FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00066F20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000671BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00067440);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00067774);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00067CB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00067E5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00068088);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00068288);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00068388);

void func_0006846C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00068388(arg0, arg1, arg2, arg3, 7);
}

void func_00068488(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00068388(arg0, arg1, arg2, arg3, 8);
}

void func_000684A4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00068388(arg0, arg1, arg2, arg3, 9);
}

void func_000684C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00068388(arg0, arg1, arg2, arg3, 0xA);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000684DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00123344);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006860C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00068630);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00068654);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00068678);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006869C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000686C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000686E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00068708);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006872C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00068750);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00068774);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00068798);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000687BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000687E0);

void func_00068950(s32 arg0, s32 arg1) {
    func_0005EFBC(arg0, arg1, (s32) &D_0012374C);
}

s32 func_00068970(void *arg0, s32 arg1) {
    return sceHVNetfront_Module_52564790(arg0, arg1) == (s32) &D_00123308;
}

void func_0006899C(s32 arg0) {
    func_00057FC8(arg0, (s32) &D_00123DA2, 6, 3);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000689C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00068B2C);

void func_00068BC0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x17C4) = 0;
}

void func_00068BC8(void) {
}

void func_00068BD0(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0xC0) = arg1;
}

void func_00068BDC(void *arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0xB) {
        sceHVNetfront_Module_03D34A77(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg1, s32 *, 8), 1);
    }
    M2C_FIELD(arg0, s32 *, 0xC8) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0xCC) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0xD0) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xD4) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
}

void sceHVNetfront_Module_2B314C92(void **arg0, void *arg1) {
    void *temp_v1;

    temp_v1 = *arg0;
    M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_FIELD(temp_v1, s32 *, 0xC8);
    M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(temp_v1, s32 *, 0xCC);
    M2C_FIELD(arg1, s32 *, 8) = (s32) M2C_FIELD(temp_v1, s32 *, 0xD0);
    M2C_FIELD(arg1, s32 *, 0xC) = (s32) M2C_FIELD(temp_v1, s32 *, 0xD4);
}

void func_00068C6C(void **arg0) {
    void *temp_s0;
    void *temp_s1;

    temp_s0 = *arg0;
    temp_s1 = temp_s0 + 0xC8;
    if (M2C_FIELD(temp_s0, s32 *, 0xC8) == 0xB) {
        sceHVNetfront_Module_03D34A77(M2C_FIELD(temp_s0, s32 *, 0), M2C_FIELD(temp_s1, s32 *, 8), -1);
    }
    sceHVNetfront_Module_F1423651(temp_s1);
    M2C_FIELD(temp_s0, s32 *, 0xC8) = 6;
}

void func_00068CC4(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x4C) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00068CD0);

void func_00068CDC(s32 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(((arg1 * 4) + *arg0), s32 *, 0x50) = arg2;
}

s32 func_00068CF0(s32 *arg0, s32 arg1) {
    return M2C_FIELD(((arg1 * 4) + *arg0), s32 *, 0x50);
}

void func_00068D04(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x78) = arg1;
}

void func_00068D10(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0xE0) = arg1;
}

s32 func_00068D1C(void *arg0) {
    return (u32) M2C_FIELD(arg0, u32 *, 0x4C) >= 2U;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_DAA2D2E2);

s32 func_00068D48(void *arg0) {
    return (u32) (M2C_FIELD(arg0, s32 *, 0xC0) - 6) < 2U;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00068D58);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_5D4D03A3);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_E653C40E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_9716DAAD);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00068E90);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_0012344C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_0012374C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00068FBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006909C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000690FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006915C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006919C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000691DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00069204);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006922C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00069270);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00069298);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000692C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000692E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00069310);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00069338);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00069360);

void func_00069388(void **arg0) {
    s32 **temp_v0;
    s32 temp_v0_2;
    void *temp_s0;
    void *temp_s1;

    temp_s0 = *arg0;
    temp_s1 = M2C_FIELD(temp_s0, void **, 0);
    M2C_FIELD(temp_s1, s32 *, 0x1800) = (s32) M2C_FIELD(temp_s0, s32 *, 0x34);
    if (M2C_FIELD(temp_s0, s32 *, 0x34) != 0) {
        temp_v0 = M2C_FIELD(temp_s0, s32 ***, 0x38);
        if (temp_v0 != NULL) {
            temp_v0_2 = func_0005FF78(temp_v0);
            M2C_FIELD(temp_s1, s32 *, 0x17EC) = temp_v0_2;
            sceHVNetfront_Module_1A741A10(temp_v0_2, M2C_FIELD(temp_s0, s32 *, 0x40), temp_s1 + 0x17F0);
        }
    }
}

void func_000693F0(void **arg0) {
    void *temp_s0;
    void *temp_v1;

    temp_s0 = *arg0;
    temp_v1 = M2C_FIELD(temp_s0, void **, 0);
    M2C_FIELD(temp_v1, s32 *, 0x1800) = 0;
    if ((M2C_FIELD(temp_s0, s32 *, 0x34) != 0) && (M2C_FIELD(temp_s0, s32 ***, 0x38) != NULL)) {
        sceHVNetfront_Module_40EFD93B(M2C_FIELD(temp_v1, s32 *, 0x17EC), temp_v1 + 0x17F0);
        sceHVNetfront_Module_B29BE9CE(M2C_FIELD(temp_s0, s32 ***, 0x38));
    }
}

void func_00069440(void *arg0, void **arg1, s32 arg2) {
    if (arg1 != NULL) {
        M2C_FIELD(*arg1, s32 *, 0xEC) = arg2;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x17C4) = arg2;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006945C);

s32 sceHVNetfront_Module_1E850C3D(s32 **arg0) {
    return sceHVNetfront_Module_896E55F6(arg0) + 8;
}

s32 func_00069488(s32 **arg0) {
    return sceHVNetfront_Module_896E55F6(arg0) + 0xA0;
}

s32 func_000694A8(s32 **arg0) {
    return sceHVNetfront_Module_896E55F6(arg0) + 8;
}

s32 func_000694C8(s32 **arg0) {
    return sceHVNetfront_Module_896E55F6(arg0) + 0x88;
}

void func_000694E8(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_s2;

    var_s2 = 0;
    var_a0 = M2C_FIELD(arg0, s32 *, 0x17C4);
    if ((var_a0 != arg1) & (var_a0 != 0)) {
        do {
            var_s2 = var_a0;
            temp_v0 = func_0006945C(arg0, var_s2);
            var_a0 = temp_v0;
        } while ((temp_v0 != arg1) & (var_a0 != 0));
    }
    func_00069440(arg0, (void **) var_s2, func_0006945C(arg0, arg1));
}

s32 func_00069580(s32 arg0, void *arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (M2C_FIELD(arg1, s32 *, 0x44) > 0xF4240) {
        M2C_FIELD(arg1, s32 *, 0x44) = 0;
        sceHVNetfront_Module_5D4D03A3(arg0);
        var_v1 = 1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_FF74C8F7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_EAB56A29);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00069800);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00069838);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_4AE4E3A7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006991C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00069998);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00069A48);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00069A94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00069AE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00069B14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_3AB64B09);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_1666F7FB);

void sceHVNetfront_Module_0ABF34A9(void **arg0) {
    void *temp_s0;
    void *temp_s1;

    func_00069838();
    temp_s1 = *arg0;
    temp_s0 = temp_s1 + 8;
    func_00063B34(temp_s0, 0);
    func_000590E8(temp_s0);
    sceHVNetfront_Module_2A34EDF3(temp_s1 + 0xA0);
    M2C_FIELD(temp_s1, s32 *, 0x4C) = 0;
}

s32 sceHVNetfront_Module_E5F5CA1A(s32 **arg0, s32 arg1, s32 arg2) {
    if (func_00055D80((void ***) arg0, arg1, arg2, sceHVNetfront_Module_896E55F6(arg0) + 8) == 0) {
        sceHVNetfront_Module_B29BE9CE(arg0);
        sceHVNetfront_Module_3AB64B09(arg0);
        return 0;
    }
    sceHVNetfront_Module_B29BE9CE(arg0);
    return 1;
}

s32 func_00069D78(void *arg0, s32 arg1) {
    if (arg1 != -1) {
        if (arg1 < M2C_FIELD(arg0, s32 *, 0x40)) {
            M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) + 1);
        }
        M2C_FIELD(arg0, s32 *, 0x40) = arg1;
    }
    return arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00069DAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00069DD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00069F34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006A0A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006A1F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006A2FC);

void func_0006A3FC(s32 arg0, void *arg1, s32 arg2, s32 arg3) {
    if (sceHVNetfront_Module_350ABDEC(arg1 + 0x88, arg1 + 8) == -1) {
        sceHVNetfront_Module_5D4D03A3(arg0);
        return;
    }
    M2C_FIELD(arg1, s32 *, 0x4C) = 3;
    M2C_FIELD(arg1, s32 *, 0x50) = arg2;
    M2C_FIELD(arg1, s32 *, 0x54) = arg3;
    M2C_FIELD(arg1, s32 *, 0x58) = 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006A480);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006A568);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006A5E4);

void func_0006A5F4(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s2;
    void *temp_s4;

    temp_s4 = arg1 + 8;
    temp_s0 = M2C_FIELD(temp_s4, s32 *, 8);
    temp_s2 = temp_s0 - 2;
    temp_s0_2 = temp_s0 - 1;
    temp_s1 = sceHVNetfront_Module_4E297BC5((s32) temp_s4, temp_s2);
    temp_s1_2 = func_0007200C(temp_s1, sceHVNetfront_Module_4E297BC5((s32) temp_s4, temp_s0_2), 0);
    sceHVNetfront_Module_62803759((s32) temp_s4, temp_s2);
    sceHVNetfront_Module_62803759((s32) temp_s4, temp_s0_2);
    if (temp_s1_2 != 0) {
        func_00069DAC(arg0, arg1, arg2, 0);
        func_00063B34(temp_s4, 0);
        return;
    }
    func_0006A5E4(arg0, arg1);
    func_00063CF4((s32) temp_s4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006A6E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006A838);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006A88C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006AB00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006ABA8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006ABDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006AD30);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006B284);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006B5A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006B698);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006B824);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006BA5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006BB80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_A5E9E8F5);

s32 func_0006C624(s32 **arg0, s32 arg1) {
    s32 temp_s1;
    s32 temp_v0_2;
    void *temp_s0;
    void *temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    temp_s1 = temp_v0 + 8;
    temp_s0 = temp_v0 + 0x88;
    if (M2C_FIELD(temp_v0, s32 *, 0x9C) < 0x401) {
        temp_v0_2 = sceHVNetfront_Module_350ABDEC((s32) temp_s0, temp_s1);
        if (temp_v0_2 >= 0) {
            sceHVNetfront_Module_1A02495A(sceHVNetfront_Module_234F9191((s32) temp_s0, sceHVNetfront_Module_4681A961((s32) temp_s0, temp_v0_2)), temp_s1, 0x1C);
            sceHVNetfront_Module_1A02495A(temp_s1, arg1, 0x80);
            sceHVNetfront_Module_B29BE9CE(arg0);
            return 1;
        }
    }
    sceHVNetfront_Module_B29BE9CE(arg0);
    sceHVNetfront_Module_5D4D03A3((s32) arg0);
    return 0;
}

void func_0006C6EC(s32 arg0, s32 *arg1) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = arg0 + 0x88;
    temp_v0 = *arg1;
    if (temp_v0 > 0) {
        sceHVNetfront_Module_1A02495A(arg0 + 8, sceHVNetfront_Module_234F9191(temp_s0, sceHVNetfront_Module_4681A961(temp_s0, temp_v0 - 1)), 0x80);
        sceHVNetfront_Module_C0A215A2((void *) temp_s0);
    }
    *arg1 -= 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006C76C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006C884);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006C964);

void func_0006CDEC(s32 **arg0) {
    func_0006C884(arg0, sceHVNetfront_Module_896E55F6(arg0), 3);
    sceHVNetfront_Module_B29BE9CE(arg0);
}

void func_0006CE28(s32 **arg0, void *arg1) {
    void *temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    func_00068BDC(temp_v0, arg1);
    func_0006C964(arg0, temp_v0, 3);
    sceHVNetfront_Module_B29BE9CE(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_88A1BF4E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_C6EE5561);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_9D1EA353);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_EDDF1A9E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_CC137D18);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006CF78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_320FE336);

s32 func_0006CFC4(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = sceHVNetfront_Module_ABAE54FF(arg1, arg2);
    if (temp_v0 == 0) {
        sceHVNetfront_Module_5D4D03A3(arg0);
        return 0;
    }
    sceHVNetfront_Module_9D1EA353(arg0, temp_v0);
    return 1;
}

void sceHVNetfront_Module_B7DF3AB0(void **arg0) {
    void *temp_v1;

    temp_v1 = *arg0;
    M2C_FIELD(temp_v1, s32 *, 0x48) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x48) | 1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006D030);

void func_0006D0F0(void **arg0) {
    void *temp_s0;
    void *temp_s1;

    temp_s0 = *arg0;
    temp_s1 = temp_s0 + 0x88;
    func_00068B2C(M2C_FIELD(temp_s0, s32 *, 0), sceHVNetfront_Module_234F9191((s32) temp_s1, sceHVNetfront_Module_4681A961((s32) temp_s1, M2C_FIELD(temp_s0, s32 *, 0x9C) - 1)));
    sceHVNetfront_Module_C0A215A2(temp_s1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006D14C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006D1EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006D328);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006D4B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006D554);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006D58C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006D684);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006D710);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006D9D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006DB50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006DED8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006DFBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006E0C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006E0DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006E258);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006E464);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006E508);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006E838);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006EAFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006ED84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006EE70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006F020);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006F210);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00123D58);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00123D8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00123D9C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00123DB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00123DDC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00123E10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00123E74);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00123E80);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00123EB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00123EF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00123EF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00123EF8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00123F14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00123F3C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00123F70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00123F9C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00123FDC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124004);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_0012405C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_0012406C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001240A8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001240C8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124160);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_0012416C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124190);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001241DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124258);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001242C0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001242D0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001242DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124304);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_0012430C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124348);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_0012436C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001243A8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001243AC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001243B0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001243B4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001243B8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001243BC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001243C0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001243C4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001243C8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001243CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001243D0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001243D4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001243D8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001243DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001243E0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001243E4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001243E8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001243EC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001243F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001243F4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001243F8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001243FC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124400);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124404);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006F290);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006F2F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006F4E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006F7A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006F9A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006F9DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006FB88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006FBD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006FDBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006FFA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0006FFF0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00070038);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000700EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00070240);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000702A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00070324);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007040C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00070518);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00070580);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00070604);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000706E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_AAFCCCFA);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000708C8);

void func_00070A04(void) {
    sceHVNetfront_Module_AAFCCCFA();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00070A20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00070A40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00070ACC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00070B50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00070D38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_EAA204F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_57FC5C24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00070F84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_D80A1B5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_EE86317E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_F6604D0C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_6FC750A2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_F1423651);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00071210);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007132C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00071498);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007163C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00071A04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00071E00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007200C);

void func_000721B8(s32 arg0, s32 arg1, void *arg2) {
    s32 temp_v0;

    temp_v0 = func_0007200C(arg0, arg1, 0) == 0;
    M2C_FIELD(arg2, s32 *, 4) = temp_v0;
    M2C_FIELD(arg2, s32 *, 0) = 8;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000721F0);

void func_000723AC(s32 arg0, s32 arg1, s32 arg2, void *arg3) {
    func_000721F0(arg0, arg1, arg2);
    M2C_FIELD(arg3, s32 *, 4) = (s32) (M2C_FIELD(arg3, s32 *, 4) == 0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000723DC);

void func_00072570(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_000723DC(arg0, arg1, arg2, arg3, arg4);
    if (M2C_FIELD(arg4, s32 *, 0) == 6) {
        M2C_FIELD(arg4, s32 *, 0) = 8;
        M2C_FIELD(arg4, s32 *, 4) = 0;
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000725AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000725F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007264C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00072698);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00072704);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00072770);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00072834);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007289C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00072904);

void func_0007296C(void) {
    func_0007040C();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00072988);

void func_00072A58(s32 arg0, void *arg1) {
    s32 temp_v0;

    temp_v0 = sceHVNetfront_Module_EAA204F0(arg0) == 0;
    M2C_FIELD(arg1, s32 *, 4) = temp_v0;
    M2C_FIELD(arg1, s32 *, 0) = 8;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00072A8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00072AC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00072ACC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00072B20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00072C58);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00072E94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00072F60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000730F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000731B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00073224);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00073328);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00073388);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000733E4);

M2C_UNK *func_0007355C(void) {
    return &D_00123D9C;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00073568);

s32 func_0007368C(void *arg0, s32 arg1) {
    return sceHVNetfront_Module_52564790(arg0, arg1) == (s32) &D_00124928;
}

void func_000736B8(s32 arg0) {
    func_00057FC8(arg0, (s32) &D_00123D9C, 5, 2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000736E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00073950);

void func_00073CC0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_00073950(arg0, arg3, arg4, arg5, arg1, arg2 - arg4, 1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00073CF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00073D68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00073DD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00073EB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00073F84);

void func_00074098(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2, void *arg3) {
    if (func_00068CF0(arg0, 0) == 0) {
        func_00063B34(arg3, 0);
    }
    func_00074358(arg0, arg1, arg2, arg3);
}

void func_0007410C(s32 *arg0, s32 arg1, s32 arg2, void *arg3) {
    func_00074098(arg0, arg1, arg2, arg3);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00074128);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00074200);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124874);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124878);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_0012487C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124880);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124884);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124888);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_0012488C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124890);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124894);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124898);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_0012489C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001248A0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001248A4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001248A8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001248AC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001248B0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001248B4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001248B8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001248BC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001248C0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001248C4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001248C8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001248CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001248D0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001248D4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001248D8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001248DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001248E0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001248E4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001248E8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001248EC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001248F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001248F4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001248F8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001248FC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124900);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124904);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124908);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_0012490C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124910);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124914);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124918);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_0012491C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124920);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124924);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124928);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00074358);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000746CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00074788);

void func_0007481C(s32 arg0, M2C_UNK arg1) {
    s32 temp_v0;

    temp_v0 = func_00073388();
    if ((func_00073CF8(arg0, arg1, 0, temp_v0) != 0) && (func_000736E0(arg0, arg1, 0, temp_v0) != 0) && (func_00073D68(arg0, arg1, 0, temp_v0) != 0)) {
        sceHVNetfront_Module_C6EE5561(arg0, arg1);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000748B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000749E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00074BA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00074C50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00074DEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000750DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00075398);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000754B8);

void func_000755BC(s32 arg0, s32 arg1) {
    func_0005EFBC(arg0, arg1, (s32) &D_00124A84);
}

M2C_UNK *func_000755DC(void) {
    return &D_00123DA9;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000755E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000756A8);

void func_0007573C(s32 **arg0, s32 arg1) {
    void *sp0;
    void *temp_s1;

    temp_s1 = **arg0;
    if (func_000758B0(temp_s1, arg1) == 0) {
        func_0006922C(arg0, arg1);
        return;
    }
    sceHVNetfront_Module_1CC15992(temp_s1, arg1, &sp0);
    func_0006CE28(arg0, &sp0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000757B8);

void func_00075890(s32 arg0, s32 arg1) {
    func_0005EFBC(arg0, arg1, (s32) &D_00124B10);
}

s32 func_000758B0(void *arg0, s32 arg1) {
    return sceHVNetfront_Module_52564790(arg0, arg1) == (s32) &D_00124AA8;
}

void func_000758DC(s32 arg0) {
    func_00057FC8(arg0, (s32) &D_00123DA9, 7, 4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00075904);

s32 func_000759A8(void **arg0) {
    sceHVNetfront_Module_9716DAAD(M2C_FIELD(*arg0, void ****, 0x1C), 4);
    return 6;
}

s32 func_000759D0(void **arg0) {
    sceHVNetfront_Module_5D4D03A3(M2C_FIELD(*arg0, s32 *, 0x1C));
    return 7;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000759F4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124964);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124A84);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124AA8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124AE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124B10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124B34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124BB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124BBC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124BC8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124BD4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124BDC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124BE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124BE8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124BF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124BFC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124C04);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124C0C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124C14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124C1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124C2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124C40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124C4C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124C54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124C60);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124C68);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124C70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124C78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124CCC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124CD4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124CDC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124CE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124CF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124CF8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124D00);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124D04);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124D0C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124D14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124D1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124D20);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124D2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124D30);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124D34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124D40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124D44);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124D4C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124D54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124D5C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124D64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124D6C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124D70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124D78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124D7C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124D84);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124D8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124D94);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124E08);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124E28);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124EA8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124EDC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124EE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124EE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124EE8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124EEC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124EF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124EF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124EF8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124EFC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F00);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F04);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F08);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F0C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F18);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F20);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F28);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F30);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F3C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F44);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F58);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F5C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F60);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F68);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F6C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F74);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F7C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F84);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F88);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F90);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F94);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F98);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124F9C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124FA0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124FA4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124FA8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124FAC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124FB0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124FB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124FC0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124FC8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124FD0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124FD8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124FE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124FE8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124FF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00124FF8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125000);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125008);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125010);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_0012501C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125020);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125028);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125030);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125038);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125040);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125048);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125050);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125058);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125060);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125064);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125068);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_0012506C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125074);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125080);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125088);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125090);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_0012509C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001251E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00075B58);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00075E60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00075F5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00076208);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000763B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000767C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00076890);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_0012541C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00076A2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00076C70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00076F60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00076FE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00077048);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00077108);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000771A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000771AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00077270);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000773F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00077510);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00077618);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00077670);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000776CC);

void func_00077734(void *arg0) {
    s32 var_a1;

    func_00077670();
    if (func_000777E0(arg0) == 0) {
        if (M2C_FIELD(arg0, s32 *, 0xC) & 2) {
            var_a1 = func_00077618(arg0);
        } else {
            var_a1 = func_00077510(arg0);
        }
        if ((var_a1 != 0x7FFFFFFF) && (M2C_FIELD(arg0, s32 *, 0x10) == 0)) {
            func_000776CC(arg0, var_a1);
        }
    }
}

void func_000777B8(void) {
    func_00077818();
}

s32 func_000777D4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC) & 0x1C;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000777E0);

s32 func_000777EC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC) & 0x60;
}

void func_000777F8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) | 2);
}

void func_00077808(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = __builtin_allegrex_ins(M2C_FIELD(arg0, s32 *, 0xC), 0, 1, 1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00077818);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007787C);

void func_000778A0(void *arg0) {
    func_00077670();
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) | 1);
}

s32 func_000778D0(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    return temp_v0;
}

s32 func_000778DC(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
    return temp_v0;
}

s32 func_000778E8(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000778F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000779F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00077A4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00077AE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00077B44);

void func_00077BF4(s32 arg0) {
    func_00077670();
    func_00077270(arg0, 3, 0, 0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00077C2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00077E00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00077EA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00077EEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00078074);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000782DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00078980);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00078DC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00079794);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007980C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00079980);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00079B2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00079CE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00079E74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00079F60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007A1E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007AC60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007AFA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007B340);

void func_0007B37C(void) {
}

void func_0007B384(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_a1;

    temp_a1 = (arg1 * 4) + arg0;
    M2C_FIELD(temp_a1, s32 *, 0x10) = arg2;
    M2C_FIELD(temp_a1, s32 *, 0x18) = arg3;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007B398);

void func_0007B3B4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_a1;

    temp_a1 = (arg1 * 4) + arg0;
    M2C_FIELD(temp_a1, s32 *, 0x20) = arg2;
    M2C_FIELD(temp_a1, s32 *, 0x28) = arg3;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007B3C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007B3E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007B4E4);

void func_0007B544(s32 *arg0, s32 *arg1) {
    func_0007B4E4(*arg0, *arg1);
}

void func_0007B564(s32 *arg0, s32 *arg1) {
    func_0007B4E4(*arg0 + 0xC, *arg1 + 0xC);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007B58C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007B5D0);

s32 func_0007B72C(s32 arg0, M2C_UNK arg1) {
    return sceHVNetfront_Module_440B8F87(arg0, __builtin_allegrex_ins(arg1, 0, 0x16, 0xA) * 4, 0) + M2C_FIELD(arg0, s16 *, 0x10);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007B764);

s32 func_0007B790(s32 *arg0) {
    return *arg0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007B798);

void func_0007B7B4(void) {
    func_0007B58C();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007B7D0);

s32 func_0007B7F4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007B7FC);

void func_0007B818(s32 arg0) {
    sceHVNetfront_Module_AFCC3786(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007B834);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007B840);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007B874);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007B8D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007B9AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007BAC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007BB44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007BC24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007BDBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007BEA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007BF0C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007C340);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007C39C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007C3F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007C450);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007C4B8);

void func_0007C520(s32 arg0) {
    sceHVNetfront_Module_D611E938(arg0, 0, 0x44);
    sceHVNetfront_Module_A2F4AC9E(arg0);
}

s32 func_0007C554(s32 arg0, M2C_UNK arg1) {
    s32 var_a1;
    u16 temp_v1;
    void *temp_v0;

    var_a1 = 0;
    temp_v0 = sceHVNetfront_Module_234F9191(arg0, __builtin_allegrex_ins(arg1, 0, 0x16, 0xA) * 4) + M2C_FIELD(arg0, s16 *, 0x10);
    temp_v1 = M2C_FIELD(temp_v0, u16 *, 2);
    M2C_FIELD(temp_v0, u16 *, 2) = __builtin_allegrex_ins(temp_v1 | 0x300, 0, 0xA, 1);
    if (!(temp_v1 & 0x100)) {
        var_a1 = 1;
        M2C_FIELD(arg0, s32 *, 0x16C) = (s32) (M2C_FIELD(arg0, s32 *, 0x16C) - 1);
    }
    return var_a1;
}

s32 func_0007C5B8(s32 arg0, M2C_UNK arg1) {
    s32 var_a1;
    u16 temp_v1;
    void *temp_v0;

    var_a1 = 0;
    temp_v0 = sceHVNetfront_Module_234F9191(arg0, __builtin_allegrex_ins(arg1, 0, 0x16, 0xA) * 4) + M2C_FIELD(arg0, s16 *, 0x10);
    temp_v1 = M2C_FIELD(temp_v0, u16 *, 2);
    M2C_FIELD(temp_v0, u16 *, 2) = __builtin_allegrex_ins(temp_v1 | 0x200, 0, 0xA, 1);
    if (!(temp_v1 & 0x200)) {
        var_a1 = 1;
        M2C_FIELD(arg0, s32 *, 0x16C) = (s32) (M2C_FIELD(arg0, s32 *, 0x16C) - 1);
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007C61C);

s32 func_0007C66C(s32 arg0, s32 arg1) {
    u16 temp_v1;
    void *temp_a0;

    temp_a0 = sceHVNetfront_Module_234F9191(arg0, __builtin_allegrex_ins(arg1, 0, 0x16, 0xA) * 4) + M2C_FIELD(arg0, s16 *, 0x10);
    temp_v1 = M2C_FIELD(temp_a0, u16 *, 2);
    M2C_FIELD(temp_a0, u16 *, 2) = (u16) (temp_v1 | 0x800);
    s32 cmp_tmp = temp_v1 & 0x800;
    return cmp_tmp == 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007C6B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007C710);

void func_0007C768(s32 arg0, M2C_UNK arg1) {
    void *temp_v0;

    temp_v0 = sceHVNetfront_Module_234F9191(arg0, __builtin_allegrex_ins(arg1, 0, 0x16, 0xA) * 4) + M2C_FIELD(arg0, s16 *, 0x10);
    M2C_FIELD(temp_v0, u16 *, 2) = __builtin_allegrex_ins(M2C_FIELD(temp_v0, u16 *, 2), 0, 0xA, 1);
}

void func_0007C7A8(s32 arg0, M2C_UNK arg1) {
    void *temp_v0;

    temp_v0 = sceHVNetfront_Module_234F9191(arg0, __builtin_allegrex_ins(arg1, 0, 0x16, 0xA) * 4) + M2C_FIELD(arg0, s16 *, 0x10);
    M2C_FIELD(temp_v0, u16 *, 2) = __builtin_allegrex_ins(M2C_FIELD(temp_v0, u16 *, 2), 0, 0xB, 1);
}

s32 func_0007C7E8(s32 arg0, M2C_UNK arg1, s32 arg2) {
    return M2C_FIELD(((arg2 * 0x10) + (sceHVNetfront_Module_234F9191(arg0, __builtin_allegrex_ins(arg1, 0, 0x16, 0xA) * 4) + M2C_FIELD(arg0, s16 *, 0x10))), s32 *, 8);
}

s32 func_0007C834(s32 arg0, M2C_UNK arg1, s32 arg2) {
    return M2C_FIELD(((arg2 * 0x10) + (sceHVNetfront_Module_234F9191(arg0, __builtin_allegrex_ins(arg1, 0, 0x16, 0xA) * 4) + M2C_FIELD(arg0, s16 *, 0x10))), s32 *, 0xC);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007C880);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007C970);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007CA48);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007CB90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007CC90);

void func_0007CD84(s32 arg0, M2C_UNK arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_s0;

    temp_s0 = sceHVNetfront_Module_234F9191(arg0, __builtin_allegrex_ins(arg1, 0, 0x16, 0xA) * 4) + M2C_FIELD(arg0, s16 *, 0x10);
    temp_v0 = M2C_FIELD(temp_s0, s32 *, 0);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_88977645(temp_v0, -1);
    }
    temp_v0_2 = M2C_FIELD(temp_s0, s32 *, 0x10);
    if (temp_v0_2 != 0) {
        sceHVNetfront_Module_88977645(temp_v0_2, -1);
    }
    sceHVNetfront_Module_D611E938((s32) temp_s0, 0, 0x20);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007CDF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007CF2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007D01C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007D0E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007D178);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007D20C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007D268);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007D2C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007D3F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007D4D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007D5B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007D810);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007DB24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007DCA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007DD88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007DEE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007E314);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007E500);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007E604);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007E644);

void func_0007E684(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 var_s1;

    var_s1 = arg1;
    if (arg1 != 0) {
        do {
            temp_s0 = func_0007E604(arg0, var_s1);
            func_0007D268(arg0, var_s1, 0x1000);
            func_0007D4D4(arg0, var_s1);
            var_s1 = temp_s0;
        } while (temp_s0 != 0);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007E6F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007E788);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007E8AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007E9D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007EB24);

void func_0007ECF4(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0x188) = arg1;
    M2C_FIELD(arg0, s32 *, 0x18C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x190) = arg3;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007ED04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007EE84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007EF24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007F0CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007F168);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007F2C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007F344);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007F58C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007F79C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007F81C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007FAA8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007FAF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007FC20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007FD1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007FE60);

s32 func_0007FF80(s32 arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4) {
    s32 var_a1;

    var_a1 = 0;
    if (M2C_FIELD(arg2, s32 *, 0) == 2) {
        var_a1 = func_0007FFC8(arg0, M2C_FIELD(arg2, s32 *, 8), arg1, M2C_FIELD(arg2, s32 *, 0xC), arg3, arg4);
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0007FFC8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000800D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0008011C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00080350);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000805C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000805E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00080628);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00080750);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00080C70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00080CA8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00080D28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00080E14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00080E80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00080EFC);

void func_00081540(void **arg0, s32 arg1) {
    void *temp_s0;

    temp_s0 = *arg0;
    sceHVNetfront_Module_A2F4AC9E(arg1);
    M2C_FIELD(temp_s0, s32 *, 0x184) = 0;
}

void func_0008156C(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void **, s32), 0xC) = func_00081540;
    M2C_FIELD(arg1, M2C_UNK **, 4) = &func_00080E80;
    M2C_FIELD(arg1, M2C_UNK **, 8) = &func_00080EFC;
    M2C_FIELD(arg1, s32 *, 0) = arg0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00081598);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0008160C);

void sceHVNetfront_Module_D2270E78(void) {
    func_00082D48(1);
}

void sceHVNetfront_Module_5EEBE755(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_80631855);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_57FDE0C7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_F4EA7F0A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00081844);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_84AF80AA);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_5BA9037D);

void sceHVNetfront_Module_90A5AF9D(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_5BA9037D(arg0, arg1, sceHVNetfront_Module_15875ED4(arg1));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0008194C);

void func_00081974(s32 arg0, s32 *arg1) {
    s32 temp_s1;

    temp_s1 = *arg1;
    sceHVNetfront_Module_5BA9037D(arg0, temp_s1, sceHVNetfront_Module_3EDA77E7((s32) arg1));
}

void func_000819B8(s32 arg0, void **arg1) {
    void *temp_a1;

    temp_a1 = *arg1;
    sceHVNetfront_Module_5BA9037D(arg0, (s32) (temp_a1 + 0xC), M2C_FIELD(temp_a1, s32 *, 4));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000819DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00081A88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00081B14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00081C34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00081D50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_389E8450);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00081F90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00081FFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0008201C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00082038);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00082054);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00082070);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0008208C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000820A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000820C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000820E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000820FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00082118);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00082134);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00082150);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0008216C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00082188);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000821A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000821C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000821DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000821FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0008221C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0008223C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0008225C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0008227C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0008229C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000822BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000822DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000822FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0008231C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0008233C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0008235C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0008237C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00082398);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000823B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000823D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000823EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00082408);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00082424);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00082440);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0008245C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00082480);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0008249C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000824B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000824D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000824F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00082510);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00082534);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00082558);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0008257C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00082598);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000825BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000825E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00082604);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00082628);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0008264C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00082670);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00082694);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000826B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000826CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000827C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_5D1D77DA);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_1A02495A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_4EAC15D5);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_D611E938);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00082C7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00082CF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00082D48);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_9ED6914E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00082E74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00082E94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00082ECC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00082F4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00082FB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0008303C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000830C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_A7EB7C24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000831F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0008329C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_10AE4328);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000833BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0008347C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00083524);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_04911EC3);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00083698);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_2ED8B315);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000837C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00083888);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_38C38C7D);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000839A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00083A68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_0CC5AB29);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_9A925AD1);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00083C10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_484C100A);

s32 sceHVNetfront_Module_59F62E22(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a6;
    s32 temp_a7;
    s32 temp_s0;
    s32 temp_v0;
    s32 var_a1;
    s32 var_a2;

    temp_v0 = func_000826CC(M2C_FIELD(arg0, s32 *, 0), arg1, M2C_FIELD(arg0, s32 *, 4));
    temp_a7 = M2C_FIELD(arg0, s32 *, 0);
    temp_a6 = M2C_FIELD(arg0, s32 *, 4);
    temp_s0 = temp_v0 != 0;
    var_a1 = temp_v0;
    var_a2 = temp_a6 - (temp_v0 - temp_a7);
    if (temp_v0 == 0) {
        var_a1 = temp_a7 + temp_a6;
        var_a2 = 0;
    }
    func_0008329C((s32) arg0, var_a1, var_a2, temp_s0, 1, arg2);
    return temp_s0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00083F84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_AEF9D476);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_28FDE037);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_2CA48B51);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00084188);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000841BC);

s32 sceHVNetfront_Module_39D070F1(u8 *arg0, s32 arg1) {
    s32 var_a1;
    s32 var_a2;
    u8 *var_a3;

    var_a1 = arg1;
    var_a3 = arg0;
    var_a2 = 0;
    if (var_a1 > 0) {
        do {
            var_a2 += (var_a2 ^ (var_a2 >> 1)) + (*var_a3 * 0x4CB2F);
            if (var_a2 > 0x1ECA9D3A) {
                do {
                    var_a2 += 0xE13562C5;
                } while (var_a2 > 0x1ECA9D3A);
            }
            var_a1 -= 1;
            var_a3 += 1;
        } while (var_a1 > 0);
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000842BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_559D9F24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000843BC);

void sceHVNetfront_Module_46A9D965(s32 arg0, M2C_UNK arg1, s32 arg2) {
    sceHVNetfront_Module_42E27595(arg0, arg1, arg2, sceHVNetfront_Module_15875ED4(arg2));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_42E27595);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_65813EA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_D1EF37CB);

void func_00084590(s32 arg0, M2C_UNK arg1, s32 arg2) {
    sceHVNetfront_Module_A02BB72A(arg0, arg1, arg2, sceHVNetfront_Module_15875ED4(arg2));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_A02BB72A);

void sceHVNetfront_Module_46EE5586(void *arg0, s32 arg1, s32 arg2) {
    sceHVNetfront_Module_5DBB6513(arg0, arg1, arg2, sceHVNetfront_Module_15875ED4(arg2));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_5DBB6513);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_81D4F0FE);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_9DAD41C2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_C45C352C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_15875ED4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_BB5E8F0E);

s32 sceHVNetfront_Module_56988A48(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_BB5E8F0E(arg0 + sceHVNetfront_Module_15875ED4(arg0), arg1);
    return arg0;
}

s32 func_00084D58(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    sceHVNetfront_Module_C412B8FC(arg0 + sceHVNetfront_Module_15875ED4(arg0), arg1, arg2);
    return arg0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_C412B8FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00084E1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00084E44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_9D38B11B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00084F40);

s32 func_00084FDC(s32 arg0) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 - 0x16E) >= 0) {
        var_v0 = ((arg0 - 0x16E) / 365) + 1;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00085014);

s32 func_00085158(s32 arg0) {
    s32 temp_s0;
    s32 temp_v1;

    temp_v1 = arg0 - 0x2ACD;
    if (temp_v1 >= 0) {
        return (((arg0 - 0x2ACD) / 146097) * 0x190) + func_00085014((arg0 - 0x2ACD) % 146097) + 0x7D0;
    }
    temp_s0 = (~temp_v1 / 146097) + 1;
    return (func_00085014(temp_v1 + (temp_s0 * 0x23AB1)) - (temp_s0 * 0x190)) + 0x7D0;
}

s32 func_00085208(s32 arg0) {
    s32 var_a3;

    var_a3 = 0;
    if (!(arg0 & 3) && ((arg0 != ((arg0 / 100) * 0x64)) || (arg0 == ((arg0 / 400) * 0x190)))) {
        var_a3 = 1;
    }
    return var_a3;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00085268);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000852F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00085320);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000853A8);

void sceHVNetfront_Module_6448C9FD(void) {
    func_000F151C();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00085500);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_C9903493);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00085724);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00085ADC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_2CEB5C59);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_D09FD444);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_001254F4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125504);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_0012552C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125554);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125568);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_0012557C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_0012597C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125A7C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125B7C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125BDC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125BE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125BEC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125BF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125C00);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125C0C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125C14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125C20);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125C2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125C38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125C40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125C4C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125C54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125C5C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125C64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125C68);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125C70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125C78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125C84);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125C8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125C90);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125C94);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125C98);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125C9C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125CA0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125CA4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125CA8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125CAC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125CB0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125CB4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125CB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125CBC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125CC0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125CC8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125CCC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125CD4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125CD8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125CE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125CE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125CEC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125ECC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125ED4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125EDC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125EE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125EF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125EFC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125F04);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125F10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125F2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125F34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125F40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125F48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125F50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125F54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125F5C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125F64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125F6C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125F78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125F80);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125F8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", D_00125F98);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00085C54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_17AD2C3F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_73C70CE6);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_2E5A2E51);

s32 func_000867F4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8) == 0;
}

s32 func_00086800(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 8) = temp_v1;
    return temp_v1 != 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00086814);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0008685C);

s32 func_00086898(void *arg0) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0);
    return sceHVNetfront_Module_440B8F87(temp_s0, M2C_FIELD(arg0, s32 *, 8), 0) + M2C_FIELD(temp_s0, s16 *, 0xC);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000868D0);

void sceHVNetfront_Module_B3AF6022(s32 arg0, s32 arg1) {
    func_0008685C(arg0, arg1);
    M2C_FIELD(arg1, s32 (**)(void *), 0x18) = func_00086898;
    M2C_FIELD(arg1, M2C_UNK **, 0x1C) = &func_000868D0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00086940);

void func_00086964(s32 arg0, s32 arg1) {
    func_0008685C(arg0, arg1);
    M2C_FIELD(arg1, M2C_UNK **, 0x18) = &func_00086940;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_0F5AA1D5);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_2A34EDF3);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00086A40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_C0A215A2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_4681A961);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_350ABDEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_5AFD3D38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_488D3C7B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00086C14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_A20CC0BA);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_989778A5);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_1A741A10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_40EFD93B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_B71993AE);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_EF43C7A1);

void sceHVNetfront_Module_56891AC0(void) {
    func_00093668();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00086ED0);

void func_00086F34(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x10) - 1;
    temp_v0 = temp_v1 << M2C_FIELD(arg0, s16 *, 0xE);
    M2C_FIELD(arg0, s32 *, 0x10) = temp_v1;
    if (!(temp_v0 & 0x7FF)) {
        func_000937E4((s32) arg0, temp_v0);
    }
}

s32 sceHVNetfront_Module_FF85936E(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = func_00086ED0();
    var_a0 = -1;
    if (temp_v0 != 0) {
        if (arg1 != 0) {
            sceHVNetfront_Module_1A02495A(temp_v0, arg1, (s32) M2C_FIELD(arg0, s16 *, 0xC));
        }
        var_a0 = M2C_FIELD(arg0, s32 *, 0x10) - 1;
    }
    return var_a0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00086FC8);

void func_00087010(void *arg0, s32 arg1, s32 arg2) {
    sceHVNetfront_Module_1A02495A(arg2, sceHVNetfront_Module_234F9191((s32) arg0, arg1 << M2C_FIELD(arg0, s16 *, 0xE)), (s32) M2C_FIELD(arg0, s16 *, 0xC));
}

void func_00087058(void *arg0, s32 arg1, s32 arg2) {
    sceHVNetfront_Module_1A02495A(sceHVNetfront_Module_234F9191((s32) arg0, arg1 << M2C_FIELD(arg0, s16 *, 0xE)), arg2, (s32) M2C_FIELD(arg0, s16 *, 0xC));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000870A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000870C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_B1EBD134);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_62342C9A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_165CA66D);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00087254);

void func_000872E4(s32 arg0, s32 arg1) {
    func_00087254(arg0, 0, arg1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_C04FADD9);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00087320);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00087430);

void sceHVNetfront_Module_E875CDC8(s32 arg0) {
    sceHVNetfront_Module_96BF9A55(arg0);
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

void func_000874F0(s32 arg0, s32 arg1, s32 arg2) {
    sceHVNetfront_Module_1A02495A(arg2, sceHVNetfront_Module_234F9191(arg0, arg1) + M2C_FIELD(arg0, s16 *, 0xC), (s32) M2C_FIELD(arg0, s16 *, 0xE));
}

void sceHVNetfront_Module_6A6AB360(s32 arg0, s32 arg1, s32 arg2) {
    sceHVNetfront_Module_1A02495A(sceHVNetfront_Module_234F9191(arg0, arg1) + M2C_FIELD(arg0, s16 *, 0xC), arg2, (s32) M2C_FIELD(arg0, s16 *, 0xE));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_6F80558B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000875B0);

void func_000875EC(s32 arg0) {
    void *sp0;
    func_00087320(arg0, &sp0);
}

s32 func_00087608(s32 arg0) {
    void *sp0;
    s32 temp_v0;

    temp_v0 = func_00087320(arg0, &sp0);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_D611E938(sp0 + M2C_FIELD(arg0, s16 *, 0xC), 0, (s32) M2C_FIELD(arg0, s16 *, 0xE));
    }
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_A9210C2E);

void sceHVNetfront_Module_14411643(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_B6F9B107);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_A76795B7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0008782C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_32E4FDC6);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00087AA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00087B70);

s32 func_00087C34(s32 arg0, s32 arg1, s32 **arg2) {
    void *sp0;
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_00087320(arg0, &sp0);
    var_v1 = 0;
    if (temp_v0 != 0) {
        func_00087AA0(arg0, arg1, temp_v0, sp0);
        var_v1 = temp_v0;
        *arg2 = sp0;
    }
    return var_v1;
}

s32 func_00087CAC(s32 arg0, s32 arg1, s32 **arg2) {
    void *sp0;
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_00087320(arg0, &sp0);
    var_v1 = 0;
    if (temp_v0 != 0) {
        func_00087B70(arg0, arg1, temp_v0, sp0);
        var_v1 = temp_v0;
        *arg2 = sp0;
    }
    return var_v1;
}

s32 func_00087D24(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0;
    if (func_00087254(arg0, arg1, arg2) != 0) {
        var_v1 = 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_B730C75F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_16508B17);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_2B629F59);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_F489E9B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_10C4F8A3);

void sceHVNetfront_Module_2D98366C(s32 arg0, M2C_UNK arg1, s32 arg2) {
    s32 *temp_v0;

    temp_v0 = sceHVNetfront_Module_234F9191(arg0, arg2);
    if (*temp_v0 != 0) {
        sceHVNetfront_Module_10C4F8A3(arg0, arg2);
    }
    func_00087AA0(arg0, arg1, arg2, temp_v0);
}

void func_00087F74(s32 arg0, M2C_UNK arg1, s32 arg2) {
    s32 *temp_v0;

    temp_v0 = sceHVNetfront_Module_234F9191(arg0, arg2);
    if (*temp_v0 != 0) {
        sceHVNetfront_Module_10C4F8A3(arg0, arg2);
    }
    func_00087B70(arg0, arg1, arg2, temp_v0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00087FEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_1461AF80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00088188);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_457A4136);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_B21203FF);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_41CEA51D);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_EA8FFAF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00088300);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_E1280750);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_2408FBF3);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_703D7675);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_E6D4D13C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_83191313);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_2918F48C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_12E3C14E);

s32 sceHVNetfront_Module_4E6D9390(void *arg0, void *arg1) {
    s32 var_a3;

    var_a3 = 0;
    if (M2C_FIELD(arg1, s32 *, 0) != M2C_FIELD(arg0, s32 *, 0x1C)) {
        var_a3 = sceHVNetfront_Module_E6D4D13C((s32) arg0, *M2C_FIELD(arg1, s32 **, 8), (s32) arg1);
    }
    return var_a3;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_34C99643);

void func_00088600(void *arg0) {
    func_0008A010();
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_0F61EC8E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_24614BB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_1B83D569);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_6B15F29F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_957CE668);

s32 sceHVNetfront_Module_70683D75(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if ((M2C_FIELD(sceHVNetfront_Module_234F9191(arg0, __builtin_allegrex_ins(arg1, 0, 0x16, 0xA) * 4), s32 *, 8) != 0) || (M2C_FIELD(arg0, s32 *, 0x18) == arg1)) {
        var_v1 = 1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_EE1C1283);

void sceHVNetfront_Module_05F33A6C(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_957CE668((s32) arg0, temp_v0);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_1DF9F3CD);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_6DC3FDE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00088C80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00088D8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00088DE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00088E4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_C6B5460E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000890F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00089140);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000891F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_00089298);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_654D2937);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_C1F09F7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_C8731B54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0008952C);

void func_000895D0(void *arg0, s32 *arg1) {
    func_0008952C(arg0, M2C_FIELD(arg0, s32 *, 0x18), arg1);
}

s32 sceHVNetfront_Module_25AEB6E8(void *arg0, s32 *arg1) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(M2C_FIELD(arg1, void **, 8), s32 *, 4);
    if (temp_v0 != 0) {
        var_v1 = func_0008952C(arg0, temp_v0, arg1);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_0008962C);

s32 func_000896A8(void *arg0, s32 *arg1) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(M2C_FIELD(arg1, void **, 8), s32 *, 8);
    if (temp_v0 != 0) {
        var_v1 = func_0008952C(arg0, temp_v0, arg1);
    }
    return var_v1;
}

s32 sceHVNetfront_Module_882E0127(void *arg0, s32 *arg1) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(M2C_FIELD(arg1, void **, 8), s32 *, 0xC);
    if (temp_v0 != 0) {
        var_v1 = func_0008952C(arg0, temp_v0, arg1);
    }
    return var_v1;
}

s32 func_00089720(void *arg0, s32 *arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceHVNetfront_Module_1DF9F3CD(arg0, *arg1);
    var_v1 = 0;
    if (temp_v0 != 0) {
        var_v1 = func_0008952C(arg0, temp_v0, arg1);
    }
    return var_v1;
}

void sceHVNetfront_Module_81130A27(void *arg0, s32 arg1, s16 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s16 *, 4) = arg2;
    M2C_FIELD(arg0, s16 *, 6) = 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_BFE8268F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_8E9CAD4A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", sceHVNetfront_Module_6475D8C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FFF8", func_000899DC);

