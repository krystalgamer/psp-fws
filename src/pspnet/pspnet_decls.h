#ifndef PSPNET_DECLS_H
#define PSPNET_DECLS_H

#include "common.h"
#include "m2c_macros.h"

typedef __builtin_va_list va_list;
#define va_start(v, l) __builtin_stdarg_start((v), l)
#define va_end(v) __builtin_va_end(v)

typedef struct {
    u32 low;
    u32 hi;
} SceKernelSysClock;

/* struct iovec / struct uio (NetBSD uio.h; SCE: 32-bit offset, no segflg/proc) */
struct iovec {
    void *iov_base;     /* 0x0 */
    u32 iov_len;        /* 0x4 */
};
enum uio_rw { UIO_READ, UIO_WRITE };
struct uio {
    struct iovec *uio_iov;  /* 0x00 */
    s32 uio_iovcnt;         /* 0x04 */
    s32 uio_offset;         /* 0x08 */
    s32 uio_resid;          /* 0x0C */
    enum uio_rw uio_rw;     /* 0x10 */
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

struct socket;
struct ifnet;
static __inline u32 min(u32 a, u32 b) {
    return (a < b) ? a : b;
}

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
#define TAILQ_INSERT_HEAD(head, elm, field) do { \
    if (((elm)->field.tqe_next = (head)->tqh_first) != NULL) \
        (head)->tqh_first->field.tqe_prev = &(elm)->field.tqe_next; \
    else \
        (head)->tqh_last = &(elm)->field.tqe_next; \
    (head)->tqh_first = (elm); \
    (elm)->field.tqe_prev = &(head)->tqh_first; \
} while (0)
#define TAILQ_REMOVE(head, elm, field) do { \
    if (((elm)->field.tqe_next) != NULL) \
        (elm)->field.tqe_next->field.tqe_prev = (elm)->field.tqe_prev; \
    else \
        (head)->tqh_last = (elm)->field.tqe_prev; \
    *(elm)->field.tqe_prev = (elm)->field.tqe_next; \
} while (0)

struct sockaddr {
    u8 sa_len;
    u8 sa_family;
    char sa_data[14];
};

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

/* struct mbuf (NetBSD 1.5 mbuf.h, partial; full layout in pspnet_inet_decls) */
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
        u8 unk20[0x10];
    } m_pkthdr;
    struct {
        u8 *ext_buf;            /* 0x30 */
        void (*ext_free)();     /* 0x34 */
        void *ext_arg;          /* 0x38 */
        u32 ext_size;           /* 0x3C */
        s32 ext_type;           /* 0x40 */
        struct mbuf *ext_nextref; /* 0x44 */
        struct mbuf *ext_prevref; /* 0x48 */
    } m_ext;
};
#define m_pktdat m_ext.ext_buf
#define MSIZE 0x100
#define MHLEN (MSIZE - 0x30)
#define MCLBYTES 2048
#define MT_DATA 1
#define M_EXT 0x0001
#define M_PKTHDR 0x0002
#define M_CLUSTER 0x0008
#define mtod(m, t) ((t)((m)->m_data))


struct mbuf;
/* struct ifqueue (4.4BSD if.h) */
struct ifqueue {
    struct mbuf *ifq_head;      /* 0x00 */
    struct mbuf *ifq_tail;      /* 0x04 */
    s32 ifq_len;                /* 0x08 */
    s32 ifq_maxlen;             /* 0x0C */
    s32 ifq_drops;              /* 0x10 */
};

/* struct if_data (NetBSD 1.5 if.h, u_quad_t counters, partial) */
struct if_data {
    u8 ifi_type;                        /* 0x00 */
    u8 ifi_addrlen;                     /* 0x01 */
    u8 ifi_hdrlen;                      /* 0x02 */
    s32 ifi_link_state;                 /* 0x04 */
    u64 ifi_mtu;                        /* 0x08 */
    u64 ifi_metric;                     /* 0x10 */
    u64 ifi_baudrate;                   /* 0x18 */
};

/* struct ifnet (NetBSD 1.5 if.h, partial; layout shared with pspnet_inet) */
struct ifnet {
    void *if_softc;                     /* 0x00 */
    TAILQ_ENTRY(ifnet) if_list;         /* 0x04 */
    TAILQ_HEAD(, ifaddr) if_addrlist;   /* 0x0C */
    char if_xname[16];                  /* 0x14 */
    s32 if_pcount;                      /* 0x24 */
    void *if_bpf;                       /* 0x28 */
    u16 if_index;                       /* 0x2C */
    s16 if_timer;                       /* 0x2E */
    s16 if_flags;                       /* 0x30 IFF_* */
    u8 unk32[0x38 - 0x32];
    struct if_data if_data;             /* 0x38 */
    u8 unk58[0x88 - 0x58];
    u64 if_obytes;                      /* 0x88 if_data.ifi_obytes */
    u8 unk90[0xB0 - 0x90];
    s32 (*if_output)();                 /* 0xB0 */
    void (*if_input)();                 /* 0xB4 */
    void (*if_start)();                 /* 0xB8 */
    s32 (*if_ioctl)();                  /* 0xBC */
    s32 (*if_reset)();                  /* 0xC0 */
    void (*if_watchdog)();              /* 0xC4 */
    void (*if_drain)();                 /* 0xC8 */
    struct ifqueue if_snd;              /* 0xCC */
    struct sockaddr_dl *if_sadl;        /* 0xE0 */
    u8 *if_broadcastaddr;               /* 0xE4 */
    u8 unkE8[0x100 - 0xE8];
    /* SCE ifhandle extension */
    s32 if_sce_sema100;                 /* 0x100 ioctl completion (sceNetIfhandle sema) */
    s32 if_sce_sema104;                 /* 0x104 ioctl lock (sceNetIfhandle sema) */
    s32 if_sce_unk108;                  /* 0x108 pending completions */
    s32 if_sce_unk10C;                  /* 0x10C ioctl result */
};
#define if_type if_data.ifi_type
#define if_addrlen if_data.ifi_addrlen
#define if_link_state if_data.ifi_link_state
#define IFF_UP 0x1
#define IFF_LOOPBACK 0x8
#define IFF_MULTICAST 0x8000

/* struct sockaddr_dl (if_dl.h) */
struct sockaddr_dl {
    u8 sdl_len;
    u8 sdl_family;
    u16 sdl_index;
    u8 sdl_type;
    u8 sdl_nlen;        /* 0x5 */
    u8 sdl_alen;
    u8 sdl_slen;
    char sdl_data[12];  /* 0x8 */
};
#define LLADDR(s) ((char *)((s)->sdl_data + (s)->sdl_nlen))

struct ether_addr {
    char ether_addr_octet[6];
};

TAILQ_HEAD(ifnethead, ifnet);

/* struct ifaddr (NetBSD 1.5 if.h, partial) */
struct ifaddr {
    struct sockaddr *ifa_addr;          /* 0x00 */
    struct sockaddr *ifa_dstaddr;       /* 0x04 */
    struct sockaddr *ifa_netmask;       /* 0x08 */
    struct ifnet *ifa_ifp;              /* 0x0C */
    TAILQ_ENTRY(ifaddr) ifa_list;       /* 0x10 */
    u8 ifa_data[0x10];                  /* 0x18 */
    void (*ifa_rtrequest)();            /* 0x28 */
    u32 ifa_flags;                      /* 0x2C */
    s32 ifa_refcnt;                     /* 0x30 */
    u8 unk34[4];
};
typedef char chk_ifaddr[(sizeof(struct ifaddr) == 0x38) ? 1 : -1];
#define IFAREF(ifa) ((ifa)->ifa_refcnt++)
#define AF_LINK 18
#define IFAFREE(ifa) do { \
    if (--(ifa)->ifa_refcnt == 0) \
        sceNetFreeInternal(ifa); \
} while (0)
#define IFF_OACTIVE 0x400
#define IF_QFULL(ifq) ((ifq)->ifq_len >= (ifq)->ifq_maxlen)
#define IF_ENQUEUE(ifq, m) { \
    (m)->m_nextpkt = 0; \
    if ((ifq)->ifq_tail == 0) \
        (ifq)->ifq_head = m; \
    else \
        (ifq)->ifq_tail->m_nextpkt = m; \
    (ifq)->ifq_tail = m; \
    (ifq)->ifq_len++; \
}
#define IF_DEQUEUE(ifq, m) { \
    (m) = (ifq)->ifq_head; \
    if (m) { \
        if (((ifq)->ifq_head = (m)->m_nextpkt) == 0) \
            (ifq)->ifq_tail = 0; \
        (m)->m_nextpkt = 0; \
        (ifq)->ifq_len--; \
    } \
}

/* NetBSD 1.5 if_ether.h */
struct ether_multi {
    u8 enm_addrlo[6];               /* 0x00 */
    u8 enm_addrhi[6];               /* 0x06 */
    struct ethercom *enm_ec;        /* 0x0C */
    u32 enm_refcount;               /* 0x10 */
    struct { struct ether_multi *le_next; struct ether_multi **le_prev; } enm_list; /* 0x14 */
};
struct ethercom {
    struct ifnet ec_if;             /* 0x000 */
    u8 unk110[0x128 - 0x110];
    struct { struct ether_multi *lh_first; } ec_multiaddrs; /* 0x128 */
    s32 ec_multicnt;                /* 0x12C */
};
typedef char chk_ifnet[(sizeof(struct ifnet) == 0x110) ? 1 : -1];
#define LIST_FIRST(head) ((head)->lh_first)
#define LIST_REMOVE(elm, field) do { \
    if ((elm)->field.le_next != NULL) \
        (elm)->field.le_next->field.le_prev = (elm)->field.le_prev; \
    *(elm)->field.le_prev = (elm)->field.le_next; \
} while (0)
#define AF_UNSPEC 0
#define if_hdrlen if_data.ifi_hdrlen
#define if_mtu if_data.ifi_mtu
#define if_baudrate if_data.ifi_baudrate
#define IFT_ETHER 0x6


#define IFNAMSIZ 16

/* struct ifreq (NetBSD 1.5 if.h), 0x20 bytes */
struct ifreq {
    char ifr_name[IFNAMSIZ];            /* 0x00 */
    union {
        struct sockaddr ifru_addr;
        s16 ifru_flags;
        s32 ifru_metric;
        void *ifru_data;
    } ifr_ifru;                         /* 0x10 */
};
#define ifr_addr ifr_ifru.ifru_addr
#define ifr_flags ifr_ifru.ifru_flags
#define ifr_data ifr_ifru.ifru_data
#define SIOCSIFFLAGS 0x80206910
#define SIOCGIFFLAGS 0xC0206911

/* SCE 802.11 ioctl requests: interface name + N argument words (size encoded in the command) */
struct SceNetIfreq1 { char ifr_name[IFNAMSIZ]; s32 args[1]; };
struct SceNetIfreq2 { char ifr_name[IFNAMSIZ]; s32 args[2]; };
struct SceNetIfreq3 { char ifr_name[IFNAMSIZ]; s32 args[3]; };
struct SceNetIfreq4 { char ifr_name[IFNAMSIZ]; s32 args[4]; };

/* sceNetConfig{Get,Set}IfEvent* data (ifr_data) */
struct SceNetIfEvent {
    s32 unk0;
    s32 unk4;
};

struct ifconf {
    s32 ifc_len;                /* 0x0 */
    struct ifreq *ifc_req;      /* 0x4 */
};


/* NetBSD 1.5 bpfdesc.h, SCE layout (0x40 bytes) */
struct bpf_if;
struct bpf_d {
    struct bpf_d *bd_next;      /* 0x00 */
    char *bd_sbuf;              /* 0x04 */
    char *bd_hbuf;              /* 0x08 */
    char *bd_fbuf;              /* 0x0C */
    s32 bd_slen;                /* 0x10 */
    s32 bd_hlen;                /* 0x14 */
    s32 bd_bufsize;             /* 0x18 */
    struct bpf_if *bd_bif;      /* 0x1C */
    unsigned long bd_rtout;     /* 0x20 u_long */
    void *bd_filter;            /* 0x24 struct bpf_insn * */
    unsigned long bd_rcount;    /* 0x28 */
    unsigned long bd_dcount;    /* 0x2C */
    u8 bd_promisc;              /* 0x30 */
    u8 bd_state;                /* 0x31 */
    u8 bd_immediate;            /* 0x32 */
    s32 bd_hdrcmplt;            /* 0x34 */
    s32 bd_sel;                 /* 0x38 selinfo: waiting thread id */
    s32 unk3C;
};
typedef char chk_bpf_d[(sizeof(struct bpf_d) == 0x40) ? 1 : -1];
struct bpf_if {
    struct bpf_if *bif_next;    /* 0x00 */
    struct bpf_d *bif_dlist;    /* 0x04 */
    struct bpf_if **bif_driverp; /* 0x08 */
    u32 bif_dlt;                /* 0x0C */
    u32 bif_hdrlen;             /* 0x10 */
    struct ifnet *bif_ifp;      /* 0x14 */
};
#define SIZEOF_BPF_HDR 20
#define BPF_WORDALIGN(x) (((x) + 3) & ~3)
#define POLLIN 0x0001
#define POLLRDNORM 0x0040
#define NBPFILTER 8
#define D_ISFREE(d) ((d) == (d)->bd_next)
#define D_MARKFREE(d) ((d)->bd_next = (d))
struct bpf_hdr {
    struct timeval bh_tstamp;   /* 0x00 */
    u32 bh_caplen;              /* 0x08 */
    u32 bh_datalen;             /* 0x0C */
    u16 bh_hdrlen;              /* 0x10 */
};
#define ROTATE_BUFFERS(d) \
    (d)->bd_hbuf = (d)->bd_sbuf; \
    (d)->bd_hlen = (d)->bd_slen; \
    (d)->bd_sbuf = (d)->bd_fbuf; \
    (d)->bd_slen = 0; \
    (d)->bd_fbuf = 0;
#define bpf_wakeup(d) do { \
    _sce_pspnet_wakeup(d); \
    _sce_pspnet_selwakeup(&(d)->bd_sel); \
} while (0)
#define EXTRACT_SHORT(p) \
    ((u16)((u16)*((u8 *)p + 0) << 8 | \
           (u16)*((u8 *)p + 1) << 0))
#define EXTRACT_LONG(p) \
    ((u32)*((u8 *)p + 0) << 24 | \
     (u32)*((u8 *)p + 1) << 16 | \
     (u32)*((u8 *)p + 2) << 8 | \
     (u32)*((u8 *)p + 3) << 0)
#define MINDEX(len, m, k) \
{ \
    len = m->m_len; \
    while (k >= len) { \
        k -= len; \
        m = m->m_next; \
        if (m == 0) \
            return 0; \
        len = m->m_len; \
    } \
}
struct bpf_insn {
    u16 code;
    u8 jt;
    u8 jf;
    s32 k;
};
#define BPF_CLASS(code) ((code) & 0x07)
#define BPF_LD 0x00
#define BPF_ST 0x02
#define BPF_ALU 0x04
#define BPF_JMP 0x05
#define BPF_RET 0x06
#define BPF_MEM 0x60
#define BPF_OP(code) ((code) & 0xf0)
#define BPF_DIV 0x30
#define BPF_JA 0x00
#define BPF_K 0x00
#define BPF_MEMWORDS 16
struct bpf_program {
    u32 bf_len;
    struct bpf_insn *bf_insns;
};
#define BPF_MAXINSNS 512
#define reset_d(d) do { \
    if ((d)->bd_hbuf) { \
        (d)->bd_fbuf = (d)->bd_hbuf; \
        (d)->bd_hbuf = 0; \
    } \
    (d)->bd_slen = 0; \
    (d)->bd_hlen = 0; \
    (d)->bd_rcount = 0; \
    (d)->bd_dcount = 0; \
} while (0)
struct bpf_stat {
    u32 bs_recv;
    u32 bs_drop;
};
struct bpf_version {
    u16 bv_major;
    u16 bv_minor;
};
#define BPF_LDX 0x01
#define BPF_STX 0x03
#define BPF_MISC 0x07
#define BPF_W 0x00
#define BPF_H 0x08
#define BPF_B 0x10
#define BPF_IMM 0x00
#define BPF_ABS 0x20
#define BPF_IND 0x40
#define BPF_LEN 0x80
#define BPF_MSH 0xa0
#define BPF_ADD 0x00
#define BPF_SUB 0x10
#define BPF_MUL 0x20
#define BPF_OR 0x40
#define BPF_AND 0x50
#define BPF_LSH 0x60
#define BPF_RSH 0x70
#define BPF_NEG 0x80
#define BPF_JEQ 0x10
#define BPF_JGT 0x20
#define BPF_JGE 0x30
#define BPF_JSET 0x40
#define BPF_X 0x08
#define BPF_A 0x10
#define BPF_TAX 0x00
#define BPF_TXA 0x80


s32 sceNetStrcmp(const char *s1, const char *s2);
s32 _sce_pspnet_spllock(void);
void _sce_pspnet_splunlock(s32 arg0);
s32 _sce_pspnet_if_nulloutput(void);
extern struct ifnethead D_0000BE54;

/* inlined copy of _sce_pspnet_ifunit (the real one is defined after its inlined users) */
extern __inline__ struct ifnet *ifunit_inline(const char *name) {
    struct ifnet *ifp;
    s32 s;

    s = _sce_pspnet_spllock();
    for (ifp = TAILQ_FIRST(&D_0000BE54); ifp != NULL; ifp = TAILQ_NEXT(ifp, if_list)) {
        if (ifp->if_output == _sce_pspnet_if_nulloutput)
            continue;
        if (sceNetStrcmp(ifp->if_xname, name) == 0) {
            _sce_pspnet_splunlock(s);
            return ifp;
        }
    }
    _sce_pspnet_splunlock(s);
    return NULL;
}

extern s32 D_0000A0D0;
extern s32 D_0000A0E4;
extern s32 D_0000A0EC;
extern u8 D_0000A0F0[6];
extern s32 D_0000A0FC;
extern s32 D_0000A10D;
extern s32 D_0000A860;
extern s32 D_0000A864;
extern s32 D_0000A868;
extern SceUID D_0000A86C;
extern SceUID D_0000A870;
extern s32 D_0000A874;
extern s32 D_0000A878;
extern s32 D_0000A87C;
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
extern struct calloutq D_0000AC4C;
extern void (*D_0000AC58)(struct SceNetThreadInfo *);
extern struct slpque D_0000AC6C[SLPQUE_TABLESIZE];
extern s32 D_0000AE70;
extern s32 D_0000AF10;
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
extern struct calloutq D_0000AF50;
extern struct calloutq D_0000AF54;
extern struct calloutq D_0000AF58;
extern void (*D_0000AF5C)(struct SceNetThreadInfo *);
extern void (*D_0000AF60)(s32, s32);
extern struct slpque D_0000AF60_v271[SLPQUE_TABLESIZE];
extern void (*D_0000AF64)(s32);
extern s32 D_0000AF68;
extern s32 D_0000AF6C;
extern struct slpque D_0000AF70[SLPQUE_TABLESIZE];
extern s32 D_0000B06C;
extern void (*D_0000B0A4)();
extern s32 D_0000B0AC;
extern s32 D_0000B0B0;
extern struct ifnet **D_0000B0B8;
extern s32 D_0000B0CC;
extern s32 D_0000B0D4;
extern s32 D_0000B0EC;
extern s32 D_0000B0F0;
extern s32 D_0000B314;
extern s32 D_0000B31C;
extern s32 D_0000B370;
extern void (*D_0000B374)();
extern void (*D_0000B378)();
extern void (*D_0000B37C)();
extern void (*D_0000B380)();
extern void (*D_0000B384)();
extern void (*D_0000B388)();
extern void (*D_0000B38C)();
extern void (*D_0000B390)();
extern void (*D_0000B394)();
extern void (*D_0000B398)();
extern void (*D_0000B39C)();
extern void (*D_0000B3A0)();
extern void (*D_0000B3A4)();
extern s32 D_0000B3AC;
extern s32 D_0000B3B4;
extern struct ifaddr **D_0000B3B8;
extern s32 D_0000B3BC;
extern s32 (*D_0000B3C0)();
extern s32 (*D_0000B3C4)();
extern s32 (*D_0000B3C8)();
extern s32 (*D_0000B3CC)();
extern s32 D_0000B3D0;
extern s32 D_0000B3D4;
extern s32 D_0000B3D8;
extern s32 D_0000B3DC;
extern s32 D_0000B3E0;
extern u32 D_0000B3E4[521];
extern s32 D_0000B91C;
extern struct ifaddr *D_0000BB24[8];
extern struct ifnet *D_0000BB44[8];
extern s32 D_0000BC08;
extern M2C_UNK D_0000BC0C;
extern struct bpf_if *D_0000BC10;
extern struct bpf_d D_0000BC14[NBPFILTER];
extern struct ifnethead D_0000BE54;
extern struct callout D_0000BE5C;

void _sce_pspnet_adhoc_sabort(s32 a, s32 b);
void _sce_pspnet_callout_cleanup(struct callout *c);
void _sce_pspnet_callout_init(struct callout *c);
void _sce_pspnet_callout_reset(struct callout *c, u32 ticks, void (*func)(void *), void *arg);
void _sce_pspnet_callout_reset_usec(struct callout *c, u32 usec, void (*func)(void *), void *arg);
void _sce_pspnet_callout_stop(struct callout *c);
s32 _sce_pspnet_get_if_core_variables(s32 *arg0, s32 *arg1, s32 *arg2, struct ifnethead *arg3);
s32 _sce_pspnet_get_ifindex(const char *name);
s32 *_sce_pspnet_get_selwait_addr(void);
struct SceNetThreadInfo *_sce_pspnet_get_threadinfo(SceUID thid);
void _sce_pspnet_hashdone(void *hashtbl);
void *_sce_pspnet_hashinit(s32 elements, u32 *hashmask);
void _sce_pspnet_if_attach(struct ifnet *ifp);
void _sce_pspnet_if_detach(struct ifnet *ifp);
void _sce_pspnet_if_down(struct ifnet *ifp);
s32 _sce_pspnet_if_exist(const char *name);
s32 _sce_pspnet_if_nulloutput(void);
void _sce_pspnet_if_up(struct ifnet *ifp);
void _sce_pspnet_ifafree(struct ifaddr *ifa);
s32 _sce_pspnet_ifioctl(struct socket *so, u32 cmd, void *data, s32 p);
struct ifnet *_sce_pspnet_ifplookup_index(u32 index);
struct ifnet *_sce_pspnet_ifplookup_lladdr(const void *lladdr);
struct ifnet *_sce_pspnet_ifunit(const char *name);
void _sce_pspnet_inet_sabort(s32 a);
void _sce_pspnet_link_rtrequest(s32 cmd, void *rt, void *info);
struct SceNetThreadInfo *_sce_pspnet_lock_threadinfo(SceUID thid);
void _sce_pspnet_microtime(struct timeval *tv);
void _sce_pspnet_schednetintr(s32 arg0);
void _sce_pspnet_schednetintr_with_evf(s32 arg0);
void _sce_pspnet_selrecord(struct SceNetThreadInfo *ti, s32 *sip);
void _sce_pspnet_selwakeup(s32 *arg0);
s32 _sce_pspnet_spllock(void);
s32 _sce_pspnet_spllock_owner(void);
void _sce_pspnet_splunlock(s32 s);
s32 _sce_pspnet_start_of_adhoc_module_in_if_ethersubr_core(s32 arg0);
s32 _sce_pspnet_start_of_adhoc_module_in_netintr(s32 arg0, s32 arg1);
s32 _sce_pspnet_start_of_adhoc_module_in_sched(void (*sabort)(s32, s32));
s32 _sce_pspnet_start_of_inet_module_in_if_core(void (*f0)(), void (*f1)(), void (*f2)(), void (*f3)(), void (*f4)(), void (*f5)(), void (*f6)(), void (*f7)(), void (*f8)(), void (*f9)(), void (*f10)(), void (*f11)(), void (*f12)());
s32 _sce_pspnet_start_of_inet_module_in_if_ethersubr_core(s32 (*f0)(), s32 (*f1)(), s32 (*f2)(), s32 (*f3)());
s32 _sce_pspnet_start_of_inet_module_in_ifhandle_ether(s32 arg0);
s32 _sce_pspnet_start_of_inet_module_in_netintr(s32 arg0, s32 arg1);
s32 _sce_pspnet_start_of_inet_module_in_sched(void (*sleephook)(struct SceNetThreadInfo *), void (*sabort)(s32));
s32 _sce_pspnet_start_of_ipv6_module_in_netintr(s32 arg0);
s32 _sce_pspnet_start_of_pppoe_module_in_netintr(s32 arg0);
s32 _sce_pspnet_stop_of_adhoc_module_in_if_ethersubr_core(void);
s32 _sce_pspnet_stop_of_adhoc_module_in_netintr(void);
s32 _sce_pspnet_stop_of_adhoc_module_in_sched(void);
s32 _sce_pspnet_stop_of_inet_module_in_if_core(void);
s32 _sce_pspnet_stop_of_inet_module_in_if_ethersubr_core(void);
s32 _sce_pspnet_stop_of_inet_module_in_ifhandle_ether(void);
s32 _sce_pspnet_stop_of_inet_module_in_netintr(void);
s32 _sce_pspnet_stop_of_inet_module_in_sched(void);
s32 _sce_pspnet_stop_of_ipv6_module_in_netintr(void);
s32 _sce_pspnet_stop_of_pppoe_module_in_netintr(void);
void _sce_pspnet_tabort(struct SceNetThreadInfo *arg0);
s32 _sce_pspnet_thread_busycount(void);
struct SceNetThreadInfo *_sce_pspnet_thread_enter(); /* 2.01+: (s32 *errp) */
s32 _sce_pspnet_thread_leave(struct SceNetThreadInfo *arg0, s32 arg1);
void _sce_pspnet_tiwakeup(SceUID thid, void *ident);
s32 _sce_pspnet_tsleep(void *ident, u32 timo);
s32 _sce_pspnet_tsleep_usec(void *ident, u32 usec);
s32 _sce_pspnet_uiomove(void *buf, s32 n, struct uio *uio);
void _sce_pspnet_unlock_threadinfo(struct SceNetThreadInfo *arg0);
void _sce_pspnet_wakeup(void *ident);
s32 bpf_allocbufs(struct bpf_d *d);
u32 bpf_filter(struct bpf_insn *pc, u8 *p, u32 wirelen, u32 buflen);
u8 *bpf_mcpy(u8 *arg0, void *arg1, u32 arg2);
void bpf_mtap(void *arg, struct mbuf *m);
s32 bpf_setf(struct bpf_d *d, struct bpf_program *fp);
s32 bpf_setif(struct bpf_d *d, struct ifreq *ifr);
s32 bpf_validate(struct bpf_insn *f, s32 len);
void bpfattach(struct bpf_if **driverp, struct ifnet *ifp, u32 dlt, u32 hdrlen);
s32 bpfclose(s32 minor);
void bpfdetach(struct ifnet *ifp);
void bpfilterattach(s32 n);
s32 bpfioctl(s32 minor, u32 cmd, void *addr);
s32 bpfopen(s32 minor);
s32 bpfpoll(s32 minor, s32 events, struct SceNetThreadInfo *p);
s32 bpfread(s32 minor, struct uio *uio);
s32 bpfwrite(s32 fd, struct uio *uio);
u32 callout_alarm(void *common);
void callout_shutdown(void);
s32 callout_startup(s32 prio, s32 stackSize);
s32 callout_thread(SceSize args, void *argp);
void catchpacket(struct bpf_d *d, u8 *pkt, u32 pktlen, u32 snaplen, u8 *(*cpfn)());
u32 ether_crc32_be(const u8 *buf, u32 len);
void ether_ifattach(struct ifnet *ifp, const u8 *lla);
void ether_ifdetach(struct ifnet *ifp);
void ether_input();
s32 ether_multiaddr(struct sockaddr *sa, u8 *addrlo, u8 *addrhi);
void func_00001E74(void);
s32 func_00002248(void);
void func_0000260C(void);
void func_000030A8_v100(struct SceNetThreadInfo *arg0);
void func_00003100(struct SceNetThreadInfo *arg0);
void func_00003380(void);
void func_00003400(struct SceNetThreadInfo *arg0);
void func_000037E4(void);
void func_00004430(struct ifnet *ifp, struct ifreq *ifr);
void func_00005404(void *arg0);
void func_00005744(struct Unk_func_00005744_0 *arg0);
s32 func_000064CC(struct socket *so, u32 cmd, void *data);
s32 func_00007020(void *a0, void *a1, void *a2, void *a3);
void func_000075C0(struct ifnet *ifp);
s32 func_00007678(s32 poolSize);
s32 func_000076B8(void);
s32 func_00007738(s32 poolSize);
s32 func_00007778(void);
s32 func_0000791C(void);
s32 func_00007924(void);
s32 func_000079DC(void);
s32 func_000079E4(void);
s32 func_00007A68(char c);
char func_00007B50(char c);
M2C_UNK *func_00007BBC(void);
void *func_00007C0C(void *dst, const void *src, s32 n);
s32 func_00007D20(const void *s1, const void *s2, s32 n);
s32 func_00007E3C(void (*putc)(char **pp, s32 c), char **pp, const char *fmt, va_list ap);
s32 func_00007E50(void (*putc)(char **pp, s32 c), char **pp, const char *fmt, va_list ap);
s32 func_000080A0(void (*putc)(char **pp, s32 c), char **pp, const char *fmt, va_list ap);
void func_00008594(char **pp, s32 c);
void func_00008598(char **pp, s32 c);
s32 func_00008790(s32, s32, s32);
s32 func_00008794(s32, s32, s32);
void func_000087C8(char **pp, s32 c);
s32 *func_0000885C(void);
void if_deactivate(struct ifnet *ifp);
void if_nulldrain(void);
void if_nullinput(void);
s32 if_nullioctl(void);
s32 if_nullreset(void);
void if_nullstart(void);
void if_nullwatchdog(void);
void if_slowtimo(void *arg);
s32 ifconf(u32 cmd, void *data);
void ifinit(void);
s32 m_xhalf(struct mbuf *m, s32 k, s32 *err);
s32 m_xword(struct mbuf *m, s32 k, s32 *err);
s32 module_start(void);
s32 module_stop(void);
s32 netintr_init(s32 prio, s32 stackSize);
s32 netintr_term(void);
s32 netintr_thread(SceSize args, void *argp);
s32 sceKernelCheckThreadStack(void);
s32 sceKernelCreateSema(void *, u32, s32, s32, void *);
s32 sceKernelDeleteEventFlag(s32);
s32 sceKernelDeleteSema(s32);
s32 sceKernelDeleteThread(s32);
s32 sceKernelGetSystemTime(SceKernelSysClock *clock);
s64 sceKernelGetSystemTimeWide(void);
s32 sceKernelGetThreadId(void);
s32 sceKernelSetEventFlag(s32, u32);
s32 sceKernelSignalSema(s32, s32);
s32 sceKernelSysClock2USec(SceKernelSysClock *clock, u32 *sec, u32 *usec);
s32 sceKernelTerminateThread(s32);
s32 sceKernelWaitSema(s32, s32, void *);
void sceNetAtoi(s32 arg0);
void sceNetBcopy(const void *src, void *dst, s32 n);
s32 sceNetBpfClose(s32 fd);
s32 sceNetBpfIoctl(s32 fd, u32 cmd, void *data);
s32 sceNetBpfOpen(void);
s32 sceNetBpfRead(s32 fd, void *buf, s32 len);
s32 sceNetBpfWrite(s32 fd, void *buf, s32 len);
void sceNetBzero(void *s, s32 n);
void sceNetEtherNtostr(const u8 *mac, char *buf);
void sceNetEtherStrton(const char *str, u8 *mac);
void sceNetFreeInternal(void *p);
s32 sceNetFreeThreadinfo(SceUID thid);
s32 sceNetGetMallocStat(void *stat);
s32 sceNetGetMallocStatInternal(void *stat);
u32 sceNetGetSystemClockSec(void);
s64 sceNetGetSystemClockUsec(void);
s32 sceNetIfhandleIfStart(struct ifnet *ifp, struct mbuf *m);
s32 sceNetIfhandlePollSema(s32 sema, s32 n);
s32 sceNetIfhandleSignalSema(s32 sema, s32 n);
M2C_UNK sceNetIfhandleTerm();
s32 sceNetIfhandleWaitSema(s32 sema, s32 n, u32 *timeout);
s32 sceNetIfhandle_lib_0C391E9F(s32 poolSize);
M2C_UNK sceNetIfhandle_lib_29ED84C5();
char *sceNetIndex(const char *s, s32 c);
s32 sceNetInit(s32 poolSize, s32 calloutPrio, s32 calloutStack, s32 netintrPrio, s32 netintrStack);
char sceNetLook_ctype_table(s32 c);
void sceNetMFreem(struct mbuf *m);
void *sceNetMallocInternal(u32 size);
void *sceNetMemchr(const void *s, s32 c, s32 n);
s32 sceNetMemcmp(const void *s1, const void *s2, s32 n);
u8 *sceNetMemcpy(u8 *arg0, u8 *arg1, s32 arg2);
void *sceNetMemmove(void *dst, const void *src, s32 n);
void *sceNetMemset(void *s, s32 c, s32 n);
u32 sceNetRand(void);
s32 sceNetSprintf(char *buf, const char *fmt, ...);
char *sceNetStrchr(const char *s, s32 c);
s32 sceNetStrcmp(const char *s1, const char *s2);
u8 *sceNetStrcpy(u8 *arg0, u8 *arg1);
s32 sceNetStrlen(const char *s);
s32 sceNetStrncmp(const char *s1, const char *s2, s32 n);
char *sceNetStrncpy(char *dst, const char *src, s32 n);
char *sceNetStrrchr(const char *s, s32 c);
s32 sceNetTerm(void);
s32 sceNetThreadAbort(SceUID thid);
char sceNetTolower(char c);
M2C_UNK sceWlanDrv_lib_8D5F551B(M2C_UNK);
s32 slpque_init(void);
void slpque_term(void);
s32 spl_init(void);
void spl_term(void);
s32 threadinfo_init(void);
void threadinfo_term(void);

#endif
