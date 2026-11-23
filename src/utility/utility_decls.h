#ifndef UTILITY_DECLS_H
#define UTILITY_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_00007BF0;
extern s32 D_00007E90;
extern s32 D_00007E9C;
extern s32 D_00007EA4;
extern s32 D_00007EA8;
extern s32 D_00007EAC;
extern s32 D_00007EB0;
extern s32 D_00007EB4;
extern s32 D_00007EE8;
extern s32 D_00007EEC;
extern s32 D_00007EF0;
extern s32 D_00007EF4;
extern s32 D_00007EF8;
extern s32 D_00007EFC;
extern s32 D_00007F00;
extern s32 D_00008014;
extern s32 D_0000804C;
extern s32 D_00008050;
extern s32 D_00008054;

M2C_UNK KDebugForKernel_84F370BC(M2C_UNK *, s32, s32, s32);
s32 func_00001994(void);
s32 func_00001CB8(s32 arg0, s32 arg1, void *arg2);
s32 func_00001DC8(void);
s32 func_000039B0(void);
s32 func_00005054(void *arg0);
s32 func_0000553C(s32);
void func_000057AC(void);
s32 func_000060B4(void);
s32 func_0000613C(void);
s32 func_00006190(void);
s32 func_000061C0(void);
void func_00006270(s32 arg0);
void func_00006344(void);
s32 func_00006350(void);
M2C_UNK memset(s32 *, M2C_UNK, M2C_UNK);
s32 module_start(void);
s32 sceKernelDeleteEventFlag(s32);
M2C_UNK sceReg_driver_39461B4D(s32);
M2C_UNK sceReg_driver_4CA16893(s32, s32, M2C_UNK);
M2C_UNK sceReg_driver_FA8A5739(s32);
M2C_UNK sceSysEventForKernel_D7D3FDCD(M2C_UNK *);
void sceUtility_2995D020(void);
void sceUtility_3AD50AE7(void);
void sceUtility_417BED54(void);
void sceUtility_88BC7406(void);
void sceUtility_B62A4061(void);
void sceUtility_B6CEE597(void);
void sceUtility_BC6B6296(void);
void sceUtility_ED0FAD38(void);
s32 sceUtility_driver_20C68C34(void);
s32 sceUtility_driver_F062AEA6(void);
s32 sceUtility_private_463EA95E(void);
void sceUtility_private_4ACD6532(void);
s32 sceUtility_private_4B677BA1(void);
s32 sceUtility_private_4F2206BC(void);
s32 sceUtility_private_5BA71568(void);
s32 sceUtility_private_680C0EA8(s32 arg0);
s32 sceUtility_private_6F923BD3(s32 arg0);
s32 sceUtility_private_75FF798C(void);
s32 sceUtility_private_97F922A3(s32 arg0);
s32 sceUtility_private_9BAE7DCE(s32 arg0);
s32 sceUtility_private_AB46A24F(void);
s32 sceUtility_private_B222E887(void);
s32 sceUtility_private_E01FE32A(void);
s32 sceUtility_private_EF5BC2D1(void);

#endif
