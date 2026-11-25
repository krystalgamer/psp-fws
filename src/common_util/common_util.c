#include "common.h"
#include "common_util_decls.h"

INCLUDE_ASM("nonmatchings/common_util", func_00000024);

INCLUDE_ASM("nonmatchings/common_util", func_000000AC);

s32 module_start(void) {
    func_00000000();
    return 0;
}

#if FW_VERSION < 282
s32 module_stop(void) {
    func_00009F60();
    return 0;
}

void sceVshCommonUtil_107EDCD9(void) {
    func_00009F60();
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_util", func_00000168);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_C403411C);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_8727574A);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_53CF01CA);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_53120F49);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_3E95607D);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_3412B578);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_CFB4A59E);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/common_util", D_0000A470);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A47C);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A484);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A494);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A4A4);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A4B4);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A4C8);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A4E0);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A4FC);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A510);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A520);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A530);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A548);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A568);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A570);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A57C);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A590);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A5AC);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A5C8);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A5E4);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A600);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A61C);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A638);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A654);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A670);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A68C);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A6A8);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A6C4);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A6E0);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A6FC);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A718);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A734);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A750);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A76C);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A778);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A790);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A7A4);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A7B4);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A7B8);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A7C8);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A7CC);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A7E0);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A7F0);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A800);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A80C);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A810);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A828);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A834);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/common_util", D_0000B274);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/common_util", D_0000A840);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A84C);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A854);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A85C);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A86C);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A884);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A898);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A8B0);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A8BC);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A8C8);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A8D0);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A8E0);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A8EC);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A8F8);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A904);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A918);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A928);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A930);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A938);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A944);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A954);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A960);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A968);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A970);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A980);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A990);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A9A4);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A9AC);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A9B8);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A9C0);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A9CC);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A9DC);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A9E8);

INCLUDE_RODATA("nonmatchings/common_util", D_0000A9F8);

INCLUDE_RODATA("nonmatchings/common_util", D_0000AA04);

INCLUDE_RODATA("nonmatchings/common_util", D_0000AA18);

INCLUDE_RODATA("nonmatchings/common_util", D_0000AA24);

INCLUDE_RODATA("nonmatchings/common_util", D_0000AA30);

INCLUDE_RODATA("nonmatchings/common_util", D_0000AA3C);

INCLUDE_RODATA("nonmatchings/common_util", D_0000AA4C);

INCLUDE_RODATA("nonmatchings/common_util", D_0000AA64);

INCLUDE_RODATA("nonmatchings/common_util", D_0000AA70);

INCLUDE_RODATA("nonmatchings/common_util", D_0000AA88);

INCLUDE_RODATA("nonmatchings/common_util", D_0000AA94);

INCLUDE_RODATA("nonmatchings/common_util", D_0000AAA0);

INCLUDE_RODATA("nonmatchings/common_util", D_0000AAAC);

INCLUDE_RODATA("nonmatchings/common_util", D_0000AAB8);

INCLUDE_RODATA("nonmatchings/common_util", D_0000AAC4);

INCLUDE_RODATA("nonmatchings/common_util", D_0000AAD0);

INCLUDE_RODATA("nonmatchings/common_util", D_0000AADC);

INCLUDE_RODATA("nonmatchings/common_util", D_0000AAE8);

INCLUDE_RODATA("nonmatchings/common_util", D_0000AAF4);

INCLUDE_RODATA("nonmatchings/common_util", D_0000AB00);

INCLUDE_RODATA("nonmatchings/common_util", D_0000AB0C);

INCLUDE_RODATA("nonmatchings/common_util", D_0000AB18);

INCLUDE_RODATA("nonmatchings/common_util", D_0000AB24);

INCLUDE_RODATA("nonmatchings/common_util", D_0000AB30);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/common_util", D_0000B580);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/common_util", D_0000AB3C);

INCLUDE_RODATA("nonmatchings/common_util", D_0000AB48);

INCLUDE_RODATA("nonmatchings/common_util", D_0000AB54);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_C403411C);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_58234CB0);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_8727574A);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_53CF01CA);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_53120F49);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_3E95607D);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_3412B578);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_CFB4A59E);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/common_util", D_0000AB5C);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_5A3449D5);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_29278272);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_75477C22);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_79FF29A4);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_1815FB1F);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_BA7237F4);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_DEB009C6);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_D9E2759B);

INCLUDE_RODATA("nonmatchings/common_util", D_0000ABA0);

INCLUDE_RODATA("nonmatchings/common_util", D_0000ABBC);

INCLUDE_RODATA("nonmatchings/common_util", D_0000ABD8);

INCLUDE_RODATA("nonmatchings/common_util", D_0000ABF4);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_9845E69B);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_36BA6A54);
#endif

#if FW_VERSION == 282
s32 module_stop(void) {
    func_000083D0();
    return 0;
}

void sceVshCommonUtil_107EDCD9(void) {
    func_000083D0();
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_B9578145);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_29B75E11);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_68EB85B4);
#endif

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_7EEFA381);

INCLUDE_ASM("nonmatchings/common_util", func_000004BC);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_7A1C6D74);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_FC8E3CEF);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_BFC546B6);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/common_util", func_00000724);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_FA969B6A);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_D4D66154);

void sceVshCommonUtil_5A0B7762(s32 arg0, s32 arg1) {
    D_000080C0 = arg0;
    D_000080C4 = arg1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_9DF53F2F);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/common_util", func_000006B4);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_FA969B6A);

void sceVshCommonUtil_D4D66154(s32 *arg0) {
    if (!(*arg0 & 1)) {

    } else {
        scePower_DB62C9CF();
    }
    if (D_00008BF4 != 0) {
        ((M2C_UNK (*)(M2C_UNK)) D_00008BF4)(0);
    } else {
        sceKernelPowerUnlock(0);
    }
}

void sceVshCommonUtil_5A0B7762(s32 arg0, s32 arg1) {
    D_00008BF0 = arg0;
    D_00008BF4 = arg1;
}
#endif

INCLUDE_RODATA("nonmatchings/common_util", D_00008A14);

INCLUDE_RODATA("nonmatchings/common_util", D_00008A24);

INCLUDE_RODATA("nonmatchings/common_util", D_00008A30);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/common_util", D_0000B954);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/common_util", D_0000B960);

INCLUDE_RODATA("nonmatchings/common_util", D_0000B96C);

INCLUDE_RODATA("nonmatchings/common_util", D_0000B97C);

INCLUDE_RODATA("nonmatchings/common_util", D_0000B98C);

INCLUDE_RODATA("nonmatchings/common_util", D_0000B99C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_B296D591);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_util", func_00001A44);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_FA969B6A);
#endif

#if FW_VERSION == 100
void func_000012C0(void) {
    sceKernelPowerLock(0);
}

void sceVshCommonUtil_4DE8BDCB(void) {
    sceKernelPowerLock(0);
}

void func_000012F8(void) {
    sceKernelPowerUnlock(0);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_D4D66154);
#endif

#if FW_VERSION == 152
void sceVshCommonUtil_D4D66154(s32 *arg0) {
    if (!(*arg0 & 1)) {

    } else {
        scePower_DB62C9CF();
    }
    if (D_0000E7A0 != 0) {
        ((M2C_UNK (*)(M2C_UNK)) D_0000E7A0)(0);
    } else {
        sceKernelPowerUnlock(0);
    }
}
#endif

#if FW_VERSION == 100
void sceVshCommonUtil_D4D66154(s32 *arg0) {
    sceKernelPowerUnlock(0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void sceVshCommonUtil_5A0B7762(s32 arg0, s32 arg1) {
    D_0000E79C = arg0;
    D_0000E7A0 = arg1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void sceVshCommonUtil_12F5429A(void) {
    D_0000E7A4 = 0;
    D_0000E7A8 = sceKernelCreateEventFlag("SceVshRebootLock", 0x200U, 3U, NULL);
}

void sceVshCommonUtil_0713D516(void) {
    sceKernelDeleteEventFlag(D_0000E7A8);
}

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_249059B5);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_7683BE4D);

void sceVshCommonUtil_0AF412FC(void) {
    sceVshCommonUtil_249059B5();
}

void func_00001D08(void) {
    sceVshCommonUtil_7683BE4D();
}

void sceVshCommonUtil_686AAA1A(void) {
    sceVshCommonUtil_7683BE4D();
}

void sceVshCommonUtil_3FAF35EC(void) {
    sceKernelClearEventFlag(D_0000E7A8, -3U);
    sceKernelWaitEventFlag(D_0000E7A8, 1U, 0, NULL, NULL);
}
#endif

#if FW_VERSION == 100
M2C_UNK *sceVshCommonUtil_B55DCA45(void) {
    return &D_0000DBFC;
}

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_2B8B7775);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_741C9BE1);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/common_util", func_000013B0);
#else
INCLUDE_RODATA("nonmatchings/common_util", D_00008A3C);

void sceVshCommonUtil_12F5429A(void) {
    D_00008BF8 = 0;
    D_00008BFC = sceKernelCreateEventFlag("SceVshRebootLock", 0x200U, 3U, NULL);
}

void sceVshCommonUtil_0713D516(void) {
    sceKernelDeleteEventFlag(D_00008BFC);
}

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_249059B5);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_7683BE4D);

void sceVshCommonUtil_0AF412FC(void) {
    sceVshCommonUtil_249059B5();
}

void func_00000978(void) {
    sceVshCommonUtil_7683BE4D();
}

void sceVshCommonUtil_686AAA1A(void) {
    sceVshCommonUtil_7683BE4D();
}

void sceVshCommonUtil_3FAF35EC(void) {
    sceKernelClearEventFlag(D_00008BFC, -3U);
    sceKernelWaitEventFlag(D_00008BFC, 1U, 0, NULL, NULL);
}

INCLUDE_ASM("nonmatchings/common_util", func_000009F4);
#endif

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_2ACAD845);

#if FW_VERSION >= 150
void sceVshCommonUtil_98E57F6D(struct Unk_sceVshCommonUtil_98E57F6D_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unk8;
    if (temp_a0 != 0) {
        if (arg0->unk10 != 0) {
            sceReg_0D69BF40(temp_a0);
        }
        sceReg_0CAE832B(arg0->unk8);
    }
    if (arg0->unk0 != 0) {
        if (arg0->unk10 != 0) {
            sceReg_39461B4D(arg0->unk4);
        }
        sceReg_FA8A5739(arg0->unk4);
    }
}
#else
void sceVshCommonUtil_98E57F6D(struct Unk_sceVshCommonUtil_98E57F6D_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    temp_a0 = arg0->unk4;
    if (temp_a0 != 0) {
        if (arg0->padC[0] != 0) {
            sceReg_0D69BF40(temp_a0);
        }
        sceReg_0CAE832B(arg0->unk4);
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_a0_2 != 0) {
        if (arg0->padC[0] != 0) {
            sceReg_39461B4D(temp_a0_2);
        }
        sceReg_FA8A5739(M2C_FIELD(arg0, s32 *, 0));
    }
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_63FFE887);
#endif

INCLUDE_RODATA("nonmatchings/common_util", D_00008A5C);

INCLUDE_RODATA("nonmatchings/common_util", D_00008A7C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_63FFE887);
#else
INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_71DB8B88);
#endif

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_28B6AD3B);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_57BDA5C1);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_799DFDC5);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_394CBE00);
#endif

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_B48D135B);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_9E7D761E);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void sceVshCommonUtil_0F553311(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 == 0) {

    } else {
        sceVshCommonUtil_EDED68FB(temp_v0);
    }
    if (M2C_FIELD(arg0, s32 *, 4) >= 0) {
        sceIoClose(M2C_FIELD(arg0, s32 *, 4));
    }
}
#endif

#if FW_VERSION == 100
void sceVshCommonUtil_0F553311(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 == 0) {

    } else if (sceVshCommonUtil_EDED68FB(temp_v0) != 0) {
        scePaf_C9831AFF(&D_0000ADD8);
    }
    if (M2C_FIELD(arg0, s32 *, 4) >= 0) {
        sceIoClose(M2C_FIELD(arg0, s32 *, 4));
    }
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/common_util", func_000010D0);

INCLUDE_ASM("nonmatchings/common_util", func_00001114);

INCLUDE_ASM("nonmatchings/common_util", func_0000159C);

INCLUDE_ASM("nonmatchings/common_util", func_0000177C);

INCLUDE_ASM("nonmatchings/common_util", func_00001828);

INCLUDE_ASM("nonmatchings/common_util", func_000019DC);

INCLUDE_ASM("nonmatchings/common_util", func_00001B64);

INCLUDE_ASM("nonmatchings/common_util", func_00001CD4);

INCLUDE_ASM("nonmatchings/common_util", func_00001F50);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_E55CADD9);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_F857F095);

INCLUDE_ASM("nonmatchings/common_util", func_000030A4);

INCLUDE_ASM("nonmatchings/common_util", func_00003210);

INCLUDE_ASM("nonmatchings/common_util", func_00003554);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_B6E7804E);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_6349597A);

INCLUDE_ASM("nonmatchings/common_util", func_00003D98);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_EDED68FB);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_46931A6C);

INCLUDE_ASM("nonmatchings/common_util", func_00004374);

INCLUDE_ASM("nonmatchings/common_util", func_0000472C);

INCLUDE_ASM("nonmatchings/common_util", func_00004774);

INCLUDE_ASM("nonmatchings/common_util", func_00004858);

INCLUDE_ASM("nonmatchings/common_util", func_000049A8);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_024CEB82);

INCLUDE_ASM("nonmatchings/common_util", func_00005174);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_27627379);

INCLUDE_ASM("nonmatchings/common_util", func_0000535C);

INCLUDE_ASM("nonmatchings/common_util", func_000053F4);

INCLUDE_ASM("nonmatchings/common_util", func_000055BC);

INCLUDE_ASM("nonmatchings/common_util", func_00005614);

INCLUDE_ASM("nonmatchings/common_util", func_0000568C);

INCLUDE_ASM("nonmatchings/common_util", func_000056FC);

INCLUDE_ASM("nonmatchings/common_util", func_00005788);

INCLUDE_ASM("nonmatchings/common_util", func_00005910);

INCLUDE_ASM("nonmatchings/common_util", func_00005AA4);

INCLUDE_ASM("nonmatchings/common_util", func_00005C24);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_9A2C3824);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_2D564AF6);

INCLUDE_ASM("nonmatchings/common_util", func_00006048);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_15AF8184);

INCLUDE_ASM("nonmatchings/common_util", func_000068D0);

INCLUDE_ASM("nonmatchings/common_util", func_000069A4);

INCLUDE_ASM("nonmatchings/common_util", func_00006D48);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_6B332472);

INCLUDE_ASM("nonmatchings/common_util", func_00006F68);

INCLUDE_ASM("nonmatchings/common_util", func_0000706C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/common_util", D_00008AD0);

INCLUDE_RODATA("nonmatchings/common_util", D_00008AD4);

INCLUDE_RODATA("nonmatchings/common_util", D_00008AE8);

INCLUDE_RODATA("nonmatchings/common_util", D_00008AF4);

INCLUDE_RODATA("nonmatchings/common_util", D_00008B08);

INCLUDE_RODATA("nonmatchings/common_util", D_00008B18);

INCLUDE_RODATA("nonmatchings/common_util", D_00008B2C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/common_util", D_0000AD90);

INCLUDE_RODATA("nonmatchings/common_util", D_0000ADA0);

INCLUDE_RODATA("nonmatchings/common_util", D_0000ADB4);

INCLUDE_RODATA("nonmatchings/common_util", D_0000ADD8);

INCLUDE_RODATA("nonmatchings/common_util", D_0000ADF8);

INCLUDE_RODATA("nonmatchings/common_util", D_0000AE1C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_EE5869D8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_util", func_00002600);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/common_util", D_0000AE6C);

INCLUDE_RODATA("nonmatchings/common_util", D_0000AE90);

INCLUDE_RODATA("nonmatchings/common_util", D_0000AEB8);

INCLUDE_RODATA("nonmatchings/common_util", D_0000AED4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_3088B748);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_81B52E61);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/common_util", func_00001FB8);

INCLUDE_ASM("nonmatchings/common_util", func_00001FFC);

INCLUDE_ASM("nonmatchings/common_util", func_000024F8);

INCLUDE_ASM("nonmatchings/common_util", func_00002790);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/common_util", func_00001848);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_E55CADD9);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_F857F095);

INCLUDE_ASM("nonmatchings/common_util", func_00003694);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/common_util", func_000026A0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_util", func_00003B3C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_B6E7804E);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_6349597A);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/common_util", func_00004514);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_EDED68FB);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_46931A6C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/common_util", func_000038BC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_util", func_00004C88);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/common_util", func_00005278);

INCLUDE_ASM("nonmatchings/common_util", func_000052C0);

INCLUDE_ASM("nonmatchings/common_util", func_000053A4);

INCLUDE_ASM("nonmatchings/common_util", func_000054FC);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_024CEB82);

INCLUDE_ASM("nonmatchings/common_util", func_00006148);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_27627379);

INCLUDE_ASM("nonmatchings/common_util", func_00006450);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/common_util", func_0000493C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_util", func_00006520);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/common_util", func_000067B4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/common_util", func_00004B5C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_util", func_00006828);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/common_util", func_000068F4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/common_util", func_00004C44);

INCLUDE_ASM("nonmatchings/common_util", func_00004CD0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_util", func_00006964);

INCLUDE_ASM("nonmatchings/common_util", func_00006A68);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/common_util", func_00006CE0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/common_util", func_00004FEC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_util", func_00006F48);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/common_util", func_0000719C);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_9A2C3824);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_2D564AF6);

INCLUDE_ASM("nonmatchings/common_util", func_000076C4);

INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_15AF8184);

INCLUDE_ASM("nonmatchings/common_util", func_00008128);

INCLUDE_ASM("nonmatchings/common_util", func_00008218);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/common_util", func_00006290);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_util", func_00008714);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/common_util", sceVshCommonUtil_6B332472);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/common_util", func_000064B0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_util", func_00008A34);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/common_util", func_00008BE0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/common_util", D_0000BA3C);

INCLUDE_RODATA("nonmatchings/common_util", D_0000BA40);

INCLUDE_RODATA("nonmatchings/common_util", D_0000BA54);

INCLUDE_RODATA("nonmatchings/common_util", D_0000BA60);

INCLUDE_RODATA("nonmatchings/common_util", D_0000BA70);

INCLUDE_RODATA("nonmatchings/common_util", D_0000BA7C);

INCLUDE_RODATA("nonmatchings/common_util", D_0000BA90);
#endif

INCLUDE_RODATA("nonmatchings/common_util", D_00008B40);

INCLUDE_RODATA("nonmatchings/common_util", D_00008B48);

INCLUDE_ASM("nonmatchings/common_util", func_00007234);

INCLUDE_ASM("nonmatchings/common_util", func_000074EC);

INCLUDE_ASM("nonmatchings/common_util", func_000075BC);

INCLUDE_ASM("nonmatchings/common_util", func_00007698);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/common_util", func_00009D78);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/common_util", func_000078A0);
#endif

INCLUDE_ASM("nonmatchings/common_util", func_00007914);

INCLUDE_ASM("nonmatchings/common_util", func_00007968);

INCLUDE_ASM("nonmatchings/common_util", func_000079A4);

INCLUDE_ASM("nonmatchings/common_util", func_00007A60);

INCLUDE_ASM("nonmatchings/common_util", func_00007AF4);

INCLUDE_ASM("nonmatchings/common_util", func_00007B88);

INCLUDE_ASM("nonmatchings/common_util", func_00007C00);

INCLUDE_ASM("nonmatchings/common_util", func_00007CD0);

INCLUDE_ASM("nonmatchings/common_util", func_00007D44);

INCLUDE_ASM("nonmatchings/common_util", func_00007DA4);

INCLUDE_ASM("nonmatchings/common_util", func_00007E40);

INCLUDE_ASM("nonmatchings/common_util", func_00007F30);

INCLUDE_ASM("nonmatchings/common_util", func_00008034);

INCLUDE_ASM("nonmatchings/common_util", func_000081A4);

INCLUDE_ASM("nonmatchings/common_util", func_00008378);

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/common_util", D_00008030);
#endif

INCLUDE_RODATA("nonmatchings/common_util", D_00008B70);
