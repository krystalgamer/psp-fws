#ifndef EMC_SM_DECLS_H
#define EMC_SM_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_00002930;
extern M2C_UNK D_00002970;
extern s32 D_00002FD0;
extern s32 D_00002FD4;
extern s32 D_00002FD8;

M2C_UNK InterruptManagerForKernel_F987B1F0(M2C_UNK);
s32 func_00000F18(s32 arg0);
s32 module_reboot_before(void);
s32 module_start(void);
s32 sceKernelDeleteEventFlag(s32);
s32 sceKernelDeleteSema(s32);
s32 sceNand_driver_0ADC8686(s32, s32, s32, s32, s32);
s32 sceNand_driver_0F9BBBBD(void);
s32 sceNand_driver_73A68408(void);
s32 sceNand_driver_766756EF(s32, s32, s32, s32, s32);
M2C_UNK sceNand_driver_A513BB12();
s32 sceNand_driver_AE4438C7(s32);
s32 sceNand_driver_B07C41D4(void);
void sceNand_driver_BADD5D46(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 sceNand_driver_C1376222(void);
void sceNand_driver_C478C1DE(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 sceNand_driver_CE9843E6(void);
void sceNand_driver_E05AE88D(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK sceSysEventForKernel_D7D3FDCD(M2C_UNK *);

#endif
