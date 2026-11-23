#ifndef DIALOGMAIN_DECLS_H
#define DIALOGMAIN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_00008A54;
extern M2C_UNK D_00008D60;
extern M2C_UNK D_00008D6C;
extern M2C_UNK D_00008D78;
extern M2C_UNK D_00008D84;
extern s32 D_00009A00;
extern M2C_UNK D_00009A40;
extern s32 D_0000A280;
extern s32 D_0000A290;
extern s32 D_0000A3CC;
extern s32 D_0000A3D4;

M2C_UNK func_00000000();
M2C_UNK func_000001F0();
M2C_UNK func_000004C8();
M2C_UNK func_0000050C();
void func_00000DC4(void);
void func_00000DE0(void);
void func_00000E04(s32 arg0);
void func_00000E6C(void);
M2C_UNK func_00001024(M2C_UNK, M2C_UNK);
void func_00001104(void);
void func_000011EC(s32 arg0, s32 arg1);
M2C_UNK func_000012D0();
M2C_UNK func_0000150C(s32, s32, s32);
M2C_UNK func_00001F68();
void func_00001FA8(void);
s32 func_0000230C(void);
s32 func_00002584(s32);
void func_000027AC(void);
M2C_UNK func_000028B8();
void func_000029D4(void);
M2C_UNK func_00002A98();
s32 func_00003064(void);
void func_00003660(void *arg0);
void func_00004F1C(void);
void func_00004F40(void);
void func_000054D8(void);
void func_000057C8(void);
M2C_UNK func_000057D0(M2C_UNK, M2C_UNK);
void func_00005960(void);
void func_00005980(void);
void func_000059A0(s32 *arg0, s32 arg1);
void func_000059F0(s32 arg0, s32 arg1);
M2C_UNK func_00005B74();
M2C_UNK func_00005B94(s32, s32, s32);
s32 func_00006744(s32, s32, s32, s32, s32);
void func_00006A44(s32 arg0);
M2C_UNK func_00006BC4();
s32 func_00006CFC(s32 arg0);
M2C_UNK func_00006D5C(M2C_UNK);
s32 func_00006DF0(void);
s32 func_00006E30(void);
void func_00006E38(void);
void func_00006E54(void);
void func_00006EE4(void);
void func_000070DC(void);
M2C_UNK func_000070F8();
void func_00007468(void);
M2C_UNK func_00007940();
s32 module_reboot_before(void);
s32 module_start(void);
s32 module_stop(void);
s32 sceGeRestoreContext(void *);
s32 sceGeSaveContext(void *);
M2C_UNK sceIoClose();
s32 sceKernelCheckCallback(void);
M2C_UNK scePaf_21A183A7(s32);
M2C_UNK scePaf_26DE971C();
M2C_UNK scePaf_4E67BB08(s32);
M2C_UNK scePaf_613E9AA2();
s32 scePaf_8FE88010(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK scePaf_A69BABE3(M2C_UNK, s32, s32);
s32 scePaf_CA79D58B(s32);
s32 scePaf_D7215544(s32, M2C_UNK *);
M2C_UNK scePaf_F4AB3180(s32, s32);
s32 scePaf_FD4C9F47(s32);
M2C_UNK sceVshCommonUtil_0713D516();
M2C_UNK sceVshCommonUtil_12F5429A();
M2C_UNK sceVshCommonUtil_29B75E11();
M2C_UNK sceVshCommonUtil_3FAF35EC();
M2C_UNK sceVshCommonUtil_EDED68FB();

#endif
