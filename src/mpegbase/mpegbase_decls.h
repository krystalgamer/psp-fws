#ifndef MPEGBASE_DECLS_H
#define MPEGBASE_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_000020A0;
extern s32 D_00002710;
extern s32 D_00002740;

M2C_UNK func_00000C04();
M2C_UNK func_00000C54();
void func_00000C7C(void);
void func_00000CA4(void);
void func_00000CC8(void);
M2C_UNK func_000014C0();
M2C_UNK func_00001500();
void func_00001528(void);
void func_00001550(void);
void func_00001574(void);
M2C_UNK func_00001B98();
M2C_UNK func_00001BD4();
void func_00001BFC(void);
void func_00001C24(void);
void func_00001C48(void);
s32 module_stop(void);
s32 sceKernelPollSema(s32, s32);
s32 sceKernelSignalSema(s32, s32);
s32 sceKernelWaitSema(s32, s32, void *);
M2C_UNK sceMeWrapper_driver_3D5F109C(M2C_UNK);
s32 sceMpegBaseInit(void);

#endif
