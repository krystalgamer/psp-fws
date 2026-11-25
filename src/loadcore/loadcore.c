/* cflags: -Os -frename-registers */
#include "common.h"
#include "loadcore_decls.h"

INCLUDE_ASM("nonmatchings/loadcore", func_00000000);

INCLUDE_ASM("nonmatchings/loadcore", func_00000048);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_00000098);

INCLUDE_ASM("nonmatchings/loadcore", func_0000010C);
#else
INCLUDE_ASM("nonmatchings/loadcore", func_000000A0);

INCLUDE_ASM("nonmatchings/loadcore", func_00000154);
#endif

INCLUDE_ASM("nonmatchings/loadcore", func_0000019C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadcore", func_000001A0);

INCLUDE_ASM("nonmatchings/loadcore", func_00000280);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_000002CC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_00000214);

INCLUDE_ASM("nonmatchings/loadcore", func_00000368);

INCLUDE_ASM("nonmatchings/loadcore", func_00000480);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadcore", func_00000340);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00000340(void) {
    KDebugForKernel_84F370BC("systable.c:%s: is called.\n", "UndefSyscall");
    return 0x80020001;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
void func_00000764(s32 arg0, s32 arg1, s32 arg2) {
    func_000007A4(arg0, arg1, 0, arg2);
}

void func_00000784(s32 arg0, s32 arg1) {
    func_000007A4(arg0, arg1, 1, 0);
}

INCLUDE_ASM("nonmatchings/loadcore", func_000007A4);

INCLUDE_ASM("nonmatchings/loadcore", func_00000934);

INCLUDE_ASM("nonmatchings/loadcore", func_00000B4C);

INCLUDE_RODATA("nonmatchings/loadcore", D_00006A40);

INCLUDE_RODATA("nonmatchings/loadcore", D_00006A60);

INCLUDE_RODATA("nonmatchings/loadcore", D_00006A6C);

INCLUDE_ASM("nonmatchings/loadcore", syslib_D3744BE0);

INCLUDE_ASM("nonmatchings/loadcore", func_000014F8);

void LoadCoreForKernel_99A695F0(s32 arg0) {
    func_000014F8(arg0, 0);
}

INCLUDE_ASM("nonmatchings/loadcore", func_00001224);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadcore", func_00000370);

INCLUDE_ASM("nonmatchings/loadcore", func_00000488);

INCLUDE_ASM("nonmatchings/loadcore", func_00000570);
#endif

#if FW_VERSION < 152
void func_00000674(s32 arg0, s32 arg1) {
    func_000008D0(arg0, arg1, 0);
}

void func_00000690(s32 arg0, s32 arg1) {
    func_000008D0(arg0, arg1, 1);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadcore", func_000006AC);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/loadcore", func_000008D0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/loadcore", func_00000898);

INCLUDE_ASM("nonmatchings/loadcore", syslib_D3744BE0);

INCLUDE_RODATA("nonmatchings/loadcore", D_000068A0);

INCLUDE_RODATA("nonmatchings/loadcore", D_000068AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadcore", func_00000A7C);

void func_00000AAC(void *arg0, void *arg1) {
    func_00005338(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg1, s32 *, 4));
}

INCLUDE_ASM("nonmatchings/loadcore", func_00000ACC);

INCLUDE_ASM("nonmatchings/loadcore", func_00000ADC);

INCLUDE_ASM("nonmatchings/loadcore", func_00000AEC);

INCLUDE_ASM("nonmatchings/loadcore", func_00000B10);

INCLUDE_ASM("nonmatchings/loadcore", func_00000B28);

INCLUDE_ASM("nonmatchings/loadcore", func_00000B58);

INCLUDE_ASM("nonmatchings/loadcore", func_00000B98);

INCLUDE_ASM("nonmatchings/loadcore", func_00000C08);

INCLUDE_ASM("nonmatchings/loadcore", func_00000CC0);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/loadcore", D_000065E4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/loadcore", D_00006604);

INCLUDE_RODATA("nonmatchings/loadcore", D_00006610);
#endif

#if FW_VERSION == 282
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
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/loadcore", syslib_D3744BE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadcore", func_00001138);

INCLUDE_ASM("nonmatchings/loadcore", func_000012EC);

INCLUDE_ASM("nonmatchings/loadcore", func_0000132C);

INCLUDE_ASM("nonmatchings/loadcore", func_000013AC);

INCLUDE_ASM("nonmatchings/loadcore", func_000014B0);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/loadcore", func_000014F8);

void LoadCoreForKernel_99A695F0(s32 arg0) {
    func_000014F8(arg0, 0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/loadcore", func_000010D4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_9BAF90F6);

INCLUDE_ASM("nonmatchings/loadcore", func_00001B6C);

void LoadCoreForKernel_0E760DBA(s32 arg0, s32 arg1) {
    func_00001B6C(arg0, arg1, 0);
}

INCLUDE_ASM("nonmatchings/loadcore", func_00001560);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_DA1B09AA);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_7E63F86D);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_B370DF29);

INCLUDE_ASM("nonmatchings/loadcore", func_00001B34);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/loadcore", func_00001770);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_616FCCCD);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
void func_00002220(s32 arg0) {
    SysMemForKernel_636C953B(func_00000B4C(), arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/loadcore", func_000020A0);
#endif

#if FW_VERSION < 282
void LoadCoreForKernel_5873A31F(s32 arg0) {
    func_000014F8(arg0, 1);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadcore", func_00001888);

INCLUDE_ASM("nonmatchings/loadcore", func_00001A00);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_0B464512);
#else
INCLUDE_ASM("nonmatchings/loadcore", func_00000DB8);

INCLUDE_ASM("nonmatchings/loadcore", func_00000EF4);

void LoadCoreForKernel_99A695F0(s32 arg0) {
    func_00000EF4(arg0, 0);
}

INCLUDE_ASM("nonmatchings/loadcore", func_0000141C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_9BAF90F6);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadcore", func_00001B6C);

void LoadCoreForKernel_0E760DBA(s32 arg0, s32 arg1) {
    func_00001B6C(arg0, arg1, 0);
}
#endif

#if FW_VERSION < 282
void LoadCoreForKernel_0DE1F600(s32 arg0, s32 arg1) {
    func_00001B6C(arg0, arg1, 1);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadcore", func_00001D1C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/loadcore", func_0000175C);

void LoadCoreForKernel_0E760DBA(s32 arg0, s32 arg1) {
    func_0000175C(arg0, arg1, 0, 0);
}

INCLUDE_ASM("nonmatchings/loadcore", func_00001990);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_DA1B09AA);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_C99DD47A);

s32 func_00001ECC(void) {
    return 0;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
s32 LoadCoreForKernel_3BB7AC18(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/loadcore", func_00002350);

INCLUDE_ASM("nonmatchings/loadcore", func_0000245C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/loadcore", func_00002854);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/loadcore", func_00002260);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_00002410);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/loadcore", func_00002B18);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/loadcore", func_00002528);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadcore", func_00001ED4);

INCLUDE_ASM("nonmatchings/loadcore", func_00001F94);

INCLUDE_ASM("nonmatchings/loadcore", func_00002144);

INCLUDE_ASM("nonmatchings/loadcore", func_00002204);

INCLUDE_ASM("nonmatchings/loadcore", func_00002284);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_7E63F86D);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_B370DF29);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_5248A98F);

INCLUDE_ASM("nonmatchings/loadcore", func_00002050);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_616FCCCD);
#endif

#if FW_VERSION == 282
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
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/loadcore", func_000029D8);
#endif

#if FW_VERSION == 282
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
#endif

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_ACE23476);

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_00002C10);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/loadcore", func_000028B4);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_00002AE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadcore", func_00002AA0);

INCLUDE_ASM("nonmatchings/loadcore", func_00002AB8);

INCLUDE_ASM("nonmatchings/loadcore", func_00002AC4);

INCLUDE_ASM("nonmatchings/loadcore", func_0000305C);

INCLUDE_ASM("nonmatchings/loadcore", func_0000326C);

INCLUDE_ASM("nonmatchings/loadcore", func_00003290);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/loadcore", func_000034C4);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/loadcore", D_00006CC0);

INCLUDE_RODATA("nonmatchings/loadcore", D_00006CCC);

INCLUDE_RODATA("nonmatchings/loadcore", D_00006CD8);

INCLUDE_RODATA("nonmatchings/loadcore", D_00006D10);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/loadcore", func_00003414);

INCLUDE_ASM("nonmatchings/loadcore", func_00003450);

INCLUDE_ASM("nonmatchings/loadcore", func_00003534);
#endif

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_7BE1421C);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/loadcore", D_00006D58);

INCLUDE_RODATA("nonmatchings/loadcore", D_00006D78);
#endif

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_BF983EF2);

#if FW_VERSION == 151
INCLUDE_ASM("nonmatchings/loadcore", func_000031EC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/loadcore", func_00003138);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/loadcore", D_00006E0C);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_7068E6BA);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_000035D0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/loadcore", func_00003D4C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/loadcore", func_000039E8);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/loadcore", D_000071C4);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/loadcore", D_00007104);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadcore", func_00003B40);

INCLUDE_ASM("nonmatchings/loadcore", func_00003E60);

INCLUDE_ASM("nonmatchings/loadcore", func_00004168);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/loadcore", func_00003EAC);

INCLUDE_ASM("nonmatchings/loadcore", func_000042DC);

INCLUDE_RODATA("nonmatchings/loadcore", D_00007234);

INCLUDE_RODATA("nonmatchings/loadcore", D_0000724C);

INCLUDE_RODATA("nonmatchings/loadcore", D_00007268);

INCLUDE_RODATA("nonmatchings/loadcore", D_0000728C);
#endif

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_B4D6FECC);

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/loadcore", D_00007304);
#endif

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_54AB2675);

#if FW_VERSION == 201
s32 func_000046C4(s32 arg0) {
    D_000079C0 = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000039F4(s32 arg0) {
    D_000075B4 = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
s32 func_00004404(void) {
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/loadcore", func_000046EC);

INCLUDE_ASM("nonmatchings/loadcore", func_00004944);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/loadcore", func_0000440C);

INCLUDE_ASM("nonmatchings/loadcore", func_00004630);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_7068E6BA);

INCLUDE_ASM("nonmatchings/loadcore", func_00003AA4);
#endif

#if FW_VERSION == 151
INCLUDE_ASM("nonmatchings/loadcore", func_00003F4C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/loadcore", func_00003E78);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/loadcore", func_00004210);

INCLUDE_ASM("nonmatchings/loadcore", func_00004490);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_CD0F3BAC);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_8D8A8ACE);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_929B5C69);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_05D915DB);
#endif

#if FW_VERSION == 201
void func_000054D0(void) {
    SysMemForKernel_FEFC8666("SceModule", 0xD4, &D_000079C8, 0, &D_000075B8);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/loadcore", func_00004F84);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/loadcore", D_000073F8);

INCLUDE_RODATA("nonmatchings/loadcore", D_00007418);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_52A86C21);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_6B2371C2);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_AFF947D4);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_AE7C6E76);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_74CF001A);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_CF8A41B1);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_FB8AE27D);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_CCE4A157);

INCLUDE_ASM("nonmatchings/loadcore", func_000054B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadcore", func_00004A00);

INCLUDE_ASM("nonmatchings/loadcore", func_00004A80);

INCLUDE_ASM("nonmatchings/loadcore", func_00004AA0);
#endif

#if FW_VERSION < 282
s32 func_00004B28(void *arg0) {
    SysMemForKernel_CE05CCB7();
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadcore", func_00004B50);

INCLUDE_ASM("nonmatchings/loadcore", func_00004BD4);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_F32A2940);
#endif

#if FW_VERSION == 282
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
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_CD0F3BAC);
#endif

#if FW_VERSION == 282
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
#endif

#if FW_VERSION == 100
void LoadCoreForKernel_6B2371C2(void *arg0) {
    SysMemForKernel_8F20C4C0(M2C_FIELD(arg0, s32 *, 0x2C));
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_6B2371C2);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadcore", func_00004DBC);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_7320D964);

s32 LoadCoreForKernel_44B292AB(s32 arg0) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = LoadCoreForKernel_CD0F3BAC();
    var_v0 = 0;
    if (temp_v0 != 0) {
        LoadCoreForKernel_7320D964(temp_v0, arg0);
        var_v0 = temp_v0;
    }
    return var_v0;
}

void LoadCoreForKernel_BD61D4D5(void *arg0) {
    LoadCoreForKernel_6B2371C2(arg0);
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_AFF947D4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_AE7C6E76);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_74CF001A);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_CF8A41B1);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_FB8AE27D);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_A6D40F56);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_CCE4A157);
#endif

#if FW_VERSION == 100
s32 LoadCoreForKernel_82CE54ED(void) {
    return D_00008914;
}

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_C0584F0C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/loadcore", func_00006280);

s32 func_0000630C(struct Unk_func_0000630C_0 *arg0) {
    SysMemForKernel_CE05CCB7();
    return arg0->unkC;
}
#endif

INCLUDE_ASM("nonmatchings/loadcore", sceKernelDcacheWBinvAll);

INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_D8779AC6);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_00005338);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
u8 *func_000057D0(u8 *arg0, u8 *arg1) {
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
#endif

#if FW_VERSION == 282
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
#endif

INCLUDE_ASM("nonmatchings/loadcore", func_0000646C);

INCLUDE_ASM("nonmatchings/loadcore", func_000064E8);

INCLUDE_ASM("nonmatchings/loadcore", func_00006550);

INCLUDE_ASM("nonmatchings/loadcore", func_00006584);

INCLUDE_ASM("nonmatchings/loadcore", func_000065EC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_000055E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadcore", func_000056A4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_000056D8);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/loadcore", func_00005858);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
s32 func_00005858(s32 arg0) {
    void *sp0;
    return (func_000056D8(arg0, 0, 0, 0, 0, &sp0) < 0) ? 0 : sp0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_00005B10);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/loadcore", func_00005894);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
s32 func_00005894(s32 arg0) {
    void *sp0;
    return (func_000056D8(arg0, 0, 0, &sp0, 0, 0) < 0) ? 0 : sp0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadcore", func_000058D0);
#endif

INCLUDE_ASM("nonmatchings/loadcore", func_0000665C);

INCLUDE_ASM("nonmatchings/loadcore", func_00006688);

INCLUDE_ASM("nonmatchings/loadcore", func_000066B0);

#if FW_VERSION < 282
s32 func_00005998(s32 arg0) {
    return arg0 == 0;
}
#else
s32 func_000066E8(s32 arg0) {
    return arg0 == 0;
}
#endif

INCLUDE_ASM("nonmatchings/loadcore", func_000066F0);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_00005C5C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_000059B0);

INCLUDE_ASM("nonmatchings/loadcore", func_00005C80);

INCLUDE_ASM("nonmatchings/loadcore", func_00005C9C);

INCLUDE_ASM("nonmatchings/loadcore", func_00005D28);

INCLUDE_ASM("nonmatchings/loadcore", func_00005DB4);

INCLUDE_ASM("nonmatchings/loadcore", func_00005DB8);

INCLUDE_ASM("nonmatchings/loadcore", func_00005ED0);

INCLUDE_ASM("nonmatchings/loadcore", func_00005FF0);

INCLUDE_ASM("nonmatchings/loadcore", func_0000606C);

INCLUDE_RODATA("nonmatchings/loadcore", D_00007180);
#else
INCLUDE_ASM("nonmatchings/loadcore", func_000066FC);

INCLUDE_ASM("nonmatchings/loadcore", func_00006780);

INCLUDE_ASM("nonmatchings/loadcore", func_000067EC);
#endif
