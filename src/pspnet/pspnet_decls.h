#ifndef PSPNET_DECLS_H
#define PSPNET_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_0000AF44_s {
    void * unk0;
    void ** unk4;
};

struct Unk_func_0000260C_var_s0 {
    struct Unk_func_0000260C_var_s0 *unk0;
    u8 pad4[0x48];
    s32 unk4C;
};

struct Unk_func_00003400_0 {
    u8 pad0[0x20];
    s32 unk20;
    u8 pad24[0x24];
    s32 unk48;
    s32 unk4C;
};

struct Unk_func_00004974_var_s2 {
    struct Unk_func_00004974_var_s2 *unk0;
    u8 pad4[0x4];
    u8 *unk8;
    u32 unkC;
};

struct Unk_func_00005744_0 {
    struct Unk_func_00005744_var_s0 *unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00005744_var_s0 {
    u8 pad0[0x4];
    struct Unk_func_00005744_var_s0 *unk4;
};

struct Unk_sceNetEtherNtostr_0 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u8 unk4;
    u8 unk5;
};

struct Unk_sceNet_lib_45452B7B_var_v1 {
    struct Unk_sceNet_lib_45452B7B_var_v1 *unk0;
    u8 pad4[0x8];
    s16 unkC;
};

struct Unk_sceNet_lib_757085B0_0 {
    u8 pad0[0xC];
    u16 unkC;
    u8 padE[0x2];
    s32 unk10;
};

struct Unk_sceNet_lib_92633D8D_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_sceNet_lib_C21E18B2_0 {
    u8 pad0[0xC];
    u16 unkC;
};

struct Unk_sceNet_lib_C9C97945_0 {
    u8 pad0[0x20];
    s32 unk20;
    u8 pad24[0x24];
    s32 unk48;
    s32 unk4C;
};

extern s32 D_0000A0D0;
extern s32 D_0000A0E4;
extern s32 D_0000A10D;
extern s32 D_0000A860;
extern s32 D_0000A864;
extern s32 D_0000A868;
extern s32 D_0000A874;
extern s32 D_0000A878;
extern M2C_UNK D_0000A88D;
extern s32 D_0000AC10;
extern s32 D_0000AC14;
extern s32 D_0000AC18;
extern s32 D_0000AC1C;
extern s32 D_0000AC20;
extern s32 D_0000AC24;
extern s32 D_0000AC28;
extern s32 D_0000AC2C;
extern s32 D_0000AC30;
extern s32 D_0000AC34;
extern s32 D_0000AC38;
extern s32 D_0000AC3C;
extern s32 D_0000AC58;
extern s32 D_0000AF18;
extern s32 D_0000AF1C;
extern s32 D_0000AF20;
extern s32 D_0000AF24;
extern s32 D_0000AF28;
extern s32 D_0000AF2C;
extern s32 D_0000AF30;
extern s32 D_0000AF34;
extern s32 D_0000AF38;
extern s32 D_0000AF3C;
extern s32 D_0000AF40;
extern struct D_0000AF44_s D_0000AF44;
extern s32 D_0000AF5C;
extern s32 D_0000AF60;
extern s32 D_0000AF64;
extern s32 D_0000AF68;
extern s32 D_0000AF6C;
extern s32 D_0000B06C;
extern s32 D_0000B0B0;
extern s32 D_0000B0B8;
extern s32 D_0000B0CC;
extern s32 D_0000B0D4;
extern s32 D_0000B0EC;
extern s32 D_0000B0F0;
extern s32 D_0000B314;
extern s32 D_0000B31C;
extern s32 D_0000B370;
extern s32 D_0000B3B4;
extern s32 D_0000B3B8;
extern s32 D_0000B3BC;
extern s32 D_0000B3C0;
extern s32 D_0000B3C4;
extern s32 D_0000B3C8;
extern s32 D_0000B3CC;
extern s32 D_0000B3D0;
extern s32 D_0000B3D4;
extern s32 D_0000B3D8;
extern s32 D_0000B3DC;
extern s32 D_0000B3E0;
extern s32 D_0000B91C;
extern M2C_UNK D_0000BC0C;
extern u8 D_0000BE54;

s32 func_00001B7C(void);
void func_00001E74(void);
s32 func_00002248(void);
s32 func_00002300(void);
void func_0000260C(void);
s32 func_00002C34(void);
s32 func_00003028(void);
void func_000030A8_v100(void *arg0);
void func_00003100(void *arg0);
void func_00003380(void);
void func_00003400(struct Unk_func_00003400_0 *arg0);
s32 func_0000348C(void);
void func_000037E4(void);
void func_00004430(s32 arg0, u8 *arg1);
u8 *func_00004974(u8 *arg0, void *arg1, u32 arg2);
void func_00005404(void *arg0);
void func_00005744(struct Unk_func_00005744_0 *arg0);
void func_00005C28(void);
void func_00005C30(void);
s32 func_00005C38(void);
s32 func_00005C40(void);
void func_00005C48(void);
void func_00005C50(void);
s32 func_00007678(void);
s32 func_000076B8(void);
s32 func_00007738(void);
s32 func_00007778(void);
s32 func_0000791C(void);
s32 func_00007924(void);
s32 func_000079DC(void);
s32 func_000079E4(void);
M2C_UNK *func_00007BBC(void);
s32 func_00007C0C(s32, s32);
u8 *func_00007CC0(u8 *arg0, u8 *arg1, s32 arg2);
void func_00007D60(s32 arg0, s32 arg1);
u8 *func_00007FE8(u8 *arg0, u8 *arg1);
s32 func_00008054(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00008790(s32, s32, s32);
s32 func_00008794(s32, s32, s32);
s32 *func_0000885C(void);
s32 module_start(void);
s32 module_stop(void);
s32 sceKernelCreateSema(void *, u32, s32, s32, void *);
s32 sceKernelDeleteEventFlag(s32);
s32 sceKernelDeleteSema(s32);
s32 sceKernelDeleteThread(s32);
s32 sceKernelGetThreadId(void);
s32 sceKernelSetEventFlag(s32, u32);
s32 sceKernelSignalSema(s32, s32);
s32 sceKernelTerminateThread(s32);
s32 sceKernelWaitSema(s32, s32, void *);
void sceNetEtherNtostr(struct Unk_sceNetEtherNtostr_0 *arg0, s32 arg1);
void sceNetGetMallocStat(void);
s32 sceNetIfhandle_lib_0C391E9F();
M2C_UNK sceNetIfhandle_lib_29ED84C5();
M2C_UNK sceNetGetMallocStatInternal();
M2C_UNK sceNetFreeInternal();
M2C_UNK sceNetIfhandleTerm();
M2C_UNK sceNetMFreem(void *);
s32 sceNetTerm(void);
void _sce_pspnet_schednetintr_with_evf(s32 arg0);
s32 _sce_pspnet_stop_of_adhoc_module_in_if_ethersubr_core(void);
s32 _sce_pspnet_start_of_inet_module_in_netintr(s32 arg0, s32 arg1);
s32 _sce_pspnet_start_of_adhoc_module_in_if_ethersubr_core(s32 arg0);
void sceNetAtoi(s32 arg0);
s32 _sce_pspnet_start_of_adhoc_module_in_sched(s32 arg0);
s32 _sce_pspnet_stop_of_adhoc_module_in_sched(void);
s32 _sce_pspnet_stop_of_inet_module_in_sched(void);
void _sce_pspnet_hashdone(void);
s32 _sce_pspnet_thread_busycount(void);
void _sce_pspnet_splunlock(s32 arg0);
s32 _sce_pspnet_stop_of_inet_module_in_ifhandle_ether(void);
s32 _sce_pspnet_start_of_pppoe_module_in_netintr(s32 arg0);
s32 _sce_pspnet_stop_of_inet_module_in_netintr(void);
s32 _sce_pspnet_spllock_owner(void);
s32 _sce_pspnet_thread_leave(struct Unk_sceNet_lib_757085B0_0 *arg0, s32 arg1);
s32 _sce_pspnet_stop_of_ipv6_module_in_netintr(void);
void _sce_pspnet_schednetintr(s32 arg0);
void _sce_pspnet_callout_reset(s32 arg0, u32 arg1, s32 arg2, s32 arg3);
u8 *sceNetStrcpy(u8 *arg0, u8 *arg1);
s32 _sce_pspnet_start_of_ipv6_module_in_netintr(s32 arg0);
s32 _sce_pspnet_stop_of_pppoe_module_in_netintr(void);
s32 _sce_pspnet_if_nulloutput(void);
void _sce_pspnet_selrecord(struct Unk_sceNet_lib_92633D8D_0 *arg0, s32 *arg1);
s32 _sce_pspnet_stop_of_adhoc_module_in_netintr(void);
s32 _sce_pspnet_spllock(void);
s32 _sce_pspnet_start_of_inet_module_in_ifhandle_ether(s32 arg0);
s32 _sce_pspnet_callout_reset_usec(s32, s32, s32, s32);
s32 _sce_pspnet_start_of_adhoc_module_in_netintr(s32 arg0, s32 arg1);
s32 *_sce_pspnet_get_selwait_addr(void);
s32 _sce_pspnet_tiwakeup(s32, s32);
void _sce_pspnet_selwakeup(s32 *arg0);
void _sce_pspnet_unlock_threadinfo(struct Unk_sceNet_lib_C21E18B2_0 *arg0);
s32 _sce_pspnet_get_if_core_variables(s32 *arg0, s32 *arg1, s32 *arg2, u8 *arg3);
void _sce_pspnet_tabort(struct Unk_sceNet_lib_C9C97945_0 *arg0);
s32 sceNetSprintf(s32, s32, s32, s32, s32, s32, s32, s32);
void _sce_pspnet_callout_cleanup(void);
s32 _sce_pspnet_start_of_inet_module_in_sched(s32 arg0, s32 arg1);
void _sce_pspnet_ifafree(void);
u8 *sceNetMemcpy(u8 *arg0, u8 *arg1, s32 arg2);
M2C_UNK sceWlanDrv_lib_8D5F551B(M2C_UNK);

#endif
