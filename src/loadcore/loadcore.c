/* cflags: -Os -frename-registers */
#include "common.h"
#include "loadcore_decls.h"

INCLUDE_ASM("nonmatchings/loadcore", func_00000000);

INCLUDE_ASM("nonmatchings/loadcore", func_00000048);

INCLUDE_ASM("nonmatchings/loadcore", func_000000A0);

INCLUDE_ASM("nonmatchings/loadcore", func_00000154);

INCLUDE_ASM("nonmatchings/loadcore", func_0000019C);

INCLUDE_ASM("nonmatchings/loadcore", func_000001F0);

INCLUDE_ASM("nonmatchings/loadcore", func_000002A4);

INCLUDE_ASM("nonmatchings/loadcore", func_00000444);

INCLUDE_ASM("nonmatchings/loadcore", func_00000560);

s32 func_000007D0(void) {
    KDebugForKernel_84F370BC("systable.c:%s: is called.\n", "UndefSyscall");
    return 0x80020001;
}

void func_00000800(s32 arg0, s32 arg1, s32 arg2) {
    func_00000840(arg0, arg1, 0, arg2);
}

void func_00000820(s32 arg0, s32 arg1) {
    func_00000840(arg0, arg1, 1, 0);
}

INCLUDE_ASM("nonmatchings/loadcore", func_00000840);

INCLUDE_ASM("nonmatchings/loadcore", func_000009D4);

INCLUDE_ASM("nonmatchings/loadcore", syslib_D3744BE0);

INCLUDE_ASM("nonmatchings/loadcore", func_00000DB8);

INCLUDE_ASM("nonmatchings/loadcore", func_00000EF4);

void LoadCoreForKernel_99A695F0(s32 arg0) {
    func_00000EF4(arg0, 0);
}

INCLUDE_ASM("nonmatchings/loadcore", func_0000141C);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_9BAF90F6);

INCLUDE_ASM("nonmatchings/loadcore", func_0000175C);

void LoadCoreForKernel_0E760DBA(s32 arg0, s32 arg1) {
    func_0000175C(arg0, arg1, 0, 0);
}

INCLUDE_ASM("nonmatchings/loadcore", func_00001990);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_DA1B09AA);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_7E63F86D);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_B370DF29);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_5248A98F);

INCLUDE_ASM("nonmatchings/loadcore", func_00002050);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_616FCCCD);

INCLUDE_ASM("nonmatchings/loadcore", func_00002664);

INCLUDE_ASM("nonmatchings/loadcore", func_0000269C);

INCLUDE_ASM("nonmatchings/loadcore", func_000026EC);

void LoadCoreForKernel_5873A31F(s32 arg0) {
    func_00000EF4(arg0, 1);
}

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_0B464512);

void LoadCoreForKernel_0DE1F600(s32 arg0, s32 arg1) {
    func_0000175C(arg0, arg1, 1, 0);
}

void LoadCoreForKernel_C0913394(struct Unk_LoadCoreForKernel_C0913394_0 *arg0, s32 arg1, s32 arg2) {
    func_0000175C(arg1, arg2, 1, arg0->unkD4);
}

s32 LoadCoreForKernel_A8E2D53D(void) {
    return 0;
}

M2C_UNK *LoadCoreForKernel_C99DD47A(void) {
    return &D_000097AC;
}

s32 func_000027F8(void) {
    return 0;
}

s32 LoadCoreForKernel_3BB7AC18(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/loadcore", func_00002808);

INCLUDE_ASM("nonmatchings/loadcore", func_000029D8);

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

void func_00002BE4(void *arg0, u32 arg1) {
    sceKernelIcacheInvalidateRange(arg0, arg1);
    sceKernelDcacheWritebackInvalidateRange(arg0, arg1);
}

void func_00002C20(void) {
    sceKernelDcacheWBinvAll();
}

void func_00002C3C(void *arg0, u32 arg1) {
    sceKernelDcacheWritebackInvalidateRange(arg0, arg1);
}

INCLUDE_ASM("nonmatchings/loadcore", func_00002C58);

INCLUDE_ASM("nonmatchings/loadcore", func_00002E40);

INCLUDE_ASM("nonmatchings/loadcore", func_00003028);

INCLUDE_ASM("nonmatchings/loadcore", func_000030DC);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_ACE23476);

INCLUDE_ASM("nonmatchings/loadcore", func_00003414);

INCLUDE_ASM("nonmatchings/loadcore", func_00003450);

INCLUDE_ASM("nonmatchings/loadcore", func_00003534);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_7BE1421C);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_BF983EF2);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_7068E6BA);

INCLUDE_ASM("nonmatchings/loadcore", func_00003EAC);

INCLUDE_ASM("nonmatchings/loadcore", func_000042DC);

INCLUDE_RODATA("nonmatchings/loadcore", D_00007234);

INCLUDE_RODATA("nonmatchings/loadcore", D_0000724C);

INCLUDE_RODATA("nonmatchings/loadcore", D_00007268);

INCLUDE_RODATA("nonmatchings/loadcore", D_0000728C);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_B4D6FECC);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_54AB2675);

s32 func_00004D04(s32 arg0) {
    D_000074B4 = arg0;
    return 0;
}

s32 func_00004D14(s32 arg0) {
    D_000074B8 = arg0;
    return 0;
}

s32 func_00004D24(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/loadcore", func_00004D2C);

INCLUDE_RODATA("nonmatchings/loadcore", D_00007308);

INCLUDE_ASM("nonmatchings/loadcore", func_00004F80);

INCLUDE_ASM("nonmatchings/loadcore", func_0000584C);

INCLUDE_RODATA("nonmatchings/loadcore", D_000073A0);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_CD0F3BAC);

INCLUDE_RODATA("nonmatchings/loadcore", D_000073C8);

INCLUDE_RODATA("nonmatchings/loadcore", D_000073D8);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_8D8A8ACE);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_74CF001A);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_929B5C69);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_05D915DB);

void func_00005E20(void) {
    SysMemForKernel_FEFC8666("SceModule", 0xD8, &D_000073A0, 0, &D_000077C4);
}

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_52A86C21);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_6B2371C2);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_AFF947D4);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_AE7C6E76);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_CF8A41B1);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_FB8AE27D);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_A6D40F56);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_CCE4A157);

INCLUDE_ASM("nonmatchings/loadcore", func_00006280);

s32 func_0000630C(struct Unk_func_0000630C_0 *arg0) {
    SysMemForKernel_CE05CCB7();
    return arg0->unkC;
}

INCLUDE_ASM("nonmatchings/loadcore", sceKernelDcacheWBinvAll);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_D8779AC6);

INCLUDE_ASM("nonmatchings/loadcore", func_000063B4);

u8 *func_00006434(u8 *arg0, u8 *arg1) {
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

INCLUDE_ASM("nonmatchings/loadcore", func_0000646C);

INCLUDE_ASM("nonmatchings/loadcore", func_000064E8);

INCLUDE_ASM("nonmatchings/loadcore", func_00006550);

INCLUDE_ASM("nonmatchings/loadcore", func_00006584);

INCLUDE_ASM("nonmatchings/loadcore", func_000065EC);

INCLUDE_ASM("nonmatchings/loadcore", func_0000665C);

INCLUDE_ASM("nonmatchings/loadcore", func_00006688);

INCLUDE_ASM("nonmatchings/loadcore", func_000066B0);

s32 func_000066E8(s32 arg0) {
    return arg0 == 0;
}

INCLUDE_ASM("nonmatchings/loadcore", func_000066F0);

INCLUDE_ASM("nonmatchings/loadcore", func_000066FC);

INCLUDE_ASM("nonmatchings/loadcore", func_00006780);

INCLUDE_ASM("nonmatchings/loadcore", func_000067EC);
