#ifndef SYSMEM_DECLS_H
#define SYSMEM_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_0000F8C4_s {
    volatile s32 unk0;
    volatile s32 unk4;
    volatile s8 unk8;
    u8 pad9[0xF];
    volatile s8 unk18;
    u8 pad19[0x27];
    volatile s32 unk40;
    volatile s8 unk44;
    u8 pad45[0xF];
    volatile s32 unk54;
    volatile s32 unk58;
    volatile s32 unk5C;
    volatile s32 unk60;
    volatile s32 unk64;
};

struct Unk_SysMemForKernel_82D3CEE3_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00001318_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_00001478_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_000017D8_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_000017E0_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00004A60_0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000075EC_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0000769C_0 {
    u8 pad0[0x8];
    void * unk8;
};

extern M2C_UNK D_0000F390;
extern M2C_UNK D_0000F3C0;
extern M2C_UNK D_0000F3F0;
extern s32 D_0000F8B0;
extern s32 D_0000F8B4;
extern s32 D_0000F8B8;
extern M2C_UNK D_0000F8C0;
extern struct D_0000F8C4_s D_0000F8C4;
extern s32 D_0000F92C;
extern s32 D_0000F930;
extern s32 D_0000F934;
extern s32 D_0000FC38;
extern s32 D_0000FC3C;
extern s32 D_0000FC40;
extern s32 D_0000FC44;
extern s32 D_0000FC48;
extern s32 D_0000FC4C;
extern s32 D_0000FC50;
extern s32 D_0000FC54;
extern s32 D_0000FC58;
extern s32 D_0000FC90;
extern M2C_UNK D_0000FD88;
extern M2C_UNK D_0000FD8C;
extern s32 D_0000FD90;
extern M2C_UNK D_0000FD98;
extern M2C_UNK D_0000FDA4;
extern s32 D_0000FF24;

s32 KDebugForKernel_24C32559(u32 arg0);
s32 KDebugForKernel_333DCEC7(s32 arg0);
s32 KDebugForKernel_66253C4E(s32 arg0);
void KDebugForKernel_7CEB2C09(s32 arg0, s32 arg1);
s32 KDebugForKernel_9B868276(void);
s32 KDebugForKernel_9F8703E4(void);
s32 KDebugForKernel_A126F497(s32 arg0);
s32 KDebugForKernel_B7251823(void);
s32 KDebugForKernel_B9C643C9(void);
s32 KDebugForKernel_D636B827(void);
void KDebugForKernel_E146606D(s32 arg0);
s32 KDebugForKernel_E6554FDA(s32 arg0);
void KDebugForKernel_E7A3874D(s32 arg0);
s32 KDebugForKernel_E892D9A1(void);
s32 KDebugForKernel_FFD2F2B9(void);
void SysMemForKernel_101C3E59(s32 arg0);
s32 SysMemForKernel_452E3696(void);
M2C_UNK *SysMemForKernel_536AD5E1(void);
void SysMemForKernel_7B3E7441(void);
s32 SysMemForKernel_7ECBDBD9(void);
s32 SysMemForKernel_80F25772(s32 arg0, s32 arg1, s32 arg2);
s32 SysMemForKernel_82D3CEE3(struct Unk_SysMemForKernel_82D3CEE3_0 *arg0, s32 arg1);
s32 SysMemForKernel_8C0CC205(void);
s32 SysMemForKernel_960B888C(void);
s32 SysMemForKernel_A262FEF0(s32 *arg0);
s32 SysMemForKernel_BD5941B4(s32, s32, s32, s32);
M2C_UNK *SysMemForKernel_CD617A94(void);
s32 SysMemForKernel_CDA3A2F7(void);
s32 SysMemForKernel_DEC0A0D8(void);
void SysMemForKernel_E0058030(void);
s32 SysMemForKernel_EF2EE8C1(void);
s32 SysMemForKernel_EFF0C6DD(void);
s32 SysMemForKernel_FEFC8666(s32, s32, s32, s32, s32);
s32 SysMemUserForUser_3FC9AE6A(void);
s32 SysMemUserForUser_FC114573(void);
void func_00000724(void);
s32 func_00000980(s32, s32);
void func_00000F60(void);
s32 func_000011F4(void);
s32 func_00001200(void);
s32 func_00001318(struct Unk_func_00001318_0 *arg0);
s32 func_00001478(struct Unk_func_00001478_0 *arg0);
s32 func_000017D8(struct Unk_func_000017D8_0 *arg0);
s32 func_000017E0(struct Unk_func_000017E0_0 *arg0);
void func_0000373C(void);
s32 func_00004A60(struct Unk_func_00004A60_0 *arg0);
void func_00005430(u8 *arg0, u8 *arg1);
void func_00005850(void);
s32 func_0000623C(s32 arg0);
s32 func_000062BC(s32 arg0);
s32 func_000063B0(s32 arg0);
s32 func_00006424(s32 arg0);
s32 func_00006498(s32 arg0);
s32 func_000075EC(struct Unk_func_000075EC_0 *arg0);
s32 func_0000769C(struct Unk_func_0000769C_0 *arg0);
s32 func_00008160(void);
s32 func_0000AD04(s32 arg0, s32 arg1);
s32 func_0000C994(s32 arg0);
s32 sceSuspendForKernel_BDE686CD(s32 arg0);
s32 sceSysEventForKernel_68D55505(void);

#endif
