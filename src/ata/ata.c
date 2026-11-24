/* cflags: -O2 -frename-registers */
#include "common.h"
#include "ata_decls.h"

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_00000000);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_C8BC8B83);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_CDC50BF0);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_AC800B1D);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_D1E6E175);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_52D9A4CA);

INCLUDE_RODATA("tmp/asm/282/ata/nonmatchings/ata", D_00004488);

INCLUDE_RODATA("tmp/asm/282/ata/nonmatchings/ata", D_000044B8);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_6C58F096);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_C21318E6);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_3AA3FA39);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_1F05F48C);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_B6BED47E);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_84E14690);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_6E639701);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_00000D40);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_00000E3C);

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

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_00000FFC);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_A77C230B);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_6DE1C65F);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_BA09142A);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_C7B02795);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_EFE3C7FA);

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

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_638EEA14);

void sceAta_driver_B5982381(void) {
    D_000046A8.unk0 = 0;
    D_000046A8.unk4 = 0;
}

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_000019F0);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_EBB91566);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_ACCEE63F);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_B863FD83);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_1C8DA2FD);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_2AE26E08);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_9D98086E);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_689FCB7D);

M2C_UNK *sceAta_driver_FCF939D9(void) {
    return &D_000046A8;
}

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_C144826E);

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

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_ACFF7CB5);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_3A61BF97);

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

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", module_start);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_00001E3C);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_12805193);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_00002000);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_00002094);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_000020F4);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_000021D0);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_E3E1EED7);

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

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_4222D6F3);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_4D225674);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_7DE9E14A);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_0000238C);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_000023B4);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_000023C8);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_000023DC);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_00002408);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_76C0923D);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_00002450);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_F61EAFC0);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_00002494);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_000024EC);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_00002500);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_00002570);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_000025E4);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_0B53CAD8);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_010F750B);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_00002718);

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

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_000027A8);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_00002860);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_00002B0C);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_00002B90);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_00002C34);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_C74F04B7);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_00002E04);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_BDD30DEE);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_00002FAC);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_00003194);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_FC7B031E);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_00003410);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_00003680);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_000036FC);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_00003818);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_000039AC);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_00003A4C);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_00003CBC);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", func_00003D28);

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_BE07B3A7);

void sceAta_driver_6FD8E2AB(void) {
}

INCLUDE_ASM("tmp/asm/282/ata/nonmatchings/ata", sceAta_driver_7C6B31D8);

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
