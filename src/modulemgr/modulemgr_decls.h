#ifndef MODULEMGR_DECLS_H
#define MODULEMGR_DECLS_H

#include "common.h"
#include "m2c_macros.h"

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

void *LoadCoreForKernel_FB8AE27D();
s32 ModuleMgrForKernel_25E1F458(void);
s32 ModuleMgrForKernel_54D9E02E(void);
s32 ModuleMgrForKernel_61EC6AB0(void);
s32 ModuleMgrForKernel_74690AEB(void);
s32 ModuleMgrForKernel_F80F3C96(void);
void func_000004C0(struct Unk_func_000004C0_0 *arg0, struct Unk_func_000004C0_1 *arg1);
s32 func_0000552C(s32);
void module_reboot_before(void);
s32 sceKernelSuspendThread(u32);
s32 syslib_ADF12745(void);

#endif
