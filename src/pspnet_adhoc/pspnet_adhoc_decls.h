#ifndef PSPNET_ADHOC_DECLS_H
#define PSPNET_ADHOC_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_000079C0_s {
    s32 unk0;
    M2C_UNK * unk4;
};

typedef struct SceNetAdhocWaiter {
    u8 pad0[0x20];
    s32 tid;                        /* 0x20 */
    u8 pad24[0x28];
    s32 sema;                       /* 0x4C */
    u8 pad50[0x10];
    struct SceNetAdhocWaiter *next; /* 0x60 */
} SceNetAdhocWaiter;

/* socket descriptor (0x2C), one per PDP/PTP id */
typedef struct SceNetAdhocDesc {
    struct SceNetAdhocDesc *next;   /* 0x00 TAILQ entry */
    struct SceNetAdhocDesc **prev;  /* 0x04 */
    s32 id;                         /* 0x08 */
    s32 unkC;
    u8 type;                        /* 0x10 SCE_NET_ADHOC_DESC_* */
    u8 pad11[3];
    void *pcb;                      /* 0x14 */
    s32 unk18;                      /* 0x18 read-waiter tid */
    s32 unk1C;                      /* 0x1C write-waiter tid */
    s32 unk20;                      /* 0x20 except-waiter tid */
    SceNetAdhocWaiter *waiters;     /* 0x24 */
    s32 unk28;
} SceNetAdhocDesc;
typedef char chk_SceNetAdhocDesc[(sizeof(SceNetAdhocDesc) == 0x2C) ? 1 : -1];

typedef struct {
    SceNetAdhocDesc *first;
    SceNetAdhocDesc **last;
} SceNetAdhocDescList;

struct Unk_func_00000974_temp_a1 {
    u8 pad0[0x10];
    u8 unk10;
};

struct Unk_func_00000974_temp_s0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00000974_temp_s0_2 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00000974_temp_v0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00002D20_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00003BB0_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_00005594_0 {
    u8 pad0[0x34];
    s32 unk34;
    s32 unk38;
    u8 pad3C[0x10];
    s32 unk4C;
    s32 unk50;
};

struct Unk_func_000055B0_0 {
    u8 pad0[0xCC];
    s32 unkCC;
    s32 unkD0;
};

struct Unk_func_000056E4_0 {
    u8 pad0[0x58];
    struct Unk_func_000056E4_temp_a2 *unk58;
    s32 unk5C;
    u8 pad60[0x7C];
    s32 unkDC;
};

struct Unk_func_000056E4_temp_a2 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00005708_0 {
    u8 pad0[0x10];
    void *unk10;
    void **unk14;
    u8 pad18[0xC];
    s16 unk24;
    u8 pad26[0xB2];
    s32 unkD8;
};

struct Unk_func_00005708_temp_a1 {
    u8 pad0[0xC];
    void **unkC;
};

struct Unk_func_00005708_var_s0 {
    u8 pad0[0x8];
    struct Unk_func_00005708_temp_a1 *unk8;
    void **unkC;
    u8 pad10[0x48];
    s32 unk58;
};

extern M2C_UNK D_00007450;
extern SceNetAdhocDescList D_00007998;
extern s32 D_000079A0;
extern struct D_000079C0_s D_000079C0;
extern M2C_UNK D_000079CC;
extern M2C_UNK D_000079E8;
extern M2C_UNK D_00007A8C;
extern M2C_UNK D_00007CC8;

s32 _sce_pspnet_start_of_adhoc_module_in_sched(void *func);
void _sce_pspnet_stop_of_adhoc_module_in_sched(void);
void func_00000444(s32 arg0);
void func_00000490(s32 arg0);
s32 func_0000092C(void *arg0, s32 arg1);
s32 func_00000974(void *arg0, s32 arg1);
s32 func_00000DD0(void);
void func_00000E18(void);
s32 func_00000E44(void);
SceNetAdhocDesc *func_00000E90(u8 type, s32 id);
s32 func_00000ED0(u8 type, SceNetAdhocDesc **out);
void func_00000FFC(SceNetAdhocDesc *d);
s32 func_00001044(void);
void func_00001078(SceNetAdhocDesc *d, s32 events);
s32 func_00002B84(void *arg0, s32 arg1);
s32 func_00002B90(s32);
s32 func_00002C00(s32, s32);
s32 func_00002D20(struct Unk_func_00002D20_0 *arg0, s32 arg1);
s32 func_00002D2C(s32);
s32 func_00002D94(s32, s32);
void func_000039FC(void *arg0);
void func_00003BB0(struct Unk_func_00003BB0_0 *arg0);
s32 func_00004AE4(s32);
s32 func_00004B30(s32);
s32 func_00004E98(s32);
s32 func_00004F50(s32);
s32 func_00005024(s32, s32);
s32 func_000050F8(s32, s32);
s32 func_00005544(void *arg0, s32 arg1, s32 arg2);
void func_00005560(void *arg0, s32 arg1, s32 arg2);
s32 func_00005594(struct Unk_func_00005594_0 *arg0, s32 arg1, s32 arg2);
void func_000055B0(struct Unk_func_000055B0_0 *arg0, s32 arg1, s32 arg2);
s32 func_000056B0(void *arg0, s32 arg1);
void func_000056D4(void *arg0);
s32 func_000056E4(struct Unk_func_000056E4_0 *arg0, s32 arg1);
void func_00005708(struct Unk_func_00005708_0 *arg0);
s32 func_00006C3C(s32, s32, s32);
s32 func_00006DA4(s32, s32);
u8 *func_00006E58(u8 *arg0, u8 *arg1, s32 arg2);
void func_00006EF8(s32 arg0, s32 arg1);
s32 func_00006F68(void);
s32 func_00007298(s32, s32, s32);
s32 module_start(void);
s32 module_stop(void);
s32 sceKernelSignalSema(s32 sema, s32 n);
void sceNetAdhocGameModeUpdateReplica(s32 arg0, s32 arg1);
void sceNetAdhocGameModeUpdateReplicaInternal(s32 arg0, s32 arg1);
void sceNetAdhoc_lib_62B875A8(void);
void sceNetAdhoc_lib_F9240FBA(void);
void sceNetFreeInternal(void *p);
void *sceNetMallocInternal(u32 size);
M2C_UNK sceNetMemset(void *, M2C_UNK, M2C_UNK);

#endif
