#ifndef IMPOSE_PLUGIN_DECLS_H
#define IMPOSE_PLUGIN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

#ifdef __cplusplus
#include "paf.h"
#include "vsh.h"
extern "C" {
#endif

struct Unk_func_0000015C_0 {
    u8 pad0[0x1FD];
    s8 unk1FD;
    s8 unk1FE;
};

struct Unk_func_00000180_0 {
    u8 pad0[0x1FD];
    s8 unk1FD;
    s8 unk1FE;
};

typedef void (*func_ptr)(void);

extern func_ptr D_00001364[];
extern s32 D_000013A4;
extern s32 D_00001434;
extern M2C_UNK D_000014A0;
extern M2C_UNK D_000016F4;
extern M2C_UNK D_00001734;
extern s32 D_0000189C;

M2C_UNK InputDevice_PspHprm_Unlock(...);
M2C_UNK InputDevice_PspPad_Unlock(...);
M2C_UNK PhiPostSystemEvent(M2C_UNK, s32, s32);
s32 _ZN3paf4View4FindEPKc(M2C_UNK *);
M2C_UNK _ZN3paf4View9PageCloseEPKc(s32, M2C_UNK *);
M2C_UNK _ZN3paf4View9PlaySoundEPKc(s32, M2C_UNK *);
s32 _ZN3paf6Module12SetInterfaceEiPv(s32, s32, s32);
M2C_UNK _ZN3paf8PhWidget13UpdateCamerasEv(void);
M2C_UNK _ZN3paf9PhHandler11KillTimerCBEi(s32, M2C_UNK);
void *_ZNK3paf4View12GetInterfaceEi(s32, M2C_UNK);
void func_0000015C(struct Unk_func_0000015C_0 *arg0);
void func_00000180(struct Unk_func_00000180_0 *arg0);
void func_000003BC_v150(s32 arg0);
void func_000003BC_v152(s32 arg0);
void func_00000964(void);
void func_00000BAC(s32 arg0);
void func_00000CDC(void);
void func_00000D64(void);
M2C_UNK func_00000DE8(...);
void func_0000104C(void);
void func_00001054(s32 arg0);
void func_00001078(void);
M2C_UNK func_000010D0(...);
s32 module_stop(void);
M2C_UNK scePaf_3DEE8DB4(...);
M2C_UNK scePaf_499FF48D(...);
s32 vshImposeGetParam(M2C_UNK);
M2C_UNK vsh_6D4C06F7(M2C_UNK);

#ifdef __cplusplus
}
#endif

#endif
