#ifndef POPS_DECLS_H
#define POPS_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_001212C0;
extern s32 D_00169808;
extern s32 D_0016980C;
extern s32 D_004122A0;
extern s32 D_004122AC;
extern s32 D_00554214;
extern s32 D_007D4E3C;
extern s32 D_00855570;
extern s32 D_00855574;
extern s32 D_00858D30;

s32 func_00000668(void);
s32 func_00000F24(void);
void func_00007BF0(void);
void func_0000825C(void);
M2C_UNK func_00009A58();
s32 func_0000B784(void);
void func_0000BF1C(void *arg0);
s32 func_0000BF24(void);
s32 func_0000C478(void);
s32 func_0000CC30(void);
M2C_UNK func_0000EBFC(M2C_UNK, M2C_UNK);
void func_0000F138(void);
void func_0000F348(void);
void func_0000FA20(void);
void func_0000FC1C(void);
void func_0000FC38(void);
void func_0000FE1C(void);
void func_0000FE38(void);
void func_0000FE54(void);
M2C_UNK func_000104C8(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_00010578(M2C_UNK);
M2C_UNK func_00010760();
M2C_UNK func_00010934();
s32 func_00011648(void);
s32 func_00011654(void);
s32 func_00017A48(void);
void func_00017A50(void);
void func_00017A58(void);
void func_00017EDC(void);
void func_00017F1C(void);
M2C_UNK func_00018550();
M2C_UNK func_0001ADD8();
s32 func_0001D314(void);
s32 func_0001DA18(void);
s32 func_0002E774(void);
s32 func_00031998(void);
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
void func_0003600C(void *arg0, void *arg1);
void func_000363A8(s32 arg0, s32 arg1);
M2C_UNK sceIoRename();
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
M2C_UNK sceKernelExitGame();
M2C_UNK sceKernelLibcGettimeofday();
M2C_UNK sceKernelLibcTime();

#endif
