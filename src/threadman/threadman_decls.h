#ifndef THREADMAN_DECLS_H
#define THREADMAN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_00016C74_s {
    void * unk0;
    volatile s32 unk4;
    u8 pad8[0x410];
    volatile s32 unk418;
};

struct Unk_func_000004CC_0 {
    u8 pad0[0x20];
    s32 unk20;
    u8 pad24[0x14];
    s32 unk38;
    s32 unk3C;
    u8 pad40[0x14];
    s32 unk54;
};

struct Unk_func_000006C8_1 {
    u8 pad0[0x15];
    u8 unk15;
};

struct Unk_func_000008D0_1 {
    u8 pad0[0x15];
    u8 unk15;
};

struct Unk_func_0000261C_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0000275C_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00003CF8_0 {
    u8 pad0[0x38];
    s32 unk38;
};

struct Unk_func_00004B20_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00005C34_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00006D6C_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00007CFC_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00009B94_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00009BBC_1 {
    u8 pad0[0x15];
    u8 unk15;
};

struct Unk_func_0000ABD8_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0000BCAC_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0000F140_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0000F188_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0000F1D0_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0000F218_1 {
    u8 pad0[0x15];
    u8 unk15;
};

struct Unk_func_000127F8_0 {
    u8 pad0[0x78];
    void * unk78;
    u32 unk7C;
    u8 pad80[0x4];
    void * unk84;
    u32 unk88;
    void * unk8C;
    u8 pad90[0x48];
    s32 unkD8;
};

extern M2C_UNK D_00016414;
extern M2C_UNK D_00016630;
extern s32 D_00016664;
extern s32 D_00016690;
extern s32 D_000166F8;
extern s32 D_0001671C;
extern s32 D_00016754;
extern s32 D_00016778;
extern s32 D_000169E0;
extern struct D_00016C74_s D_00016C74;
extern s32 D_00016C78;
extern void *D_000172B4;
extern s32 D_000172B8;
extern M2C_UNK D_000172BC;
extern s32 D_000172C0;
extern s32 D_000172C4;
extern s32 D_000172C8;
extern s32 D_000172CC;
extern s32 D_000172D0;
extern s32 D_000172D4;
extern s32 D_000172F4;
extern s32 D_000173BC;

M2C_UNK SysMemForKernel_5367923C(s32, M2C_UNK);
M2C_UNK SysMemForKernel_AD09C397(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *);
M2C_UNK SysMemForKernel_CE05CCB7();
M2C_UNK SysMemForKernel_FEFC8666(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, void **);
s32 ThreadManForKernel_3AD875C3(s32, s32, s32);
s32 ThreadManForKernel_80CA77BA(s32 arg0);
void ThreadManForKernel_A249EAAE(s32 arg0);
s32 ThreadManForKernel_FCB5EB49(void);
s32 ThreadManForUser_0E927AED(void);
void ThreadManForUser_532A522E(void);
s32 func_0000022C(s32);
s32 func_00000448(s32 arg0, s32 arg1);
void func_000004CC(struct Unk_func_000004CC_0 *arg0);
void func_00000534(s32 arg0);
s32 func_00000554(void);
s32 func_000006C8(void *arg0, struct Unk_func_000006C8_1 *arg1);
s32 func_000008C8(void);
s32 func_000008D0(s32 arg0, struct Unk_func_000008D0_1 *arg1);
s32 func_000009F8(void);
s32 func_0000261C(struct Unk_func_0000261C_0 *arg0);
s32 func_0000275C(struct Unk_func_0000275C_0 *arg0);
void func_00003CF8(struct Unk_func_00003CF8_0 *arg0);
s32 func_00004B20(struct Unk_func_00004B20_0 *arg0);
s32 func_00004B48(void);
s32 func_00005C34(struct Unk_func_00005C34_0 *arg0);
s32 func_00005C5C(void);
s32 func_00006D6C(struct Unk_func_00006D6C_0 *arg0);
s32 func_00006D94(void);
s32 func_00007CFC(struct Unk_func_00007CFC_0 *arg0);
s32 func_00007D24(void);
s32 func_00009B94(struct Unk_func_00009B94_0 *arg0);
s32 func_00009BBC(s32 arg0, struct Unk_func_00009BBC_1 *arg1, s32 arg2, s32 arg3);
s32 func_0000ABD8(struct Unk_func_0000ABD8_0 *arg0);
s32 func_0000BCAC(struct Unk_func_0000BCAC_0 *arg0);
s32 func_0000EA04(s32, s32);
s32 func_0000F140(struct Unk_func_0000F140_0 *arg0);
s32 func_0000F168(void);
s32 func_0000F188(struct Unk_func_0000F188_0 *arg0);
s32 func_0000F1B0(void);
s32 func_0000F1D0(struct Unk_func_0000F1D0_0 *arg0);
s32 func_0000F1F8(void);
s32 func_0000F218(void *arg0, struct Unk_func_0000F218_1 *arg1);
s32 func_0000F264(void);
s32 func_0000FD6C(void);
void func_000127F8(struct Unk_func_000127F8_0 *arg0, s32 arg1);
s32 func_0001444C(void);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelExitDeleteThread(s32);
s32 sceKernelExitThread(s32);
M2C_UNK sceKernelFreePartitionMemory(s32, u8);
void * sceKernelMemset(void *, s32, u32);
s64 sceKernelUSec2SysClockWide(u32 arg0);

#endif
