#ifndef STDIO_DECLS_H
#define STDIO_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00001560;

M2C_UNK StdioForKernel_D2B2A2A7(M2C_UNK);
void StdioForUser_A46785C9(void);
s32 func_00000A18(void);
s32 func_00000A20(void);
M2C_UNK func_00000C78();
void getchar(void);
s32 sceKernelStdin(void);
void syslib_D3744BE0(void);

#endif
