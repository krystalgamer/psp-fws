#ifndef AUTH_PLUGIN_DECLS_H
#define AUTH_PLUGIN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

#ifdef __cplusplus
#include "paf.h"
#include "vsh.h"
extern "C" {
#endif

struct Unk_D_00002D50 {
    u8 pad0[0x1C];
    s32 unk1C;
    u8 pad20[0x10];
    s32 unk30;
};

typedef void (*func_ptr)(void);

extern M2C_UNK D_00001D38;
extern s32 D_00001E8C;
extern s32 D_00001E90;
extern M2C_UNK D_00001E98;
extern M2C_UNK D_00001EA4;
extern func_ptr D_00002A70[];
extern s32 D_00002AE0;
extern M2C_UNK D_00002AEC;
extern M2C_UNK D_00002C4C;
extern s32 D_00002C7C;
extern M2C_UNK D_00002C88;
extern M2C_UNK D_00002C94;
extern struct Unk_D_00002D50 *D_00002D50;
extern void *D_000032D8;

M2C_UNK _ZN3paf4View12PageActivateEPKc(s32, M2C_UNK *);
M2C_UNK _ZN3paf4View8PageOpenEPKcii(s32, M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK _ZN3paf4View9PageCloseEPKc(s32, M2C_UNK *);
M2C_UNK _ZN3paf4View9PlaySoundEPKc(s32, M2C_UNK *);
s32 _ZN3paf6Module12SetInterfaceEiPv(s32, s32, s32);
s32 func_0000015C(s32);
void func_00000238(void);
s32 func_000004B0(s32);
void func_00000574(void);
void func_000005B0(void);
void func_000005B8(void);
void func_00000670(void);
void func_0000098C(void);
void func_00001168(void);
void func_0000127C(void);
void func_00001340(void);
void func_00001454(void);
void func_00001474(void);
void func_00001494(s32 arg0, s32 arg1);
void func_00001514(s32 arg0, s32 arg1);
M2C_UNK func_000018E0(...);
void func_00001CFC(void);
void func_00001D7C(void);
void func_00001DB8(void);
void func_00001DE8(void);
s32 func_00001DF4(s32, s32, s32, s32);
void func_00002058(s32 arg0);
M2C_UNK func_0000207C(M2C_UNK, M2C_UNK);
void func_0000218C(void);
void func_000021AC(void);
void func_000021FC(s32 *arg0, s32 arg1);
void func_0000222C(s32 arg0, s32 arg1);
void func_0000227C(s32 arg0, s32 arg1);
void func_00002364(void);
void func_000023A4(s32 *arg0, s32 arg1);
void func_00002444(void);
M2C_UNK func_000024D8(s32, s32, s32);
M2C_UNK func_00002584(s32, s32, s32);
M2C_UNK func_00002638(...);
void func_00002658(void);
M2C_UNK func_000026B0(...);
s32 module_stop(void);
M2C_UNK scePaf_39E62C88(s32, M2C_UNK *, M2C_UNK, M2C_UNK);
s32 scePaf_5E4447F6(s32);
M2C_UNK scePaf_8B38372A(s32, M2C_UNK *);
M2C_UNK scePaf_A013540A(s32, M2C_UNK *);
s32 scePaf_C1B0AA0D(s32);
s32 sce_paf_private_strlen(s32);
s32 sce_paf_private_wcslen(s32);

#ifdef __cplusplus
}
#endif

#endif
