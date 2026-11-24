#ifndef NETPLAY_SERVER_UTILITY_DECLS_H
#define NETPLAY_SERVER_UTILITY_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_000045D0;
extern s8 D_000045D4;
extern s32 D_000045E4;
extern s32 D_00004608;
extern M2C_UNK func_00000E38;
extern M2C_UNK func_00000F58;

M2C_UNK func_0000015C();
s32 func_000001FC(void);
void func_000004D0(void);
M2C_UNK func_00000500(M2C_UNK, M2C_UNK);
void func_0000058C(void);
void func_000005AC(void);
M2C_UNK func_000006D4(M2C_UNK);
void func_00000928(void);
s32 func_00001048(void);
void func_0000149C(void);
void func_00001714(void);
void func_0000171C(void);
void func_00001724(void);
void func_0000172C(s32 arg0);
s32 func_000017D0(s32);
void func_00001800(s32 arg0, s32 arg1);
M2C_UNK func_000018EC(s32, s32, s32);
void func_00001E34(void);
void func_00001E50(void);
s32 func_00001EC8(void *arg0);
s32 func_00001ED0(void *arg0);
s32 func_00001ED8(void *arg0);
s32 func_00001EE0(void *arg0);
s32 func_00001EE8(void *arg0);
s32 func_00001EF0(void *arg0);
s32 func_00001EF8(void *arg0);
void func_00001F24(void *arg0);
void func_00001F40(void *arg0);
void func_00001F5C(void *arg0);
s32 func_00002638(void);
s32 func_000026F8(void);
s32 func_00002A38(void);
M2C_UNK func_0000320C();
M2C_UNK func_000032A0();
void func_000032C0(void *arg0);
void func_00003514(void *arg0);
M2C_UNK func_00003558(void *);
void func_000036E8(s32 arg0, s32 arg1);
M2C_UNK func_000038F0(s32, s32, s32);
M2C_UNK func_00003A58();
s32 module_stop(void);
s32 sceNetAdhocDownload_C421875C();
M2C_UNK scePaf_27F64616(s32);
M2C_UNK scePaf_3481F595(s32);
M2C_UNK scePaf_A0ED77C4(M2C_UNK, M2C_UNK *, s32, M2C_UNK, M2C_UNK, M2C_UNK *);
M2C_UNK scePaf_C4BAD564(M2C_UNK);
s32 scePaf_CA79D58B(s32);
M2C_UNK scePaf_CAF05F1D(s32);
M2C_UNK scePaf_DAB59652(s32);
s32 scePaf_FD4C9F47(s32);
M2C_UNK sceVshCommonGui_54BC644C(void *, s32);
M2C_UNK sceVshCommonGui_A0DE7090(M2C_UNK);
s32 sceVshCommonGui_B45ED019();

#endif
