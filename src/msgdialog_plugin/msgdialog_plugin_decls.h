#ifndef MSGDIALOG_PLUGIN_DECLS_H
#define MSGDIALOG_PLUGIN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

#ifdef __cplusplus
#include "paf.h"
#include "vsh.h"
extern "C" {
#endif

typedef void (*func_ptr)(void);

extern func_ptr D_000012A8[];
extern s32 D_000012F0;
extern M2C_UNK D_00001A2C;
extern s32 D_00001A5C;
extern s8 D_00001A68;
extern s32 D_00001A6C;

M2C_UNK _ZN3paf4View12PageActivateEPKc(s32, M2C_UNK *);
M2C_UNK _ZN3paf4View12PageCloseAllEv(s32);
M2C_UNK _ZN3paf4View8PageOpenEPKcii(s32, M2C_UNK *, M2C_UNK, M2C_UNK);
s32 _ZN3paf6Module12SetInterfaceEiPv(s32, s32, s32);
s32 _ZN3vsh14GetString_BackE6Locale(M2C_UNK);
s32 _ZN3vsh14GetString_BackEv(void);
s32 _ZN3vsh15GetString_EnterE6Locale(M2C_UNK);
s32 _ZN3vsh15GetString_EnterEv(void);
M2C_UNK _ZN3vsh30SetButtonNavigationString_BackEPKw(void *, s32);
M2C_UNK _ZN3vsh31SetButtonNavigationString_EnterEPKw(void *, s32);
void func_0000015C(void);
void func_000001AC(void);
s32 func_000001E4(void);
void func_00000384(void);
void func_000003C8(void);
void func_000003F0(s32 arg0);
void func_00000998(void);
void func_00000B68(s32 arg0, s32 arg1);
void func_00000BC8(void);
M2C_UNK func_00000BE4(...);
void func_00000C0C(void);
M2C_UNK func_00000CC4(...);
s32 func_00000E88(s32);
void func_00000EB8(s32 arg0, s32 arg1);
M2C_UNK func_00000F08(s32, s32, s32);
void func_00000FBC(void);
M2C_UNK func_00001014(...);
s32 module_stop(void);
M2C_UNK scePaf_39E62C88(s32, M2C_UNK *, M2C_UNK, M2C_UNK);
s32 scePaf_5E4447F6(s32);
M2C_UNK scePaf_A013540A(s32, M2C_UNK *);
M2C_UNK scePaf_D1447DB7(s32);
M2C_UNK sceVshCommonGui_11C48509(void *, s32);
M2C_UNK sceVshCommonGui_2EBB5C2B(void *, s32);
s32 sceVshCommonGui_30FA68C3(...);
s32 sceVshCommonGui_EC899EBE(...);
s32 sce_paf_private_wcslen(s32);

#ifdef __cplusplus
}
#endif

#endif
