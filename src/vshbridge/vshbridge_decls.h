#ifndef VSHBRIDGE_DECLS_H
#define VSHBRIDGE_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00002D20;
extern M2C_UNK D_00003C00;

M2C_UNK KDebugForKernel_5282DD5E();
M2C_UNK KDebugForKernel_EE75658D();
void LflashFatfmt_B7A424A4(void);
M2C_UNK LoadExecForKernel_015DA036();
M2C_UNK LoadExecForKernel_1B97BDB3();
M2C_UNK LoadExecForKernel_28D0D249();
M2C_UNK LoadExecForKernel_31DF42BF();
M2C_UNK LoadExecForKernel_4D5C75BE();
M2C_UNK LoadExecForKernel_4F41E75E();
M2C_UNK LoadExecForKernel_62C459E1();
M2C_UNK LoadExecForKernel_70901231();
M2C_UNK LoadExecForKernel_71A1D738();
M2C_UNK LoadExecForKernel_7B7C47EF();
M2C_UNK LoadExecForKernel_821BE114();
M2C_UNK LoadExecForKernel_918782E8();
M2C_UNK LoadExecForKernel_A3D5E142();
M2C_UNK LoadExecForKernel_BB28E9B7();
M2C_UNK ModuleMgrForKernel_91B87FAE();
M2C_UNK ModuleMgrForKernel_A4370E7C();
M2C_UNK ModuleMgrForKernel_F0CAC59E();
void func_0000095C(void);
s32 func_000020F8(void);
M2C_UNK sceImpose_driver_9C8C6C81(M2C_UNK);
s32 sceKernelExitGame(void);
s32 sceKernelLoadExec(void *, void *);
M2C_UNK sceSysEventForKernel_D7D3FDCD(M2C_UNK *);
M2C_UNK sceUmd_4C952ACF(M2C_UNK);
void sceVshBridge_029EF6C9(void);
void sceVshBridge_04AEC74C(void);
void sceVshBridge_40716012(void);
void sceVshBridge_41C54ADF(void);
void sceVshBridge_68BE3316(void);
void sceVshBridge_83528906(void);
void sceVshBridge_8399A8AA(void);
void sceVshBridge_88BD8364(void);
void sceVshBridge_88DA81A5(void);
void sceVshBridge_97FB006F(void);
void sceVshBridge_98B4117E(void);
void sceVshBridge_9929DDA5(void);
void sceVshBridge_A5628F0D(void);
void sceVshBridge_B7C46DCA(void);
void sceVshBridge_C1D3AE95(void);
void sceVshBridge_C9626587(void);
void sceVshBridge_D08C1FBE(void);
void sceVshBridge_E614F45F(void);
void sceVshBridge_EEFB02BB(void *arg0, void *arg1);
void sceVshBridge_F35BFB7D(void);
void sceVshBridge_F4873F4D(void);
s32 sceVshBridge_driver_39B14120(void);
s32 sceVshBridge_driver_92A3B940(void);

#endif
