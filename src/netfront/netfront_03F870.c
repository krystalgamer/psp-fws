/* cflags: -Os */
#include "common.h"
#include "netfront_decls.h"

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_13C197DB);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_C9E7CE15);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_158E3F31);

void sceHVNetfront_Module_EF9A1668(s32 **arg0) {
    struct Unk_sceHVNetfront_Module_EF9A1668_temp_v0 *temp_v0;

    if (arg0 != NULL) {
        temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
        if (temp_v0 != NULL) {
            temp_v0->unk20 = __builtin_allegrex_ins(temp_v0->unk20, 0, 5, 1);
            sceHVNetfront_Module_B29BE9CE(arg0);
        }
    }
}

void sceHVNetfront_Module_2263AFB9(s32 **arg0) {
    struct Unk_sceHVNetfront_Module_2263AFB9_temp_v0 *temp_v0;

    if (arg0 != NULL) {
        temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
        if (temp_v0 != NULL) {
            temp_v0->unk1C = 3;
            temp_v0->unk20 = __builtin_allegrex_ins(temp_v0->unk20, 0, 5, 1);
            sceHVNetfront_Module_B29BE9CE(arg0);
        }
    }
}

void sceHVNetfront_Module_B3E7A28A(s32 **arg0) {
    if ((arg0 != NULL) && (sceHVNetfront_Module_896E55F6(arg0) != NULL)) {
        sceHVNetfront_Module_B29BE9CE(arg0);
    }
}

void sceHVNetfront_Module_55C75F96(void **arg0) {
    struct Unk_sceHVNetfront_Module_55C75F96_temp_a0 *temp_a0;

    if (arg0 != NULL) {
        temp_a0 = *arg0;
        if (temp_a0 != NULL) {
            temp_a0->unk20 = (u16) (temp_a0->unk20 & 0xDFB5);
        }
    }
}

s32 func_0003FB68(void **arg0) {
    return M2C_FIELD(*M2C_FIELD(*M2C_FIELD(*arg0, void ***, 0x28), void ***, 0x58), s32 *, 0x3C) != 0;
}

s32 func_0003FB88(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x78);
}

void func_0003FB94(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x78) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0003FBA0);

void func_0003FCBC(s32 arg0) {
    sceKernelSetEventFlag(D_00133DE8, arg0);
}

void func_0003FCE0(s32 *arg0, s32 arg1) {
    sceKernelClearEventFlag(*arg0, 0);
    sceKernelSetEventFlag(*arg0, arg1);
}

s32 func_0003FD24(s32 *arg0) {
    void *sp0;
    return (sceKernelPollEventFlag(*arg0, 0xFFU, 1, &sp0) == 0) ? sp0 : -1;
}

void func_0003FD5C(s32 arg0) {
    sceHVNetfront_Module_D611E938(arg0, 0, 0x24);
    M2C_FIELD(arg0, s32 *, 0x14) = 0x3000;
    M2C_FIELD(arg0, s32 *, 0x10) = sceHVNetfront_Module_24B1FCE6(0x3000);
    M2C_FIELD(arg0, u32 *, 0) = sceKernelCreateEventFlag("sceHtmlViwerHttpStatus", 0x200U, 1U, NULL);
}

void func_0003FDB8(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0003FDD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0003FE88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0003FEC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000400A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00040198);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000402E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00040430);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00040574);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00040670);

s32 func_000406FC(struct Unk_func_000406FC_0 *arg0, s32 arg1) {
    arg0->unk8 = -1;
    arg0->unk0 = arg1;
    arg0->unk4 = 0;
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00040714);

s32 func_0004083C(struct Unk_func_0004083C_0 *arg0, M2C_UNK arg1, s32 arg2) {
    struct Unk_func_0004083C_temp_v1 *temp_v1;

    arg0->unk8 = arg2;
    temp_v1 = arg0->unk0;
    temp_v1->unk2C = (s32) (temp_v1->unk2C + 1);
    func_00043A68(arg1, -1);
    sceHVNetfront_Module_86F90291(arg1, 8);
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00040890);

s32 func_00040940(void **arg0, M2C_UNK arg1, s32 *arg2, s32 *arg3) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_00043B00(arg1, M2C_FIELD(*arg0, s32 *, 0x30), arg3);
    *arg2 = temp_v0;
    if (temp_v0 == 0) {
        func_00043BA4(arg1, 0);
        func_00042E58(arg1, -6);
        var_v1 = 3;
    } else {
        var_v1 = 1;
        if (*arg3 == 0) {
            func_00043BA4(arg1, 0);
            var_v1 = 0;
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000409D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00040A5C);

void func_00040AD8(struct Unk_func_00040AD8_0 *arg0) {
    s32 temp_v0;
    struct Unk_func_00040AD8_temp_s1 *temp_s1;

    temp_v0 = arg0->unk8;
    temp_s1 = arg0->unk0;
    if (temp_v0 != -1) {
        M2C_FIELD(temp_s1, M2C_UNK (**)(s32), 0x38)(temp_v0);
        arg0->unk8 = -1;
        temp_s1->unk2C = (s32) (temp_s1->unk2C - 1);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00040B38);

void func_00040BA4(s32 **arg0) {
    M2C_UNK (*temp_v0_2)(void **);
    void **temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    temp_v0_2 = M2C_FIELD(*temp_v0, M2C_UNK (**)(void **), 0x4C);
    if (temp_v0_2 != NULL) {
        temp_v0_2(temp_v0);
    } else {
        func_00040AD8(temp_v0);
    }
    sceHVNetfront_Module_B29BE9CE(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00040BFC);

void func_00040D50(s32 **arg0) {
    func_00040BA4(arg0);
    sceHVNetfront_Module_880239D0(arg0);
}

void func_00040D7C(s32 **arg0) {
    func_00040BA4(arg0);
}

void func_00040D98(void) {
}

void func_00040DA0(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00040DA8);

void func_00040DB8(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00040DC0);

void sceHVNetfront_Module_22AF3BA2(s32 arg0, s32 arg1, s32 arg2) {
    func_00040DC0(arg0, arg1, arg2, 0xC);
}

void sceHVNetfront_Module_0316CB2F(void) {
}

s32 func_00040E98(s32 arg0) {
    sceHVNetfront_Module_D611E938(arg0, 0, 0x24);
    return 1;
}

void func_00040EBC(void) {
}

void func_00040EC4(struct Unk_func_00040EC4_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk0 = arg1;
    arg0->unk8 = arg2;
    arg0->unk4 = arg3;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_258B5150);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_122F81AF);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_EF96B26D);

void sceHVNetfront_Module_1702E191(void) {
}

void sceHVNetfront_Module_EFDFDF36(void) {
}

void sceHVNetfront_Module_FDE5859B(void) {
}

void func_00041118(void) {
}

void func_00041120(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_14A6B003((s32) &D_0011FBD0, arg0, arg1);
}

void sceHVNetfront_Module_E778D3F3(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_14A6B003((s32) &D_001204C8, arg0, arg1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_09F69379);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_53729A91);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_04ACFFEA);

s32 sceHVNetfront_Module_0EF6CBAE(struct Unk_sceHVNetfront_Module_0EF6CBAE_0 *arg0) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_0004CCF4(arg0->unkC);
    var_v0 = 0;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_88977645(arg0->unkC, -1);
        arg0->unkC = temp_v0;
        var_v0 = 1;
    }
    return var_v0;
}

s32 sceHVNetfront_Module_33028746(struct Unk_sceHVNetfront_Module_33028746_0 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        temp_v0 = sceHVNetfront_Module_ECAD3AF5(arg1);
        arg0->unk58 = temp_v0;
        var_v0 = temp_v0 != 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_46E43E6F);

void sceHVNetfront_Module_131F0AB6(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_1A02495A(arg0, arg1, 0x68);
    sceHVNetfront_Module_D611E938(arg1, 0, 0x68);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00041678);

void sceHVNetfront_Module_728066E6(struct Unk_sceHVNetfront_Module_728066E6_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;

    temp_a0 = arg0->unkC;
    if (temp_a0 != 0) {
        sceHVNetfront_Module_88977645(temp_a0, -1);
    }
    temp_a0_2 = arg0->unk10;
    if (temp_a0_2 != 0) {
        sceHVNetfront_Module_0D525122(temp_a0_2);
    }
    temp_a0_3 = arg0->unk54;
    if (temp_a0_3 != 0) {
        sceHVNetfront_Module_88977645(temp_a0_3, -1);
    }
    temp_a0_4 = arg0->unk58;
    if (temp_a0_4 != 0) {
        sceHVNetfront_Module_4E064DB2(temp_a0_4);
    }
    temp_a0_5 = arg0->unk5C;
    if (temp_a0_5 != 0) {
        sceHVNetfront_Module_0D525122(temp_a0_5);
    }
    temp_a0_6 = arg0->unk64;
    if (temp_a0_6 != 0) {
        sceHVNetfront_Module_F55329EF(temp_a0_6);
    }
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011F53C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011F598);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011F5A4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011F5F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011F630);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011F66C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011F688);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011F6B8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011F6FC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011F778);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011F7AC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011F7C8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011F7F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FB50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FBD0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FBE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FBF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FC2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FC50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FC98);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FCF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FD70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FE24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FE44);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FE68);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FEA0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FEFC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FF64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FF70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FF74);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FF84);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FF88);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FF8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FF90);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FF94);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FF98);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FF9C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FFA0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FFA4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FFB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FFBC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FFC4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FFD0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FFE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FFF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0011FFF8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120004);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120008);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120018);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120020);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120024);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120028);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120038);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0012003C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120040);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120044);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120048);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120054);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0012005C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120068);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0012006C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120074);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120088);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120094);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120098);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_001200A0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_001200A8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_001200B4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0012017C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120488);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_001204C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_C74A5305);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000419EC);

s32 func_00041B14(s32 arg0) {
    return arg0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00041B1C);

void func_00041B3C(s32 *arg0) {
    sceHVNetfront_Module_AFCC3786(*arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00041B58);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00041BD0);

void func_00041BD8(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00041BE0);

s32 func_00041C30(struct Unk_func_00041C30_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk1C;
    return ((temp_v0 ^ arg0->unk24) == 0) ? 0 : temp_v0;
}

s32 func_00041C44(struct Unk_func_00041C44_0 *arg0) {
    s32 temp_v0;

    temp_v0 = sceHVNetfront_Module_16508B17();
    return ((temp_v0 ^ arg0->unk24) == 0) ? 0 : temp_v0;
}

void func_00041C74(struct Unk_func_00041C74_0 *arg0, void **arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_a1;

    var_a1 = 0;
    temp_s0 = M2C_FIELD(*arg1, s32 *, 4);
    if (temp_s0 != 0) {
        if (arg2 == 0) {
            var_a1 = arg0->unk24;
        }
        func_00087F74((s32) arg0, var_a1, temp_s0);
        temp_v0 = arg0->unk24;
        if (arg2 != 0) {
            if (temp_v0 == 0) {
                arg0->unk24 = temp_s0;
            }
        } else if (temp_v0 == temp_s0) {
            arg0->unk24 = sceHVNetfront_Module_16508B17(arg0, temp_s0);
        }
    }
}

void func_00041CFC(s32 arg0, void **arg1) {
    if (M2C_FIELD(*arg1, s32 *, 4) != 0) {
        sceHVNetfront_Module_32E4FDC6(arg0 + 0x28);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00041D28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00041DF0);

void func_00041E80(s32 arg0, s32 arg1) {
    void *sp0;
    sceHVNetfront_Module_B6F9B107(arg0 + 0x28, arg1, &sp0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00041EA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00041F4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00041F7C);

void func_00042040(struct Unk_func_00042040_0 *arg0, s32 arg1) {
    arg0->unk4 = (s32) (arg0->unk4 + arg1);
}

s32 func_00042050(struct Unk_func_00042050_0 *arg0, M2C_UNK arg1, s32 *arg2) {
    s32 temp_v0;

    temp_v0 = sceHVNetfront_Module_CA65803E(__builtin_allegrex_max(arg1, __builtin_allegrex_min(arg0->unk20, 0x32000)));
    if (temp_v0 != 0) {
        arg0->unk10 = temp_v0;
        *arg2 = sceHVNetfront_Module_7D1421C0(temp_v0);
        return sceHVNetfront_Module_E459881C(temp_v0);
    }
    *arg2 = 0;
    return 0;
}

s32 func_000420CC(struct Unk_func_000420CC_0 *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 temp_s0;
    s32 temp_s2;
    s32 var_v0;

    temp_s2 = arg0->unk18 - arg2;
    temp_s0 = arg0->unk10;
    if (((arg1 == 0) | (temp_s2 >= arg1)) != 0) {
        *arg3 = 0;
        return sceHVNetfront_Module_E459881C(temp_s0);
    }
    if (sceHVNetfront_Module_86AB5444(temp_s0) == 0) {
        sceHVNetfront_Module_E459881C(temp_s0);
        var_v0 = 0;
    } else {
        *arg3 = arg1 - temp_s2;
        var_v0 = sceHVNetfront_Module_E459881C(temp_s0) + temp_s2;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00042170);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004220C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00042280);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000422E8);

void func_00042394(void **arg0, s32 *arg1, s32 *arg2) {
    s32 temp_v0;
    struct Unk_func_00042394_temp_s1 *temp_s1;

    temp_s1 = *arg0;
    temp_v0 = temp_s1->unk10;
    if (temp_v0 != 0) {
        *arg1 = sceHVNetfront_Module_E459881C(temp_v0);
        *arg2 = temp_s1->unk18;
        return;
    }
    *arg1 = 0;
    *arg2 = 0;
}

void func_000423F8(void **arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(*arg0, s32 *, 0x10);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_08549708(temp_v0);
    }
}

s32 *func_00042424(void) {
    s32 *temp_v0;
    s32 *var_v0;

    temp_v0 = sceHVNetfront_Module_6D4EE418(0x44);
    var_v0 = NULL;
    if (temp_v0 != NULL) {
        func_00041F7C(*temp_v0, 1);
        var_v0 = temp_v0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00042464);

void **sceHVNetfront_Module_51CAE7B4(void **arg0) {
    func_00042040(*arg0, 1);
    return arg0;
}

void sceHVNetfront_Module_E31B0CF8(void **arg0, struct Unk_func_00045A64_1 *arg1) {
    struct Unk_sceHVNetfront_Module_E31B0CF8_temp_v1 *temp_v1;

    temp_v1 = *arg0;
    arg1->unk0 = (s32) temp_v1->unk8;
    arg1->unk4 = (s32) temp_v1->unkC;
}

void sceHVNetfront_Module_CB726F9E(void **arg0, s32 *arg1, struct Unk_sceHVNetfront_Module_CB726F9E_2 *arg2) {
    struct Unk_sceHVNetfront_Module_CB726F9E_temp_v1 *temp_v1;

    temp_v1 = *arg0;
    *arg1 = temp_v1->unk38;
    arg2->unk0 = (s32) temp_v1->unk30;
    arg2->unk4 = (s32) temp_v1->unk34;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_F3EAE3EF);

void sceHVNetfront_Module_AA3634F4(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x18) = arg1;
}

void sceHVNetfront_Module_125D89FA(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x1C) = arg1;
}

void sceHVNetfront_Module_2CCCD8B0(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x20) = arg1;
}

void func_00042568(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x24) = arg1;
}

void sceHVNetfront_Module_7C5BAB1D(void **arg0, s32 arg1) {
    s32 temp_v0;
    struct Unk_sceHVNetfront_Module_7C5BAB1D_temp_s0 *temp_s0;

    temp_s0 = *arg0;
    temp_v0 = temp_s0->unk14;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0);
    }
    temp_s0->unk14 = arg1;
}

void sceHVNetfront_Module_45AC12ED(void **arg0, s32 arg1) {
    s32 temp_v0;
    struct Unk_sceHVNetfront_Module_45AC12ED_temp_s0 *temp_s0;

    temp_s0 = *arg0;
    temp_v0 = temp_s0->unk10;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0);
    }
    temp_s0->unk10 = arg1;
}

void sceHVNetfront_Module_5E44B688(void **arg0, s32 arg1) {
    struct Unk_sceHVNetfront_Module_5E44B688_temp_v0 *temp_v0;

    temp_v0 = *arg0;
    temp_v0->unk3C = arg1;
    temp_v0->unk40 = 0;
}

void func_0004260C(void **arg0, s32 arg1) {
    s32 temp_v0;
    struct Unk_func_0004260C_temp_s0 *temp_s0;

    temp_s0 = *arg0;
    temp_v0 = temp_s0->unk28;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0);
    }
    temp_s0->unk28 = arg1;
}

void func_00042650(void **arg0, s32 arg1) {
    s32 temp_v0;
    struct Unk_func_00042650_temp_s0 *temp_s0;

    temp_s0 = *arg0;
    temp_v0 = temp_s0->unk2C;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0);
    }
    temp_s0->unk2C = arg1;
}

void sceHVNetfront_Module_E992C60B(void **arg0, s32 arg1, struct Unk_sceHVNetfront_Module_E992C60B_2 *arg2) {
    struct Unk_sceHVNetfront_Module_E992C60B_temp_a0 *temp_a0;

    temp_a0 = *arg0;
    temp_a0->unk38 = arg1;
    if (arg1 == 1) {
        temp_a0->unk30 = (s32) arg2->unk0;
        temp_a0->unk34 = (s32) arg2->unk4;
    }
}

void sceHVNetfront_Module_EEA26996(void **arg0, struct Unk_sceHVNetfront_Module_EEA26996_1 *arg1) {
    struct Unk_sceHVNetfront_Module_EEA26996_temp_v1 *temp_v1;

    temp_v1 = *arg0;
    temp_v1->unk8 = (s32) arg1->unk0;
    temp_v1->unkC = (s32) arg1->unk4;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000426D4);

void func_00042788(s32 arg0) {
    sceHVNetfront_Module_D611E938(arg0, 0, 0x28);
    M2C_FIELD(arg0, s32 *, 0xC) = -1;
    M2C_FIELD(arg0, s32 *, 0x10) = -1;
}

void func_000427C0(struct Unk_func_000427C0_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = arg0->unk14;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0);
    }
    temp_v0_2 = arg0->unk18;
    if (temp_v0_2 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0_2);
    }
    sceHVNetfront_Module_D611E938((s32) arg0, 0, 0x28);
}

void func_00042818(struct Unk_func_00042818_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = arg0->unk8;
    if (!(temp_v0 & 1)) {
        temp_v0_2 = arg0->unk38;
        arg0->unk8 = (s32) (temp_v0 | 5);
        if (temp_v0_2 != 0) {
            M2C_FIELD(arg0->unk34, M2C_UNK (**)(s32), 0xC)(temp_v0_2);
        }
        if (arg0->unk8 & 0x80) {
            if (func_000422E8(arg0->unk58, arg0->unk5C, arg0->unk60) != 0) {
                arg0->unk8 = (s32) (arg0->unk8 | 8);
            }
            arg0->unk8 = __builtin_allegrex_ins(arg0->unk8, 0, 7, 1);
        }
    }
}

s32 func_000428A4(struct Unk_func_000428A4_0 *arg0, s32 arg1, s32 *arg2) {
    s32 temp_s0;

    temp_s0 = func_00042050(sceHVNetfront_Module_896E55F6(arg0->unk58), arg1, arg2);
    sceHVNetfront_Module_B29BE9CE(arg0->unk58);
    return temp_s0;
}

s32 func_00042904(struct Unk_func_00042904_0 *arg0, s32 *arg1) {
    s32 temp_s1;

    temp_s1 = func_000420CC(sceHVNetfront_Module_896E55F6(arg0->unk58), arg0->unk5C, arg0->unk60, arg1);
    sceHVNetfront_Module_B29BE9CE(arg0->unk58);
    return temp_s1;
}

s32 func_0004295C(struct Unk_func_0004295C_0 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_s1;

    temp_s1 = func_00042170(sceHVNetfront_Module_896E55F6(arg0->unk58), arg1, arg0->unk60, arg2);
    sceHVNetfront_Module_B29BE9CE(arg0->unk58);
    return temp_s1;
}

void func_000429C0(s32 **arg0) {
    s32 temp_v0_2;
    struct Unk_func_000429C0_temp_v0 *temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    temp_v0_2 = temp_v0->unk38;
    if (temp_v0_2 != 0) {
        M2C_FIELD(temp_v0->unk34, M2C_UNK (**)(s32, M2C_UNK), 0x10)(temp_v0_2, 1);
    }
    sceHVNetfront_Module_B29BE9CE(arg0);
}

s16 sceHVNetfront_Module_B23D7F7F(s32 **arg0, s32 arg1, s32 arg2) {
    s16 temp_s0;
    struct Unk_sceHVNetfront_Module_B23D7F7F_temp_v0 *temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    temp_v0->unk10 = (u16) (temp_v0->unk10 + arg1);
    if (arg2 != 0) {
        temp_v0->unk12 = (u16) (temp_v0->unk12 + arg1);
    }
    if ((s16) temp_v0->unk12 >= (s16) temp_v0->unk10) {
        func_00042818(temp_v0);
    }
    temp_s0 = (s16) temp_v0->unk10;
    if (temp_s0 <= 0) {
        if (temp_v0->unk4 != 0) {
            func_00041DF0(temp_v0->unk0 + 0x40, arg0);
        }
        func_00042818(temp_v0);
        sceHVNetfront_Module_B29BE9CE(arg0);
        func_00043448(arg0, 0);
        sceHVNetfront_Module_880239D0(arg0);
        return 0;
    }
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00042AF0);

void func_00042BAC(s32 **arg0) {
    s32 temp_v0_2;
    struct Unk_func_00042BAC_temp_v0 *temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    temp_v0_2 = temp_v0->unk38;
    if (temp_v0_2 != 0) {
        M2C_FIELD(temp_v0->unk34, M2C_UNK (**)(s32, s32 **), 4)(temp_v0_2, arg0);
        temp_v0->unk38 = 0;
    }
    sceHVNetfront_Module_B29BE9CE(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00042C08);

void func_00042D70(s32 **arg0) {
    struct Unk_func_00042D70_temp_v0 *temp_v0;

    if (!(M2C_FIELD(*arg0, s32 *, 8) & 1)) {
        temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
        temp_v0->unk12 = (u16) temp_v0->unk10;
        func_00042818(temp_v0);
        sceHVNetfront_Module_B29BE9CE(arg0);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00042DC0);

void sceHVNetfront_Module_A8078858(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x50) = arg1;
}

void func_00042E34(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x3C) = arg1;
}

void func_00042E40(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x40) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_86F90291);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00042E58);

void func_00042E78(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x28) = arg1;
}

void sceHVNetfront_Module_3850E9A6(void **arg0, s32 arg1) {
    s32 temp_v0;
    struct Unk_sceHVNetfront_Module_3850E9A6_temp_s0 *temp_s0;

    temp_s0 = *arg0;
    temp_v0 = temp_s0->unk1C;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_88977645(temp_v0, -1);
    }
    temp_s0->unk1C = arg1;
}

void func_00042ECC(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x18) = arg1;
}

void func_00042ED8(void **arg0, s32 arg1) {
    s32 temp_v0;
    struct Unk_func_00042ED8_temp_s0 *temp_s0;

    temp_s0 = *arg0;
    temp_v0 = temp_s0->unk24;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_4E064DB2(temp_v0);
    }
    temp_s0->unk24 = arg1;
}

void func_00042F1C(void **arg0, s32 arg1, s32 arg2) {
    struct Unk_func_00042F1C_temp_v0 *temp_v0;

    temp_v0 = *arg0;
    temp_v0->unk44 = arg1;
    temp_v0->unk48 = arg2;
}

void func_00042F2C(s32 **arg0) {
    s32 temp_v0_2;
    struct Unk_func_00042F2C_temp_v0 *temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    temp_v0_2 = temp_v0->unk38;
    if (temp_v0_2 != 0) {
        M2C_FIELD(temp_v0->unk34, M2C_UNK (**)(s32, M2C_UNK), 0x10)(temp_v0_2, 0);
    }
    sceHVNetfront_Module_B29BE9CE(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_74A30655);

void sceHVNetfront_Module_6C78CC40(void **arg0, s32 arg1) {
    struct Unk_sceHVNetfront_Module_6C78CC40_temp_v1 *temp_v1;

    temp_v1 = *arg0;
    temp_v1->unk8 = (s32) (__builtin_allegrex_ins(temp_v1->unk8, 0, 9, 4) | (arg1 & 0x1E00));
}

void func_00042FBC(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x5C) = arg1;
}

void sceHVNetfront_Module_6CA88BC3(void **arg0, void **arg1) {
    void **temp_v0;
    struct Unk_sceHVNetfront_Module_6CA88BC3_temp_s0 *temp_s0;
    struct Unk_sceHVNetfront_Module_6CA88BC3_temp_v1 *temp_v1;

    temp_s0 = *arg0;
    temp_v0 = temp_s0->unk58;
    if (temp_v0 != NULL) {
        func_00042464(temp_v0);
    }
    temp_v1 = *arg1;
    temp_s0->unk58 = arg1;
    if (temp_v1->unk10 != 0) {
        temp_s0->unk8 = (s32) (temp_s0->unk8 | 8);
    }
    if (temp_v1->unk24 != -2) {
        temp_s0->unk8 = (s32) (temp_s0->unk8 | 0x10);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00043040);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00043274);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000432D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_78E29B62);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00043448);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00043584);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_94EB0154);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000436CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00043754);

void func_000437DC(s32 *arg0) {
    func_000436CC(*arg0);
}

void func_000437F8(s32 *arg0) {
    func_00043754(*arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00043814);

void sceHVNetfront_Module_C3B0CA67(s32 *arg0) {
    func_00043814(*arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000438B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00043A68);

void func_00043A9C(s32 **arg0) {
    struct Unk_func_00043A9C_temp_v0 *temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    if (func_000422E8(temp_v0->unk58, temp_v0->unk5C, temp_v0->unk60) != 0) {
        temp_v0->unk8 = (s32) (temp_v0->unk8 | 8);
    }
    temp_v0->unk8 = __builtin_allegrex_ins(temp_v0->unk8, 0, 7, 1);
    sceHVNetfront_Module_B29BE9CE(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00043B00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00043BA4);

s32 func_00043BDC(void **arg0) {
    struct Unk_func_00043BDC_temp_v0 *temp_v0;

    temp_v0 = *arg0;
    return M2C_FIELD(*temp_v0->unk58, s32 *, 0x18) - temp_v0->unk60;
}

s32 func_00043BF8(struct Unk_func_00043BF8_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v0;

    var_v0 = 0;
    if (((arg1 == 0) | (arg2 == 0)) == 0) {
        var_v0 = 1;
        arg0->unk0 = arg1;
        arg0->unk4 = arg2;
        arg0->unk8 = arg3;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_794DB63E);

s32 **sceHVNetfront_Module_FA39DAA2(void) {
    s32 **temp_v0;
    s32 **var_v0;
    s32 temp_v0_2;

    temp_v0 = sceHVNetfront_Module_794DB63E();
    var_v0 = NULL;
    if (temp_v0 != NULL) {
        temp_v0_2 = sceHVNetfront_Module_CA65803E(1);
        if (temp_v0_2 == 0) {
            sceHVNetfront_Module_B23D7F7F(temp_v0, -1, 0);
            return NULL;
        }
        sceHVNetfront_Module_74A30655(temp_v0, 3, 1);
        func_00042E58((s32) temp_v0, -1);
        sceHVNetfront_Module_86F90291((s32) temp_v0, 7);
        sceHVNetfront_Module_AA3634F4(M2C_FIELD(*temp_v0, void ***, 0x58), 0);
        sceHVNetfront_Module_125D89FA(M2C_FIELD(*temp_v0, void ***, 0x58), -1);
        sceHVNetfront_Module_2CCCD8B0(M2C_FIELD(*temp_v0, void ***, 0x58), -1);
        func_00042568(M2C_FIELD(*temp_v0, void ***, 0x58), -1);
        sceHVNetfront_Module_45AC12ED(M2C_FIELD(*temp_v0, void ***, 0x58), temp_v0_2);
        var_v0 = temp_v0;
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00043DFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00043E7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00043ED0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_C98899FC);

void sceHVNetfront_Module_E330BB9F(struct Unk_sceHVNetfront_Module_E330BB9F_0 *arg0) {
    sceHVNetfront_Module_880239D0(arg0->unk4E0);
    sceHVNetfront_Module_C04FADD9((u8 *)arg0 + 0x4AC);
    func_00041F4C((u8 *)arg0 + 0x40);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_FAB16895);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_C9729D6E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00044184);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_979F5A7B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000445B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00044678);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004472C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_44F0D3D4);

void func_00044940(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_EB9C36E9);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000449F8);

void func_00044A34(s32 **arg0, s32 **arg1) {
    s32 **temp_v0_2;
    struct Unk_func_00044A34_temp_v0 *temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    temp_v0_2 = temp_v0->unk0;
    if (temp_v0_2 != NULL) {
        sceHVNetfront_Module_B23D7F7F(temp_v0_2, -1, temp_v0->unk14 & 2);
        temp_v0->unk14 = __builtin_allegrex_ins(temp_v0->unk14, 0, 1, 1);
    }
    temp_v0->unk0 = arg1;
    sceHVNetfront_Module_B29BE9CE(arg0);
}

void func_00044AA4(s32 **arg0, s32 arg1) {
    s32 temp_v0_2;
    struct Unk_func_00044AA4_temp_v0 *temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    temp_v0_2 = temp_v0->unk18;
    if (temp_v0_2 != 0) {
        sceHVNetfront_Module_309FE171(temp_v0_2);
    }
    temp_v0->unk18 = arg1;
    sceHVNetfront_Module_B29BE9CE(arg0);
}

s32 sceHVNetfront_Module_25F5CA8C(void **arg0, s32 arg1) {
    s32 var_a1;
    void ***temp_v0;

    temp_v0 = M2C_FIELD(*arg0, void ****, 0x18);
    var_a1 = 0;
    if (temp_v0 != NULL) {
        var_a1 = M2C_FIELD(**temp_v0, s32 *, 8) == arg1;
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_D01C1872);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_F55329EF);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_D533CF0D);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_9B8F6179);

s32 sceHVNetfront_Module_8F6A9B89(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;
    s32 var_s2;
    s32 var_v0;

    var_s2 = 0;
    var_v0 = 0;
    if (arg1 != 0) {
        var_s2 = sceHVNetfront_Module_E459881C(arg1);
        var_v0 = sceHVNetfront_Module_3EDA77E7(arg1);
    }
    temp_s1 = func_00045034(arg0, var_s2, var_v0, arg2);
    if (arg1 != 0) {
        sceHVNetfront_Module_08549708(arg1);
    }
    return temp_s1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00045034);

s32 sceHVNetfront_Module_39EE6D2A(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_4B5823BF);

s32 sceHVNetfront_Module_E1A51715(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 8);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_B17C0A53);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_A4E019F5);

s32 sceHVNetfront_Module_2A065450(s32 **arg0, s32 arg1, s32 arg2) {
    void *sp0;
    s32 ***temp_v0;
    s32 **temp_s0;
    s32 *temp_v1;
    s32 temp_v0_2;
    s32 var_s5;

    var_s5 = 1;
    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    temp_s0 = *temp_v0;
    temp_v1 = *temp_s0;
    if (!(M2C_FIELD(temp_v1, s32 *, 8) & 0x10) && (M2C_FIELD(*M2C_FIELD(temp_v1, void ***, 0x58), s32 *, 0x24) >= 0)) {
        sceHVNetfront_Module_74A30655(temp_s0, 0x10, 1);
    }
    if (!(M2C_FIELD(*temp_s0, s32 *, 8) & 0x80)) {
        func_00043A68((s32) temp_s0, -1);
    }
    temp_v0_2 = func_00043B00((s32) temp_s0, arg2, &sp0);
    if (temp_v0_2 != 0) {
        sceHVNetfront_Module_1A02495A(temp_v0_2, arg1, arg2);
        func_00043BA4((s32) temp_s0, arg2);
    } else {
        var_s5 = 0;
        func_00043BA4((s32) temp_s0, 0);
        func_00042E58((s32) *temp_v0, -6);
    }
    sceHVNetfront_Module_B29BE9CE(arg0);
    return var_s5;
}

void sceHVNetfront_Module_CAE363A8(s32 **arg0) {
    s32 ***temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    func_00043A9C(*temp_v0);
    sceHVNetfront_Module_74A30655(*temp_v0, 1, 1);
    sceHVNetfront_Module_B29BE9CE(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_A941FF30);

s32 func_000454B8(void **arg0) {
    s32 *temp_v0;
    s32 var_v1;

    var_v1 = -1;
    if (sceHVNetfront_Module_BA4FFC3A() != 0) {
        temp_v0 = M2C_FIELD(*arg0, s32 **, 0x24);
        if (temp_v0 != NULL) {
            var_v1 = *temp_v0;
        }
    }
    return var_v1;
}

void sceHVNetfront_Module_C6C0BD2A(void **arg0, s32 arg1, s32 arg2) {
    struct Unk_sceHVNetfront_Module_C6C0BD2A_temp_s0 *temp_s0;

    temp_s0 = *arg0;
    if (arg2 != 0) {
        temp_s0->unkC = arg1;
        return;
    }
    func_00042568(M2C_FIELD(*temp_s0->unk0, void ***, 0x58), arg1);
    sceHVNetfront_Module_74A30655(temp_s0->unk0, 0x10, 1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_BA4FFC3A);

s32 func_00045580(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x24) != 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00045590);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_6AEB1D27);

s32 func_0004584C(void *****arg0) {
    s32 var_v1;
    struct Unk_func_0004584C_temp_v0 *temp_v0;

    var_v1 = 0;
    if (sceHVNetfront_Module_BA4FFC3A() != 0) {
        var_v1 = 1;
        temp_v0 = M2C_FIELD(****arg0, void **, 0x4E4);
        if (temp_v0 != NULL) {
            var_v1 = M2C_FIELD(temp_v0, s32 (**)(void *, void *****), 4)(temp_v0, arg0);
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000458B0);

s32 func_00045904(void ****arg0) {
    return M2C_FIELD(***arg0, s32 *, 8) & 0x3FE000;
}

void func_00045924(s32 ****arg0) {
    func_00042F2C(**arg0);
}

s32 func_00045944(void ****arg0) {
    return M2C_FIELD(***arg0, s32 *, 0x54);
}

void func_00045958(s32 ***arg0) {
    sceHVNetfront_Module_C3B0CA67(**arg0);
}

s32 func_00045978(void ****arg0) {
    return M2C_FIELD(*M2C_FIELD(***arg0, void ***, 0x58), s32 *, 0x14);
}

s32 func_00045994(void ****arg0) {
    return __builtin_allegrex_ext(M2C_FIELD(***arg0, s32 *, 8), 2, 1);
}

s32 func_000459AC(void ****arg0) {
    return __builtin_allegrex_ext(M2C_FIELD(***arg0, s32 *, 8), 1, 1);
}

s32 func_000459C4(void ****arg0) {
    return (M2C_FIELD(***arg0, s32 *, 8) & 7) == 1;
}

void func_000459E4(void ****arg0) {
    sceHVNetfront_Module_A08F42C0(M2C_FIELD(***arg0, s32 *, 0x1C));
}

s32 func_00045A0C(void ****arg0) {
    return M2C_FIELD(*M2C_FIELD(***arg0, void ***, 0x58), s32 *, 0x3C) != 0;
}

void func_00045A2C(s32 **arg0, s32 arg1) {
    func_000438B4(**arg0, arg1, 5);
}

s32 func_00045A50(void ****arg0) {
    return M2C_FIELD(***arg0, s32 *, 0x50);
}

void func_00045A64(void ****arg0, struct Unk_func_00045A64_1 *arg1) {
    sceHVNetfront_Module_E31B0CF8(M2C_FIELD(***arg0, void ***, 0x58), arg1);
}

s32 func_00045A8C(void ****arg0) {
    return M2C_FIELD(***arg0, s32 *, 0x1C);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_1672EC47);

void sceHVNetfront_Module_092E2C73(void **arg0) {
    struct Unk_sceHVNetfront_Module_092E2C73_temp_a0 *temp_a0;
    struct Unk_sceHVNetfront_Module_092E2C73_temp_v1 *temp_v1;

    if (sceHVNetfront_Module_1672EC47() == 0) {
        temp_a0 = *arg0;
        if (!(temp_a0->unk14 & 2)) {
            func_00042DC0(temp_a0->unk0);
            temp_v1 = *arg0;
            temp_v1->unk14 = (s32) (temp_v1->unk14 | 2);
        }
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_90AB89E7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_24196BE2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_9D2B3653);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_7BC430AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_20F2DAA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_3897ADE7);

s32 func_00045D7C(void ****arg0) {
    return M2C_FIELD(***arg0, s32 *, 8) & 1;
}

s32 func_00045D94(void ****arg0) {
    return M2C_FIELD(*M2C_FIELD(***arg0, void ***, 0x58), s32 *, 0x10);
}

s32 func_00045DB0(void ****arg0) {
    return M2C_FIELD(*M2C_FIELD(***arg0, void ***, 0x58), s32 *, 0x1C);
}

s32 func_00045DCC(void ****arg0) {
    return M2C_FIELD(*M2C_FIELD(***arg0, void ***, 0x58), s32 *, 0x18);
}

void func_00045DE8(s32 ****arg0) {
    func_00042F2C(**arg0);
}

s32 func_00045E08(void ****arg0) {
    return M2C_FIELD(***arg0, s32 *, 0x54);
}

s32 func_00045E1C(void ****arg0) {
    return M2C_FIELD(*M2C_FIELD(***arg0, void ***, 0x58), s32 *, 0x14);
}

void func_00045E38(s32 ***arg0) {
    sceHVNetfront_Module_C3B0CA67(**arg0);
}

s32 func_00045E58(void ****arg0) {
    return __builtin_allegrex_ext(M2C_FIELD(***arg0, s32 *, 8), 2, 1);
}

s32 func_00045E70(void ****arg0) {
    return __builtin_allegrex_ext(M2C_FIELD(***arg0, s32 *, 8), 1, 1);
}

s32 func_00045E88(void ****arg0) {
    return (M2C_FIELD(***arg0, s32 *, 8) & 7) == 1;
}

void func_00045EA8(void ****arg0) {
    sceHVNetfront_Module_A08F42C0(M2C_FIELD(***arg0, s32 *, 0x1C));
}

s32 func_00045ED0(void ****arg0) {
    return M2C_FIELD(*M2C_FIELD(***arg0, void ***, 0x58), s32 *, 0x3C) != 0;
}

void func_00045EF0(s32 **arg0, s32 arg1) {
    func_000438B4(**arg0, arg1, 5);
}

s32 func_00045F14(void ****arg0) {
    return M2C_FIELD(***arg0, s32 *, 0x50);
}

void func_00045F28(void ****arg0, struct Unk_func_00045A64_1 *arg1) {
    sceHVNetfront_Module_E31B0CF8(M2C_FIELD(***arg0, void ***, 0x58), arg1);
}

s32 func_00045F50(void ****arg0) {
    return M2C_FIELD(***arg0, s32 *, 0x1C);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_40368F55);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_6AB7B8E9);

void func_00046044(s32 ****arg0, s32 arg1) {
    s32 **temp_s0;

    temp_s0 = **arg0;
    func_00042F2C(temp_s0);
    func_00042FBC((void **) temp_s0, arg1);
}

void sceHVNetfront_Module_D392E84A(void ****arg0) {
    sceHVNetfront_Module_E459881C(M2C_FIELD(*M2C_FIELD(***arg0, void ***, 0x58), s32 *, 0x10));
}

void sceHVNetfront_Module_2281D96A(void ****arg0) {
    sceHVNetfront_Module_08549708(M2C_FIELD(*M2C_FIELD(***arg0, void ***, 0x58), s32 *, 0x10));
}

void sceHVNetfront_Module_9E409DB4(s32 ****arg0) {
    func_00042D70(**arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_6DFAC2F9);

s32 func_00046144(struct Unk_func_00046144_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
    arg0->unkC = arg3;
    arg0->unk10 = arg4;
    arg0->unk14 = arg5;
    arg0->unk0 = 0;
    return 1;
}

void sceHVNetfront_Module_5DF595A9(struct Unk_sceHVNetfront_Module_5DF595A9_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk14 = arg2;
    arg0->unk10 = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_8F9488F9);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_F90CF781);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00046238);

s32 func_0004633C(struct Unk_func_00046144_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;

    var_v1 = 0;
    if (func_00046144(arg0, arg1, (s32) &func_00046238, 0, arg2, arg3) != 0) {
        arg0->unk18 = 0;
        var_v1 = 1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00046388);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000464B0);

void func_000466BC(struct Unk_func_000466BC_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk20;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_0BC2850C);

void sceHVNetfront_Module_C7AA9F45(struct Unk_sceHVNetfront_Module_C7AA9F45_0 *arg0) {
    s32 temp_v0;

    temp_v0 = sceHVNetfront_Module_90AB89E7(arg0->unkC);
    arg0->unk10 = 5;
    arg0->unk24 = temp_v0;
    if ((temp_v0 == -1) || (sceHVNetfront_Module_F2D8CC12(*arg0->unk0, temp_v0, 1) == 0)) {
        func_000467F4(arg0);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000467F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00046824);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004687C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004695C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00046AB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00046AD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00046AF0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00046C3C);

s32 func_00046D34(struct Unk_func_00046D34_0 *arg0, s32 *arg1) {
    s32 temp_s0;
    s32 temp_s1;
    s32 var_s3;

    var_s3 = 0;
    temp_s1 = func_00047844(arg0->unk0, arg0->unk10);
    temp_s0 = __builtin_allegrex_min(temp_s1, sceHVNetfront_Module_9D2B3653(arg0->unkC));
    if ((sceHVNetfront_Module_1672EC47(arg0->unkC) != 0) || (temp_s0 == temp_s1)) {
        var_s3 = 1;
    }
    if (arg1 != NULL) {
        *arg1 = temp_s0;
    }
    return var_s3;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00046DB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00046F10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00046FB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004704C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004717C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00047250);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_A8B3EB32);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_429782B3);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_84212B7D);

s32 sceHVNetfront_Module_8D3E0625(struct Unk_sceHVNetfront_Module_8D3E0625_0 *arg0, s32 arg1, s32 arg2, struct Unk_sceHVNetfront_Module_8D3E0625_3 *arg3) {
    arg0->unk18 = 0x7FFFFFFF;
    func_00047744((s32) arg0);
    arg0->unk0 = arg1;
    arg0->unkC = arg2;
    if (arg3 != NULL) {
        arg0->unk4 = (s32) arg3->unk0;
        arg0->unk8 = (s32) arg3->unk4;
    } else {
        arg0->unk4 = -1;
        arg0->unk8 = -1;
    }
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00047744);

void sceHVNetfront_Module_7A41AD6E(s32 arg0) {
    func_00047744(arg0);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}

void func_000477A8(struct Unk_func_000477A8_0 *arg0) {
    arg0->unk14 = 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000477B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004780C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00047844);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_B71657D5);

void sceHVNetfront_Module_C9B744B4(void) {
}

void func_000478B8(struct Unk_func_000478B8_0 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk8;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0);
    }
    arg0->unk8 = arg1;
}

void func_000478FC(struct Unk_func_000478FC_0 *arg0, M2C_UNK arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk4;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_88977645(temp_v0, -1);
    }
    arg0->unk4 = sceHVNetfront_Module_EE835D7A(arg1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004794C);

void func_0004796C(struct Unk_func_0004796C_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = arg0->unk8;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0);
    }
    temp_v0_2 = arg0->unk4;
    if (temp_v0_2 != 0) {
        sceHVNetfront_Module_88977645(temp_v0_2, -1);
    }
}

s32 func_000479B8(void) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = sceHVNetfront_Module_5CA39435(0x14);
    var_v0 = 0;
    if (temp_v0 != 0) {
        func_0004794C(temp_v0);
        var_v0 = temp_v0;
    }
    return var_v0;
}

void func_000479F8(struct Unk_func_0004796C_0 *arg0) {
    func_0004796C(arg0);
    sceHVNetfront_Module_A2F4AC9E((s32) arg0);
}

s32 sceHVNetfront_Module_81A43081(void) {
    return 1;
}

void func_00047A2C(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00047A34);

void func_00047A54(s32 arg0) {
    func_00047A2C();
    sceHVNetfront_Module_A2F4AC9E(arg0);
}

s32 sceHVNetfront_Module_4B122153(struct Unk_sceHVNetfront_Module_4B122153_0 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceHVNetfront_Module_24614BB0(arg1, 1);
    var_v1 = 0;
    if (temp_v0 != 0) {
        arg0->unk4 = temp_v0;
        var_v1 = 1;
        arg0->unk8 = 0x4E21;
        arg0->unk0 = arg1;
    }
    return var_v1;
}

void sceHVNetfront_Module_B3733A46(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00047AE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00047BBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00047C54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_E1B41D47);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_4370F699);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00047EA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_B588DC22);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_48F86618);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_F2D8CC12);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120538);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0012053C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0012054C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120550);

M2C_UNK *sceHVNetfront_Module_BF1F29EC(s32 arg0) {
    M2C_UNK *var_v0;

    var_v0 = "-----------------------------3943144700513--\r\n";
    if (arg0 == 0) {
        var_v0 = "-----------------------------3943144700513\r\n";
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00048180);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00048208);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000483DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_001205FC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120608);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120614);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120618);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120620);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_1633B2A5);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_B205F749);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_77FCD4C1);

s32 sceHVNetfront_Module_57C112FD(s32 **arg0, M2C_UNK arg1) {
    s32 (*temp_v0_2)(void **, M2C_UNK);
    s32 var_s0;
    void **temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    temp_v0_2 = M2C_FIELD(*temp_v0, s32 (**)(void **, M2C_UNK), 0xC);
    var_s0 = -8;
    if (temp_v0_2 != NULL) {
        var_s0 = temp_v0_2(temp_v0, arg1);
    }
    sceHVNetfront_Module_B29BE9CE(arg0);
    return var_s0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_BEFC4F0D);

s32 **sceHVNetfront_Module_4136A224(s32 **arg0) {
    struct Unk_sceHVNetfront_Module_4136A224_temp_v0 *temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    temp_v0->unk4 = (s32) (temp_v0->unk4 + 1);
    sceHVNetfront_Module_B29BE9CE(arg0);
    return arg0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004877C);

void sceHVNetfront_Module_4EA9EF34(s32 **arg0) {
    M2C_UNK (*temp_v0_3)(void *);
    s32 temp_v0_2;
    struct Unk_sceHVNetfront_Module_4EA9EF34_temp_v0 *temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    temp_v0_2 = temp_v0->unk4 - 1;
    temp_v0->unk4 = temp_v0_2;
    if (temp_v0_2 <= 0) {
        temp_v0_3 = M2C_FIELD(temp_v0->unk0, M2C_UNK (**)(void *), 0x10);
        if (temp_v0_3 != NULL) {
            temp_v0_3(temp_v0);
        }
        sceHVNetfront_Module_B29BE9CE(arg0);
        sceHVNetfront_Module_880239D0(arg0);
        return;
    }
    sceHVNetfront_Module_B29BE9CE(arg0);
}

void func_00048818(s32 **arg0, s32 arg1) {
    s32 temp_v0_2;
    struct Unk_func_00048818_temp_v0 *temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    temp_v0_2 = temp_v0->unk8;
    if (temp_v0_2 != 0) {
        sceHVNetfront_Module_309FE171(temp_v0_2);
    }
    temp_v0->unk8 = arg1;
    sceHVNetfront_Module_B29BE9CE(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00048874);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000488CC);

void func_0004898C(s32 **arg0) {
    sceHVNetfront_Module_880239D0(arg0);
}

void func_000489A8(void) {
}

void func_000489B0(void) {
}

void func_000489B8(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000489C0);

void func_000489D0(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_ECD79235);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_EED7BC00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_8C211F28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_7C86459A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00048C48);

void sceHVNetfront_Module_6F772B18(void **arg0, s32 ***arg1, s32 arg2) {
    M2C_UNK (*temp_v0)();
    s32 **temp_v0_2;

    if (arg2 == 0) {
        temp_v0 = M2C_FIELD(*arg0, M2C_UNK (**)(), 0x1C);
        if (temp_v0 != NULL) {
            temp_v0();
        }
    }
    temp_v0_2 = *arg1;
    if (temp_v0_2 != NULL) {
        sceHVNetfront_Module_B23D7F7F(temp_v0_2, -1, 0);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_55CF576E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_55AD0295);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00048EE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_7184F810);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00048F24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_D9560A46);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00048F90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000490BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_3D27259A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_CA6AD0F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000493A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_FF5E3F11);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_9AA02806);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_015932EE);

void sceHVNetfront_Module_A7781C73(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_E7C67B64);

s32 **sceHVNetfront_Module_2BB00E05(s32 **arg0) {
    struct Unk_sceHVNetfront_Module_2BB00E05_temp_v0 *temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    temp_v0->unk4 = (s32) (temp_v0->unk4 + 1);
    sceHVNetfront_Module_B29BE9CE(arg0);
    return arg0;
}

s32 sceHVNetfront_Module_B05DB1D4(s32 **arg0, M2C_UNK arg1) {
    s32 temp_v0_2;
    s32 var_s0;
    void **temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    var_s0 = -8;
    temp_v0_2 = M2C_FIELD(*temp_v0, s32 *, 0x10);
    if (temp_v0_2 != 0) {
        var_s0 = func_0004877C(temp_v0_2, temp_v0, arg1);
    }
    sceHVNetfront_Module_B29BE9CE(arg0);
    return var_s0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_309FE171);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00049914);

void func_00049984(s32 arg0, s32 arg1) {
    func_00041678(arg0 + 8, arg1 + 8, 0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000499A8);

void func_00049A24(s32 arg0) {
    sceHVNetfront_Module_728066E6(arg0 + 8);
}

s32 func_00049A40(s32 arg0, s32 arg1, s32 ***arg2) {
    s32 **temp_v0;
    s32 var_v1;
    void *temp_v0_2;

    temp_v0 = sceHVNetfront_Module_D39BDE45(0x70);
    *arg2 = temp_v0;
    var_v1 = -6;
    if (temp_v0 != NULL) {
        temp_v0_2 = sceHVNetfront_Module_896E55F6(temp_v0);
        sceHVNetfront_Module_B205F749(temp_v0_2, arg0);
        sceHVNetfront_Module_131F0AB6(temp_v0_2 + 8, arg1);
        sceHVNetfront_Module_B29BE9CE(*arg2);
        var_v1 = 0;
    }
    return var_v1;
}

void func_00049AD0(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_77FCD4C1(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 4) = &func_00049914;
    M2C_FIELD(arg0, void (**)(s32, s32), 8) = func_00049984;
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &func_000499A8;
    M2C_FIELD(arg0, void (**)(s32), 0x10) = func_00049A24;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00049B24);

s32 func_00049B6C(struct Unk_func_00049B6C_0 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0_2 = arg0->unk2C;
    if (temp_v0_2 != 0) {
        sceHVNetfront_Module_88977645(temp_v0_2, -1);
    }
    temp_v0 = sceHVNetfront_Module_CF3077BE(arg1, arg2);
    arg0->unk2C = temp_v0;
    return temp_v0 != 0;
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120634);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00049BD4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120648);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00049D9C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004A268);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004A340);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004A540);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004A61C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004A7D4);

void func_0004A8A4(struct Unk_func_0004A8A4_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    sceHVNetfront_Module_38FB998B((u8 *)arg0 + 0x44);
    temp_v0 = arg0->unk28;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_F55329EF(temp_v0);
    }
    temp_v0_2 = arg0->unk24;
    if (temp_v0_2 != 0) {
        sceHVNetfront_Module_88977645(temp_v0_2, -1);
    }
    temp_v0_3 = arg0->unk2C;
    if (temp_v0_3 != 0) {
        sceHVNetfront_Module_88977645(temp_v0_3, -1);
    }
    sceHVNetfront_Module_9AA02806(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004A918);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004A968);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004AC68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004AD7C);

void sceHVNetfront_Module_9FF54B2A(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s1;

    sceHVNetfront_Module_015932EE(arg0, arg1, arg2, arg3);
    M2C_FIELD(arg0, s32 *, 8) = 1;
    M2C_FIELD(arg0, void (**)(void *), 0x18) = func_0004A8A4;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &func_0004A61C;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &func_0004A918;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &func_0004A968;
    temp_s1 = arg0 + 0x48;
    M2C_FIELD(arg0, s32 *, 0x24) = 0x7FFFFFFF;
    func_00097698(arg0 + 0x28);
    sceHVNetfront_Module_9C5ACD64(arg0 + 0x44, (s32) &func_00049D9C);
    func_00049AD0(temp_s1, arg0);
    M2C_FIELD(arg0, s32 *, 0x10) = temp_s1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_A5C11A26);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_341E643A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_64367903);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004B068);

s32 sceHVNetfront_Module_BBDFB7FD(struct Unk_sceHVNetfront_Module_BBDFB7FD_0 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (sceHVNetfront_Module_FF5E3F11() != 0) {
        arg0->unk1C = 0;
        var_v1 = 1;
    }
    return var_v1;
}

void sceHVNetfront_Module_4329FB08(void *arg0) {
    sceHVNetfront_Module_9AA02806(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_876375DE);

s32 sceHVNetfront_Module_0C2B2F3B(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x10);
}

void func_0004B3BC(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x1C) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_7F9C3EA0);

s32 func_0004B430(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = sceHVNetfront_Module_CF3077BE(arg1, arg2);
    var_v0 = 0;
    if (temp_v0 != 0) {
        temp_s0 = sceHVNetfront_Module_D9560A46(*arg0, 0, temp_v0, 0);
        sceHVNetfront_Module_88977645(temp_v0, -1);
        var_v0 = temp_s0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_11B159B6);

s32 func_0004B52C(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_v0;
    s32 var_v1;

    var_v1 = arg3;
    if (arg1 != 0) {
        var_v1 = func_0004B430(arg0, arg1, arg2);
    }
    var_v0 = -5;
    if (var_v1 != 0) {
        var_v0 = sceHVNetfront_Module_E7C67B64((s32) arg0, 0, var_v1, arg4);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004B58C);

void func_0004B608(s32 arg0) {
    sceHVNetfront_Module_309FE171(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_7E5C8FE3);

void sceHVNetfront_Module_99111A60(void) {
    sceHVNetfront_Module_A7781C73();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004B698);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004B6C8);

void func_0004B6D8(void) {
}

void func_0004B6E0(void **arg0) {
    M2C_UNK (*temp_v0)();

    temp_v0 = M2C_FIELD(*arg0, M2C_UNK (**)(), 0x10);
    if (temp_v0 != NULL) {
        temp_v0();
    }
}

void sceHVNetfront_Module_7DF3A448(void **arg0) {
    func_0004B6E0(arg0);
    sceHVNetfront_Module_A2F4AC9E((s32) arg0);
}

s32 func_0004B738(void **arg0) {
    s32 (*temp_v0)();
    s32 var_v1;

    temp_v0 = M2C_FIELD(*arg0, s32 (**)(), 4);
    var_v1 = -1;
    if (temp_v0 != NULL) {
        var_v1 = temp_v0();
    }
    return var_v1;
}

s32 func_0004B76C(void **arg0) {
    s32 (*temp_v0)();
    s32 var_v1;

    temp_v0 = M2C_FIELD(*arg0, s32 (**)(), 8);
    var_v1 = 0;
    if (temp_v0 != NULL) {
        var_v1 = temp_v0();
    }
    return var_v1;
}

void func_0004B7A0(s32 arg0) {
    func_0004B6C8(arg0, 0);
}

void func_0004B7BC(void) {
    func_0004B6D8();
}

void func_0004B7D8(s32 arg0) {
    func_0004B6C8(arg0, 1);
}

void func_0004B7F4(void) {
    func_0004B6D8();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004B810);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004B848);

void func_0004B860(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_0A4203B2);

void sceHVNetfront_Module_E2C79DAF(void **arg0) {
    M2C_UNK (*temp_v0)();

    temp_v0 = M2C_FIELD(*arg0, M2C_UNK (**)(), 0x10);
    if (temp_v0 != NULL) {
        temp_v0();
    }
}

void sceHVNetfront_Module_11F03B41(void **arg0) {
    M2C_UNK (*temp_v0)();

    temp_v0 = M2C_FIELD(*arg0, M2C_UNK (**)(), 0xC);
    if (temp_v0 != NULL) {
        temp_v0();
    }
}

void sceHVNetfront_Module_C40D454A(void **arg0) {
    sceHVNetfront_Module_11F03B41(arg0);
    sceHVNetfront_Module_A2F4AC9E((s32) arg0);
}

void sceHVNetfront_Module_F9D901ED(void **arg0) {
    M2C_UNK (*temp_v0)();

    temp_v0 = M2C_FIELD(*arg0, M2C_UNK (**)(), 0x14);
    if (temp_v0 != NULL) {
        temp_v0();
    }
}

void sceHVNetfront_Module_0146B875(void **arg0) {
    M2C_UNK (*temp_v0)();

    temp_v0 = M2C_FIELD(*arg0, M2C_UNK (**)(), 0x18);
    if (temp_v0 != NULL) {
        temp_v0();
    }
}

s32 sceHVNetfront_Module_D728FA9F(void **arg0) {
    s32 (*temp_v0)();
    s32 var_v1;

    temp_v0 = M2C_FIELD(*arg0, s32 (**)(), 0x1C);
    var_v1 = 0;
    if (temp_v0 != NULL) {
        var_v1 = temp_v0();
    }
    return var_v1;
}

s32 sceHVNetfront_Module_9E9146BE(void **arg0) {
    s32 (*temp_v0)();
    s32 var_v1;

    temp_v0 = M2C_FIELD(*arg0, s32 (**)(), 0x20);
    var_v1 = -1;
    if (temp_v0 != NULL) {
        var_v1 = temp_v0();
    }
    return var_v1;
}

void func_0004BA50(void **arg0, M2C_UNK arg1) {
    func_0004B698(arg1, M2C_FIELD(*arg0, s32 *, 4), arg0);
}

void func_0004BA78(s32 arg0, s32 arg1) {
    func_0004B848(arg0, 0, arg1);
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
}

void func_0004BAB4(void) {
    func_0004B860();
}

s32 sceHVNetfront_Module_DCC7ADEA(void **arg0) {
    s32 (*temp_v0)();
    s32 var_v1;

    temp_v0 = M2C_FIELD(*arg0, s32 (**)(), 0x14);
    var_v1 = 0;
    if (temp_v0 != NULL) {
        var_v1 = temp_v0();
    }
    return var_v1;
}

void func_0004BB04(void **arg0, s32 arg1) {
    func_0004B698(arg1, M2C_FIELD(*arg0, s32 *, 4), arg0);
}

void func_0004BB2C(s32 arg0, s32 arg1) {
    func_0004B848(arg0, 1, arg1);
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}

void func_0004BB5C(void) {
    func_0004B860();
}

void sceHVNetfront_Module_AEF7B564(s32 *arg0, M2C_UNK arg1) {
    func_0004B810(arg1, *arg0);
}

void sceHVNetfront_Module_48B72D3A(struct Unk_sceHVNetfront_Module_48B72D3A_0 *arg0, s32 arg1) {
    func_0004B810(arg1, arg0->unk4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_2E045C78);

void func_0004BC5C(struct Unk_func_0004BC5C_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = arg1;
    arg0->unk4 = arg2;
}

void func_0004BC68(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004BC70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004BEB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_12ECDFFD);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_001206EC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_001206F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004C508);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004C5B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004C61C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_EECC58C1);

void sceHVNetfront_Module_A86CAFDE(void **arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void *temp_a0;

    temp_a0 = *arg0;
    sceHVNetfront_Module_5DBB6513(temp_a0 + 0xC, M2C_FIELD(temp_a0, s32 *, 4), arg1, arg2);
}

void sceHVNetfront_Module_AB616A03(void **arg0) {
    sceHVNetfront_Module_A86CAFDE(arg0, (s32) &D_00120C90, 5);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_A08F42C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004CA70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004CB04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_783814D1);

void sceHVNetfront_Module_4B5CEB81(s32 arg0, void **arg1, s32 arg2) {
    void *temp_a1;

    temp_a1 = *arg1;
    sceHVNetfront_Module_783814D1(arg0, (s32) (temp_a1 + 0xC), M2C_FIELD(temp_a1, s32 *, 4), arg2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004CCF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_5D99F11A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_3AAC0376);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_907152F5);

s32 func_0004D29C(s32 **arg0, M2C_UNK arg1) {
    s32 temp_s0;

    temp_s0 = sceHVNetfront_Module_896E55F6(arg0) + 0xC;
    sceHVNetfront_Module_907152F5(temp_s0, M2C_FIELD(*arg0, s32 *, 4), arg1);
    return temp_s0;
}

void func_0004D2F4(s32 arg0, void **arg1) {
    void *temp_a1;

    temp_a1 = *arg1;
    sceHVNetfront_Module_5BA9037D(arg0, (s32) (temp_a1 + 0xC), M2C_FIELD(temp_a1, s32 *, 4));
}

s32 sceHVNetfront_Module_8690B158(struct Unk_sceHVNetfront_Module_8690B158_0 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceHVNetfront_Module_24614BB0(arg1, 0x14);
    var_v1 = 0;
    if (temp_v0 != 0) {
        arg0->unk4 = temp_v0;
        var_v1 = 1;
        arg0->unk0 = arg1;
        arg0->unk8 = 7;
        arg0->unkC = 0;
    }
    return var_v1;
}

void sceHVNetfront_Module_A9E1B08D(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004D37C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004D454);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004D57C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004D66C);

void func_0004D6DC(s32 arg0, s32 arg1) {
    if (arg1 >= 7) {
        func_0004D57C(arg0, arg1);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004D700);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004D774);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004D7C4);

void func_0004D814(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_D611E938(arg0, 0, 0x28);
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
}

void func_0004D850(struct Unk_func_0004D850_0 *arg0) {
    s32 temp_v0;

    func_0004D7C4();
    temp_v0 = arg0->unk20;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0);
    }
}

s32 func_0004D888(struct Unk_func_0004D888_0 *arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0_2 = arg0->unk20;
    if (temp_v0_2 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0_2);
    }
    if (arg1 == 0) {
        arg0->unk20 = 0;
        return 1;
    }
    temp_v0 = sceHVNetfront_Module_D9FE99F5(arg1, arg2);
    arg0->unk20 = temp_v0;
    return temp_v0 != 0;
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120788);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0012078C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120790);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120798);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_001207A0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_001207AC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_001207B8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_001207C4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_001207CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004D8FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004DC68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004DCD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004DD40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_865DA205);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_18A89A8D);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004E184);

s32 func_0004E220(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_0004E184(arg2, arg3);
    var_v0 = 0;
    if (temp_v0 != 0) {
        temp_s0 = sceHVNetfront_Module_5E3D4ABB(arg0, arg1, temp_v0);
        sceHVNetfront_Module_0D525122(temp_v0);
        var_v0 = temp_s0;
    }
    return var_v0;
}

void func_0004E290(s32 arg0, s32 arg1, s32 arg2) {
    func_0004E220(arg0, arg1, arg2, sceHVNetfront_Module_15875ED4(arg2));
}

s32 func_0004E2E4(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s0_2;

    temp_s0_2 = sceHVNetfront_Module_E459881C(arg2);
    temp_s0 = func_0004E220(arg0, arg1, temp_s0_2, sceHVNetfront_Module_3EDA77E7(arg2));
    sceHVNetfront_Module_08549708(arg2);
    return temp_s0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004E35C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004E3CC);

s32 sceHVNetfront_Module_818326B6(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 temp_v0;

    temp_v0 = func_0004E3CC(arg0, arg1, arg2, 0, (s32) &D_00120538, 0);
    if (arg3 != NULL) {
        *arg3 = temp_v0;
    }
    return arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004E690);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_9F60651B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004E9C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004EBB0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_001207F4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120834);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_2F0F73A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_2BC805F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004F0EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004F2A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004F344);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_EF65C5D2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004F8BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_F208D3A6);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004FA98);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0004FAB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_49631038);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_4E064DB2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_ECAD3AF5);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_3450EDDB);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_6A893809);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_39054344);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00050020);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_3BB4DE88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_5DBEC6D2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00050420);

void func_00050598(struct Unk_func_00050598_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk24;
    if (temp_v0 >= 0) {
        sceHVNetfront_Module_71125C97(temp_v0);
        arg0->unk24 = -1;
    }
    arg0->unk0 = 0;
    arg0->unk8 = 0;
    arg0->unk18 = 0;
    arg0->unk14 = 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000505E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000506D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000508D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000509CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120A4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00050A68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00050D5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00051028);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00051958);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00051B2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00051C6C);

void func_00051CCC(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_14A6B003((s32) &D_00120D90, arg0, arg1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_B06196EE);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_C07EB167);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00051E04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_1CC665B1);

void func_00051FD8(struct Unk_func_00051FD8_0 *arg0) {
    arg0->unk17C0 = 0;
}

void func_00051FE0(void) {
}

void func_00051FE8(struct Unk_func_00051FE8_0 *arg0, void **arg1, s32 arg2) {
    if (arg1 != NULL) {
        M2C_FIELD(*arg1, s32 *, 0x38) = arg2;
        return;
    }
    arg0->unk17C0 = arg2;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00052004);

void func_00052068(s32 arg0, s32 arg1) {
    func_00052004(arg0, arg1);
    sceHVNetfront_Module_880239D0((s32 **) arg1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_AD777988);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_9160D20A);

void func_000521FC(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x20) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00052208);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_0C8E766E);

void sceHVNetfront_Module_DA60A0AF(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x2C) = arg1;
}

void func_0005225C(void **arg0, s32 arg1) {
    struct Unk_func_0005225C_temp_v1 *temp_v1;

    temp_v1 = *arg0;
    temp_v1->unk30 = (s32) (temp_v1->unk30 | arg1);
}

void func_00052270(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x34) = arg1;
}

s32 func_0005227C(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x34);
}

void func_00052288(struct Unk_func_00052288_0 *arg0, s32 arg1, struct Unk_func_00052288_2 *arg2) {
    if ((arg1 != 0) & (arg2 != NULL)) {
        arg0->unk0 = 1;
        arg0->unk4 = (s32) arg2->unk0;
        arg0->unk8 = (s32) arg2->unk4;
        return;
    }
    arg0->unk0 = 0;
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120BDC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120C10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120C90);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120CC4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120D50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120D90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000522BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00052334);

s32 func_00052384(struct Unk_func_00052384_0 *arg0) {
    s32 temp_a2;
    s32 var_v1;

    temp_a2 = arg0->unk0;
    var_v1 = 0;
    if (((u32) (temp_a2 + 0x05F5E100) <= 0x0BEBC1FFU) || ((temp_a2 == 0x05F5E100) && (arg0->unk4 == 0))) {
        var_v1 = 1;
    }
    return var_v1;
}

void func_000523C8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_000706E0(arg3, arg4, 0x3E8, arg5);
    func_000706E0(arg2, arg3, 0x3C, arg5);
    func_000706E0(arg1, arg2, 0x3C, arg5);
    func_000706E0(arg0, arg1, 0x18, arg5);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00052468);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_A48D19CF);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000525D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00052714);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005278C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000527D8);

M2C_UNK *func_00052828(void) {
    return &D_00123DB8;
}

void func_00052834(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    sceHVNetfront_Module_AD3723FF(arg0, arg1, (arg2 == 0) ? 1 : arg2, arg3);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00052854);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00052AF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00052D28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00052DE8);

void func_00052EDC(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_7C762DEC(arg0, arg1, (s32) &D_00120EB8, 2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00052F00);

void func_00052FB0(s32 arg0, s32 arg1) {
    func_00052F00(arg0, arg1, 0);
}

void func_00052FCC(s32 arg0, s32 arg1) {
    func_00052F00(arg0, arg1, 1);
}

void func_00052FE8(s32 arg0, s32 arg1) {
    func_00052F00(arg0, arg1, 2);
}

void func_00053004(s32 arg0, s32 arg1) {
    func_00052F00(arg0, arg1, 3);
}

void func_00053020(s32 arg0, s32 arg1) {
    func_00052F00(arg0, arg1, 4);
}

void func_0005303C(s32 arg0, s32 arg1) {
    func_00052F00(arg0, arg1, 5);
}

void func_00053058(s32 arg0, s32 arg1) {
    func_00052F00(arg0, arg1, 6);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00053074);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005312C);

void func_000531D0(s32 arg0, s32 arg1) {
    func_0005312C(arg0, arg1, 1, 8);
}

void func_000531F0(s32 arg0, s32 arg1) {
    func_0005312C(arg0, arg1, 1, 8);
}

void func_00053210(s32 arg0, s32 arg1) {
    func_0005312C(arg0, arg1, 0, 0xA);
}

void func_00053230(s32 arg0, s32 arg1) {
    func_0005312C(arg0, arg1, 0, 0);
}

void func_00053250(s32 arg0, s32 arg1) {
    func_0005312C(arg0, arg1, 1, 0);
}

void func_00053270(s32 arg0, s32 arg1) {
    func_0005312C(arg0, arg1, 0, 1);
}

void func_00053290(s32 arg0, s32 arg1) {
    func_0005312C(arg0, arg1, 1, 1);
}

void func_000532B0(s32 arg0, s32 arg1) {
    func_0005312C(arg0, arg1, 0, 2);
}

void func_000532D0(s32 arg0, s32 arg1) {
    func_0005312C(arg0, arg1, 1, 2);
}

void func_000532F0(s32 arg0, s32 arg1) {
    func_0005312C(arg0, arg1, 0, 7);
}

void func_00053310(s32 arg0, s32 arg1) {
    func_0005312C(arg0, arg1, 1, 7);
}

void func_00053330(s32 arg0, s32 arg1) {
    func_0005312C(arg0, arg1, 0, 3);
}

void func_00053350(s32 arg0, s32 arg1) {
    func_0005312C(arg0, arg1, 1, 3);
}

void func_00053370(s32 arg0, s32 arg1) {
    func_0005312C(arg0, arg1, 0, 4);
}

void func_00053390(s32 arg0, s32 arg1) {
    func_0005312C(arg0, arg1, 1, 4);
}

void func_000533B0(s32 arg0, s32 arg1) {
    func_0005312C(arg0, arg1, 0, 5);
}

void func_000533D0(s32 arg0, s32 arg1) {
    func_0005312C(arg0, arg1, 1, 5);
}

void func_000533F0(s32 arg0, s32 arg1) {
    func_0005312C(arg0, arg1, 0, 6);
}

void func_00053410(s32 arg0, s32 arg1) {
    func_0005312C(arg0, arg1, 1, 6);
}

void func_00053430(s32 arg0, s32 arg1) {
    func_0005312C(arg0, arg1, 1, 9);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00053450);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000535BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000536B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000537BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00053828);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005384C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00053870);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00053894);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000538B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000538DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00053900);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00053924);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00053948);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000539B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00053A20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00053A8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00053AF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00053B64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00053BD0);

void func_00053CAC(s32 arg0, s32 arg1) {
    func_0005EFBC(arg0, arg1, (s32) &D_00121308);
}

s32 func_00053CCC(struct Unk_func_00053CCC_0 *arg0, s32 arg1) {
    return sceHVNetfront_Module_52564790(arg0, arg1) == (s32) &D_00120E80;
}

void func_00053CF8(s32 arg0) {
    func_00057FC8(arg0, (s32) &D_00123DB8, 4, 6);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00053D20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00053D5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00053E14);

void func_00053EB8(struct Unk_func_00053EB8_0 *arg0) {
    arg0->unk1820 = 0;
    arg0->unk1824 = 0;
    sceHVNetfront_Module_0F5AA1D5((u8 *)arg0 + 0x1808, 4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00053EE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00053F80);

void func_0005401C(struct Unk_func_0005401C_0 *arg0, s32 arg1) {
    arg0->unk1820 = arg1;
}

void func_00054024(struct Unk_func_00054024_0 *arg0, s32 arg1) {
    arg0->unk1824 = arg1;
}

void func_0005402C(void) {
}

void func_00054034(void) {
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120E80);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120EB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00120EE8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121308);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121330);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121334);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005403C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000540E4);

M2C_UNK *func_00054150(void) {
    return &D_001241C1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005415C);

void func_0005419C(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_00054774();
    if (temp_v0 != 0) {
        sceHVNetfront_Module_9D1EA353(arg0, temp_v0);
    }
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0012136C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_001213A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000541D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00054364);

void func_0005443C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00054364(arg0, arg1, arg2, arg3, 0);
}

void func_00054458(s32 arg0, s32 arg1) {
    func_000541D4(arg0, arg1, 0);
}

void func_00054474(s32 arg0, s32 arg1) {
    func_0005EFBC(arg0, arg1, (s32) &D_001213C4);
}

void func_00054494(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00054364(arg0, arg1, arg2, arg3, 1);
}

void func_000544B0(s32 arg0, s32 arg1) {
    func_000541D4(arg0, arg1, 1);
}

void func_000544CC(s32 arg0, s32 arg1) {
    func_0005EFBC(arg0, arg1, (s32) &D_001213E8);
}

void func_000544EC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00054364(arg0, arg1, arg2, arg3, 2);
}

void func_00054508(s32 arg0, s32 arg1) {
    func_000541D4(arg0, arg1, 2);
}

void func_00054524(s32 arg0, s32 arg1) {
    func_0005EFBC(arg0, arg1, (s32) &D_0012140C);
}

void func_00054544(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00054364(arg0, arg1, arg2, arg3, 3);
}

void func_00054560(s32 arg0, s32 arg1) {
    func_000541D4(arg0, arg1, 3);
}

void func_0005457C(s32 arg0, s32 arg1) {
    func_0005EFBC(arg0, arg1, (s32) &D_00121430);
}

void func_0005459C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00054364(arg0, arg1, arg2, arg3, 4);
}

void func_000545B8(s32 arg0, s32 arg1) {
    func_000541D4(arg0, arg1, 4);
}

void func_000545D4(s32 arg0, s32 arg1) {
    func_0005EFBC(arg0, arg1, (s32) &D_00121454);
}

void func_000545F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00054364(arg0, arg1, arg2, arg3, 5);
}

void func_00054610(s32 arg0, s32 arg1) {
    func_000541D4(arg0, arg1, 5);
}

void func_0005462C(s32 arg0, s32 arg1) {
    func_0005EFBC(arg0, arg1, (s32) &D_00121478);
}

void func_0005464C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00054364(arg0, arg1, arg2, arg3, 6);
}

void func_00054668(s32 arg0, s32 arg1) {
    func_000541D4(arg0, arg1, 6);
}

void func_00054684(s32 arg0, s32 arg1) {
    func_0005EFBC(arg0, arg1, (s32) &D_0012149C);
}

void func_000546A4(s32 arg0) {
    func_0005415C(arg0, 0);
}

s32 func_000546C0(struct Unk_func_00053CCC_0 *arg0, s32 arg1) {
    return sceHVNetfront_Module_52564790(arg0, arg1) == (s32) &D_0012136C;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_A958E676);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_001213C4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_001213E8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0012140C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121430);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121454);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121478);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_0012149C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00054774);

M2C_UNK *func_000548B8(void) {
    return &D_00123D8C;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000548C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00054950);

s32 func_00054A0C(struct Unk_func_00053CCC_0 *arg0, s32 arg1) {
    return sceHVNetfront_Module_52564790(arg0, arg1) == (s32) &D_001214C4;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00054A38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_001214C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00054CA8);

s32 func_00054CB4(struct Unk_func_00053CCC_0 *arg0, s32 arg1) {
    return sceHVNetfront_Module_52564790(arg0, arg1) == (s32) &D_00121508;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00054CE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00054EB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000550EC);

M2C_UNK *func_00055188(void) {
    return &D_00123D93;
}

M2C_UNK *func_00055194(void) {
    return &D_00123E4E;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000551A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00055264);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000552D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000552FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000555C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005565C);

M2C_UNK *func_00055724(void) {
    return &D_00123D93;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00055730);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000557BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005582C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00055974);

void func_00055A08(struct Unk_func_00055A08_0 *arg0, s32 arg1) {
    void *sp0;
    sceHVNetfront_Module_1CC15992(arg0, arg1, &sp0);
    sceHVNetfront_Module_88977645(sp0, -1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00055A30);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00055A50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_0DDE841E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00055B2C);

s32 sceHVNetfront_Module_E7909110(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_0005F9D8(arg0, arg3, arg4, arg5, arg6);
    var_v0 = 0;
    if (temp_v0 != 0) {
        temp_s0 = func_00055B2C(arg0, arg1, temp_v0, arg2);
        func_0005FC08((void **) temp_v0, -1);
        var_v0 = temp_s0;
    }
    return var_v0;
}

s32 func_00055D80(void ***arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 (*temp_s0)(void ***, M2C_UNK, M2C_UNK, M2C_UNK);
    void *temp_s0_2;

    temp_s0_2 = **arg0;
    temp_s0 = M2C_FIELD(M2C_FIELD((sceHVNetfront_Module_234F9191(temp_s0_2 + 4, arg2) + M2C_FIELD(temp_s0_2, s16 *, 0x10)), void **, 0x24), s32 (**)(void ***, M2C_UNK, M2C_UNK, M2C_UNK), 0x2C);
    if (temp_s0 == NULL) {
        sceHVNetfront_Module_9716DAAD(arg0, 5);
        return 0;
    }
    func_00068CD0(arg0, 6);
    return temp_s0(arg0, arg1, arg2, arg3);
}

s32 func_00055E28(void ***arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 (*temp_s1)(void ***, s32, s32, s32);

    temp_s1 = M2C_FIELD(M2C_FIELD(func_0005C460(**arg0 + 4, arg2, arg4), void **, 0x24), s32 (**)(void ***, s32, s32, s32), 0x2C);
    if (temp_s1 == NULL) {
        sceHVNetfront_Module_9716DAAD(arg0, 5);
        return 0;
    }
    func_00068CD0(arg0, 6);
    return temp_s1(arg0, arg1, arg2, arg3);
}

s32 func_00055ECC(void ***arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3) {
    s32 (*temp_s0)(void ***, M2C_UNK, s32, M2C_UNK);
    void *temp_s0_2;

    temp_s0_2 = **arg0;
    temp_s0 = M2C_FIELD(M2C_FIELD((sceHVNetfront_Module_234F9191(temp_s0_2 + 4, arg2) + M2C_FIELD(temp_s0_2, s16 *, 0x10)), void **, 0x24), s32 (**)(void ***, M2C_UNK, s32, M2C_UNK), 0x28);
    if (temp_s0 == NULL) {
        sceHVNetfront_Module_9716DAAD(arg0, 5);
        return 0;
    }
    func_00068CD0(arg0, 7);
    return temp_s0(arg0, arg1, arg2, arg3);
}

s32 func_00055F74(void ***arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 (*temp_s1)(void ***, s32, s32, s32);

    temp_s1 = M2C_FIELD(M2C_FIELD(func_0005C460(**arg0 + 4, arg2, arg4), void **, 0x24), s32 (**)(void ***, s32, s32, s32), 0x28);
    if (temp_s1 == NULL) {
        sceHVNetfront_Module_9716DAAD(arg0, 5);
        return 0;
    }
    func_00068CD0(arg0, 7);
    return temp_s1(arg0, arg1, arg2, arg3);
}

s32 func_00056018(void ***arg0, s32 arg1, M2C_UNK arg2) {
    s32 (*temp_v0)(void ***, s32, M2C_UNK);
    void *temp_s0;

    temp_s0 = **arg0;
    temp_v0 = M2C_FIELD(M2C_FIELD((sceHVNetfront_Module_234F9191(temp_s0 + 4, arg1) + M2C_FIELD(temp_s0, s16 *, 0x10)), void **, 0x24), s32 (**)(void ***, s32, M2C_UNK), 0x30);
    if (temp_v0 == NULL) {
        sceHVNetfront_Module_9716DAAD(arg0, 5);
        return 0;
    }
    return temp_v0(arg0, arg1, arg2);
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121508);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121540);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121578);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_CA404834);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_D1B3D959);

void sceHVNetfront_Module_A03FCFFE(struct Unk_sceHVNetfront_Module_A03FCFFE_0 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD((sceHVNetfront_Module_234F9191((u8 *)arg0 + 4, arg1) + arg0->unk10), s32 *, 0xC) = arg2;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00056370);

s32 func_0005656C(void ***arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_s2;

    temp_s2 = **arg0;
    temp_v0 = sceHVNetfront_Module_E7909110((s32) arg0, arg1, 0, 0, 0, 1, 2);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_9D9CB3AF(temp_s2, temp_v0, sceHVNetfront_Module_0C8E766E(M2C_FIELD(*arg0, s32 *, 4), 0));
    }
    return temp_v0;
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_001215C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000565E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00056718);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000568D4);

void func_00056AF4(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_7C762DEC(arg0, arg1, (s32) &D_00121600, 3);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00056B18);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00056BB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00056C00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00056C44);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121600);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00056C8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00056CC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00056D1C);

void func_00056D54(void **arg0, struct Unk_func_00056D54_1 *arg1) {
    s32 temp_s0;
    struct Unk_func_00056D54_temp_v0 *temp_v0;

    if (arg1->unk0 == 0xB) {
        temp_s0 = arg1->unk8;
        temp_v0 = sceHVNetfront_Module_234F9191(*arg0 + 4, temp_s0) + M2C_FIELD(*arg0, s16 *, 0x10);
        if (temp_v0->unk32 == 0) {
            func_00056CC0(arg0, temp_s0, temp_v0);
        }
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00056DC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00056E80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00056F7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00057124);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_63086D26);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000572DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005750C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000575F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00057684);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000576C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00057710);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000577C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000578A4);

void func_00057908(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000577C4(arg0, arg1, arg2, arg3, (s32) &func_000578A4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00057928);

void func_0005798C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000577C4(arg0, arg1, arg2, arg3, (s32) &func_00057928);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000579AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00057A64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00057A90);

s32 func_00057B68(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00057B70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_9E0B1B5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00057FC8);

void func_000580B4(s32 **arg0) {
    sceHVNetfront_Module_880239D0(arg0);
}

s32 *sceHVNetfront_Module_08AC1E83(s32 arg0, s32 arg1) {
    s32 *temp_v0;
    s32 *var_v0;
    s32 temp_v0_2;

    temp_v0 = sceHVNetfront_Module_6D4EE418(0xC);
    var_v0 = NULL;
    if (temp_v0 != NULL) {
        temp_v0_2 = *temp_v0;
        M2C_FIELD(temp_v0_2, s32 *, 8) = 1;
        M2C_FIELD(temp_v0_2, s32 *, 0) = arg0;
        M2C_FIELD(temp_v0_2, s32 *, 4) = arg1;
        sceHVNetfront_Module_46EF316E(arg1, 1);
        var_v0 = temp_v0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_16034D28);

s32 func_00058180(s32 **arg0) {
    return **arg0;
}

s32 func_0005818C(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00058198);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_46EF316E);

void func_00058200(s32 arg0, M2C_UNK arg1) {
    s32 temp_v0;

    temp_v0 = sceHVNetfront_Module_603889A9(arg1);
    sceHVNetfront_Module_5BA9037D(arg0, temp_v0, sceHVNetfront_Module_15875ED4(temp_v0));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_ABAE54FF);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000582E8);

void sceHVNetfront_Module_2E02B3E3(s32 arg0) {
    sceHVNetfront_Module_ABAE54FF(arg0, sceHVNetfront_Module_15875ED4(arg0));
}

s32 sceHVNetfront_Module_A57E0937(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;

    temp_v0 = sceHVNetfront_Module_E459881C(arg0);
    temp_s0 = sceHVNetfront_Module_ABAE54FF(temp_v0, sceHVNetfront_Module_15875ED4(temp_v0));
    sceHVNetfront_Module_08549708(arg0);
    return temp_s0;
}

s32 sceHVNetfront_Module_07F2F8A0(s32 **arg0) {
    s32 temp_s0;

    temp_s0 = sceHVNetfront_Module_ABAE54FF(sceHVNetfront_Module_896E55F6(arg0) + 0xC, M2C_FIELD(*arg0, s32 *, 4));
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s0;
}

s32 sceHVNetfront_Module_169508E3(s32 **arg0) {
    s32 temp_s0;

    temp_s0 = sceHVNetfront_Module_ABAE54FF(sceHVNetfront_Module_896E55F6(arg0) + 0xC, M2C_FIELD(*arg0, s32 *, 4));
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s0;
}

s32 **sceHVNetfront_Module_19F6AEBF(s32 **arg0) {
    s32 *temp_a0;

    temp_a0 = *arg0;
    *temp_a0 += 1;
    return arg0;
}

s32 func_000584D4(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;

    temp_v0 = sceHVNetfront_Module_CE95AE54();
    temp_s0 = sceHVNetfront_Module_ABAE54FF(temp_v0, sceHVNetfront_Module_15875ED4(temp_v0));
    sceHVNetfront_Module_08549708(arg0);
    return temp_s0;
}

s32 func_00058528(s32 **arg0) {
    return **arg0;
}

void func_00058534(s32 **arg0, s32 arg1) {
    **arg0 = arg1;
}

s32 sceHVNetfront_Module_D35CA859(s32 **arg0, s32 arg1) {
    s32 *temp_v1;
    s32 temp_s0;

    temp_v1 = *arg0;
    temp_s0 = *temp_v1 + arg1;
    *temp_v1 = temp_s0;
    if (temp_s0 <= 0) {
        sceHVNetfront_Module_0D525122((s32) arg0);
    }
    return temp_s0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_CE95AE54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_603889A9);

void sceHVNetfront_Module_2BD387F9(s32 arg0) {
    sceHVNetfront_Module_15875ED4(sceHVNetfront_Module_603889A9(arg0));
}

void sceHVNetfront_Module_D5F20A4D(s32 arg0, struct Unk_sceHVNetfront_Module_D5F20A4D_1 *arg1) {
    s32 temp_v0;

    arg1->unk4 = sceHVNetfront_Module_7D1421C0(arg0);
    temp_v0 = sceHVNetfront_Module_CE95AE54(arg0);
    arg1->unk8 = 0x3F8;
    arg1->unk0 = temp_v0;
    arg1->unkC = sceHVNetfront_Module_15875ED4(temp_v0);
    arg1->unk10 = 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_2AB94A45);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00058690);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00058740);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000587C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00058888);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_19F8738A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000589BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00058A64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_7C05902A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_A25C60AE);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_30C8571F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00058C20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00058CC8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_ED34D3DF);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00058DD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00058E5C);

s32 func_00058EE4(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;

    temp_v0 = sceHVNetfront_Module_CE95AE54();
    temp_s0 = sceHVNetfront_Module_CF3077BE(temp_v0, sceHVNetfront_Module_15875ED4(temp_v0));
    sceHVNetfront_Module_08549708(arg0);
    return temp_s0;
}

void func_00058F38(s32 arg0) {
    void *sp0;
    sceHVNetfront_Module_CF3077BE(&sp0, sceHVNetfront_Module_57FDE0C7(&sp0, arg0));
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_001216B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00058F64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000590D0);

void func_000590E8(struct Unk_func_000590E8_0 *arg0) {
    struct Unk_func_000590E8_var_a0 *var_a0;

    var_a0 = arg0->unk0;
    if (arg0->unk4 < var_a0->unk14) {
        do {
            sceHVNetfront_Module_C0A215A2(var_a0);
            var_a0 = arg0->unk0;
        } while (arg0->unk4 < var_a0->unk14);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_0BE49B1B);

void func_00059188(struct Unk_func_00059188_0 *arg0) {
    arg0->unk8 = (s32) (arg0->unk8 - 1);
    sceHVNetfront_Module_C0A215A2(arg0->unk0);
}

void func_000591B4(struct Unk_func_000591B4_0 *arg0, s32 arg1) {
    sceHVNetfront_Module_488D3C7B(arg0->unk0, arg0->unk4 + arg1);
}

void func_000591DC(struct Unk_func_000591DC_0 *arg0, s32 arg1) {
    func_00086C14(arg0->unk0, arg0->unk4 + arg1);
}

void func_00059204(struct Unk_func_00059204_0 *arg0, s32 arg1) {
    sceHVNetfront_Module_440B8F87(arg0->unk0, sceHVNetfront_Module_4681A961(arg0->unk0, arg0->unk4 + arg1), 0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00059248);

void func_00059294(struct Unk_func_00059294_0 *arg0, s32 arg1) {
    sceHVNetfront_Module_234F9191(arg0->unk0, sceHVNetfront_Module_4681A961(arg0->unk0, arg0->unk4 + arg1));
}

void func_000592D4(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_5C264E89);

s32 sceHVNetfront_Module_9E9DD219(struct Unk_sceHVNetfront_Module_9E9DD219_0 *arg0, s32 arg1) {
    s32 var_a1;

    var_a1 = 0;
    if (arg1 >= 0) {
        if (arg1 < arg0->unk8) {
            var_a1 = sceHVNetfront_Module_B71993AE(arg0->unk0, arg0->unk4 + arg1);
        }
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00059368);

void func_000593E8(struct Unk_func_000593E8_0 *arg0) {
    sceHVNetfront_Module_A2F4AC9E(arg0->unk0);
    arg0->unk8 = 0;
    arg0->unkA = 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00059418);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000594E8);

void func_0005951C(void) {
    sceHVNetfront_Module_EA8FFAF4();
}

s32 func_00059538(struct Unk_func_00059538_0 *arg0, s32 arg1) {
    arg0->unk0 = arg1;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00059550);

s32 func_000595C8(struct Unk_func_000595C8_0 *arg0, M2C_UNK arg1) {
    s32 temp_v0;

    temp_v0 = func_00088300(arg0->unk0, arg0->unk8, arg1);
    if (temp_v0 != 0) {
        if (arg0->unk4 == 0) {
            arg0->unk4 = temp_v0;
        }
        arg0->unk8 = temp_v0;
        arg0->unkC = (s32) (arg0->unkC + 1);
    }
    return temp_v0;
}

void func_00059620(s32 *arg0) {
    *arg0 = 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00059628);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_000596BC);

M2C_UNK *func_0005987C(void) {
    return &D_00123DE5;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00059888);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00059988);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00059A60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00059AB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00059C1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00059D50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00059DBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_00059EE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005A014);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005A128);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005A240);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005A69C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005A7D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005A938);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005AA6C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005AD5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005AE84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005AFD0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121818);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121850);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005B0F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005B40C);

M2C_UNK *func_0005B44C(void) {
    return &D_00123DB1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005B458);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005B5C8);

void func_0005B644(void) {
    func_0005B458();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005B660);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005B810);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005B988);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005BAEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005BBC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005BC5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005BCEC);

void func_0005BEB4(s32 arg0, s32 arg1) {
    func_0005EFBC(arg0, arg1, (s32) &D_00121C10);
}

s32 func_0005BED4(struct Unk_func_00053CCC_0 *arg0, s32 arg1) {
    return sceHVNetfront_Module_52564790(arg0, arg1) == (s32) &D_00121B48;
}

void func_0005BF00(s32 arg0) {
    func_00057FC8(arg0, (s32) &D_00123DB1, 6, 5);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005BF28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005BF84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005BFBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005C008);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005C084);

void func_0005C140(s32 arg0, s32 arg1) {
    func_00087D24(arg0, 4, arg1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005C160);

s32 func_0005C204(struct Unk_func_0005C204_0 *arg0, s32 arg1) {
    arg0->unk0 = arg1;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    return 1;
}

void func_0005C218(struct Unk_func_0005C218_0 *arg0) {
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_v0;
    s32 var_s1;

    temp_a1 = arg0->unk4;
    temp_s3 = arg0->unk0;
    if (temp_a1 != 0) {
        var_s1 = temp_a1;
        do {
            temp_s0 = func_0005C2A0((s32) arg0, var_s1);
            func_00087430(temp_s3, var_s1);
            var_s1 = temp_s0;
            temp_v0 = M2C_FIELD(temp_s3, s32 *, 0x20) - 1;
            M2C_FIELD(temp_s3, s32 *, 0x20) = temp_v0;
        } while (temp_s0 != 0);
        arg0->unk8 = 0;
        arg0->unk4 = 0;
        if (temp_v0 == 0) {
            M2C_FIELD(temp_s3, s32 *, 0x1C) = 0;
        }
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005C2A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005C2D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005C334);

s32 func_0005C3A4(struct Unk_func_0005C3A4_0 *arg0, struct Unk_func_0005C3A4_1 *arg1) {
    s32 var_a3;

    var_a3 = 0;
    if (arg1->unk0 != arg0->unk8) {
        var_a3 = sceHVNetfront_Module_E6D4D13C(arg0->unk0, *arg1->unk8, (s32) arg1);
    }
    return var_a3;
}

void func_0005C3E4(void *arg0, s32 arg1, struct Unk_func_0005C3E4_2 *arg2) {
    arg2->unk18 = arg1;
    arg2->unkC = 0;
    sceHVNetfront_Module_2408FBF3(arg0, arg1, arg2);
}

void func_0005C40C(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_703D7675(arg0, arg1);
    M2C_FIELD(arg1, s32 *, 0) = 0;
    if (M2C_FIELD(arg1, s32 *, 0xC) != 0) {
        sceHVNetfront_Module_703D7675(arg0, arg1 + 0xC);
        M2C_FIELD(arg1, s32 *, 0xC) = 0;
    }
    M2C_FIELD(arg1, s32 *, 0x18) = 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005C460);

void func_0005C4D0(struct Unk_func_0005C4D0_0 *arg0) {
    if (!(arg0->unkC & 8)) {
        sceHVNetfront_Module_F1423651((u8 *)arg0 + 0x10);
        arg0->unkC = 8;
    }
}

void func_0005C510(struct Unk_func_0005C510_0 *arg0) {
    sceHVNetfront_Module_88977645(arg0->unk8, -1);
    if (!(arg0->unkC & 8)) {
        sceHVNetfront_Module_F1423651((u8 *)arg0 + 0x10);
        arg0->unkC = 8;
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005C55C);

s32 func_0005C5B8(s32 arg0) {
    return arg0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005C5C0);

void func_0005C5F4(s32 arg0) {
    func_0005C5C0(0, arg0);
}

s32 func_0005C614(struct Unk_func_0005C614_0 *arg0, struct Unk_func_0005C614_1 *arg1, struct Unk_func_0005C614_2 *arg2) {
    M2C_UNK (*temp_v0)(void *, s32);
    s32 var_a0;

    var_a0 = 0;
    if (arg1->unk4 == arg2->unk4) {
        if (arg1->unk8 == arg2->unk8) {
            temp_v0 = M2C_FIELD(arg0, M2C_UNK (**)(void *, s32), 0xB4);
            if (temp_v0 != NULL) {
                temp_v0(arg1, arg0->unkB8);
                M2C_FIELD(arg0, M2C_UNK (**)(void *, s32), 0xB4) = NULL;
                arg2->unk0 = (s32) arg1->unk0;
                arg2->unk4 = (s32) arg1->unk4;
                arg2->unk8 = (s32) arg1->unk8;
                arg2->unkC = (s32) arg1->unkC;
                arg2->unk10 = (s32) arg1->unk10;
                arg2->unk14 = (s32) arg1->unk14;
                arg2->unk18 = (s32) arg1->unk18;
                arg2->unk1C = (s32) arg1->unk1C;
            }
            var_a0 = 1;
        }
    }
    return var_a0;
}

s32 func_0005C6CC(s32 arg0, s32 arg1) {
    return sceHVNetfront_Module_234F9191(arg0, arg1) + M2C_FIELD(arg0, s16 *, 0xC);
}

void func_0005C6F8(void) {
}

void func_0005C700(void) {
    sceHVNetfront_Module_A76795B7();
}

void func_0005C71C(s32 arg0) {
    sceHVNetfront_Module_32E4FDC6(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005C738);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005C850);

void func_0005C89C(s32 arg0) {
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_v0;
    s32 var_s1;

    temp_s2 = arg0 + 4;
    temp_v0 = sceHVNetfront_Module_B730C75F(temp_s2);
    var_s1 = temp_v0;
    if (temp_v0 != 0) {
        do {
            temp_s0 = sceHVNetfront_Module_2B629F59(temp_s2, var_s1);
            func_0005E940(arg0, var_s1);
            var_s1 = temp_s0;
        } while (temp_s0 != 0);
    }
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A18);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A20);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A28);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A30);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A3C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A44);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A4C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A58);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A5C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A60);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A68);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A6C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A74);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A7C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A80);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A84);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A88);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A90);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A94);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A98);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121A9C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121AA0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121AA4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121AA8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121AAC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121AB0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121AB4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121AB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121ABC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121AC0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121AC4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121AC8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121ACC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121AD0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121AD4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121AD8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121ADC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121AE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121AE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121AE8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121AEC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121AF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121AF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121AF8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121AFC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121B00);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121B04);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121B08);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121B0C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121B10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121B14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121B18);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121B1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121B20);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121B24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121B28);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121B2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121B30);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121B34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121B38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121B3C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121B40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121B44);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121B48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121B80);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121C10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121C38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121C3C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121C40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121C44);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121C48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121C4C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121C50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121C54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005C90C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005CA70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005CB88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005CC64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005CC9C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005CE24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_03D34A77);

void sceHVNetfront_Module_7D655E00(struct Unk_sceHVNetfront_Module_7D655E00_0 *arg0, s32 arg1, struct Unk_sceHVNetfront_Module_7D655E00_2 *arg2) {
    struct Unk_sceHVNetfront_Module_7D655E00_temp_v0 *temp_v0;

    temp_v0 = sceHVNetfront_Module_234F9191((u8 *)arg0 + 4, arg1) + arg0->unk10;
    temp_v0->unk0 = (s32) arg2->unk0;
    temp_v0->unk4 = (s32) arg2->unk4;
    temp_v0->unk8 = (s32) arg2->unk8;
    temp_v0->unkC = (s32) arg2->unkC;
    if (arg2->unk0 == 0xB) {
        func_0005D30C(arg0, arg1, temp_v0, arg2->unk8);
    }
}

void sceHVNetfront_Module_1CC15992(struct Unk_func_00055A08_0 *arg0, s32 arg1, struct Unk_sceHVNetfront_Module_1CC15992_2 *arg2) {
    struct Unk_sceHVNetfront_Module_1CC15992_temp_v0 *temp_v0;

    temp_v0 = sceHVNetfront_Module_234F9191((u8 *)arg0 + 4, arg1) + arg0->unk10;
    arg2->unk0 = (s32) temp_v0->unk0;
    arg2->unk4 = (s32) temp_v0->unk4;
    arg2->unk8 = (s32) temp_v0->unk8;
    arg2->unkC = (s32) temp_v0->unkC;
}

void sceHVNetfront_Module_9D9CB3AF(struct Unk_func_00053CCC_0 *arg0, s32 arg1, s32 arg2) {
    struct Unk_sceHVNetfront_Module_9D9CB3AF_temp_v0 *temp_v0;

    temp_v0 = sceHVNetfront_Module_234F9191((u8 *)arg0 + 4, arg1) + arg0->unk10;
    temp_v0->unk1C = arg2;
    if (arg2 != 0) {
        func_0005D30C(arg0, arg1, temp_v0, arg2);
    }
}

s32 func_0005D0EC(struct Unk_func_0005D0EC_0 *arg0, s32 arg1) {
    return M2C_FIELD((sceHVNetfront_Module_234F9191((u8 *)arg0 + 4, arg1) + arg0->unk10), s32 *, 0x1C);
}

void sceHVNetfront_Module_67FC33F8(struct Unk_func_00053CCC_0 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD((sceHVNetfront_Module_234F9191((u8 *)arg0 + 4, arg1) + arg0->unk10), s32 *, 0x24) = arg2;
}

s32 sceHVNetfront_Module_52564790(struct Unk_func_00053CCC_0 *arg0, s32 arg1) {
    return M2C_FIELD((sceHVNetfront_Module_234F9191((u8 *)arg0 + 4, arg1) + arg0->unk10), s32 *, 0x24);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005D194);

s32 func_0005D21C(struct Unk_func_0005D21C_0 *arg0, s32 arg1) {
    return M2C_FIELD((sceHVNetfront_Module_234F9191((u8 *)arg0 + 4, arg1) + arg0->unk10), s32 *, 0x20);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005D250);

u8 func_0005D290(struct Unk_func_0005D290_0 *arg0, s32 arg1) {
    return M2C_FIELD((sceHVNetfront_Module_234F9191((u8 *)arg0 + 4, arg1) + arg0->unk10), u8 *, 0x32);
}

void func_0005D2C4(struct Unk_func_0005D2C4_0 *arg0, s32 arg1, s32 arg2) {
    struct Unk_func_0005D2C4_temp_v0 *temp_v0;

    temp_v0 = sceHVNetfront_Module_234F9191((u8 *)arg0 + 4, arg1) + arg0->unk10;
    temp_v0->unk33 = (u8) (temp_v0->unk33 | arg2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005D30C);

void func_0005D3A4(struct Unk_func_0005D3A4_0 *arg0, s32 arg1, s32 arg2) {
    func_0005D30C(arg0, arg1, sceHVNetfront_Module_234F9191((u8 *)arg0 + 4, arg1) + arg0->unk10, arg2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005D400);

void sceHVNetfront_Module_2907C1F0(void **arg0, M2C_UNK arg1) {
    struct Unk_sceHVNetfront_Module_2907C1F0_temp_v0 *temp_v0;

    temp_v0 = *arg0;
    func_0005C90C(temp_v0->unk0, temp_v0->unk4, arg1);
}

M2C_UNK *func_0005D458(void) {
    return &D_00123D8C;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_1955409B);

M2C_UNK *sceHVNetfront_Module_E2C32DF7(void) {
    return &D_00123E47;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005D4EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_9BA8E706);

void func_0005D5F4(struct Unk_func_0005D5F4_0 *arg0, struct Unk_func_0005D5F4_1 *arg1) {
    struct Unk_func_0005D5F4_temp_v1 *temp_v1;

    if (arg0->unkC & 8) {
        arg0->unkC = (s32) arg1->unk4;
    } else {
        sceHVNetfront_Module_F1423651(&arg0->unk10);
    }
    temp_v1 = arg1->unk0;
    arg0->unk10 = (s32) temp_v1->unk0;
    arg0->unk14 = (s32) temp_v1->unk4;
    arg0->unk18 = (s32) temp_v1->unk8;
    arg0->unk1C = (s32) temp_v1->unkC;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_0DCCBB6F);

s32 sceHVNetfront_Module_B725FAEC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_s0;
    s32 temp_v0;

    temp_v0 = sceHVNetfront_Module_CF3077BE(arg2, arg3);
    if (temp_v0 == 0) {
        sceHVNetfront_Module_5D4D03A3(arg0);
        return 0;
    }
    temp_s0 = sceHVNetfront_Module_0DCCBB6F(arg0, arg1, temp_v0, arg4, arg5);
    sceHVNetfront_Module_88977645(temp_v0, -1);
    return temp_s0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_3071BAAE);

void func_0005D924(struct Unk_func_0005D924_0 *arg0, s32 *arg1) {
    *arg1 = arg0->unkC & 1;
}

s32 sceHVNetfront_Module_B541796B(s32 **arg0, s32 arg1, s32 arg2) {
    void *sp0;
    return (func_0005CC9C(**arg0, arg1, arg2, (s32) func_0005D924, &sp0) != 0) ? sp0 : 0x10;
}

void sceHVNetfront_Module_9C6C2E91(s32 arg0, s32 arg1, s32 arg2) {
    sceHVNetfront_Module_9BA8E706(arg0, arg1, arg2, 0);
}

void func_0005D98C(struct Unk_func_0005D98C_0 *arg0, s32 *arg1) {
    s32 temp_v0;

    temp_v0 = __builtin_allegrex_ext(arg0->unkC ^ 4, 2, 1);
    *arg1 = temp_v0;
    if (temp_v0 != 0) {
        func_0005C4D0(arg0);
    }
}

s32 sceHVNetfront_Module_3445D8F8(s32 **arg0, s32 arg1, s32 arg2) {
    void *sp0;
    return (func_0005CE24(**arg0, arg1, arg2, (s32) func_0005D98C, &sp0) != 0) ? sp0 : 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_AD3723FF);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_540174C1);

void func_0005DBD0(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005DBD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005DCA8);

void func_0005DCF8(void) {
    func_0005DCA8();
}

void func_0005DD14(void) {
    sceHVNetfront_Module_C6EE5561();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005DD30);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005DDC0);

void func_0005DE50(struct Unk_func_0005DE50_0 *arg0, s32 *arg1) {
    *arg1 = (arg0->unkC & 0xA) == 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005DE64);

void func_0005DF08(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_7C762DEC(arg0, arg1, (s32) &D_00121CFC, 6);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005DF2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005DF6C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005E034);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005E108);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005E19C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005E1F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005E2A4);

s32 sceHVNetfront_Module_A65312B1(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_s0;
    s32 temp_v0;

    temp_v0 = sceHVNetfront_Module_CF3077BE(arg2, arg3);
    if (temp_v0 != 0) {
        temp_s0 = func_0005E2A4(arg0, arg1, temp_v0, arg4);
        sceHVNetfront_Module_88977645(temp_v0, -1);
        return temp_s0;
    }
    sceHVNetfront_Module_5D4D03A3(arg0);
    return 0;
}

void func_0005E3D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *sp0;
    sceHVNetfront_Module_A65312B1(arg0, arg1, &sp0, sceHVNetfront_Module_57FDE0C7(&sp0, arg2), arg3);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005E42C);

void func_0005E4D0(void ***arg0, s32 arg1, M2C_UNK arg2) {
    void *temp_s0;

    temp_s0 = **arg0;
    M2C_FIELD(M2C_FIELD((sceHVNetfront_Module_234F9191(temp_s0 + 4, arg1) + M2C_FIELD(temp_s0, s16 *, 0x10)), void **, 0x24), M2C_UNK (**)(void ***, s32, M2C_UNK), 0x14)(arg0, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005E540);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005E5E0);

void func_0005E68C(void ***arg0, s32 arg1, M2C_UNK arg2) {
    void *temp_s0;

    temp_s0 = **arg0;
    M2C_FIELD(M2C_FIELD((sceHVNetfront_Module_234F9191(temp_s0 + 4, arg1) + M2C_FIELD(temp_s0, s16 *, 0x10)), void **, 0x24), M2C_UNK (**)(void ***, s32, M2C_UNK), 0x18)(arg0, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005E6FC);

void func_0005E77C(void ***arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    void *temp_s0;

    temp_s0 = **arg0;
    M2C_FIELD(M2C_FIELD((sceHVNetfront_Module_234F9191(temp_s0 + 4, arg1) + M2C_FIELD(temp_s0, s16 *, 0x10)), void **, 0x24), M2C_UNK (**)(void ***, s32, M2C_UNK, M2C_UNK), 0x1C)(arg0, arg1, arg2, arg3);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005E7FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005E940);

void sceHVNetfront_Module_58E21566(struct Unk_func_00053CCC_0 *arg0, s32 arg1) {
    M2C_FIELD(sceHVNetfront_Module_52564790(arg0, arg1), M2C_UNK (**)(void *, s32), 0x24)(arg0, arg1);
    sceHVNetfront_Module_9D9CB3AF(arg0, arg1, 0);
    sceHVNetfront_Module_67FC33F8(arg0, arg1, (s32) &D_00121CA8);
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121CA8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121CE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121CFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005E9F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005EAA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005EBEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005ECC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_7C762DEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", sceHVNetfront_Module_F8DE932C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005EFBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005EFF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005F18C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005F1C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005F2F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005F38C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121DBC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121DC4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121DCC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121DD4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_03F870", D_00121FC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005F420);

s32 func_0005F49C(struct Unk_func_0005F49C_0 *arg0, s32 arg1) {
    s32 var_a3;

    var_a3 = 0;
    if (arg1 < 0x100) {
        arg0->unk18 = arg1;
        var_a3 = sceHVNetfront_Module_0F5AA1D5(arg0, 0x20);
    }
    return var_a3;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005F4D4);

void func_0005F560(struct Unk_func_0005F560_0 *arg0) {
    func_0005F4D4((s32) arg0, 0, arg0->unk14);
    sceHVNetfront_Module_2A34EDF3(arg0);
}

s32 func_0005F594(struct Unk_func_0005F594_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = -1;
    if (arg0->unk14 <= 0xFFFFFF) {
        var_v1 = sceHVNetfront_Module_350ABDEC((s32) arg0, arg1);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005F5D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005F660);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005F6AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005F818);

void func_0005F8B4(void) {
    sceHVNetfront_Module_2A34EDF3();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005F8D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005F9D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005FB2C);

s32 func_0005FC08(void **arg0, s32 arg1) {
    s32 temp_s0;
    s32 var_v0;
    struct Unk_func_0005FC08_temp_v1 *temp_v1;

    var_v0 = -1;
    if (arg0 != NULL) {
        temp_v1 = *arg0;
        temp_s0 = temp_v1->unk6C + arg1;
        temp_v1->unk6C = temp_s0;
        if (temp_s0 <= 0) {
            func_0005FB2C();
        }
        var_v0 = temp_s0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005FC4C);

s32 func_0005FD10(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 4);
}

s32 func_0005FD1C(s32 **arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = **arg0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005FD34);

s32 func_0005FD88(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x68);
}

s32 func_0005FD94(s32 arg0, struct Unk_func_0005FD94_1 *arg1) {
    s32 temp_a3;
    s32 var_a2;
    struct Unk_func_0005FD94_temp_a1 *temp_a1;

    temp_a3 = arg1->unk8 - 2;
    var_a2 = -1;
    if (temp_a3 >= 0) {
        temp_a1 = arg1->unk0 + (arg1->unkE * temp_a3);
        if (temp_a1->unk4 == 0x78) {
            var_a2 = temp_a1->unk28;
        }
    }
    if (var_a2 == -1) {
        var_a2 = func_0005FD34(arg0);
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005FDF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005FE70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_03F870", func_0005FEB8);

void func_0005FEF4(s32 *arg0, s32 arg1) {
    sceHVNetfront_Module_1A02495A(*arg0 + 0x38, arg1, 0x1C);
}

void func_0005FF18(s32 *arg0, s32 arg1) {
    sceHVNetfront_Module_1A02495A(arg1, *arg0 + 0x38, 0x1C);
}

