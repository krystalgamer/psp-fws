/* cflags: -Os */
#include "common.h"
#include "netfront_decls.h"

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/netfront", func_00000000);

INCLUDE_ASM("nonmatchings/netfront", func_0011A154);

INCLUDE_ASM("nonmatchings/netfront", func_0011A34C);

INCLUDE_ASM("nonmatchings/netfront", func_00000380);

INCLUDE_ASM("nonmatchings/netfront", func_0011A4E0);

INCLUDE_ASM("nonmatchings/netfront", func_0011A584);

INCLUDE_ASM("nonmatchings/netfront", func_0011A608);

INCLUDE_ASM("nonmatchings/netfront", func_0011A618);

INCLUDE_ASM("nonmatchings/netfront", func_00000564);

INCLUDE_ASM("nonmatchings/netfront", func_00000580);

INCLUDE_ASM("nonmatchings/netfront", func_00000588);

INCLUDE_ASM("nonmatchings/netfront", func_00000590);

INCLUDE_ASM("nonmatchings/netfront", func_00000598);

INCLUDE_ASM("nonmatchings/netfront", func_000005A0);

INCLUDE_ASM("nonmatchings/netfront", func_000005A8);

INCLUDE_ASM("nonmatchings/netfront", func_000005B0);

INCLUDE_ASM("nonmatchings/netfront", func_000005B8);

INCLUDE_ASM("nonmatchings/netfront", func_000005C0);

INCLUDE_ASM("nonmatchings/netfront", func_000005C8);

INCLUDE_ASM("nonmatchings/netfront", func_00000620);

INCLUDE_ASM("nonmatchings/netfront", func_0000063C);

INCLUDE_ASM("nonmatchings/netfront", func_00000658);

INCLUDE_ASM("nonmatchings/netfront", func_00000660);

INCLUDE_ASM("nonmatchings/netfront", func_00000670);
#else
INCLUDE_ASM("nonmatchings/netfront", func_00000040);

INCLUDE_ASM("nonmatchings/netfront", func_000000C8);
#endif

void func_00000128(void) {
    sceRtcGetCurrentTick(&D_00135850);
}

s32 func_00000148(void) {
    return D_00131AD0;
}

INCLUDE_ASM("nonmatchings/netfront", func_00000154);

INCLUDE_ASM("nonmatchings/netfront", func_00000180);

void func_00000190(void) {
}

#if FW_VERSION >= 303
s32 func_00000198(void) {
    return sceKernelGetThreadId() == D_00130F68;
}
#endif

INCLUDE_ASM("nonmatchings/netfront", func_000001C4);

INCLUDE_ASM("nonmatchings/netfront", func_000001EC);

INCLUDE_ASM("nonmatchings/netfront", func_00000210);

#if FW_VERSION != 303
INCLUDE_ASM("nonmatchings/netfront", func_00000250);
#else
s32 func_00000250(struct Unk_func_00000250_0 *arg0, s32 arg1) {
    arg0->unk690 = arg1;
    return arg1;
}
#endif

#if FW_VERSION != 303
INCLUDE_ASM("nonmatchings/netfront", func_0000025C);
#else
s32 func_0000025C(struct Unk_func_0000025C_0 *arg0) {
    return arg0->unk690;
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/netfront", func_00000788);
#else
INCLUDE_ASM("nonmatchings/netfront", func_00000264);
#endif

INCLUDE_ASM("nonmatchings/netfront", func_00000560);

s32 module_start(void) {
    return 0;
}

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/netfront", module_stop);
#else
s32 module_stop(void) {
    func_00009DFC()->unk68C = 1;
    func_00005DE4();
    return 0;
}
#endif

s32 sceHVNetfront_Module_7011BF0F(void) {
    return 0;
}

#if FW_VERSION >= 303
s32 module_reboot_before(void) {
    func_00005984();
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_75F9756F);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_16459EDF);
#else
s32 sceHVNetfront_Module_16459EDF(void) {
    func_00009DFC()->unk68C = 1;
    func_00009DFC()->unk694 = 1;
    func_00005DE4();
    return func_00009DFC()->unk6A0;
}

void sceHVNetfront_Module_F6316E3A(void) {
    func_00009DFC()->unk6A8 = 1;
    sceHVNetfront_Module_16459EDF();
}
#endif

void sceHVNetfront_Module_8AB563FF(void) {
    func_000001C4();
    func_0000BCEC(func_00009DFC());
    func_000001EC();
}

#if FW_VERSION >= 303
s32 sceHVNetfront_Module_7526590E(void) {
    return func_00009DFC()->unk150;
}
#endif

void sceHVNetfront_Module_2A1DCF7E(s32 *arg0) {
    *arg0 = func_00000210();
    func_00009EC0();
}

void sceHVNetfront_Module_081DEF97(void) {
    func_00000154();
}

#if FW_VERSION == 250 || FW_VERSION == 340
INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_D97D8CB2);
#else
void sceHVNetfront_Module_D97D8CB2(s32 arg0) {
    func_0000C108(func_00009DFC(), arg0);
}
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_6823BE76);
#endif

s32 sceHVNetfront_Module_07C7E121(void) {
    func_0000C358(func_00009DFC());
    return 1;
}

s32 sceHVNetfront_Module_5575313B(void) {
    func_0000C3A0(func_00009DFC());
    return 1;
}

s32 sceHVNetfront_Module_FD6F2F09(void) {
    func_0000C430(func_00009DFC());
    return 1;
}

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_84BDA560);
#else
void sceHVNetfront_Module_84BDA560(s32 arg0) {
    func_00009DFC()->unk6A4 = arg0;
    if (arg0 != 0) {
        func_0003FE88(0);
        return;
    }
    func_0003FDD4(0);
}
#endif

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_D7A2F26A);

void sceHVNetfront_Module_F0614C11(void) {
    func_00005DE4();
    if (func_00005F64() != 0) {
        sceHVNetfront_Module_823748DE();
    }
}

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_7E1DC98D);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_A499ED24);
#else
s32 sceHVNetfront_Module_A499ED24(void) {
    sceKernelSetEventFlag(func_00009DFC()->unk8C8, 1);
    sceHVNetfront_Module_F0614C11();
    return 1;
}
#endif

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_3F43F04B);

s32 sceHVNetfront_Module_DB779BC4(s32 arg0, M2C_UNK arg1) {
    func_0000D0FC(func_00009DFC(), arg0, arg1, 0);
    return 1;
}

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_E7092282);
#else
INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_D33B0FB2);
#endif

#if FW_VERSION >= 303
s32 sceHVNetfront_Module_D33B0FB2(s32 arg0, s32 arg1) {
    struct Unk_sceHVNetfront_Module_D33B0FB2_temp_v0 *temp_v0;

    temp_v0 = func_00009DFC();
    if (temp_v0 != NULL) {
        temp_v0->unk850 = arg0;
        temp_v0->unk854 = arg1;
    }
    func_00011E80(temp_v0, 1);
    func_0000D2C0(temp_v0, arg0, arg1);
    return 1;
}
#endif

s32 sceHVNetfront_Module_5CCF6A9B(s32 arg0, M2C_UNK arg1) {
    func_0000D334(func_00009DFC(), arg0, arg1);
    return 1;
}

s32 sceHVNetfront_Module_9373433B(s32 arg0, M2C_UNK arg1) {
    func_0000D36C(func_00009DFC(), arg0, arg1);
    return 1;
}

s32 sceHVNetfront_Module_2BC1C7AD(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0000C77C(func_00009DFC(), arg0, arg1, arg2);
    return 1;
}

#if FW_VERSION >= 303
void sceHVNetfront_Module_DB246B1D(s32 arg0) {
    func_00009DFC()->unk920 = arg0;
}
#endif

s32 sceHVNetfront_Module_98A11887(s32 arg0) {
    func_000001C4();
    func_0000C51C(func_00009DFC(), arg0);
    func_000001EC();
    return 1;
}

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_9C39A39F);

s32 sceHVNetfront_Module_5CB97BC6(s32 arg0) {
    func_000001C4();
    func_0000C5EC(func_00009DFC(), arg0);
    func_000001EC();
    return 1;
}

#if FW_VERSION >= 303
void sceHVNetfront_Module_75B6ED88(s32 arg0) {
    struct Unk_sceHVNetfront_Module_75B6ED88_temp_v0 *temp_v0;

    func_000001C4();
    temp_v0 = func_00009DFC();
    temp_v0->unk908 = arg0;
    func_0000C654(temp_v0);
    func_000001EC();
}
#endif

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_A1EB6B4A);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_ED6A8557);

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/netfront", D_001145C8);
#endif

s32 sceHVNetfront_Module_B58682CA(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0000C478(func_00009DFC(), arg0, arg1, arg2, arg3);
    return 1;
}

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_E3D7CBBF);

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/netfront", func_00001920);
#endif

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_A6DA31B1);

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/netfront", D_001145F4);
#endif

s32 sceHVNetfront_Module_52E49519(s32 *arg0) {
    s32 var_v1;
    struct Unk_sceHVNetfront_Module_52E49519_temp_v0 *temp_v0;

    temp_v0 = func_00009E40();
    var_v1 = 1;
    if (temp_v0 != NULL) {
        *arg0 = temp_v0->unk20;
    } else {
        *arg0 = 0;
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_DCF92220);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_3D7406F0);

#if FW_VERSION >= 303
s32 sceHVNetfront_Module_0A399803(s32 arg0, M2C_UNK arg1) {
    s32 temp_s0;

    func_000001C4();
    temp_s0 = func_0000CDB8(func_00009DFC(), arg0, arg1);
    func_000001EC();
    return temp_s0;
}
#endif

s32 sceHVNetfront_Module_D3206B42(void) {
    struct Unk_sceHVNetfront_Module_D3206B42_temp_s0 *temp_s0;

    func_00009E08();
    func_000001C4();
    temp_s0 = func_00009E08() + 0x52C;
    func_000001EC();
    return temp_s0->unkB11C;
}

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_504892A0);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_3C889DF2);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_8CAFBEC9);
#else
s32 sceHVNetfront_Module_8CAFBEC9(void) {
    s32 var_s0;

    func_000001C4();
    var_s0 = 0;
    if (func_00012130() != 0) {
        func_000001EC();
        return 0;
    }
    func_00009DFC();
    if (func_00009E08() != 0) {
        var_s0 = 1;
        sceHVWWW_Library_AC4DE680(func_00009E08());
    }
    func_00014470();
    func_000001EC();
    return var_s0;
}
#endif

void sceHVNetfront_Module_22E35EF2(void) {
    func_000001C4();
}

void sceHVNetfront_Module_F2FE2FA3(void) {
    func_000001EC();
}

void sceHVNetfront_Module_AB5986DF(void) {
    func_000001C4();
    func_0000F52C();
    func_000001EC();
}

void sceHVNetfront_Module_62C6B537(void) {
    func_000001C4();
    func_0000F568();
    func_000001EC();
}

#if FW_VERSION >= 303
INCLUDE_RODATA("nonmatchings/netfront", D_0011D65C);
#endif

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_B77DC646);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_E0C9280E);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_34C35025);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_1D9201D7);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_08D6708A);

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_79EB264E);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_1E72A5E9);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_BB80F94F);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_A31DF7D9);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_6E8CFF36);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_30B217A5);
#endif

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_ADCA8B1B);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_8C46FE20);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_3C66313A);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_321CEE51);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_B475D7A8);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_495CE47E);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_DA82E6B0);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_E17B3197);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_BD1979CC);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_886C700E);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_744A355F);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_234B1549);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_ADE7A8D4);

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_271C1E57);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_6AD77DD8);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_D2A41BBC);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_6C54431F);
#endif

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_AD3824C9);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_EDB584F2);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_5E20E209);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_71EC1568);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_3990B41B);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_BB2076F2);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_07383DE7);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_D537E0DB);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_451069DF);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_E4DE49A9);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_969B6862);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_58141642);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_A410886F);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_657F04A7);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_523DD19F);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_02DDC9AA);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_9DF2A2C5);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_E2C269E9);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_A777EA56);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_F2F312E8);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_97CBB02D);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_F2BDCADD);

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_88B043A0);
#endif

INCLUDE_ASM("nonmatchings/netfront", func_0000431C);

INCLUDE_ASM("nonmatchings/netfront", func_000043AC);

INCLUDE_ASM("nonmatchings/netfront", func_00004408);

INCLUDE_ASM("nonmatchings/netfront", func_00004464);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/netfront", func_00004760);
#else
INCLUDE_ASM("nonmatchings/netfront", func_000044BC);
#endif

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_76411162);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_EBC39918);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_39E18C54);

#if FW_VERSION >= 303
void sceHVNetfront_Module_9C897ECC(s32 arg0) {
    func_000001C4();
    func_00009DFC()->unk70 = arg0;
    func_000001EC();
}

void sceHVNetfront_Module_533FF02B(s32 arg0) {
    func_000001C4();
    func_00009DFC()->unk74 = arg0;
    func_000001EC();
}
#endif

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_E704D8E3);

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_02BC68FC);
#endif

void sceHVNetfront_Module_E884F119(s32 arg0) {
    void *temp_v0;

    func_000001C4();
    temp_v0 = func_00009DFC();
    func_00000250(temp_v0, arg0);
    if (arg0 != 0) {
        if (arg0 == 1) {
            func_0000AA40(temp_v0);
            func_00005DE4();
        }
    } else {
        func_0000ABE8(temp_v0);
    }
    func_000001EC();
}

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_59FD01C8);

void func_000049F8(s32 arg0) {
    void *temp_a0;
    void *temp_v0;

    temp_v0 = func_00009DFC();
    temp_a0 = temp_v0;
    if (arg0 != 0) {
        func_0000AA40(temp_a0);
        return;
    }
    func_0000ABE8(temp_v0);
}

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_A9AB5006);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_FA013FAA);
#else
INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_7F315DEB);
#endif

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_0D966A22);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_C4CEE604);

void sceHVNetfront_Module_144F7F76(void) {
    func_000001C4();
    func_000143E0(func_00009DFC());
    func_000001EC();
}

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_A89C5C06);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_7A785747);
#else
void sceHVNetfront_Module_7A785747(void) {
    s32 temp_v0_2;
    struct Unk_sceHVNetfront_Module_7A785747_temp_v0 *temp_v0;

    func_000001C4();
    temp_v0 = func_00009DFC();
    if (temp_v0 != NULL) {
        temp_v0_2 = temp_v0->unk8C0;
        if (temp_v0_2 != 0) {
            sceHVNetfront_Module_88977645(temp_v0_2, -1);
            temp_v0->unk8C0 = 0;
        }
        temp_v0->unk8C4 = 0;
    }
    func_000001EC();
}

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_67B49F49);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_22C21178);

void sceHVNetfront_Module_49A6D9F9(void) {
    func_0000C318();
    sceHVNetfront_Module_7E1DC98D();
}
#endif

#if FW_VERSION >= 311
INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_0B27B6F4);

INCLUDE_ASM("nonmatchings/netfront", func_000F1458);

INCLUDE_ASM("nonmatchings/netfront", func_000F151C);

INCLUDE_ASM("nonmatchings/netfront", func_000053CC);
#endif

s32 func_000051D4(void) {
    return D_00131AE0;
}

void func_000051E0(s32 arg0) {
    D_00131AE0 = arg0;
}

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/netfront", func_00005058);

INCLUDE_ASM("nonmatchings/netfront", func_00005068);
#else
INCLUDE_ASM("nonmatchings/netfront", func_000051EC);

void func_00005254(void) {
    if (D_00131ADC > 0) {
        sceKernelSignalSema(D_00131ADC, 1);
    }
}
#endif

INCLUDE_ASM("nonmatchings/netfront", func_00005284);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/netfront", func_00005348);
#else
s32 func_00005348(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;

    temp_v0 = func_000051EC();
    var_s0 = temp_v0;
    if (temp_v0 == 0) {
        sceHVNetfront_Module_60ED98CD(arg1);
        temp_v0_2 = sceIoRename(arg0, arg1);
        var_s0 = temp_v0_2;
        if (temp_v0_2 != 0) {
            D_00131AE0 = var_s0;
            var_s0 = -1;
        }
        func_00005254();
    }
    return var_s0;
}
#endif

INCLUDE_ASM("nonmatchings/netfront", func_000053C0);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/netfront", func_00005250);

INCLUDE_RODATA("nonmatchings/netfront", D_00114B10);

INCLUDE_RODATA("nonmatchings/netfront", D_00114B14);

INCLUDE_RODATA("nonmatchings/netfront", D_00114B2C);

INCLUDE_RODATA("nonmatchings/netfront", D_00114B30);

INCLUDE_RODATA("nonmatchings/netfront", D_00114B48);

INCLUDE_RODATA("nonmatchings/netfront", D_00114B4C);

INCLUDE_RODATA("nonmatchings/netfront", D_00114B58);

INCLUDE_RODATA("nonmatchings/netfront", D_00114B5C);

INCLUDE_RODATA("nonmatchings/netfront", D_00114B68);

INCLUDE_RODATA("nonmatchings/netfront", D_00114B70);

INCLUDE_RODATA("nonmatchings/netfront", D_00114B74);

INCLUDE_RODATA("nonmatchings/netfront", D_00114B80);

INCLUDE_RODATA("nonmatchings/netfront", D_00114B84);

INCLUDE_RODATA("nonmatchings/netfront", D_00114B88);

INCLUDE_RODATA("nonmatchings/netfront", D_00114B9C);

INCLUDE_RODATA("nonmatchings/netfront", D_00114BA0);

INCLUDE_RODATA("nonmatchings/netfront", D_00114BB4);

INCLUDE_RODATA("nonmatchings/netfront", D_00114BC8);

INCLUDE_RODATA("nonmatchings/netfront", D_00114BDC);

INCLUDE_RODATA("nonmatchings/netfront", D_00114BF4);

INCLUDE_RODATA("nonmatchings/netfront", D_00114C0C);

INCLUDE_RODATA("nonmatchings/netfront", D_00114C10);

INCLUDE_RODATA("nonmatchings/netfront", D_00114C28);

INCLUDE_RODATA("nonmatchings/netfront", D_00114C2C);

INCLUDE_RODATA("nonmatchings/netfront", D_00114C44);

INCLUDE_RODATA("nonmatchings/netfront", D_00114C58);

INCLUDE_RODATA("nonmatchings/netfront", D_00114C70);

INCLUDE_RODATA("nonmatchings/netfront", D_00114C74);

INCLUDE_RODATA("nonmatchings/netfront", D_00114C8C);

INCLUDE_RODATA("nonmatchings/netfront", D_00114CA0);

INCLUDE_RODATA("nonmatchings/netfront", D_00114CB8);

INCLUDE_RODATA("nonmatchings/netfront", D_00114CD4);

INCLUDE_RODATA("nonmatchings/netfront", D_00114CD8);

INCLUDE_RODATA("nonmatchings/netfront", D_00114CF0);

INCLUDE_RODATA("nonmatchings/netfront", D_00114D08);

INCLUDE_RODATA("nonmatchings/netfront", D_00114D20);

INCLUDE_RODATA("nonmatchings/netfront", D_00114D24);

INCLUDE_RODATA("nonmatchings/netfront", D_00114D44);

INCLUDE_RODATA("nonmatchings/netfront", D_00114D48);

INCLUDE_RODATA("nonmatchings/netfront", D_00114D58);

INCLUDE_RODATA("nonmatchings/netfront", D_00114E28);

INCLUDE_RODATA("nonmatchings/netfront", D_00114E8C);
#else
INCLUDE_RODATA("nonmatchings/netfront", D_0011D76C);

s32 func_0000549C(void) {
    s32 temp_v0;

    D_00131AE0 = 0;
    temp_v0 = sceKernelCreateSema("SceHtmlViewerFileMutex", 0U, 0xA, 0xA, NULL);
    D_00131ADC = temp_v0;
    return (temp_v0 > 0) ? 0 : -1;
}

void func_000054EC(void) {
    sceKernelDeleteSema(D_00131ADC);
}
#endif

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_B2D31636);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_71125C97);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_20044791);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_5641BC86);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_60ED98CD);

INCLUDE_ASM("nonmatchings/netfront", func_00005820);

INCLUDE_ASM("nonmatchings/netfront", func_000058DC);

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/netfront", func_00005984);

INCLUDE_ASM("nonmatchings/netfront", func_000059CC);

INCLUDE_ASM("nonmatchings/netfront", func_00005A0C);

INCLUDE_ASM("nonmatchings/netfront", func_00005A88);

s32 func_00005B24(struct Unk_func_00005B24_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = arg0->unk0;
    if (temp_v0 != 0) {
        temp_v0_2 = func_00005A88(temp_v0, 0);
        arg0->unk4 = temp_v0_2;
        var_v1 = -3;
        if (temp_v0_2 > 0) {
            temp_v0_3 = sceHVNetfront_Module_24B1FCE6((temp_v0_2 * 4) + 4);
            arg0->unk8 = temp_v0_3;
            var_v1 = -4;
            if (temp_v0_3 != 0) {
                func_00005A88(arg0->unk0, temp_v0_3);
                temp_v0_4 = sceHVNetfront_Module_24B1FCE6(arg0->unk4);
                arg0->unkC = temp_v0_4;
                var_v1 = -5;
                if (temp_v0_4 != 0) {
                    sceHVNetfront_Module_D611E938(temp_v0_4, 3, arg0->unk4 - 1);
                    var_v1 = 0;
                }
            }
        }
    }
    return var_v1;
}

s32 func_00005BC4(s32 arg0, M2C_UNK arg1) {
    s32 var_v1;

    sceHVNetfront_Module_D611E938(arg0, 0, 0x10);
    var_v1 = -1;
    if (func_00005A0C(arg0, func_000059CC(arg1)) >= 0) {
        var_v1 = (func_00005B24((void *) arg0) >= 0) ? 0 : -2;
    }
    return var_v1;
}

void func_00005C34(struct Unk_func_00005C34_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    if (arg0 != NULL) {
        temp_v0 = arg0->unkC;
        if (temp_v0 != 0) {
            sceHVNetfront_Module_A2F4AC9E(temp_v0);
        }
        temp_v0_2 = arg0->unk8;
        if (temp_v0_2 != 0) {
            sceHVNetfront_Module_A2F4AC9E(temp_v0_2);
        }
        temp_v0_3 = arg0->unk0;
        if (temp_v0_3 != 0) {
            sceHVNetfront_Module_A2F4AC9E(temp_v0_3);
        }
    }
}

INCLUDE_ASM("nonmatchings/netfront", func_00005C94);
#endif

INCLUDE_ASM("nonmatchings/netfront", func_00005DBC);

void func_00005DDC(void) {
}

INCLUDE_ASM("nonmatchings/netfront", func_00005DE4);

void func_00005E08(void) {
    sceKernelSleepThread();
}

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_00A9596D);

s32 func_00005E74(void) {
    return 1;
}

s32 func_00005E7C(void) {
    return 0;
}

void func_00005E84(void) {
    func_0000A318(0x64);
}

s32 func_00005EA0(void) {
    sceHttpFlushAuthList();
    sceHttp_77EE5319();
    D_00131AF8 = 1;
    return 0;
}

s32 func_00005ED4(void) {
    sceHttp_DD6E7857();
    sceHttpFlushAuthList();
    D_00131AF8 = 0;
    return 0;
}

INCLUDE_ASM("nonmatchings/netfront", func_00005F04);

INCLUDE_ASM("nonmatchings/netfront", func_00005F64);

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/netfront", func_000062D4);
#endif

#if FW_VERSION == 311
INCLUDE_ASM("nonmatchings/netfront", func_000061A8_v311);
#endif

#if FW_VERSION >= 311
INCLUDE_ASM("nonmatchings/netfront", func_000061B4);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/netfront", func_00005F70);
#else
INCLUDE_ASM("nonmatchings/netfront", func_000086D8);

INCLUDE_ASM("nonmatchings/netfront", func_000057E4);

INCLUDE_ASM("nonmatchings/netfront", func_000057EC);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_0FB2D27A);

INCLUDE_ASM("nonmatchings/netfront", func_00008ABC);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/netfront", func_00005FB0);

INCLUDE_ASM("nonmatchings/netfront", func_00006048);

INCLUDE_ASM("nonmatchings/netfront", func_00006078);

INCLUDE_ASM("nonmatchings/netfront", func_000060D8);

void func_00006154(void) {
    sceHVNetfront_Module_831B4A41();
}

void func_00006170(void) {
    sceHVNetfront_Module_6F1E32E6();
}
#endif

void func_0000618C(void) {
    func_000086D8();
}

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/netfront", func_000061A8);
#endif

INCLUDE_ASM("nonmatchings/netfront", func_000061F4);

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/netfront", func_00006218);

INCLUDE_ASM("nonmatchings/netfront", func_00006268);

void func_000062AC(void) {
}

INCLUDE_ASM("nonmatchings/netfront", func_000062B4);

INCLUDE_ASM("nonmatchings/netfront", func_00006414);

INCLUDE_ASM("nonmatchings/netfront", func_000064A8);

INCLUDE_ASM("nonmatchings/netfront", func_00006590);

INCLUDE_ASM("nonmatchings/netfront", func_00006634);

INCLUDE_ASM("nonmatchings/netfront", func_000067F0);

INCLUDE_ASM("nonmatchings/netfront", func_00006868);

INCLUDE_ASM("nonmatchings/netfront", func_000068EC);

INCLUDE_ASM("nonmatchings/netfront", func_00006970);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_4C5A5066);

INCLUDE_ASM("nonmatchings/netfront", func_00006CF0);

void func_00006D24(s32 arg0) {
    D_00131C04 = arg0;
}

void func_00006D30(s32 arg0) {
    D_00131B0C = arg0;
}

INCLUDE_ASM("nonmatchings/netfront", func_00006D3C);

INCLUDE_ASM("nonmatchings/netfront", func_00006D88);

INCLUDE_ASM("nonmatchings/netfront", func_00006DE8);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_AF7B3F4B);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_BA0DA285);

INCLUDE_ASM("nonmatchings/netfront", func_000074D0);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_74FB57AC);

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

void func_000075B8(void) {
}

s32 func_000075C0(void) {
    return 0;
}

s32 func_000075C8(void) {
    return 0;
}

void func_000075D0(void) {
}

void func_000075D8(void) {
}

void func_000075E0(void) {
}

void func_000075E8(void) {
}

INCLUDE_ASM("nonmatchings/netfront", func_000075F0);

void func_00007624(void) {
}

void func_0000762C(void) {
}

void func_00007634(void) {
}

void sceHVNetfront_Module_5412D662(void) {
    sceHVNetfront_Module_24B1FCE6(0x7C);
}

void sceHVNetfront_Module_447295B3(s32 arg0) {
    if (arg0 != 0) {
        sceHVNetfront_Module_A2F4AC9E(arg0);
    }
}

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_C6A661C7);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_F21FB535);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_0DCE1309);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_76D0A3FA);

s32 sceHVNetfront_Module_4DC20E88(void) {
    return 0;
}

s32 func_00007944(void) {
    D_00131C08 = 0;
    D_00131C0C = 0;
    return 1;
}

void func_0000795C(void) {
}

s32 sceHVNetfront_Module_AE662080(void) {
    return 0x7FFFFFFF;
}

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_085F8604);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_EDE9ECBA);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_A0E6CD64);

INCLUDE_ASM("nonmatchings/netfront", func_00007B3C);

INCLUDE_RODATA("nonmatchings/netfront", D_0011D7CC);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/netfront", D_00121A6C_v340);
#endif

#if FW_VERSION == 311
INCLUDE_RODATA("nonmatchings/netfront", D_001214C8);
#endif

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/netfront", D_0011D7D0);
#endif

#if FW_VERSION >= 303
INCLUDE_RODATA("nonmatchings/netfront", D_0011D84C);

INCLUDE_RODATA("nonmatchings/netfront", D_0011D94C);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_A04377E3);

void sceHVNetfront_Module_F55D8699(struct Unk_sceHVNetfront_Module_F55D8699_0 *arg0) {
    if (arg0 != 0) {
        sceHVNetfront_Module_19BA8C5E(arg0);
    }
    arg0->unk2C = 0;
    arg0->unk174 = 0;
    arg0->unk170 = 0;
}

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_16240448);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_19BA8C5E);

s32 func_00007E60(struct Unk_func_00007E60_0 *arg0, struct Unk_func_00007E60_1 *arg1) {
    if (arg1 != NULL) {
        arg1->unk0 = (s32) arg0->unk8;
        arg1->unk4 = (s32) arg0->unkC;
        arg1->unk8 = (s32) arg0->unk10;
        arg1->unkC = (s32) arg0->unk14;
    }
    return 1;
}

void sceHVNetfront_Module_1C77605A(struct Unk_sceHVNetfront_Module_1C77605A_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk18 = arg1;
    arg0->unk1C = arg2;
}

INCLUDE_ASM("nonmatchings/netfront", func_00007E9C);

void func_00007F00(void) {
    func_00008770();
    D_0013588C = sceKernelCreateSema("SceVRAMLockCountMutex", 0U, 1, 1, NULL);
}

void func_00007F40(void) {
    func_000087C0();
    sceKernelDeleteSema((s32) D_0013588C);
    D_0013588C = -1U;
}
#endif

INCLUDE_ASM("nonmatchings/netfront", func_00007F74);

INCLUDE_ASM("nonmatchings/netfront", func_00008030);

INCLUDE_ASM("nonmatchings/netfront", func_000082C8);

void func_0000858C(struct Unk_func_0000858C_0 *arg0) {
    if (D_00135898 == 0) {
        func_00008ABC(arg0);
        return;
    }
    D_00135890 = 1;
    sceHVNetfront_Module_44660B53((s32) &D_001358AC, (s32) arg0, (s32) &D_001358AC);
}

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_831B4A41);

INCLUDE_ASM("nonmatchings/netfront", sceHVNetfront_Module_6F1E32E6);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/netfront", func_00006230);
#else
INCLUDE_ASM("nonmatchings/netfront", func_000086D8);

void func_0000871C(void) {
    if (D_00135898 == 0) {
        func_00008ABC(&D_0013589C);
    }
    D_00135890 = 0;
    sceHVNetfront_Module_8AF2F499((s32) &D_001358AC, 0, 0, 0, 0);
}

INCLUDE_ASM("nonmatchings/netfront", func_00008770);

void func_000087C0(void) {
}

INCLUDE_ASM("nonmatchings/netfront", func_000087C8);

void sceHVNetfront_Module_0FB2D27A(void) {
    sceKernelWaitSema((s32) D_0013588C, 1, 0);
    sceHVNetfront_Module_D611E938(D_001358BC, -0x01000001, D_00135844 * D_00135858 * D_00135840);
    sceKernelSignalSema((s32) D_0013588C, 1);
}

void func_00008ABC(struct Unk_func_0000858C_0 *arg0) {
    func_000087C8(arg0->unk0, arg0->unk4, arg0->unk8, arg0->unkC);
}

void func_00008AE8(void) {
    sceHVNetfront_Module_5CA39435();
}

void func_00008B04(s32 arg0) {
    sceHVNetfront_Module_A2F4AC9E(arg0);
}

INCLUDE_ASM("nonmatchings/netfront", func_00008B20);

INCLUDE_ASM("nonmatchings/netfront", func_00008B3C);

INCLUDE_ASM("nonmatchings/netfront", func_00008B58);

INCLUDE_ASM("nonmatchings/netfront", func_00008BF0);

INCLUDE_ASM("nonmatchings/netfront", func_00008D40);

INCLUDE_ASM("nonmatchings/netfront", func_00008DB8);

INCLUDE_ASM("nonmatchings/netfront", func_00009154);

INCLUDE_ASM("nonmatchings/netfront", func_00009188);

void func_000092C4(struct Unk_func_000092C4_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    if (arg0 != NULL) {
        temp_v0 = arg0->unk0;
        if (temp_v0 != 0) {
            func_00008B58(temp_v0);
        }
        temp_v0_2 = arg0->unk4;
        if (temp_v0_2 != 0) {
            sceHVNetfront_Module_A2F4AC9E(temp_v0_2);
        }
        sceHVNetfront_Module_A2F4AC9E((s32) arg0);
    }
}

INCLUDE_ASM("nonmatchings/netfront", func_00009318);

s32 func_0000948C(s32 arg0) {
    return arg0;
}

INCLUDE_ASM("nonmatchings/netfront", func_00009494);

void func_000094F0(struct Unk_func_000094F0_0 *arg0) {
    if (arg0 != NULL) {
        func_000095F4();
        M2C_FIELD(arg0, M2C_UNK (**)(void *), 0x38)(arg0->unk4C);
        M2C_FIELD(arg0, M2C_UNK (**)(void *), 0x38)(arg0);
    }
}

INCLUDE_ASM("nonmatchings/netfront", func_00009534);
#endif
