/* cflags: -Os */
#include "common.h"
#include "netfront_decls.h"

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00000040);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000000C8);

void func_00000128(void) {
    sceRtcGetCurrentTick(&D_00135850);
}

s32 func_00000148(void) {
    return D_00131AD0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00000154);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00000180);

void func_00000190(void) {
}

s32 func_00000198(void) {
    return sceKernelGetThreadId() == D_00130F68;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000001C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000001EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00000210);

s32 func_00000250(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x690) = arg1;
    return arg1;
}

s32 func_0000025C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x690);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00000264);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00000560);

s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    M2C_FIELD(func_00009DFC(), s32 *, 0x68C) = 1;
    func_00005DE4();
    return 0;
}

s32 sceHVNetfront_Module_7011BF0F(void) {
    return 0;
}

s32 module_reboot_before(void) {
    func_00005984();
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_75F9756F);

s32 sceHVNetfront_Module_16459EDF(void) {
    M2C_FIELD(func_00009DFC(), s32 *, 0x68C) = 1;
    M2C_FIELD(func_00009DFC(), s32 *, 0x694) = 1;
    func_00005DE4();
    return M2C_FIELD(func_00009DFC(), s32 *, 0x6A0);
}

void sceHVNetfront_Module_F6316E3A(void) {
    M2C_FIELD(func_00009DFC(), s32 *, 0x6A8) = 1;
    sceHVNetfront_Module_16459EDF();
}

void sceHVNetfront_Module_8AB563FF(void) {
    func_000001C4();
    func_0000BCEC(func_00009DFC());
    func_000001EC();
}

s32 sceHVNetfront_Module_7526590E(void) {
    return M2C_FIELD(func_00009DFC(), s32 *, 0x150);
}

void sceHVNetfront_Module_2A1DCF7E(s32 *arg0) {
    *arg0 = func_00000210();
    func_00009EC0();
}

void sceHVNetfront_Module_081DEF97(void) {
    func_00000154();
}

void sceHVNetfront_Module_D97D8CB2(s32 arg0) {
    func_0000C108(func_00009DFC(), arg0);
}

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

void sceHVNetfront_Module_84BDA560(s32 arg0) {
    M2C_FIELD(func_00009DFC(), s32 *, 0x6A4) = arg0;
    if (arg0 != 0) {
        func_0003FE88(0);
        return;
    }
    func_0003FDD4(0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D7A2F26A);

void sceHVNetfront_Module_F0614C11(void) {
    func_00005DE4();
    if (func_00005F64() != 0) {
        sceHVNetfront_Module_823748DE();
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_7E1DC98D);

s32 sceHVNetfront_Module_A499ED24(void) {
    sceKernelSetEventFlag(M2C_FIELD(func_00009DFC(), s32 *, 0x8C8), 1);
    sceHVNetfront_Module_F0614C11();
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3F43F04B);

s32 sceHVNetfront_Module_DB779BC4(s32 arg0, M2C_UNK arg1) {
    func_0000D0FC(func_00009DFC(), arg0, arg1, 0);
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E7092282);

s32 sceHVNetfront_Module_D33B0FB2(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_00009DFC();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x850) = arg0;
        M2C_FIELD(temp_v0, s32 *, 0x854) = arg1;
    }
    func_00011E80(temp_v0, 1);
    func_0000D2C0(temp_v0, arg0, arg1);
    return 1;
}

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

void sceHVNetfront_Module_DB246B1D(s32 arg0) {
    M2C_FIELD(func_00009DFC(), s32 *, 0x920) = arg0;
}

s32 sceHVNetfront_Module_98A11887(s32 arg0) {
    func_000001C4();
    func_0000C51C(func_00009DFC(), arg0);
    func_000001EC();
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9C39A39F);

s32 sceHVNetfront_Module_5CB97BC6(s32 arg0) {
    func_000001C4();
    func_0000C5EC(func_00009DFC(), arg0);
    func_000001EC();
    return 1;
}

void sceHVNetfront_Module_75B6ED88(s32 arg0) {
    void *temp_v0;

    func_000001C4();
    temp_v0 = func_00009DFC();
    M2C_FIELD(temp_v0, s32 *, 0x908) = arg0;
    func_0000C654(temp_v0);
    func_000001EC();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A1EB6B4A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_ED6A8557);

s32 sceHVNetfront_Module_B58682CA(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0000C478(func_00009DFC(), arg0, arg1, arg2, arg3);
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E3D7CBBF);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00001920);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A6DA31B1);

s32 sceHVNetfront_Module_52E49519(s32 *arg0) {
    s32 var_v1;
    void *temp_v0;

    temp_v0 = func_00009E40();
    var_v1 = 1;
    if (temp_v0 != NULL) {
        *arg0 = M2C_FIELD(temp_v0, s32 *, 0x20);
    } else {
        *arg0 = 0;
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_DCF92220);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3D7406F0);

s32 sceHVNetfront_Module_0A399803(s32 arg0, M2C_UNK arg1) {
    s32 temp_s0;

    func_000001C4();
    temp_s0 = func_0000CDB8(func_00009DFC(), arg0, arg1);
    func_000001EC();
    return temp_s0;
}

s32 sceHVNetfront_Module_D3206B42(void) {
    void *temp_s0;

    func_00009E08();
    func_000001C4();
    temp_s0 = func_00009E08() + 0x52C;
    func_000001EC();
    return M2C_FIELD(temp_s0, s32 *, 0xB11C);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_504892A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3C889DF2);

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

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011D65C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B77DC646);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E0C9280E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_34C35025);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1D9201D7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_08D6708A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_79EB264E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1E72A5E9);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_BB80F94F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A31DF7D9);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6E8CFF36);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_30B217A5);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_ADCA8B1B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_8C46FE20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3C66313A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_321CEE51);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B475D7A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_495CE47E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_DA82E6B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E17B3197);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_BD1979CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_886C700E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_744A355F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_234B1549);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_ADE7A8D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_271C1E57);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6AD77DD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_AD3824C9);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EDB584F2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_5E20E209);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_71EC1568);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3990B41B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_BB2076F2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_07383DE7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D537E0DB);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_451069DF);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E4DE49A9);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_969B6862);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_58141642);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A410886F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_657F04A7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_523DD19F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_02DDC9AA);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9DF2A2C5);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E2C269E9);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A777EA56);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F2F312E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_97CBB02D);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F2BDCADD);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_88B043A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000431C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000043AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00004408);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00004464);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000044BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_76411162);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EBC39918);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_39E18C54);

void sceHVNetfront_Module_9C897ECC(s32 arg0) {
    func_000001C4();
    M2C_FIELD(func_00009DFC(), s32 *, 0x70) = arg0;
    func_000001EC();
}

void sceHVNetfront_Module_533FF02B(s32 arg0) {
    func_000001C4();
    M2C_FIELD(func_00009DFC(), s32 *, 0x74) = arg0;
    func_000001EC();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E704D8E3);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_02BC68FC);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_59FD01C8);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A9AB5006);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_7F315DEB);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_0D966A22);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C4CEE604);

void sceHVNetfront_Module_144F7F76(void) {
    func_000001C4();
    func_000143E0(func_00009DFC());
    func_000001EC();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A89C5C06);

void sceHVNetfront_Module_7A785747(void) {
    s32 temp_v0_2;
    void *temp_v0;

    func_000001C4();
    temp_v0 = func_00009DFC();
    if (temp_v0 != NULL) {
        temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 0x8C0);
        if (temp_v0_2 != 0) {
            sceHVNetfront_Module_88977645(temp_v0_2, -1);
            M2C_FIELD(temp_v0, s32 *, 0x8C0) = 0;
        }
        M2C_FIELD(temp_v0, s32 *, 0x8C4) = 0;
    }
    func_000001EC();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_67B49F49);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_22C21178);

void sceHVNetfront_Module_49A6D9F9(void) {
    func_0000C318();
    sceHVNetfront_Module_7E1DC98D();
}

s32 func_000051D4(void) {
    return D_00131AE0;
}

void func_000051E0(s32 arg0) {
    D_00131AE0 = arg0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000051EC);

void func_00005254(void) {
    if (D_00131ADC > 0) {
        sceKernelSignalSema(D_00131ADC, 1);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005284);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000053C0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011D76C);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B2D31636);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_71125C97);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_20044791);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_5641BC86);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_60ED98CD);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005820);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000058DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005984);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000059CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005A0C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005A88);

s32 func_00005B24(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_v0 != 0) {
        temp_v0_2 = func_00005A88(temp_v0, 0);
        M2C_FIELD(arg0, s32 *, 4) = temp_v0_2;
        var_v1 = -3;
        if (temp_v0_2 > 0) {
            temp_v0_3 = sceHVNetfront_Module_24B1FCE6((temp_v0_2 * 4) + 4);
            M2C_FIELD(arg0, s32 *, 8) = temp_v0_3;
            var_v1 = -4;
            if (temp_v0_3 != 0) {
                func_00005A88(M2C_FIELD(arg0, s32 *, 0), temp_v0_3);
                temp_v0_4 = sceHVNetfront_Module_24B1FCE6(M2C_FIELD(arg0, s32 *, 4));
                M2C_FIELD(arg0, s32 *, 0xC) = temp_v0_4;
                var_v1 = -5;
                if (temp_v0_4 != 0) {
                    sceHVNetfront_Module_D611E938(temp_v0_4, 3, M2C_FIELD(arg0, s32 *, 4) - 1);
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

void func_00005C34(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
        if (temp_v0 != 0) {
            sceHVNetfront_Module_A2F4AC9E(temp_v0);
        }
        temp_v0_2 = M2C_FIELD(arg0, s32 *, 8);
        if (temp_v0_2 != 0) {
            sceHVNetfront_Module_A2F4AC9E(temp_v0_2);
        }
        temp_v0_3 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_v0_3 != 0) {
            sceHVNetfront_Module_A2F4AC9E(temp_v0_3);
        }
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005C94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005DBC);

void func_00005DDC(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005DE4);

void func_00005E08(void) {
    sceKernelSleepThread();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_00A9596D);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005F04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005F64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005F70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005FB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00006048);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00006078);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000060D8);

void func_00006154(void) {
    sceHVNetfront_Module_831B4A41();
}

void func_00006170(void) {
    sceHVNetfront_Module_6F1E32E6();
}

void func_0000618C(void) {
    func_000086D8();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000061A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000061F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00006218);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00006268);

void func_000062AC(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000062B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00006414);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000064A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00006590);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00006634);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000067F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00006868);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000068EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00006970);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_4C5A5066);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00006CF0);

void func_00006D24(s32 arg0) {
    D_00131C04 = arg0;
}

void func_00006D30(s32 arg0) {
    D_00131B0C = arg0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00006D3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00006D88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00006DE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_AF7B3F4B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_BA0DA285);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000074D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_74FB57AC);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000075F0);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C6A661C7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F21FB535);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_0DCE1309);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_76D0A3FA);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_085F8604);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EDE9ECBA);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A0E6CD64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00007B3C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011D7CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011D7D0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011D84C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011D94C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A04377E3);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F55D8699);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_16240448);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_19BA8C5E);

s32 func_00007E60(void *arg0, void *arg1) {
    if (arg1 != NULL) {
        M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 8);
        M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
        M2C_FIELD(arg1, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
        M2C_FIELD(arg1, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    }
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1C77605A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00007E9C);

void func_00007F00(void) {
    func_00008770();
    D_0013588C = sceKernelCreateSema("SceVRAMLockCountMutex", 0U, 1, 1, NULL);
}

void func_00007F40(void) {
    func_000087C0();
    sceKernelDeleteSema((s32) D_0013588C);
    D_0013588C = -1U;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00007F74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00008030);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000082C8);

void func_0000858C(void *arg0) {
    if (D_00135898 == 0) {
        func_00008ABC(arg0);
        return;
    }
    D_00135890 = 1;
    sceHVNetfront_Module_44660B53((s32) &D_001358AC, (s32) arg0, (s32) &D_001358AC);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_831B4A41);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6F1E32E6);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000086D8);

void func_0000871C(void) {
    if (D_00135898 == 0) {
        func_00008ABC(&D_0013589C);
    }
    D_00135890 = 0;
    sceHVNetfront_Module_8AF2F499((s32) &D_001358AC, 0, 0, 0, 0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00008770);

void func_000087C0(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000087C8);

void sceHVNetfront_Module_0FB2D27A(void) {
    sceKernelWaitSema((s32) D_0013588C, 1, 0);
    sceHVNetfront_Module_D611E938(D_001358BC, -0x01000001, D_00135844 * D_00135858 * D_00135840);
    sceKernelSignalSema((s32) D_0013588C, 1);
}

void func_00008ABC(void *arg0) {
    func_000087C8(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC));
}

void func_00008AE8(void) {
    sceHVNetfront_Module_5CA39435();
}

void func_00008B04(s32 arg0) {
    sceHVNetfront_Module_A2F4AC9E(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00008B20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00008B3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00008B58);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00008BF0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00008D40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00008DB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009154);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009188);

void func_000092C4(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_v0 != 0) {
            func_00008B58(temp_v0);
        }
        temp_v0_2 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_v0_2 != 0) {
            sceHVNetfront_Module_A2F4AC9E(temp_v0_2);
        }
        sceHVNetfront_Module_A2F4AC9E((s32) arg0);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009318);

s32 func_0000948C(s32 arg0) {
    return arg0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009494);

void func_000094F0(void *arg0) {
    if (arg0 != NULL) {
        func_000095F4();
        M2C_FIELD(arg0, M2C_UNK (**)(void *), 0x38)(M2C_FIELD(arg0, void **, 0x4C));
        M2C_FIELD(arg0, M2C_UNK (**)(void *), 0x38)(arg0);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009534);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009598);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000095F4);

void func_00009668(void *arg0, s32 arg1) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x4C);
        if (temp_v0 != 0) {
            func_000096A4((s32) arg0, temp_v0 + (arg1 * 0x34));
        }
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000096A4);

s32 func_00009750(void *arg0, void *arg1) {
    s32 var_a2;

    var_a2 = 1;
    if ((M2C_FIELD(arg0, s32 *, 0) == M2C_FIELD(arg1, s32 *, 0)) && (M2C_FIELD(arg0, s32 *, 4) == M2C_FIELD(arg1, s32 *, 4)) && (M2C_FIELD(arg0, s32 *, 8) == M2C_FIELD(arg1, s32 *, 8))) {
        var_a2 = M2C_FIELD(arg0, s32 *, 0xC) != M2C_FIELD(arg1, s32 *, 0xC);
    }
    return var_a2;
}

s32 func_00009798(void *arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (M2C_FIELD(arg0, s32 *, 0x48) == 0) {
        M2C_FIELD(arg0, s32 *, 0x48) = 1;
        var_v1 = 0;
    }
    return var_v1;
}

s32 func_000097B8(void *arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (M2C_FIELD(arg0, s32 *, 0x48) != 0) {
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000097D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000098C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000991C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000099E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009AAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009B74);

s32 func_00009C3C(void *arg0, void *arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    var_v1 = -1;
    if (arg0 != NULL) {
        if (arg1 != NULL) {
            temp_v0 = M2C_FIELD(arg1, s32 *, 0x18);
            if (temp_v0 != 0) {
                M2C_FIELD(arg0, M2C_UNK (**)(M2C_UNK, s32, s32), 0x3C)(arg2, temp_v0, M2C_FIELD(arg1, s32 *, 0x14));
                var_v1 = 0;
                temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x40) + 1;
                M2C_FIELD(arg0, s32 *, 0x40) = temp_v0_2;
                M2C_FIELD(arg1, s32 *, 0) = temp_v0_2;
            }
        }
    }
    return var_v1;
}

s32 func_00009CAC(void *arg0, void *arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    var_v1 = -1;
    if (arg0 != NULL) {
        if (arg1 != NULL) {
            temp_v0 = M2C_FIELD(arg1, s32 *, 0x20);
            if (temp_v0 != 0) {
                M2C_FIELD(arg0, M2C_UNK (**)(M2C_UNK, s32, s32), 0x3C)(arg2, temp_v0, M2C_FIELD(arg1, s32 *, 0x1C));
                var_v1 = 0;
                temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x40) + 1;
                M2C_FIELD(arg0, s32 *, 0x40) = temp_v0_2;
                M2C_FIELD(arg1, s32 *, 0) = temp_v0_2;
            }
        }
    }
    return var_v1;
}

s32 func_00009D1C(void *arg0, void *arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    var_v1 = -1;
    if (arg0 != NULL) {
        if (arg1 != NULL) {
            temp_v0 = M2C_FIELD(arg1, s32 *, 0x28);
            if (temp_v0 != 0) {
                M2C_FIELD(arg0, M2C_UNK (**)(M2C_UNK, s32, s32), 0x3C)(arg2, temp_v0, M2C_FIELD(arg1, s32 *, 0x24));
                var_v1 = 0;
                temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x40) + 1;
                M2C_FIELD(arg0, s32 *, 0x40) = temp_v0_2;
                M2C_FIELD(arg1, s32 *, 0) = temp_v0_2;
            }
        }
    }
    return var_v1;
}

s32 func_00009D8C(void *arg0, void *arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    var_v1 = -1;
    if (arg0 != NULL) {
        if (arg1 != NULL) {
            temp_v0 = M2C_FIELD(arg1, s32 *, 0x30);
            if (temp_v0 != 0) {
                M2C_FIELD(arg0, M2C_UNK (**)(M2C_UNK, s32, s32), 0x3C)(arg2, temp_v0, M2C_FIELD(arg1, s32 *, 0x2C));
                var_v1 = 0;
                temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x40) + 1;
                M2C_FIELD(arg0, s32 *, 0x40) = temp_v0_2;
                M2C_FIELD(arg1, s32 *, 0) = temp_v0_2;
            }
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009DFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009E08);

s32 func_00009E14(void) {
    s32 *temp_v0;
    s32 var_v1;

    temp_v0 = func_00009E40();
    var_v1 = 0;
    if (temp_v0 != NULL) {
        var_v1 = *temp_v0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009E40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009E7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009E9C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009EC0);

s32 func_00009ECC(void) {
    return D_001322BC;
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011D988);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011D9B4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DDC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009ED8);

M2C_UNK *func_00009F4C(void) {
    return &D_001322CC;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009F58);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6CAE4020);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000A240);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000A288);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000A2B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000A318);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000A348);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000A448);

void func_0000A494(s32 arg0) {
    func_00023780();
    func_00023880(arg0, 0x1E0, 0x110);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000A4C8);

void func_0000A700(void) {
}

s32 func_0000A708(void) {
    return 0;
}

s32 func_0000A710(void) {
    return 0x7FFFFFFF;
}

void func_0000A71C(void) {
    s32 temp_v0;

    temp_v0 = sceHVNetfront_Module_5CA39435(0x28);
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, s32 *, 0x20) = 0;
    }
}

void func_0000A740(s32 arg0) {
    if (arg0 != 0) {
        sceHVNetfront_Module_A2F4AC9E(arg0);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000A760);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000A828);

void func_0000A92C(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000A934);

s32 func_0000AA38(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000AA40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000ABE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000AC50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000AD18);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000AD94);

void func_0000ADD4(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        if ((arg1 >= 0) && (arg1 < M2C_FIELD(arg0, s32 *, 0x14))) {
            sceHVNetfront_Module_F489E9B4(arg0, sceHVNetfront_Module_1461AF80());
        }
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000AE24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000AEC8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000AF44);

s32 func_0000AF68(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x20);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000AF7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000B07C);

s32 func_0000B13C(void) {
    return 0;
}

s32 func_0000B144(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000B14C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000B290);

void func_0000B2E8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 2;
    M2C_FIELD(arg0, s32 *, 0) = 0;
}

void func_0000B2F8(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000B300);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000B5A4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DE90);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DE98);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DEA0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DEA8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DEB0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DEB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DEC4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DECC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DED4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DEDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000B61C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DEF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000B724);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000BCEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000BD18);

void func_0000BECC(void *arg0) {
    sceHVWWW_Library_52782A62(M2C_FIELD(arg0, s32 *, 0x44), 0);
}

void func_0000BEEC(void *arg0) {
    sceHVWWW_Library_3CAF5AEF(M2C_FIELD(arg0, s32 *, 0x44));
}

s32 func_0000BF08(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x68C);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000BF10);

void func_0000BFD0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x878) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000BFD8);

void func_0000C100(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x87C) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C108);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C318);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C358);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C3A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C3E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C430);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C478);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C51C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C584);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C5EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C654);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C69C);

s32 func_0000C700(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x6B8) == 0) {
        func_0000C69C(func_00009DFC());
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C734);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C77C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C804);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C884);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C924);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C9F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000CAFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000CDB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000CEC8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000D0FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000D18C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000D2C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000D334);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000D36C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000D3A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000D444);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000D4BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000D534);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000D614);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000D6BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000D784);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000D7DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000D858);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000D9F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000DA58);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000DAF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000DBA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000DC54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000DD04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000DD5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000DDB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000DE0C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000DE64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000DECC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000DF44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000DFF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000E0A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000E10C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000E36C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000E3B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000E520);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_CAA4BDD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6BA06056);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E25ACBBB);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A72A9616);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_DBF36A05);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C1CBF794);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2764F63A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B5E28668);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000EC38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000EC88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000ED64);

void func_0000EE48(s32 arg0, s32 arg1, s32 arg2) {
    func_0000DF44(arg0, arg1);
    func_0000EC88(arg0, 0x10023, arg2);
}

void func_0000EE8C(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_0000EC38(arg1, arg2);
    func_0000EC88(arg0, 0x10024, arg3);
}

void func_0000EEDC(s32 arg0, M2C_UNK arg1, s32 arg2) {
    func_0000DFF4(func_00009DFC(), arg1);
    func_0000EC88(arg0, 0x10017, arg2);
}

void func_0000EF38(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    func_0000D858(arg0, arg1, arg2, arg3, arg4, arg5);
    func_0000EC88(arg0, 0x10009, arg6);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000EF7C);

void func_0000EFC0(s32 arg0, s32 arg1) {
    func_0000D784();
    func_0000EC88(arg0, 0x10016, arg1);
}

void func_0000F004(s32 arg0, s32 arg1, s32 arg2) {
    func_0000DBA4(arg0, arg1);
    func_0000EC88(arg0, 0x1000D, arg2);
}

void func_0000F048(s32 arg0, s32 arg1, s32 arg2) {
    func_0000DAF4(arg0, arg1);
    func_0000EC88(arg0, 0x1000C, arg2);
}

void func_0000F08C(s32 arg0, s32 arg1, s32 arg2) {
    func_0000DC54(arg0, arg1);
    func_0000EC88(arg0, 0x1000E, arg2);
}

void func_0000F0D0(s32 arg0, s32 arg1) {
    func_0000DD5C();
    func_0000EC88(arg0, 0x10010, arg1);
}

void func_0000F114(s32 arg0, s32 arg1) {
    if (func_0000E10C() != 0) {
        func_0000EC88(arg0, 0x1001A, arg1);
    }
}

void func_0000F160(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_a1;

    if (arg1 != 0) {
        func_0000DE0C();
        var_a1 = 0x10012;
    } else {
        func_0000DDB4();
        var_a1 = 0x10011;
    }
    func_0000EC88(arg0, var_a1, arg2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000F1C0);

void func_0000F288(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    func_0000E3B4(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    func_0000EC88(arg0, 0x10022, arg7);
}

void func_0000F2CC(s32 arg0, s32 arg1, s32 arg2) {
    func_0000DE64(arg0, arg1);
    func_0000EC88(arg0, 0x10013, arg2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000F310);

void func_0000F354(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_0000D6BC(arg0, arg1, arg2, arg3);
    func_0000EC88(arg0, 0x10015, arg4);
}

void func_0000F398(s32 arg0, s32 arg1, s32 arg2) {
    func_0000D614(arg0, arg1);
    func_0000EC88(arg0, 0x10027, arg2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000F3DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000F52C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000F568);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DF34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DF5C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DF60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D7F88071);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000F798);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000F7E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000F86C);

s32 func_0000F914(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0_2;
    s32 var_s0;
    void *temp_v0;

    temp_v0 = func_0000F798(arg0);
    func_00011D74(temp_v0);
    temp_v0_2 = func_0001198C(func_0000F798(arg0), arg1, arg2);
    var_s0 = 0;
    if (temp_v0_2 != 1) {
        var_s0 = ~temp_v0_2 != 0;
    }
    func_00011D98(temp_v0);
    return var_s0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000F9A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000FA34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000FAB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000FB64);

s32 sceHVNetfront_Module_E0BC5E08(void) {
    return M2C_FIELD(func_00009DFC(), s32 *, 0x908);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000FC40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000FD1C);

s32 func_0000FE90(void *arg0) {
    void *sp0;
    func_0009315C(&sp0);
    return sp0 - M2C_FIELD(arg0, s32 *, 0xB0);
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DF98);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000FEC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00010AA8);

void func_00010AFC(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0);
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 8) = 0;
    if (temp_v0_2 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0_2);
    }
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    sceHVNetfront_Module_D611E938((s32) arg0, 0, 0x14);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00010B5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00010CB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00010CF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00010DA8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00010E98);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00010F28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00011140);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00011184);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00011304);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000113C8);

s32 func_00011574(void *arg0) {
    s32 temp_s0;

    if (arg0 != NULL) {
        temp_s0 = M2C_FIELD(arg0, s32 *, 0x10);
        sceHVNetfront_Module_A2F4AC9E(M2C_FIELD(arg0, s32 *, 0xC));
        sceHVNetfront_Module_A2F4AC9E((s32) arg0);
        func_00015FAC(temp_s0);
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000115C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00011698);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000116BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00011760);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000117A4);

void func_00011838(void *arg0) {
    s32 temp_a0;
    void *temp_s0;
    void *var_v0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x40);
    if (temp_a0 > 0) {
        sceKernelDeleteSema(temp_a0);
    }
    var_v0 = func_0001189C(arg0);
    if (var_v0 != NULL) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 0x20);
            func_00011760(arg0, var_v0);
            var_v0 = temp_s0;
        } while (temp_s0 != NULL);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001189C);

s32 func_000118A4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

void func_000118AC(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

void func_000118B4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000118BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001198C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00011B30);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00011CFC);

void func_00011D74(void *arg0) {
    sceKernelWaitSema(M2C_FIELD(arg0, s32 *, 0x40), 1, 0);
}

void func_00011D98(void *arg0) {
    sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0x40), 1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00011DB8);

void func_00011E38(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x858) = arg1;
    }
}

s32 func_00011E48(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x85C);
    }
    return var_v0;
}

void func_00011E5C(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x85C) = arg1;
    }
}

s32 func_00011E6C(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x868);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00011E80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00011E90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00011FCC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00012130);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00012188);

void func_00012340(s32 arg0) {
    if (arg0 != 0) {
        sceHVNetfront_Module_A2F4AC9E(arg0);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00012360);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001249C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00012608);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000127C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00012908);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000129B8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E0C0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E0E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00012A68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00012DF4);

s32 func_00013158(s32 arg0, s32 arg1, s32 *arg2) {
    s32 temp_v0;

    temp_v0 = func_00012DF4(func_00009DFC() + 0x880, 0, 0, arg0, arg1);
    *arg2 = temp_v0;
    return (temp_v0 != 0) ? 0 : -1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000131C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00013324);

void func_0001345C(s32 arg0) {
    func_00013324(func_00009DFC() + 0x880, arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00013490);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00013614);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000136F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00013888);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000139A4);

void func_00013B34(void *arg0) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_v0 != 0) {
            sceHVNetfront_Module_88977645(temp_v0, -1);
        }
        sceHVNetfront_Module_D611E938((s32) arg0, 0, 8);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00013B80);

s32 func_00013CCC(s32 arg0, M2C_UNK arg1) {
    return (func_00013B80(arg0 + 0x89C, 0, arg1) != 0) ? 0 : -1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00013CFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00013DB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00013E9C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00013F10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014170);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000142EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000143E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014428);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014470);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014794);

s32 sceHVNetfront_Module_D9956972(void) {
    return M2C_FIELD(func_00009DFC(), s32 *, 0x910);
}

s32 sceHVNetfront_Module_CAE659B5(void) {
    return M2C_FIELD(func_00009DFC(), s32 *, 0x69C);
}

s32 func_00014900(void) {
    return M2C_FIELD(func_00009DFC(), s32 *, 0x698);
}

s32 func_00014920(void) {
    return M2C_FIELD(func_00009DFC(), s32 *, 0x6A4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014940);

s32 func_000149F4(void) {
    return 0;
}

void func_000149FC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = func_00009E08();
    M2C_FIELD(arg0, s32 *, 4) = func_00009E7C();
}

void func_00014A2C(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014A34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014A94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014AF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014B50);

void func_00014BB4(s32 arg0) {
    func_000182E4();
    func_0001576C(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014BE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014C3C);

s32 func_00014D4C(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (func_00015FE0(arg0) != 0) {
        M2C_FIELD(arg0, s32 *, 0x40) = 1;
        sceHVNetfront_Module_BB5E8F0E(arg0 + 0x48, (s32) &D_0011E1E4);
        do {

        } while (func_000161A4(arg0, arg1) != 0);
        func_00016404(arg0);
        var_v1 = M2C_FIELD(arg0, s32 *, 0x44);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014DC0);

s32 func_00014E24(s32 arg0) {
    s32 var_v1;

    var_v1 = 1;
    if (func_000161A4() == 0) {
        func_00016404(arg0);
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014E64);

s32 func_00014F40(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (func_00017044() != 0) {
        var_v1 = func_00014F80(arg0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014F80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014FC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00015064);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00015160);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000151E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001523C);

s32 func_0001529C(s32 arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_00015558();
    var_v1 = 0;
    if (temp_v0 != 0) {
        var_v1 = func_0001523C(arg0, temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000152E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00015368);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000153BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000153F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00015430);

void func_000154C8(void *arg0) {
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 0x24);
    sceHVNetfront_Module_1DF9F3CD(temp_a0, M2C_FIELD(temp_a0, s32 *, 0x18));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000154E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00015558);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000155E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001570C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001576C);

s32 func_000157BC(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0) = 0;
    M2C_FIELD(arg1, s8 *, 4) = 0;
    func_000158A4(arg1 + 0x28);
    return func_00018200(arg0, arg1 + 0x4C) != 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00015810);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000158A4);

s32 func_000158D8(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_A2F4AC9E(temp_v0);
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_v0_2 != 0) {
        sceHVNetfront_Module_A2F4AC9E(temp_v0_2);
    }
    temp_v0_3 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v0_3 != 0) {
        sceHVNetfront_Module_A2F4AC9E(temp_v0_3);
    }
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00015938);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00015A34);

s32 func_00015B38(void **arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_v0_3;

    temp_v0_3 = func_00015BFC();
    if (temp_v0_3 == NULL) {
        *arg0 = NULL;
        return 0x4000;
    }
    M2C_FIELD(temp_v0_3, s32 *, 8) = 1;
    M2C_FIELD(temp_v0_3, s32 *, 0xC) = 0x1F;
    *M2C_FIELD(temp_v0_3, s8 **, 0x20) = 0;
    temp_v0 = func_00015A34(temp_v0_3, arg1, arg2, arg3);
    if ((temp_v0 != 0) && (temp_v0 & 0x90)) {
        *arg0 = temp_v0_3;
        return temp_v0;
    }
    temp_v0_2 = func_00014FC0(arg1, temp_v0_3);
    *arg0 = temp_v0_3;
    return temp_v0 | temp_v0_2;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00015BFC);

void func_00015C5C(void *arg0) {
    func_000158D8(arg0);
    sceHVNetfront_Module_A2F4AC9E((s32) arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00015C88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00015DFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00015F24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00015FAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00015FE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000161A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00016374);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00016404);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00016438);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E160);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E1C0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E1E4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E1EC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E210);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00016538);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000165F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00017044);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E274);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E278);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E27C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E280);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E288);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E294);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E2A4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E2B0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E2C0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E2C4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E2CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001711C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00017848);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000178BC);

s32 func_000179CC(void *arg0) {
    s32 temp_v0;
    s32 var_s1;

    var_s1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x3C);
    if (temp_v0 > 0) {
        var_s1 = func_00017848(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 0x34), temp_v0);
    }
    sceHVNetfront_Module_A2F4AC9E(M2C_FIELD(arg0, s32 *, 0x34));
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    sceHVNetfront_Module_71125C97(M2C_FIELD(arg0, s32 *, 0));
    M2C_FIELD(arg0, s32 *, 0) = -1;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    return var_s1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00017A3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00017AFC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E378);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E37C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E390);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E394);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E3A4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E3A8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E3B4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E3C8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E3CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E3E0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E3E4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E3EC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E3F8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E400);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E408);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E430);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E43C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E44C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E450);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E454);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00017BBC);

void func_00017C98(s32 arg0, s32 arg1, s32 arg2) {
    sceHVNetfront_Module_BB5E8F0E(arg0, (s32) &D_0011E464);
    sceHVNetfront_Module_56988A48(arg0, arg1);
    sceHVNetfront_Module_56988A48(arg0, (s32) &D_0011E460);
    func_00017DB0(0xA, 0x30, arg0, arg2);
    sceHVNetfront_Module_56988A48(arg0, (s32) &D_0011E390);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00017D1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E460);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E464);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00017DB0);

void func_00017F3C(s32 *arg0, void *arg1) {
    func_00017FC4(arg0, M2C_FIELD(arg1, u8 **, 0));
    func_00018028(arg0, M2C_FIELD(arg1, u8 **, 4));
    func_0001808C(arg0, M2C_FIELD(arg1, s32 *, 8));
    func_00018094(arg0, M2C_FIELD(arg1, s32 *, 0xC));
    func_0001809C(arg0, M2C_FIELD(arg1, s32 *, 0x10));
    func_000180A4(arg0, M2C_FIELD(arg1, s32 *, 0x18));
    func_000180AC(arg0, M2C_FIELD(arg1, s32 *, 0x14));
    func_000180B4(arg0, 0);
}

void func_00017FC4(s32 *arg0, u8 *arg1) {
    s32 temp_v0;

    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0);
        *arg0 = 0;
    }
    if ((arg1 != NULL) && (*arg1 != 0)) {
        *arg0 = sceHVNetfront_Module_27D353B1(arg1);
    }
}

void func_00018028(void *arg0, u8 *arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0);
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    if ((arg1 != NULL) && (*arg1 != 0)) {
        M2C_FIELD(arg0, s32 *, 4) = sceHVNetfront_Module_27D353B1(arg1);
    }
}

void func_0001808C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

void func_00018094(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
}

void func_0001809C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
}

void func_000180A4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
}

void func_000180AC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
}

void func_000180B4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}

void func_000180BC(s32 arg0, void *arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    func_000158A4(arg1);
    func_00018168(arg0, M2C_FIELD(arg1, s32 *, 0));
    func_0001819C(arg0, M2C_FIELD(arg1, s32 *, 4));
    M2C_FIELD(arg1, s32 *, 8) = func_000181D0(arg0);
    temp_v0 = func_000181D8(arg0);
    M2C_FIELD(arg1, s32 *, 0xC) = temp_v0;
    temp_v0_2 = func_00018FD0(temp_v0);
    if (temp_v0_2 != 0) {
        sceHVNetfront_Module_BB5E8F0E(M2C_FIELD(arg1, s32 *, 0x20), temp_v0_2);
    }
    M2C_FIELD(arg1, s32 *, 0x10) = func_000181E0(arg0);
    M2C_FIELD(arg1, s32 *, 0x18) = func_000181E8(arg0);
    M2C_FIELD(arg1, s32 *, 0x14) = func_000181F0(arg0);
    M2C_FIELD(arg1, s32 *, 0x1C) = func_000181F8(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00018168);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001819C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000181D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000181D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000181E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000181E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000181F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000181F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00018200);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000182E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00018370);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00018414);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F9401A23);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00018514);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_5EBA1D34);

s32 func_00018618(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00018620);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00018680);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000187C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001890C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00018C24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E4A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00018C68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00018CFC);

s32 func_00018D70(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0);
    }
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00018D9C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00018F14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00018FD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00019038);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00019108);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00019158);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00019398);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001946C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000197E8);

s32 func_00019880(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00019888);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00019A10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00019AAC);

void func_00019CD0(void *arg0, M2C_UNK arg1) {
    sceHVNetfront_Module_65813EA4(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), arg1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00019CF4);

void func_00019D00(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = func_00009E08();
    M2C_FIELD(arg0, s32 *, 4) = func_00009E7C();
}

void func_00019D30(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00019D38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00019D78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00019EB0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E4C4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E4D0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E4DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E4E4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E4F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E4FC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E50C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E514);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E51C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E524);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E52C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E530);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E538);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E544);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E550);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E5F8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E5FC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E604);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E60C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00019F84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001A0F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001A1AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001A3C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001A490);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001A5BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001A72C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001A89C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001A8C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001AA78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001AB2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001AC2C);

void func_0001ACA4(void) {
}

void func_0001ACAC(void) {
}

void func_0001ACB4(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001ACBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001AD3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001ADD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001AE7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001AEF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001AF98);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001B1D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001B384);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E698);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001B4E8);

void func_0001B824(void) {
}

void func_0001B82C(s32 *arg0) {
    sceHVWWW_Library_4881039E(*arg0);
}

void func_0001B848(s32 *arg0) {
    sceHVWWW_Library_4881039E(*arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001B864);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001B8BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001B980);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001BC40);

void func_0001C008(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001C010);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001C458);

void func_0001C500(void) {
}

void func_0001C508(void) {
}

void func_0001C510(void) {
}

void func_0001C518(void) {
}

void func_0001C520(void) {
}

void func_0001C528(void) {
}

void func_0001C530(void *arg0) {
    void *sp0;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;
    void *temp_s2;

    func_0001E058(&D_001358C4);
    func_0001E108((s32) &D_001358C4);
    func_0001F6B0(arg0);
    func_000202C8(arg0);
    func_00022BE8(arg0);
    func_000227B0(arg0);
    func_0001F01C((s32) arg0);
    if (func_00020E54((s32) arg0, 0xB, 0xB) == 0) {
        func_00020FD0((s32) arg0, 0xB);
    }
    temp_v0 = func_000C580C(0, &sp0);
    temp_s2 = arg0 + 0x18;
    temp_a1 = temp_v0;
    if (sp0 == 0x18) {
        temp_s1 = M2C_FIELD(temp_s2, s32 *, 0x10);
        temp_s0 = M2C_FIELD(temp_s2, s32 *, 0x14);
        sceHVNetfront_Module_1A02495A((s32) temp_s2, temp_a1, 0x18);
        M2C_FIELD(temp_s2, s32 *, 0x10) = temp_s1;
        M2C_FIELD(temp_s2, s32 *, 0x14) = temp_s0;
    }
    if (temp_v0 != 0) {
        func_000C5908(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001C61C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001C710);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001C744);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001C7E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001C88C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001C934);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001C990);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001D200);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001D304);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001D408);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001DD8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001DFE8);

s32 func_0001E058(void *arg0) {
    sceHVNetfront_Module_0F5AA1D5(arg0, 0x14);
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001E078);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001E108);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001E19C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001E2B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001E514);

void func_0001E5F0(s32 ***arg0, void *arg1) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg1, s32 *, 0);
    switch (temp_v1) {                              /* irregular */
    case 0x7:
        func_0001E2B4((s32) arg0, M2C_FIELD(arg1, s32 *, 0x1C), (s32) arg1);
        return;
    case 0x1022:
        func_0001E514((s32) arg0);
        return;
    default:
        M2C_FIELD(func_000D45B0(***arg0, &D_00133BC8), M2C_UNK (**)(s32 ***, void *), 0x14)(arg0, arg1);
        return;
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001E684);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001E9F8);

void func_0001EABC(s32 ***arg0, void *arg1) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg1, s32 *, 0);
    switch (temp_v1) {                              /* irregular */
    case 0x7:
        func_0001E684((s32) arg0, M2C_FIELD(arg1, s32 *, 0x1C), (s32) arg1);
        return;
    case 0x1022:
        func_0001E9F8();
        return;
    default:
        M2C_FIELD(func_000D45B0(***arg0, &D_00133BE0), M2C_UNK (**)(s32 ***, void *), 0x14)(arg0, arg1);
        return;
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001EB50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001EEC4);

void func_0001EF88(s32 ***arg0, void *arg1) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg1, s32 *, 0);
    switch (temp_v1) {                              /* irregular */
    case 0x7:
        func_0001EB50((s32) arg0, M2C_FIELD(arg1, s32 *, 0x1C), (s32) arg1);
        return;
    case 0x1022:
        func_0001EEC4();
        return;
    default:
        M2C_FIELD(func_000D45B0(***arg0, &D_00133BF8), M2C_UNK (**)(s32 ***, void *), 0x14)(arg0, arg1);
        return;
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001F01C);

void func_0001F18C(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001F194);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001F228);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001F3A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001F500);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001F5F0);

M2C_UNK *func_0001F6B0(void *arg0) {
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s3;
    s32 temp_s4;

    temp_s2 = func_000B2848(arg0);
    temp_s3 = func_000B20DC(arg0);
    temp_s4 = func_000B2114(arg0);
    temp_s2_2 = func_000D4268((s32) arg0, (s32) &D_00133C10, temp_s2, (s32) &func_0001F5F0);
    M2C_FIELD(&D_00133C10, s32 *, 8) = func_0001C934(6, 0xA0, temp_s3);
    M2C_FIELD(&D_00133C10, s32 *, 0xC) = temp_s4;
    func_000D4428((s32) arg0, temp_s2_2, (s32) "SkinChoice");
    return &D_00133C10;
}

void func_0001F764(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001F76C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001F7A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001FEBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001FFB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00020114);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00020208);

M2C_UNK *func_000202C8(void *arg0) {
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s3;
    s32 temp_s4;

    temp_s2 = func_000D122C(arg0);
    temp_s3 = func_000D1070(arg0);
    temp_s4 = func_000D10A8(arg0);
    temp_s2_2 = func_000D4268((s32) arg0, (s32) &D_00133C28, temp_s2, (s32) &func_00020208);
    M2C_FIELD(&D_00133C28, s32 *, 8) = func_0001C934(5, 0x60, temp_s3);
    M2C_FIELD(&D_00133C28, s32 *, 0xC) = temp_s4;
    func_000D4428((s32) arg0, temp_s2_2, (s32) "SkinList");
    return &D_00133C28;
}

void func_0002037C(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00020384);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000203BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002096C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00020AEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00020BA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00020DB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00020E54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00020F80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00020FD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00021048);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00021138);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00021500);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00021D44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00022618);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000226F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E724);

M2C_UNK *func_000227B0(void *arg0) {
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s3;
    s32 temp_s4;

    temp_s2 = func_000B7A50(arg0);
    temp_s3 = func_000B79F4(arg0);
    temp_s4 = func_000B7A28(arg0);
    temp_s2_2 = func_000D4268((s32) arg0, (s32) &D_00133C58, temp_s2, (s32) &func_000226F0);
    M2C_FIELD(&D_00133C58, s32 *, 8) = func_0001C934(0xD, 0x58, temp_s3);
    M2C_FIELD(&D_00133C58, s32 *, 0xC) = temp_s4;
    func_000D4428((s32) arg0, temp_s2_2, (s32) "SkinTable");
    return &D_00133C58;
}

void func_00022864(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002286C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000228A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000229DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00022ABC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00022B20);

M2C_UNK *func_00022BE8(void *arg0) {
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s3;
    s32 temp_s4;

    temp_s2 = func_000BB9D8(arg0);
    temp_s3 = func_000BB80C(arg0);
    temp_s4 = func_000BB844(arg0);
    temp_s2_2 = func_000D4268((s32) arg0, (s32) &D_00133C70, temp_s2, (s32) &func_00022B20);
    M2C_FIELD(&D_00133C70, s32 *, 8) = func_0001C934(7, 0x54, temp_s3);
    M2C_FIELD(&D_00133C70, s32 *, 0xC) = temp_s4;
    func_000D4428((s32) arg0, temp_s2_2, (s32) "SkinTextBox");
    return &D_00133C70;
}

void func_00022C9C(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00022CA4);

M2C_UNK *func_00022CDC(void) {
    return &D_001358DC;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00022CE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00022D24);

void func_00022E24(void) {
    func_00077818();
}

void func_00022E40(void ***arg0, s32 arg1) {
    func_000C9C60((s32) arg0, arg1, M2C_FIELD(**arg0, s32 *, 0x38));
}

s32 func_00022E64(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00022E6C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00022FB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000232AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023320);

s32 func_00023778(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023780);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023880);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023978);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000239D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023A08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023A28);

void func_00023A58(s32 arg0, M2C_UNK arg1) {
    func_00005DBC();
    func_00092A50(arg0, arg1);
    sceHVWWW_Library_62FB650D();
}

void func_00023A9C(void) {
    sceHVWWW_Library_A596909E();
    func_00092B24();
    func_00005DDC();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023AC8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023B0C);

s32 func_00023B7C(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    if (arg0 != 0) {
        temp_v0 = func_00023B0C();
        if (temp_v0 != 0) {
            var_s0 = func_0002AF88(temp_v0);
        }
    }
    return var_s0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023BC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023C10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023C8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023D18);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023DC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023E18);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023EE0);

void func_00023F38(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00035B88(arg0, 0, arg1, arg2, arg3);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023F64);

void func_00023FC4(s32 arg0) {
    func_000AF940(arg0);
    func_000D0EE8(arg0);
    func_000B1F08(arg0);
    func_000BB6A0(arg0);
    func_000BB9E8((void *) arg0, 0);
    func_000B4160(arg0);
    func_000B7898(arg0);
    M2C_FIELD(M2C_FIELD(((func_000D122C((void *) arg0) * 0xC) + arg0), void **, 0xA8), M2C_UNK **, 0xC) = &D_0011EBBC;
    M2C_FIELD(M2C_FIELD(((func_000B2848((void *) arg0) * 0xC) + arg0), void **, 0xA8), M2C_UNK **, 0xC) = &D_0011EBE0;
    func_00035A7C(arg0);
}

void func_00024074(s32 arg0) {
    func_00035AE4();
    func_000B79B4(arg0);
    func_000B42B0(arg0);
    func_000BB7CC(arg0);
    func_000B209C(arg0);
    func_000D1030(arg0);
    func_000AFB3C(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000240C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00024184);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00024298);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00024308);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00024344);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00024520);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00024590);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00024600);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00024670);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000246F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00024780);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E740);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E748);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E8D4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E8F8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E944);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EB84);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EBB4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EBBC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EBE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EC38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EC3C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EC40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EC44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000247B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00024AA4);

s32 func_00024AE8(s32 arg0) {
    s32 var_v1;

    var_v1 = 1;
    if (func_00024AA4() != 0) {
        var_v1 = func_000B4C4C(arg0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00024B28);

void func_00024B9C(s32 arg0, s32 arg1) {
    if (func_00024AA4() != 0) {
        func_000B4810(arg0, arg1);
        return;
    }
    func_000CBF48((void **) arg0);
}

void func_00024BF0(s32 arg0) {
    func_0002AF88(arg0);
}

void func_00024C0C(void) {
    func_0002841C();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00024C28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00024F8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025034);

void func_000250C4(void) {
    func_00024F8C();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000250E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025160);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025268);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000252CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025400);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025430);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000254C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000255D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002564C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000256C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025790);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025828);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025874);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000258C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025938);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025B54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025BB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025C78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025C94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025CB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025D60);

s32 func_00025FD4(void **arg0, void *arg1) {
    void *sp0;
    s32 temp_s1;

    temp_s1 = func_000C9FF4(arg0);
    func_000C9C24((s32 *) arg0, &sp0);
    M2C_FIELD(arg1, s32 *, 0xC) = temp_s1;
    func_000C12D0((s32) arg1, &sp0);
    return 1;
}

s32 func_00026030(void) {
    func_00025BB4();
    return 1;
}

s32 func_00026050(s32 arg0) {
    if (func_000C9E10() != 0) {
        func_00025BB4(arg0);
    }
    if (func_00025874(arg0) != 0) {
        func_00025B54(arg0);
    }
    return 1;
}

s32 func_000260A0(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000260A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00026118);

s32 func_000261C0(s32 arg0) {
    if (func_00025874(arg0) != 0) {
        func_00025B54(arg0);
    }
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000261F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000263BC);

void func_0002645C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), s32 *, 0x4C);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_A2F4AC9E(temp_v0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), s32 *, 0x4C) = 0;
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002649C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000264F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00026548);

s32 *func_00026598(s32 arg0) {
    s32 *temp_v0;
    s32 temp_v0_2;

    temp_v0_2 = sceHVWWW_Library_0E71B25C();
    temp_v0 = sceHVNetfront_Module_6D4EE418(temp_v0_2);
    if (temp_v0 != NULL) {
        sceHVNetfront_Module_1A02495A(*temp_v0, arg0, temp_v0_2);
    }
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000265F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00026644);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000266CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000267CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00026898);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00026940);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000269E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00026A5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00026C5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00026CC8);

s32 func_00026DCC(s32 arg0, s32 arg1) {
    func_00026CC8(arg0, arg1, -0xA);
    return 1;
}

s32 func_00026DEC(s32 arg0, s32 arg1) {
    func_00026CC8(arg0, arg1, 0xA);
    return 1;
}

s32 func_00026E0C(s32 arg0, s32 arg1) {
    func_00026CC8(arg0, arg1, -0x5A);
    return 1;
}

s32 func_00026E2C(s32 arg0, s32 arg1) {
    func_00026CC8(arg0, arg1, 0x5A);
    return 1;
}

s32 func_00026E4C(s32 **arg0, s32 arg1, s32 arg2) {
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    void *temp_a2;

    temp_s5 = func_0002855C();
    temp_v0 = func_0002841C(arg0);
    if (((temp_v0 == 0) | (temp_s5 == 0)) == 0) {
        temp_a2 = temp_v0 + 0x948;
        temp_s4 = **arg0;
        if (arg1 != 0) {
            var_s1 = M2C_FIELD(temp_a2, s32 *, 0x1EC);
            var_s0 = (arg2 * M2C_FIELD(temp_a2, s32 *, 0x1FC)) / 1000;
        } else {
            var_s0 = M2C_FIELD(temp_a2, s32 *, 0x1E8);
            var_s1 = (arg2 * M2C_FIELD(temp_a2, s32 *, 0x200)) / 1000;
        }
        func_000C7E78(temp_s4, 1, temp_a2);
        sceHVWWW_Library_68822481(temp_s5, temp_v0, var_s0, var_s1);
        func_000C7EA0(temp_s4, 1);
    }
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00026F58);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00026FB4);

s32 func_0002703C(s32 arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 temp_s0;

    if (func_000265F4(arg0) != 0) {
        temp_s0 = func_0002855C(arg0);
        sceHVWWW_Library_F32F9DB7(temp_s0, func_0002841C(arg0), arg1, arg2, M2C_FIELD(arg3, s32 *, 0x10), M2C_FIELD(arg3, s32 *, 0x18));
        func_00026644(arg0, 0);
    }
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000270D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000271E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000272B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00027394);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00027460);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00027560);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00027600);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000276A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000276EC);

void func_000277D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *sp0;
    s32 sp4;

    func_0002A518(arg0, &sp0, (s32) &sp4);
    func_000276EC(arg0, arg1, arg2, arg3, sp0, sp4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00027840);

void func_00027890(s32 arg0, void *arg1) {
    void *temp_a0;

    temp_a0 = arg0 + 0x948;
    M2C_FIELD(arg1, s32 *, 0) = (s32) (M2C_FIELD(arg1, s32 *, 0) - M2C_FIELD(temp_a0, s32 *, 0x1E8));
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - M2C_FIELD(temp_a0, s32 *, 0x1EC));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000278B8);

s32 func_00027AB4(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00027ABC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00027D5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00027E44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000281B8);

void func_00028298(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), s32 *, 0x38);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_A2F4AC9E(temp_v0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), s32 *, 0x38) = 0;
    }
}

s32 func_000282D8(void *arg0) {
    return M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), void **, 0x38), s32 *, 0x18);
}

s32 func_000282E8(void *arg0) {
    return M2C_FIELD(M2C_FIELD(((M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), void **, 0x38), s32 *, 0x18) * 0xC) + arg0), void **, 0xA8), s32 *, 8);
}

s32 func_00028310(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), s32 *, 0x38) + 0x1C;
}

void func_00028320(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), void **, 0x38), s32 *, 8) = arg1;
}

s32 func_00028330(void *arg0) {
    return M2C_FIELD(M2C_FIELD(((M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), void **, 0x38), s32 *, 0x18) * 0xC) + arg0), void **, 0xA8), s32 *, 0xC);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00028358);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002841C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002846C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000284BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002850C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002855C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000285B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00028618);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00028794);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000287E4);

void func_00028834(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), void **, 0x38), s32 *, 0x34) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00028844);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00028858);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000288A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000289C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00028A14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00028AD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00028B54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00028C94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00028EAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00028F0C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00028F9C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000290BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002910C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002915C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000291E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00029250);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000292A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00029318);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002939C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000293EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000294A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00029540);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000295A0);

s32 func_0002963C(s32 arg0) {
    func_000295A0(arg0, 1);
    return 1;
}

s32 func_0002965C(s32 arg0) {
    func_000295A0(arg0, 0);
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002967C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002969C);

s32 func_00029908(void ****arg0, s32 arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = func_000CA0B0((s32) arg0, M2C_FIELD(M2C_FIELD(***arg0, void **, 0x4D0), s32 *, 0x3C));
    if (M2C_FIELD(temp_v0, s32 *, 0x18) == 0) {
        func_000CBCF4(arg0);
        M2C_FIELD(temp_v0, s32 *, 8) = arg1;
        M2C_FIELD(temp_v0, s32 *, 0xC) = arg2;
        func_00028EAC(func_000CBF3C((void **) arg0), 1);
        M2C_FIELD(temp_v0, s32 *, 0x1C) = 1;
    }
    func_000CA128((s32 **) arg0);
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000299A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00029A54);

s32 func_00029B00(void) {
    return 0;
}

s32 func_00029B08(void) {
    return 0;
}

s32 func_00029B10(void) {
    return 1;
}

s32 func_00029B18(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00029B20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00029BAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00029DD8);

void func_00029E78(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), s32 *, 0x3C);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_A2F4AC9E(temp_v0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), s32 *, 0x3C) = 0;
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00029EB8);

void func_00029F88(s32 ***arg0) {
    func_000BF15C(***arg0, (s32) arg0, (s32) func_00029F88);
    func_000C9E70(arg0, 0, 0);
    func_000CA758(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00029FDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A074);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A0C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A13C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A19C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A290);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A350);

void func_0002A458(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), s32 *, 0x50);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_A2F4AC9E(temp_v0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), s32 *, 0x50) = 0;
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A498);

void func_0002A4DC(void) {
    func_000C9E70();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A4F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A518);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A634);

void func_0002A6EC(s32 ***arg0) {
    func_000BF15C(***arg0, (s32) arg0, (s32) func_00029F88);
    func_000BF15C(***arg0, (s32) arg0, (s32) &func_00029FDC);
    func_000CA758(arg0);
}

void func_0002A74C(s32 arg0) {
    func_000CB274();
    func_000CA73C(arg0);
}

void func_0002A778(void) {
    func_000CA758();
}

s32 func_0002A794(void *arg0) {
    return M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), void **, 0x50), s32 *, 0x44);
}

s32 func_0002A7A4(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), s32 *, 0x50);
}

void func_0002A7B0(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), void **, 0x50), s32 *, 0x34) = arg1;
}

s32 func_0002A7C0(void *arg0) {
    return M2C_FIELD(M2C_FIELD(((M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), void **, 0x50), s32 *, 0x44) * 0xC) + arg0), void **, 0xA8), s32 *, 0xC);
}

s32 func_0002A7E8(void *arg0) {
    return M2C_FIELD(M2C_FIELD(((M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), void **, 0x50), s32 *, 0x44) * 0xC) + arg0), void **, 0xA8), s32 *, 8);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A810);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A864);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A8B8);

s32 func_0002A944(void) {
    func_0002A8B8();
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A964);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A9D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002AA54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002ACF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002ADE0);

void func_0002AE9C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), s32 *, 0x44);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_A2F4AC9E(temp_v0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), s32 *, 0x44) = 0;
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002AEDC);

s32 func_0002AF28(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_v0;
    void *temp_s1;

    temp_s1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), void **, 0x44);
    func_000CB520(arg1, arg2);
    temp_v0 = func_000CCE14(arg2, M2C_FIELD(temp_s1, s32 *, 0x18));
    func_0002A8B8(temp_v0);
    func_0002B72C(temp_v0);
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002AF88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002AFD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B028);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B078);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B0D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B14C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B1AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B1FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B288);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B350);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B3B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B40C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B558);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B5AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B60C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B678);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B72C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B7D8);

void func_0002B854(s32 arg0, s32 arg1) {
    func_0002B7D8(arg0, 0, arg1);
}

void func_0002B874(s32 arg0, s32 arg1) {
    func_0002B7D8(arg0, 1, arg1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B894);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B934);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B9AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002BB1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002BCC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002BE80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002BF2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002C264);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002C4C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002C71C);

void func_0002CACC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u32 arg5, s32 arg6) {
    if (arg5 < 2U) {
        func_0002C71C(arg0, arg1, arg2, arg3, arg4, (s32) arg5, arg6);
        return;
    }
    func_0002BF2C(arg0, arg1, arg2, arg3, arg4, (s32) arg5, arg6);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002CB00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002CDF0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002CDF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002CE84);

void func_0002D43C(s32 arg0, s32 arg1) {
    func_0007B340(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 8) = 0x64;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &func_0002CE84;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}

void func_0002D478(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002D480);

void func_0002D4EC(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002D4F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002D56C);

s32 func_0002D61C(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002D624);

void func_0002D720(s32 ***arg0, s32 arg1) {
    if (arg1 != 0) {
        func_000BED5C(***arg0, 0);
        func_000BF908(arg1, 0);
        func_000CA430(arg0, arg1);
        sceHVNetfront_Module_A2F4AC9E(arg1);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002D784);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002D844);

void func_0002D894(void) {
    func_0002846C();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002D8B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002D8F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002D918);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002D98C);

void func_0002DB68(void) {
    func_000292A0();
}

void func_0002DB84(s32 ***arg0) {
    func_000BED5C(***arg0, 0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002DBAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002DBDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002DCC0);

void func_0002DD1C(void) {
    func_000250C4();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002DD38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002DEEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002DFEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002E0EC);

void func_0002E28C(s32 arg0) {
    func_0002B288(func_000284BC(), arg0);
    func_00013490(func_0002841C(arg0), 0);
    func_00013CFC(func_0002841C(arg0));
    func_000C9644(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002E2E8);

void func_0002E3C8(s32 arg0, s32 arg1) {
    func_0002B288(func_000284BC(arg1), arg1);
    func_000C9644(arg0);
}

void func_0002E410(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000CB1F0(arg0, arg2, arg3);
    func_000CB1F0(arg1, arg2, arg3);
    func_00028C94(arg1, arg2, arg3);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002E474);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002E4A4);

void func_0002E4C4(s32 arg0, s32 *arg1) {
    s32 temp_v1;

    if (func_000C9DCC() & 0x80) {
        temp_v1 = *M2C_FIELD(M2C_FIELD(func_0002841C(arg0), void **, 0xB54), s32 **, 0xC);
        if (temp_v1 != 0) {
            *arg1 += temp_v1;
        }
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002E528);

s32 func_0002E62C(void) {
    s32 **temp_v0;
    s32 var_v1;

    temp_v0 = func_000CA00C();
    var_v1 = 0;
    if (temp_v0 != NULL) {
        var_v1 = **temp_v0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002E65C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002E758);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002E854);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002E900);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002E990);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002EA74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002ED04);

void func_0002EE38(s32 arg0) {
    s32 **temp_v0;
    s32 temp_v0_3;
    void *temp_v0_2;

    temp_v0 = func_000CA00C();
    if (temp_v0 != NULL) {
        temp_v0_2 = sceHVNetfront_Module_896E55F6(temp_v0);
        func_0002E900(temp_v0_2);
        sceHVNetfront_Module_C04FADD9(temp_v0_2 + 0x14);
        temp_v0_3 = M2C_FIELD(temp_v0_2, s32 *, 0x3C);
        if (temp_v0_3 != 0) {
            sceHVNetfront_Module_0D525122(temp_v0_3);
            M2C_FIELD(temp_v0_2, s32 *, 0x3C) = 0;
        }
        sceHVNetfront_Module_B29BE9CE(temp_v0);
        sceHVNetfront_Module_880239D0(temp_v0);
        func_000CA018(arg0, 0);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002EEC8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002EF38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002F040);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002F16C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002F298);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002F3AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002F478);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002F598);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002F6A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002F7A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002F834);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002F988);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002FD4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002FD94);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011ED10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011ED1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011ED9C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EDD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002FDDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002FEC8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00030118);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00030388);

s32 func_000304E0(void **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_a2;
    s32 var_v0;
    s32 var_v1;
    void *temp_v0;

    if (func_000C9E40(arg0) == 0) {
        temp_v0 = *arg0;
        temp_a2 = M2C_FIELD(temp_v0, s32 *, 0x54);
        var_v1 = M2C_FIELD(M2C_FIELD(((temp_a2 * 0xC) + *M2C_FIELD(temp_v0, s32 **, 0)), void **, 0xA8), s32 (**)(void **, s32, s32), 0x14)(arg0, arg4, temp_a2);
    } else {
        var_v1 = 0;
        if (func_000B2858((s32) arg0) & 4) {
            if (func_000B2AF4((s32) arg0) != 0) {
                var_v0 = func_000D223C(func_000B2970((s32) arg0));
            } else {
                var_v0 = func_000B2778((s32) arg0);
            }
            var_v1 = func_00030388((s32) arg0, arg1, arg2, arg3, var_v0, 1, arg4);
        }
    }
    return var_v1;
}

s32 func_000305E8(void **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_a2;
    s32 var_v0;
    s32 var_v1;
    void *temp_v0;

    if (func_000C9E40(arg0) == 0) {
        temp_v0 = *arg0;
        temp_a2 = M2C_FIELD(temp_v0, s32 *, 0x54);
        var_v1 = M2C_FIELD(M2C_FIELD(((temp_a2 * 0xC) + *M2C_FIELD(temp_v0, s32 **, 0)), void **, 0xA8), s32 (**)(void **, s32, s32), 0x14)(arg0, arg4, temp_a2);
    } else {
        var_v1 = 0;
        if (func_000B2858((s32) arg0) & 4) {
            if (func_000B2AF4((s32) arg0) != 0) {
                var_v0 = func_000D223C(func_000B2970((s32) arg0));
            } else {
                var_v0 = func_000B2778((s32) arg0);
            }
            var_v1 = func_00030388((s32) arg0, arg1, arg2, arg3, var_v0, 0, arg4);
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000306F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000307E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000308D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000309B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00030ACC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00030BEC);

void func_00030CE8(void) {
    func_000306F0();
}

void func_00030D04(void) {
    func_000307E8();
}

void func_00030D20(void) {
    func_000308D0();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00030D3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00030E28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00030F88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000310C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00031214);

s32 func_000313A0(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000313A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000316DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000317D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00031898);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000319E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00031AE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00031E54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00032008);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00032124);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00032208);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00032274);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000322E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003234C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000323DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000324C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00032630);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000327C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000328AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00032968);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00032D10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00032DB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00033094);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000333AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00033488);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000336A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003386C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003391C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000339D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00033A70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00033BB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00033D94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00033F50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00034250);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00034310);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00034394);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000343C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00034780);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00034A38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00034C6C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00034C98);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00034D1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00034F04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00034F24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00034F48);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00034FE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00035088);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000350AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000350E0);

void func_00035104(s32 arg0) {
    func_000C9644(arg0);
}

void func_00035120(void) {
    func_000CAD58();
}

s32 func_0003513C(void) {
    return 0;
}

void func_00035144(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003514C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000352D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00035498);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00035684);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000357B4);

s32 func_00035A20(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00035A28);

void func_00035A44(s32 arg0) {
    if (arg0 != 0) {
        sceHVNetfront_Module_A2F4AC9E(arg0);
    }
}

void func_00035A64(void) {
}

void func_00035A6C(void) {
}

void func_00035A74(void) {
}

void func_00035A7C(s32 arg0) {
    func_00029DD8(arg0);
    func_000369F4(arg0);
    func_000281B8(arg0);
    func_00035FB4(arg0);
    func_000263BC(arg0);
    func_0002ADE0(arg0, 1);
    func_0002A350(arg0);
    func_00028320((void *) arg0, (s32) &D_0011ED10);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00035AE4);

s32 func_00035B38(void **arg0) {
    return func_000C9EE4(arg0) == (s32) &func_000324C4;
}

void func_00035B64(void) {
    func_000CA00C(func_000CA00C());
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00035B88);

s32 func_00035F18(void) {
    return 1;
}

s32 func_00035F20(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00035F28);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EF28);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EF2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00035FB4);

void func_00036054(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), s32 *, 0x40);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_A2F4AC9E(temp_v0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), s32 *, 0x40) = 0;
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00036094);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000360F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003613C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003615C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003617C);

s32 func_000362B4(void) {
    return 1;
}

s32 func_000362BC(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000362C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000363A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00036454);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000366B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00036718);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00036834);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000369F4);

void func_00036A94(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), s32 *, 0x48);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_A2F4AC9E(temp_v0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), s32 *, 0x48) = 0;
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00036AD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00036B50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00036BA0);

s32 func_00036BF4(void *arg0) {
    return M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), void **, 0x48), s32 *, 0x18);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00036C04);

void func_00036C3C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK (**)(), 4)();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00036C5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00036D00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00036D44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00036D98);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_18F4C8FC);

void sceHVNetfront_Module_DFCBF9BC(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_7EC69C94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_4AF43191);

s32 sceHVNetfront_Module_9D42259B(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 8);
}

s32 func_00036FCC(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0xC);
}

s32 func_00036FD8(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x1C);
}

s32 sceHVNetfront_Module_BA0F8BF7(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x10);
}

s32 sceHVNetfront_Module_6C319E19(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x14);
}

s32 func_00036FFC(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00037008);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00037100);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D091BFB4);

void sceHVNetfront_Module_6F26FEF5(s32 **arg0, s32 arg1) {
    s32 *temp_a0;

    temp_a0 = *arg0;
    if ((arg1 > 0) && (M2C_FIELD(temp_a0, s32 *, 8) != 1)) {
        sceHVNetfront_Module_08549708(M2C_FIELD(temp_a0, s32 *, 0x64));
    }
    sceHVNetfront_Module_B29BE9CE(arg0);
}

void func_000372DC(s32 **arg0, s32 arg1, s32 arg2) {
    void *temp_s1;

    temp_s1 = sceHVNetfront_Module_D091BFB4(arg0, arg1);
    func_0003BABC((s32) temp_s1, sceHVNetfront_Module_D091BFB4(arg0, arg2));
    sceHVNetfront_Module_6F26FEF5(arg0, arg2);
    sceHVNetfront_Module_6F26FEF5(arg0, arg1);
}

void sceHVNetfront_Module_CC51DF45(void **arg0, s32 arg1) {
    s32 var_a1;
    void *temp_a0;
    void *var_a0;

    var_a1 = arg1;
    temp_a0 = *arg0;
    if ((var_a1 <= 0) || (var_a1 <<= 6, (M2C_FIELD(temp_a0, s32 *, 8) == 1))) {
        var_a0 = temp_a0 + 0x24;
    } else {
        var_a0 = (*M2C_FIELD(temp_a0, s32 **, 0x64) + var_a1) - 0x40;
    }
    sceHVNetfront_Module_90958874(var_a0, var_a1);
}

s32 sceHVNetfront_Module_30FFB4C9(s32 **arg0) {
    s32 var_s2;
    s32 var_s3;
    void *temp_v0;
    void *temp_v0_2;

    var_s3 = 1;
    var_s2 = 0;
    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    if (M2C_FIELD(temp_v0, s32 *, 8) > 0) {
        do {
            temp_v0_2 = sceHVNetfront_Module_D091BFB4(arg0, var_s2);
            if (M2C_FIELD(temp_v0_2, s32 *, 0x10) & 4) {
                var_s3 = (func_0003BE9C(temp_v0_2, M2C_FIELD(((M2C_FIELD(temp_v0_2, s32 *, 8) * 4) + M2C_FIELD(temp_v0, s32 *, 0)), s32 *, 0x1C)) == 0) ? 0 : var_s3;
            }
            sceHVNetfront_Module_6F26FEF5(arg0, var_s2);
            var_s2 += 1;
        } while (var_s2 < M2C_FIELD(temp_v0, s32 *, 8));
    }
    sceHVNetfront_Module_B29BE9CE(arg0);
    return var_s3;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00037458);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_5ECEBC07);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_BBD560F1);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_115D847D);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00037A24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00037B14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00037BC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00037C60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00037CF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00037D54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EF48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EF58);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EF68);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EF78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EFB0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EFB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00037DB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00037ED0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00037F5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00038048);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000380E0);

void func_00038160(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_a3;
    s32 var_a6;
    s32 var_a7;
    s32 var_t4;

    var_a6 = M2C_FIELD(arg0, s32 *, 0);
    var_t4 = M2C_FIELD(arg0, s32 *, 4);
    var_a3 = var_a6 + M2C_FIELD(arg0, s32 *, 8);
    var_a7 = var_t4 + M2C_FIELD(arg0, s32 *, 0xC);
    if (arg1 != arg3) {
        var_a6 = (s32) (var_a6 * arg3) / arg1;
        var_a3 = ((s32) ((var_a3 - 1) * arg3) / arg1) + 1;
    }
    if (arg2 != arg4) {
        var_t4 = (s32) (var_t4 * arg4) / arg2;
        var_a7 = ((s32) ((var_a7 - 1) * arg4) / arg2) + 1;
    }
    sceHVNetfront_Module_754AA115((s32) arg0, var_a6, var_t4, var_a3, var_a7);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00038210);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00038734);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000387BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00038B64);

s32 func_0003908C(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00039094);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000391B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00039274);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000392C8);

s32 func_00039454(s32 **arg0, M2C_UNK arg1) {
    sceHVNetfront_Module_D5A24BD1(sceHVNetfront_Module_896E55F6(arg0) + 0x24, arg1);
    sceHVNetfront_Module_B29BE9CE(arg0);
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000394A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_34CDE779);

void sceHVNetfront_Module_B642A9C7(void) {
}

void sceHVNetfront_Module_4B6F7563(void) {
    sceHVNetfront_Module_5CA39435();
}

void sceHVNetfront_Module_19553EDD(s32 arg0) {
    sceHVNetfront_Module_A2F4AC9E(arg0);
}

void sceHVNetfront_Module_E5842D1C(void) {
    sceHVNetfront_Module_5CA39435();
}

void sceHVNetfront_Module_9AA96525(s32 arg0) {
    sceHVNetfront_Module_A2F4AC9E(arg0);
}

void func_00039624(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003962C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00039770);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000397C0);

void func_00039848(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00039850);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000398EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00039904);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00039AA4);

void func_00039B10(s32 **arg0) {
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    temp_v0_2 = M2C_FIELD(temp_v0, void **, 0x24);
    if (temp_v0_2 != NULL) {
        M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 0x18), void **, 0x1C) = temp_v0;
        sceHVNetfront_Module_09FA691C(temp_v0_2);
        sceHVNetfront_Module_A2F4AC9E((s32) M2C_FIELD(temp_v0, void **, 0x24));
        M2C_FIELD(temp_v0, void **, 0x24) = NULL;
    }
    sceHVNetfront_Module_B29BE9CE(arg0);
    sceHVNetfront_Module_880239D0(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00039B74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00039C74);

s32 func_0003A3D8(s32 **arg0, s32 **arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_v0_2 = sceHVNetfront_Module_896E55F6(arg0);
    M2C_FIELD(temp_v0_2, s32 ***, 4) = arg1;
    temp_v0 = func_00039C74((s32) temp_v0_2, arg2, arg3, arg4, arg5, arg6);
    if ((temp_v0 & 1) && (M2C_FIELD(*arg1, s32 *, 8) == 1)) {
        temp_v0_3 = sceHVNetfront_Module_D091BFB4(arg1, 0);
        M2C_FIELD(temp_v0_3, s32 *, 0x10) = (s32) (M2C_FIELD(temp_v0_3, s32 *, 0x10) | 4);
        sceHVNetfront_Module_6F26FEF5(arg1, 0);
    }
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003A4B4);

s32 func_0003A5B0(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003A5B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B8A3F5EA);

void sceHVNetfront_Module_78614BE7(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003A62C);

void func_0003A678(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003A680);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003A69C);

void func_0003A6B8(s32 arg0) {
    png_set_filler(arg0, 0, 0);
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F064);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003A6D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003AA10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003AA74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003AAD0);

void func_0003ABF0(void) {
    M2C_FIELD(func_000F503C(), s32 *, 0x20) = 5;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003AC14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003ADB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003AE00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003AF64);

s32 func_0003AFA0(s32 arg0, u32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (arg1 >= 8U) {
        var_v1 = sceHVNetfront_Module_5D1D77DA(arg0, (s32) &D_0011F064, 8) == 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003AFE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003B0B8);

void func_0003B16C(s32 **arg0) {
    void *temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    func_0003ADB8(temp_v0);
    if (M2C_FIELD(temp_v0, s32 *, 0xA4) != 0) {
        func_0003AF64(temp_v0);
    }
    sceHVNetfront_Module_B29BE9CE(arg0);
    sceHVNetfront_Module_880239D0(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003B1C8);

s32 func_0003B344(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003B34C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_56DB958B);

void sceHVNetfront_Module_77986A50(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003B3C0);

void func_0003B4D8(s32 **arg0) {
    M2C_FIELD(sceHVNetfront_Module_896E55F6(arg0), s32 *, 0xB0) = 1;
    sceHVNetfront_Module_B29BE9CE(arg0);
}

void func_0003B50C(s32 **arg0) {
    M2C_FIELD(sceHVNetfront_Module_896E55F6(arg0), s32 *, 0xB4) = 1;
    sceHVNetfront_Module_B29BE9CE(arg0);
}

void func_0003B540(void) {
}

void func_0003B548(void) {
}

void func_0003B550(void) {
}

void sceHVNetfront_Module_A606F102(void) {
    sceHVNetfront_Module_5CA39435();
}

void sceHVNetfront_Module_FB59447A(s32 arg0) {
    sceHVNetfront_Module_A2F4AC9E(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003B590);

void sceHVNetfront_Module_58F4BEAC(s32 *arg0) {
    *arg0 = 0;
}

void sceHVNetfront_Module_7C778057(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_8CA61859);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_90958874);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F160);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_52F39350);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003B69C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003B6E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1805333D);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_661699B9);

void func_0003B820(void *arg0) {
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    temp_s1 = M2C_FIELD(arg0, s32 *, 0);
    if ((M2C_FIELD(arg0, s32 *, 0x10) & 3) == 1) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x34);
        if (temp_v0 != 0) {
            sceHVNetfront_Module_0D525122(temp_v0);
        }
        temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x38);
        if (temp_v0_2 != 0) {
            sceHVNetfront_Module_0D525122(temp_v0_2);
        }
        temp_v0_3 = M2C_FIELD(arg0, s32 *, 0x3C);
        if (temp_v0_3 != 0) {
            sceHVNetfront_Module_0D525122(temp_v0_3);
        }
    }
    sceHVNetfront_Module_8CA61859(arg0, temp_s1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003B8A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F26EE3F7);

void sceHVNetfront_Module_9FDE9873(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    if ((M2C_FIELD(arg0, s32 *, 0x10) & 3) == 1) {
        sceHVNetfront_Module_08549708(M2C_FIELD(arg0, s32 *, 0x34));
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x38);
        if (temp_v0 != 0) {
            sceHVNetfront_Module_08549708(temp_v0);
        }
        temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x3C);
        if (temp_v0_2 != 0) {
            sceHVNetfront_Module_08549708(temp_v0_2);
        }
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003B9F0);

void func_0003BA64(void *arg0) {
    M2C_UNK (*temp_v0)();

    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(), 0x10);
    if (temp_v0 != NULL) {
        temp_v0();
    }
}

void func_0003BA90(void *arg0) {
    M2C_UNK (*temp_v0)();

    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(), 0x14);
    if (temp_v0 != NULL) {
        temp_v0();
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003BABC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003BB90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003BD40);

void func_0003BE70(void *arg0) {
    M2C_UNK (*temp_v0)();

    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(), 0x24);
    if (temp_v0 != NULL) {
        temp_v0();
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003BE9C);

void func_0003BF24(void *arg0) {
    M2C_UNK (*temp_v0)();

    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(), 0x2C);
    if (temp_v0 != NULL) {
        temp_v0();
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003BF50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C9A6CC1B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C2595823);

s32 func_0003C2B8(void *arg0) {
    return __builtin_allegrex_ext(M2C_FIELD(arg0, s32 *, 0x10), 4, 1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003C2C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003C374);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003C42C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003C888);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003CA50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003CB78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003CCF0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003D2E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003D3F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003D564);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_823748DE);

void func_0003D690(void) {
}

s32 func_0003D698(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003D6A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003D948);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003DA90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003DB9C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003DCA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003DCF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003DD40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003DE5C);

void func_0003E444(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_88977645(temp_v0, -1);
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003E484);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003E510);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F354);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F388);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003E578);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003E6D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003E7B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003E8B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003E8F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003E9C0);

s32 func_0003EB14(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *sp0;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;

    temp_v0 = func_0003E484(arg3, &sp0);
    if ((temp_v0 != 0) && (temp_a3 = M2C_FIELD(temp_v0, s32 *, 0), (temp_a3 != 0)) && (temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 4), (temp_v0_2 != 0))) {
        var_s1 = func_00019AAC(arg0, arg1, arg2, temp_a3, temp_v0_2);
        func_0003E510(arg3, sp0);
        func_0003E6D0(arg3);
    } else {
        var_s1 = (arg0 == 0) ? 0 : -1;
        if (arg3 == D_00130F80) {
            var_s1 = D_00130F84;
        }
        func_0003E510(arg3, sp0);
    }
    D_00130F80 = arg3;
    D_00130F84 = var_s1;
    return var_s1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003EBF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003EC1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F3C8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F3CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F3D0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F3D4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F3D8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F3DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F3E0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F3E4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F3E8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F3EC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F3F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F3F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003EE40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003F220);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003F28C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003F544);

void func_0003F56C(s32 **arg0) {
    sceHVNetfront_Module_896E55F6(arg0);
    sceHVNetfront_Module_B29BE9CE(arg0);
}

void func_0003F598(void) {
}

s32 func_0003F5A0(void) {
    return 0;
}

void func_0003F5A8(void) {
}

s32 func_0003F5B0(void) {
    return 0;
}

s32 func_0003F5B8(void) {
    return 1;
}

void func_0003F5C0(void) {
}

s32 func_0003F5C8(void) {
    return 0;
}

s32 func_0003F5D0(void) {
    return -5;
}

s32 func_0003F5D8(void) {
    return 0;
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F440);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F444);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F464);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F46C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F478);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F488);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F490);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F4A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3D7606EA);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003F820);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3DEAAAB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003F848);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003F85C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_13C197DB);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C9E7CE15);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_158E3F31);

void sceHVNetfront_Module_EF9A1668(s32 **arg0) {
    void *temp_v0;

    if (arg0 != NULL) {
        temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, u16 *, 0x20) = __builtin_allegrex_ins(M2C_FIELD(temp_v0, u16 *, 0x20), 0, 5, 1);
            sceHVNetfront_Module_B29BE9CE(arg0);
        }
    }
}

void sceHVNetfront_Module_2263AFB9(s32 **arg0) {
    void *temp_v0;

    if (arg0 != NULL) {
        temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, s32 *, 0x1C) = 3;
            M2C_FIELD(temp_v0, u16 *, 0x20) = __builtin_allegrex_ins(M2C_FIELD(temp_v0, u16 *, 0x20), 0, 5, 1);
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
    void *temp_a0;

    if (arg0 != NULL) {
        temp_a0 = *arg0;
        if (temp_a0 != NULL) {
            M2C_FIELD(temp_a0, u16 *, 0x20) = (u16) (M2C_FIELD(temp_a0, u16 *, 0x20) & 0xDFB5);
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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003FBA0);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003FDD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003FE88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003FEC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000400A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00040198);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000402E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00040430);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00040574);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00040670);

s32 func_000406FC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = -1;
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00040714);

s32 func_0004083C(void *arg0, M2C_UNK arg1, s32 arg2) {
    void *temp_v1;

    M2C_FIELD(arg0, s32 *, 8) = arg2;
    temp_v1 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_v1, s32 *, 0x2C) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x2C) + 1);
    func_00043A68(arg1, -1);
    sceHVNetfront_Module_86F90291(arg1, 8);
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00040890);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000409D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00040A5C);

void func_00040AD8(void *arg0) {
    s32 temp_v0;
    void *temp_s1;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    temp_s1 = M2C_FIELD(arg0, void **, 0);
    if (temp_v0 != -1) {
        M2C_FIELD(temp_s1, M2C_UNK (**)(s32), 0x38)(temp_v0);
        M2C_FIELD(arg0, s32 *, 8) = -1;
        M2C_FIELD(temp_s1, s32 *, 0x2C) = (s32) (M2C_FIELD(temp_s1, s32 *, 0x2C) - 1);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00040B38);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00040BFC);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00040DA8);

void func_00040DB8(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00040DC0);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00040EC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_258B5150);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_122F81AF);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EF96B26D);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_09F69379);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_53729A91);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_04ACFFEA);

s32 sceHVNetfront_Module_0EF6CBAE(void *arg0) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_0004CCF4(M2C_FIELD(arg0, s32 *, 0xC));
    var_v0 = 0;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_88977645(M2C_FIELD(arg0, s32 *, 0xC), -1);
        M2C_FIELD(arg0, s32 *, 0xC) = temp_v0;
        var_v0 = 1;
    }
    return var_v0;
}

s32 sceHVNetfront_Module_33028746(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        temp_v0 = sceHVNetfront_Module_ECAD3AF5(arg1);
        M2C_FIELD(arg0, s32 *, 0x58) = temp_v0;
        var_v0 = temp_v0 != 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_46E43E6F);

void sceHVNetfront_Module_131F0AB6(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_1A02495A(arg0, arg1, 0x68);
    sceHVNetfront_Module_D611E938(arg1, 0, 0x68);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00041678);

void sceHVNetfront_Module_728066E6(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_a0 != 0) {
        sceHVNetfront_Module_88977645(temp_a0, -1);
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_a0_2 != 0) {
        sceHVNetfront_Module_0D525122(temp_a0_2);
    }
    temp_a0_3 = M2C_FIELD(arg0, s32 *, 0x54);
    if (temp_a0_3 != 0) {
        sceHVNetfront_Module_88977645(temp_a0_3, -1);
    }
    temp_a0_4 = M2C_FIELD(arg0, s32 *, 0x58);
    if (temp_a0_4 != 0) {
        sceHVNetfront_Module_4E064DB2(temp_a0_4);
    }
    temp_a0_5 = M2C_FIELD(arg0, s32 *, 0x5C);
    if (temp_a0_5 != 0) {
        sceHVNetfront_Module_0D525122(temp_a0_5);
    }
    temp_a0_6 = M2C_FIELD(arg0, s32 *, 0x64);
    if (temp_a0_6 != 0) {
        sceHVNetfront_Module_F55329EF(temp_a0_6);
    }
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F53C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F598);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F5A4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F5F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F630);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F66C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F688);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F6B8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F6FC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F778);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F7AC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F7C8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F7F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FB50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FBD0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FBE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FBF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FC2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FC50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FC98);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FCF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FD70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FE24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FE44);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FE68);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FEA0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FEFC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FF64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FF70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FF74);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FF84);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FF88);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FF8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FF90);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FF94);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FF98);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FF9C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FFA0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FFA4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FFB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FFBC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FFC4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FFD0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FFE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FFF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FFF8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120004);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120008);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120018);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120020);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120024);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120028);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120038);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012003C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120040);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120044);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120048);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120054);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012005C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120068);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012006C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120074);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120088);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120094);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120098);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001200A0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001200A8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001200B4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012017C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120488);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001204C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C74A5305);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000419EC);

s32 func_00041B14(s32 arg0) {
    return arg0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00041B1C);

void func_00041B3C(s32 *arg0) {
    sceHVNetfront_Module_AFCC3786(*arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00041B58);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00041BD0);

void func_00041BD8(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00041BE0);

s32 func_00041C30(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    return ((temp_v0 ^ M2C_FIELD(arg0, s32 *, 0x24)) == 0) ? 0 : temp_v0;
}

s32 func_00041C44(void *arg0) {
    s32 temp_v0;

    temp_v0 = sceHVNetfront_Module_16508B17();
    return ((temp_v0 ^ M2C_FIELD(arg0, s32 *, 0x24)) == 0) ? 0 : temp_v0;
}

void func_00041C74(void *arg0, void **arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_a1;

    var_a1 = 0;
    temp_s0 = M2C_FIELD(*arg1, s32 *, 4);
    if (temp_s0 != 0) {
        if (arg2 == 0) {
            var_a1 = M2C_FIELD(arg0, s32 *, 0x24);
        }
        func_00087F74((s32) arg0, var_a1, temp_s0);
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x24);
        if (arg2 != 0) {
            if (temp_v0 == 0) {
                M2C_FIELD(arg0, s32 *, 0x24) = temp_s0;
            }
        } else if (temp_v0 == temp_s0) {
            M2C_FIELD(arg0, s32 *, 0x24) = sceHVNetfront_Module_16508B17(arg0, temp_s0);
        }
    }
}

void func_00041CFC(s32 arg0, void **arg1) {
    if (M2C_FIELD(*arg1, s32 *, 4) != 0) {
        sceHVNetfront_Module_32E4FDC6(arg0 + 0x28);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00041D28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00041DF0);

void func_00041E80(s32 arg0, s32 arg1) {
    void *sp0;
    sceHVNetfront_Module_B6F9B107(arg0 + 0x28, arg1, &sp0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00041EA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00041F4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00041F7C);

void func_00042040(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + arg1);
}

s32 func_00042050(void *arg0, M2C_UNK arg1, s32 *arg2) {
    s32 temp_v0;

    temp_v0 = sceHVNetfront_Module_CA65803E(__builtin_allegrex_max(arg1, __builtin_allegrex_min(M2C_FIELD(arg0, s32 *, 0x20), 0x32000)));
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = temp_v0;
        *arg2 = sceHVNetfront_Module_7D1421C0(temp_v0);
        return sceHVNetfront_Module_E459881C(temp_v0);
    }
    *arg2 = 0;
    return 0;
}

s32 func_000420CC(void *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 temp_s0;
    s32 temp_s2;
    s32 var_v0;

    temp_s2 = M2C_FIELD(arg0, s32 *, 0x18) - arg2;
    temp_s0 = M2C_FIELD(arg0, s32 *, 0x10);
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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00042170);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004220C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00042280);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000422E8);

void func_00042394(void **arg0, s32 *arg1, s32 *arg2) {
    s32 temp_v0;
    void *temp_s1;

    temp_s1 = *arg0;
    temp_v0 = M2C_FIELD(temp_s1, s32 *, 0x10);
    if (temp_v0 != 0) {
        *arg1 = sceHVNetfront_Module_E459881C(temp_v0);
        *arg2 = M2C_FIELD(temp_s1, s32 *, 0x18);
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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00042464);

void **sceHVNetfront_Module_51CAE7B4(void **arg0) {
    func_00042040(*arg0, 1);
    return arg0;
}

void sceHVNetfront_Module_E31B0CF8(void **arg0, void *arg1) {
    void *temp_v1;

    temp_v1 = *arg0;
    M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_FIELD(temp_v1, s32 *, 8);
    M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(temp_v1, s32 *, 0xC);
}

void sceHVNetfront_Module_CB726F9E(void **arg0, s32 *arg1, void *arg2) {
    void *temp_v1;

    temp_v1 = *arg0;
    *arg1 = M2C_FIELD(temp_v1, s32 *, 0x38);
    M2C_FIELD(arg2, s32 *, 0) = (s32) M2C_FIELD(temp_v1, s32 *, 0x30);
    M2C_FIELD(arg2, s32 *, 4) = (s32) M2C_FIELD(temp_v1, s32 *, 0x34);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F3EAE3EF);

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
    void *temp_s0;

    temp_s0 = *arg0;
    temp_v0 = M2C_FIELD(temp_s0, s32 *, 0x14);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0);
    }
    M2C_FIELD(temp_s0, s32 *, 0x14) = arg1;
}

void sceHVNetfront_Module_45AC12ED(void **arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = *arg0;
    temp_v0 = M2C_FIELD(temp_s0, s32 *, 0x10);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0);
    }
    M2C_FIELD(temp_s0, s32 *, 0x10) = arg1;
}

void sceHVNetfront_Module_5E44B688(void **arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = *arg0;
    M2C_FIELD(temp_v0, s32 *, 0x3C) = arg1;
    M2C_FIELD(temp_v0, s32 *, 0x40) = 0;
}

void func_0004260C(void **arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = *arg0;
    temp_v0 = M2C_FIELD(temp_s0, s32 *, 0x28);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0);
    }
    M2C_FIELD(temp_s0, s32 *, 0x28) = arg1;
}

void func_00042650(void **arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = *arg0;
    temp_v0 = M2C_FIELD(temp_s0, s32 *, 0x2C);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0);
    }
    M2C_FIELD(temp_s0, s32 *, 0x2C) = arg1;
}

void sceHVNetfront_Module_E992C60B(void **arg0, s32 arg1, void *arg2) {
    void *temp_a0;

    temp_a0 = *arg0;
    M2C_FIELD(temp_a0, s32 *, 0x38) = arg1;
    if (arg1 == 1) {
        M2C_FIELD(temp_a0, s32 *, 0x30) = (s32) M2C_FIELD(arg2, s32 *, 0);
        M2C_FIELD(temp_a0, s32 *, 0x34) = (s32) M2C_FIELD(arg2, s32 *, 4);
    }
}

void sceHVNetfront_Module_EEA26996(void **arg0, void *arg1) {
    void *temp_v1;

    temp_v1 = *arg0;
    M2C_FIELD(temp_v1, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(temp_v1, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000426D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00042788);

void func_000427C0(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0);
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_v0_2 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0_2);
    }
    sceHVNetfront_Module_D611E938((s32) arg0, 0, 0x28);
}

void func_00042818(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (!(temp_v0 & 1)) {
        temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x38);
        M2C_FIELD(arg0, s32 *, 8) = (s32) (temp_v0 | 5);
        if (temp_v0_2 != 0) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), M2C_UNK (**)(s32), 0xC)(temp_v0_2);
        }
        if (M2C_FIELD(arg0, s32 *, 8) & 0x80) {
            if (func_000422E8(M2C_FIELD(arg0, s32 *, 0x58), M2C_FIELD(arg0, s32 *, 0x5C), M2C_FIELD(arg0, s32 *, 0x60)) != 0) {
                M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 8);
            }
            M2C_FIELD(arg0, s32 *, 8) = __builtin_allegrex_ins(M2C_FIELD(arg0, s32 *, 8), 0, 7, 1);
        }
    }
}

s32 func_000428A4(void *arg0, s32 arg1, s32 *arg2) {
    s32 temp_s0;

    temp_s0 = func_00042050(sceHVNetfront_Module_896E55F6(M2C_FIELD(arg0, s32 ***, 0x58)), arg1, arg2);
    sceHVNetfront_Module_B29BE9CE(M2C_FIELD(arg0, s32 ***, 0x58));
    return temp_s0;
}

s32 func_00042904(void *arg0, s32 *arg1) {
    s32 temp_s1;

    temp_s1 = func_000420CC(sceHVNetfront_Module_896E55F6(M2C_FIELD(arg0, s32 ***, 0x58)), M2C_FIELD(arg0, s32 *, 0x5C), M2C_FIELD(arg0, s32 *, 0x60), arg1);
    sceHVNetfront_Module_B29BE9CE(M2C_FIELD(arg0, s32 ***, 0x58));
    return temp_s1;
}

s32 func_0004295C(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_s1;

    temp_s1 = func_00042170(sceHVNetfront_Module_896E55F6(M2C_FIELD(arg0, s32 ***, 0x58)), arg1, M2C_FIELD(arg0, s32 *, 0x60), arg2);
    sceHVNetfront_Module_B29BE9CE(M2C_FIELD(arg0, s32 ***, 0x58));
    return temp_s1;
}

void func_000429C0(s32 **arg0) {
    s32 temp_v0_2;
    void *temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 0x38);
    if (temp_v0_2 != 0) {
        M2C_FIELD(M2C_FIELD(temp_v0, void **, 0x34), M2C_UNK (**)(s32, M2C_UNK), 0x10)(temp_v0_2, 1);
    }
    sceHVNetfront_Module_B29BE9CE(arg0);
}

s16 sceHVNetfront_Module_B23D7F7F(s32 **arg0, s32 arg1, s32 arg2) {
    s16 temp_s0;
    void *temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    M2C_FIELD(temp_v0, u16 *, 0x10) = (u16) (M2C_FIELD(temp_v0, u16 *, 0x10) + arg1);
    if (arg2 != 0) {
        M2C_FIELD(temp_v0, u16 *, 0x12) = (u16) (M2C_FIELD(temp_v0, u16 *, 0x12) + arg1);
    }
    if ((s16) M2C_FIELD(temp_v0, u16 *, 0x12) >= (s16) M2C_FIELD(temp_v0, u16 *, 0x10)) {
        func_00042818(temp_v0);
    }
    temp_s0 = (s16) M2C_FIELD(temp_v0, u16 *, 0x10);
    if (temp_s0 <= 0) {
        if (M2C_FIELD(temp_v0, s32 *, 4) != 0) {
            func_00041DF0(M2C_FIELD(temp_v0, s32 *, 0) + 0x40, arg0);
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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00042AF0);

void func_00042BAC(s32 **arg0) {
    s32 temp_v0_2;
    void *temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 0x38);
    if (temp_v0_2 != 0) {
        M2C_FIELD(M2C_FIELD(temp_v0, void **, 0x34), M2C_UNK (**)(s32, s32 **), 4)(temp_v0_2, arg0);
        M2C_FIELD(temp_v0, s32 *, 0x38) = 0;
    }
    sceHVNetfront_Module_B29BE9CE(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00042C08);

void func_00042D70(s32 **arg0) {
    void *temp_v0;

    if (!(M2C_FIELD(*arg0, s32 *, 8) & 1)) {
        temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
        M2C_FIELD(temp_v0, u16 *, 0x12) = (u16) M2C_FIELD(temp_v0, u16 *, 0x10);
        func_00042818(temp_v0);
        sceHVNetfront_Module_B29BE9CE(arg0);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00042DC0);

void sceHVNetfront_Module_A8078858(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x50) = arg1;
}

void func_00042E34(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x3C) = arg1;
}

void func_00042E40(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x40) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_86F90291);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00042E58);

void func_00042E78(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x28) = arg1;
}

void sceHVNetfront_Module_3850E9A6(void **arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = *arg0;
    temp_v0 = M2C_FIELD(temp_s0, s32 *, 0x1C);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_88977645(temp_v0, -1);
    }
    M2C_FIELD(temp_s0, s32 *, 0x1C) = arg1;
}

void func_00042ECC(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x18) = arg1;
}

void func_00042ED8(void **arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = *arg0;
    temp_v0 = M2C_FIELD(temp_s0, s32 *, 0x24);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_4E064DB2(temp_v0);
    }
    M2C_FIELD(temp_s0, s32 *, 0x24) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00042F1C);

void func_00042F2C(s32 **arg0) {
    s32 temp_v0_2;
    void *temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 0x38);
    if (temp_v0_2 != 0) {
        M2C_FIELD(M2C_FIELD(temp_v0, void **, 0x34), M2C_UNK (**)(s32, M2C_UNK), 0x10)(temp_v0_2, 0);
    }
    sceHVNetfront_Module_B29BE9CE(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_74A30655);

void sceHVNetfront_Module_6C78CC40(void **arg0, s32 arg1) {
    void *temp_v1;

    temp_v1 = *arg0;
    M2C_FIELD(temp_v1, s32 *, 8) = (s32) (__builtin_allegrex_ins(M2C_FIELD(temp_v1, s32 *, 8), 0, 9, 4) | (arg1 & 0x1E00));
}

void func_00042FBC(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x5C) = arg1;
}

void sceHVNetfront_Module_6CA88BC3(void **arg0, void **arg1) {
    void **temp_v0;
    void *temp_s0;
    void *temp_v1;

    temp_s0 = *arg0;
    temp_v0 = M2C_FIELD(temp_s0, void ***, 0x58);
    if (temp_v0 != NULL) {
        func_00042464(temp_v0);
    }
    temp_v1 = *arg1;
    M2C_FIELD(temp_s0, void ***, 0x58) = arg1;
    if (M2C_FIELD(temp_v1, s32 *, 0x10) != 0) {
        M2C_FIELD(temp_s0, s32 *, 8) = (s32) (M2C_FIELD(temp_s0, s32 *, 8) | 8);
    }
    if (M2C_FIELD(temp_v1, s32 *, 0x24) != -2) {
        M2C_FIELD(temp_s0, s32 *, 8) = (s32) (M2C_FIELD(temp_s0, s32 *, 8) | 0x10);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00043040);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00043274);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000432D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_78E29B62);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00043448);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00043584);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_94EB0154);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000436CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00043754);

void func_000437DC(s32 *arg0) {
    func_000436CC(*arg0);
}

void func_000437F8(s32 *arg0) {
    func_00043754(*arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00043814);

void sceHVNetfront_Module_C3B0CA67(s32 *arg0) {
    func_00043814(*arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000438B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00043A68);

void func_00043A9C(s32 **arg0) {
    void *temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    if (func_000422E8(M2C_FIELD(temp_v0, s32 *, 0x58), M2C_FIELD(temp_v0, s32 *, 0x5C), M2C_FIELD(temp_v0, s32 *, 0x60)) != 0) {
        M2C_FIELD(temp_v0, s32 *, 8) = (s32) (M2C_FIELD(temp_v0, s32 *, 8) | 8);
    }
    M2C_FIELD(temp_v0, s32 *, 8) = __builtin_allegrex_ins(M2C_FIELD(temp_v0, s32 *, 8), 0, 7, 1);
    sceHVNetfront_Module_B29BE9CE(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00043B00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00043BA4);

s32 func_00043BDC(void **arg0) {
    void *temp_v0;

    temp_v0 = *arg0;
    return M2C_FIELD(*M2C_FIELD(temp_v0, void ***, 0x58), s32 *, 0x18) - M2C_FIELD(temp_v0, s32 *, 0x60);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00043BF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_794DB63E);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00043DFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00043E7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00043ED0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C98899FC);

void sceHVNetfront_Module_E330BB9F(void *arg0) {
    sceHVNetfront_Module_880239D0(M2C_FIELD(arg0, s32 ***, 0x4E0));
    sceHVNetfront_Module_C04FADD9(arg0 + 0x4AC);
    func_00041F4C(arg0 + 0x40);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_FAB16895);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C9729D6E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00044184);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_979F5A7B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000445B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00044678);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004472C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_44F0D3D4);

void func_00044940(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EB9C36E9);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000449F8);

void func_00044A34(s32 **arg0, s32 **arg1) {
    s32 **temp_v0_2;
    void *temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    temp_v0_2 = M2C_FIELD(temp_v0, s32 ***, 0);
    if (temp_v0_2 != NULL) {
        sceHVNetfront_Module_B23D7F7F(temp_v0_2, -1, M2C_FIELD(temp_v0, s32 *, 0x14) & 2);
        M2C_FIELD(temp_v0, s32 *, 0x14) = __builtin_allegrex_ins(M2C_FIELD(temp_v0, s32 *, 0x14), 0, 1, 1);
    }
    M2C_FIELD(temp_v0, s32 ***, 0) = arg1;
    sceHVNetfront_Module_B29BE9CE(arg0);
}

void func_00044AA4(s32 **arg0, s32 arg1) {
    s32 temp_v0_2;
    void *temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 0x18);
    if (temp_v0_2 != 0) {
        sceHVNetfront_Module_309FE171(temp_v0_2);
    }
    M2C_FIELD(temp_v0, s32 *, 0x18) = arg1;
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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D01C1872);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F55329EF);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D533CF0D);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9B8F6179);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_8F6A9B89);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00045034);

s32 sceHVNetfront_Module_39EE6D2A(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_4B5823BF);

s32 sceHVNetfront_Module_E1A51715(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 8);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B17C0A53);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A4E019F5);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A941FF30);

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
    void *temp_s0;

    temp_s0 = *arg0;
    if (arg2 != 0) {
        M2C_FIELD(temp_s0, s32 *, 0xC) = arg1;
        return;
    }
    func_00042568(M2C_FIELD(*M2C_FIELD(temp_s0, s32 ***, 0), void ***, 0x58), arg1);
    sceHVNetfront_Module_74A30655(M2C_FIELD(temp_s0, s32 ***, 0), 0x10, 1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_BA4FFC3A);

s32 func_00045580(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x24) != 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00045590);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6AEB1D27);

s32 func_0004584C(void *****arg0) {
    s32 var_v1;
    void *temp_v0;

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000458B0);

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

void func_00045A64(void ****arg0, void *arg1) {
    sceHVNetfront_Module_E31B0CF8(M2C_FIELD(***arg0, void ***, 0x58), arg1);
}

s32 func_00045A8C(void ****arg0) {
    return M2C_FIELD(***arg0, s32 *, 0x1C);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1672EC47);

void sceHVNetfront_Module_092E2C73(void **arg0) {
    void *temp_a0;
    void *temp_v1;

    if (sceHVNetfront_Module_1672EC47() == 0) {
        temp_a0 = *arg0;
        if (!(M2C_FIELD(temp_a0, s32 *, 0x14) & 2)) {
            func_00042DC0(M2C_FIELD(temp_a0, s32 *, 0));
            temp_v1 = *arg0;
            M2C_FIELD(temp_v1, s32 *, 0x14) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x14) | 2);
        }
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_90AB89E7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_24196BE2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9D2B3653);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_7BC430AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_20F2DAA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3897ADE7);

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

void func_00045F28(void ****arg0, void *arg1) {
    sceHVNetfront_Module_E31B0CF8(M2C_FIELD(***arg0, void ***, 0x58), arg1);
}

s32 func_00045F50(void ****arg0) {
    return M2C_FIELD(***arg0, s32 *, 0x1C);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_40368F55);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6AB7B8E9);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6DFAC2F9);

s32 func_00046144(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = arg3;
    M2C_FIELD(arg0, s32 *, 0x10) = arg4;
    M2C_FIELD(arg0, s32 *, 0x14) = arg5;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_5DF595A9);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_8F9488F9);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F90CF781);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00046238);

s32 func_0004633C(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;

    var_v1 = 0;
    if (func_00046144(arg0, arg1, (s32) &func_00046238, 0, arg2, arg3) != 0) {
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        var_v1 = 1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00046388);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000464B0);

void func_000466BC(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_0BC2850C);

void sceHVNetfront_Module_C7AA9F45(void *arg0) {
    s32 temp_v0;

    temp_v0 = sceHVNetfront_Module_90AB89E7(M2C_FIELD(arg0, s32 *, 0xC));
    M2C_FIELD(arg0, s32 *, 0x10) = 5;
    M2C_FIELD(arg0, s32 *, 0x24) = temp_v0;
    if ((temp_v0 == -1) || (sceHVNetfront_Module_F2D8CC12(*M2C_FIELD(arg0, s32 **, 0), temp_v0, 1) == 0)) {
        func_000467F4(arg0);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000467F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00046824);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004687C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004695C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00046AB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00046AD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00046AF0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00046C3C);

s32 func_00046D34(void *arg0, s32 *arg1) {
    s32 temp_s0;
    s32 temp_s1;
    s32 var_s3;

    var_s3 = 0;
    temp_s1 = func_00047844(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 0x10));
    temp_s0 = __builtin_allegrex_min(temp_s1, sceHVNetfront_Module_9D2B3653(M2C_FIELD(arg0, s32 *, 0xC)));
    if ((sceHVNetfront_Module_1672EC47(M2C_FIELD(arg0, s32 *, 0xC)) != 0) || (temp_s0 == temp_s1)) {
        var_s3 = 1;
    }
    if (arg1 != NULL) {
        *arg1 = temp_s0;
    }
    return var_s3;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00046DB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00046F10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00046FB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004704C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004717C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00047250);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A8B3EB32);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_429782B3);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_84212B7D);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_8D3E0625);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00047744);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_7A41AD6E);

void func_000477A8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14) = 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000477B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004780C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00047844);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B71657D5);

void sceHVNetfront_Module_C9B744B4(void) {
}

void func_000478B8(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0);
    }
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

void func_000478FC(void *arg0, M2C_UNK arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_88977645(temp_v0, -1);
    }
    M2C_FIELD(arg0, s32 *, 4) = sceHVNetfront_Module_EE835D7A(arg1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004794C);

void func_0004796C(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0);
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 4);
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

void func_000479F8(void *arg0) {
    func_0004796C(arg0);
    sceHVNetfront_Module_A2F4AC9E((s32) arg0);
}

s32 sceHVNetfront_Module_81A43081(void) {
    return 1;
}

void func_00047A2C(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00047A34);

void func_00047A54(s32 arg0) {
    func_00047A2C();
    sceHVNetfront_Module_A2F4AC9E(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_4B122153);

void sceHVNetfront_Module_B3733A46(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00047AE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00047BBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00047C54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E1B41D47);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_4370F699);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00047EA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B588DC22);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_48F86618);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F2D8CC12);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120538);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012053C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012054C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120550);

M2C_UNK *sceHVNetfront_Module_BF1F29EC(s32 arg0) {
    M2C_UNK *var_v0;

    var_v0 = "-----------------------------3943144700513--\r\n";
    if (arg0 == 0) {
        var_v0 = "-----------------------------3943144700513\r\n";
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00048180);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00048208);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000483DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001205FC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120608);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120614);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120618);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120620);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1633B2A5);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B205F749);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_77FCD4C1);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_BEFC4F0D);

s32 **sceHVNetfront_Module_4136A224(s32 **arg0) {
    void *temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    M2C_FIELD(temp_v0, s32 *, 4) = (s32) (M2C_FIELD(temp_v0, s32 *, 4) + 1);
    sceHVNetfront_Module_B29BE9CE(arg0);
    return arg0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004877C);

void sceHVNetfront_Module_4EA9EF34(s32 **arg0) {
    M2C_UNK (*temp_v0_3)(void *);
    s32 temp_v0_2;
    void *temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 4) - 1;
    M2C_FIELD(temp_v0, s32 *, 4) = temp_v0_2;
    if (temp_v0_2 <= 0) {
        temp_v0_3 = M2C_FIELD(M2C_FIELD(temp_v0, void **, 0), M2C_UNK (**)(void *), 0x10);
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
    void *temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 8);
    if (temp_v0_2 != 0) {
        sceHVNetfront_Module_309FE171(temp_v0_2);
    }
    M2C_FIELD(temp_v0, s32 *, 8) = arg1;
    sceHVNetfront_Module_B29BE9CE(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00048874);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000488CC);

void func_0004898C(s32 **arg0) {
    sceHVNetfront_Module_880239D0(arg0);
}

void func_000489A8(void) {
}

void func_000489B0(void) {
}

void func_000489B8(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000489C0);

void func_000489D0(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_ECD79235);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EED7BC00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_8C211F28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_7C86459A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00048C48);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_55CF576E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_55AD0295);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00048EE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_7184F810);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00048F24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D9560A46);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00048F90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000490BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3D27259A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_CA6AD0F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000493A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_FF5E3F11);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9AA02806);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_015932EE);

void sceHVNetfront_Module_A7781C73(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E7C67B64);

s32 **sceHVNetfront_Module_2BB00E05(s32 **arg0) {
    void *temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    M2C_FIELD(temp_v0, s32 *, 4) = (s32) (M2C_FIELD(temp_v0, s32 *, 4) + 1);
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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_309FE171);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00049914);

void func_00049984(s32 arg0, s32 arg1) {
    func_00041678(arg0 + 8, arg1 + 8, 0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000499A8);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00049AD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00049B24);

s32 func_00049B6C(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_v0_2 != 0) {
        sceHVNetfront_Module_88977645(temp_v0_2, -1);
    }
    temp_v0 = sceHVNetfront_Module_CF3077BE(arg1, arg2);
    M2C_FIELD(arg0, s32 *, 0x2C) = temp_v0;
    return temp_v0 != 0;
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120634);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00049BD4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120648);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00049D9C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004A268);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004A340);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004A540);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004A61C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004A7D4);

void func_0004A8A4(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    sceHVNetfront_Module_38FB998B(arg0 + 0x44);
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x28);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_F55329EF(temp_v0);
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_v0_2 != 0) {
        sceHVNetfront_Module_88977645(temp_v0_2, -1);
    }
    temp_v0_3 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_v0_3 != 0) {
        sceHVNetfront_Module_88977645(temp_v0_3, -1);
    }
    sceHVNetfront_Module_9AA02806(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004A918);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004A968);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004AC68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004AD7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9FF54B2A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A5C11A26);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_341E643A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_64367903);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004B068);

s32 sceHVNetfront_Module_BBDFB7FD(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (sceHVNetfront_Module_FF5E3F11() != 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        var_v1 = 1;
    }
    return var_v1;
}

void sceHVNetfront_Module_4329FB08(void *arg0) {
    sceHVNetfront_Module_9AA02806(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_876375DE);

s32 sceHVNetfront_Module_0C2B2F3B(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x10);
}

void func_0004B3BC(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x1C) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_7F9C3EA0);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_11B159B6);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004B58C);

void func_0004B608(s32 arg0) {
    sceHVNetfront_Module_309FE171(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_7E5C8FE3);

void sceHVNetfront_Module_99111A60(void) {
    sceHVNetfront_Module_A7781C73();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004B698);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004B6C8);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004B810);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004B848);

void func_0004B860(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_0A4203B2);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004BA78);

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

void sceHVNetfront_Module_48B72D3A(void *arg0, s32 arg1) {
    func_0004B810(arg1, M2C_FIELD(arg0, s32 *, 4));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2E045C78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004BC5C);

void func_0004BC68(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004BC70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004BEB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_12ECDFFD);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001206EC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001206F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004C508);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004C5B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004C61C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EECC58C1);

void sceHVNetfront_Module_A86CAFDE(void **arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void *temp_a0;

    temp_a0 = *arg0;
    sceHVNetfront_Module_5DBB6513(temp_a0 + 0xC, M2C_FIELD(temp_a0, s32 *, 4), arg1, arg2);
}

void sceHVNetfront_Module_AB616A03(void **arg0) {
    sceHVNetfront_Module_A86CAFDE(arg0, (s32) &D_00120C90, 5);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A08F42C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004CA70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004CB04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_783814D1);

void sceHVNetfront_Module_4B5CEB81(s32 arg0, void **arg1, s32 arg2) {
    void *temp_a1;

    temp_a1 = *arg1;
    sceHVNetfront_Module_783814D1(arg0, (s32) (temp_a1 + 0xC), M2C_FIELD(temp_a1, s32 *, 4), arg2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004CCF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_5D99F11A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3AAC0376);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_907152F5);

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

s32 sceHVNetfront_Module_8690B158(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceHVNetfront_Module_24614BB0(arg1, 0x14);
    var_v1 = 0;
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, s32 *, 4) = temp_v0;
        var_v1 = 1;
        M2C_FIELD(arg0, s32 *, 0) = arg1;
        M2C_FIELD(arg0, s32 *, 8) = 7;
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    return var_v1;
}

void sceHVNetfront_Module_A9E1B08D(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004D37C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004D454);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004D57C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004D66C);

void func_0004D6DC(s32 arg0, s32 arg1) {
    if (arg1 >= 7) {
        func_0004D57C(arg0, arg1);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004D700);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004D774);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004D7C4);

void func_0004D814(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_D611E938(arg0, 0, 0x28);
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
}

void func_0004D850(void *arg0) {
    s32 temp_v0;

    func_0004D7C4();
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0);
    }
}

s32 func_0004D888(void *arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_v0_2 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0_2);
    }
    if (arg1 == 0) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return 1;
    }
    temp_v0 = sceHVNetfront_Module_D9FE99F5(arg1, arg2);
    M2C_FIELD(arg0, s32 *, 0x20) = temp_v0;
    return temp_v0 != 0;
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120788);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012078C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120790);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120798);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001207A0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001207AC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001207B8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001207C4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001207CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004D8FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004DC68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004DCD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004DD40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_865DA205);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_18A89A8D);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004E184);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004E35C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004E3CC);

s32 sceHVNetfront_Module_818326B6(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 temp_v0;

    temp_v0 = func_0004E3CC(arg0, arg1, arg2, 0, (s32) &D_00120538, 0);
    if (arg3 != NULL) {
        *arg3 = temp_v0;
    }
    return arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004E690);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9F60651B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004E9C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004EBB0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001207F4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120834);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2F0F73A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2BC805F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004F0EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004F2A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004F344);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EF65C5D2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004F8BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F208D3A6);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004FA98);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004FAB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_49631038);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_4E064DB2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_ECAD3AF5);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3450EDDB);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6A893809);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_39054344);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00050020);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3BB4DE88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_5DBEC6D2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00050420);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00050598);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000505E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000506D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000508D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000509CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120A4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00050A68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00050D5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00051028);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00051958);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00051B2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00051C6C);

void func_00051CCC(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_14A6B003((s32) &D_00120D90, arg0, arg1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B06196EE);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C07EB167);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00051E04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1CC665B1);

void func_00051FD8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x17C0) = 0;
}

void func_00051FE0(void) {
}

void func_00051FE8(void *arg0, void **arg1, s32 arg2) {
    if (arg1 != NULL) {
        M2C_FIELD(*arg1, s32 *, 0x38) = arg2;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x17C0) = arg2;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00052004);

void func_00052068(s32 arg0, s32 arg1) {
    func_00052004(arg0, arg1);
    sceHVNetfront_Module_880239D0((s32 **) arg1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_AD777988);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9160D20A);

void func_000521FC(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x20) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00052208);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_0C8E766E);

void sceHVNetfront_Module_DA60A0AF(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x2C) = arg1;
}

void func_0005225C(void **arg0, s32 arg1) {
    void *temp_v1;

    temp_v1 = *arg0;
    M2C_FIELD(temp_v1, s32 *, 0x30) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x30) | arg1);
}

void func_00052270(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x34) = arg1;
}

s32 func_0005227C(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x34);
}

void func_00052288(void *arg0, s32 arg1, void *arg2) {
    if ((arg1 != 0) & (arg2 != NULL)) {
        M2C_FIELD(arg0, s32 *, 0) = 1;
        M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg2, s32 *, 0);
        M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg2, s32 *, 4);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0) = 0;
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120BDC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120C10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120C90);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120CC4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120D50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120D90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000522BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00052334);

s32 func_00052384(void *arg0) {
    s32 temp_a2;
    s32 var_v1;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0);
    var_v1 = 0;
    if (((u32) (temp_a2 + 0x05F5E100) <= 0x0BEBC1FFU) || ((temp_a2 == 0x05F5E100) && (M2C_FIELD(arg0, s32 *, 4) == 0))) {
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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00052468);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A48D19CF);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000525D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00052714);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005278C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000527D8);

M2C_UNK *func_00052828(void) {
    return &D_00123DB8;
}

void func_00052834(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    sceHVNetfront_Module_AD3723FF(arg0, arg1, (arg2 == 0) ? 1 : arg2, arg3);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00052854);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00052AF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00052D28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00052DE8);

void func_00052EDC(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_7C762DEC(arg0, arg1, (s32) &D_00120EB8, 2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00052F00);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053074);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005312C);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053450);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000535BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000536B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000537BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053828);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005384C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053870);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053894);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000538B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000538DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053900);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053924);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053948);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000539B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053A20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053A8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053AF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053B64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053BD0);

void func_00053CAC(s32 arg0, s32 arg1) {
    func_0005EFBC(arg0, arg1, (s32) &D_00121308);
}

s32 func_00053CCC(void *arg0, s32 arg1) {
    return sceHVNetfront_Module_52564790(arg0, arg1) == (s32) &D_00120E80;
}

void func_00053CF8(s32 arg0) {
    func_00057FC8(arg0, (s32) &D_00123DB8, 4, 6);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053D20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053D5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053E14);

void func_00053EB8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1820) = 0;
    M2C_FIELD(arg0, s32 *, 0x1824) = 0;
    sceHVNetfront_Module_0F5AA1D5(arg0 + 0x1808, 4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053EE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053F80);

void func_0005401C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1820) = arg1;
}

void func_00054024(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1824) = arg1;
}

void func_0005402C(void) {
}

void func_00054034(void) {
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120E80);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120EB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120EE8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121308);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121330);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121334);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005403C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000540E4);

M2C_UNK *func_00054150(void) {
    return &D_001241C1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005415C);

void func_0005419C(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_00054774();
    if (temp_v0 != 0) {
        sceHVNetfront_Module_9D1EA353(arg0, temp_v0);
    }
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012136C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001213A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000541D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00054364);

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

s32 func_000546C0(void *arg0, s32 arg1) {
    return sceHVNetfront_Module_52564790(arg0, arg1) == (s32) &D_0012136C;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A958E676);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001213C4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001213E8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012140C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121430);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121454);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121478);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012149C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00054774);

M2C_UNK *func_000548B8(void) {
    return &D_00123D8C;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000548C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00054950);

s32 func_00054A0C(void *arg0, s32 arg1) {
    return sceHVNetfront_Module_52564790(arg0, arg1) == (s32) &D_001214C4;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00054A38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001214C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00054CA8);

s32 func_00054CB4(void *arg0, s32 arg1) {
    return sceHVNetfront_Module_52564790(arg0, arg1) == (s32) &D_00121508;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00054CE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00054EB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000550EC);

M2C_UNK *func_00055188(void) {
    return &D_00123D93;
}

M2C_UNK *func_00055194(void) {
    return &D_00123E4E;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000551A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00055264);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000552D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000552FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000555C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005565C);

M2C_UNK *func_00055724(void) {
    return &D_00123D93;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00055730);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000557BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005582C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00055974);

void func_00055A08(void *arg0, s32 arg1) {
    void *sp0;
    sceHVNetfront_Module_1CC15992(arg0, arg1, &sp0);
    sceHVNetfront_Module_88977645(sp0, -1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00055A30);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00055A50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_0DDE841E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00055B2C);

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

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121508);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121540);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121578);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_CA404834);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D1B3D959);

void sceHVNetfront_Module_A03FCFFE(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD((sceHVNetfront_Module_234F9191(arg0 + 4, arg1) + M2C_FIELD(arg0, s16 *, 0x10)), s32 *, 0xC) = arg2;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00056370);

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

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001215C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000565E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00056718);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000568D4);

void func_00056AF4(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_7C762DEC(arg0, arg1, (s32) &D_00121600, 3);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00056B18);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00056BB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00056C00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00056C44);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121600);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00056C8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00056CC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00056D1C);

void func_00056D54(void **arg0, void *arg1) {
    s32 temp_s0;
    void *temp_v0;

    if (M2C_FIELD(arg1, s32 *, 0) == 0xB) {
        temp_s0 = M2C_FIELD(arg1, s32 *, 8);
        temp_v0 = sceHVNetfront_Module_234F9191(*arg0 + 4, temp_s0) + M2C_FIELD(*arg0, s16 *, 0x10);
        if (M2C_FIELD(temp_v0, u8 *, 0x32) == 0) {
            func_00056CC0(arg0, temp_s0, temp_v0);
        }
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00056DC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00056E80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00056F7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00057124);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_63086D26);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000572DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005750C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000575F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00057684);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000576C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00057710);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000577C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000578A4);

void func_00057908(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000577C4(arg0, arg1, arg2, arg3, (s32) &func_000578A4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00057928);

void func_0005798C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000577C4(arg0, arg1, arg2, arg3, (s32) &func_00057928);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000579AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00057A64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00057A90);

s32 func_00057B68(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00057B70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9E0B1B5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00057FC8);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_16034D28);

s32 func_00058180(s32 **arg0) {
    return **arg0;
}

s32 func_0005818C(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00058198);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_46EF316E);

void func_00058200(s32 arg0, M2C_UNK arg1) {
    s32 temp_v0;

    temp_v0 = sceHVNetfront_Module_603889A9(arg1);
    sceHVNetfront_Module_5BA9037D(arg0, temp_v0, sceHVNetfront_Module_15875ED4(temp_v0));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_ABAE54FF);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000582E8);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_CE95AE54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_603889A9);

void sceHVNetfront_Module_2BD387F9(s32 arg0) {
    sceHVNetfront_Module_15875ED4(sceHVNetfront_Module_603889A9(arg0));
}

void sceHVNetfront_Module_D5F20A4D(s32 arg0, void *arg1) {
    s32 temp_v0;

    M2C_FIELD(arg1, s32 *, 4) = sceHVNetfront_Module_7D1421C0(arg0);
    temp_v0 = sceHVNetfront_Module_CE95AE54(arg0);
    M2C_FIELD(arg1, s32 *, 8) = 0x3F8;
    M2C_FIELD(arg1, s32 *, 0) = temp_v0;
    M2C_FIELD(arg1, s32 *, 0xC) = sceHVNetfront_Module_15875ED4(temp_v0);
    M2C_FIELD(arg1, s32 *, 0x10) = 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2AB94A45);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00058690);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00058740);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000587C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00058888);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_19F8738A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000589BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00058A64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_7C05902A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A25C60AE);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_30C8571F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00058C20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00058CC8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_ED34D3DF);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00058DD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00058E5C);

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

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001216B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00058F64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000590D0);

void func_000590E8(void *arg0) {
    void *var_a0;

    var_a0 = M2C_FIELD(arg0, void **, 0);
    if (M2C_FIELD(arg0, s32 *, 4) < M2C_FIELD(var_a0, s32 *, 0x14)) {
        do {
            sceHVNetfront_Module_C0A215A2(var_a0);
            var_a0 = M2C_FIELD(arg0, void **, 0);
        } while (M2C_FIELD(arg0, s32 *, 4) < M2C_FIELD(var_a0, s32 *, 0x14));
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_0BE49B1B);

void func_00059188(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) - 1);
    sceHVNetfront_Module_C0A215A2(M2C_FIELD(arg0, void **, 0));
}

void func_000591B4(void *arg0, s32 arg1) {
    sceHVNetfront_Module_488D3C7B(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4) + arg1);
}

void func_000591DC(void *arg0, s32 arg1) {
    func_00086C14(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4) + arg1);
}

void func_00059204(void *arg0, s32 arg1) {
    sceHVNetfront_Module_440B8F87(M2C_FIELD(arg0, s32 *, 0), sceHVNetfront_Module_4681A961(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4) + arg1), 0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00059248);

void func_00059294(void *arg0, s32 arg1) {
    sceHVNetfront_Module_234F9191(M2C_FIELD(arg0, s32 *, 0), sceHVNetfront_Module_4681A961(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4) + arg1));
}

void func_000592D4(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_5C264E89);

s32 sceHVNetfront_Module_9E9DD219(void *arg0, s32 arg1) {
    s32 var_a1;

    var_a1 = 0;
    if (arg1 >= 0) {
        if (arg1 < M2C_FIELD(arg0, s32 *, 8)) {
            var_a1 = sceHVNetfront_Module_B71993AE(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4) + arg1);
        }
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00059368);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000593E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00059418);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000594E8);

void func_0005951C(void) {
    sceHVNetfront_Module_EA8FFAF4();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00059538);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00059550);

s32 func_000595C8(void *arg0, M2C_UNK arg1) {
    s32 temp_v0;

    temp_v0 = func_00088300(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 8), arg1);
    if (temp_v0 != 0) {
        if (M2C_FIELD(arg0, s32 *, 4) == 0) {
            M2C_FIELD(arg0, s32 *, 4) = temp_v0;
        }
        M2C_FIELD(arg0, s32 *, 8) = temp_v0;
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
    }
    return temp_v0;
}

void func_00059620(s32 *arg0) {
    *arg0 = 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00059628);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000596BC);

M2C_UNK *func_0005987C(void) {
    return &D_00123DE5;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00059888);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00059988);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00059A60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00059AB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00059C1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00059D50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00059DBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00059EE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005A014);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005A128);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005A240);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005A69C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005A7D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005A938);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005AA6C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005AD5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005AE84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005AFD0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121818);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121850);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005B0F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005B40C);

M2C_UNK *func_0005B44C(void) {
    return &D_00123DB1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005B458);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005B5C8);

void func_0005B644(void) {
    func_0005B458();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005B660);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005B810);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005B988);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005BAEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005BBC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005BC5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005BCEC);

void func_0005BEB4(s32 arg0, s32 arg1) {
    func_0005EFBC(arg0, arg1, (s32) &D_00121C10);
}

s32 func_0005BED4(void *arg0, s32 arg1) {
    return sceHVNetfront_Module_52564790(arg0, arg1) == (s32) &D_00121B48;
}

void func_0005BF00(s32 arg0) {
    func_00057FC8(arg0, (s32) &D_00123DB1, 6, 5);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005BF28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005BF84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005BFBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C008);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C084);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C140);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C160);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C204);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C218);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C2A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C2D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C334);

s32 func_0005C3A4(void *arg0, void *arg1) {
    s32 var_a3;

    var_a3 = 0;
    if (M2C_FIELD(arg1, s32 *, 0) != M2C_FIELD(arg0, s32 *, 8)) {
        var_a3 = sceHVNetfront_Module_E6D4D13C(M2C_FIELD(arg0, s32 *, 0), *M2C_FIELD(arg1, s32 **, 8), (s32) arg1);
    }
    return var_a3;
}

void func_0005C3E4(void *arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, s32 *, 0x18) = arg1;
    M2C_FIELD(arg2, s32 *, 0xC) = 0;
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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C460);

void func_0005C4D0(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0xC) & 8)) {
        sceHVNetfront_Module_F1423651(arg0 + 0x10);
        M2C_FIELD(arg0, s32 *, 0xC) = 8;
    }
}

void func_0005C510(void *arg0) {
    sceHVNetfront_Module_88977645(M2C_FIELD(arg0, s32 *, 8), -1);
    if (!(M2C_FIELD(arg0, s32 *, 0xC) & 8)) {
        sceHVNetfront_Module_F1423651(arg0 + 0x10);
        M2C_FIELD(arg0, s32 *, 0xC) = 8;
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C55C);

s32 func_0005C5B8(s32 arg0) {
    return arg0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C5C0);

void func_0005C5F4(s32 arg0) {
    func_0005C5C0(0, arg0);
}

s32 func_0005C614(void *arg0, void *arg1, void *arg2) {
    M2C_UNK (*temp_v0)(void *, s32);
    s32 var_a0;

    var_a0 = 0;
    if (M2C_FIELD(arg1, s32 *, 4) == M2C_FIELD(arg2, s32 *, 4)) {
        if (M2C_FIELD(arg1, s32 *, 8) == M2C_FIELD(arg2, s32 *, 8)) {
            temp_v0 = M2C_FIELD(arg0, M2C_UNK (**)(void *, s32), 0xB4);
            if (temp_v0 != NULL) {
                temp_v0(arg1, M2C_FIELD(arg0, s32 *, 0xB8));
                M2C_FIELD(arg0, M2C_UNK (**)(void *, s32), 0xB4) = NULL;
                M2C_FIELD(arg2, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
                M2C_FIELD(arg2, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
                M2C_FIELD(arg2, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
                M2C_FIELD(arg2, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
                M2C_FIELD(arg2, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
                M2C_FIELD(arg2, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
                M2C_FIELD(arg2, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
                M2C_FIELD(arg2, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C738);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C850);

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

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A18);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A20);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A28);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A30);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A3C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A44);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A4C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A58);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A5C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A60);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A68);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A6C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A74);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A7C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A80);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A84);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A88);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A90);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A94);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A98);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A9C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AA0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AA4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AA8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AAC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AB0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AB4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121ABC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AC0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AC4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AC8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121ACC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AD0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AD4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AD8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121ADC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AE8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AEC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AF8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AFC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B00);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B04);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B08);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B0C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B18);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B20);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B28);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B30);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B3C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B44);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B80);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121C10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121C38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121C3C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121C40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121C44);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121C48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121C4C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121C50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121C54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C90C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005CA70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005CB88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005CC64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005CC9C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005CE24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_03D34A77);

void sceHVNetfront_Module_7D655E00(void *arg0, s32 arg1, void *arg2) {
    void *temp_v0;

    temp_v0 = sceHVNetfront_Module_234F9191(arg0 + 4, arg1) + M2C_FIELD(arg0, s16 *, 0x10);
    M2C_FIELD(temp_v0, s32 *, 0) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(temp_v0, s32 *, 4) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(temp_v0, s32 *, 8) = (s32) M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(temp_v0, s32 *, 0xC) = (s32) M2C_FIELD(arg2, s32 *, 0xC);
    if (M2C_FIELD(arg2, s32 *, 0) == 0xB) {
        func_0005D30C(arg0, arg1, temp_v0, M2C_FIELD(arg2, s32 *, 8));
    }
}

void sceHVNetfront_Module_1CC15992(void *arg0, s32 arg1, void *arg2) {
    void *temp_v0;

    temp_v0 = sceHVNetfront_Module_234F9191(arg0 + 4, arg1) + M2C_FIELD(arg0, s16 *, 0x10);
    M2C_FIELD(arg2, s32 *, 0) = (s32) M2C_FIELD(temp_v0, s32 *, 0);
    M2C_FIELD(arg2, s32 *, 4) = (s32) M2C_FIELD(temp_v0, s32 *, 4);
    M2C_FIELD(arg2, s32 *, 8) = (s32) M2C_FIELD(temp_v0, s32 *, 8);
    M2C_FIELD(arg2, s32 *, 0xC) = (s32) M2C_FIELD(temp_v0, s32 *, 0xC);
}

void sceHVNetfront_Module_9D9CB3AF(void *arg0, s32 arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = sceHVNetfront_Module_234F9191(arg0 + 4, arg1) + M2C_FIELD(arg0, s16 *, 0x10);
    M2C_FIELD(temp_v0, s32 *, 0x1C) = arg2;
    if (arg2 != 0) {
        func_0005D30C(arg0, arg1, temp_v0, arg2);
    }
}

s32 func_0005D0EC(void *arg0, s32 arg1) {
    return M2C_FIELD((sceHVNetfront_Module_234F9191(arg0 + 4, arg1) + M2C_FIELD(arg0, s16 *, 0x10)), s32 *, 0x1C);
}

void sceHVNetfront_Module_67FC33F8(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD((sceHVNetfront_Module_234F9191(arg0 + 4, arg1) + M2C_FIELD(arg0, s16 *, 0x10)), s32 *, 0x24) = arg2;
}

s32 sceHVNetfront_Module_52564790(void *arg0, s32 arg1) {
    return M2C_FIELD((sceHVNetfront_Module_234F9191(arg0 + 4, arg1) + M2C_FIELD(arg0, s16 *, 0x10)), s32 *, 0x24);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005D194);

s32 func_0005D21C(void *arg0, s32 arg1) {
    return M2C_FIELD((sceHVNetfront_Module_234F9191(arg0 + 4, arg1) + M2C_FIELD(arg0, s16 *, 0x10)), s32 *, 0x20);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005D250);

u8 func_0005D290(void *arg0, s32 arg1) {
    return M2C_FIELD((sceHVNetfront_Module_234F9191(arg0 + 4, arg1) + M2C_FIELD(arg0, s16 *, 0x10)), u8 *, 0x32);
}

void func_0005D2C4(void *arg0, s32 arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = sceHVNetfront_Module_234F9191(arg0 + 4, arg1) + M2C_FIELD(arg0, s16 *, 0x10);
    M2C_FIELD(temp_v0, u8 *, 0x33) = (u8) (M2C_FIELD(temp_v0, u8 *, 0x33) | arg2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005D30C);

void func_0005D3A4(void *arg0, s32 arg1, s32 arg2) {
    func_0005D30C(arg0, arg1, sceHVNetfront_Module_234F9191(arg0 + 4, arg1) + M2C_FIELD(arg0, s16 *, 0x10), arg2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005D400);

void sceHVNetfront_Module_2907C1F0(void **arg0, M2C_UNK arg1) {
    void *temp_v0;

    temp_v0 = *arg0;
    func_0005C90C(M2C_FIELD(temp_v0, s32 *, 0), M2C_FIELD(temp_v0, s32 *, 4), arg1);
}

M2C_UNK *func_0005D458(void) {
    return &D_00123D8C;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1955409B);

M2C_UNK *sceHVNetfront_Module_E2C32DF7(void) {
    return &D_00123E47;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005D4EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9BA8E706);

void func_0005D5F4(void *arg0, void *arg1) {
    void *temp_v1;

    if (M2C_FIELD(arg0, s32 *, 0xC) & 8) {
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 4);
    } else {
        sceHVNetfront_Module_F1423651(arg0 + 0x10);
    }
    temp_v1 = M2C_FIELD(arg1, void **, 0);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(temp_v1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(temp_v1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(temp_v1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(temp_v1, s32 *, 0xC);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_0DCCBB6F);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3071BAAE);

void func_0005D924(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0xC) & 1;
}

s32 sceHVNetfront_Module_B541796B(s32 **arg0, s32 arg1, s32 arg2) {
    void *sp0;
    return (func_0005CC9C(**arg0, arg1, arg2, (s32) func_0005D924, &sp0) != 0) ? sp0 : 0x10;
}

void sceHVNetfront_Module_9C6C2E91(s32 arg0, s32 arg1, s32 arg2) {
    sceHVNetfront_Module_9BA8E706(arg0, arg1, arg2, 0);
}

void func_0005D98C(void *arg0, s32 *arg1) {
    s32 temp_v0;

    temp_v0 = __builtin_allegrex_ext(M2C_FIELD(arg0, s32 *, 0xC) ^ 4, 2, 1);
    *arg1 = temp_v0;
    if (temp_v0 != 0) {
        func_0005C4D0(arg0);
    }
}

s32 sceHVNetfront_Module_3445D8F8(s32 **arg0, s32 arg1, s32 arg2) {
    void *sp0;
    return (func_0005CE24(**arg0, arg1, arg2, (s32) func_0005D98C, &sp0) != 0) ? sp0 : 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_AD3723FF);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_540174C1);

void func_0005DBD0(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005DBD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005DCA8);

void func_0005DCF8(void) {
    func_0005DCA8();
}

void func_0005DD14(void) {
    sceHVNetfront_Module_C6EE5561();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005DD30);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005DDC0);

void func_0005DE50(void *arg0, s32 *arg1) {
    *arg1 = (M2C_FIELD(arg0, s32 *, 0xC) & 0xA) == 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005DE64);

void func_0005DF08(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_7C762DEC(arg0, arg1, (s32) &D_00121CFC, 6);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005DF2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005DF6C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005E034);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005E108);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005E19C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005E1F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005E2A4);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005E42C);

void func_0005E4D0(void ***arg0, s32 arg1, M2C_UNK arg2) {
    void *temp_s0;

    temp_s0 = **arg0;
    M2C_FIELD(M2C_FIELD((sceHVNetfront_Module_234F9191(temp_s0 + 4, arg1) + M2C_FIELD(temp_s0, s16 *, 0x10)), void **, 0x24), M2C_UNK (**)(void ***, s32, M2C_UNK), 0x14)(arg0, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005E540);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005E5E0);

void func_0005E68C(void ***arg0, s32 arg1, M2C_UNK arg2) {
    void *temp_s0;

    temp_s0 = **arg0;
    M2C_FIELD(M2C_FIELD((sceHVNetfront_Module_234F9191(temp_s0 + 4, arg1) + M2C_FIELD(temp_s0, s16 *, 0x10)), void **, 0x24), M2C_UNK (**)(void ***, s32, M2C_UNK), 0x18)(arg0, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005E6FC);

void func_0005E77C(void ***arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    void *temp_s0;

    temp_s0 = **arg0;
    M2C_FIELD(M2C_FIELD((sceHVNetfront_Module_234F9191(temp_s0 + 4, arg1) + M2C_FIELD(temp_s0, s16 *, 0x10)), void **, 0x24), M2C_UNK (**)(void ***, s32, M2C_UNK, M2C_UNK), 0x1C)(arg0, arg1, arg2, arg3);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005E7FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005E940);

void sceHVNetfront_Module_58E21566(void *arg0, s32 arg1) {
    M2C_FIELD(sceHVNetfront_Module_52564790(arg0, arg1), M2C_UNK (**)(void *, s32), 0x24)(arg0, arg1);
    sceHVNetfront_Module_9D9CB3AF(arg0, arg1, 0);
    sceHVNetfront_Module_67FC33F8(arg0, arg1, (s32) &D_00121CA8);
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121CA8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121CE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121CFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005E9F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005EAA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005EBEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005ECC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_7C762DEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F8DE932C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005EFBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005EFF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005F18C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005F1C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005F2F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005F38C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121DBC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121DC4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121DCC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121DD4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121FC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005F420);

s32 func_0005F49C(void *arg0, s32 arg1) {
    s32 var_a3;

    var_a3 = 0;
    if (arg1 < 0x100) {
        M2C_FIELD(arg0, s32 *, 0x18) = arg1;
        var_a3 = sceHVNetfront_Module_0F5AA1D5(arg0, 0x20);
    }
    return var_a3;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005F4D4);

void func_0005F560(void *arg0) {
    func_0005F4D4((s32) arg0, 0, M2C_FIELD(arg0, s32 *, 0x14));
    sceHVNetfront_Module_2A34EDF3(arg0);
}

s32 func_0005F594(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = -1;
    if (M2C_FIELD(arg0, s32 *, 0x14) <= 0xFFFFFF) {
        var_v1 = sceHVNetfront_Module_350ABDEC((s32) arg0, arg1);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005F5D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005F660);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005F6AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005F818);

void func_0005F8B4(void) {
    sceHVNetfront_Module_2A34EDF3();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005F8D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005F9D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005FB2C);

s32 func_0005FC08(void **arg0, s32 arg1) {
    s32 temp_s0;
    s32 var_v0;
    void *temp_v1;

    var_v0 = -1;
    if (arg0 != NULL) {
        temp_v1 = *arg0;
        temp_s0 = M2C_FIELD(temp_v1, s32 *, 0x6C) + arg1;
        M2C_FIELD(temp_v1, s32 *, 0x6C) = temp_s0;
        if (temp_s0 <= 0) {
            func_0005FB2C();
        }
        var_v0 = temp_s0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005FC4C);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005FD34);

s32 func_0005FD88(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x68);
}

s32 func_0005FD94(s32 arg0, void *arg1) {
    s32 temp_a3;
    s32 var_a2;
    void *temp_a1;

    temp_a3 = M2C_FIELD(arg1, s16 *, 8) - 2;
    var_a2 = -1;
    if (temp_a3 >= 0) {
        temp_a1 = M2C_FIELD(arg1, s32 *, 0) + (M2C_FIELD(arg1, s16 *, 0xE) * temp_a3);
        if (M2C_FIELD(temp_a1, s32 *, 4) == 0x78) {
            var_a2 = M2C_FIELD(temp_a1, s32 *, 0x28);
        }
    }
    if (var_a2 == -1) {
        var_a2 = func_0005FD34(arg0);
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005FDF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005FE70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005FEB8);

void func_0005FEF4(s32 *arg0, s32 arg1) {
    sceHVNetfront_Module_1A02495A(*arg0 + 0x38, arg1, 0x1C);
}

void func_0005FF18(s32 *arg0, s32 arg1) {
    sceHVNetfront_Module_1A02495A(arg1, *arg0 + 0x38, 0x1C);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005FF44);

void func_0005FF54(void **arg0, s32 *arg1, s32 *arg2) {
    void *temp_v1;

    temp_v1 = *arg0;
    *arg1 = M2C_FIELD(temp_v1, s32 *, 0x74);
    *arg2 = M2C_FIELD(temp_v1, s32 *, 0x78);
}

s32 func_0005FF6C(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x70);
}

s32 func_0005FF78(s32 **arg0) {
    return sceHVNetfront_Module_896E55F6(arg0) + 0x38;
}

s32 func_0005FF98(s32 **arg0) {
    return sceHVNetfront_Module_896E55F6(arg0) + 8;
}

s32 func_0005FFB8(s32 **arg0) {
    return sceHVNetfront_Module_896E55F6(arg0) + 0x18;
}

s32 func_0005FFD8(s32 **arg0) {
    return sceHVNetfront_Module_896E55F6(arg0) + 0x28;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005FFF8);

s32 func_00060220(void *arg0) {
    sceHVNetfront_Module_5D4D03A3(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x1C));
    return 7;
}

void func_00060244(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006024C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000602C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00060444);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00060464);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006049C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000604BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000604DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000604FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006053C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000605AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00060660);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000607C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00060B4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00060DF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00061704);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00061770);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000619C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00061C88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00061D00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00061D8C);

void func_00061DF4(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00061DFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00061E54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00062024);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00062214);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000635F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_AAF146AE);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00063780);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00063870);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_85311068);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00063904);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00063980);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B3E4445A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_0E1F569F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_4E297BC5);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_62803759);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00063B34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00063BD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00063CA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00063CF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00063D50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00063DD4);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_DD454C67);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006410C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000641E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A11D9FB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006447C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00064514);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000646A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00064810);

M2C_UNK *func_00064888(void) {
    return &D_0012435B;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00064894);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000648CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00122FB0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123250);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123260);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000649D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00064B70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00064C1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00064DE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00064E84);

void func_00065038(s32 arg0, s32 arg1) {
    func_0005EFBC(arg0, arg1, (s32) &D_001232E4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00065058);

s32 func_000651A8(void *arg0, s32 arg1) {
    return sceHVNetfront_Module_52564790(arg0, arg1) == (s32) &D_00123260;
}

void func_000651D4(s32 arg0) {
    func_00057FC8(arg0, (s32) &D_0012435B, 6, 7);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000651FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000653DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000653FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00065434);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00065480);

void func_00065790(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s1;

    temp_s1 = __builtin_allegrex_max(arg1, 0);
    func_0008C868(arg0, temp_s1, arg3);
    func_0008C868(arg0, arg2 - temp_s1, arg3);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000657F8);

M2C_UNK *func_000658EC(void) {
    return &D_00123DA2;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000658F8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012329C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001232E4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123308);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000659D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00065B60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00065B88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00065C08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00065D4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00065E2C);

void func_00065FB0(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_7C762DEC(arg0, arg1, (s32) &D_00123344, 1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00065FD4);

void func_00066058(void) {
    func_00065FD4();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00066074);

void func_00066204(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00066074(arg0, arg1, arg2, arg3, 3);
}

void func_00066220(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00066074(arg0, arg1, arg2, arg3, 4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006623C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00066334);

void func_000664D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00066334(arg0, arg1, arg2, arg3, 5);
}

void func_000664F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00066334(arg0, arg1, arg2, arg3, 6);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00066510);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006660C);

void func_0006684C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0006660C(arg0, arg1, arg2, arg3, 0);
}

void func_00066868(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0006660C(arg0, arg1, arg2, arg3, 1);
}

void func_00066884(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0006660C(arg0, arg1, arg2, arg3, 2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000668A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000669FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00066F20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000671BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00067440);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00067774);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00067CB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00067E5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068088);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068288);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068388);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000684DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123344);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006860C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068630);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068654);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068678);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006869C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000686C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000686E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068708);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006872C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068750);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068774);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068798);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000687BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000687E0);

void func_00068950(s32 arg0, s32 arg1) {
    func_0005EFBC(arg0, arg1, (s32) &D_0012374C);
}

s32 func_00068970(void *arg0, s32 arg1) {
    return sceHVNetfront_Module_52564790(arg0, arg1) == (s32) &D_00123308;
}

void func_0006899C(s32 arg0) {
    func_00057FC8(arg0, (s32) &D_00123DA2, 6, 3);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000689C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068B2C);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068CD0);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_DAA2D2E2);

s32 func_00068D48(void *arg0) {
    return (u32) (M2C_FIELD(arg0, s32 *, 0xC0) - 6) < 2U;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068D58);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_5D4D03A3);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E653C40E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9716DAAD);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068E90);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012344C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012374C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068FBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006909C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000690FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006915C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006919C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000691DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069204);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006922C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069270);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069298);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000692C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000692E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069310);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069338);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069360);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006945C);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_FF74C8F7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EAB56A29);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069800);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069838);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_4AE4E3A7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006991C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069998);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069A48);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069A94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069AE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069B14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3AB64B09);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1666F7FB);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069DAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069DD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069F34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006A0A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006A1F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006A2FC);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006A480);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006A568);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006A5E4);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006A6E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006A838);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006A88C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006AB00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006ABA8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006ABDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006AD30);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006B284);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006B5A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006B698);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006B824);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006BA5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006BB80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A5E9E8F5);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006C76C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006C884);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006C964);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_88A1BF4E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C6EE5561);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9D1EA353);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EDDF1A9E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_CC137D18);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006CF78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_320FE336);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006D030);

void func_0006D0F0(void **arg0) {
    void *temp_s0;
    void *temp_s1;

    temp_s0 = *arg0;
    temp_s1 = temp_s0 + 0x88;
    func_00068B2C(M2C_FIELD(temp_s0, s32 *, 0), sceHVNetfront_Module_234F9191((s32) temp_s1, sceHVNetfront_Module_4681A961((s32) temp_s1, M2C_FIELD(temp_s0, s32 *, 0x9C) - 1)));
    sceHVNetfront_Module_C0A215A2(temp_s1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006D14C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006D1EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006D328);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006D4B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006D554);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006D58C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006D684);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006D710);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006D9D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006DB50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006DED8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006DFBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006E0C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006E0DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006E258);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006E464);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006E508);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006E838);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006EAFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006ED84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006EE70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006F020);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006F210);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123D58);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123D8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123D9C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123DB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123DDC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123E10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123E74);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123E80);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123EB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123EF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123EF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123EF8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123F14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123F3C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123F70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123F9C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123FDC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124004);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012405C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012406C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001240A8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001240C8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124160);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012416C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124190);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001241DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124258);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001242C0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001242D0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001242DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124304);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012430C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124348);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012436C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243A8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243AC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243B0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243B4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243B8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243BC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243C0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243C4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243C8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243D0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243D4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243D8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243E0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243E4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243E8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243EC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243F4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243F8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243FC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124400);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124404);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006F290);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006F2F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006F4E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006F7A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006F9A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006F9DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006FB88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006FBD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006FDBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006FFA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006FFF0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00070038);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000700EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00070240);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000702A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00070324);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007040C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00070518);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00070580);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00070604);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000706E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_AAFCCCFA);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000708C8);

void func_00070A04(void) {
    sceHVNetfront_Module_AAFCCCFA();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00070A20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00070A40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00070ACC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00070B50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00070D38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EAA204F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_57FC5C24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00070F84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D80A1B5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EE86317E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F6604D0C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6FC750A2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F1423651);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00071210);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007132C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00071498);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007163C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00071A04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00071E00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007200C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000721B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000721F0);

void func_000723AC(s32 arg0, s32 arg1, s32 arg2, void *arg3) {
    func_000721F0(arg0, arg1, arg2);
    M2C_FIELD(arg3, s32 *, 4) = (s32) (M2C_FIELD(arg3, s32 *, 4) == 0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000723DC);

void func_00072570(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_000723DC(arg0, arg1, arg2, arg3, arg4);
    if (M2C_FIELD(arg4, s32 *, 0) == 6) {
        M2C_FIELD(arg4, s32 *, 0) = 8;
        M2C_FIELD(arg4, s32 *, 4) = 0;
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000725AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000725F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007264C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00072698);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00072704);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00072770);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00072834);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007289C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00072904);

void func_0007296C(void) {
    func_0007040C();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00072988);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00072A58);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00072A8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00072AC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00072ACC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00072B20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00072C58);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00072E94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00072F60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000730F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000731B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00073224);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00073328);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00073388);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000733E4);

M2C_UNK *func_0007355C(void) {
    return &D_00123D9C;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00073568);

s32 func_0007368C(void *arg0, s32 arg1) {
    return sceHVNetfront_Module_52564790(arg0, arg1) == (s32) &D_00124928;
}

void func_000736B8(s32 arg0) {
    func_00057FC8(arg0, (s32) &D_00123D9C, 5, 2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000736E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00073950);

void func_00073CC0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_00073950(arg0, arg3, arg4, arg5, arg1, arg2 - arg4, 1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00073CF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00073D68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00073DD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00073EB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00073F84);

void func_00074098(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2, void *arg3) {
    if (func_00068CF0(arg0, 0) == 0) {
        func_00063B34(arg3, 0);
    }
    func_00074358(arg0, arg1, arg2, arg3);
}

void func_0007410C(s32 *arg0, s32 arg1, s32 arg2, void *arg3) {
    func_00074098(arg0, arg1, arg2, arg3);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00074128);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00074200);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124874);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124878);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012487C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124880);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124884);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124888);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012488C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124890);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124894);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124898);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012489C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248A0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248A4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248A8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248AC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248B0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248B4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248B8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248BC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248C0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248C4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248C8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248D0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248D4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248D8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248E0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248E4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248E8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248EC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248F4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248F8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248FC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124900);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124904);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124908);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012490C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124910);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124914);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124918);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012491C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124920);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124924);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124928);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00074358);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000746CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00074788);

void func_0007481C(s32 arg0, M2C_UNK arg1) {
    s32 temp_v0;

    temp_v0 = func_00073388();
    if ((func_00073CF8(arg0, arg1, 0, temp_v0) != 0) && (func_000736E0(arg0, arg1, 0, temp_v0) != 0) && (func_00073D68(arg0, arg1, 0, temp_v0) != 0)) {
        sceHVNetfront_Module_C6EE5561(arg0, arg1);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000748B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000749E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00074BA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00074C50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00074DEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000750DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00075398);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000754B8);

void func_000755BC(s32 arg0, s32 arg1) {
    func_0005EFBC(arg0, arg1, (s32) &D_00124A84);
}

M2C_UNK *func_000755DC(void) {
    return &D_00123DA9;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000755E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000756A8);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000757B8);

void func_00075890(s32 arg0, s32 arg1) {
    func_0005EFBC(arg0, arg1, (s32) &D_00124B10);
}

s32 func_000758B0(void *arg0, s32 arg1) {
    return sceHVNetfront_Module_52564790(arg0, arg1) == (s32) &D_00124AA8;
}

void func_000758DC(s32 arg0) {
    func_00057FC8(arg0, (s32) &D_00123DA9, 7, 4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00075904);

s32 func_000759A8(void **arg0) {
    sceHVNetfront_Module_9716DAAD(M2C_FIELD(*arg0, void ****, 0x1C), 4);
    return 6;
}

s32 func_000759D0(void **arg0) {
    sceHVNetfront_Module_5D4D03A3(M2C_FIELD(*arg0, s32 *, 0x1C));
    return 7;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000759F4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124964);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124A84);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124AA8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124AE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124B10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124B34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124BB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124BBC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124BC8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124BD4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124BDC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124BE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124BE8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124BF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124BFC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124C04);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124C0C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124C14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124C1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124C2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124C40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124C4C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124C54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124C60);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124C68);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124C70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124C78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124CCC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124CD4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124CDC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124CE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124CF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124CF8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D00);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D04);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D0C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D20);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D30);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D44);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D4C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D5C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D6C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D7C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D84);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D94);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124E08);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124E28);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124EA8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124EDC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124EE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124EE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124EE8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124EEC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124EF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124EF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124EF8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124EFC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F00);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F04);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F08);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F0C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F18);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F20);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F28);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F30);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F3C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F44);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F58);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F5C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F60);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F68);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F6C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F74);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F7C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F84);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F88);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F90);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F94);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F98);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F9C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124FA0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124FA4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124FA8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124FAC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124FB0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124FB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124FC0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124FC8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124FD0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124FD8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124FE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124FE8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124FF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124FF8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125000);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125008);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125010);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012501C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125020);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125028);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125030);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125038);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125040);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125048);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125050);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125058);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125060);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125064);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125068);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012506C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125074);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125080);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125088);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125090);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012509C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001251E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00075B58);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00075E60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00075F5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00076208);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000763B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000767C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00076890);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012541C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00076A2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00076C70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00076F60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00076FE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00077048);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00077108);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000771A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000771AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00077270);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000773F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00077510);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00077618);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00077670);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000776CC);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000777E0);

s32 func_000777EC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC) & 0x60;
}

void func_000777F8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) | 2);
}

void func_00077808(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = __builtin_allegrex_ins(M2C_FIELD(arg0, s32 *, 0xC), 0, 1, 1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00077818);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007787C);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000778F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000779F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00077A4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00077AE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00077B44);

void func_00077BF4(s32 arg0) {
    func_00077670();
    func_00077270(arg0, 3, 0, 0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00077C2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00077E00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00077EA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00077EEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00078074);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000782DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00078980);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00078DC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00079794);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007980C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00079980);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00079B2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00079CE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00079E74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00079F60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007A1E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007AC60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007AFA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B340);

void func_0007B37C(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B384);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B398);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B3B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B3C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B3E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B4E4);

void func_0007B544(s32 *arg0, s32 *arg1) {
    func_0007B4E4(*arg0, *arg1);
}

void func_0007B564(s32 *arg0, s32 *arg1) {
    func_0007B4E4(*arg0 + 0xC, *arg1 + 0xC);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B58C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B5D0);

s32 func_0007B72C(s32 arg0, M2C_UNK arg1) {
    return sceHVNetfront_Module_440B8F87(arg0, __builtin_allegrex_ins(arg1, 0, 0x16, 0xA) * 4, 0) + M2C_FIELD(arg0, s16 *, 0x10);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B764);

s32 func_0007B790(s32 *arg0) {
    return *arg0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B798);

void func_0007B7B4(void) {
    func_0007B58C();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B7D0);

s32 func_0007B7F4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B7FC);

void func_0007B818(s32 arg0) {
    sceHVNetfront_Module_AFCC3786(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B834);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B840);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B874);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B8D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B9AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007BAC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007BB44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007BC24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007BDBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007BEA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007BF0C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007C340);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007C39C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007C3F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007C450);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007C4B8);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007C61C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007C66C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007C6B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007C710);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007C880);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007C970);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007CA48);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007CB90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007CC90);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007CDF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007CF2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007D01C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007D0E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007D178);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007D20C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007D268);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007D2C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007D3F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007D4D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007D5B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007D810);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007DB24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007DCA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007DD88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007DEE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007E314);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007E500);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007E604);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007E644);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007E6F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007E788);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007E8AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007E9D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007EB24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007ECF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007ED04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007EE84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007EF24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007F0CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007F168);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007F2C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007F344);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007F58C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007F79C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007F81C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007FAA8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007FAF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007FC20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007FD1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007FE60);

s32 func_0007FF80(s32 arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4) {
    s32 var_a1;

    var_a1 = 0;
    if (M2C_FIELD(arg2, s32 *, 0) == 2) {
        var_a1 = func_0007FFC8(arg0, M2C_FIELD(arg2, s32 *, 8), arg1, M2C_FIELD(arg2, s32 *, 0xC), arg3, arg4);
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007FFC8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000800D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008011C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00080350);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000805C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000805E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00080628);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00080750);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00080C70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00080CA8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00080D28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00080E14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00080E80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00080EFC);

void func_00081540(void **arg0, s32 arg1) {
    void *temp_s0;

    temp_s0 = *arg0;
    sceHVNetfront_Module_A2F4AC9E(arg1);
    M2C_FIELD(temp_s0, s32 *, 0x184) = 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008156C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00081598);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008160C);

void sceHVNetfront_Module_D2270E78(void) {
    func_00082D48(1);
}

void sceHVNetfront_Module_5EEBE755(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_80631855);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_57FDE0C7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F4EA7F0A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00081844);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_84AF80AA);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_5BA9037D);

void sceHVNetfront_Module_90A5AF9D(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_5BA9037D(arg0, arg1, sceHVNetfront_Module_15875ED4(arg1));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008194C);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000819DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00081A88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00081B14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00081C34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00081D50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_389E8450);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00081F90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00081FFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008201C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082038);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082054);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082070);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008208C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000820A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000820C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000820E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000820FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082118);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082134);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082150);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008216C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082188);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000821A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000821C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000821DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000821FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008221C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008223C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008225C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008227C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008229C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000822BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000822DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000822FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008231C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008233C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008235C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008237C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082398);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000823B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000823D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000823EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082408);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082424);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082440);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008245C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082480);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008249C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000824B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000824D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000824F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082510);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082534);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082558);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008257C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082598);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000825BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000825E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082604);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082628);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008264C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082670);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082694);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000826B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000826CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000827C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_5D1D77DA);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1A02495A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_4EAC15D5);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D611E938);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082C7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082CF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082D48);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9ED6914E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082E74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082E94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082ECC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082F4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082FB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008303C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000830C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A7EB7C24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000831F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008329C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_10AE4328);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000833BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008347C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00083524);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_04911EC3);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00083698);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2ED8B315);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000837C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00083888);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_38C38C7D);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000839A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00083A68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_0CC5AB29);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9A925AD1);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00083C10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_484C100A);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00083F84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_AEF9D476);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_28FDE037);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2CA48B51);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00084188);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000841BC);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000842BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_559D9F24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000843BC);

void sceHVNetfront_Module_46A9D965(s32 arg0, M2C_UNK arg1, s32 arg2) {
    sceHVNetfront_Module_42E27595(arg0, arg1, arg2, sceHVNetfront_Module_15875ED4(arg2));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_42E27595);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_65813EA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D1EF37CB);

void func_00084590(s32 arg0, M2C_UNK arg1, s32 arg2) {
    sceHVNetfront_Module_A02BB72A(arg0, arg1, arg2, sceHVNetfront_Module_15875ED4(arg2));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A02BB72A);

void sceHVNetfront_Module_46EE5586(void *arg0, s32 arg1, s32 arg2) {
    sceHVNetfront_Module_5DBB6513(arg0, arg1, arg2, sceHVNetfront_Module_15875ED4(arg2));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_5DBB6513);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_81D4F0FE);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9DAD41C2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C45C352C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_15875ED4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_BB5E8F0E);

s32 sceHVNetfront_Module_56988A48(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_BB5E8F0E(arg0 + sceHVNetfront_Module_15875ED4(arg0), arg1);
    return arg0;
}

s32 func_00084D58(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    sceHVNetfront_Module_C412B8FC(arg0 + sceHVNetfront_Module_15875ED4(arg0), arg1, arg2);
    return arg0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C412B8FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00084E1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00084E44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9D38B11B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00084F40);

s32 func_00084FDC(s32 arg0) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 - 0x16E) >= 0) {
        var_v0 = ((arg0 - 0x16E) / 365) + 1;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00085014);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00085268);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000852F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00085320);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000853A8);

void sceHVNetfront_Module_6448C9FD(void) {
    func_000F151C();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00085500);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C9903493);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00085724);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00085ADC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2CEB5C59);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D09FD444);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001254F4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125504);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012552C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125554);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125568);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012557C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012597C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125A7C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125B7C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125BDC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125BE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125BEC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125BF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C00);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C0C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C20);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C4C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C5C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C68);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C84);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C90);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C94);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C98);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C9C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CA0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CA4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CA8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CAC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CB0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CB4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CBC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CC0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CC8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CCC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CD4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CD8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CEC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125ECC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125ED4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125EDC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125EE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125EF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125EFC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125F04);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125F10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125F2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125F34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125F40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125F48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125F50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125F54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125F5C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125F64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125F6C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125F78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125F80);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125F8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125F98);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00085C54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_17AD2C3F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_73C70CE6);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2E5A2E51);

s32 func_000867F4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8) == 0;
}

s32 func_00086800(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 8) = temp_v1;
    return temp_v1 != 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00086814);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008685C);

s32 func_00086898(void *arg0) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0);
    return sceHVNetfront_Module_440B8F87(temp_s0, M2C_FIELD(arg0, s32 *, 8), 0) + M2C_FIELD(temp_s0, s16 *, 0xC);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000868D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B3AF6022);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00086940);

void func_00086964(s32 arg0, s32 arg1) {
    func_0008685C(arg0, arg1);
    M2C_FIELD(arg1, M2C_UNK **, 0x18) = &func_00086940;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_0F5AA1D5);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2A34EDF3);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00086A40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C0A215A2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_4681A961);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_350ABDEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_5AFD3D38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_488D3C7B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00086C14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A20CC0BA);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_989778A5);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1A741A10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_40EFD93B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B71993AE);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EF43C7A1);

void sceHVNetfront_Module_56891AC0(void) {
    func_00093668();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00086ED0);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00086FC8);

void func_00087010(void *arg0, s32 arg1, s32 arg2) {
    sceHVNetfront_Module_1A02495A(arg2, sceHVNetfront_Module_234F9191((s32) arg0, arg1 << M2C_FIELD(arg0, s16 *, 0xE)), (s32) M2C_FIELD(arg0, s16 *, 0xC));
}

void func_00087058(void *arg0, s32 arg1, s32 arg2) {
    sceHVNetfront_Module_1A02495A(sceHVNetfront_Module_234F9191((s32) arg0, arg1 << M2C_FIELD(arg0, s16 *, 0xE)), arg2, (s32) M2C_FIELD(arg0, s16 *, 0xC));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000870A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000870C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B1EBD134);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_62342C9A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_165CA66D);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00087254);

void func_000872E4(s32 arg0, s32 arg1) {
    func_00087254(arg0, 0, arg1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C04FADD9);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00087320);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00087430);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E875CDC8);

void func_000874F0(s32 arg0, s32 arg1, s32 arg2) {
    sceHVNetfront_Module_1A02495A(arg2, sceHVNetfront_Module_234F9191(arg0, arg1) + M2C_FIELD(arg0, s16 *, 0xC), (s32) M2C_FIELD(arg0, s16 *, 0xE));
}

void sceHVNetfront_Module_6A6AB360(s32 arg0, s32 arg1, s32 arg2) {
    sceHVNetfront_Module_1A02495A(sceHVNetfront_Module_234F9191(arg0, arg1) + M2C_FIELD(arg0, s16 *, 0xC), arg2, (s32) M2C_FIELD(arg0, s16 *, 0xE));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6F80558B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000875B0);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A9210C2E);

void sceHVNetfront_Module_14411643(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B6F9B107);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A76795B7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008782C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_32E4FDC6);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00087AA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00087B70);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00087D24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B730C75F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_16508B17);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2B629F59);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F489E9B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_10C4F8A3);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00087FEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1461AF80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00088188);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_457A4136);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B21203FF);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_41CEA51D);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EA8FFAF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00088300);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E1280750);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2408FBF3);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_703D7675);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E6D4D13C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_83191313);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2918F48C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_12E3C14E);

s32 sceHVNetfront_Module_4E6D9390(void *arg0, void *arg1) {
    s32 var_a3;

    var_a3 = 0;
    if (M2C_FIELD(arg1, s32 *, 0) != M2C_FIELD(arg0, s32 *, 0x1C)) {
        var_a3 = sceHVNetfront_Module_E6D4D13C((s32) arg0, *M2C_FIELD(arg1, s32 **, 8), (s32) arg1);
    }
    return var_a3;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_34C99643);

void func_00088600(void *arg0) {
    func_0008A010();
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_0F61EC8E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_24614BB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1B83D569);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6B15F29F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_957CE668);

s32 sceHVNetfront_Module_70683D75(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if ((M2C_FIELD(sceHVNetfront_Module_234F9191(arg0, __builtin_allegrex_ins(arg1, 0, 0x16, 0xA) * 4), s32 *, 8) != 0) || (M2C_FIELD(arg0, s32 *, 0x18) == arg1)) {
        var_v1 = 1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EE1C1283);

void sceHVNetfront_Module_05F33A6C(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_957CE668((s32) arg0, temp_v0);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1DF9F3CD);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6DC3FDE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00088C80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00088D8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00088DE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00088E4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C6B5460E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000890F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00089140);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000891F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00089298);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_654D2937);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C1F09F7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C8731B54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008952C);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008962C);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_BFE8268F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_8E9CAD4A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6475D8C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000899DC);

