#ifndef MSSTOR_DECLS_H
#define MSSTOR_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_00009248;
extern M2C_UNK D_00009264;
extern M2C_UNK D_000098DC;
extern M2C_UNK D_000099D4;
extern M2C_UNK D_00009B54;

M2C_UNK IoFileMgrForKernel_C7F35804(M2C_UNK *);
M2C_UNK bzero(M2C_UNK *, M2C_UNK);
s32 func_000008B8(s32, s32, s32);
s32 func_00001558(void *arg0);
void func_00001560(s32 arg0);
void func_00001580(s32 arg0);
void func_000017BC(s32 *arg0, s32 arg1);
void func_000017E8(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_0000181C(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_00001850(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_00001884(s32 *arg0);
void func_000018AC(s32 *arg0, s32 arg1);
void func_00001B28(s32 *arg0, s32 arg1);
void func_00001B54(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_00001B88(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_00001BBC(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_000026A8(s32 arg0);
s32 func_000034CC(void *arg0, s32 arg1, s32 *arg2);
void func_00003E88(s32 arg0);
void func_00003EA8(s32 arg0);
void func_00004750(s32 arg0);
s32 func_000049E4(void);
s32 func_00004A48(void);
s32 func_00004E2C(void *arg0);
s32 func_00004E40(void);
s32 func_00004EC8(void);
void func_00007798(void *arg0);
void func_000077A0(void *arg0, s32 arg1);
s32 func_000077B8(void *arg0);
M2C_UNK func_000077C4(s32);
s32 sceKernelDeleteEventFlag(s32);
s32 sceKernelDeleteSema(s32);
s32 sceKernelTerminateDeleteThread(s32);
s32 sceMScm_driver_12BD8FEC(M2C_UNK, M2C_UNK *);
s32 sceMScm_driver_21183216(s32, M2C_UNK, M2C_UNK, M2C_UNK);
s32 sceMScm_driver_36921225(s32, M2C_UNK, M2C_UNK, M2C_UNK);
s32 sceMScm_driver_3FFE76E5(s32, s32, M2C_UNK);
s32 sceMScm_driver_6C8AEF0B(s32, M2C_UNK, M2C_UNK, M2C_UNK);
s32 sceMScm_driver_AA67D87A(s32, M2C_UNK);
s32 sceMScm_driver_BE455B5D(s32, M2C_UNK, M2C_UNK, M2C_UNK);
s32 sceMScm_driver_CBB2BF6F(s32, M2C_UNK, M2C_UNK, M2C_UNK);
s32 sceMScm_driver_EF42A4A3(s32, M2C_UNK, M2C_UNK, M2C_UNK);
void sceMSstor_driver_6FC1E8AE(void);
M2C_UNK sceMSstor_driver_714782D6(M2C_UNK);

#endif
