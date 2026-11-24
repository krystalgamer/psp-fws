#ifndef MGVIDEO_DECLS_H
#define MGVIDEO_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_000060F0;
extern M2C_UNK D_000060F8;
extern M2C_UNK D_00006100;
extern s32 D_0000BE84;
extern M2C_UNK func_00002D8C;

M2C_UNK ThreadManForKernel_BC31C1B9(M2C_UNK, M2C_UNK *, s32);
s32 func_00000000(s32);
s32 func_00000108(void);
s32 func_0000038C(void *arg0);
s32 func_000003B8(void *arg0);
s32 func_000003E4(void *arg0);
s32 func_00000410(void *arg0, u32 arg1);
s32 func_0000043C(M2C_UNK);
s32 func_000004DC(s32 arg0, M2C_UNK arg1);
s32 func_000005A0(s32 arg0, s32 arg1);
s32 func_00001084(void);
void func_00002F54(s32 arg0);
s32 func_00004834(s32, s32, s32);
s32 func_000049D0(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3);
s32 func_00004BEC(void *arg0);
s32 func_000055A8(s32, s32);
s32 func_00005850(s32 arg0);
M2C_UNK sceMgVideo_driver_02CD7137();
s32 sceMgVideo_driver_585F5755(void);
s32 sceMgVideo_driver_5CFE1758(void);
M2C_UNK sceMgr_driver_1B8F3192(s32);
s32 sceMgr_driver_4A14DD18(s32, s32, s32);
s32 sceMgr_driver_DB12BB23(s32, s32, s32);
s32 sceMgr_driver_F30E22CF(M2C_UNK);
s32 sceRtc_driver_17C26C00(void *);

#endif
