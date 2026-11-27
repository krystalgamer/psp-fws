#ifndef LFTV_PLUGIN_DECLS_H
#define LFTV_PLUGIN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

#ifdef __cplusplus
#include "paf.h"
#include "vsh.h"
extern "C" {
#endif

struct Unk_func_0000186C_temp_v0_2 {
    u8 pad0[0x70];
    M2C_UNK (*unk70)();
};

extern M2C_UNK D_00003188_v260;
extern M2C_UNK D_000031AC;
extern s32 D_0000326C;
extern M2C_UNK D_0000329C;
extern M2C_UNK D_000032AC;
extern s8 D_000033F9;
extern s32 D_000033FC;
extern s32 D_00003410;
extern M2C_UNK D_0000343C;
extern s32 D_00003CD0;
extern M2C_UNK D_00003D1C;
extern M2C_UNK func_00001770;
extern M2C_UNK func_000018E0;
extern M2C_UNK func_00003164;

s32 _ZN3paf4View4FindEPKc(M2C_UNK *);
M2C_UNK _ZN3paf4View6UnloadEPS0_PFvPKcE(s32, M2C_UNK *);
M2C_UNK _ZN3vsh13MessageDialog10HideDeleteEv(s32);
void *_ZNK3paf4View12GetInterfaceEi(s32, M2C_UNK);
s32 func_00000AB0(s32 arg0);
s32 func_00000AC0(s32 arg0);
M2C_UNK *func_00000B3C(void);
M2C_UNK *func_00000B80(void);
M2C_UNK *func_00000B90(void);
void func_00000C00(void);
void func_00000C44(void);
void func_00000C54(void);
void func_00000C9C(s32 arg0);
void func_00000CB8(s32 arg0, s32 arg1);
s32 func_00000CC0(void);
void func_00000CD4(s32 arg0, s32 arg1);
s32 func_00000D00(void);
s32 func_00000D28(void);
void func_00000DB4(void);
s32 func_000012C0(void);
void func_000016F4(s32 arg0);
void func_0000186C(void);
void func_00001AE0(void);
s32 func_000020F8(void);
M2C_UNK func_000021FC(M2C_UNK, M2C_UNK);
void func_000022C4(void);
void func_000022E4(void);
void func_00002334(void);
void func_0000241C(s32 arg0, s32 arg1);
void func_00002500(s32 arg0, s32 arg1);
M2C_UNK func_00002580(...);
M2C_UNK func_000027BC(s32, s32, s32);
void *func_00002848(void **arg0);
M2C_UNK func_00002868(s32, s32, s32);
M2C_UNK func_00002CD8(...);
void func_00002F70(void);
s32 func_0000301C(s32);
s32 func_000030E8(s32, s32);
s32 func_00003138(s32, s32);
s32 func_000031CC(void);
s32 func_0000323C(void);
void func_0000331C(s32 arg0);
s32 func_00003388(s32, s32);
void func_00003404(void);
void func_00003424(void);
s32 module_stop(void);
M2C_UNK sceKernelDelayThread(M2C_UNK);
M2C_UNK sceKernelPowerLock(M2C_UNK);
M2C_UNK sceKernelPowerUnlock(M2C_UNK);
s32 scePaf_5E4447F6(s32);
s32 scePaf_88784487(M2C_UNK *);
s32 scePaf_C1B0AA0D(s32);
void *scePaf_DCE3D225(s32, M2C_UNK);
M2C_UNK sceVshCommonGui_8F414E35(s32);
M2C_UNK sceVshCommonUtil_622815DD(M2C_UNK *, M2C_UNK *);
M2C_UNK sceVshCommonUtil_951BC384(M2C_UNK *, M2C_UNK *);
s32 sce_paf_private_strlen(s32);
s32 sce_paf_private_wcslen(s32);

#ifdef __cplusplus
}
#endif

#endif
