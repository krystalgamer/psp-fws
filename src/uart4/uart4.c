/* cflags[152]: -O2 -frename-registers */
/* cflags[150]: -O2 -frename-registers */
#include "common.h"
#include "uart4_decls.h"

INCLUDE_ASM("nonmatchings/uart4", func_00000000);

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/uart4", func_00000088);

INCLUDE_ASM("nonmatchings/uart4", func_00000110);

INCLUDE_ASM("nonmatchings/uart4", func_00000154);
#endif

INCLUDE_ASM("nonmatchings/uart4", sceKernelUart4Init);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/uart4", sceKernelUart4End);
#endif

INCLUDE_ASM("nonmatchings/uart4", sceKernelUart4SetBps);

INCLUDE_ASM("nonmatchings/uart4", sceKernelUart4PostChar);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/uart4", sceKernelUart4SendChar);
#else
s32 sceKernelUart4SendChar(s8 arg0) {
    do {

    } while (sceKernelUart4PostChar((s32) arg0) < 0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/uart4", sceKernelUart4SendBytes);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/uart4", func_0000031C);
#else
INCLUDE_ASM("nonmatchings/uart4", func_00000458);

void func_00000480(void) {
    do {

    } while (func_00000458() < 0);
}
#endif

INCLUDE_ASM("nonmatchings/uart4", func_0000034C);

#if FW_VERSION < 201
void func_00000504(void) {
    sceKernelUart4Init();
}
#endif

#if FW_VERSION == 201
void func_00000398(void) {
    sceKernelUart4Init();
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/uart4", sceKernelUart4SendCharFix);
#else
void sceKernelUart4SendCharFix(s8 arg0) {
    sceKernelUart4SendChar(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/uart4", sceKernelUart4SendBytesFix);

INCLUDE_ASM("nonmatchings/uart4", sceKernelUart4ReceiveBytesFix);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/uart4", sceKernelUartStart);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/uart4", module_bootstart);
#else
s32 module_bootstart(void) {
    s32 temp_s0;

    temp_s0 = sceKernelCpuSuspendIntr();
    sceKernelUart4Init();
    sceKernelRegisterDebugPutchar(&func_00000000);
    sceKernelRegisterDebugWrite(&sceKernelUart4SendBytesFix);
    sceKernelRegisterDebugRead(&sceKernelUart4ReceiveBytesFix);
    sceKernelDebugEchoSet(1);
    sceKernelCpuResumeIntr(temp_s0);
    return 0;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/uart4", func_0000047C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/uart4", func_00000504_v152);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/uart4", func_00000504_v150);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/uart4", func_00000504);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/uart4", func_00000548);
#endif
