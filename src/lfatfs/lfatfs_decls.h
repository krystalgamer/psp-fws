#ifndef LFATFS_DECLS_H
#define LFATFS_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_00001980_0 {
    void *unk0;
    void **unk4;
    struct Unk_func_00001980_temp_a2 *unk8;
};

struct Unk_func_00001980_temp_a2 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0000286C_0 {
    u8 pad0[0x10];
    void * unk10;
};

struct Unk_func_00003AA0_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00003AE8_0 {
    void * unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00003B14_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00003B90_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00003BB8_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_00003BD8_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_00003BF8_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_00003C18_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00003C40_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00008718_0 {
    u8 pad0[0x2];
    u8 unk2;
    u8 unk3;
};

struct Unk_func_0000A3A0_0 {
    u8 pad0[0x8];
    s32 ** unk8;
};

struct Unk_func_0000A3DC_0 {
    u8 pad0[0x8];
    s32 ** unk8;
};

extern s32 D_0000CF5C;
extern s32 D_0000CF6C;
extern s32 D_0000CF9C;
extern M2C_UNK D_0000DA50;
extern s32 D_0000E160;
extern s32 D_0000EB24;
extern void *D_0000EDAC;
extern void **D_0000EDB0;
extern void *D_0000EDB4;

M2C_UNK IoFileMgrForKernel_8E982A74(M2C_UNK *);
M2C_UNK KDebugForKernel_84F370BC(M2C_UNK *, M2C_UNK *, s32);
s32 func_000004C4(void);
s32 func_00000584(s32 arg0);
s32 func_0000168C(s32, s32, s32, s32);
s32 func_00001980(struct Unk_func_00001980_0 *arg0);
s32 func_0000286C(struct Unk_func_0000286C_0 *arg0);
s32 func_000031DC(void);
void func_00003AA0(struct Unk_func_00003AA0_0 *arg0);
void func_00003ACC(s32 arg0);
void func_00003AE8(struct Unk_func_00003AE8_0 *arg0);
void func_00003B14(struct Unk_func_00003B14_0 *arg0);
void func_00003B90(struct Unk_func_00003B90_0 *arg0);
void func_00003BB8(struct Unk_func_00003BB8_0 *arg0);
void func_00003BD8(struct Unk_func_00003BD8_0 *arg0);
void func_00003BF8(struct Unk_func_00003BF8_0 *arg0);
void func_00003C18(struct Unk_func_00003C18_0 *arg0);
void func_00003C40(struct Unk_func_00003C40_0 *arg0);
s32 func_000042D8(s32, s32, s32, s32);
s32 func_000045C8(s32);
s32 func_0000466C(s32, s32, s32);
s32 func_00004CFC(s32, s32, s32);
s32 func_00005110(s32, s32);
s32 func_00005388(s32, s32);
s32 func_00005470(s32, s32);
s32 func_000055FC(s32, s32, s32);
s32 func_00005708(s32, s32, s32, s32);
s32 func_00008718(struct Unk_func_00008718_0 *arg0);
void func_00009D0C(void);
void func_00009D14(void);
s32 func_00009F04(void);
s32 func_00009F74(void);
s32 func_0000A320(void);
s32 func_0000A32C(void);
s32 func_0000A3A0(struct Unk_func_0000A3A0_0 *arg0);
s32 func_0000A3DC(struct Unk_func_0000A3DC_0 *arg0);
s32 func_0000A4FC(void);
s32 func_0000A508(void);
s32 func_0000A514(void);
s32 sceKernelPowerLock(s32);
s32 sceKernelPowerUnlock(s32);
s32 sceKernelSignalSema(s32, s32);
s32 sceKernelWaitSema(s32, s32, void *);
s32 sceLFatFs_driver_8F0560E0(void);

#endif
