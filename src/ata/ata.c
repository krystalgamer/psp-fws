/* cflags: -O2 -frename-registers */
#include "common.h"
#include "ata_decls.h"

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/ata", D_00003F1C);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/ata", func_00000000);
#else
INCLUDE_ASM("nonmatchings/ata", sceAta_driver_B176BB2E);
#endif

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_C8BC8B83);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_CDC50BF0);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_AC800B1D);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_D1E6E175);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/ata", func_0000025C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ata", func_00000280);
#endif

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_52D9A4CA);

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/ata", D_000041DC);

INCLUDE_RODATA("nonmatchings/ata", D_000041E0);

INCLUDE_RODATA("nonmatchings/ata", D_00004200);

INCLUDE_RODATA("nonmatchings/ata", D_00004218);

INCLUDE_RODATA("nonmatchings/ata", D_0000422C);

INCLUDE_RODATA("nonmatchings/ata", D_00004240);

INCLUDE_RODATA("nonmatchings/ata", D_00004258);

INCLUDE_RODATA("nonmatchings/ata", D_00004268);

INCLUDE_RODATA("nonmatchings/ata", D_00004450);

INCLUDE_RODATA("nonmatchings/ata", D_00004458);

INCLUDE_RODATA("nonmatchings/ata", D_00004460);

INCLUDE_RODATA("nonmatchings/ata", D_0000446C);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/ata", D_00004470);

INCLUDE_RODATA("nonmatchings/ata", D_000044A0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/ata", D_0000410C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/ata", D_00004488);

INCLUDE_RODATA("nonmatchings/ata", D_000044B8);
#endif

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_6C58F096);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_C21318E6);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_3AA3FA39);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_1F05F48C);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_B6BED47E);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_84E14690);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_6E639701);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", func_00000D24);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ata", func_00000E8C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ata", func_00000D40);
#endif

INCLUDE_ASM("nonmatchings/ata", func_00000E3C);

#if FW_VERSION >= 150
void sceAta_driver_110D3739(s32 arg0, s32 arg1) {
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v0 = sceAta_driver_52D9A4CA(arg0);
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, s32 *, 4) = (s32) (M2C_FIELD(temp_v0, s32 *, 4) | arg1);
    }
    sceKernelCpuResumeIntr(temp_s1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", func_0000104C);
#endif

#if FW_VERSION == 100
void sceAta_driver_110D3739(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = sceKernelCpuSuspendIntr();
    temp_v0 = sceAta_driver_52D9A4CA(0);
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, s32 *, 4) = (s32) (M2C_FIELD(temp_v0, s32 *, 4) | arg1);
    }
    sceKernelCpuResumeIntr(temp_s0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/ata", func_00000FF0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", sceAta_driver_A77C230B);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_6DE1C65F);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_BA09142A);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_C7B02795);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", sceAta_driver_EFE3C7FA);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 sceAta_driver_1C29566B(void) {
    return D_00004328;
}

void sceAta_driver_7F551D66(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00004328 |= arg0;
    sceKernelCpuResumeIntr(temp_a0);
}

void sceAta_driver_68DEA2FF(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00004328 &= ~arg0;
    sceKernelCpuResumeIntr(temp_a0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ata", func_00001134);

s32 sceAta_driver_3A61BF97(void) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = sceAta_driver_52D9A4CA(0);
    var_v0 = 0x80211009;
    if (temp_v0 != 0) {
        var_v0 = M2C_FIELD(temp_v0, s32 *, 4);
    }
    s32 cmp_tmp = var_v0 & 0x10;
    return cmp_tmp != 0;
}

void sceAta_driver_B7F5B2CA(s32 arg0) {
    D_00004250 = arg0;
}

s32 sceAta_driver_D8E525CB(void) {
    return D_00004250;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ata", func_00000FFC);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_A77C230B);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_6DE1C65F);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_BA09142A);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_C7B02795);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_EFE3C7FA);

s32 sceAta_driver_1C29566B(void) {
    return D_000046EC;
}

void sceAta_driver_7F551D66(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_000046EC |= arg0;
    sceKernelCpuResumeIntr(temp_a0);
}

void sceAta_driver_68DEA2FF(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_000046EC &= ~arg0;
    sceKernelCpuResumeIntr(temp_a0);
}
#endif

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_638EEA14);

void sceAta_driver_B5982381(void) {
    D_000046A8.unk0 = 0;
    D_000046A8.unk4 = 0;
}

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", func_0000176C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ata", func_00001218);

void func_00001274(u32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00004260 = 0;
    sceKernelCpuResumeIntr(temp_a0);
    sceKernelSetAlarm(arg0, (s32) &func_000018B8, &D_00004260);
}

s32 func_000012C8(void) {
    return D_00004260;
}

void func_000012D4(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00004260 = 0;
    sceKernelCpuResumeIntr(temp_a0);
    sceKernelCancelAlarm(arg0);
}

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_071D3D4D);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ata", func_000019F0);
#endif

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_EBB91566);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_ACCEE63F);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_B863FD83);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_1C8DA2FD);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_2AE26E08);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_9D98086E);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_689FCB7D);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", sceAta_driver_FCF939D9);
#else
M2C_UNK *sceAta_driver_FCF939D9(void) {
    return &D_000046A8;
}
#endif

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_C144826E);

#if FW_VERSION >= 150
s32 sceAta_driver_9AE67E14(s32 arg0) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = sceAta_driver_52D9A4CA(arg0);
    var_v0 = 0x80211009;
    if (temp_v0 != 0) {
        var_v0 = M2C_FIELD(temp_v0, s32 *, 4);
    }
    return var_v0;
}
#else
s32 sceAta_driver_9AE67E14(s32 arg0) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = sceAta_driver_52D9A4CA(0);
    var_v0 = 0x80211009;
    if (temp_v0 != 0) {
        var_v0 = M2C_FIELD(temp_v0, s32 *, 4);
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/ata", sceAta_driver_ACFF7CB5);
#else
s32 sceAta_driver_ACFF7CB5(void) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = sceAta_driver_52D9A4CA(0);
    var_v0 = 0x80211009;
    if (temp_v0 != 0) {
        var_v0 = M2C_FIELD(temp_v0, s32 *, 4);
    }
    s32 cmp_tmp = var_v0 & 0x80;
    return cmp_tmp != 0;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/ata", sceAta_driver_3A61BF97);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void sceAta_driver_B7F5B2CA(s32 arg0) {
    D_00004324 = arg0;
}

s32 sceAta_driver_D8E525CB(void) {
    return D_00004324;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", sceAta_driver_7BBA095C);
#else
void sceAta_driver_B7F5B2CA(s32 arg0) {
    D_000046E8 = arg0;
}

s32 sceAta_driver_D8E525CB(void) {
    return D_000046E8;
}

void sceAta_driver_7BBA095C(s32 arg0, M2C_UNK arg1) {
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v0 = sceAta_driver_52D9A4CA(arg0);
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, s32 *, 4) = (s32) (M2C_FIELD(temp_v0, s32 *, 4) & ~arg1);
    }
    sceKernelCpuResumeIntr(temp_s1);
}
#endif

#if FW_VERSION < 201 || (FW_VERSION >= 250 && FW_VERSION < 271) || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/ata", module_start);
#endif

#if FW_VERSION >= 300
s32 module_start(void) {
    func_00003FB0();
    return func_00000000(1) != 0;
}
#endif

#if FW_VERSION == 271
s32 module_start(void) {
    func_00003C58();
    return func_00000000(1) != 0;
}
#endif

#if FW_VERSION == 201
s32 module_start(void) {
    s32 var_v1;

    func_00003C58();
    var_v1 = 0;
    if (func_00000000(1) != 0) {
        KDebugForKernel_84F370BC("%sERROR: %s: ATA initialization failed\n", &D_00003F1C, "sceAtaEntry");
        var_v1 = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", func_0000171C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/ata", func_00001810);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", sceAta_driver_12805193);

INCLUDE_ASM("nonmatchings/ata", func_00001E28);

INCLUDE_ASM("nonmatchings/ata", func_00001EC0);

INCLUDE_ASM("nonmatchings/ata", func_00001F20);

INCLUDE_ASM("nonmatchings/ata", func_00001FFC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ata", func_000018B8);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_F512A273);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_4844EB0C);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_D6BF0B85);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_322460B6);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ata", func_00001E3C);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_12805193);

INCLUDE_ASM("nonmatchings/ata", func_00002000);

INCLUDE_ASM("nonmatchings/ata", func_00002094);

INCLUDE_ASM("nonmatchings/ata", func_000020F4);

INCLUDE_ASM("nonmatchings/ata", func_000021D0);
#endif

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_E3E1EED7);

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00002120(void) {
    return 0x80211004;
}

s32 func_0000212C(void) {
    return 0;
}

void func_00002134(void) {

}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ata", sceAta_driver_4222D6F3);

void sceAta_driver_298DDC3D(void) {
    func_000033D4();
}

void sceAta_driver_F6AC2E5D(void) {
    func_0000341C();
}
#endif

#if FW_VERSION < 282
void sceAta_driver_AE100256(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    M2C_VFIELD(&D_00004280, s32, 0x18) = arg5;
    M2C_VFIELD(&D_00004280, s32, 4) = arg0;
    M2C_VFIELD(&D_00004280, s32, 8) = arg1;
    M2C_VFIELD(&D_00004280, s32, 0xC) = arg2;
    M2C_VFIELD(&D_00004280, s32, 0x10) = arg3;
    M2C_VFIELD(&D_00004280, s32, 0x14) = arg4;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
M2C_UNK *func_00002160(void) {
    return &D_00004280;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ata", sceAta_driver_F76A5B9C);
#endif

#if FW_VERSION >= 282
s32 func_000022E0(void) {
    return 0x80211004;
}

s32 func_000022EC(void) {
    return 0;
}

void func_000022F4(void) {
}

void sceAta_driver_AE100256(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    D_00004700.unk18 = arg5;
    D_00004700.unk4 = arg0;
    D_00004700.unk8 = arg1;
    D_00004700.unkC = arg2;
    D_00004700.unk10 = arg3;
    D_00004700.unk14 = arg4;
}

M2C_UNK *sceAta_driver_F76A5B9C(void) {
    return &D_00004700;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/ata", sceAta_driver_4222D6F3);
#endif

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_4D225674);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_7DE9E14A);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/ata", func_00002374);

INCLUDE_ASM("nonmatchings/ata", func_0000239C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/ata", func_000021D0);

INCLUDE_ASM("nonmatchings/ata", func_000021FC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", func_00002214);

INCLUDE_ASM("nonmatchings/ata", func_00002228);

INCLUDE_ASM("nonmatchings/ata", func_00002254);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ata", sceAta_driver_2E32045A);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_1E6202F8);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_E3F01009);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_01248DA2);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_943FC7AC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ata", func_0000238C);

INCLUDE_ASM("nonmatchings/ata", func_000023B4);

INCLUDE_ASM("nonmatchings/ata", func_000023C8);

INCLUDE_ASM("nonmatchings/ata", func_000023DC);

INCLUDE_ASM("nonmatchings/ata", func_00002408);
#endif

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_76C0923D);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", func_0000229C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ata", sceAta_driver_A62258FD);

s32 sceAta_driver_AC84FF0A(void) {
    return 0x80211004;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ata", func_00002450);
#endif

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_F61EAFC0);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", func_000022E0);

INCLUDE_ASM("nonmatchings/ata", func_0000233C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ata", sceAta_driver_B985F2B0);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_8CADA96B);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ata", func_00002494);

INCLUDE_ASM("nonmatchings/ata", func_000024EC);
#endif

INCLUDE_ASM("nonmatchings/ata", func_00002500);

INCLUDE_ASM("nonmatchings/ata", func_00002570);

INCLUDE_ASM("nonmatchings/ata", func_000025E4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ata", func_00001ED8);

INCLUDE_ASM("nonmatchings/ata", func_00001F14);

INCLUDE_ASM("nonmatchings/ata", func_00001F5C);
#endif

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_0B53CAD8);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_010F750B);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", func_0000251C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/ata", func_00002074);
#endif

#if FW_VERSION == 271
s32 func_000020F8(void *arg0, void *arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0x80211008;
    if (((arg0 == NULL) | (arg1 == NULL)) == 0) {
        var_v0 = 0;
        M2C_FIELD(arg0, void **, 0x18) = arg1;
        M2C_FIELD(arg1, s32 *, 0xC) = arg2;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
s32 func_000020F8(void *arg0, void *arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0x80211008;
    if (((arg0 == NULL) | (arg1 == NULL)) == 0) {
        var_v0 = 0;
        M2C_FIELD(arg1, s32 *, 0xC) = arg2;
        M2C_FIELD(arg0, void **, 0x18) = arg1;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 100
s32 func_000020F8(void *arg0, void *arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0x80211008;
    if (((arg0 == NULL) | (arg1 == NULL)) == 0) {
        var_v0 = 0;
        M2C_FIELD(arg1, s32 *, 0x10) = arg2;
        M2C_FIELD(arg0, void **, 0x1C) = arg1;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", func_00002618);

INCLUDE_ASM("nonmatchings/ata", func_000026D0);

INCLUDE_ASM("nonmatchings/ata", func_00002970);

INCLUDE_ASM("nonmatchings/ata", func_000029F4);

INCLUDE_ASM("nonmatchings/ata", func_00002A98);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ata", func_00002124);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_1DF6C4D2);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_C4060B8A);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_FDDF4C74);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_9CA52F94);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_BDEA51A5);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_B9C9F2E4);

INCLUDE_RODATA("nonmatchings/ata", D_00003F30);

INCLUDE_RODATA("nonmatchings/ata", D_00003F38);

INCLUDE_RODATA("nonmatchings/ata", D_00003F48);

INCLUDE_RODATA("nonmatchings/ata", D_00003F50);

INCLUDE_RODATA("nonmatchings/ata", D_00003F58);

INCLUDE_RODATA("nonmatchings/ata", D_00003F60);

INCLUDE_RODATA("nonmatchings/ata", D_00003F78);

INCLUDE_RODATA("nonmatchings/ata", D_00003F88);

INCLUDE_RODATA("nonmatchings/ata", D_00003F94);

INCLUDE_RODATA("nonmatchings/ata", D_00003F9C);

INCLUDE_RODATA("nonmatchings/ata", D_00003FB0);

INCLUDE_RODATA("nonmatchings/ata", D_00003FC8);

INCLUDE_RODATA("nonmatchings/ata", D_00003FD8);

INCLUDE_RODATA("nonmatchings/ata", D_00003FE4);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/ata", D_00003FF4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/ata", D_00004008);

INCLUDE_RODATA("nonmatchings/ata", D_000040D0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ata", func_00002718);

s32 func_0000277C(struct Unk_func_0000277C_0 *arg0, struct Unk_func_0000277C_1 *arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0x80211008;
    if (((arg0 == NULL) | (arg1 == NULL)) == 0) {
        var_v0 = 0;
        arg0->unk1C = arg1;
        arg1->unkC = arg2;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/ata", func_000027A8);

INCLUDE_ASM("nonmatchings/ata", func_00002860);

INCLUDE_ASM("nonmatchings/ata", func_00002B0C);

INCLUDE_ASM("nonmatchings/ata", func_00002B90);

INCLUDE_ASM("nonmatchings/ata", func_00002C34);
#endif

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_C74F04B7);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", func_00002CE8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/ata", D_0000425C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", sceAta_driver_BDD30DEE);

INCLUDE_ASM("nonmatchings/ata", func_00002F1C);

INCLUDE_ASM("nonmatchings/ata", func_000030F8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", sceAta_driver_FC7B031E);

INCLUDE_ASM("nonmatchings/ata", func_0000349C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ata", func_000029DC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ata", func_00002E04);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_BDD30DEE);

INCLUDE_ASM("nonmatchings/ata", func_00002FAC);

INCLUDE_ASM("nonmatchings/ata", func_00003194);

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_FC7B031E);

INCLUDE_ASM("nonmatchings/ata", func_00003410);
#endif

INCLUDE_ASM("nonmatchings/ata", func_00003680);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ata", func_00003344);

INCLUDE_ASM("nonmatchings/ata", func_00003460);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ata", func_00002AE8);

INCLUDE_ASM("nonmatchings/ata", func_00002C84);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ata", func_000036FC);

INCLUDE_ASM("nonmatchings/ata", func_00003818);
#endif

INCLUDE_ASM("nonmatchings/ata", func_000039AC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ata", func_00002E58);
#endif

INCLUDE_ASM("nonmatchings/ata", func_00003A4C);

INCLUDE_ASM("nonmatchings/ata", func_00003CBC);

INCLUDE_ASM("nonmatchings/ata", func_00003D28);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ata", func_00003264);

INCLUDE_ASM("nonmatchings/ata", func_000032C8);

INCLUDE_ASM("nonmatchings/ata", func_000033D4);

s32 sceAta_driver_C10F87AB(void) {
    return D_000042E0;
}

s32 func_0000341C(void) {
    return sceKernelDeleteEventFlag(D_000042E0);
}

INCLUDE_ASM("nonmatchings/ata", func_00003440);

s32 func_000034CC(void) {
    sceKernelDisableSubIntr(5, 1);
    sceKernelDisableSubIntr(5, 2);
    sceKernelDisableSubIntr(5, 3);
    sceKernelDisableSubIntr(5, 9);
    sceKernelDisableSubIntr(5, 0xA);
    sceKernelReleaseSubIntrHandler(5, 1);
    sceKernelReleaseSubIntrHandler(5, 2);
    sceKernelReleaseSubIntrHandler(5, 3);
    sceKernelReleaseSubIntrHandler(5, 9);
    sceKernelReleaseSubIntrHandler(5, 0xA);
    InterruptManagerForKernel_D774BA45(5);
    InterruptManagerForKernel_F987B1F0(5);
    return 0;
}

INCLUDE_ASM("nonmatchings/ata", func_0000356C);

INCLUDE_ASM("nonmatchings/ata", func_0000358C);

s32 func_000036FC(void) {
    return 0;
}

s32 func_00003704(void) {
    return 0;
}

s32 func_0000370C(void) {
    return 0;
}

s32 func_00003714(void) {
    return 0;
}

s32 func_0000371C(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_BE07B3A7);

#if FW_VERSION < 282
void sceAta_driver_6FD8E2AB(void) {

}
#else
void sceAta_driver_6FD8E2AB(void) {
}
#endif

INCLUDE_ASM("nonmatchings/ata", sceAta_driver_7C6B31D8);

#if FW_VERSION == 271
void func_00003C58(void) {
    D_000042A0 = __builtin_allegrex_ext(KDebugForKernel_D636B827(), 0x10, 1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
void func_00003C58(void) {
    D_000042A0 = (KDebugForKernel_D636B827() >> 0x10) & 1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 sceAta_driver_DCC8A89E(void) {
    return D_000042A0 == 0;
}

s32 sceAta_driver_6FC42083(void) {
    return D_000042A0;
}

void func_00003CA0(u32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00004370 = 0;
    sceKernelCpuResumeIntr(temp_a0);
    sceKernelSetAlarm(arg0, (s32) &func_00003D3C, &D_00004370);
}

void func_00003CF4(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00004370 = 0;
    sceKernelCpuResumeIntr(temp_a0);
    sceKernelCancelAlarm(arg0);
}

s32 func_00003D30(void) {
    return D_00004370;
}

INCLUDE_ASM("nonmatchings/ata", func_00003D3C);
#endif

#if FW_VERSION >= 282
void func_00003FB0(void) {
    D_00004640 = KDebugForKernel_24C32559(0x10);
}

s32 sceAta_driver_DCC8A89E(void) {
    return D_00004640 == 0;
}

s32 sceAta_driver_6FC42083(void) {
    return D_00004640;
}

void func_00003FF0(u32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00004728 = 0;
    sceKernelCpuResumeIntr(temp_a0);
    sceKernelSetAlarm(arg0, (s32) func_0000408C, &D_00004728);
}

void func_00004044(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00004728 = 0;
    sceKernelCpuResumeIntr(temp_a0);
    sceKernelCancelAlarm(arg0);
}

s32 func_00004080(void) {
    return D_00004728;
}

s32 func_0000408C(s32 *arg0) {
    *arg0 = 1;
    return 0;
}
#endif
