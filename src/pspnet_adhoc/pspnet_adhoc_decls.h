#ifndef PSPNET_ADHOC_DECLS_H
#define PSPNET_ADHOC_DECLS_H

#include "common.h"
#include "m2c_macros.h"

typedef struct {
    u32 size;
    u32 flag;
} SceNetAdhocGameModeOptData;

typedef struct {
    s32 unk0;
    s32 unk4;
} SceNetAdhocPdpRfInfo;

/* 1.50+ PDP statistics counters (0x18) */
typedef struct {
    u32 stat[6];
} SceNetAdhocPdpStatCnt;

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

/* adhoc statistics counters (1.00: 0x30, 1.50+: 0x7C) */
typedef struct {
#if FW_VERSION < 150
    u32 stat[12];
#else
    u32 stat[31];
#endif
} SceNetAdhocStat;
typedef char chk_SceNetAdhocStat[(sizeof(SceNetAdhocStat) == ((FW_VERSION < 150) ? 0x30 : 0x7C)) ? 1 : -1];
#if FW_VERSION < 150
#define ADHOC_STAT_PTP_REXMT 9
#define ADHOC_STAT_PTP_PROBE 10
#define ADHOC_STAT_PTP_WNDWAIT 11
#else
#define ADHOC_STAT_PTP_SENT 12
#define ADHOC_STAT_PTP_REXMT 28
#define ADHOC_STAT_PTP_PROBE 29
#define ADHOC_STAT_PTP_WNDWAIT 30
#endif

typedef struct {
    u8 data[6];
} SceNetEtherAddr;

/* game-mode master/replica entry (1.00: 0x1C) */
typedef struct SceNetAdhocGameMode {
    struct SceNetAdhocGameMode *next;   /* 0x00 TAILQ */
    struct SceNetAdhocGameMode **prev;  /* 0x04 */
    s32 id;                             /* 0x08 */
    SceNetEtherAddr addr;               /* 0x0C */
    void *ptr;                          /* 0x14 */
    s32 size;                           /* 0x18 */
#if FW_VERSION >= 150
    void *buf;                          /* 0x1C signed copy */
    s32 buflen;                         /* 0x20 */
#endif
} SceNetAdhocGameMode;

typedef struct {
    SceNetAdhocGameMode *first;
    SceNetAdhocGameMode **last;
} SceNetAdhocGameModeList;

typedef struct SceNetAdhocPdpStat {
    struct SceNetAdhocPdpStat *next;    /* 0x00 */
    s32 id;                             /* 0x04 */
    SceNetEtherAddr laddr;              /* 0x08 */
    u16 lport;                          /* 0x0E */
    u32 rcv_sb_cc;                      /* 0x10 */
} SceNetAdhocPdpStat;

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

/* pspnet callout (0x24, partial) */
struct callout {
    u8 unk0[0x1C];
    u32 c_flags;                        /* 0x1C CALLOUT_* */
    u8 unk20[4];
};
#define CALLOUT_PENDING 0x1

/* queued PDP send entry (callout-driven) */
typedef struct SceNetAdhocPdpQent {
    struct SceNetAdhocPdpQent *next;    /* 0x00 */
    struct SceNetAdhocPdpQent **prev;   /* 0x04 */
    s32 unk8;
    struct mbuf *m;                     /* 0x0C */
    u8 callout[0x34 - 0x10];            /* 0x10 */
    struct SceNetAdhocPdpPcb *pcb;      /* 0x34 */
} SceNetAdhocPdpQent;

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

typedef struct {
    SceNetAdhocDesc *d;
    SceNetAdhocPollSd *sd;
} SceNetAdhocPollEnt;

/* PTP control block (offsets are 1.00; 1.50+: no ifp (-4), a second callout) */
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
    u32 nsent;                          /* 0x70 */
    u32 snd_una;                        /* 0x74 */
    u32 snd_nxt;                        /* 0x78 */
    u32 rcv_nxt;                        /* 0x7C */
    s32 snd_wnd;                        /* 0x80 */
    s32 snd_inflight;                   /* 0x84 */
    struct callout callout;             /* 0x88 */
#if FW_VERSION >= 150
    struct callout callout2;            /* 1.50+: 0xA8 */
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

struct m_ext {
    u8 *ext_buf;                /* 0x30 */
    void (*ext_free)(u8 *buf, u32 size, void *arg); /* 0x34 */
    void *ext_arg;              /* 0x38 */
    u32 ext_size;               /* 0x3C */
    s32 ext_type;               /* 0x40 */
    struct mbuf *ext_nextref;   /* 0x44 */
    struct mbuf *ext_prevref;   /* 0x48 */
};

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
        struct mbuf *aux;       /* 0x1C */
        s16 unk20;              /* 0x20 rf info (adhoc) */
        s16 unk22;
        u32 unk24;
        u32 sendtime[2];        /* 0x28 1.50+: u64 first-send time */
    } m_pkthdr;
    union {
        struct m_ext MH_ext;    /* 0x30 (M_EXT) */
        u8 MH_databuf[0x100 - 0x30];
    } M_dat;
};
#define MT_DATA 1
#define M_PKTHDR 0x0002
#define m_ext M_dat.MH_ext
#define m_dat M_dat.MH_databuf
#define M_EXT 0x0001
#define M_CLUSTER 0x0008
#define MCLBYTES 0x800
#define MCLINITREFERENCE(m) do { \
        (m)->m_ext.ext_prevref = (m); \
        (m)->m_ext.ext_nextref = (m); \
    } while (0)
#define MCLGET(m) do { \
    (m)->m_ext.ext_buf = sceNetMallocInternal(MCLBYTES); \
    if ((m)->m_ext.ext_buf == NULL) \
        (m)->m_ext.ext_buf = sceNetMallocInternal(MCLBYTES); \
    if ((m)->m_ext.ext_buf != NULL) { \
        (m)->m_data = (m)->m_ext.ext_buf; \
        (m)->m_flags |= M_EXT | M_CLUSTER; \
        (m)->m_ext.ext_size = MCLBYTES; \
        (m)->m_ext.ext_free = NULL; \
        (m)->m_ext.ext_arg = NULL; \
        MCLINITREFERENCE(m); \
    } \
} while (0)

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

#if FW_VERSION < 150
#define ADHOC_CLOCK() sceNetGetSystemClockUsec()
#else
#define ADHOC_CLOCK() sceKernelGetSystemTimeWide()
#endif

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

#if FW_VERSION < 201
#define ADHOC_MEMCMP adhocMemcmp
#else
#define ADHOC_MEMCMP sceNetMemcmp
#endif

#if FW_VERSION < 201
#define ADHOC_MEMCPY adhocMemcpy
#else
#define ADHOC_MEMCPY sceNetMemcpy
#endif

#if FW_VERSION < 201
#define ADHOC_MEMSET adhocMemset
#else
#define ADHOC_MEMSET sceNetMemset
#endif

#define PTP_SBWAKEUP(sb) do { \
        if ((sb)->flags & 1) { \
            (sb)->flags &= ~1; \
            _sce_pspnet_wakeup(sb); \
        } \
        if ((sb)->flags & 2) { \
            (sb)->flags &= ~2; \
            _sce_pspnet_wakeup(&g_adhocSelChan); \
        } \
    } while (0)

/* receive-window update threshold (2.01+ computes it signed) */
#if FW_VERSION < 201
#define ADHOC_RCV_Q(pcb) ((pcb)->rcv.hiwat >> 2)
#else
#define ADHOC_RCV_Q(pcb) ((s32)(pcb)->rcv.hiwat / 4)
#endif

#if FW_VERSION < 150
#define PTP_SEND_FRAME(pcb, type, seq, m) ptpSendFrame((pcb)->ifp, &(pcb)->laddr, (pcb)->lport, &(pcb)->paddr, (pcb)->pport, type, seq, m)
#else
#define PTP_SEND_FRAME(pcb, type, seq, m) ptpSendFrameL(&(pcb)->laddr, (pcb)->lport, &(pcb)->paddr, (pcb)->pport, type, seq, m)
#endif

extern const SceNetEtherAddr D_000078A4; /* ff:ff:ff:ff:ff:ff */
extern const SceNetEtherAddr D_000078AC; /* 00:00:00:00:00:00 */
extern u16 D_000079E4;
extern SceNetAdhocDescList g_adhocDescList;
extern s32 g_adhocInit;
extern struct ifqueue g_adhocIntrq;
extern s32 g_adhocLastId;
extern s32 g_adhocSelChan;
extern SceNetAdhocStat g_adhocStat;
extern SceNetAdhocGameModeList g_gameModeList;
extern s32 g_gameModeMasterId;
extern u16 g_pdpLastPort;
extern SceNetAdhocPdpList g_pdpList;
extern SceNetAdhocPdpStatCnt g_pdpStat;
extern u32 g_ptpIss;
extern u16 g_ptpLastPort;
extern SceNetAdhocPtpList g_ptpList;

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
SceNetAdhocWaiter *_sce_pspnet_thread_enter(); /* 2.01+: (s32 *err) */
void _sce_pspnet_thread_leave(SceNetAdhocWaiter *ti, s32 flag);
s32 _sce_pspnet_tsleep_usec(void *chan, u32 usec);
void _sce_pspnet_wakeup(void *chan);
void adhocBcopy(const void *src, void *dst, s32 n);
void adhocBzero(void *s, s32 n);
s32 adhocDescAlloc(u8 type, SceNetAdhocDesc **out);
s32 adhocDescAllocId(void);
s32 adhocDescAnyWaiting(void);
void adhocDescFree(SceNetAdhocDesc *d);
s32 adhocDescInit(void);
SceNetAdhocDesc *adhocDescLookup(u8 type, s32 id);
void adhocDescTerm(void);
void adhocDescWakeup(SceNetAdhocDesc *d, s32 events);
void adhocEtherInput(struct ifnet *ifp, struct mbuf *m);
s32 adhocGetIntrq(s32 a0, s32 a1, struct ifqueue **out);
void adhocIfWakeup(struct ifnet *ifp);
void *adhocMemchr(const void *s, s32 c, s32 n);
s32 adhocMemcmp(const void *a, const void *b, s32 n);
s32 adhocMemcmp2(const void *a, const void *b, s32 n);
void *adhocMemcpy(void *dst, const void *src, s32 n);
void *adhocMemmove(void *dst, const void *src, s32 n);
void *adhocMemset(void *s, s32 c, s32 n);
void adhocNetIntr(void);
s32 adhocPollScan(SceNetAdhocPollEnt *ent, s32 count);
void func_00000490(s32 arg0);
s32 func_00000974(SceNetAdhocPollEnt *ent, s32 count);
s32 func_00001600(SceNetAdhocDesc *d, const SceNetEtherAddr *daddr, u16 dport, const void *data, s32 len, u32 timeout, s32 nonblock);
s32 func_000016B4(SceNetAdhocDesc *d, const SceNetEtherAddr *daddr, u16 dport, const void *data, s32 len, u32 timeout, s32 nonblock);
s32 func_00001C28(SceNetAdhocDesc *d, SceNetEtherAddr *addr, u16 *port, void *buf, s32 *len, u32 timeout, s32 nonblock, SceNetAdhocPdpRfInfo *rfinfo);
s32 func_0000215C(s32 id, SceNetEtherAddr *addr, u16 *port, void *buf, s32 *len, u32 timeout, s32 nonblock, void *rfinfo);
void func_000022FC(struct mbuf *m);
s32 func_00002D20(SceNetAdhocPdpPcb *pcb, s32 size);
s32 func_00002D2C(s32);
s32 func_00003A68(const SceNetEtherAddr *saddr, u16 sport, const SceNetEtherAddr *daddr, u16 dport, s32 sndbuf, s32 rcvbuf, u32 rexmt_int, s32 rexmt_cnt, SceNetAdhocDesc **out);
void func_00003BB0(SceNetAdhocDesc *d);
s32 func_00003BE8(SceNetAdhocDesc *d, u32 timeout, s32 nonblock);
s32 func_00003D9C(SceNetAdhocDesc *d, SceNetEtherAddr *addr, u16 *port, u32 timeout, s32 nonblock);
s32 func_0000473C(SceNetAdhocDesc *d, u32 timeout, s32 nonblock);
s32 func_000053EC(SceNetAdhocPtpPcb *pcb, const SceNetEtherAddr *saddr, u16 sport, const SceNetEtherAddr *daddr, u16 dport);
s32 func_00005594(SceNetAdhocPtpPcb *pcb, s32 sndsize, s32 rcvsize);
void func_000055B0(SceNetAdhocPtpPcb *pcb, s32 a1, s32 a2);
s32 func_000056CC(SceNetAdhocPtpPcb *pcb, const SceNetEtherAddr *saddr, u16 sport, const SceNetEtherAddr *daddr, u16 dport);
s32 func_000056E4(SceNetAdhocPtpPcb *pcb, s32 a1);
void func_00005708(SceNetAdhocPtpPcb *pcb);
void func_000058B8(struct mbuf *m);
s32 func_00006F68(void);
s32 func_000070E8(const SceNetEtherAddr *addr, void *ptr, s32 size);
s32 func_00007298(s32 id, SceNetAdhocGameModeOptData *opt, s32 internal);
s32 gameModeCreate(const SceNetEtherAddr *addr, void *ptr, s32 size);
s32 gameModeDelete(s32 id);
s32 gameModeInit(void);
void gameModeTerm(void);
s32 gameModeUpdateReplica(s32 id, SceNetAdhocGameModeOptData *opt, s32 internal);
s32 module_start(void);
s32 module_stop(void);
s32 pdpAttach(SceNetAdhocDesc *d);
s32 pdpBind(SceNetAdhocPdpPcb *pcb, const SceNetEtherAddr *addr, u16 port);
void pdpDetach(SceNetAdhocDesc *d);
void pdpFlush(SceNetAdhocPdpPcb *pcb);
void pdpIfWakeup(struct ifnet *ifp);
s32 pdpInit(void);
void pdpInput(struct mbuf *m);
s32 pdpOutput(SceNetAdhocDesc *d, const SceNetEtherAddr *daddr, u16 dport, const void *data, s32 len, u32 timeout, s32 nonblock);
s32 pdpPoll(SceNetAdhocDesc *d, s32 events);
void pdpQentFree(SceNetAdhocPdpQent *e);
s32 pdpRecvCommon(s32 id, SceNetEtherAddr *addr, u16 *port, void *buf, s32 *len, u32 timeout, s32 nonblock, void *rfinfo);
s32 pdpRecvWait(SceNetAdhocDesc *d, SceNetEtherAddr *addr, u16 *port, void *buf, s32 *len, u32 timeout, s32 nonblock, SceNetAdhocPdpRfInfo *rfinfo);
s32 pdpSetRcvBuf(SceNetAdhocPdpPcb *pcb, s32 size);
void pdpTerm(void);
s32 ptpAcceptWait(SceNetAdhocDesc *d, SceNetEtherAddr *addr, u16 *port, u32 timeout, s32 nonblock);
s32 ptpAttach(SceNetAdhocDesc *d);
s32 ptpBind(SceNetAdhocPtpPcb *pcb, const SceNetEtherAddr *addr, u16 port);
void ptpClearAddr(SceNetAdhocPtpPcb *pcb);
void ptpCloseChildren(SceNetAdhocPtpPcb *pcb);
s32 ptpConnectStart(SceNetAdhocPtpPcb *pcb, const SceNetEtherAddr *daddr, u16 dport);
s32 ptpConnectWait(SceNetAdhocDesc *d, u32 timeout, s32 nonblock);
s32 ptpCreate(const SceNetEtherAddr *saddr, u16 sport, s32 sndbuf, s32 rcvbuf, u32 rexmt_int, s32 rexmt_cnt, SceNetAdhocDesc **out);
void ptpDetach(SceNetAdhocDesc *d);
void ptpDrop(SceNetAdhocPtpPcb *pcb);
void ptpEstablished(SceNetAdhocPtpPcb *pcb);
void ptpFlushSockbufs(SceNetAdhocPtpPcb *pcb);
s32 ptpFlushWait(SceNetAdhocDesc *d, u32 timeout, s32 nonblock);
s32 ptpInit(void);
void ptpInput(struct mbuf *m);
void ptpKeepAlive(SceNetAdhocPtpPcb *pcb);
s32 ptpListenSetup(SceNetAdhocPtpPcb *pcb, s32 a1);
SceNetAdhocPtpPcb *ptpLookup(const SceNetEtherAddr *laddr, u16 lport, const SceNetEtherAddr *paddr, u16 pport);
void ptpOutput(SceNetAdhocPtpPcb *pcb, s32 rexmt);
s32 ptpPoll(SceNetAdhocDesc *d, s32 events);
s32 ptpRecvData(SceNetAdhocDesc *d, void *buf, s32 *len, u32 timeout, s32 nonblock);
void ptpSendCtl(SceNetAdhocPtpPcb *pcb, u8 type);
s32 ptpSendData(SceNetAdhocDesc *d, const void *data, s32 *len, u32 timeout, s32 nonblock);
void ptpSendFrame(struct ifnet *ifp, const SceNetEtherAddr *laddr, u16 lport, const SceNetEtherAddr *paddr, u16 pport, u8 type, u32 seq, struct mbuf *m);
void ptpSendFrameL(const SceNetEtherAddr *laddr, u16 lport, const SceNetEtherAddr *paddr, u16 pport, u8 type, u32 seq, struct mbuf *m);
void ptpSetRexmt(SceNetAdhocPtpPcb *pcb, s32 a1, s32 a2);
s32 ptpSetSockbuf(SceNetAdhocPtpPcb *pcb, s32 sndsize, s32 rcvsize);
void ptpSocketDestroy(SceNetAdhocDesc *d);
void ptpTerm(void);
void ptpTimer(SceNetAdhocPtpPcb *pcb);
s32 sceKernelCheckThreadStack(void);
u64 sceKernelGetSystemTimeWide(void);
s32 sceKernelSignalSema(s32 sema, s32 n);
s32 sceNetAdhocAuth_lib_AAB06250(void *buf, s32 len);
s32 sceNetAdhocGameModeCreateMaster(void *ptr, s32 size);
s32 sceNetAdhocGameModeCreateReplica(const SceNetEtherAddr *addr, void *ptr, s32 size);
s32 sceNetAdhocGameModeDeleteMaster(void);
s32 sceNetAdhocGameModeDeleteReplica(s32 id);
s32 sceNetAdhocGameModeUpdateMaster(void);
s32 sceNetAdhocGameModeUpdateReplica(s32 id, SceNetAdhocGameModeOptData *opt);
s32 sceNetAdhocGameModeUpdateReplicaInternal(s32 id, SceNetAdhocGameModeOptData *opt);
s32 sceNetAdhocGetPdpStat(s32 *buflen, SceNetAdhocPdpStat *buf);
s32 sceNetAdhocGetPtpStat(s32 *buflen, SceNetAdhocPtpStat *buf);
s32 sceNetAdhocGetSocketAlert(s32 id, s32 *flag);
s32 sceNetAdhocInit(void);
s32 sceNetAdhocPdpDelete(s32 id, s32 flag);
s32 sceNetAdhocPdpRecv(s32 id, SceNetEtherAddr *addr, u16 *port, void *buf, s32 *len, u32 timeout, s32 nonblock);
s32 sceNetAdhocPdpRecvWithRfInfo(s32 id, SceNetEtherAddr *addr, u16 *port, void *buf, s32 *len, u32 timeout, s32 nonblock, void *rfinfo);
s32 sceNetAdhocPdpSend(s32 id, const SceNetEtherAddr *daddr, u16 dport, const void *data, s32 len, u32 timeout, s32 nonblock);
s32 sceNetAdhocPtpAccept(s32 id, SceNetEtherAddr *addr, u16 *port, u32 timeout, s32 nonblock);
s32 sceNetAdhocPtpClose(s32 id, s32 flag);
s32 sceNetAdhocPtpConnect(s32 id, u32 timeout, s32 nonblock);
s32 sceNetAdhocPtpFlush(s32 id, u32 timeout, s32 nonblock);
s32 sceNetAdhocPtpListen(const SceNetEtherAddr *saddr, u16 sport, s32 bufsize, u32 rexmt_int, s32 rexmt_cnt, s32 backlog, s32 flag);
s32 sceNetAdhocPtpOpen(const SceNetEtherAddr *saddr, u16 sport, const SceNetEtherAddr *daddr, u16 dport, s32 bufsize, u32 rexmt_int, s32 rexmt_cnt, s32 flag);
s32 sceNetAdhocPtpRecv(s32 id, void *buf, s32 *len, u32 timeout, s32 nonblock);
s32 sceNetAdhocPtpSend(s32 id, const void *data, s32 *len, u32 timeout, s32 nonblock);
s32 sceNetAdhocSetSocketAlert(s32 id, s32 flag);
s32 sceNetAdhocTerm(void);
s32 sceNetAdhoc_lib_2CA12790(SceNetAdhocStat *out);
void sceNetAdhoc_lib_62B875A8(void);
void sceNetAdhoc_lib_F9240FBA(void);
void sceNetFreeInternal(void *p);
s32 sceNetGetLocalEtherAddr(SceNetEtherAddr *addr);
u64 sceNetGetSystemClockUsec(void);
void sceNetMAdj(struct mbuf *m, s32 len);
void sceNetMCopydata(struct mbuf *m, s32 off, s32 len, void *cp);
struct mbuf *sceNetMFree(struct mbuf *m);
void sceNetMFreem(struct mbuf *m);
void *sceNetMallocInternal(u32 size);
s32 sceNetMemcmp(const void *a, const void *b, s32 n);
void *sceNetMemcpy(void *dst, const void *src, s32 n);
void *sceNetMemset(void *s, s32 c, s32 n);
u32 sceNetRand(void);
s32 sceWlanDevIsGameMode(void);
s32 sceWlanGPPrevEstablishActive(const SceNetEtherAddr *addr);
s32 sceWlanGPRecv(s32 id, void *ptr, s32 size, SceNetAdhocGameModeOptData *opt);
s32 sceWlanGPSend(s32 id, void *ptr, s32 size);

#endif
