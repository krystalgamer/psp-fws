#ifndef DLGSAMPLE_PLUGIN_DECLS_H
#define DLGSAMPLE_PLUGIN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

typedef void (*func_ptr)(void);

extern func_ptr D_000004B8[];
extern s32 D_000004CC;
extern s32 D_0000050C;
extern s32 D_0000053C;
extern u8 D_00000540;

M2C_UNK _ZN3paf4View12PageActivateEPKc(s32, M2C_UNK *);
M2C_UNK _ZN3paf4View8PageOpenEPKcii(s32, M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK _ZN3paf4View9PageCloseEPKc(s32, M2C_UNK *);
s32 _ZN3paf6Module12SetInterfaceEiPv(s32, s32, void *);
s32 _ZN3vsh14GetString_BackE6Locale(M2C_UNK);
M2C_UNK _ZN3vsh25ShowButtonNavigation_BackEb(M2C_UNK);
M2C_UNK _ZN3vsh30SetButtonNavigationString_BackEPKw(void *, s32);
void func_0000015C(void);
void func_0000018C(void);
void func_00000200(void);
u8 func_00000230(void);
void func_00000290(void);
void func_00000298(void);
void func_000002A0(s32 arg0);
s32 func_000002C4(s32);
void func_000002F4(void);
M2C_UNK func_0000034C();
s32 module_stop(void);

#endif
