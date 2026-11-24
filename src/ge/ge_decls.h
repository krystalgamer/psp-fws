#ifndef GE_DECLS_H
#define GE_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_00007AC0_s {
    u8 pad0[0x18];
    volatile s32 unk18;
    volatile s32 unk1C;
    volatile s32 unk20;
};

extern M2C_UNK D_00003ABC;
extern s32 D_00003B8C;
extern s32 D_00004500;
extern s32 D_00006240;
extern s32 D_00006A80;
extern u32 D_00006A84;
extern struct D_00007AC0_s D_00007AC0;
extern s32 D_00007AC8;
extern s32 D_00007FC0;

s32 SysMemForKernel_EF2EE8C1();
void func_00001350(void);
void func_00001790(s32 arg0);
void func_000017B8(s32 arg0);
s32 func_000017E0(s32, s32, s32, s32);
void func_00001E9C(s32 arg0);
void func_00001EC4(s32 arg0, s32 arg1, s32 arg2);
s32 func_00001EF0(void);
s32 func_000022E0(s32, s32, s32, s32, s32);
s32 func_00002990(s32, s32, s32, s32, s32);
s32 func_00004C44(void);
s32 func_00004C88(void);
void func_00004C9C(void);
s32 func_00005140(s32, s32, s32, s32, s32);
s32 module_start(void);
void *sceGeEdramGetAddr(void);
u32 sceGeEdramGetSize(void);
s32 sceGeListEnQueue(void *arg0, void *arg1, s32 arg2, void *arg3);
s32 sceGeListEnQueueHead(void *arg0, void *arg1, s32 arg2, void *arg3);
s32 sceGe_driver_71FCD1D6(void);
s32 sceGe_driver_9DA4A75F(s32 arg0);
s32 sceGe_driver_BAD6E1CA(s32 arg0);
s32 sceGe_driver_C576E897(void);
s32 sceKernelDeleteEventFlag(s32);

#endif
