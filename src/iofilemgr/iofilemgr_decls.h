#ifndef IOFILEMGR_DECLS_H
#define IOFILEMGR_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_IoFileMgrForKernel_BD17474F_0 {
    u8 pad0[0x80];
    s32 unk80;
};

struct Unk_sceIoGetDevType_sp0 {
    u8 pad0[0xC];
    u8 unkC;
};

extern M2C_UNK D_00004CCC;
extern s32 D_00004CEC;
extern s32 D_00004E4C;
extern M2C_UNK D_0000563C;
extern s32 D_00005870;
extern M2C_UNK D_000060B4;
extern M2C_UNK D_000060D4;
extern s32 D_00006630;
extern s32 D_00006634;
extern s32 D_00006638;

s32 sceIoReopen(s32, s32, s32, s32);
s32 sceIoAddDrv(s32);
s32 IoFileMgrForKernel_BD17474F(struct Unk_IoFileMgrForKernel_BD17474F_0 *arg0);
s32 sceIoDelDrv(s32);
void sceIoGetAsyncStat(s32 arg0, s32 arg1, s32 arg2);
s32 fdgets(s32, s32);
s32 fdputc(s32, s32);
s32 sceKernelStdoutReopen(s32 arg0, s32 arg1, s32 arg2);
s32 sceKernelStderrReopen(s32 arg0, s32 arg1, s32 arg2);
s32 sceKernelStdioLseek(void);
s32 sceKernelStdioRead(void);
s32 sceKernelStdioOpen(void);
s32 sceKernelStdioClose(void);
s32 sceKernelStdioWrite(void);
void sceKernelStdioSendChar(void);
s32 sceKernelAllocHeapMemory(s32, M2C_UNK);
M2C_UNK sceKernelFreeHeapMemory(s32, s32);
M2C_UNK SysMemForKernel_CE05CCB7();
s32 func_00000000(void);
void func_00000094(void);
s32 func_0000015C(s32);
s32 func_00000704(s32, s32, s32, s32);
s32 func_00000AEC(s32, s32, s32);
s32 func_00000B78(void);
s32 func_00000B9C(void);
s32 func_00000C28(void);
s32 func_00000C30(void);
s32 func_00000C38(void *arg0);
s32 func_00000C50(void *arg0);
s32 func_00000D04(s32, s32);
s32 func_00000D24(s32, s32, s32, s32);
s32 func_000010A8(s32, s32, s32, s32);
s32 func_000011EC(s32, s32, s32, s32);
s32 func_000014D4(s32, s32, s32, s32, s32, s32, s32);
void func_0000184C(s32 arg0);
void func_00001968(s32 arg0);
s32 func_00001990(s32, s32, s32, s32, s32);
s32 func_00001AB0(s32, s32, s32);
s32 func_00001B50(void);
void func_00001B9C(s32 arg0);
s32 func_00001C6C(void);
void func_00001CB8(s32 arg0);
s32 func_00001DAC(s32, s32, s32, s32, s32);
s32 func_00002C48(void);
void func_00003180(s32 arg0);
void func_0000332C(s32 arg0);
void func_0000339C(s32 *arg0);
s32 func_000033DC(void);
s32 func_00003570(s32, s32, s32, s32);
void func_000036F0(s32 *arg0);
s32 func_00003748(s32, s32, s32);
s32 func_00003AD4(s32, s32, s32, s32);
s32 func_00003C34(s32, s32, s32, s32);
s32 func_00003CF8(void);
void func_00003D68(void);
s32 func_00003D94(s32, s32, s32, s32, s32, s32);
s32 func_00003F24(s32, s32, s32, s32, s32, s32, s32);
s32 func_00004114(s32, s32, s32);
s32 func_00004374(s32, s32, s32, s32);
s32 func_0000467C(void);
s32 func_0000557C(void *arg0);
s32 func_000055A4(void);
void gets(s32 arg0);
M2C_UNK memset(s32, M2C_UNK, M2C_UNK);
void module_reboot_before(void);
s32 sceIoChdir(void *arg0);
s32 sceIoChstat(void *arg0, void *arg1, u32 arg2);
s32 sceIoClose(u32 arg0);
s32 sceIoCloseAsync(u32 arg0);
s32 sceIoGetDevType(s32 arg0);
s32 sceIoGetstat(void *arg0, void *arg1);
s32 sceIoIoctl(u32 arg0, s32 arg1, void *arg2, u32 arg3, void *arg4, u32 arg5);
s32 sceIoIoctlAsync(u32 arg0, s32 arg1, void *arg2, u32 arg3, void *arg4, u32 arg5);
void sceIoLseek(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 sceIoLseek32(u32 arg0, s32 arg1, s32 arg2);
s32 sceIoLseek32Async(u32 arg0, s32 arg1, s32 arg2);
void sceIoLseekAsync(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 sceIoMkdir(void *arg0, s32 arg1);
s32 sceIoOpen(void *arg0, s32 arg1, s32 arg2);
s32 sceIoOpenAsync(void *arg0, s32 arg1, s32 arg2);
s32 sceIoPollAsync(u32 arg0, void *arg1);
s32 sceIoRead(u32 arg0, void *arg1, u32 arg2);
s32 sceIoReadAsync(u32 arg0, void *arg1, u32 arg2);
s32 sceIoRmdir(void *arg0);
s32 sceIoWaitAsync(u32 arg0, void *arg1);
s32 sceIoWaitAsyncCB(u32 arg0, void *arg1);
s32 sceIoWrite(u32 arg0, void *arg1, u32 arg2);
s32 sceIoWriteAsync(u32 arg0, void *arg1, u32 arg2);
s32 sceKernelRegisterStderrPipe(s32 arg0);
s32 sceKernelRegisterStdoutPipe(s32 arg0);
s32 sceKernelStderr(void);
s32 sceKernelStdin(void);
s32 sceKernelStdout(void);

#endif
