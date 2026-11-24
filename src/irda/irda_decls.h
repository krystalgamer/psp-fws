#ifndef IRDA_DECLS_H
#define IRDA_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_00001710;
extern M2C_UNK D_00001740;
extern s32 D_00001784;
extern s32 D_00001788;
extern M2C_UNK func_0000117C;

M2C_UNK IoFileMgrForKernel_8E982A74(M2C_UNK *);
s32 func_00000850(void);
s32 func_00000A1C(void *arg0);
s32 func_00000AF8(void);
s32 func_00000BAC(void);
void func_00000BB8(s32 arg0);
s32 func_00000BC4(void);
s32 func_00000BE8(void);
s32 func_00000C5C(void);
void func_00000C88(void);
void func_00000CA4(void);
s32 func_00000D6C(void);
s32 func_00000E94(void);
s32 module_reboot_before(void);
s32 module_start(void);
M2C_UNK sceGpio_driver_310F0CCF(M2C_UNK);
s32 sceKernelSetAlarm(u32, s32, void *);
M2C_UNK sceSysEventForKernel_D7D3FDCD(M2C_UNK *);
M2C_UNK sceSysreg_driver_7725CA08(M2C_UNK);
M2C_UNK sceSysreg_driver_BB823481(M2C_UNK);

#endif
