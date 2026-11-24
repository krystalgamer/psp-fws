/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_decls.h"

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_B755FA98);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_4BF9E1DE);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_D5B64E37);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_DA02F383);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_83FE280A);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_891723D5);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_F355C73B);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_A55C914F);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_7BA3ED91);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_03164B12);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_389728AB);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_EB38431E);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_AFA11338);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_B20F84F8);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_4F8F3808);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_0DFF67F9);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_0D633F53);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_AB375964);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_8DA79EB0);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_5216CBF5);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_D2422E4D);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_8D33C11D);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNetGetLocalEtherAddr);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_D1BE2CE9);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_AB7DD9A5);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_80E1933E);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_C1D2A7FB);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_CFA79880);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNetInit);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNetTerm);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_00001980);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_00001CE0);

void sceNet_lib_7C3B86C5(s32 arg0) {
    D_0000AF40 |= 1 << arg0;
}

void sceNet_lib_05D525E4(s32 arg0) {
    D_0000AF40 |= 1 << arg0;
    sceKernelSetEventFlag(D_0000A864, 0x10U);
}

void func_00001E74(void) {
    if (D_0000A860 >= 0) {
        sceKernelTerminateThread(D_0000A860);
        sceKernelDeleteThread(D_0000A860);
    }
    D_0000A860 = -1;
    if (D_0000A864 >= 0) {
        sceKernelDeleteEventFlag(D_0000A864);
    }
    D_0000A864 = -1;
    sceNetIfhandle_lib_B9096E48();
}

s32 sceNet_lib_13672F83(s32 arg0, s32 arg1) {
    D_0000AF28 = arg0;
    D_0000AF2C = arg1;
    D_0000AF18 = 1;
    return 0;
}

s32 sceNet_lib_5C7C7381(void) {
    D_0000AF18 = 0;
    D_0000AF28 = 0;
    D_0000AF2C = 0;
    return 0;
}

s32 sceNet_lib_86B6DCD9(s32 arg0) {
    D_0000AF30 = arg0;
    D_0000AF1C = 1;
    return 0;
}

s32 sceNet_lib_7AE91FB4(void) {
    D_0000AF1C = 0;
    D_0000AF30 = 0;
    return 0;
}

s32 sceNet_lib_572AD6ED(s32 arg0) {
    D_0000AF34 = arg0;
    D_0000AF20 = 1;
    return 0;
}

s32 sceNet_lib_87DC7A7E(void) {
    D_0000AF20 = 0;
    D_0000AF34 = 0;
    return 0;
}

s32 sceNet_lib_B3A48B7F(s32 arg0, s32 arg1) {
    D_0000AF38 = arg0;
    D_0000AF3C = arg1;
    D_0000AF24 = 1;
    return 0;
}

s32 sceNet_lib_949F1FBB(void) {
    D_0000AF24 = 0;
    D_0000AF38 = 0;
    D_0000AF3C = 0;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_CA3CF5EB);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNetFreeThreadinfo);

s32 func_00002248(void) {
    s32 temp_v0;
    s32 temp_v0_2;

    M2C_FIELD(&D_0000AF44, void **, 0) = NULL;
    M2C_FIELD(&D_0000AF44, void ***, 4) = &D_0000AF44;
    temp_v0_2 = sceKernelCreateSema("SceNetThreadList", 0U, 1, 1, NULL);
    temp_v0 = __builtin_allegrex_min(temp_v0_2, 0);
    D_0000A868 = temp_v0_2;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_BB2B3DDB);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_6D5D42D7);

void sceNet_lib_C21E18B2(void *arg0) {
    sceKernelWaitSema(D_0000A868, 1, NULL);
    M2C_FIELD(arg0, u16 *, 0xC) = (u16) (M2C_FIELD(arg0, u16 *, 0xC) - 1);
    sceKernelSignalSema(D_0000A868, 1);
}

s32 sceNet_lib_757085B0(void *arg0, s32 arg1) {
    sceKernelWaitSema(D_0000A868, 1, NULL);
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    M2C_FIELD(arg0, u16 *, 0xC) = (u16) (M2C_FIELD(arg0, u16 *, 0xC) - 1);
    sceKernelSignalSema(D_0000A868, 1);
    return (arg1 == 0) ? 0 : -1;
}

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_435843CB);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_D861EF33);

s32 sceNet_lib_45452B7B(void) {
    s16 temp_a1;
    s32 var_s0;
    void *var_v1;

    var_s0 = 0;
    sceKernelWaitSema(D_0000A868, 1, NULL);
    var_v1 = D_0000AF44;
    if (var_v1 != NULL) {
        do {
            temp_a1 = M2C_FIELD(var_v1, s16 *, 0xC);
            var_v1 = M2C_FIELD(var_v1, void **, 0);
            var_s0 += temp_a1 > 0;
        } while (var_v1 != NULL);
    }
    sceKernelSignalSema(D_0000A868, 1);
    return (var_s0 == 0) ? 0 : 0x80410105;
}

void func_0000260C(void) {
    void *var_s0;

    if (D_0000A868 >= 0) {
        var_s0 = D_0000AF44;
        if (var_s0 != NULL) {
            do {
                sceKernelDeleteSema(M2C_FIELD(var_s0, s32 *, 0x4C));
                var_s0 = M2C_FIELD(var_s0, void **, 0);
            } while (var_s0 != NULL);
        }
        sceKernelDeleteSema(D_0000A868);
    }
    D_0000A868 = -1;
}

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNetThreadAbort);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_BFCFEFF6);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_3B617AA0);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_DB88F458);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_B6FC0A5B);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_C431A214);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_E1F4696F);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_00002C34);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_A8B6205A);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_A93A93E9);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_00002E8C);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_25CC373A);

void sceNet_lib_DCBC596E(void) {
}

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_7C86FBA4);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_00002FD8);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_000030A8);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_F6DB0A0B);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_0000331C);

void func_00003380(void) {
    if (D_0000A874 >= 0) {
        sceKernelDeleteSema(D_0000A874);
    }
    D_0000A874 = -1;
}

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_205E8D17);

void func_00003400(void *arg0) {
    sceKernelWaitSema(D_0000A874, 1, NULL);
    if (M2C_FIELD(arg0, s32 *, 0x20) == 0) {

    } else {
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        M2C_FIELD(arg0, s32 *, 0x48) = (s32) (M2C_FIELD(arg0, s32 *, 0x48) | 1);
        sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0x4C), 1);
    }
    sceKernelSignalSema(D_0000A874, 1);
}

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_7574FDA1);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_B8C4A858);

void sceNet_lib_C9C97945(void *arg0) {
    sceKernelWaitSema(D_0000A874, 1, NULL);
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) (M2C_FIELD(arg0, s32 *, 0x48) | 2);
    if (M2C_FIELD(arg0, s32 *, 0x20) == 0) {

    } else {
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0x4C), 1);
    }
    sceKernelSignalSema(D_0000A874, 1);
}

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_6B294EE4);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_51C209B2);

s32 sceNet_lib_2E005032(s32 arg0) {
    D_0000AF60 = arg0;
    D_0000AF68 = 1;
    return 0;
}

s32 sceNet_lib_33B230BD(void) {
    D_0000AF68 = 0;
    D_0000AF60 = 0;
    return 0;
}

s32 sceNet_lib_E155112D(s32 arg0, s32 arg1) {
    D_0000AF5C = arg0;
    D_0000AF64 = arg1;
    D_0000AF6C = 1;
    return 0;
}

s32 sceNet_lib_41621EB0(void) {
    D_0000AF6C = 0;
    D_0000AF5C = 0;
    D_0000AF64 = 0;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_00003790);

void func_000037E4(void) {
    if (D_0000A878 >= 0) {
        sceKernelDeleteSema(D_0000A878);
    }
    D_0000A878 = -1;
}

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_94B44F26);

void sceNet_lib_515B2F33(s32 arg0) {
    if (arg0 > 0) {
        D_0000B370 = -1;
        sceKernelSignalSema(D_0000A878, 1);
    }
}

s32 sceNet_lib_6DC71518(void) {
    return D_0000B370;
}

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_4B2B3416);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_2B42872F);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_C4261339);

void sceNet_lib_41FD8B5C(void) {
    sceNetIfhandle_lib_76BAD213();
}

void sceNet_lib_92633D8D(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 8);
}

void sceNet_lib_B9C780C7(s32 *arg0) {
    s32 temp_v1;

    temp_v1 = *arg0;
    if (temp_v1 != 0) {
        sceNet_lib_B8C4A858(temp_v1, (s32) &D_0000BC0C);
        *arg0 = 0;
    }
}

M2C_UNK *sceNet_lib_B68E1EEA(void) {
    return &D_0000BC0C;
}

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_00003B30);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_00003C98);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_00003E78);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_000041D8);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_000042FC);

void func_00004430(s32 arg0, u8 *arg1) {
    sceNet_lib_EF097716(arg1, arg0 + 0x14, 0x10);
}

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_0000445C);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_000044C0);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_000045CC);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_0000460C);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_00004678);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_00004770);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_00004820);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_000048F4);

u8 *func_00004974(u8 *arg0, void *arg1, u32 arg2) {
    u32 temp_a2;
    u32 temp_s0;
    u32 temp_s0_2;
    u32 var_s1;
    u8 *var_s3;
    void *var_s2;

    var_s3 = arg0;
    var_s2 = arg1;
    var_s1 = arg2;
    if (arg2 != 0) {
        do {
            temp_s0 = M2C_FIELD(var_s2, u32 *, 0xC);
            temp_s0_2 = (temp_s0 >= var_s1) ? var_s1 : temp_s0;
            temp_a2 = temp_s0_2;
            var_s1 -= temp_s0_2;
            sceNet_lib_EF097716(var_s3, M2C_FIELD(var_s2, u8 **, 8), (s32) temp_a2);
            var_s3 = &var_s3[temp_s0_2];
            var_s2 = M2C_FIELD(var_s2, void **, 0);
        } while (var_s1 != 0);
    }
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_000049F4);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_00004B34);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_00005010);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_00005120);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_00005234);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_701DDDC3);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_D5A03BC0);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_EDB11CB4);

void func_00005744(void *arg0) {
    void *var_a0;
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 0);
    var_a0 = var_s0;
    if (var_s0 != NULL) {
        do {
            var_s0 = M2C_FIELD(var_s0, void **, 4);
            sceNetIfhandle_lib_F56FAC82(var_a0);
            var_a0 = var_s0;
        } while (var_s0 != NULL);
    }
    M2C_FIELD(arg0, void **, 0) = NULL;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_13A8B98A);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_00005ADC);

s32 sceNet_lib_8C55B410(void) {
    return 6;
}

void func_00005C28(void) {
}

void func_00005C30(void) {
}

s32 func_00005C38(void) {
    return 6;
}

s32 func_00005C40(void) {
    return 6;
}

void func_00005C48(void) {
}

void func_00005C50(void) {
}

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_00005C58);

void sceNet_lib_EDCC871E(void) {
    sceNetIfhandle_lib_76BAD213();
}

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_EB6DE71A);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_FA6DE6A6);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_00005D64);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_1D10419C);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_522A971B);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_EA42B353);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_E9D457B6);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_710BD467);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_45945E8D);

s32 sceNet_lib_C2EC2EEA(s32 *arg0, s32 *arg1, s32 *arg2, u8 *arg3) {
    if (arg0 != NULL) {
        *arg0 = D_0000B3B4;
    }
    if (arg1 != NULL) {
        *arg1 = D_0000B3BC;
    }
    if (arg2 != NULL) {
        *arg2 = D_0000B3B8;
    }
    if (arg3 != NULL) {
        sceNet_lib_EF097716(arg3, &D_0000BE54, 8);
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_976AB1E9);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_4C8FD452);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_000064CC);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_000069DC);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_00006AA8);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_00006AE8);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_D60225A3);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_5ED457BE);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_31F3CDA1);

s32 sceNet_lib_1F94AFD9(s32 arg0) {
    D_0000B3D0 = arg0;
    D_0000B3D8 = 1;
    return 0;
}

s32 sceNet_lib_0A5A8751(void) {
    D_0000B3D8 = 0;
    D_0000B3D0 = 0;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_00006C8C);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_00007020);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_00007054);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_000075C0);

s32 sceNet_lib_991FF86D(s32 arg0) {
    D_0000B3DC = arg0;
    D_0000B3E0 = 1;
    return 0;
}

s32 sceNet_lib_5505D820(void) {
    D_0000B3E0 = 0;
    D_0000B3DC = 0;
    return 0;
}

s32 func_00007678(void) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = sceNetIfhandle_lib_0C391E9F();
    var_v0 = 0;
    if (temp_v0 < 0) {
        sceNetIfhandle_lib_29ED84C5();
        var_v0 = temp_v0;
    }
    return var_v0;
}

s32 func_000076B8(void) {
    sceNetIfhandle_lib_29ED84C5();
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_000076D8);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_1858883D);

s32 func_0000791C(void) {
    return 0;
}

s32 func_00007924(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_75D9985C);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_0000795C);

void sceNetEtherNtostr(void *arg0, s32 arg1) {
    if (((arg0 == NULL) | (arg1 == 0)) != 0) {

    } else {
        sceNet_lib_CF705E46(arg1, (s32) "%02x:%02x:%02x:%02x:%02x:%02x", (s32) M2C_FIELD(arg0, u8 *, 0), (s32) M2C_FIELD(arg0, u8 *, 1), (s32) M2C_FIELD(arg0, u8 *, 2), (s32) M2C_FIELD(arg0, u8 *, 3), (s32) M2C_FIELD(arg0, u8 *, 4), (s32) M2C_FIELD(arg0, u8 *, 5));
    }
}

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNetEtherStrton);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNetGetMallocStat);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_00007B50);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_96EF9DA1);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_750F705D);

M2C_UNK *func_00007BBC(void) {
    return &D_0000A88D;
}

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_E0A81C7C);

u8 *sceNet_lib_EF097716(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 var_a2;
    u8 *var_a1;
    u8 *var_v0;
    u8 *var_v1;
    u8 temp_a3;

    var_a1 = arg1;
    var_a2 = arg2;
    var_v0 = NULL;
    if (arg0 != NULL) {
        var_v1 = arg0;
        if (var_a2 > 0) {
            do {
                temp_a3 = *var_a1;
                var_a2 -= 1;
                var_a1 += 1;
                *var_v1 = temp_a3;
                var_v1 += 1;
            } while (var_a2 > 0);
        }
        var_v0 = arg0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_57CC57DA);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_8E798A2F);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_4753D878);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_4BF83CF4);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_2F305274);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_8B615F52);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_CF705E46);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_00007E50);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_8687B5AB);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_00008594);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_2A73ADDC);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_00008790);

void sceNet_lib_1FB2FDDD(s32 arg0) {
    func_00008790(arg0, 0, 0xA);
}

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_A0F16ABD);

u8 *sceNet_lib_80C9F02A(u8 *arg0, u8 *arg1) {
    u8 *var_a1;
    u8 *var_a2;
    u8 *var_v0;
    u8 temp_a3;

    var_a1 = arg1;
    var_v0 = NULL;
    var_a2 = arg0;
    if (((arg0 == NULL) | (var_a1 == NULL)) == 0) {
        do {
            temp_a3 = *var_a1;
            var_a1 += 1;
            *var_a2 = temp_a3;
            var_a2 += 1;
        } while (temp_a3 != 0);
        var_v0 = arg0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_D8722983);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_94DCA9F0);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_B5CE388A);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_BCBE14CF);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_9CFBC7E3);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_B9085A96);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_5705F6F9);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", sceNet_lib_F48963C6);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_00008E1C);

INCLUDE_ASM("tmp/asm/282/pspnet/nonmatchings/pspnet", func_00009390);

INCLUDE_RODATA("tmp/asm/282/pspnet/nonmatchings/pspnet", D_0000A574);

INCLUDE_RODATA("tmp/asm/282/pspnet/nonmatchings/pspnet", D_0000A57C);

INCLUDE_RODATA("tmp/asm/282/pspnet/nonmatchings/pspnet", D_0000A760);
