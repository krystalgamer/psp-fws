#include "common.h"
#include "loadcorei_decls.h"

INCLUDE_ASM("nonmatchings/loadcorei", func_00000000);

INCLUDE_ASM("nonmatchings/loadcorei", func_00000048);

INCLUDE_ASM("nonmatchings/loadcorei", func_00000098);

INCLUDE_ASM("nonmatchings/loadcorei", func_0000010C);

INCLUDE_ASM("nonmatchings/loadcorei", func_00000154);

INCLUDE_ASM("nonmatchings/loadcorei", func_000001A0);

INCLUDE_ASM("nonmatchings/loadcorei", func_00000280);

INCLUDE_ASM("nonmatchings/loadcorei", func_000002CC);

s32 func_00000340(void) {
    Kprintf("systable.c:%s: is called.\n", "UndefSyscall");
    return 0x80020001;
}

INCLUDE_ASM("nonmatchings/loadcorei", func_00000370);

INCLUDE_ASM("nonmatchings/loadcorei", func_00000488);

INCLUDE_ASM("nonmatchings/loadcorei", func_00000570);

void func_00000674(s32 arg0, s32 arg1) {
    func_000008D0(arg0, arg1, 0);
}

void func_00000690(s32 arg0, s32 arg1) {
    func_000008D0(arg0, arg1, 1);
}

INCLUDE_ASM("nonmatchings/loadcorei", func_000006AC);

INCLUDE_ASM("nonmatchings/loadcorei", func_000008D0);

INCLUDE_ASM("nonmatchings/loadcorei", func_00000A7C);

void func_00000AAC(struct Unk_func_00000AAC_0 *arg0, struct Unk_func_00000AAC_1 *arg1) {
    func_00005BF8(arg0->unk4, arg1->unk4);
}

s32 func_00000ACC(struct Unk_func_00000ACC_0 *arg0, struct Unk_func_00000ACC_1 *arg1) {
    return arg0->unk8 - arg1->unk8;
}

s32 func_00000ADC(struct Unk_func_00000ADC_0 *arg0, struct Unk_func_00000ADC_1 *arg1) {
    return arg0->unk8 - arg1->unkC;
}

void func_00000AEC(struct Unk_func_00000AEC_0 *arg0, struct Unk_func_00000AEC_1 *arg1) {
    func_00005BF8(arg1->unk8, arg0->unk4);
}

s32 func_00000B10(struct Unk_func_00000B10_0 *arg0, struct Unk_func_00000B10_1 *arg1) {
    return ((u16) arg0->unk8 >> 8) - ((u16) arg1->unkC >> 8);
}

INCLUDE_ASM("nonmatchings/loadcorei", func_00000B28);

INCLUDE_ASM("nonmatchings/loadcorei", func_00000B58);

INCLUDE_ASM("nonmatchings/loadcorei", func_00000B98);

INCLUDE_ASM("nonmatchings/loadcorei", func_00000C08);

INCLUDE_ASM("nonmatchings/loadcorei", func_00000CC0);

INCLUDE_RODATA("nonmatchings/loadcorei", D_00006EE4);

INCLUDE_RODATA("nonmatchings/loadcorei", D_00006F04);

INCLUDE_RODATA("nonmatchings/loadcorei", D_00006F10);

INCLUDE_ASM("nonmatchings/loadcorei", module_bootstart);

INCLUDE_ASM("nonmatchings/loadcorei", func_00001138);

INCLUDE_ASM("nonmatchings/loadcorei", func_000012EC);

INCLUDE_ASM("nonmatchings/loadcorei", func_0000132C);

INCLUDE_ASM("nonmatchings/loadcorei", func_000013AC);

INCLUDE_ASM("nonmatchings/loadcorei", func_000014B0);

INCLUDE_ASM("nonmatchings/loadcorei", func_000014F8);

void sceKernelRegisterLibrary(s32 arg0) {
    func_000014F8(arg0, 0);
}

void sceKernelRegisterLibraryForUser(s32 arg0) {
    func_000014F8(arg0, 1);
}

INCLUDE_ASM("nonmatchings/loadcorei", func_00001888);

INCLUDE_ASM("nonmatchings/loadcorei", func_00001A00);

INCLUDE_ASM("nonmatchings/loadcorei", sceKernelReleaseLibrary);

INCLUDE_ASM("nonmatchings/loadcorei", sceKernelCanReleaseLibrary);

INCLUDE_ASM("nonmatchings/loadcorei", func_00001B6C);

void sceKernelLinkLibraryEntries(s32 arg0, s32 arg1) {
    func_00001B6C(arg0, arg1, 0);
}

void sceKernelLinkLibraryEntriesForUser(s32 arg0, s32 arg1) {
    func_00001B6C(arg0, arg1, 1);
}

INCLUDE_ASM("nonmatchings/loadcorei", func_00001D1C);

s32 sceKernelUnLinkLibraryEntries(u32 arg0, u32 arg1) {
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

M2C_UNK *sceKernelQueryLoadCoreCB(void) {
    return &D_0000967C;
}

s32 func_00001ECC(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/loadcorei", func_00001ED4);

INCLUDE_ASM("nonmatchings/loadcorei", func_00001F94);

INCLUDE_ASM("nonmatchings/loadcorei", func_00002144);

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

INCLUDE_ASM("nonmatchings/loadcorei", func_00002284);

INCLUDE_ASM("nonmatchings/loadcorei", sceKernelSetBootCallbackLevel);

s32 func_000029D8(s32 arg0) {
    D_00007FF0 = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/loadcorei", sceKernelCheckPspConfig);

void func_00002B24(struct Unk_func_00002B24_0 *arg0, s32 arg1) {
    if (arg1 == 0) {
        arg0->unk48 = 1;
        return;
    }
    arg0->unk48 = 0;
}

s32 func_00002B3C(struct Unk_func_00002B3C_0 *arg0) {
    return arg0->unk4 & 0x1E00;
}

INCLUDE_RODATA("nonmatchings/loadcorei", D_0000756C);

INCLUDE_RODATA("nonmatchings/loadcorei", D_00007598);

INCLUDE_RODATA("nonmatchings/loadcorei", D_000075C0);

INCLUDE_RODATA("nonmatchings/loadcorei", D_000075F8);

INCLUDE_ASM("nonmatchings/loadcorei", func_00002B48);

INCLUDE_ASM("nonmatchings/loadcorei", func_00003760);

s32 func_000039A8(struct Unk_func_000039A8_0 *arg0) {
    s32 var_a1;

    var_a1 = 0;
    if (arg0->unk0 == 0x4543537E) {
        var_a1 = arg0->unk4;
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/loadcorei", func_000039CC);

INCLUDE_ASM("nonmatchings/loadcorei", func_00003C00);

INCLUDE_RODATA("nonmatchings/loadcorei", D_000078B0);

INCLUDE_RODATA("nonmatchings/loadcorei", D_000078BC);

INCLUDE_RODATA("nonmatchings/loadcorei", D_000078C8);

INCLUDE_RODATA("nonmatchings/loadcorei", D_00007900);

INCLUDE_ASM("nonmatchings/loadcorei", sceKernelCheckExecFile);

INCLUDE_RODATA("nonmatchings/loadcorei", D_000079DC);

INCLUDE_RODATA("nonmatchings/loadcorei", D_000079FC);

INCLUDE_ASM("nonmatchings/loadcorei", sceKernelProbeExecutableObject);

INCLUDE_RODATA("nonmatchings/loadcorei", D_00007AD8);

INCLUDE_ASM("nonmatchings/loadcorei", sceKernelLoadExecutableObject);

INCLUDE_ASM("nonmatchings/loadcorei", func_00004324);

INCLUDE_ASM("nonmatchings/loadcorei", func_0000465C);

INCLUDE_ASM("nonmatchings/loadcorei", func_00004964);

INCLUDE_ASM("nonmatchings/loadcorei", sceKernelApplyElfRelSection);

INCLUDE_RODATA("nonmatchings/loadcorei", D_00007C7C);

INCLUDE_ASM("nonmatchings/loadcorei", sceKernelApplyPspRelSection);

INCLUDE_ASM("nonmatchings/loadcorei", func_000052A4);

INCLUDE_ASM("nonmatchings/loadcorei", func_00005324);

INCLUDE_ASM("nonmatchings/loadcorei", func_00005344);

s32 func_000053CC(struct Unk_func_000053CC_0 *arg0) {
    sceKernelCallUIDObjCommonFunction();
    return arg0->unkC;
}

INCLUDE_ASM("nonmatchings/loadcorei", func_000053F4);

INCLUDE_ASM("nonmatchings/loadcorei", func_00005478);

INCLUDE_ASM("nonmatchings/loadcorei", sceKernelModuleFromUID);

INCLUDE_ASM("nonmatchings/loadcorei", sceKernelCreateModule);

void sceKernelDeleteModule(struct Unk_LoadCoreForKernel_6B2371C2_0 *arg0) {
    sceKernelDeleteUID(arg0->unk2C);
}

INCLUDE_ASM("nonmatchings/loadcorei", func_00005660);

INCLUDE_ASM("nonmatchings/loadcorei", sceKernelModuleAssign);

INCLUDE_ASM("nonmatchings/loadcorei", sceKernelAllocModule);

void sceKernelFreeModule(struct Unk_LoadCoreForKernel_6B2371C2_0 *arg0) {
    sceKernelDeleteModule(arg0);
}

INCLUDE_ASM("nonmatchings/loadcorei", sceKernelRegisterModule);

INCLUDE_ASM("nonmatchings/loadcorei", sceKernelReleaseModule);

s32 sceKernelFindModuleByName(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = func_000061CC();
    temp_s0 = func_00005478(arg0);
    func_000061F8(temp_s1);
    return temp_s0;
}

INCLUDE_ASM("nonmatchings/loadcorei", sceKernelFindModuleByAddress);

INCLUDE_ASM("nonmatchings/loadcorei", sceKernelFindModuleByUID);

s32 sceKernelModuleCount(void) {
    return D_00009694;
}

INCLUDE_ASM("nonmatchings/loadcorei", sceKernelGetModuleList);

INCLUDE_ASM("nonmatchings/loadcorei", sceKernelDcacheWBinvAll);

INCLUDE_ASM("nonmatchings/loadcorei", sceKernelIcacheClearAll);

INCLUDE_ASM("nonmatchings/loadcorei", func_00005BF8);

INCLUDE_ASM("nonmatchings/loadcorei", func_00005CB0);

INCLUDE_ASM("nonmatchings/loadcorei", func_00005D2C);

INCLUDE_ASM("nonmatchings/loadcorei", func_00005D94);

INCLUDE_ASM("nonmatchings/loadcorei", func_00005DC8);

INCLUDE_ASM("nonmatchings/loadcorei", func_00005E30);

INCLUDE_ASM("nonmatchings/loadcorei", func_00005EA0);

INCLUDE_ASM("nonmatchings/loadcorei", func_00005F64);

INCLUDE_ASM("nonmatchings/loadcorei", func_00005F98);

INCLUDE_ASM("nonmatchings/loadcorei", func_00006118);

INCLUDE_ASM("nonmatchings/loadcorei", func_00006154);

INCLUDE_ASM("nonmatchings/loadcorei", func_00006190);

INCLUDE_ASM("nonmatchings/loadcorei", func_000061CC);

INCLUDE_ASM("nonmatchings/loadcorei", func_000061F8);

INCLUDE_ASM("nonmatchings/loadcorei", func_00006220);

s32 func_00006258(s32 arg0) {
    return arg0 == 0;
}

INCLUDE_ASM("nonmatchings/loadcorei", func_00006260);

INCLUDE_ASM("nonmatchings/loadcorei", func_00006270);

INCLUDE_ASM("nonmatchings/loadcorei", func_00006540);

INCLUDE_ASM("nonmatchings/loadcorei", func_0000655C);

INCLUDE_ASM("nonmatchings/loadcorei", func_000065E8);

INCLUDE_ASM("nonmatchings/loadcorei", func_00006674);

INCLUDE_ASM("nonmatchings/loadcorei", func_00006678);

INCLUDE_ASM("nonmatchings/loadcorei", func_00006790);

INCLUDE_ASM("nonmatchings/loadcorei", func_000068B0);

INCLUDE_ASM("nonmatchings/loadcorei", func_0000692C);

INCLUDE_RODATA("nonmatchings/loadcorei", D_00007F00);
