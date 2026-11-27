#ifndef RSS_SUBSCRIBER_DECLS_H
#define RSS_SUBSCRIBER_DECLS_H

#include "common.h"
#include "m2c_macros.h"

#ifdef __cplusplus
#include "paf.h"
#include "vsh.h"
extern "C" {
#endif

struct Unk_func_0000036C_0 {
    M2C_UNK *unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    u8 pad1C[0x4];
    s32 unk20;
    s32 unk24;
    s32 unk28;
    u8 pad2C[0x100];
    s32 unk12C;
    u8 pad130[0x304];
    s32 unk434;
    u8 pad438[0x400];
    s32 unk838;
    u8 pad83C[0x304];
    s32 unkB40;
    u8 padB44[0x100];
    s32 unkC44;
    s32 unkC48;
};

struct Unk_func_0000044C_0 {
    M2C_UNK *unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    u8 pad1C[0x4];
    s32 unk20;
    s32 unk24;
    s32 unk28;
    u8 pad2C[0x100];
    s32 unk12C;
    u8 pad130[0x304];
    s32 unk434;
    u8 pad438[0x400];
    s32 unk838;
    u8 pad83C[0x304];
    s32 unkB40;
    u8 padB44[0x100];
    s32 unkC44;
    s32 unkC48;
};

struct Unk_func_00002948_var_a0 {
    u8 pad0[0x4];
    struct Unk_func_00002948_var_v0 *unk4;
};

struct Unk_func_00002948_var_v0 {
    u8 pad0[0x4];
    void *unk4;
};

extern M2C_UNK D_000039F4;
extern M2C_UNK D_00003D20;
extern M2C_UNK D_00003D30;
extern M2C_UNK D_00003D40;
extern M2C_UNK D_00003DB0;

s32 Job_isCanceled(...);
M2C_UNK _ZdlPv(void *);
s32 func_0000028C(void);
M2C_UNK func_000002B0(M2C_UNK, M2C_UNK);
void func_0000032C(void);
void func_0000034C(void);
void func_0000036C(struct Unk_func_0000036C_0 *arg0);
void func_0000044C(struct Unk_func_0000044C_0 *arg0);
s32 func_00000818(s32);
M2C_UNK func_0000273C(M2C_UNK, M2C_UNK);
void func_00002784(void);
void func_000027A4(s32 *arg0, s32 arg1);
void func_000027C4(s32 arg0, s32 arg1);
void func_000028BC(s32 arg0, s32 arg1);
void func_00002948(void **arg0);
void func_00002A20(void);
void func_00002A3C(void);
M2C_UNK func_00002A58(...);
M2C_UNK func_00002A78(s32, s32, s32);
M2C_UNK func_00002B24(s32, s32, s32);
M2C_UNK func_00002BD8(...);
M2C_UNK func_00002C30(...);
void func_00002D28(M2C_UNK **arg0);
s32 func_00002D50(void);
void func_00002D70(M2C_UNK **arg0);
void func_00002D80(M2C_UNK **arg0);
M2C_UNK func_00003278(...);
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);
s32 module_stop(void);
s32 sceKernelCreateSema(void *, u32, s32, s32, void *);
s32 scePaf_5E4447F6(s32);
s32 scePaf_723D0C80(...);
s32 scePaf_C1B0AA0D(s32);
M2C_UNK scePaf_F5001144(void *);
M2C_UNK sce_paf_private_free2(void *);
s32 sce_paf_private_strlen(s32);
s32 sce_paf_private_wcslen(s32);

#ifdef __cplusplus
}
#endif

#endif
