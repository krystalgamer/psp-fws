#ifndef UART4_DECLS_H
#define UART4_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK func_00000000;
extern M2C_UNK sceKernelUart4ReceiveBytesFix;
extern M2C_UNK sceKernelUart4SendBytesFix;

void func_00000398(void);
s32 func_00000458(void);
void func_00000480(void);
void func_00000504(void);
s32 module_bootstart(void);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
M2C_UNK sceKernelDebugEchoSet(M2C_UNK);
M2C_UNK sceKernelRegisterDebugPutchar(M2C_UNK *);
M2C_UNK sceKernelRegisterDebugRead(M2C_UNK *);
M2C_UNK sceKernelRegisterDebugWrite(M2C_UNK *);
M2C_UNK sceKernelUart4Init();
s32 sceKernelUart4PostChar(s32);
s32 sceKernelUart4SendChar(s8 arg0);
void sceKernelUart4SendCharFix(s8 arg0);

#endif
