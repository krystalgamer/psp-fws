#ifndef IFHANDLE_DECLS_H
#define IFHANDLE_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_sceNetIfhandle_driver_16246B99_0 {
    u8 pad0[0x18];
    void * unk18;
    void * unk1C;
    s32 unk20;
};

struct Unk_sceNetIfhandle_driver_16246B99_1 {
    u8 pad0[0x4];
    void * unk4;
};

struct Unk_sceNetIfhandle_driver_C6D14282_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_sceNetIfhandle_driver_D5AD6DEA_0 {
    u8 pad0[0x4];
    s32 unk4;
};

extern s32 D_000034E8;
extern s32 D_000034EC;
extern s32 D_00003504;
extern s32 D_00003508;
extern s32 D_0000350C;
extern s32 D_00003510;
extern s32 D_00003548;
extern s32 D_0000354C;
extern s32 D_00003550;
extern s32 D_00003554;
extern s32 D_00003B28;
extern s32 D_00003B2C;
extern s32 D_000043C8;
extern s32 D_000043CC;
extern s32 D_000043D0;
extern s32 D_000043D4;

s32 func_00001330(void);
s32 func_000018BC(void);
s32 module_start(void);
s32 module_stop(void);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelCreateVpl(void *, s32, u32, u32, void *);
s32 sceKernelDeleteVpl(s32);
s32 sceNetIfhandle_driver_0542835F(s32 arg0, s32 arg1, s32 arg2);
s32 sceNetIfhandle_driver_0C391E9F(s32 arg0, u32 arg1);
void sceNetIfhandle_driver_0FB8AE0D(void);
void sceNetIfPrepend(struct Unk_sceNetIfhandle_driver_16246B99_0 *arg0, struct Unk_sceNetIfhandle_driver_16246B99_1 *arg1);
s32 sceNetIfhandle_driver_29ED84C5(void);
s32 sceNetIfhandle_driver_62B20015(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 sceNetSetIfhandleOpt(struct Unk_sceNetIfhandle_driver_C6D14282_0 *arg0, s32 arg1);
s32 sceNetGetIfhandleOpt(struct Unk_sceNetIfhandle_driver_D5AD6DEA_0 *arg0);

#endif
