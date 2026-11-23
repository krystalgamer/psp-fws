#include "common.h"
#include "loadcorei_decls.h"

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00000000);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00000048);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00000098);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_0000010C);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00000154);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_000001A0);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00000280);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_000002CC);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00000340);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00000370);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00000488);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00000570);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00000674);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00000690);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_000006AC);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_000008D0);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00000A7C);

void func_00000AAC(void *arg0, void *arg1) {
    func_00005BF8(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg1, s32 *, 4));
}

s32 func_00000ACC(void *arg0, void *arg1) {
    return M2C_FIELD(arg0, u16 *, 8) - M2C_FIELD(arg1, u16 *, 8);
}

s32 func_00000ADC(void *arg0, void *arg1) {
    return M2C_FIELD(arg0, u16 *, 8) - M2C_FIELD(arg1, u16 *, 0xC);
}

void func_00000AEC(void *arg0, void *arg1) {
    func_00005BF8(M2C_FIELD(arg1, s32 *, 8), M2C_FIELD(arg0, s32 *, 4));
}

s32 func_00000B10(void *arg0, void *arg1) {
    return ((u16) M2C_FIELD(arg0, u16 *, 8) >> 8) - ((u16) M2C_FIELD(arg1, u16 *, 0xC) >> 8);
}

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00000B28);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00000B58);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00000B98);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00000C08);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00000CC0);

INCLUDE_RODATA("tmp/asm/100/loadcorei/nonmatchings/loadcorei", D_00006EE4);

INCLUDE_RODATA("tmp/asm/100/loadcorei/nonmatchings/loadcorei", D_00006F04);

INCLUDE_RODATA("tmp/asm/100/loadcorei/nonmatchings/loadcorei", D_00006F10);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", syslib_D3744BE0);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00001138);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_000012EC);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_0000132C);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_000013AC);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_000014B0);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_000014F8);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", LoadCoreForKernel_99A695F0);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", LoadCoreForKernel_5873A31F);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00001888);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00001A00);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", LoadCoreForKernel_0B464512);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", LoadCoreForKernel_9BAF90F6);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00001B6C);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", LoadCoreForKernel_0E760DBA);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", LoadCoreForKernel_0DE1F600);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00001D1C);

s32 LoadCoreForKernel_DA1B09AA(u32 arg0, u32 arg1) {
    u32 temp_s1;
    u32 var_s0;

    temp_s1 = arg0 + ((arg1 >> 2) * 4);
    var_s0 = arg0;
    if (arg0 >= temp_s1) {

    } else {
        do {
            func_00001D1C((void *) var_s0);
            var_s0 += M2C_FIELD(var_s0, u8 *, 8) * 4;
        } while (var_s0 < temp_s1);
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", LoadCoreForKernel_C99DD47A);

s32 func_00001ECC(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00001ED4);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00001F94);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00002144);

void func_00002204(u32 arg0, u32 arg1, M2C_UNK arg2) {
    u32 temp_s1;
    u32 var_s0;

    temp_s1 = arg0 + ((arg1 >> 2) * 4);
    var_s0 = arg0;
    if (arg0 < temp_s1) {
        do {
            if (M2C_FIELD(var_s0, s16 *, 6) >= 0) {

            } else {
                func_00001F94(arg2, (void *) var_s0);
            }
            var_s0 += M2C_FIELD(var_s0, u8 *, 8) * 4;
        } while (var_s0 < temp_s1);
    }
}

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00002284);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", LoadCoreForKernel_616FCCCD);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_000029D8);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", LoadCoreForKernel_ACE23476);

void func_00002B24(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        M2C_FIELD(arg0, s32 *, 0x48) = 1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
}

s32 func_00002B3C(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 4) & 0x1E00;
}

INCLUDE_RODATA("tmp/asm/100/loadcorei/nonmatchings/loadcorei", D_0000756C);

INCLUDE_RODATA("tmp/asm/100/loadcorei/nonmatchings/loadcorei", D_00007598);

INCLUDE_RODATA("tmp/asm/100/loadcorei/nonmatchings/loadcorei", D_000075C0);

INCLUDE_RODATA("tmp/asm/100/loadcorei/nonmatchings/loadcorei", D_000075F8);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00002B48);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00003760);

s32 func_000039A8(void *arg0) {
    s32 var_a1;

    var_a1 = 0;
    if (M2C_FIELD(arg0, s32 *, 0) == 0x4543537E) {
        var_a1 = M2C_FIELD(arg0, s32 *, 4);
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_000039CC);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00003C00);

INCLUDE_RODATA("tmp/asm/100/loadcorei/nonmatchings/loadcorei", D_000078B0);

INCLUDE_RODATA("tmp/asm/100/loadcorei/nonmatchings/loadcorei", D_000078BC);

INCLUDE_RODATA("tmp/asm/100/loadcorei/nonmatchings/loadcorei", D_000078C8);

INCLUDE_RODATA("tmp/asm/100/loadcorei/nonmatchings/loadcorei", D_00007900);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", LoadCoreForKernel_7BE1421C);

INCLUDE_RODATA("tmp/asm/100/loadcorei/nonmatchings/loadcorei", D_000079DC);

INCLUDE_RODATA("tmp/asm/100/loadcorei/nonmatchings/loadcorei", D_000079FC);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", LoadCoreForKernel_BF983EF2);

INCLUDE_RODATA("tmp/asm/100/loadcorei/nonmatchings/loadcorei", D_00007AD8);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", LoadCoreForKernel_7068E6BA);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00004324);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_0000465C);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00004964);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", LoadCoreForKernel_B4D6FECC);

INCLUDE_RODATA("tmp/asm/100/loadcorei/nonmatchings/loadcorei", D_00007C7C);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", LoadCoreForKernel_54AB2675);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_000052A4);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00005324);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00005344);

s32 func_000053CC(void *arg0) {
    SysMemForKernel_CE05CCB7();
    return M2C_FIELD(arg0, s32 *, 0xC);
}

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_000053F4);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00005478);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", LoadCoreForKernel_F32A2940);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", LoadCoreForKernel_CD0F3BAC);

void LoadCoreForKernel_6B2371C2(void *arg0) {
    SysMemForKernel_8F20C4C0(M2C_FIELD(arg0, s32 *, 0x2C));
}

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00005660);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", LoadCoreForKernel_7320D964);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", LoadCoreForKernel_44B292AB);

void LoadCoreForKernel_BD61D4D5(void *arg0) {
    LoadCoreForKernel_6B2371C2(arg0);
}

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", LoadCoreForKernel_AE7C6E76);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", LoadCoreForKernel_74CF001A);

s32 LoadCoreForKernel_CF8A41B1(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = func_000061CC();
    temp_s0 = func_00005478(arg0);
    func_000061F8(temp_s1);
    return temp_s0;
}

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", LoadCoreForKernel_FB8AE27D);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", LoadCoreForKernel_CCE4A157);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", LoadCoreForKernel_82CE54ED);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", LoadCoreForKernel_C0584F0C);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", sceKernelDcacheWBinvAll);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", LoadCoreForKernel_D8779AC6);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00005BF8);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00005CB0);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00005D2C);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00005D94);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00005DC8);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00005E30);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00005EA0);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00005F64);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00005F98);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00006118);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00006154);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00006190);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_000061CC);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_000061F8);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00006220);

s32 func_00006258(s32 arg0) {
    return arg0 == 0;
}

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00006260);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00006270);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00006540);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_0000655C);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_000065E8);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00006674);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00006678);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_00006790);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_000068B0);

INCLUDE_ASM("tmp/asm/100/loadcorei/nonmatchings/loadcorei", func_0000692C);

INCLUDE_RODATA("tmp/asm/100/loadcorei/nonmatchings/loadcorei", D_00007F00);
