#ifndef REGISTRY_DECLS_H
#define REGISTRY_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_00003EE8_temp_v0 {
    u8 pad0[0x4];
    s8 unk4;
    s8 unk5;
    s8 unk6;
    s8 unk7;
};

struct Unk_func_00004024_temp_v0 {
    u8 pad0[0x4];
    s32 unk4;
};

extern s32 D_000066F0;
extern s32 D_0000674C;
extern M2C_UNK D_00006F8C;
extern s32 D_00006FB0;
extern s32 D_00006FC4;
extern s32 D_00006FC8;
extern s32 D_00006FCC;
extern s32 D_00006FD0;
extern s32 D_00006FD4;
extern s32 D_00006FD8;
extern s32 D_00006FDC;
extern s32 D_00007050;
extern s32 D_0000706C;
extern s32 D_00007070;

void *func_00000B6C();
s32 func_00001730(s32 arg0, s32 *arg1);
s32 func_00001874(s32 arg0, s32 *arg1);
void func_00001908(s32 arg0, M2C_UNK **arg1, M2C_UNK **arg2);
void func_00001A44(s32 arg0, M2C_UNK **arg1, M2C_UNK **arg2);
s32 func_00003A3C(void);
s32 func_00003A80(void);
void *func_00003EA4();
s32 func_00003EE8(void);
s32 func_00004024(void);
s32 func_00004058(void);
s32 func_00005F54(s32 arg0);
s32 func_000061B4(s32 arg0);
void func_00006228(void);
void func_000062E0(s32 arg0);
s32 func_000065E4(s32);
s32 func_00006674(s32 arg0);
s32 func_000067A0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4);
s32 func_00006828(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4);
s32 func_00006998(s32 arg0);
s32 func_000069A0(s32, s32);
void func_00006A0C(void);
void func_00006AC0(s32 arg0);
s32 func_00006EF0(s32 arg0);
s32 module_reboot_before(void);
s32 sceIoClose(s32);
s32 sceIoDevctl(void *, s32, void *, u32, void *, u32);
s32 sceIoRead(s32, void *, u32);
s32 sceIoWrite(s32, void *, u32);
s32 sceKernelCreateMutex(void *, u32, s32, void *);
s32 sceKernelDeleteMutex(s32);
M2C_UNK sceKernelDeleteVpl(s32);
M2C_UNK sceKernelFreeVpl(s32, s32);
s32 sceKernelLockMutex(s32, s32, void *);
s32 sceKernelWaitSema(s32, s32, void *);
s32 sceRegInit(void);
M2C_UNK sceRegExit();
s32 module_reboot_phase(s32 arg0);

#endif
