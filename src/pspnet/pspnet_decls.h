#ifndef PSPNET_DECLS_H
#define PSPNET_DECLS_H

#include "common.h"
#include "m2c_macros.h"

/* NetBSD 1.5 sys/queue.h */
#define TAILQ_HEAD(name, type) struct name { struct type *tqh_first; struct type **tqh_last; }
#define TAILQ_ENTRY(type) struct { struct type *tqe_next; struct type **tqe_prev; }
#define TAILQ_FIRST(head) ((head)->tqh_first)
#define TAILQ_NEXT(elm, field) ((elm)->field.tqe_next)
#define TAILQ_INIT(head) do { \
    (head)->tqh_first = NULL; \
    (head)->tqh_last = &(head)->tqh_first; \
} while (0)
#define TAILQ_INSERT_TAIL(head, elm, field) do { \
    (elm)->field.tqe_next = NULL; \
    (elm)->field.tqe_prev = (head)->tqh_last; \
    *(head)->tqh_last = (elm); \
    (head)->tqh_last = &(elm)->field.tqe_next; \
} while (0)
#define TAILQ_REMOVE(head, elm, field) do { \
    if (((elm)->field.tqe_next) != NULL) \
        (elm)->field.tqe_next->field.tqe_prev = (elm)->field.tqe_prev; \
    else \
        (head)->tqh_last = (elm)->field.tqe_prev; \
    *(elm)->field.tqe_prev = (elm)->field.tqe_next; \
} while (0)

/* SCE callout (NetBSD 1.5 kern_timeout.c API on top of sceKernelSetAlarm), 0x24 bytes */
struct callout {
    TAILQ_ENTRY(callout) c_qlink;   /* 0x00 on the fired queue (alarm handler -> callout thread) */
    TAILQ_ENTRY(callout) c_link;    /* 0x08 on the pending queue */
    void (*c_func)(void *arg);      /* 0x10 */
    void *c_arg;                    /* 0x14 */
    u32 c_time;                     /* 0x18 usec */
    s32 c_flags;                    /* 0x1C CALLOUT_* */
    SceUID c_alarm;                 /* 0x20 sceKernelSetAlarm id */
};
typedef char chk_callout[(sizeof(struct callout) == 0x24) ? 1 : -1];
#define CALLOUT_ACTIVE  0x0001
#define CALLOUT_PENDING 0x0002
TAILQ_HEAD(calloutq, callout);

/* SCE per-thread info ("SceNetThreadInfo", 0x64 bytes in 1.00, 0x60 in 1.50-2.50, 0x5C from 2.60) */
struct SceNetThreadInfo {
    TAILQ_ENTRY(SceNetThreadInfo) ti_link;      /* 0x00 on the thread list */
    SceUID ti_thid;                             /* 0x08 */
    s16 ti_refcnt;                              /* 0x0C */
    u8 unkE[2];
    s32 ti_errno;                               /* 0x10 */
    u32 unk14;
    TAILQ_ENTRY(SceNetThreadInfo) ti_slplink;   /* 0x18 on a sleep queue */
    void *ti_wchan;                             /* 0x20 */
    struct callout ti_callout;                  /* 0x24 tsleep timeout */
    s32 ti_flags;                               /* 0x48 TI_* */
    SceUID ti_sema;                             /* 0x4C */
#if FW_VERSION < 150
    s16 ti_sleepcnt;                            /* 0x50 enter/leave nesting; ti_sema lives while > 0 */
    u8 unk52[2];
#endif
#if FW_VERSION < 260
    u8 unk50[0x10];                             /* 0x54 (1.00) / 0x50: used by pspnet_inet (waiter sockets) */
#else
    u8 unk50[0xC];
#endif
};
#if FW_VERSION < 150
typedef char chk_SceNetThreadInfo[(sizeof(struct SceNetThreadInfo) == 0x64) ? 1 : -1];
#elif FW_VERSION < 260
typedef char chk_SceNetThreadInfo[(sizeof(struct SceNetThreadInfo) == 0x60) ? 1 : -1];
#else
typedef char chk_SceNetThreadInfo[(sizeof(struct SceNetThreadInfo) == 0x5C) ? 1 : -1];
#endif
TAILQ_HEAD(SceNetThreadList, SceNetThreadInfo);
#define TI_TIMEDOUT 0x1
#define TI_ABORTED  0x2

TAILQ_HEAD(slpque, SceNetThreadInfo);
#define SLPQUE_TABLESIZE 128
#define LOOKUP(x) (((u32)(x) >> 8) & (SLPQUE_TABLESIZE - 1))

struct timeval {
    u32 tv_sec;
    u32 tv_usec;
};


typedef struct {
    u32 low;
    u32 hi;
} SceKernelSysClock;

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

struct Unk_sceNet_lib_92633D8D_0 {
    u8 pad0[0x8];
    s32 unk8;
};

extern s32 D_0000A0D0;
extern s32 D_0000A0E4;
extern s32 D_0000A10D;
extern s32 D_0000A860;
extern s32 D_0000A864;
extern s32 D_0000A868;
extern SceUID D_0000A86C;
extern SceUID D_0000A870;
extern s32 D_0000A874;
extern s32 D_0000A878;
extern const char D_0000A88C[];
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
extern void (*D_0000AC58)(struct SceNetThreadInfo *);
extern struct slpque D_0000AC6C[SLPQUE_TABLESIZE];
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
extern struct SceNetThreadList D_0000AF44;
extern struct calloutq D_0000AF4C;
extern struct calloutq D_0000AF54;
extern void (*D_0000AF5C)(struct SceNetThreadInfo *);
extern void (*D_0000AF60)(s32, s32);
extern void (*D_0000AF64)(s32);
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
extern u32 D_0000B3E4[521];
extern s32 D_0000B91C;
extern s32 D_0000BC08;
extern M2C_UNK D_0000BC0C;
extern u8 D_0000BE54;

void _sce_pspnet_adhoc_sabort(s32 a, s32 b);
void _sce_pspnet_callout_cleanup(struct callout *c);
void _sce_pspnet_callout_init(struct callout *c);
void _sce_pspnet_callout_reset(struct callout *c, u32 ticks, void (*func)(void *), void *arg);
void _sce_pspnet_callout_reset_usec(struct callout *c, u32 usec, void (*func)(void *), void *arg);
void _sce_pspnet_callout_stop(struct callout *c);
s32 _sce_pspnet_get_if_core_variables(s32 *arg0, s32 *arg1, s32 *arg2, u8 *arg3);
s32 *_sce_pspnet_get_selwait_addr(void);
struct SceNetThreadInfo *_sce_pspnet_get_threadinfo(SceUID thid);
void _sce_pspnet_hashdone(void *hashtbl);
void *_sce_pspnet_hashinit(s32 elements, u32 *hashmask);
s32 _sce_pspnet_if_nulloutput(void);
void _sce_pspnet_ifafree(void *ifa);
void _sce_pspnet_inet_sabort(s32 a);
struct SceNetThreadInfo *_sce_pspnet_lock_threadinfo(SceUID thid);
void _sce_pspnet_microtime(struct timeval *tv);
void _sce_pspnet_schednetintr(s32 arg0);
void _sce_pspnet_schednetintr_with_evf(s32 arg0);
void _sce_pspnet_selrecord(struct Unk_sceNet_lib_92633D8D_0 *arg0, s32 *arg1);
void _sce_pspnet_selwakeup(s32 *arg0);
s32 _sce_pspnet_spllock(void);
s32 _sce_pspnet_spllock_owner(void);
void _sce_pspnet_splunlock(s32 arg0);
s32 _sce_pspnet_start_of_adhoc_module_in_if_ethersubr_core(s32 arg0);
s32 _sce_pspnet_start_of_adhoc_module_in_netintr(s32 arg0, s32 arg1);
s32 _sce_pspnet_start_of_adhoc_module_in_sched(void (*sabort)(s32, s32));
s32 _sce_pspnet_start_of_inet_module_in_ifhandle_ether(s32 arg0);
s32 _sce_pspnet_start_of_inet_module_in_netintr(s32 arg0, s32 arg1);
s32 _sce_pspnet_start_of_inet_module_in_sched(void (*sleephook)(struct SceNetThreadInfo *), void (*sabort)(s32));
s32 _sce_pspnet_start_of_ipv6_module_in_netintr(s32 arg0);
s32 _sce_pspnet_start_of_pppoe_module_in_netintr(s32 arg0);
s32 _sce_pspnet_stop_of_adhoc_module_in_if_ethersubr_core(void);
s32 _sce_pspnet_stop_of_adhoc_module_in_netintr(void);
s32 _sce_pspnet_stop_of_adhoc_module_in_sched(void);
s32 _sce_pspnet_stop_of_inet_module_in_ifhandle_ether(void);
s32 _sce_pspnet_stop_of_inet_module_in_netintr(void);
s32 _sce_pspnet_stop_of_inet_module_in_sched(void);
s32 _sce_pspnet_stop_of_ipv6_module_in_netintr(void);
s32 _sce_pspnet_stop_of_pppoe_module_in_netintr(void);
void _sce_pspnet_tabort(struct SceNetThreadInfo *arg0);
s32 _sce_pspnet_thread_busycount(void);
struct SceNetThreadInfo *_sce_pspnet_thread_enter(void);
s32 _sce_pspnet_thread_leave(struct SceNetThreadInfo *ti, s32 err);
void _sce_pspnet_tiwakeup(SceUID thid, void *ident);
s32 _sce_pspnet_tsleep(void *ident, u32 timo);
s32 _sce_pspnet_tsleep_usec(void *ident, u32 usec);
void _sce_pspnet_unlock_threadinfo(struct SceNetThreadInfo *arg0);
void _sce_pspnet_wakeup(void *ident);
s32 func_00001B7C(void);
void func_00001E74(void);
s32 func_00001F0C(void);
s32 func_00002248(void);
void func_00002300(void);
void func_0000260C(void);
void func_00002C34(void);
s32 func_00002E8C(s32 prio, s32 stackSize);
s32 func_00002FD8(SceSize args, void *argp);
void func_00003028(void);
u32 func_000030A8(void *common);
void func_000030A8_v100(struct SceNetThreadInfo *arg0);
void func_00003100(struct SceNetThreadInfo *arg0);
s32 func_0000331C(void);
void func_00003380(void);
void func_00003400(struct SceNetThreadInfo *arg0);
void func_0000348C(void);
s32 func_00003790(void);
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
s32 func_00007A68(char c);
char func_00007B50(char c);
M2C_UNK *func_00007BBC(void);
void *func_00007BD4(const void *s, s32 c, s32 n);
void *func_00007C0C(void *dst, const void *src, s32 n);
s32 func_00007C80(const void *s1, const void *s2, s32 n);
u8 *func_00007CC0(u8 *arg0, u8 *arg1, s32 arg2);
void *func_00007CF4(void *s, s32 c, s32 n);
s32 func_00007D20(const void *s1, const void *s2, s32 n);
void func_00007D60(const void *src, void *dst, s32 n);
void func_00007D84(void *s, s32 n);
s32 func_00007DAC(const char *s1, const char *s2);
char *func_00007E2C(const char *s, s32 c);
char *func_00007E5C(const char *s, s32 c);
s32 func_00007EA4(const char *s1, const char *s2, s32 n);
char *func_00007F3C(char *dst, const char *src, s32 n);
char *func_00007FB8(const char *s, s32 c);
u8 *func_00007FE8(u8 *arg0, u8 *arg1);
s32 func_00008020(const char *s);
s32 func_00008054(char *buf, const char *fmt, ...);
s32 func_00008790(s32, s32, s32);
s32 func_00008794(s32, s32, s32);
void func_000087C8(char **pp, s32 c);
char func_0000881C(char c);
char func_00008848(s32 c);
s32 *func_0000885C(void);
s32 module_start(void);
s32 module_stop(void);
s32 sceKernelCreateSema(void *, u32, s32, s32, void *);
s32 sceKernelDeleteEventFlag(s32);
s32 sceKernelDeleteSema(s32);
s32 sceKernelDeleteThread(s32);
s32 sceKernelGetSystemTime(SceKernelSysClock *clock);
s32 sceKernelGetThreadId(void);
s32 sceKernelSetEventFlag(s32, u32);
s32 sceKernelSignalSema(s32, s32);
s32 sceKernelSysClock2USec(SceKernelSysClock *clock, u32 *sec, u32 *usec);
s32 sceKernelTerminateThread(s32);
s32 sceKernelWaitSema(s32, s32, void *);
void sceNetAtoi(s32 arg0);
void sceNetEtherNtostr(struct Unk_sceNetEtherNtostr_0 *arg0, s32 arg1);
void sceNetEtherStrton(const char *str, u8 *mac);
void sceNetFreeInternal(void *p);
s32 sceNetFreeThreadinfo(SceUID thid);
void sceNetGetMallocStat(void);
M2C_UNK sceNetGetMallocStatInternal();
u32 sceNetGetSystemClockSec(void);
s64 sceNetGetSystemClockUsec(void);
M2C_UNK sceNetIfhandleTerm();
s32 sceNetIfhandle_lib_0C391E9F();
M2C_UNK sceNetIfhandle_lib_29ED84C5();
M2C_UNK sceNetMFreem(void *);
void *sceNetMallocInternal(u32 size);
u8 *sceNetMemcpy(u8 *arg0, u8 *arg1, s32 arg2);
u32 sceNetRand(void);
s32 sceNetSprintf(s32, s32, s32, s32, s32, s32, s32, s32);
u8 *sceNetStrcpy(u8 *arg0, u8 *arg1);
s32 sceNetTerm(void);
s32 sceNetThreadAbort(SceUID thid);
M2C_UNK sceWlanDrv_lib_8D5F551B(M2C_UNK);

#endif
