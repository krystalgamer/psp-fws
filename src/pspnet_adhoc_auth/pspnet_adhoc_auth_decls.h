#ifndef PSPNET_ADHOC_AUTH_DECLS_H
#define PSPNET_ADHOC_AUTH_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_Unk_func_00003AA8_0_0 {
    u8 pad0[0x4];
    u32 unk4;
};

struct Unk_Unk_func_00003B00_0_0 {
    u8 pad0[0x4];
    u32 unk4;
};

struct Unk_Unk_func_00003B58_0_0 {
    u8 pad0[0x4];
    u32 unk4;
};

struct Unk_func_00003A54_var_v1 {
    u8 pad0[0x4];
    u32 unk4;
    u8 pad8[0x4];
    s32 unkC;
    u8 pad10[0xB0];
    s32 unkC0;
};

struct Unk_func_00003AA8_0 {
    struct Unk_Unk_func_00003AA8_0_0 *unk0;
    struct Unk_func_00003AA8_var_v1 *unk4;
};

struct Unk_func_00003AA8_var_v1 {
    u8 pad0[0x4E0];
    s32 unk4E0;
    u8 pad4E4[0xC];
    s32 unk4F0;
};

struct Unk_func_00003B00_0 {
    struct Unk_Unk_func_00003B00_0_0 *unk0;
    struct Unk_func_00003B00_var_v1 *unk4;
};

struct Unk_func_00003B00_var_v1 {
    u8 pad0[0x4E8];
    s32 unk4E8;
    u8 pad4EC[0x4];
    s32 unk4F0;
};

struct Unk_func_00003B58_0 {
    struct Unk_Unk_func_00003B58_0_0 *unk0;
    struct Unk_func_00003B58_var_v1 *unk4;
};

struct Unk_func_00003B58_var_v1 {
    u8 pad0[0x4E4];
    s32 unk4E4;
    u8 pad4E8[0x8];
    s32 unk4F0;
};

extern s32 D_00003FE0;
extern s32 D_00003FE4;
extern s32 D_00003FF0;
extern s32 D_00004498;
extern s32 D_0000449C;
extern s32 D_00004600;
extern s32 D_00004604;
extern s32 D_00004608;
extern s32 D_00004610;
extern s32 D_00004784;
extern M2C_UNK D_00004788;

s32 func_000011F0(void);
s32 func_000011F8(void);
s32 func_00001290(void);
s32 func_00001578(void);
s32 func_0000158C(void);
s32 func_000015AC(void);
void func_000015B0(void);
void func_00001650(void);
s32 func_000018BC(void);
void func_000018F0(void);
s32 func_000034C0(void **arg0);
s32 func_00003514(void *arg0);
s32 func_0000356C(void *arg0);
s32 func_000035C4(void *arg0);
s32 func_0000361C(void *arg0);
void func_000039D4(s32 *arg0, s32 arg1);
s32 func_00003A54(void **arg0);
s32 func_00003AA8(struct Unk_func_00003AA8_0 *arg0);
void func_00003AC8(s32 arg0);
s32 func_00003B00(struct Unk_func_00003B00_0 *arg0);
s32 func_00003B58(struct Unk_func_00003B58_0 *arg0);
void func_00003DA0(void);
void func_00003F24(s32 *arg0, s32 arg1);
s32 func_00003F2C(void);
s32 func_00003F80(void);
s32 func_00003FBC(void);
void func_00004028(s32 arg0);
void func_00004064(void);
M2C_UNK memset(M2C_UNK *, M2C_UNK, M2C_UNK);
s32 module_start(void);
s32 module_stop(void);
s32 sceKernelDeleteSema(u32);
s32 sceKernelGetThreadId(void);
s32 sceKernelSendMbx(u32, void *);
s32 sceKernelSignalSema(s32, s32);
s32 sceKernelWaitSema(s32, s32, void *);
M2C_UNK sceMemab_driver_0C134D3F();
s32 sceNetAdhocAuth_driver_2E6AA271(void);
s32 sceNetAdhocAuth_driver_6074D8F1(void);
M2C_UNK sceNetIfhandle_driver_773FC77C();

#endif
