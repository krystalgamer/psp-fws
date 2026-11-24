#include "common.h"
#include "uart4_decls.h"

INCLUDE_ASM("nonmatchings/uart4", func_00000000);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/uart4", func_00000088);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/uart4", func_00000110);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/uart4", func_00000154);
#endif

INCLUDE_ASM("nonmatchings/uart4", Uart4ForKernel_D00E3D06);

INCLUDE_ASM("nonmatchings/uart4", Uart4ForKernel_A68555F7);

INCLUDE_ASM("nonmatchings/uart4", Uart4ForKernel_C703109F);

#if FW_VERSION == 100
s32 Uart4ForKernel_C0BE3133(s8 arg0) {
    do {

    } while (Uart4ForKernel_C703109F((s32) arg0) < 0);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/uart4", Uart4ForKernel_C0BE3133);
#endif

INCLUDE_ASM("nonmatchings/uart4", Uart4ForKernel_D91079E3);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/uart4", func_00000458);
#endif

#if FW_VERSION == 100
void func_00000480(void) {
    do {

    } while (func_00000458() < 0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/uart4", func_0000034C);
#endif

#if FW_VERSION == 100
void func_00000504(void) {
    Uart4ForKernel_D00E3D06();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/uart4", func_0000031C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/uart4", func_0000034C);
#endif

#if FW_VERSION != 100
void func_00000398(void) {
    Uart4ForKernel_D00E3D06();
}
#endif

#if FW_VERSION == 100
void Uart4ForKernel_69BCBEF1(s8 arg0) {
    Uart4ForKernel_C0BE3133(arg0);
}
#else
INCLUDE_ASM("nonmatchings/uart4", Uart4ForKernel_69BCBEF1);
#endif

INCLUDE_ASM("nonmatchings/uart4", Uart4ForKernel_2518C2F3);

INCLUDE_ASM("nonmatchings/uart4", Uart4ForKernel_2FD96F62);

#if FW_VERSION == 100
s32 syslib_D3744BE0(void) {
    s32 temp_s0;

    temp_s0 = sceKernelCpuSuspendIntr();
    Uart4ForKernel_D00E3D06();
    KDebugForKernel_E146606D(&func_00000000);
    KDebugForKernel_66253C4E(&Uart4ForKernel_2518C2F3);
    KDebugForKernel_E6554FDA(&Uart4ForKernel_2FD96F62);
    KDebugForKernel_7D1C74F0(1);
    sceKernelCpuResumeIntr(temp_s0);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/uart4", syslib_D3744BE0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/uart4", func_0000047C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/uart4", func_00000504);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/uart4", func_00000548);
#endif
