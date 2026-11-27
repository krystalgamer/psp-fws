#ifndef COMMON_UTIL_DECLS_H
#define COMMON_UTIL_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_sceVshCommonUtil_98E57F6D_0 {
    u8 unk0;
    u8 pad1[0x3];
    s32 unk4;
    s32 unk8;
    u8 padC[0x4];
    u8 unk10;
};

typedef void (*func_ptr)(void);

extern s32 D_000080C0;
extern s32 D_000080C4;
extern func_ptr D_000088E8[];
extern s32 D_00008BF0;
extern s32 D_00008BF4;
extern s32 D_00008BF8;
extern s32 D_00008BFC;
extern s32 D_00008FE4;
extern s32 D_00008FE8;
extern s32 D_00008FEC;
extern M2C_UNK D_0000ADD8;
extern M2C_UNK D_0000DBFC;
extern s32 D_0000E79C;
extern s32 D_0000E7A0;
extern s32 D_0000E7A4;
extern s32 D_0000E7A8;

M2C_UNK RebootLock_Lock();
M2C_UNK RebootLock_Unlock();
void _ZN3vsh10RebootLock4ExitEv(void);
void _ZN3vsh10RebootLock4InitEv(void);
void _ZN3vsh10RebootLock6RebootEv(void);
void _ZN3vsh10RebootLockC1Ev(void);
void _ZN3vsh10RebootLockD1Ev(void);
void _ZN3vsh9PowerLock10SetHandlerEPFiiES2_(s32 arg0, s32 arg1);
void _ZN3vsh9PowerLockC1Ev(void);
void _ZN3vsh9PowerLockD1Ev(s32 *arg0);
M2C_UNK func_00000000();
void func_00000978(void);
void func_00001140(void *arg0);
void func_000011A8(void);
s32 func_000011B8(s32);
s32 func_00001248(void);
s32 func_00001250(s32, s32, s32);
void func_000012C0(void);
void func_000012F8(void);
void func_00001D08(void);
M2C_UNK func_000083D0();
M2C_UNK func_00009F60();
s32 module_start(void);
s32 module_stop(void);
s32 sceIoClose(s32);
s32 sceKernelClearEventFlag(s32, u32);
s32 sceKernelCreateEventFlag(void *, u32, u32, void *);
s32 sceKernelDeleteEventFlag(s32);
s32 sceKernelPowerLock(s32);
s32 sceKernelPowerUnlock(s32);
s32 sceKernelResumeDispatchThread(s32);
s32 sceKernelSuspendDispatchThread(void);
s32 sceKernelWaitEventFlag(s32, u32, s32, void *, void *);
M2C_UNK scePowerCancelRequest();
M2C_UNK sceRegCloseCategory(s32);
M2C_UNK sceRegCloseRegistry(s32);
M2C_UNK sceRegFlushCategory(s32);
M2C_UNK sceRegFlushRegistry(s32);
s32 sceSystemFileFree(s32);
void sceVshCommonUtil_0587F20C(void);
void sceVshCommonUtil_0F553311(void *arg0);
void sceVshCommonUtil_107EDCD9(void);
void sceVshCommonUtil_1EBD43EA(void);
void sceVshCommonUtil_21EF453A(s32 arg0);
void sceVshCommonUtil_2EC7AF24(void);
void sceVshCommonUtil_50B05438(s32 arg0, s32 arg1);
void sceVshCommonUtil_622815DD(void);
void sceVshCommonUtil_8584376D(s32 arg0);
void sceVshCommonUtil_8BC15F89(void);
void sceVshCommonUtil_92DFBA5B(void);
void sceVshCommonUtil_9480072F(void);
void sceVshCommonUtil_951BC384(void);
void sceVshCommonUtil_98E57F6D(struct Unk_sceVshCommonUtil_98E57F6D_0 *arg0);
void sceVshCommonUtil_9E42444E(s32 arg0, s32 arg1, s32 arg2);
void sceVshCommonUtil_A2A69900(void);
M2C_UNK *sceVshCommonUtil_B55DCA45(void);
void sceVshCommonUtil_B9B916C5(void *arg0);
void sceVshCommonUtil_BBA70776(void);
void sceVshCommonUtil_DA88D006(s32 arg0, s32 arg1, s32 arg2);
void sceVshCommonUtil_E3761034(void);
void sceVshCommonUtil_E8297686(void *arg0);
void sceVshCommonUtil_E85C45FF(void *arg0);
s32 sceVshCommonUtil_EA163CDB(void);
void sceVshCommonUtil_F25CBB92(void);
void sceVshCommonUtil_F6567B66(void);
M2C_UNK sce_paf_private_printf(M2C_UNK *);

#endif
