#ifndef RINIT_DECLS_H
#define RINIT_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_00001AF8_1 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00007470_0 {
    u8 pad0[0x4C];
    s32 unk4C;
};

struct Unk_func_00007470_1 {
    void * unk0;
    s32 unk4;
};

struct Unk_func_000088F0_0 {
    u8 pad0[0xC];
    u16 unkC;
    s16 unkE;
    u8 pad10[0x40];
    s32 unk50;
};

struct Unk_func_00008958_0 {
    u8 pad0[0xC];
    u16 unkC;
    s16 unkE;
};

struct Unk_func_00008A4C_0 {
    u8 pad0[0xE];
    s16 unkE;
};

extern M2C_UNK D_0000BEBC;
extern s32 D_0000F138;
extern s32 D_0000F598;
extern s32 D_0000F5E0;
extern s32 D_0000F5E4;
extern s32 D_0000F5E8;
extern M2C_UNK func_00005694;

s32 func_00001140(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_000011E4(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_00001288(void);
s32 func_00001340(s32 arg0);
s32 func_00001520(s32, s32);
s32 func_00001530(void);
s32 func_000015AC(void);
void func_000015B4(void);
s32 func_000015D4(s32);
s32 func_000016B4(void);
s32 func_000016BC(void);
void func_000016C4(void);
void func_000016E0(void);
void func_000016FC(void);
s32 func_00001AF8(s32 arg0, struct Unk_func_00001AF8_1 *arg1);
void func_00005938(s32 arg0);
void func_00005958(void);
s32 func_00005DD4(s32, s32);
s32 func_000061C0(s32, s32);
s32 func_000062C8(s32, s32, s32);
M2C_UNK *func_00006368(void);
void func_00006374(s32 arg0, s32 arg1);
void func_00007340(void);
void func_0000737C(void);
s32 func_000073B8(s32, s32);
void func_00007470(struct Unk_func_00007470_0 *arg0, struct Unk_func_00007470_1 *arg1);
s32 func_000076CC(s32 arg0);
void func_00007804(s32 arg0, s32 arg1);
s32 func_00008894(s32 *arg0, s32 arg1);
s32 func_000088F0(struct Unk_func_000088F0_0 *arg0, s32 arg1, s32 arg2);
void func_00008958(struct Unk_func_00008958_0 *arg0, s32 arg1, s32 arg2);
void func_00008A4C(struct Unk_func_00008A4C_0 *arg0);
s32 func_00008BE4(s32, s32, s32, s32);
s32 func_00008D0C(s32, s32);
s32 func_00008D68(s32 *arg0, s32 arg1, s32 arg2);
s32 func_00008DCC(s32, s32, s32, s32);
s32 func_00008E34(s32, s32, s32, s32);
s32 sceIoClose(s32);
M2C_UNK sceIoOpen();
s32 sceIoRead(s32, M2C_UNK, M2C_UNK);
s32 sceIoWrite(s32, M2C_UNK, M2C_UNK);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
M2C_UNK sceKernelFreePartitionMemory(s32);
M2C_UNK sceKernelLibcClock();
M2C_UNK sceKernelLibcGettimeofday();
M2C_UNK sceKernelLibcTime();
s32 sceKernelStderr();
s32 sceKernelStdin();
s32 sceKernelStdout();

#endif
