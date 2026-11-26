#ifndef MSSTOR_DECLS_H
#define MSSTOR_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_000099D4_s {
    s32 unk0;
    u8 pad4[0x14];
    s32 unk18;
    u8 pad1C[0x8];
    s32 unk24;
    s32 unk28;
};

struct D_00009B54_s {
    u8 pad0[0x4E88];
    s32 unk4E88;
};

struct Unk_D_00009888 {
    u8 pad0[0x4];
    s32 (*unk4)(void *, s32, M2C_UNK, M2C_UNK);
    u8 pad8[0x8];
    M2C_UNK (*unk10)(void *);
    M2C_UNK (*unk14)(void *);
    M2C_UNK (*unk18)(void *);
};

struct Unk_D_00009B50 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x10];
    s32 unk18;
    s32 unk1C;
};

struct Unk_func_00001558_0 {
    u8 pad0[0x4E60];
    s32 unk4E60;
};

struct Unk_func_00004E2C_0 {
    u8 pad0[0x4];
    M2C_UNK * unk4;
};

struct Unk_func_000075DC_0 {
    u8 pad0[0x20];
    s32 unk20;
    s32 unk24;
};

struct Unk_func_00007798_0 {
    u8 pad0[0x4E84];
    s32 unk4E84;
};

struct Unk_func_000077A0_0 {
    u8 pad0[0x4E8C];
    s32 unk4E8C;
};

struct Unk_func_000077B8_0 {
    u8 pad0[0x4E8C];
    s32 unk4E8C;
};

extern s32 D_0000883C;
extern M2C_UNK D_00008934;
extern s32 D_00008AA4;
extern M2C_UNK D_00009248;
extern M2C_UNK D_00009264;
extern M2C_UNK D_00009284;
extern struct Unk_D_00009888 *D_00009888;
extern M2C_UNK D_000098DC;
extern struct D_000099D4_s D_000099D4;
extern struct Unk_D_00009B50 *D_00009B50;
extern struct D_00009B54_s D_00009B54;
extern M2C_UNK func_00006858;

M2C_UNK sceIoDelDrv(M2C_UNK *);
M2C_UNK bzero(M2C_UNK *, M2C_UNK);
s32 func_000001BC(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_00000220(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_00000288(void);
void func_000002B8(void);
void func_000002E8(void);
void func_00000318(s32 arg0, s32 arg1, s32 arg2);
s32 func_00000340(s32, s32, s32);
void func_00000518(s32 *arg0);
s32 func_000008B8(s32, s32, s32);
void func_000013E0(s32 *arg0, s32 arg1);
void func_0000140C(s32 *arg0, s32 arg1, s32 arg2);
void func_00001534(s32 *arg0, s32 arg1, s32 arg2);
s32 func_00001558(struct Unk_func_00001558_0 *arg0);
void func_00001560(s32 arg0);
s32 func_00001568(void);
void func_00001580(s32 arg0);
void func_00001590(s32 *arg0, s32 arg1);
void func_000017BC(s32 *arg0, s32 arg1);
void func_000017E8(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_00001808(s32 *arg0, s32 arg1);
void func_0000181C(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_00001834(s32 *arg0, s32 arg1, s32 arg2);
void func_00001850(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_00001884(s32 *arg0);
void func_000018AC(s32 *arg0, s32 arg1);
void func_00001958(s32 *arg0, s32 arg1, s32 arg2);
void func_00001B28(s32 *arg0, s32 arg1);
void func_00001B54(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_00001B88(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_00001BBC(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_000026A8(s32 arg0);
s32 func_000034CC(void *arg0, s32 arg1, s32 *arg2);
void func_00003C2C(s32 arg0);
void func_00003C4C(s32 arg0);
void func_00003E88(s32 arg0);
void func_00003EA8(s32 arg0);
s32 func_00004514(void);
void func_00004750(s32 arg0);
s32 func_000048A8(void *arg0);
s32 func_0000497C(void *arg0);
s32 func_00004990(void);
s32 func_000049E4(void);
s32 func_00004A04(void);
s32 func_00004A0C(void *arg0, s32 arg1, s32 arg2);
s32 func_00004A48(void);
s32 func_00004A98(s32, s32, s32);
s32 func_00004B14(void *arg0);
s32 func_00004C88(void *arg0);
s32 func_00004E2C(struct Unk_func_00004E2C_0 *arg0);
s32 func_00004E40(void);
s32 func_00004EC8(void);
s32 func_000075DC(struct Unk_func_000075DC_0 *arg0);
void func_00007798(struct Unk_func_00007798_0 *arg0);
void func_000077A0(struct Unk_func_000077A0_0 *arg0, s32 arg1);
s32 func_000077B8(struct Unk_func_000077B8_0 *arg0);
M2C_UNK func_000077C4(s32);
s32 sceKernelCreateEventFlag(void *, u32, u32, void *);
s32 sceKernelCreateSema(void *, u32, s32, s32, void *);
s32 sceKernelCreateThread(void *, s32, s32, u32, u32, void *);
s32 sceKernelDeleteEventFlag(s32);
s32 sceKernelDeleteSema(s32);
s32 sceKernelSetEventFlag(s32, u32);
s32 sceKernelStartThread(s32, u32, void *);
s32 sceKernelTerminateDeleteThread(s32);
s32 sceMScmRegisterCLD(M2C_UNK, M2C_UNK *);
s32 sceMScmWriteDataPIO(s32, M2C_UNK, M2C_UNK, M2C_UNK);
s32 sceMScmTPCReadShortData(s32, M2C_UNK, M2C_UNK, M2C_UNK);
s32 sceMScmTPCSetCmdHelper(s32, s32, M2C_UNK);
s32 sceMScmWriteMSRegHelper(s32, M2C_UNK, M2C_UNK, M2C_UNK);
s32 sceMScmResetHC(s32, M2C_UNK);
s32 sceMScmReadDataPIO(s32, M2C_UNK, M2C_UNK, M2C_UNK);
s32 sceMScmReadMSRegHelper(s32, M2C_UNK, M2C_UNK, M2C_UNK);
s32 sceMScmTPCWriteShortData(s32, M2C_UNK, M2C_UNK, M2C_UNK);
void sceMSstorEntry(void);
M2C_UNK sceMSstorRegisterCLDMSelf(M2C_UNK);

#endif
