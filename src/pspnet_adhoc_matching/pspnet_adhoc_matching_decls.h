#ifndef PSPNET_ADHOC_MATCHING_DECLS_H
#define PSPNET_ADHOC_MATCHING_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_0000113C_0 {
    u8 pad0[0x3C];
    u32 unk3C;
    u32 unk40;
};

struct Unk_func_00002188_0 {
    u8 pad0[0x38];
    s32 unk38;
};

struct Unk_func_000023E8_0 {
    u8 pad0[0x48];
    s32 unk48;
    void * unk4C;
};

struct Unk_func_00002420_0 {
    u8 pad0[0x14];
    u16 unk14;
    u8 pad16[0x22];
    s32 unk38;
    u8 pad3C[0xC];
    s32 unk48;
    void * unk4C;
};

struct Unk_func_0000256C_0 {
    u8 pad0[0x14];
    u16 unk14;
    u8 pad16[0x22];
    s32 unk38;
    u8 pad3C[0x28];
    s32 unk64;
    void * unk68;
};

struct Unk_func_00002648_0 {
    u8 pad0[0x64];
    s32 unk64;
    void * unk68;
};

struct Unk_func_00002794_0 {
    u8 pad0[0x38];
    s32 unk38;
    u8 pad3C[0x8];
    u32 unk44;
};

struct Unk_func_000029F8_0 {
    u8 pad0[0x2C];
    u32 unk2C;
};

struct Unk_func_000029F8_1 {
    u8 pad0[0x54];
    s32 unk54;
};

struct Unk_func_00002AF4_0 {
    u8 pad0[0x6C];
    s32 unk6C;
};

struct Unk_func_00002B68_0 {
    u8 pad0[0x54];
    s32 unk54;
};

struct Unk_func_00002BB8_0 {
    u8 pad0[0x6C];
    s32 unk6C;
};

struct Unk_func_00002C08_0 {
    u8 pad0[0x48];
    s32 unk48;
    void *unk4C;
    s32 unk50;
    s32 unk54;
    u8 pad58[0x8];
    u32 unk60;
};

struct Unk_func_00002C64_0 {
    u8 pad0[0x48];
    s32 unk48;
    void *unk4C;
    s32 unk50;
    s32 unk54;
    u8 pad58[0x8];
    u32 unk60;
};

struct Unk_func_00002CC0_0 {
    u8 pad0[0x40];
    u32 unk40;
    u8 pad44[0x14];
    s32 unk58;
    s32 unk5C;
    s32 unk60;
    u8 pad64[0x8];
    s32 unk6C;
};

extern s32 D_00003DB0;
extern s32 D_00003DB4;
extern s32 D_00003DC4;
extern s32 D_00003DC8;

void func_0000113C(struct Unk_func_0000113C_0 *arg0, s32 *arg1);
void func_00002188(struct Unk_func_00002188_0 *arg0);
void func_000023E8(struct Unk_func_000023E8_0 *arg0);
s32 func_00002420(struct Unk_func_00002420_0 *arg0);
s32 func_0000256C(struct Unk_func_0000256C_0 *arg0, s32 arg1);
void func_00002648(struct Unk_func_00002648_0 *arg0);
void func_00002794(struct Unk_func_00002794_0 *arg0, s32 *arg1);
void func_000029F8(struct Unk_func_000029F8_0 *arg0, struct Unk_func_000029F8_1 *arg1);
void func_00002AF4(struct Unk_func_00002AF4_0 *arg0, u32 arg1);
void func_00002B68(struct Unk_func_00002B68_0 *arg0);
void func_00002BB8(struct Unk_func_00002BB8_0 *arg0);
s32 func_00002C08(struct Unk_func_00002C08_0 *arg0);
s32 func_00002C64(struct Unk_func_00002C64_0 *arg0);
s32 func_00002CC0(struct Unk_func_00002CC0_0 *arg0);
void func_00002EE8(void);
s32 func_00002F24(void);
s32 func_00002F90(s32);
s32 func_00002FC4(void);
s32 func_00002FD4(void);
void func_000030C8(void);
void func_00003178(void *arg0);
s32 func_000031A0(void);
s32 sceKernelCancelAlarm(u32);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelDeleteMbx(u32);
s32 sceKernelDeleteSema(s32);
s32 sceKernelDeleteThread(u32);
s32 sceKernelDeleteVpl(u32);
s32 sceKernelFreeVpl(u32, void *);
s32 sceKernelSendMbx(u32, void *);
s32 sceKernelSetAlarm(u32, s32, void *);
s32 sceKernelWaitThreadEnd(u32, void *);
s32 sceNetAdhocPdpDelete(s32, s32);
s32 sceNetAdhocPdpSend(s32, void *, u32, void *, s32, u32, s32);
s32 sceNetAdhocSetSocketAlert(s32, s32);
s32 sceNetFreeThreadinfo(u32);
M2C_UNK sceNet_lib_57CC57DA(void *, M2C_UNK, M2C_UNK);

#endif
