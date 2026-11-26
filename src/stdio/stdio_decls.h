#ifndef STDIO_DECLS_H
#define STDIO_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_00000A28_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00000A40_0 {
    u8 pad0[0x4];
    s32 unk4;
};

extern s32 D_00001560;
extern s32 D_00001564;
extern s32 D_00001568;

s32 fdgets(s32, s32);
s32 fdputc(s32, s32);
s32 fdputs(s32, s32);
s32 func_00000428(s32, s32);
void func_000006D0(s32 arg0);
s32 func_000006EC(void);
s32 func_000006F8(void);
void func_00000704(void);
s32 func_0000070C(void);
s32 func_00000718(void);
s32 func_00000724(void);
void func_00000978(s32 arg0);
void func_000009AC(s32 arg0);
s32 func_00000A18(void);
s32 func_00000A20(void);
s32 func_00000A28(struct Unk_func_00000A28_0 *arg0);
s32 func_00000A40(struct Unk_func_00000A40_0 *arg0);
s32 func_00000AF0(void);
s32 func_00000AFC(s32, s32);
s32 func_00000B0C(s32, s32);
s32 func_00000C78(void);
void gets(s32 arg0);
void module_bootstart(void);
void putchar(s32 arg0);
void puts(s32 arg0);
s32 sceKernelRegisterStderrPipe(s32 arg0);
s32 sceKernelRegisterStdoutPipe(s32 arg0);
s32 sceKernelStderr(void);
s32 sceKernelStdin(void);
s32 sceKernelStdioClose(void);
s32 sceKernelStdioLseek(void);
s32 sceKernelStdioOpen(void);
s32 sceKernelStdioRead(void);
void sceKernelStdioSendChar(void);
s32 sceKernelStdioWrite(void);
s32 sceKernelStdout(void);

#endif
