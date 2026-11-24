#ifndef MODULEMGR_DECLS_H
#define MODULEMGR_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_ModuleMgrForKernel_54D9E02E_temp_v0 {
    u8 pad0[0x2C];
    s32 unk2C;
};

struct Unk_func_000004C0_0 {
    u8 pad0[0x2];
    u8 unk2;
    u8 unk3;
    u8 pad4[0x10];
    s32 unk14;
    s32 unk18;
    u8 pad1C[0x20];
    s32 unk3C;
    u8 pad40[0xC];
    s32 unk4C;
    s32 unk50;
    u8 pad54[0xC];
    s32 unk60;
};

struct Unk_func_000004C0_1 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
    u8 padC[0x4];
    u8 unk10;
    u8 unk11;
};

extern u32 D_00007160;

M2C_UNK LoadCoreForKernel_0DE1F600();
M2C_UNK LoadCoreForKernel_0E760DBA();
s32 LoadCoreForKernel_44B292AB(s32);
M2C_UNK LoadCoreForKernel_5873A31F();
s32 LoadCoreForKernel_6B2371C2(s32);
M2C_UNK LoadCoreForKernel_7068E6BA();
s32 LoadCoreForKernel_74CF001A(s32);
M2C_UNK LoadCoreForKernel_7BE1421C();
M2C_UNK LoadCoreForKernel_99A695F0();
s32 LoadCoreForKernel_AE7C6E76(s32);
s32 LoadCoreForKernel_BD61D4D5(s32);
M2C_UNK LoadCoreForKernel_BF983EF2();
s32 LoadCoreForKernel_CCE4A157(s32);
s32 LoadCoreForKernel_CD0F3BAC();
M2C_UNK LoadCoreForKernel_DA1B09AA();
s32 LoadCoreForKernel_F32A2940(s32);
void *LoadCoreForKernel_FB8AE27D();
s32 ModuleMgrForKernel_25E1F458(void);
s32 ModuleMgrForKernel_54D9E02E(void);
s32 ModuleMgrForKernel_61EC6AB0(void);
s32 ModuleMgrForKernel_74690AEB(void);
s32 ModuleMgrForKernel_F80F3C96(void);
s32 func_00000108(void);
s32 func_00000148(s32 arg0);
s32 func_00000190(s32 arg0);
s32 func_000001D8(s32 arg0);
s32 func_00000220(s32 arg0);
s32 func_00000268(s32 arg0);
s32 func_000002B0(s32 arg0);
s32 func_000002F8(s32 arg0);
void func_00000340(void);
void func_0000035C(void);
void func_00000378(void);
void func_00000394(void);
void func_000003B0(void);
void func_000003CC(void);
void func_000003E8(void);
void func_00000404(void);
void func_000004C0(struct Unk_func_000004C0_0 *arg0, struct Unk_func_000004C0_1 *arg1);
void func_00000594(void *arg0);
s32 func_0000552C(s32);
void module_reboot_before(void);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
M2C_UNK sceKernelFreePartitionMemory(s32);
s32 sceKernelSuspendThread(u32);
s32 syslib_ADF12745(void);

#endif
