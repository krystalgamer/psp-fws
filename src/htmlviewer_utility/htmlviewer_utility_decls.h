#ifndef HTMLVIEWER_UTILITY_DECLS_H
#define HTMLVIEWER_UTILITY_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s8 D_00005FC4;
extern u8 D_00005FC5;
extern void *D_000060E4;
extern M2C_UNK D_0000616C;
extern s32 D_00006300;
extern s32 D_00006304;
extern s32 D_00006C50;
extern s8 D_00006C54;
extern s32 D_00006C78;
extern void *D_00006CC0;
extern s32 D_00006F24;
extern M2C_UNK D_00006F28;
extern M2C_UNK D_000072B4;
extern s32 D_00007334;

M2C_UNK func_00000000();
s32 func_00000180(s32, s32, s32);
s32 func_000002F0(void);
s32 func_000019E4(void);
s32 func_000019F8(void);
void func_00001A0C(s32 arg0);
s32 func_00001A4C(u32 arg0);
void func_00001A5C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00001AC4(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_00001B90(void);
M2C_UNK func_00001B98(M2C_UNK, M2C_UNK);
s32 func_00001F3C(void);
void func_00001F7C(void);
void func_00001FAC(s32 arg0);
s32 func_00001FB8(void);
void func_00001FC4(s32 arg0);
s32 func_00001FD0(void);
void func_00001FDC(s32 arg0);
s32 func_00001FE8(void);
M2C_UNK func_00001FF4(s32);
u8 func_00002000(void);
void func_0000200C(void);
void func_00002154(void);
void func_00002368(s8 arg0);
void func_00002374(s32 arg0);
M2C_UNK func_00002FD0();
s32 func_00003014(s32, s32, s32, s32, s32);
M2C_UNK func_000030E8(s32, M2C_UNK, M2C_UNK, s32);
void func_00003180(void);
s32 func_000038F4(s32);
void func_00003950(void);
void func_00003980(void);
void func_00003AB4(void);
s32 func_00003FC0(void *arg0);
s32 func_000041CC(M2C_UNK **arg0, s32 *arg1);
M2C_UNK func_00004350(s8 *);
s8 *func_00004398(s8 *arg0);
s32 func_00004520(s32, s32, s32);
M2C_UNK func_000047E8();
s32 module_start(void);
s32 module_stop(void);
M2C_UNK sceHVUI_Module_146CB797();
M2C_UNK sceHVUI_Module_3ADFED08(s32, M2C_UNK);
M2C_UNK sceHVUI_Module_789FBBA8();
M2C_UNK sceHVUI_Module_A4C50591();
s32 sceHVUI_Module_F7038231();
void sceHtmlViewerHelper_05E0C3D4(s32 arg0);
s32 sceHtmlViewerHelper_47F988E6(s32 arg0, s32 arg1, s32 arg2);
s32 sceHtmlViewerHelper_55732F91(s32 arg0);
M2C_UNK sceHtmlViewerHelper_C92C71B7(M2C_UNK);
s32 sceKernelDeleteEventFlag(s32);
s32 sceKernelSetEventFlag(s32, u32);
s32 sceKernelWaitEventFlag(s32, u32, s32, void *, void *);
s32 sceUtility_943CBA46(M2C_UNK *);
s32 sceUtility_private_4B677BA1();

#endif
