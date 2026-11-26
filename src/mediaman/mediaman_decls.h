#ifndef MEDIAMAN_DECLS_H
#define MEDIAMAN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_00000FA0;
extern s32 D_00000FD0;
extern s32 D_00000FD4;
extern s32 D_00000FD8;
extern s32 D_00000FDC;
extern s32 D_00001000;
extern s32 D_00001004;
extern s32 D_000012F8;
extern s32 D_0000132C;
extern M2C_UNK D_00002980;
extern s32 D_00002AE0;
extern s32 D_00002AF0;
extern s32 D_00002B00;
extern s32 D_00002B10;
extern s32 D_00002B30;
extern s32 D_00002B40;
extern s32 D_00002B50;
extern s32 D_00002B60;
extern s32 D_00002B70;
extern s32 D_00002B90;
extern M2C_UNK D_00002BC0;

s32 func_00000000(s32);
s32 func_00000138(void);
s32 func_0000042C(void);
void func_00001448(s32 arg0);
void func_00001524(s32 arg0);
void func_000018DC(s32 arg0);
s32 func_000018E8(void);
void func_000018F4(s32 arg0);
s32 func_00001928(void);
s32 func_00001934(void);
s32 func_00001940(void);
void func_00001C60(void);
s32 func_00001C98(void);
void func_00001CA4(void);
s32 func_00001CDC(void);
s32 module_start(void);
M2C_UNK sceGpio_driver_310F0CCF(M2C_UNK);
s32 sceGpio_driver_317D9D2C(M2C_UNK, M2C_UNK);
M2C_UNK sceGpio_driver_37C8DADC(M2C_UNK, M2C_UNK);
s32 sceGpio_driver_4250D44A();
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelDisableSubIntr(M2C_UNK, M2C_UNK);
s32 sceKernelEnableSubIntr(M2C_UNK, M2C_UNK);
s32 sceKernelSetEventFlag(s32, u32);
s32 sceUmdGetDiscInfo(s32 *arg0);
void sceUmdGetDriveStat(void);
s32 sceUmdUnRegisterUMDCallBack(s32 arg0);
s32 sceUmd_04D1AAD9(void);
void sceUmd_075F1E0B(s32 arg0);
s32 sceUmd_08709F2D(void);
s32 sceUmd_0F7E578A(void);
void sceUmd_1A2485D2(void);
void sceUmd_230666E3(u32 arg0);
s32 sceUmd_27A764A1(void);
void sceUmd_3925CBD8(s32 arg0);
void sceUmd_3BA4EC53(void);
s32 sceUmd_3D0DECD5(void);
void sceUmd_4C952ACF(s32 arg0);
s32 sceUmd_5469DC37(void);
s32 sceUmd_6A41ED25(void);
s32 sceUmd_725DFB14(void);
void sceUmd_7AA26C9A(void);
s32 sceUmd_7F38693E(s32 arg0, s32 arg1);
s32 sceUmd_7F40CC41(void);
void sceUmd_9B22AED7(s32 arg0);
s32 sceUmd_A140DEC2(void);
void sceUmd_AE53DC2D(s32 arg0);
void sceUmd_BBB5F05C(void);
s32 sceUmd_D01B2DC6(void);
M2C_UNK sceUmd_D45D1FE6();
s32 sceUmd_EB56097E(void);
s32 sceUmd_F8FD25E7(void);
s32 strcmp(s32, M2C_UNK *);

#endif
