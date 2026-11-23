#ifndef UMDMAN_DECLS_H
#define UMDMAN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_00011A80;

void func_00000968(s32 arg0, s32 arg1);
s32 func_00001E94(void);
void func_00001EC0(void);
M2C_UNK *func_00006D30(void);
s32 func_00006D48(void);
s32 func_00006D50(void);
s32 func_00006D58(void);
s32 func_00006D6C(void);
s32 func_000072E0(void);
s32 func_000079A4(void);
s32 func_00007A30(s32, s32);
s32 func_00007B34(void);
s32 func_00007B48(void);
void func_00007C08(s32 arg0, s32 arg1);
void func_00007C5C(void);
s32 func_00007C78(void);
s32 func_00007F24(s32, s32);
s32 func_00008274(s32 arg0);
s32 func_000084A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_0000888C(void *arg0, u8 *arg1);
s32 func_00008958(void *arg0, void *arg1);
s32 func_00008CA0(void *arg0, void *arg1);
s32 func_00008D8C(void *arg0, void *arg1);
s32 func_00008EC4(void);
s32 func_0000A7EC(void);
s32 func_0000A8DC(void);
s32 func_0000A924(void);
s32 func_0000A96C(void);
void func_0000AD5C(void);
void func_0000AD78(void);
s32 func_0000B344(void);
void func_0000BBC8(void);
s32 func_0000CD24(void);
s32 func_0000E0C4(void);
void func_0000F4F8(void);
s32 func_0000FBE4(void);
void func_0000FD4C(s32 arg0);
s32 func_0000FD80(void);
M2C_UNK sceAta_driver_1C29566B();
M2C_UNK sceAta_driver_68DEA2FF();
s32 sceAta_driver_6FC42083();
M2C_UNK sceAta_driver_7F551D66();
s32 sceClockgen_driver_7FF82F6F();
M2C_UNK sceClockgen_driver_DBE5F283();
s32 sceGpio_driver_317D9D2C(M2C_UNK, M2C_UNK);
u32 sceGpio_driver_4250D44A();
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelDelayThread(u32);
M2C_UNK sceKernelDisableSubIntr(M2C_UNK, M2C_UNK);
s32 sceKernelReleaseSubIntrHandler(M2C_UNK, M2C_UNK);
s32 sceSyscon_driver_8A4519F5(M2C_UNK);
s32 sceSyscon_driver_8CBC7987(M2C_UNK, M2C_UNK);
void sceUmdMan_driver_4FB913A3(void);
s32 sceUmdMan_driver_552F671A(s32);
s32 sceUmdMan_driver_7F482409(void);

#endif
