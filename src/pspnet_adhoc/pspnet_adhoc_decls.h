#ifndef PSPNET_ADHOC_DECLS_H
#define PSPNET_ADHOC_DECLS_H

#include "common.h"
#include "m2c_macros.h"

typedef struct {
    u32 size;
    u32 flag;
} SceNetAdhocGameModeOptData;

/* queued PDP send entry (callout-driven) */
typedef struct SceNetAdhocPdpQent {
    struct SceNetAdhocPdpQent *next;    /* 0x00 */
    struct SceNetAdhocPdpQent **prev;   /* 0x04 */
    s32 unk8;
    struct mbuf *m;                     /* 0x0C */
    u8 callout[0x34 - 0x10];            /* 0x10 */
    struct SceNetAdhocPdpPcb *pcb;      /* 0x34 */
} SceNetAdhocPdpQent;

typedef struct {
    s32 id;
    s32 events;
    s32 revents;
} SceNetAdhocPollSd;

typedef struct {
    struct mbuf *first;                 /* 0x00 m_nextpkt chain */
    struct mbuf *last;                  /* 0x04 */
    u32 cc;                             /* 0x08 */
    u32 hiwat;                          /* 0x0C */
    u32 lowat;                          /* 0x10 */
    u32 flags;                          /* 0x14 1: wakeup sb, 2: wakeup select */
} SceNetAdhocPtpSockbuf;

/* pspnet SceNetThreadInfo as seen by pspnet_adhoc (1.00: 0x64, 1.50: 0x60 (no sleepcnt), 2.60+: 0x5C (no descs chain)) */
typedef struct SceNetAdhocWaiter {
    u8 unk0[0x20];
    void *wchan;                        /* 0x20 */
    u8 callout[0x48 - 0x24];            /* 0x24 */
    s32 flags;                          /* 0x48 */
    s32 sema;                           /* 0x4C */
#if FW_VERSION < 150
    s16 sleepcnt;                       /* 0x50 */
    u8 unk52[2];
#endif
    u32 unk54;
#if FW_VERSION < 260
    struct SceNetAdhocDesc *descs;      /* 0x58 descriptors this thread waits in (linked by desc->tnext) */
    u32 unk5C;
#else
    u32 unk58;
#endif
    struct SceNetAdhocWaiter *next;     /* 0x60 next waiter of the same descriptor */
} SceNetAdhocWaiter;
typedef char chk_SceNetAdhocWaiter[(sizeof(SceNetAdhocWaiter) == ((FW_VERSION < 150) ? 0x64 : (FW_VERSION < 260) ? 0x60 : 0x5C)) ? 1 : -1];

/* socket descriptor (0x2C), one per PDP/PTP id */
typedef struct SceNetAdhocDesc {
    struct SceNetAdhocDesc *next;   /* 0x00 TAILQ entry */
    struct SceNetAdhocDesc **prev;  /* 0x04 */
    s32 id;                         /* 0x08 */
    s32 flags;                          /* 0x0C 1: deleted, 0x10..0x200: socket alert bits */
    u8 type;                        /* 0x10 SCE_NET_ADHOC_DESC_* */
    u8 pad11[3];
    void *pcb;                      /* 0x14 */
    void *sndchan;                  /* 0x18 wait channel for send events */
    void *rcvchan;                  /* 0x1C wait channel for recv events */
    void *selchan;                  /* 0x20 wait channel for other events */
    SceNetAdhocWaiter *waiters;     /* 0x24 */
    struct SceNetAdhocDesc *tnext;  /* 0x28 next desc of the same waiting thread */
} SceNetAdhocDesc;
typedef char chk_SceNetAdhocDesc[(sizeof(SceNetAdhocDesc) == 0x2C) ? 1 : -1];

typedef struct {
    SceNetAdhocDesc *first;
    SceNetAdhocDesc **last;
} SceNetAdhocDescList;

typedef struct {
    SceNetAdhocDesc *d;
    SceNetAdhocPollSd *sd;
} SceNetAdhocPollEnt;

typedef struct {
    u8 data[6];
} SceNetEtherAddr;

/* game-mode master/replica entry (0x1C) */
typedef struct SceNetAdhocGameMode {
    struct SceNetAdhocGameMode *next;   /* 0x00 TAILQ */
    struct SceNetAdhocGameMode **prev;  /* 0x04 */
    s32 id;                             /* 0x08 */
    SceNetEtherAddr addr;               /* 0x0C */
    void *ptr;                          /* 0x14 */
    s32 size;                           /* 0x18 */
} SceNetAdhocGameMode;

typedef struct {
    SceNetAdhocGameMode *first;
    SceNetAdhocGameMode **last;
} SceNetAdhocGameModeList;

/* PDP control block (1.00: 0x38, 1.50+: 0x34; offsets in comments are 1.00) */
typedef struct SceNetAdhocPdpPcb {
    struct SceNetAdhocPdpPcb *next;     /* 0x00 TAILQ on the PDP list */
    struct SceNetAdhocPdpPcb **prev;    /* 0x04 */
#if FW_VERSION < 150
    struct ifnet *ifp;                  /* 0x08 (1.50+: looked up from laddr) */
#endif
    SceNetEtherAddr laddr;              /* 0x0C */
    u16 lport;                          /* 0x12 */
    struct mbuf *rcvq_first;            /* 0x14 */
    struct mbuf *rcvq_last;             /* 0x18 */
    s32 rcvcc;                          /* 0x1C */
    s32 rcvbufsize;                     /* 0x20 */
    s32 unk24;
    u32 flags;                          /* 0x28 */
    SceNetAdhocDesc *desc;              /* 0x2C */
    SceNetAdhocPdpQent *qfirst;         /* 0x30 */
    SceNetAdhocPdpQent **qlast;         /* 0x34 */
} SceNetAdhocPdpPcb;
typedef char chk_SceNetAdhocPdpPcb[(sizeof(SceNetAdhocPdpPcb) == ((FW_VERSION < 150) ? 0x38 : 0x34)) ? 1 : -1];

typedef struct {
    SceNetAdhocPdpPcb *first;
    SceNetAdhocPdpPcb **last;
} SceNetAdhocPdpList;

typedef struct SceNetAdhocPdpStat {
    struct SceNetAdhocPdpStat *next;    /* 0x00 */
    s32 id;                             /* 0x04 */
    SceNetEtherAddr laddr;              /* 0x08 */
    u16 lport;                          /* 0x0E */
    u32 rcv_sb_cc;                      /* 0x10 */
} SceNetAdhocPdpStat;

/* PTP control block (offsets are 1.00; 1.50+: no ifp (-4), 0x24 more bytes after the callout) */
typedef struct SceNetAdhocPtpPcb {
    struct SceNetAdhocPtpPcb *next;     /* 0x00 TAILQ on the PTP list */
    struct SceNetAdhocPtpPcb **prev;    /* 0x04 */
    struct SceNetAdhocPtpPcb *cnext;    /* 0x08 TAILQ on the listener's children */
    struct SceNetAdhocPtpPcb **cprev;   /* 0x0C */
    struct SceNetAdhocPtpPcb *cfirst;   /* 0x10 children (accept queue) */
    struct SceNetAdhocPtpPcb **clast;   /* 0x14 */
#if FW_VERSION < 150
    struct ifnet *ifp;                  /* 0x18 */
#endif
    SceNetEtherAddr laddr;              /* 0x1C */
    SceNetEtherAddr paddr;              /* 0x22 */
    u16 lport;                          /* 0x28 */
    u16 pport;                          /* 0x2A */
    SceNetAdhocPtpSockbuf snd;          /* 0x2C */
    SceNetAdhocPtpSockbuf rcv;          /* 0x44 */
    SceNetAdhocDesc *desc;              /* 0x5C */
    s32 state;                          /* 0x60 */
    s32 unk64;
    s32 mss;                            /* 0x68 */
    u32 iss;                            /* 0x6C */
    u8 unk70[0x88 - 0x70];
    u8 callout[0xAC - 0x88];            /* 0x88 */
#if FW_VERSION >= 150
    u8 unk150[0x24];
#endif
    u32 rexmt_int;                      /* 0xAC */
    s32 rexmt_cnt;                      /* 0xB0 */
    s32 rexmt_left;                     /* 0xB4 */
    s32 nchildren;                      /* 0xB8 */
    s32 unkBC;
    struct SceNetAdhocPtpPcb *parent;   /* 0xC0 listener */
} SceNetAdhocPtpPcb;
typedef char chk_SceNetAdhocPtpPcb[(sizeof(SceNetAdhocPtpPcb) == ((FW_VERSION < 150) ? 0xC4 : 0xE4)) ? 1 : -1];
typedef char chk_SceNetAdhocPtpPcb_desc[((u32)&((SceNetAdhocPtpPcb *)0)->desc == ((FW_VERSION < 150) ? 0x5C : 0x58)) ? 1 : -1];

typedef struct {
    SceNetAdhocPtpPcb *first;
    SceNetAdhocPtpPcb **last;
} SceNetAdhocPtpList;

typedef struct SceNetAdhocPtpStat {
    struct SceNetAdhocPtpStat *next;    /* 0x00 */
    s32 id;                             /* 0x04 */
    SceNetEtherAddr laddr;              /* 0x08 */
    SceNetEtherAddr paddr;              /* 0x0E */
    u16 lport;                          /* 0x14 */
    u16 pport;                          /* 0x16 */
    u32 snd_sb_cc;                      /* 0x18 */
    u32 rcv_sb_cc;                      /* 0x1C */
    s32 state;                          /* 0x20 */
} SceNetAdhocPtpStat;

struct ifqueue {
    struct mbuf *ifq_head;      /* 0x00 */
    struct mbuf *ifq_tail;      /* 0x04 */
    s32 ifq_len;                /* 0x08 */
    s32 ifq_maxlen;             /* 0x0C */
    s32 ifq_drops;              /* 0x10 */
};

/* pspnet struct ifnet (partial; 0x120 = adhoc wakeup flags) */
struct ifnet {
    u8 unk0[0x30];
    u16 if_flags;                       /* 0x30 IFF_* */
    u8 unk32[0xB8 - 0x32];
    void (*if_start)(struct ifnet *ifp); /* 0xB8 */
    u8 unkBC[0xCC - 0xBC];
    struct ifqueue if_snd;              /* 0xCC */
    struct sockaddr_dl *if_sadl;        /* 0xE0 */
    u8 unkE4[0x120 - 0xE4];
    u32 if_adhocflags;                  /* 0x120 */
};
#define IFF_OACTIVE 0x400

/* NetBSD 1.5 mbuf as in pspnet (partial) */
struct mbuf {
    struct mbuf *m_next;        /* 0x00 */
    struct mbuf *m_nextpkt;     /* 0x04 */
    u8 *m_data;                 /* 0x08 */
    s32 m_len;                  /* 0x0C */
    s16 m_type;                 /* 0x10 */
    s16 m_flags;                /* 0x12 */
    struct {
        struct ifnet *rcvif;    /* 0x14 */
        s32 len;                /* 0x18 */
    } m_pkthdr;
};

struct sockaddr_dl {
    u8 sdl_len;
    u8 sdl_family;
    u16 sdl_index;
    u8 sdl_type;
    u8 sdl_nlen;
    u8 sdl_alen;
    u8 sdl_slen;
    char sdl_data[12];
};
#define LLADDR(s) ((u8 *)((s)->sdl_data + (s)->sdl_nlen))

/* NetBSD 1.5 if.h queue macros */
#define IF_QFULL(ifq) ((ifq)->ifq_len >= (ifq)->ifq_maxlen)
#define IF_DROP(ifq) ((ifq)->ifq_drops++)
#define IF_ENQUEUE(ifq, m) do { \
        (m)->m_nextpkt = 0; \
        if ((ifq)->ifq_tail == 0) \
            (ifq)->ifq_head = m; \
        else \
            (ifq)->ifq_tail->m_nextpkt = m; \
        (ifq)->ifq_tail = m; \
        (ifq)->ifq_len++; \
    } while (0)
#define IF_DEQUEUE(ifq, m) do { \
        (m) = (ifq)->ifq_head; \
        if (m) { \
            if (((ifq)->ifq_head = (m)->m_nextpkt) == 0) \
                (ifq)->ifq_tail = 0; \
            (m)->m_nextpkt = 0; \
            (ifq)->ifq_len--; \
        } \
    } while (0)

#define PTP_SBWAKEUP(sb) do { \
        if ((sb)->flags & 1) { \
            (sb)->flags &= ~1; \
            _sce_pspnet_wakeup(sb); \
        } \
        if ((sb)->flags & 2) { \
            (sb)->flags &= ~2; \
            _sce_pspnet_wakeup(&D_00007448); \
        } \
    } while (0)

extern s32 D_000073F0;
extern s32 D_00007400;
extern s32 D_00007448;
extern M2C_UNK D_00007450;
extern const SceNetEtherAddr D_000078A4; /* ff:ff:ff:ff:ff:ff */
extern const SceNetEtherAddr D_000078AC; /* 00:00:00:00:00:00 */
extern struct ifqueue D_00007984;
extern SceNetAdhocDescList D_00007998;
extern s32 D_000079A0;
extern SceNetAdhocPdpList D_000079A4;
extern u16 D_000079AC;
extern SceNetAdhocPtpList D_000079B0;
extern u16 D_000079B8;
extern u32 D_000079BC;
extern SceNetAdhocGameModeList D_000079C0;
extern M2C_UNK D_000079CC;
extern u16 D_000079E4;
extern M2C_UNK D_000079E8;
extern M2C_UNK D_00007A8C;
extern M2C_UNK D_00007CC8;

void _sce_pspnet_adhoc_sabort(SceNetAdhocDesc *d, s32 flag);
void _sce_pspnet_callout_init(void *c);
void _sce_pspnet_callout_reset_usec(void *c, u32 usec, void *func, void *arg);
void _sce_pspnet_callout_stop(void *c);
struct ifnet *_sce_pspnet_ifplookup_lladdr(const SceNetEtherAddr *addr);
void _sce_pspnet_schednetintr_with_evf(s32 bit);
s32 _sce_pspnet_spllock(void);
void _sce_pspnet_splunlock(s32 s);
s32 _sce_pspnet_start_of_adhoc_module_in_if_ethersubr_core(void *func);
s32 _sce_pspnet_start_of_adhoc_module_in_netintr(void *intr, void *wakeup);
s32 _sce_pspnet_start_of_adhoc_module_in_sched(void *func);
void _sce_pspnet_stop_of_adhoc_module_in_if_ethersubr_core(void);
void _sce_pspnet_stop_of_adhoc_module_in_netintr(void);
void _sce_pspnet_stop_of_adhoc_module_in_sched(void);
SceNetAdhocWaiter *_sce_pspnet_thread_enter(void);
void _sce_pspnet_thread_leave(SceNetAdhocWaiter *ti, s32 flag);
void _sce_pspnet_wakeup(void *chan);
void func_00000270(void);
void func_0000036C(struct ifnet *ifp, struct mbuf *m);
void func_00000444(struct ifnet *ifp);
s32 func_0000047C(s32 a0, s32 a1, struct ifqueue **out);
void func_00000490(s32 arg0);
s32 func_0000092C(SceNetAdhocPollEnt *ent, s32 count);
s32 func_00000974(SceNetAdhocPollEnt *ent, s32 count);
s32 func_00000DD0(void);
void func_00000E18(void);
s32 func_00000E44(void);
SceNetAdhocDesc *func_00000E90(u8 type, s32 id);
s32 func_00000ED0(u8 type, SceNetAdhocDesc **out);
void func_00000FFC(SceNetAdhocDesc *d);
s32 func_00001044(void);
void func_00001078(SceNetAdhocDesc *d, s32 events);
s32 func_00001F20(s32 id, SceNetEtherAddr *addr, u16 *port, void *buf, s32 *len, u32 timeout, s32 nonblock, void *rfinfo);
s32 func_00002108(SceNetAdhocPdpPcb *pcb, const SceNetEtherAddr *addr, u16 port);
void func_0000223C(SceNetAdhocPdpPcb *pcb);
void func_000023C4(struct mbuf *m);
s32 func_0000297C(void);
void func_000029E8(void);
s32 func_00002A9C(SceNetAdhocDesc *d);
s32 func_00002B84(SceNetAdhocPdpPcb *pcb, s32 size);
void func_00002B90(struct ifnet *ifp);
s32 func_00002C00(SceNetAdhocDesc *d, s32 events);
void func_00002CD4(SceNetAdhocDesc *d);
s32 func_00002D20(SceNetAdhocPdpPcb *pcb, s32 size);
s32 func_00002D2C(s32);
s32 func_00002D94(SceNetAdhocDesc *d, s32 events);
void func_00002E48(SceNetAdhocPdpQent *e);
void func_000039FC(SceNetAdhocDesc *d);
s32 func_00003A68(const SceNetEtherAddr *saddr, u16 sport, s32 sndbuf, s32 rcvbuf, u32 rexmt_int, s32 rexmt_cnt, SceNetAdhocDesc **out);
void func_00003BB0(SceNetAdhocDesc *d);
s32 func_00004918(SceNetAdhocPtpPcb *pcb, const SceNetEtherAddr *addr, u16 port);
void func_00004964(void);
void func_00004AE4(SceNetAdhocDesc *d);
void func_00004B30(SceNetAdhocPtpPcb *pcb);
void func_00004E60(SceNetAdhocPtpPcb *pcb);
s32 func_00004E98(SceNetAdhocPtpPcb *pcb);
void func_00004F50(SceNetAdhocPtpPcb *pcb);
s32 func_00005024(SceNetAdhocDesc *d, s32 events);
s32 func_000050F8(SceNetAdhocDesc *d, s32 events);
s32 func_000052D4(void);
SceNetAdhocPtpPcb *func_0000532C(const SceNetEtherAddr *laddr, u16 lport, const SceNetEtherAddr *paddr, u16 pport);
s32 func_0000548C(SceNetAdhocDesc *d);
void func_00005528(SceNetAdhocPtpPcb *pcb);
s32 func_00005544(SceNetAdhocPtpPcb *pcb, s32 sndsize, s32 rcvsize);
void func_00005560(SceNetAdhocPtpPcb *pcb, s32 a1, s32 a2);
s32 func_0000556C(SceNetAdhocPtpPcb *pcb, const SceNetEtherAddr *daddr, u16 dport);
s32 func_00005594(SceNetAdhocPtpPcb *pcb, s32 sndsize, s32 rcvsize);
void func_000055B0(SceNetAdhocPtpPcb *pcb, s32 a1, s32 a2);
s32 func_000056B0(SceNetAdhocPtpPcb *pcb, s32 a1);
void func_000056D4(SceNetAdhocPtpPcb *pcb);
s32 func_000056E4(SceNetAdhocPtpPcb *pcb, s32 a1);
void func_00005708(SceNetAdhocPtpPcb *pcb);
void func_0000578C(struct mbuf *m);
void func_00006340(SceNetAdhocPtpPcb *pcb, s32 type);
s32 func_00006880(void);
void func_000069D4(SceNetAdhocPtpPcb *pcb);
s32 func_00006AB8(const SceNetEtherAddr *addr, void *ptr, s32 size);
s32 func_00006BB8(s32 id);
s32 func_00006C3C(s32 id, SceNetAdhocGameModeOptData *opt, s32 internal);
void *func_00006D6C(const void *s, s32 c, s32 n);
void *func_00006DA4(void *dst, const void *src, s32 n);
s32 func_00006E18(const void *a, const void *b, s32 n);
void *func_00006E58(void *dst, const void *src, s32 n);
void *func_00006E8C(void *s, s32 c, s32 n);
s32 func_00006EB8(const void *a, const void *b, s32 n);
void func_00006EF8(const void *src, void *dst, s32 n);
void func_00006F1C(void *s, s32 n);
s32 func_00006F68(void);
void func_00006F80(void);
s32 func_00007298(s32 id, SceNetAdhocGameModeOptData *opt, s32 internal);
s32 module_start(void);
s32 module_stop(void);
s32 sceKernelSignalSema(s32 sema, s32 n);
s32 sceNetAdhocGameModeCreateMaster(void *ptr, s32 size);
s32 sceNetAdhocGameModeCreateReplica(const SceNetEtherAddr *addr, void *ptr, s32 size);
s32 sceNetAdhocGameModeDeleteMaster(void);
s32 sceNetAdhocGameModeDeleteReplica(s32 id);
s32 sceNetAdhocGameModeUpdateMaster(void);
void sceNetAdhocGameModeUpdateReplica(s32 id, SceNetAdhocGameModeOptData *opt);
void sceNetAdhocGameModeUpdateReplicaInternal(s32 id, SceNetAdhocGameModeOptData *opt);
s32 sceNetAdhocGetPdpStat(s32 *buflen, SceNetAdhocPdpStat *buf);
s32 sceNetAdhocGetPtpStat(s32 *buflen, SceNetAdhocPtpStat *buf);
s32 sceNetAdhocGetSocketAlert(s32 id, s32 *flag);
s32 sceNetAdhocInit(void);
s32 sceNetAdhocPdpDelete(s32 id, s32 flag);
s32 sceNetAdhocPdpRecv(s32 id, SceNetEtherAddr *addr, u16 *port, void *buf, s32 *len, u32 timeout, s32 nonblock);
s32 sceNetAdhocPdpRecvWithRfInfo(s32 id, SceNetEtherAddr *addr, u16 *port, void *buf, s32 *len, u32 timeout, s32 nonblock, void *rfinfo);
s32 sceNetAdhocPtpClose(s32 id, s32 flag);
s32 sceNetAdhocPtpListen(const SceNetEtherAddr *saddr, u16 sport, s32 bufsize, u32 rexmt_int, s32 rexmt_cnt, s32 backlog, s32 flag);
s32 sceNetAdhocPtpOpen(const SceNetEtherAddr *saddr, u16 sport, const SceNetEtherAddr *daddr, u16 dport, s32 bufsize, u32 rexmt_int, s32 rexmt_cnt, s32 flag);
s32 sceNetAdhocSetSocketAlert(s32 id, s32 flag);
s32 sceNetAdhocTerm(void);
void sceNetAdhoc_lib_62B875A8(void);
void sceNetAdhoc_lib_F9240FBA(void);
void sceNetFreeInternal(void *p);
s32 sceNetGetLocalEtherAddr(SceNetEtherAddr *addr);
void sceNetMCopydata(struct mbuf *m, s32 off, s32 len, void *cp);
void sceNetMFreem(struct mbuf *m);
void *sceNetMallocInternal(u32 size);
void *sceNetMemset(void *s, s32 c, s32 n);
u32 sceNetRand(void);
s32 sceWlanDevIsGameMode(void);
s32 sceWlanGPPrevEstablishActive(const SceNetEtherAddr *addr);
s32 sceWlanGPRecv(s32 id, void *ptr, s32 size, SceNetAdhocGameModeOptData *opt);
s32 sceWlanGPSend(s32 id, void *ptr, s32 size);

#endif
