#ifndef SYSREG_DECLS_H
#define SYSREG_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_000025C0;
extern M2C_UNK D_00002BD0;
extern M2C_UNK func_00001814;

M2C_UNK InterruptManagerForKernel_4D6E7305(M2C_UNK);
M2C_UNK InterruptManagerForKernel_58DD8978(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *);
M2C_UNK InterruptManagerForKernel_F987B1F0(M2C_UNK);
s32 func_000000B4(void);
s32 func_000000BC(void);
s32 func_000000C4(void);
s32 func_00001A68(s32, s32);
s32 module_reboot_before(void);
s32 module_start(void);
void sceKernelCpuResumeIntrWithSync(s32);
s32 sceKernelCpuSuspendIntr(void);
M2C_UNK sceSysEventForKernel_CD9E4BB5(M2C_UNK *);
M2C_UNK sceSysEventForKernel_D7D3FDCD(M2C_UNK *);
void sceSysreg_driver_1E9C3607(s32 arg0);
s32 sceSysreg_driver_25673620(void);
s32 sceSysreg_driver_4EE8E2C8(void);
s32 sceSysreg_driver_6879790B(void);
s32 sceSysreg_driver_692F31FF(s32 arg0);
s32 sceSysreg_driver_77DED992(void);
s32 sceSysreg_driver_AD7C4ACB(void);
void sceSysreg_driver_B627582E(s32 arg0);
s32 sceSysreg_driver_BB3623DF(void);
s32 sceSysreg_driver_D74D3AB6(void);
s32 sceSysreg_driver_F2DEAA14(void);

#endif
