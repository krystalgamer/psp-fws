#include "common.h"
#include "loadcore_decls.h"

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00000000);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00000048);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_000000A0);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00000154);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_0000019C);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_000001F0);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_000002A4);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00000444);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00000560);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_000007D0);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00000800);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00000820);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00000840);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_000009D4);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", syslib_D3744BE0);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00000DB8);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00000EF4);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_99A695F0);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_0000141C);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_9BAF90F6);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_0000175C);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_0E760DBA);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00001990);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_DA1B09AA);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_7E63F86D);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_B370DF29);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_5248A98F);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00002050);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_616FCCCD);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00002664);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_0000269C);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_000026EC);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_5873A31F);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_0B464512);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_0DE1F600);

void LoadCoreForKernel_C0913394(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0000175C(arg1, arg2, 1, M2C_FIELD(arg0, s32 *, 0xD4));
}

s32 LoadCoreForKernel_A8E2D53D(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_C99DD47A);

s32 func_000027F8(void) {
    return 0;
}

s32 LoadCoreForKernel_3BB7AC18(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00002808);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_000029D8);

void func_00002B40(void) {
    LoadCoreForKernel_D8779AC6();
    sceKernelDcacheWBinvAll();
}

void func_00002B64(void) {
    sceKernelIcacheInvalidateAll();
    sceKernelDcacheWritebackInvalidateAll();
}

void func_00002B88(void) {
    sceKernelDcacheWBinvAll();
}

void func_00002BA4(void) {
    sceKernelDcacheWritebackInvalidateAll();
}

void func_00002BC0(void) {
    LoadCoreForKernel_D8779AC6();
    sceKernelDcacheWBinvAll();
}

void func_00002BE4(s32 arg0, M2C_UNK arg1) {
    sceKernelIcacheInvalidateRange();
    sceKernelDcacheWritebackInvalidateRange(arg0, arg1);
}

void func_00002C20(void) {
    sceKernelDcacheWBinvAll();
}

void func_00002C3C(s32 arg0, s32 arg1) {
    sceKernelDcacheWritebackInvalidateRange(arg0, arg1);
}

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00002C58);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00002E40);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00003028);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_000030DC);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_ACE23476);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00003414);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00003450);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00003534);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_7BE1421C);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_BF983EF2);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_7068E6BA);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00003EAC);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_000042DC);

INCLUDE_RODATA("tmp/asm/282/loadcore/nonmatchings/loadcore", D_00007234);

INCLUDE_RODATA("tmp/asm/282/loadcore/nonmatchings/loadcore", D_0000724C);

INCLUDE_RODATA("tmp/asm/282/loadcore/nonmatchings/loadcore", D_00007268);

INCLUDE_RODATA("tmp/asm/282/loadcore/nonmatchings/loadcore", D_0000728C);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_B4D6FECC);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_54AB2675);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00004D04);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00004D14);

s32 func_00004D24(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00004D2C);

INCLUDE_RODATA("tmp/asm/282/loadcore/nonmatchings/loadcore", D_00007308);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00004F80);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_0000584C);

INCLUDE_RODATA("tmp/asm/282/loadcore/nonmatchings/loadcore", D_000073A0);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_CD0F3BAC);

INCLUDE_RODATA("tmp/asm/282/loadcore/nonmatchings/loadcore", D_000073C8);

INCLUDE_RODATA("tmp/asm/282/loadcore/nonmatchings/loadcore", D_000073D8);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_8D8A8ACE);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_74CF001A);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_929B5C69);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_05D915DB);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00005E20);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_52A86C21);

s32 LoadCoreForKernel_6B2371C2(void *arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = func_0000665C();
    temp_s0 = SysMemForKernel_8F20C4C0(M2C_FIELD(arg0, s32 *, 0x2C));
    func_00006688(temp_s1);
    return temp_s0;
}

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_AFF947D4);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_AE7C6E76);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_CF8A41B1);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_FB8AE27D);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_A6D40F56);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_CCE4A157);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00006280);

s32 func_0000630C(void *arg0) {
    SysMemForKernel_CE05CCB7();
    return M2C_FIELD(arg0, s32 *, 0xC);
}

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", sceKernelDcacheWBinvAll);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", LoadCoreForKernel_D8779AC6);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_000063B4);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00006434);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_0000646C);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_000064E8);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00006550);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00006584);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_000065EC);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_0000665C);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00006688);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_000066B0);

s32 func_000066E8(s32 arg0) {
    return arg0 == 0;
}

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_000066F0);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_000066FC);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_00006780);

INCLUDE_ASM("tmp/asm/282/loadcore/nonmatchings/loadcore", func_000067EC);
