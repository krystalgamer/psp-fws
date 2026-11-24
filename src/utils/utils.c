#include "common.h"
#include "utils_decls.h"

INCLUDE_ASM("nonmatchings/utils", sceKernelDcacheInvalidateRange);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/utils", sceKernelIcacheInvalidateRange);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/utils", func_0000005C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/utils", func_000000CC);

INCLUDE_ASM("nonmatchings/utils", func_0000011C);

INCLUDE_ASM("nonmatchings/utils", func_00000148);

INCLUDE_ASM("nonmatchings/utils", func_00000198);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", func_00000070);

INCLUDE_ASM("nonmatchings/utils", func_000000D4);

INCLUDE_ASM("nonmatchings/utils", func_0000011C);

INCLUDE_ASM("nonmatchings/utils", func_00000174);

INCLUDE_ASM("nonmatchings/utils", func_000001CC);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/utils", D_00003DE0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/utils", func_000001E8);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/utils", D_00003DF0);

INCLUDE_ASM("nonmatchings/utils", func_000002D0);

INCLUDE_ASM("nonmatchings/utils", func_000003F4);

INCLUDE_ASM("nonmatchings/utils", func_000004DC);

INCLUDE_ASM("nonmatchings/utils", func_000005E0);

INCLUDE_ASM("nonmatchings/utils", func_00000704);

INCLUDE_ASM("nonmatchings/utils", func_000007EC);

INCLUDE_ASM("nonmatchings/utils", func_000008F0);

INCLUDE_ASM("nonmatchings/utils", UtilsForKernel_80FE032E);

INCLUDE_ASM("nonmatchings/utils", func_00000AFC);

INCLUDE_ASM("nonmatchings/utils", func_00000BE4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/utils", func_00000CE8);

INCLUDE_ASM("nonmatchings/utils", func_00000D38);

INCLUDE_ASM("nonmatchings/utils", func_00000D88);

INCLUDE_ASM("nonmatchings/utils", func_00000DD8);

INCLUDE_ASM("nonmatchings/utils", func_00000E08);

INCLUDE_ASM("nonmatchings/utils", func_00000E38);

INCLUDE_ASM("nonmatchings/utils", func_00000E64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", func_00000CCC);

INCLUDE_ASM("nonmatchings/utils", func_00000D30);

INCLUDE_ASM("nonmatchings/utils", func_00000D94);

INCLUDE_ASM("nonmatchings/utils", func_00000DF8);

INCLUDE_ASM("nonmatchings/utils", func_00000E40);

INCLUDE_ASM("nonmatchings/utils", func_00000E88);

INCLUDE_ASM("nonmatchings/utils", func_00000ED0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/utils", func_00000F50);

INCLUDE_ASM("nonmatchings/utils", func_00000F84);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", func_00000F98);

INCLUDE_ASM("nonmatchings/utils", func_00001514);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/utils", func_000015AC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/utils", func_00001520);

INCLUDE_ASM("nonmatchings/utils", func_00001548);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsMd5BlockUpdate);

INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsMd5BlockResult);
#endif

#if FW_VERSION != 150
INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsMd5Digest);

INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsMd5BlockInit);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsMd5BlockUpdate);

INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsMd5BlockResult);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsMd5Digest);

INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsMd5BlockInit);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsSha1BlockUpdate);

INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsSha1BlockResult);
#endif

#if FW_VERSION != 150
INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsSha1Digest);

INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsSha1BlockInit);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsSha1BlockUpdate);

INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsSha1BlockResult);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsSha1Digest);

INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsSha1BlockInit);
#endif

INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsMt19937Init);

INCLUDE_ASM("nonmatchings/utils", sceKernelUtilsMt19937UInt);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/utils", UtilsForKernel_193D4036);
#endif

#if FW_VERSION == 100
void UtilsForKernel_193D4036(s32 arg0, s32 arg1) {
    D_00004704 = (D_00004704 & ~arg0) | arg1;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/utils", UtilsForKernel_95035FEF);
#endif

#if FW_VERSION == 100
void UtilsForKernel_95035FEF(s32 arg0, s32 arg1) {
    D_00004700 = (D_00004700 & ~arg0) | arg1;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/utils", sceKernelGetGPI);

INCLUDE_ASM("nonmatchings/utils", sceKernelSetGPO);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/utils", UtilsForKernel_7B7ED3FD);
#else
s32 UtilsForKernel_7B7ED3FD(s32 arg0, s32 arg1, s32 arg2) {
    D_00004764 = arg0;
    D_00004768 = arg1;
    D_0000476C = arg2;
    return 0;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/utils", UtilsForKernel_6151A7C3);
#else
s32 UtilsForKernel_6151A7C3(void) {
    D_00004764 = 0;
    D_00004768 = 0;
    D_0000476C = 0;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/utils", sceKernelLibcClock);

INCLUDE_ASM("nonmatchings/utils", sceKernelLibcTime);

INCLUDE_ASM("nonmatchings/utils", sceKernelLibcGettimeofday);

INCLUDE_ASM("nonmatchings/utils", UtilsForKernel_78934841);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utils", UtilsForKernel_B0E9C31F);

INCLUDE_ASM("nonmatchings/utils", UtilsForKernel_23FFC828);
#endif

#if FW_VERSION != 150
INCLUDE_ASM("nonmatchings/utils", UtilsForKernel_E0CE3E29);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/utils", UtilsForKernel_B0E9C31F);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/utils", UtilsForKernel_23FFC828);

INCLUDE_ASM("nonmatchings/utils", UtilsForKernel_E0CE3E29);
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

INCLUDE_ASM("nonmatchings/utils", sceKernelDcacheReadTag);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utils", func_00001538);

INCLUDE_ASM("nonmatchings/utils", func_00001560);

INCLUDE_ASM("nonmatchings/utils", sceKernelDcacheProbeRange);
#endif

INCLUDE_ASM("nonmatchings/utils", func_00001634);

INCLUDE_ASM("nonmatchings/utils", sceKernelIcacheInvalidateAll);

INCLUDE_ASM("nonmatchings/utils", func_00001680);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/utils", func_00002B3C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utils", sceKernelIcacheInvalidateRange);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utils", func_0000168C);
#endif

INCLUDE_ASM("nonmatchings/utils", func_0000175C);

INCLUDE_ASM("nonmatchings/utils", sceKernelIcacheProbe);

INCLUDE_ASM("nonmatchings/utils", func_000017B8);

INCLUDE_ASM("nonmatchings/utils", sceKernelIcacheReadTag);

#if FW_VERSION == 201
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

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utils", sceKernelGetGPI);

INCLUDE_ASM("nonmatchings/utils", sceKernelSetGPO);

INCLUDE_ASM("nonmatchings/utils", UtilsForKernel_193D4036);

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
