#ifndef LFATFS_DECLS_H
#define LFATFS_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_Unk_func_00003AE8_0_0 {
    u8 pad0[0x10];
    s32 unk10;
};

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
    struct Unk_Unk_func_00003AE8_0_0 *unk0;
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

extern s32 D_0000C5B4;
extern M2C_UNK D_0000CD94;
extern M2C_UNK D_0000CDB4;
extern s32 D_0000CF5C;
extern s32 D_0000CF6C;
extern s32 D_0000CF84;
extern s32 D_0000CF9C;
extern s32 D_0000D084;
extern s32 D_0000D22C;
extern void *D_0000D60C;
extern void **D_0000D610;
extern void *D_0000D614;
extern s32 D_0000D72C;
extern s32 D_0000D984;
extern M2C_UNK D_0000DA50;
extern s32 D_0000DCE0;
extern M2C_UNK D_0000E050;
extern s32 D_0000E094;
extern s32 D_0000E160;
extern s32 D_0000E3D4;
extern s32 D_0000E554;
extern void *D_0000E80C;
extern void **D_0000E810;
extern void *D_0000E814;
extern s32 D_0000E8F4;
extern s32 D_0000EB24;
extern s32 D_0000EC14;
extern M2C_UNK D_0000ECA8;
extern void *D_0000EDAC;
extern void **D_0000EDB0;
extern void *D_0000EDB4;
extern M2C_UNK D_0000EED0;

M2C_UNK Kprintf(M2C_UNK *, M2C_UNK *, s32);
s32 func_00000000(s32 arg0);
s32 func_00000000_v310(s32 arg0);
s32 func_00000000_v311(s32 arg0);
s32 func_00000000_v330(s32 arg0);
s32 func_00000000_v340(s32 arg0);
s32 func_000004C4(void);
s32 func_00000584(s32 arg0);
s32 func_000005EC(void);
s32 func_000006AC(s32 arg0);
s32 func_0000168C(s32, s32, s32, s32);
s32 func_00001920(void);
s32 func_00001928(void);
s32 func_00001980(struct Unk_func_00001980_0 *arg0);
s32 func_000019B4(void *arg0);
s32 func_00001C24(void);
s32 func_00001C48(void);
s32 func_000022A4(void *arg0);
s32 func_0000286C(struct Unk_func_0000286C_0 *arg0);
s32 func_000028E8(void);
s32 func_00002C24(void);
s32 func_00002C6C(void);
s32 func_00002CAC(void);
void func_00002D98(void *arg0);
void func_00002DC4(s32 arg0);
void func_00002DE0(void *arg0);
void func_00002E0C(void *arg0);
void func_00002E88(void *arg0);
void func_00002EB0(void *arg0);
void func_00002ED0(void *arg0);
void func_00002EF0(void *arg0);
void func_00002F10(void *arg0);
void func_00002F38(void *arg0);
s32 func_000031DC(void);
s32 func_00003214(s32, s32, s32, s32);
s32 func_0000362C(s32);
s32 func_0000372C_v100(s32, s32, s32);
void func_00003AA0(struct Unk_func_00003AA0_0 *arg0);
void func_00003ACC(s32 arg0);
s32 func_00003AD8(s32, s32, s32);
void func_00003AE8(struct Unk_func_00003AE8_0 *arg0);
void func_00003B14(struct Unk_func_00003B14_0 *arg0);
void func_00003B90(struct Unk_func_00003B90_0 *arg0);
void func_00003BB8(struct Unk_func_00003BB8_0 *arg0);
void func_00003BD8(struct Unk_func_00003BD8_0 *arg0);
void func_00003BF8(struct Unk_func_00003BF8_0 *arg0);
void func_00003C18(struct Unk_func_00003C18_0 *arg0);
void func_00003C40(struct Unk_func_00003C40_0 *arg0);
s32 func_00003F94(s32, s32);
s32 func_00004258(s32, s32);
s32 func_000042D8(s32, s32, s32, s32);
s32 func_00004398(s32, s32);
s32 func_00004458(s32, s32, s32);
s32 func_00004510(s32, s32, s32);
s32 func_000045C8(s32);
s32 func_0000464C(s32, s32, s32, s32);
s32 func_0000466C(s32, s32, s32);
s32 func_00004CFC(s32, s32, s32);
s32 func_00005110(s32, s32);
s32 func_00005388(s32, s32);
s32 func_00005470(s32, s32);
s32 func_000055FC(s32, s32, s32);
s32 func_00005708(s32, s32, s32, s32);
s32 func_00007F58(void *arg0);
void func_000081AC(void *arg0);
void func_000081E8(void *arg0);
s32 func_00008718(struct Unk_func_00008718_0 *arg0);
void func_00008800(void);
s32 func_0000881C(s32 arg0);
s32 func_00008914(void);
s32 func_00008958(void);
void func_000089C0(void);
void func_000089C8(void);
s32 func_00008A4C(s32);
s32 func_00008B14(s32);
s32 func_00008C9C(s32);
s32 func_00009150(void);
s32 func_000091C0(void);
s32 func_00009254(void);
s32 func_000092A4(void);
s32 func_000092B0(void);
s32 func_000092BC(void);
s32 func_000092E0(void);
s32 func_000092EC(void);
s32 func_000092F8(void);
s32 func_00009304(void);
s32 func_00009310(void);
s32 func_0000931C(void);
void func_000093E8(void);
void func_000093F0(void);
void func_000093F8(void);
s32 func_00009638(s32);
s32 func_000097A8(void);
void func_00009838(void);
s32 func_00009934(void);
void func_00009D0C(void);
void func_00009D14(void);
s32 func_00009EBC(void);
s32 func_00009F04(void);
s32 func_00009F74(void);
void func_00009F94(s32 arg0);
s32 func_00009F98(void);
void func_0000A098(void *arg0);
s32 func_0000A320(void);
s32 func_0000A32C(void);
s32 func_0000A3A0(struct Unk_func_0000A3A0_0 *arg0);
s32 func_0000A3DC(struct Unk_func_0000A3DC_0 *arg0);
void func_0000A4E4(void *arg0);
s32 func_0000A4FC(void);
s32 func_0000A508(void);
s32 func_0000A514(void);
void func_0000A528(void *arg0);
s32 func_0000A7AC(void);
s32 func_0000ACF0(void);
s32 func_0000AD24(void);
s32 func_0000ADC0(void *arg0);
s32 func_0000ADFC(void *arg0);
s32 func_0000AF24(void);
s32 func_0000AF30(void);
s32 func_0000AF98(void);
void func_0000B9D4(void *arg0);
s32 module_reboot_before(void);
M2C_UNK sceIoAddDrv(M2C_UNK *);
M2C_UNK sceIoDelDrv(s32);
M2C_UNK sceIoUnassign(M2C_UNK *);
s32 sceKernelDeleteFpl(s32);
M2C_UNK sceKernelFreeHeapMemory(s32, s32);
s32 sceKernelLockMutex(s32, s32, void *);
s32 sceKernelPowerLock(s32);
s32 sceKernelPowerUnlock(s32);
M2C_UNK sceKernelRegisterSysEventHandler(M2C_UNK *);
s32 sceKernelSignalSema(s32, s32);
s32 sceKernelUnlockMutex(s32, s32);
M2C_UNK sceKernelUnregisterSysEventHandler(M2C_UNK *);
s32 sceKernelWaitSema(s32, s32, void *);
s32 sceLFatFs_driver_51C7F7AE(void);
s32 sceLFatFs_driver_F1FBA85F(void);
s32 sceLfatfsStop(void);

#endif
