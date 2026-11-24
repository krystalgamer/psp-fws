#include "common.h"
#include "utils_decls.h"

INCLUDE_ASM("nonmatchings/utils", sceKernelDcacheInvalidateRange);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", func_0000005C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", func_00000070);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", func_000000D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", func_0000011C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", func_00000174);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", func_000001CC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/utils", D_00003DE0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/utils", D_00003DF0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", func_000002D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", func_000003F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", func_000004DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", func_000005E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", func_00000704);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", func_000007EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", func_000008F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", UtilsForKernel_80FE032E);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", func_00000AFC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", func_00000BE4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", func_00000CCC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", func_00000D30);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", func_00000D94);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", func_00000DF8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", func_00000E40);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", func_00000E88);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", func_00000ED0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", func_00000F50);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", func_00000F84);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", func_00000F98);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", func_00001514);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", func_000015AC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/utils", sceKernelIcacheInvalidateRange);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsMd5BlockUpdate);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsMd5BlockResult);
#endif

INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsMd5Digest);

INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsMd5BlockInit);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsMd5BlockUpdate);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsMd5BlockResult);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsSha1BlockUpdate);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsSha1BlockResult);
#endif

INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsSha1Digest);

INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsSha1BlockInit);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsSha1BlockUpdate);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsSha1BlockResult);
#endif

INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsMt19937Init);

INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsMt19937UInt);

#if FW_VERSION == 100
void UtilsForKernel_193D4036(s32 arg0, s32 arg1) {
    D_00004704 = (D_00004704 & ~arg0) | arg1;
}
#endif

#if FW_VERSION == 100
void UtilsForKernel_95035FEF(s32 arg0, s32 arg1) {
    D_00004700 = (D_00004700 & ~arg0) | arg1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", sceKernelGetGPI);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", sceKernelSetGPO);
#endif

#if FW_VERSION == 100
s32 UtilsForKernel_7B7ED3FD(s32 arg0, s32 arg1, s32 arg2) {
    D_00004764 = arg0;
    D_00004768 = arg1;
    D_0000476C = arg2;
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/utils", UtilsForKernel_7B7ED3FD);
#endif

#if FW_VERSION == 100
s32 UtilsForKernel_6151A7C3(void) {
    D_00004764 = 0;
    D_00004768 = 0;
    D_0000476C = 0;
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/utils", UtilsForKernel_6151A7C3);
#endif

INCLUDE_ASM("nonmatchings/utils", sceKernelLibcClock);

INCLUDE_ASM("nonmatchings/utils", sceKernelLibcTime);

INCLUDE_ASM("nonmatchings/utils", sceKernelLibcGettimeofday);

INCLUDE_ASM("nonmatchings/utils", UtilsForKernel_78934841);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/utils", UtilsForKernel_B0E9C31F);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/utils", UtilsForKernel_23FFC828);
#endif

INCLUDE_ASM("nonmatchings/utils", UtilsForKernel_E0CE3E29);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", UtilsForKernel_B0E9C31F);
#endif

INCLUDE_ASM("nonmatchings/utils", UtilsForKernel_E0E6BA96);

INCLUDE_ASM("nonmatchings/utils", UtilsForKernel_8C1FBE04);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", UtilsForKernel_23FFC828);
#endif

INCLUDE_ASM("nonmatchings/utils", syslib_D3744BE0);

#if FW_VERSION == 100
s32 func_000026B4(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/utils", func_000010D8);

INCLUDE_ASM("nonmatchings/utils", sceKernelDcacheWritebackAll);

INCLUDE_ASM("nonmatchings/utils", func_00001158);

INCLUDE_ASM("nonmatchings/utils", sceKernelDcacheWritebackInvalidateAll);

INCLUDE_ASM("nonmatchings/utils", func_00001194);

INCLUDE_ASM("nonmatchings/utils", UtilsForKernel_864A9D72);

INCLUDE_ASM("nonmatchings/utils", func_000011E0);

INCLUDE_ASM("nonmatchings/utils", sceKernelDcacheWritebackRange);

INCLUDE_ASM("nonmatchings/utils", func_000012C4);

INCLUDE_ASM("nonmatchings/utils", sceKernelDcacheWritebackInvalidateRange);

INCLUDE_ASM("nonmatchings/utils", func_000013A8);

INCLUDE_ASM("nonmatchings/utils", func_000013B4);

INCLUDE_ASM("nonmatchings/utils", func_00001498);

INCLUDE_ASM("nonmatchings/utils", sceKernelDcacheProbe);

INCLUDE_ASM("nonmatchings/utils", func_000014F4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", sceKernelDcacheReadTag);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/utils", sceKernelDcacheReadTag);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/utils", func_00001538);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/utils", func_00001560);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/utils", sceKernelDcacheProbeRange);
#endif

INCLUDE_ASM("nonmatchings/utils", func_00001634);

INCLUDE_ASM("nonmatchings/utils", sceKernelIcacheInvalidateAll);

INCLUDE_ASM("nonmatchings/utils", func_00001680);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", sceKernelIcacheInvalidateRange);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/utils", func_0000168C);
#endif

INCLUDE_ASM("nonmatchings/utils", func_0000175C);

INCLUDE_ASM("nonmatchings/utils", sceKernelIcacheProbe);

INCLUDE_ASM("nonmatchings/utils", func_000017B8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", sceKernelIcacheReadTag);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/utils", sceKernelIcacheReadTag);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/utils", func_000017FC);
#endif

INCLUDE_ASM("nonmatchings/utils", func_00001824);

INCLUDE_ASM("nonmatchings/utils", func_00001830);

INCLUDE_ASM("nonmatchings/utils", func_000018D0);

INCLUDE_ASM("nonmatchings/utils", func_00001958);

INCLUDE_ASM("nonmatchings/utils", func_00001990);

INCLUDE_ASM("nonmatchings/utils", func_00001A08);

INCLUDE_ASM("nonmatchings/utils", func_00001B70);

INCLUDE_ASM("nonmatchings/utils", func_00001E10);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/utils", sceKernelGetGPI);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/utils", sceKernelSetGPO);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/utils", UtilsForKernel_193D4036);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/utils", UtilsForKernel_95035FEF);
#endif

INCLUDE_ASM("nonmatchings/utils", UtilsForKernel_E8DB3CE6);

INCLUDE_ASM("nonmatchings/utils", func_00002250);

INCLUDE_ASM("nonmatchings/utils", func_0000226C);

INCLUDE_ASM("nonmatchings/utils", func_000022F8);

INCLUDE_ASM("nonmatchings/utils", func_00002384);

INCLUDE_ASM("nonmatchings/utils", func_00002388);

INCLUDE_ASM("nonmatchings/utils", func_000024A0);

INCLUDE_RODATA("nonmatchings/utils", D_00002940);

INCLUDE_RODATA("nonmatchings/utils", D_00002A40);

INCLUDE_RODATA("nonmatchings/utils", D_00002A80);
