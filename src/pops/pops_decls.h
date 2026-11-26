#ifndef POPS_DECLS_H
#define POPS_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_00169648_s {
    u8 unk0;
    u8 pad1[0x1];
    u8 unk2;
    u8 unk3;
    u8 pad4[0x29];
    u8 unk2D;
};

struct Unk_func_0000BF1C_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_0000F58C_temp_v0 {
    u8 pad0[0x1];
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u8 unk4;
};

struct Unk_func_0003600C_0 {
    u8 pad0[0x4C];
    s32 unk4C;
};

struct Unk_func_0003600C_1 {
    void * unk0;
    s32 unk4;
};

struct Unk_func_000363A8_temp_v0 {
    u8 pad0[0x10];
    s32 unk10;
    s32 unk14;
};

extern u8 D_0010FB58;
extern u8 D_0010FD88;
extern u8 D_0010FD89;
extern s32 D_00120E00;
extern s32 D_001212C0;
extern s32 D_001610C8;
extern s32 D_001610CC;
extern s32 D_001613D4;
extern s32 D_001613D8;
extern struct D_00169648_s D_00169648;
extern s32 D_00169808;
extern s32 D_0016980C;
extern M2C_UNK D_00218940;
extern s32 D_004122A0;
extern s32 D_004122AC;
extern s32 D_004BF430;
extern s32 D_00554214;
extern s32 D_0076FDA8;
extern s32 D_007D4E3C;
extern s32 D_00855570;
extern s32 D_00855574;
extern s32 D_00858D30;

void func_0000048C(void);
s32 func_00000668(void);
s32 func_0000078C(void);
s32 func_00000DA0(void);
s32 func_00000F24(void);
s32 func_000011B4(void);
s32 func_000014B4(s32, s32, s32);
void func_00002594(s32 arg0, s32 arg1, s32 arg2);
s32 func_0000357C(void);
void func_00007BF0(void);
void func_0000825C(void);
M2C_UNK func_00009A58();
s32 func_0000ACA8(void);
s32 func_0000B2BC(void);
s32 func_0000B784(void);
void func_0000B8DC(s32 arg0, s32 arg1);
s32 func_0000BC28(void);
void func_0000BF1C(struct Unk_func_0000BF1C_0 *arg0);
s32 func_0000BF24(void);
u8 func_0000C06C(void);
s32 func_0000C0C4(void);
s32 func_0000C330(void);
s32 func_0000C478(void);
void func_0000C778(void *arg0);
s32 func_0000C780(void);
s32 func_0000CC30(void);
s32 func_0000CC88(void);
s32 func_0000E910(void);
M2C_UNK func_0000EBFC(M2C_UNK, M2C_UNK);
void func_0000F138(void);
void func_0000F348(void);
void func_0000F58C(void);
void func_0000FA20(void);
void func_0000FC1C(void);
void func_0000FC38(void);
void func_0000FE1C(void);
void func_0000FE38(void);
void func_0000FE54(void);
s32 func_00010284(void);
M2C_UNK func_000104C8(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_00010578(M2C_UNK);
M2C_UNK func_00010760();
void func_00010828(void);
M2C_UNK func_00010934();
void func_00010B58(void);
s32 func_00010C8C(s32);
s32 func_00010F3C(void);
s32 func_000110F4(void);
void func_000114A8(void);
void func_000114C4(void);
M2C_UNK *func_0001154C(void);
s32 func_00011648(void);
s32 func_00011654(void);
void func_000116A8(void);
void func_000116C4(void);
void func_000116E0(void);
s32 func_00011EAC(s32);
s32 func_0001218C(void);
s32 func_0001234C(void);
u8 func_0001334C(void);
u8 func_00013358(void);
s32 func_000145CC(void);
s32 func_00014D78(void);
s32 func_00017A48(void);
void func_00017A50(void);
void func_00017A58(void);
s32 func_00017B74(s32);
void func_00017EDC(void);
void func_00017F1C(void);
M2C_UNK func_00018550();
void func_000193DC(void);
s32 func_0001A748(void);
M2C_UNK func_0001ADD8();
s32 func_0001D314(void);
s32 func_0001DA18(void);
s32 func_0002439C(void);
s32 func_0002E774(void);
s32 func_00031998(void);
s32 func_00032938(void);
s32 func_00034518(s32);
s32 func_000347E4(void);
void func_000347EC(void);
s32 func_00034808(void);
s32 func_00034810(void);
s32 func_00034818(void);
s32 func_00034820(void);
s32 func_00034828(void);
s32 func_00034830(void);
s32 func_00034838(void);
s32 func_00034840(void);
s32 func_00034848(void);
void func_000348A8(void);
void func_000348C4(void);
s32 func_000348E0(void);
s32 func_000348F8(void);
void func_00035298(void);
s32 func_00035ACC(s32 *arg0, s32 arg1);
s32 func_00035F54(s32, s32);
void func_0003600C(struct Unk_func_0003600C_0 *arg0, struct Unk_func_0003600C_1 *arg1);
void func_000363A8(s32 arg0, s32 arg1);
M2C_UNK sceIoRename();
s32 sceKernelCancelAlarm(s32);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
M2C_UNK sceKernelExitGame();
M2C_UNK sceKernelLibcGettimeofday();
M2C_UNK sceKernelLibcTime();
s32 sceKernelSignalSema(s32, s32);

#endif
