#ifndef PSPNET_INET_DECLS_H
#define PSPNET_INET_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct SceTailqHead {
    void *tqh_first;
    void **tqh_last;
};

typedef struct {
    s8 b[4];
} SceNetBytes4;

/* NetBSD-derived (4.4BSD-Lite2 + NetBSD 1.3-1.5 socket layer) types, offsets checked in 1.00 */
struct mbuf;
struct socket;

/* libkern.h */
static __inline u32 min(u32 a, u32 b) {
    return (a < b) ? a : b;
}
static __inline u32 max(u32 a, u32 b) {
    return (a > b) ? a : b;
}
static __inline s32 imin(s32 a, s32 b) {
    return (a < b) ? a : b;
}
static __inline s32 imax(s32 a, s32 b) {
    return (a > b) ? a : b;
}

#define TAILQ_HEAD(name, type) struct name { struct type *tqh_first; struct type **tqh_last; }
#define TAILQ_ENTRY(type) struct { struct type *tqe_next; struct type **tqe_prev; }

/* struct selinfo (8 bytes) */
struct selinfo {
    s32 sel_pid;
    s32 sel_flags;
};

/* struct sockbuf (0x28) */
struct sockbuf {
    u32 sb_cc;              /* 0x00 actual chars in buffer */
    u32 sb_hiwat;           /* 0x04 max actual char count */
    u32 sb_mbcnt;           /* 0x08 chars of mbufs used */
    u32 sb_mbmax;           /* 0x0C max chars of mbufs to use */
    s32 sb_lowat;           /* 0x10 low water mark */
    struct mbuf *sb_mb;     /* 0x14 the mbuf chain */
    struct selinfo sb_sel;  /* 0x18 process selecting read/write */
    s16 sb_flags;           /* 0x20 SB_* */
    s32 sb_timeo;           /* 0x24 timeout for read/write (SCE: int) */
};

#define SB_LOCK     0x01
#define SB_WANT     0x02
#define SB_WAIT     0x04
#define SB_SEL      0x08
#define SB_ASYNC    0x10
#define SB_UPCALL   0x20
#define SB_NOINTR   0x40
#define SB_NOTIFY   (SB_WAIT | SB_SEL | SB_ASYNC | SB_UPCALL)

/* struct protosw (NetBSD layout, 0x34; int pr_type, pr_usrreq without the proc argument) */
struct protosw {
    s32 pr_type;                    /* 0x00 */
    struct domain *pr_domain;       /* 0x04 */
    s16 pr_protocol;                /* 0x08 */
    s16 pr_flags;                   /* 0x0A */
    void (*pr_input)();             /* 0x0C */
    s32 (*pr_output)();             /* 0x10 */
    void *(*pr_ctlinput)(s32 cmd, struct sockaddr *sa, void *v); /* 0x14 */
    s32 (*pr_ctloutput)();          /* 0x18 */
    s32 (*pr_usrreq)(struct socket *so, s32 req, struct mbuf *m, struct mbuf *nam, struct mbuf *control); /* 0x1C */
    void (*pr_init)(void);          /* 0x20 */
    void (*pr_fasttimo)(void);      /* 0x24 */
    void (*pr_slowtimo)(void);      /* 0x28 */
    void (*pr_drain)(void);         /* 0x2C */
    s32 (*pr_sysctl)(s32 *name, u32 namelen, void *oldp, u32 *oldlenp, void *newp, u32 newlen); /* 0x30 */
};

#define PRU_ATTACH      0
#define PRU_DETACH      1
#define PRU_BIND        2
#define PRU_LISTEN      3
#define PRU_CONNECT     4
#define PRU_ACCEPT      5
#define PRU_DISCONNECT  6
#define PRU_SHUTDOWN    7
#define PRU_RCVD        8
#define PRU_SEND        9
#define PRU_ABORT       10
#define PRU_CONTROL     11

TAILQ_HEAD(soqhead, socket);

/* struct socket (0xBC, malloc'd by socreate) */
struct socket {
    s16 so_type;                /* 0x00 */
    s16 so_options;             /* 0x02 */
    s32 so_linger;              /* 0x04 SCE: int (NetBSD: short) */
    s16 so_state;               /* 0x08 SS_* */
    void *so_pcb;               /* 0x0C */
    struct protosw *so_proto;   /* 0x10 */
    struct socket *so_head;     /* 0x14 */
    struct soqhead *so_onq;     /* 0x18 */
    struct soqhead so_q0;       /* 0x1C */
    struct soqhead so_q;        /* 0x24 */
    TAILQ_ENTRY(socket) so_qe;  /* 0x2C */
    s16 so_q0len;               /* 0x34 */
    s16 so_qlen;                /* 0x36 */
    s16 so_qlimit;              /* 0x38 */
    s16 so_timeo;               /* 0x3A */
    u16 so_error;               /* 0x3C */
    u32 so_oobmark;             /* 0x40 (no so_pgid) */
    struct sockbuf so_rcv;      /* 0x44 */
    struct sockbuf so_snd;      /* 0x6C */
    void *so_tpcb;              /* 0x94 */
    void (*so_upcall)(struct socket *so, void *arg, s32 waitf); /* 0x98 */
    void *so_upcallarg;         /* 0x9C */
    s32 (*so_send)();           /* 0xA0 sosend */
    s32 (*so_receive)();        /* 0xA4 soreceive */
    s32 so_fd;                  /* 0xA8 SCE descriptor, -1 until allocated */
    TAILQ_ENTRY(socket) so_list; /* 0xAC all sockets (so_list) */
    struct SceNetInetWaiter *so_waiter; /* 0xB4 */
    struct socket *so_selnext;  /* 0xB8 */
};

#define SS_NOFDREF          0x001
#define SS_ISCONNECTED      0x002
#define SS_ISCONNECTING     0x004
#define SS_ISDISCONNECTING  0x008
#define SS_CANTSENDMORE     0x010
#define SS_CANTRCVMORE      0x020
#define SS_RCVATMARK        0x040
#define SS_NBIO             0x080
#define SS_ASYNC            0x100
#define SS_ISCONFIRMING     0x200
#define SS_MORETOCOME       0x400
#define SS_ISDISCONNECTED   0x800

#define PR_ATOMIC       0x01
#define PR_ADDR         0x02
#define PR_CONNREQUIRED 0x04
#define PR_WANTRCVD     0x08
#define PR_RIGHTS       0x10

#define M_WAITOK 0
#define M_DONTWAIT 1

#define sb_notify(sb) (((sb)->sb_flags & (SB_WAIT | SB_SEL | SB_ASYNC | SB_UPCALL)) != 0)
#define sbspace(sb) \
    ((s32)imin((s32)((sb)->sb_hiwat - (sb)->sb_cc), (s32)((sb)->sb_mbmax - (sb)->sb_mbcnt)))
#define sblock(sb, wf) ((sb)->sb_flags & SB_LOCK ? \
        (((wf) == M_WAITOK) ? sb_lock(sb) : 11) : \
        ((sb)->sb_flags |= SB_LOCK), 0)
#define sbunlock(sb) { \
    (sb)->sb_flags &= ~SB_LOCK; \
    if ((sb)->sb_flags & SB_WANT) { \
        (sb)->sb_flags &= ~SB_WANT; \
        _sce_pspnet_wakeup(&(sb)->sb_flags); \
    } \
}
#define sorwakeup(so) do { \
        if (sb_notify(&(so)->so_rcv)) \
            sowakeup((so), &(so)->so_rcv); \
    } while (0)
#define sowwakeup(so) do { \
        if (sb_notify(&(so)->so_snd)) \
            sowakeup((so), &(so)->so_snd); \
    } while (0)

/* struct ifqueue (4.4BSD if.h) */
struct ifqueue {
    struct mbuf *ifq_head;      /* 0x00 */
    struct mbuf *ifq_tail;      /* 0x04 */
    s32 ifq_len;                /* 0x08 */
    s32 ifq_maxlen;             /* 0x0C */
    s32 ifq_drops;              /* 0x10 */
};
#define IFQ_MAXLEN 50

/* struct mbuf (NetBSD 1.5 mbuf.h; MSIZE 0x100; SCE pkthdr is 0x1C bytes) */
struct m_ext {
    u8 *ext_buf;                /* 0x30 */
    void (*ext_free)(u8 *buf, u32 size, void *arg); /* 0x34 */
    void *ext_arg;              /* 0x38 */
    u32 ext_size;               /* 0x3C */
    s32 ext_type;               /* 0x40 */
    struct mbuf *ext_nextref;   /* 0x44 */
    struct mbuf *ext_prevref;   /* 0x48 */
};
struct mbuf {
    struct mbuf *m_next;        /* 0x00 */
    struct mbuf *m_nextpkt;     /* 0x04 */
    u8 *m_data;                 /* 0x08 */
    s32 m_len;                  /* 0x0C */
    s16 m_type;                 /* 0x10 MT_* */
    s16 m_flags;                /* 0x12 M_* */
    struct {
        struct ifnet *rcvif;    /* 0x14 */
        s32 len;                /* 0x18 */
        struct mbuf *aux;       /* 0x1C */
        u8 unk20[0x10];
    } m_pkthdr;
    struct m_ext m_ext;         /* 0x30 (M_EXT) */
};
#define M_CLUSTER   0x0008
#define MLEN        (MSIZE - 0x14)
#define MCLISREFERENCED(m) ((m)->m_ext.ext_nextref != (m))
#define _MCLDEREFERENCE(m) do { \
        (m)->m_ext.ext_nextref->m_ext.ext_prevref = (m)->m_ext.ext_prevref; \
        (m)->m_ext.ext_prevref->m_ext.ext_nextref = (m)->m_ext.ext_nextref; \
    } while (0)
#define MCLINITREFERENCE(m) do { \
        (m)->m_ext.ext_prevref = (m); \
        (m)->m_ext.ext_nextref = (m); \
    } while (0)
/* SCE: clusters come from sceNetMallocInternal, m_reclaim dropped */
#define MCLGET(m, how) do { \
    (m)->m_ext.ext_buf = sceNetMallocInternal(MCLBYTES); \
    if ((m)->m_ext.ext_buf == NULL) { \
        (m)->m_ext.ext_buf = sceNetMallocInternal(MCLBYTES); \
    } \
    if ((m)->m_ext.ext_buf != NULL) { \
        (m)->m_data = (m)->m_ext.ext_buf; \
        (m)->m_flags |= M_EXT | M_CLUSTER; \
        (m)->m_ext.ext_size = MCLBYTES; \
        (m)->m_ext.ext_free = NULL; \
        (m)->m_ext.ext_arg = NULL; \
        MCLINITREFERENCE(m); \
    } \
} while (0)
#define MEXTMALLOC(m, size, how) do { \
    (m)->m_ext.ext_buf = sceNetMallocInternal(size); \
    if ((m)->m_ext.ext_buf != NULL) { \
        (m)->m_data = (m)->m_ext.ext_buf; \
        (m)->m_flags |= M_EXT; \
        (m)->m_flags &= ~M_CLUSTER; \
        (m)->m_ext.ext_size = (size); \
        (m)->m_ext.ext_free = NULL; \
        (m)->m_ext.ext_arg = NULL; \
        (m)->m_ext.ext_type = (m)->m_type; \
        MCLINITREFERENCE(m); \
    } \
} while (0)
#define _MEXTREMOVE(m) do { \
    if (MCLISREFERENCED(m)) { \
        _MCLDEREFERENCE(m); \
    } else if ((m)->m_flags & M_CLUSTER) { \
        sceNetFreeInternal((m)->m_ext.ext_buf); \
    } else if ((m)->m_ext.ext_free) { \
        (*((m)->m_ext.ext_free))((m)->m_ext.ext_buf, (m)->m_ext.ext_size, (m)->m_ext.ext_arg); \
    } else { \
        sceNetFreeInternal((m)->m_ext.ext_buf); \
    } \
    (m)->m_flags &= ~(M_CLUSTER | M_EXT); \
    (m)->m_ext.ext_size = 0; \
} while (0)
#define MFREE(m, n) do { \
    if (((m)->m_flags & M_PKTHDR) != 0 && (m)->m_pkthdr.aux) { \
        sceNetMFreem((m)->m_pkthdr.aux); \
        (m)->m_pkthdr.aux = NULL; \
    } \
    if ((m)->m_flags & M_EXT) { \
        _MEXTREMOVE((m)); \
    } \
    (n) = (m)->m_next; \
    sceNetFreeInternal((m)); \
} while (0)

/* struct cmsghdr (socket.h); SCE ALIGNBYTES is a function (sce_alignbytes, returns 3) */
struct cmsghdr {
    u32 cmsg_len;
    s32 cmsg_level;
    s32 cmsg_type;
};
#define ALIGNBYTES sce_alignbytes()
#define CMSG_ALIGN(n) (((n) + ALIGNBYTES) & ~ALIGNBYTES)
#define CMSG_DATA(cmsg) ((u8 *)(cmsg) + CMSG_ALIGN(sizeof(struct cmsghdr)))
#define CMSG_SPACE(l) (CMSG_ALIGN(sizeof(struct cmsghdr)) + CMSG_ALIGN(l))
#define CMSG_LEN(l) (CMSG_ALIGN(sizeof(struct cmsghdr)) + (l))

#define MT_DATA     1
#define MT_HEADER   2
#define MT_SONAME   3
#define MT_SOOPTS   4
#define MT_CONTROL  6
#define MT_OOBDATA  7
#define MCLBYTES    2048

#define sballoc(sb, m) { \
    (sb)->sb_cc += (m)->m_len; \
    (sb)->sb_mbcnt += MSIZE; \
    if ((m)->m_flags & M_EXT) \
        (sb)->sb_mbcnt += (m)->m_ext.ext_size; \
}
#define sbfree(sb, m) { \
    (sb)->sb_cc -= (m)->m_len; \
    (sb)->sb_mbcnt -= MSIZE; \
    if ((m)->m_flags & M_EXT) \
        (sb)->sb_mbcnt -= (m)->m_ext.ext_size; \
}

#define M_EXT       0x0001
#define M_PKTHDR    0x0002
#define M_EOR       0x0004

#define MSIZE       0x100
#define mtod(m, t)  ((t)((m)->m_data))

/* struct domain (4.4BSD) */
struct domain {
    s32 dom_family;                     /* 0x00 */
    char *dom_name;                     /* 0x04 */
    void (*dom_init)(void);             /* 0x08 */
    s32 (*dom_externalize)();           /* 0x0C */
    void (*dom_dispose)(struct mbuf *m); /* 0x10 */
    struct protosw *dom_protosw;        /* 0x14 */
    struct protosw *dom_protoswNPROTOSW; /* 0x18 */
    struct domain *dom_next;            /* 0x1C */
};

struct sockaddr {
    u8 sa_len;
    u8 sa_family;
    char sa_data[14];
};

/* packed like pspsdk's netinet/in.h: accesses follow the containing object's alignment */
struct in_addr {
    u32 s_addr;
} __attribute__((packed));

struct sockaddr_in {
    u8 sin_len;                 /* 0x0 */
    u8 sin_family;              /* 0x1 */
    u16 sin_port;               /* 0x2 */
    struct in_addr sin_addr;    /* 0x4 */
    s8 sin_zero[8];             /* 0x8 */
};

#define AF_INET 2

/* struct rawcb (NetBSD 1.5 raw_cb.h) */
struct sockproto {
    u16 sp_family;
    u16 sp_protocol;
};
struct rawcb {
    struct { struct rawcb *le_next; struct rawcb **le_prev; } rcb_list; /* 0x00 */
    struct socket *rcb_socket;  /* 0x08 */
    struct sockaddr *rcb_faddr; /* 0x0C */
    struct sockaddr *rcb_laddr; /* 0x10 */
    struct sockproto rcb_proto; /* 0x14 */
};

/* struct radix_node (4.4BSD radix.h, 0x18) */
struct radix_node {
    struct radix_mask *rn_mklist;   /* 0x00 */
    struct radix_node *rn_p;        /* 0x04 parent */
    s16 rn_b;                       /* 0x08 bit offset; -1-index(netmask) */
    s8 rn_bmask;                    /* 0x0A node: mask for bit test */
    u8 rn_flags;                    /* 0x0B */
    union {
        struct {
            char *rn_Key;           /* 0x0C */
            char *rn_Mask;          /* 0x10 */
            struct radix_node *rn_Dupedkey; /* 0x14 */
        } rn_leaf;
        struct {
            s32 rn_Off;             /* 0x0C */
            struct radix_node *rn_L; /* 0x10 */
            struct radix_node *rn_R; /* 0x14 */
        } rn_node;
    } rn_u;
};
#define rn_dupedkey rn_u.rn_leaf.rn_Dupedkey
#define rn_key rn_u.rn_leaf.rn_Key
#define rn_mask rn_u.rn_leaf.rn_Mask
#define rn_off rn_u.rn_node.rn_Off
#define rn_l rn_u.rn_node.rn_L
#define rn_r rn_u.rn_node.rn_R
#define RNF_NORMAL  1
#define RNF_ROOT    2
#define RNF_ACTIVE  4

/* SCE: per-thread select/poll waiter (socket->so_waiter) */
struct SceNetInetWaiter {
    u8 unk0[0x20];
    s32 unk20;                  /* 0x20 waiting */
    u8 unk24[0x48 - 0x24];
    s32 flags;                  /* 0x48 */
    SceUID sema;                /* 0x4C */
#if FW_VERSION < 150
    u8 unk50[4];
#endif
    struct socket *sockets;     /* 0x54 (1.00) / 0x50 (1.50+): list linked by so_selnext */
#if FW_VERSION < 260
    u8 unk_tail[0xC];
#endif
};
/* == pspnet's SceNetThreadInfo: 0x64 in 1.00, 0x60 in 1.50-2.50, 0x5C in 2.60+ */
#if FW_VERSION < 150
typedef char chk_SceNetInetWaiter[(sizeof(struct SceNetInetWaiter) == 0x64) ? 1 : -1];
#elif FW_VERSION < 260
typedef char chk_SceNetInetWaiter[(sizeof(struct SceNetInetWaiter) == 0x60) ? 1 : -1];
#endif



/* struct rt_metrics (4.4BSD route.h, 0x28) */
struct rt_metrics {
    u32 rmx_locks;      /* 0x00 RTV_* */
    u32 rmx_mtu;        /* 0x04 */
    u32 rmx_hopcount;   /* 0x08 */
    u32 rmx_expire;     /* 0x0C */
    u32 rmx_recvpipe;   /* 0x10 */
    u32 rmx_sendpipe;   /* 0x14 */
    u32 rmx_ssthresh;   /* 0x18 */
    u32 rmx_rtt;        /* 0x1C */
    u32 rmx_rttvar;     /* 0x20 */
    u32 rmx_pksent;     /* 0x24 */
};
#define RTV_MTU 0x1
#define RTV_SSTHRESH 0x20
#define RTV_RTT 0x40
#define RTV_RTTVAR 0x80

/* struct rtentry (NetBSD 1.4 route.h) */
struct rtentry {
    struct radix_node rt_nodes[2];  /* 0x00 */
    struct sockaddr *rt_gateway;    /* 0x30 */
    s32 rt_flags;                   /* 0x34 RTF_* */
    s32 rt_refcnt;                  /* 0x38 */
    u32 rt_use;                     /* 0x3C */
    struct ifnet *rt_ifp;           /* 0x40 */
    struct ifaddr *rt_ifa;          /* 0x44 */
    struct sockaddr *rt_genmask;    /* 0x48 */
    void *rt_llinfo;                /* 0x4C */
    struct rt_metrics rt_rmx;       /* 0x50 */
    struct rtentry *rt_gwroute;     /* 0x78 */
    struct rttimer *rt_timer;       /* 0x7C LIST_HEAD of rttimer */
};
#define rt_key(r) ((struct sockaddr *)((r)->rt_nodes[0].rn_key))

/* NetBSD 1.4 rttimer (no rtq_count yet) */
struct rttimer_queue {
    s32 rtq_timeout;                /* 0x0 */
    TAILQ_HEAD(, rttimer) rtq_head; /* 0x4 */
};
struct rttimer {
    TAILQ_ENTRY(rttimer) rtt_next;  /* 0x00 */
    struct { struct rttimer *le_next; struct rttimer **le_prev; } rtt_link; /* 0x08 */
    struct rttimer_queue *rtt_queue; /* 0x10 */
    struct rtentry *rtt_rt;         /* 0x14 */
    void (*rtt_func)();             /* 0x18 */
    s32 rtt_time;                   /* 0x1C */
};

/* struct radix_node_head (4.4BSD radix.h, partial) */
struct radix_node_head {
    struct radix_node *rnh_treetop;  /* 0x00 */
    s32 rnh_addrsize;                /* 0x04 */
    s32 rnh_pktsize;                 /* 0x08 */
    struct radix_node *(*rnh_addaddr)();    /* 0x0C */
    struct radix_node *(*rnh_addpkt)();     /* 0x10 */
    struct radix_node *(*rnh_deladdr)();    /* 0x14 */
    struct radix_node *(*rnh_delpkt)();     /* 0x18 */
    struct radix_node *(*rnh_matchaddr)(void *v, struct radix_node_head *head); /* 0x1C */
    struct radix_node *(*rnh_lookup)();     /* 0x20 */
    struct radix_node *(*rnh_matchpkt)();   /* 0x24 */
    s32 (*rnh_walktree)(struct radix_node_head *head, s32 (*f)(), void *w); /* 0x28 */
};
#define RTF_UP 0x1
#define RTF_GATEWAY 0x2
#define RTF_HOST 0x4
#define RTF_DYNAMIC 0x10
#define RTF_CLONING 0x100
#define RTF_STATIC 0x800
#define RTM_ADD 1
#define RTM_DELETE 2

struct route {
    struct rtentry *ro_rt;
    struct sockaddr ro_dst;
};

/* NetBSD if_spppsubr.c control protocol descriptor (0x3C): lcp lcp, ipcp ipcp, pap pap, chap chap */
struct sppp;
struct cp {
    u16 proto;                      /* 0x00 */
    u8 protoidx;                    /* 0x02 */
    u8 flags;                       /* 0x03 CP_* */
    const char *name;               /* 0x04 */
    void (*Up)(struct sppp *sp);    /* 0x08 */
    void (*Down)(struct sppp *sp);  /* 0x0C */
    void (*Open)(struct sppp *sp);  /* 0x10 */
    void (*Close)(struct sppp *sp); /* 0x14 */
    void (*TO)(void *sp);           /* 0x18 */
    s32 (*RCR)();                   /* 0x1C */
    void (*RCN_rej)();              /* 0x20 */
    void (*RCN_nak)();              /* 0x24 */
    void (*tlu)(struct sppp *sp);   /* 0x28 */
    void (*tld)(struct sppp *sp);   /* 0x2C */
    void (*tls)(struct sppp *sp);   /* 0x30 */
    void (*tlf)(struct sppp *sp);   /* 0x34 */
    void (*scr)(struct sppp *sp);   /* 0x38 */
};
#define CP_LCP  0x01
#define CP_AUTH 0x02
#define CP_NCP  0x04
#define CP_QUAL 0x08

#define IDX_LCP 0
#define IDX_IPCP 1
#define IDX_PAP 2
#define IDX_CHAP 3
#define IDX_COUNT 4

#define SPPP_PHASE_DEAD 0
#define SPPP_PHASE_ESTABLISH 1
#define SPPP_PHASE_TERMINATE 2
#define SPPP_PHASE_AUTHENTICATE 3
#define SPPP_PHASE_NETWORK 4

#define PPP_PAP 0xC023

#define STATE_INITIAL 0
#define STATE_STARTING 1
#define STATE_CLOSED 2
#define STATE_STOPPED 3
#define STATE_CLOSING 4
#define STATE_STOPPING 5
#define STATE_REQ_SENT 6
#define STATE_ACK_RCVD 7
#define STATE_ACK_SENT 8
#define STATE_OPENED 9

/* struct sppp (NetBSD if_spppsubr, partial; callouts are 0x24 bytes) */
struct sppp {
    u8 unk0[0xCC];
    struct ifqueue pp_fastq;        /* 0xCC really pp_if.if_snd (SCE has no fastq) */
    u8 unkE0[0x128 - 0xE0];
    struct ifqueue pp_cpq;          /* 0x128 */
    s32 pp_flags;                   /* 0x13C PP_* */
    u8 unk140[0x148 - 0x140];
    u32 pp_seq[IDX_COUNT];          /* 0x148 local sequence numbers */
    u8 unk158[0x168 - 0x158];
    u64 pp_saved_mtu;               /* 0x168 SCE: if_mtu before ipcp.tlu clamped it */
    s32 pp_phase;                   /* 0x170 */
    s32 unk174;
    s32 unk178;
    s32 unk17C;
    s32 state[IDX_COUNT];           /* 0x180 STATE_* per control protocol */
    u8 confid[IDX_COUNT];           /* 0x190 */
    s32 rst_counter[IDX_COUNT];     /* 0x194 */
    u8 unk1A4[0x1B4 - 0x1A4];
    u8 ch[IDX_COUNT][0x24];         /* 0x1B4 per-protocol timeout callouts */
    u32 lcp_opts;                   /* 0x244 lcp.opts */
    u32 lcp_magic;                  /* 0x248 */
    u32 lcp_mru;                    /* 0x24C */
    u32 lcp_their_mru;              /* 0x250 */
    s32 lcp_protos;                 /* 0x254 lcp.protos */
    u32 lcp_echoid;                 /* 0x258 */
    s32 lcp_timeout;                /* 0x25C */
    s32 lcp_max_terminate;          /* 0x260 */
    s32 lcp_max_configure;          /* 0x264 */
    s32 lcp_max_failure;            /* 0x268 */
    u32 ipcp_opts;                  /* 0x26C ipcp.opts */
    u32 ipcp_flags;                 /* 0x270 ipcp.flags */
    u32 unk274;
    u32 unk278;
    u16 myauth_proto;               /* 0x27C myauth.proto */
    u8 unk27E[0x280 - 0x27E];
    u8 myauth_name[0x80];           /* 0x280 */
    u8 myauth_secret[0x80];         /* 0x300 */
    u8 myauth_name_len;             /* 0x380 */
    u8 myauth_secret_len;           /* 0x381 */
    u8 unk382[0x394 - 0x382];
    s32 unk394;                     /* 0x394 pap request timeout */
    s32 unk398;                     /* 0x398 pap request retries */
    u8 unk39C[0x4A8 - 0x39C];
    void (*pp_tls)(struct sppp *sp);    /* 0x4A8 */
    void (*pp_tlf)(struct sppp *sp);    /* 0x4AC */
    void (*pp_con)(struct sppp *sp);    /* 0x4B0 */
};



/* struct ip_moptions (4.4BSD ip_var.h) */
struct ip_moptions {
    struct ifnet *imo_multicast_ifp;    /* 0x0 */
    u8 imo_multicast_ttl;               /* 0x4 */
    u8 imo_multicast_loop;              /* 0x5 */
    u16 imo_num_memberships;            /* 0x6 */
    struct in_multi *imo_membership[20]; /* 0x8 IP_MAX_MEMBERSHIPS */
};

/* struct ip (netinet/ip.h, packed) */
struct ip {
    u8 ip_hl_v;                 /* 0x00 ip_hl:4, ip_v:4 */
    u8 ip_tos;                  /* 0x01 */
    u16 ip_len;                 /* 0x02 */
    u16 ip_id;                  /* 0x04 */
    u16 ip_off;                 /* 0x06 */
    u8 ip_ttl;                  /* 0x08 */
    u8 ip_p;                    /* 0x09 */
    u16 ip_sum;                 /* 0x0A */
    struct in_addr ip_src;      /* 0x0C */
    struct in_addr ip_dst;      /* 0x10 */
} __attribute__((packed));

/* struct inpcb (NetBSD 1.5 in_pcb.h) */
struct inpcb {
    struct { struct inpcb *le_next; struct inpcb **le_prev; } inp_hash; /* 0x00 */
    struct { struct inpcb *cqe_next; struct inpcb *cqe_prev; } inp_queue; /* 0x08 */
    void *inp_ppcb;             /* 0x10 */
    s32 inp_state;              /* 0x14 */
    u16 inp_fport;              /* 0x18 */
    u16 inp_lport;              /* 0x1A */
    struct socket *inp_socket;  /* 0x1C */
    struct route inp_route;     /* 0x20 */
    s32 inp_flags;              /* 0x34 */
    struct ip inp_ip;           /* 0x38 */
    struct mbuf *inp_options;   /* 0x4C */
    struct ip_moptions *inp_moptions; /* 0x50 */
    s32 inp_errormtu;           /* 0x54 */
    struct inpcbtable *inp_table; /* 0x58 */
};
#define inp_faddr inp_ip.ip_dst
#define inp_laddr inp_ip.ip_src

/* struct if_data (NetBSD 1.5 if.h, u_quad_t counters, partial) */
struct if_data {
    u8 ifi_type;                        /* 0x00 */
    u8 ifi_addrlen;                     /* 0x01 */
    u8 ifi_hdrlen;                      /* 0x02 */
    u64 ifi_mtu;                        /* 0x08 */
    u64 ifi_metric;                     /* 0x10 */
    u64 ifi_baudrate;                   /* 0x18 */
};

/* struct ifnet (NetBSD 1.5 if.h, partial) */
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
    u8 unk58[0xC];
    u8 unk64[0xB0 - 0x58 - 0xC];
    s32 (*if_output)();                 /* 0xB0 */
    void (*if_input)(struct ifnet *ifp, struct mbuf *m); /* 0xB4 */
    void (*if_start)(struct ifnet *ifp); /* 0xB8 */
    s32 (*if_ioctl)(struct ifnet *ifp, u32 cmd, void *data); /* 0xBC */
    u8 unkC0[0xCC - 0xC0];
    struct ifqueue if_snd;              /* 0xCC */
    struct sockaddr_dl *if_sadl;        /* 0xE0 */
    u8 *if_broadcastaddr;               /* 0xE4 */
};
#define if_type if_data.ifi_type
#define if_addrlen if_data.ifi_addrlen
#define if_hdrlen if_data.ifi_hdrlen
#define IFF_MULTICAST 0x8000
#define IFT_LOOP 0x18
#define if_mtu if_data.ifi_mtu
#define IFF_UP 0x1
#define IFF_LOOPBACK 0x8

/* struct ifaddr (NetBSD 1.5 if.h, partial) */
struct ifaddr {
    struct sockaddr *ifa_addr;          /* 0x00 */
    struct sockaddr *ifa_dstaddr;       /* 0x04 */
    struct sockaddr *ifa_netmask;       /* 0x08 */
    struct ifnet *ifa_ifp;              /* 0x0C */
    TAILQ_ENTRY(ifaddr) ifa_list;       /* 0x10 */
    u8 ifa_data[0x10];                  /* 0x18 struct ifaddr_data (u_quad_t in/out bytes) */
    void (*ifa_rtrequest)(s32 cmd, struct rtentry *rt, struct sockaddr *sa); /* 0x28 */
    u32 ifa_flags;                      /* 0x2C */
    s32 ifa_refcnt;                     /* 0x30 */
    s32 ifa_metric;                     /* 0x34 */
};
typedef char chk_ifaddr[(sizeof(struct ifaddr) == 0x38) ? 1 : -1];

struct timeval {
    u32 tv_sec;
    u32 tv_usec;
};

/* SCE: sceNetInetPoll entry */
struct SceNetInetPollfd {
    s32 fd;
    s16 events;
    s16 revents;
};

/* sceNetConfigGetRouteInfo entry (0x24) */
typedef struct {
    u32 unk0;
    u32 unk4;
    u32 dst;        /* 0x08 */
    u32 gateway;    /* 0x0C */
    u8 unk10[0x30 - 0x10];
} SceNetConfigRouteInfo;

/* struct in_ifaddr (NetBSD in_var.h, partial) */
struct in_ifaddr {
    struct ifaddr ia_ifa;               /* 0x00 */
    u32 ia_net;                         /* 0x38 */
    u32 ia_netmask;                     /* 0x3C */
    u32 ia_subnet;                      /* 0x40 */
    u32 ia_subnetmask;                  /* 0x44 */
    struct in_addr ia_netbroadcast;     /* 0x48 */
    struct { struct in_ifaddr *le_next; struct in_ifaddr **le_prev; } ia_hash; /* 0x4C */
    TAILQ_ENTRY(in_ifaddr) ia_list;     /* 0x54 */
    struct sockaddr_in ia_addr;         /* 0x5C */
    struct sockaddr_in ia_dstaddr;      /* 0x6C ia_broadaddr */
    struct sockaddr_in ia_sockmask;     /* 0x7C */
    struct { struct in_multi *lh_first; } ia_multiaddrs; /* 0x8C */
};

/* struct in_multi (netinet/in_var.h; SCE field order) */
struct in_multi {
    struct in_addr inm_addr;            /* 0x00 */
    struct ifnet *inm_ifp;              /* 0x04 */
    struct in_ifaddr *inm_ia;           /* 0x08 */
    u32 inm_refcount;                   /* 0x0C */
    u32 inm_timer;                      /* 0x10 */
    struct { struct in_multi *le_next; struct in_multi **le_prev; } inm_list; /* 0x14 */
    s32 inm_state;                      /* 0x1C */
    struct router_info *inm_rti;        /* 0x20 */
};
typedef char chk_in_multi[(sizeof(struct in_multi) == 0x24) ? 1 : -1];

struct ifreq {
    char ifr_name[16];                  /* 0x00 */
    struct sockaddr ifr_addr;           /* 0x10 */
};
#define ia_broadaddr ia_dstaddr
#define ia_ifp ia_ifa.ifa_ifp

/* struct rt_addrinfo (4.4BSD route.h) */
#define RTAX_MAX 8
struct rt_addrinfo {
    s32 rti_addrs;                      /* 0x00 */
    struct sockaddr *rti_info[RTAX_MAX]; /* 0x04 */
};

/* struct arphdr (if_arp.h), byte-aligned */
struct arphdr {
    u16 ar_hrd;
    u16 ar_pro;
    u8 ar_hln;
    u8 ar_pln;
    u16 ar_op;
} __attribute__((packed));
#define ETHERTYPE_IP 0x0800
#define ETHERTYPE_IPTRAILERS 0x1000

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
#define LLADDR(s) ((u8 *)((s)->sdl_data + (s)->sdl_nlen))

#define IF_DEQUEUE(ifq, m) { \
    (m) = (ifq)->ifq_head; \
    if (m) { \
        if (((ifq)->ifq_head = (m)->m_nextpkt) == 0) \
            (ifq)->ifq_tail = 0; \
        (m)->m_nextpkt = 0; \
        (ifq)->ifq_len--; \
    } \
}

/* struct ipqent (NetBSD 1.5 ip_var.h, partial) */
struct ipqent {
    struct { struct ipqent *le_next; struct ipqent **le_prev; } ipqe_q; /* 0x00 */
    void *ipqe_ip;                  /* 0x08 */
    struct mbuf *ipqe_m;            /* 0x0C */
    u8 ipqe_mff;                    /* 0x10 */
    struct { struct ipqent *le_next; struct ipqent **le_prev; } ipqe_timeq; /* 0x14 */
};

/* struct tcpcb (NetBSD 1.5 tcp_var.h; SCE timers hold absolute pfslowtimo ticks) */
#define TCPT_NTIMERS 4
#define TCPT_REXMT 0
#define TCPT_PERSIST 1
#define TCPT_KEEP 2
#define TCPT_2MSL 3
struct tcpcb {
    s32 t_family;               /* 0x00 */
    struct ipqent *segq;        /* 0x04 LIST_HEAD (NetBSD 1.5: TAILQ) */
    s32 t_timer[TCPT_NTIMERS];  /* 0x08 */
    s16 t_state;                /* 0x18 */
    s16 t_rxtshift;             /* 0x1A */
    s16 t_rxtcur;               /* 0x1C */
    s16 t_dupacks;              /* 0x1E */
    u16 t_peermss;              /* 0x20 */
    u16 t_ourmss;               /* 0x22 */
    u16 t_segsz;                /* 0x24 */
    s8 t_force;                 /* 0x26 */
    u16 t_flags;                /* 0x28 */
    struct mbuf *t_template;    /* 0x2C */
    struct inpcb *t_inpcb;      /* 0x30 */
    void *t_in6pcb;             /* 0x34 */
    struct { struct tcpcb *le_next; struct tcpcb **le_prev; } t_delack; /* 0x38 */
    u32 snd_una;                /* 0x40 */
    u32 snd_nxt;                /* 0x44 */
    u32 snd_up;                 /* 0x48 */
    u32 snd_wl1;                /* 0x4C */
    u32 snd_wl2;                /* 0x50 */
    u32 iss;                    /* 0x54 */
    u32 snd_wnd;                /* 0x58 */
    u32 snd_recover;            /* 0x5C */
    u32 rcv_wnd;                /* 0x60 */
    u32 rcv_nxt;                /* 0x64 */
    u32 rcv_up;                 /* 0x68 */
    u32 irs;                    /* 0x6C */
    u32 rcv_adv;                /* 0x70 */
    u32 snd_max;                /* 0x74 */
    u32 snd_cwnd;               /* 0x78 */
    u32 snd_ssthresh;           /* 0x7C */
    s16 t_idle;                 /* 0x80 */
    s16 t_rtt;                  /* 0x82 */
    u32 t_rtseq;                /* 0x84 */
    s16 t_srtt;                 /* 0x88 */
    s16 t_rttvar;               /* 0x8A */
    s16 t_rttmin;               /* 0x8C */
    u32 max_sndwnd;             /* 0x90 */
    s8 t_oobflags;              /* 0x94 */
    s8 t_iobc;                  /* 0x95 */
    s16 t_softerror;            /* 0x96 */
    u8 snd_scale;               /* 0x98 */
    u8 rcv_scale;               /* 0x99 */
    u8 request_r_scale;         /* 0x9A */
    u8 requested_s_scale;       /* 0x9B */
    u32 ts_recent;              /* 0x9C */
    u32 ts_recent_age;          /* 0xA0 */
    u32 last_ack_sent;          /* 0xA4 */
    void *timeq;                /* 0xA8 LIST_HEAD */
    s32 t_mtudisc;              /* 0xAC */
    void *t_sc;                 /* 0xB0 LIST_HEAD */
};
typedef char chk_tcpcb[(sizeof(struct tcpcb) == 0xB4) ? 1 : -1];
#define TCPS_CLOSED 0
#define TCPS_SYN_RECEIVED 3
#define TCPS_ESTABLISHED 4
#define TCPS_HAVERCVDSYN(s) ((s) >= TCPS_SYN_RECEIVED)
#define TCPS_HAVEESTABLISHED(s) ((s) >= TCPS_ESTABLISHED)

/* struct tcpstat (NetBSD 1.5, u_quad_t counters; partial) */
struct tcpstat {
    u64 tcps_connattempt;       /* 0x00 */
    u64 tcps_accepts;           /* 0x08 */
    u64 tcps_connects;          /* 0x10 */
    u64 tcps_drops;             /* 0x18 */
    u64 tcps_conndrops;         /* 0x20 */
    u64 tcps_closed;            /* 0x28 */
    u8 unk30[0x80 - 0x30];
    u64 tcps_connsdrained;      /* 0x80 */
};
#define TCP_INITIAL_WINDOW(iw, segsz) \
    (((iw) == 0) ? (min(4 * (segsz), max(2 * (segsz), 4380))) : ((segsz) * (iw)))
#define TCPTV_PERSMIN 10
#define TCPTV_PERSMAX 120
#define TCP_MAXRXTSHIFT 12

/* SCE: a socket used by an API call is linked on the calling thread's waiter */
#define SO_WAITER_ATTACH(w, so) do { \
    (so)->so_waiter = (w); \
    (so)->so_selnext = (w)->sockets; \
    (w)->sockets = (so); \
} while (0)
#define SO_WAITER_DETACH(w, so) do { \
    struct socket *_p; \
    (so)->so_waiter = NULL; \
    _p = (w)->sockets; \
    if (_p == (so)) { \
        (w)->sockets = _p->so_selnext; \
    } else if (_p != NULL) { \
        while (_p->so_selnext != (so)) { \
            _p = _p->so_selnext; \
            if (_p == NULL) { \
                break; \
            } \
        } \
        if (_p != NULL) { \
            _p->so_selnext = (so)->so_selnext; \
        } \
    } \
} while (0)

/* struct iovec / msghdr (sys/uio.h, sys/socket.h) */
struct iovec {
    void *iov_base;
    u32 iov_len;
};
struct msghdr {
    void *msg_name;             /* 0x00 */
    u32 msg_namelen;            /* 0x04 */
    struct iovec *msg_iov;      /* 0x08 */
    s32 msg_iovlen;             /* 0x0C */
    void *msg_control;          /* 0x10 */
    u32 msg_controllen;         /* 0x14 */
    s32 msg_flags;              /* 0x18 */
};

/* struct inpcbtable (NetBSD 1.5 in_pcb.h) */
struct inpcbhead {
    struct inpcb *lh_first;
};
struct inpcbtable {
    struct { struct inpcb *cqh_first; struct inpcb *cqh_last; } inpt_queue; /* 0x00 */
    struct inpcbhead *inpt_bindhashtbl;     /* 0x08 */
    struct inpcbhead *inpt_connecthashtbl;  /* 0x0C */
    u32 inpt_bindhash;                      /* 0x10 */
    u32 inpt_connecthash;                   /* 0x14 */
    u16 inpt_lastport;                      /* 0x18 */
    u16 inpt_lastlow;                       /* 0x1A */
};
#define INP_ATTACHED 0
#define INP_BOUND 1
#define INP_CONNECTED 2
#define INPCBHASH_BIND(table, laddr, lport) \
    &(table)->inpt_bindhashtbl[((__builtin_allegrex_wsbw((laddr).s_addr) + (u16)__builtin_allegrex_wsbh(lport))) & (table)->inpt_bindhash]
#define INPCBHASH_CONNECT(table, faddr, fport, laddr, lport) \
    &(table)->inpt_connecthashtbl[((__builtin_allegrex_wsbw((faddr).s_addr) + (u16)__builtin_allegrex_wsbh(fport)) + \
        (__builtin_allegrex_wsbw((laddr).s_addr) + (u16)__builtin_allegrex_wsbh(lport))) & (table)->inpt_connecthash]

#define CIRCLEQ_INSERT_HEAD(head, elm, field) do { \
    (elm)->field.cqe_next = (head)->cqh_first; \
    (elm)->field.cqe_prev = (void *)(head); \
    if ((head)->cqh_last == (void *)(head)) \
        (head)->cqh_last = (elm); \
    else \
        (head)->cqh_first->field.cqe_prev = (elm); \
    (head)->cqh_first = (elm); \
} while (0)
#define CIRCLEQ_REMOVE(head, elm, field) do { \
    if ((elm)->field.cqe_next == (void *)(head)) \
        (head)->cqh_last = (elm)->field.cqe_prev; \
    else \
        (elm)->field.cqe_next->field.cqe_prev = (elm)->field.cqe_prev; \
    if ((elm)->field.cqe_prev == (void *)(head)) \
        (head)->cqh_first = (elm)->field.cqe_next; \
    else \
        (elm)->field.cqe_prev->field.cqe_next = (elm)->field.cqe_next; \
} while (0)
#define LIST_INSERT_HEAD(head, elm, field) do { \
    if (((elm)->field.le_next = (head)->lh_first) != NULL) \
        (head)->lh_first->field.le_prev = &(elm)->field.le_next; \
    (head)->lh_first = (elm); \
    (elm)->field.le_prev = &(head)->lh_first; \
} while (0)
#define LIST_REMOVE(elm, field) do { \
    if ((elm)->field.le_next != NULL) \
        (elm)->field.le_next->field.le_prev = (elm)->field.le_prev; \
    *(elm)->field.le_prev = (elm)->field.le_next; \
} while (0)
#define IN_MULTICAST(a) (((u32)(a) & __builtin_allegrex_wsbw(0xF0000000)) == __builtin_allegrex_wsbw(0xE0000000))
#define RTFREE(rt) do { \
    if ((rt)->rt_refcnt <= 1) \
        rtfree(rt); \
    else \
        (rt)->rt_refcnt--; \
} while (0)
#define IFP_TO_IA(ifp, ia) { \
    struct ifaddr *ifa; \
    for (ifa = (ifp)->if_addrlist.tqh_first; ifa && ifa->ifa_addr->sa_family != AF_INET; ifa = ifa->ifa_list.tqe_next) \
        continue; \
    (ia) = (struct in_ifaddr *)ifa; \
}

/* struct tcphdr / udphdr (byte-aligned) */
struct tcphdr {
    u16 th_sport;
    u16 th_dport;
    u32 th_seq;
    u32 th_ack;
    u8 th_x2_off;
    u8 th_flags;
    u16 th_win;
    u16 th_sum;
    u16 th_urp;
} __attribute__((packed));
struct udphdr {
    u16 uh_sport;
    u16 uh_dport;
    u16 uh_ulen;
    u16 uh_sum;
} __attribute__((packed));
#define PRC_HOSTDEAD 6
#define PRC_NCMDS 21
#define PRC_IS_REDIRECT(cmd) ((u32)(cmd) - 14 <= 3)
static __inline s32 tcp_reass_lock_try(struct tcpcb *tp) {
    s32 s;
    s = _sce_pspnet_spllock();
    if (tp->t_flags & 0x4000) { /* TF_REASSEMBLING */
        _sce_pspnet_splunlock(s);
        return 0;
    }
    tp->t_flags |= 0x4000;
    _sce_pspnet_splunlock(s);
    return 1;
}
#define TCP_REASS_LOCK_TRY(tp) tcp_reass_lock_try(tp)
#define TCP_REASS_UNLOCK(tp) do { s32 _s = _sce_pspnet_spllock(); (tp)->t_flags &= ~0x4000; _sce_pspnet_splunlock(_s); } while (0)
#define TCPT_RANGESET(tv, value, tvmin, tvmax) { (tv) = (value); if ((tv) < (tvmin)) (tv) = (tvmin); else if ((tv) > (tvmax)) (tv) = (tvmax); }
#define roundup(x, y) ((((x) + ((y) - 1)) / (y)) * (y))

/* struct icmp (partial) */
struct icmp {
    u8 icmp_type;
    u8 icmp_code;
    u16 icmp_cksum;
};

/* struct ipq (NetBSD 1.5 ip_var.h, partial) */
struct ipq {
    struct { struct ipq *le_next; struct ipq **le_prev; } ipq_q; /* 0x00 */
    u8 ipq_ttl;                     /* 0x08 */
};

/* struct ipstat (u_quad_t counters, partial) */
struct ipstat {
    u8 unk0[0x38];
    u64 ips_fragdropped;            /* 0x38 */
    u64 ips_fragtimeout;            /* 0x40 */
};
extern s32 D_0002D944; /* ipq_locked */
s32 _sce_pspnet_spllock(void);
void _sce_pspnet_splunlock(s32 s);
static __inline s32 ipq_lock_try(void) {
    s32 s;
    s = _sce_pspnet_spllock();
    if (D_0002D944) {
        _sce_pspnet_splunlock(s);
        return 0;
    }
    D_0002D944 = 1;
    _sce_pspnet_splunlock(s);
    return 1;
}
static __inline void ipq_unlock(void) {
    s32 s;
    s = _sce_pspnet_spllock();
    D_0002D944 = 0;
    _sce_pspnet_splunlock(s);
}

/* ip_input.c source-route save area */
#define MAX_IPOPTLEN 40
struct ip_srcrt_s {
    struct in_addr dst;                 /* 0x00 */
    char nop;                           /* 0x04 */
    char srcopt[3];                     /* 0x05 IPOPT_OFFSET + 1 */
    struct in_addr route[MAX_IPOPTLEN / sizeof(struct in_addr)]; /* 0x08 */
};

/* struct llinfo_arp (netinet/if_inarp.h, partial) */
struct llinfo_arp {
    struct { struct llinfo_arp *le_next; struct llinfo_arp **le_prev; } la_list; /* 0x00 */
    struct rtentry *la_rt;              /* 0x08 */
    struct mbuf *la_hold;               /* 0x0C */
    s32 la_asked;                       /* 0x10 */
};

extern s32 arp_locked; /* arp_locked */
static __inline s32 arp_lock_try(void) {
    s32 s;
    s = _sce_pspnet_spllock();
    if (arp_locked) {
        _sce_pspnet_splunlock(s);
        return 0;
    }
    arp_locked = 1;
    _sce_pspnet_splunlock(s);
    return 1;
}
static __inline void arp_unlock(void) {
    s32 s;
    s = _sce_pspnet_spllock();
    arp_locked--;
    _sce_pspnet_splunlock(s);
}

struct pollfd {
    s32 fd;                             /* 0x00 */
    s16 events;                         /* 0x04 */
    s16 revents;                        /* 0x06 */
};
#define POLLERR 0x0008
#define POLLHUP 0x0010
#define POLLNVAL 0x0020

/* struct router_info (netinet/in_var.h) */
struct router_info {
    struct ifnet *rti_ifp;              /* 0x00 */
    s32 rti_type;                       /* 0x04 */
    s32 rti_age;                        /* 0x08 */
    struct router_info *rti_next;       /* 0x0C */
};
extern struct router_info *rti_head; /* rti_head */
void *sceNetMallocInternal(u32 size);
static __inline s32 rti_fill(struct in_multi *inm) {
    struct router_info *rti;

    for (rti = rti_head; rti != 0; rti = rti->rti_next) {
        if (rti->rti_ifp == inm->inm_ifp) {
            inm->inm_rti = rti;
            if (rti->rti_type == 1)
                return (0x12);
            else
                return (0x16);
        }
    }
    rti = (struct router_info *)sceNetMallocInternal(sizeof(struct router_info));
    if (rti == NULL)
        return (0x16);
    rti->rti_ifp = inm->inm_ifp;
    rti->rti_type = 2;
    rti->rti_next = rti_head;
    rti_head = rti;
    inm->inm_rti = rti;
    return (0x16);
}

/* struct igmp (netinet/igmp.h, packed) */
struct igmp {
    u8 igmp_type;                       /* 0x0 */
    u8 igmp_code;                       /* 0x1 */
    u16 igmp_cksum;                     /* 0x2 */
    struct in_addr igmp_group;          /* 0x4 */
} __attribute__((packed));

/* struct igmpstat (netinet/igmp_var.h; SCE u64 counters) */
struct igmpstat {
    u64 igps_rcv_total;                 /* 0x00 */
    u64 igps_rcv_tooshort;              /* 0x08 */
    u64 igps_rcv_badsum;                /* 0x10 */
    u64 igps_rcv_queries;               /* 0x18 */
    u64 igps_rcv_badqueries;            /* 0x20 */
    u64 igps_rcv_reports;               /* 0x28 */
    u64 igps_rcv_badreports;            /* 0x30 */
    u64 igps_rcv_ourreports;            /* 0x38 */
    u64 igps_snd_reports;               /* 0x40 */
};

struct in_multistep {
    struct in_ifaddr *i_ia;
    struct in_multi *i_inm;
};
#define IN_NEXT_MULTI(step, inm) \
{ \
    if (((inm) = (step).i_inm) != NULL) \
        (step).i_inm = (inm)->inm_list.le_next; \
    else \
        while ((step).i_ia != NULL) { \
            (inm) = (step).i_ia->ia_multiaddrs.lh_first; \
            (step).i_ia = (step).i_ia->ia_list.tqe_next; \
            if ((inm) != NULL) { \
                (step).i_inm = (inm)->inm_list.le_next; \
                break; \
            } \
        } \
}
#define IN_FIRST_MULTI(step, inm) \
{ \
    (step).i_ia = in_ifaddrhead.tqh_first; \
    (step).i_inm = NULL; \
    IN_NEXT_MULTI((step), (inm)); \
}

typedef void (*SceNetInetHook)(void *a, u16 b, void *c);

struct SceNetInetKeyNode {
    struct SceNetInetKeyNode *next;
    struct SceNetInetKeyNode **prev;
    void *key;
};

struct Unk_Unk_func_0001AA20_0_20 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_Unk_func_0001AA20_0_4 {
    u8 pad0[0x30];
    u16 unk30;
};

struct Unk_func_000096E4_0 {
    u8 pad0[0xC];
    struct Unk_func_000096E4_var_s0 *unkC;
};

struct Unk_func_000096E4_var_s0 {
    s32 unk0;
    u8 pad4[0xC];
    struct Unk_func_000096E4_var_s0 *unk10;
};

struct Unk_func_0000D338_0 {
    u8 pad0[0x34];
    s32 unk34;
    u8 pad38[0x48];
    s32 unk80;
};

struct Unk_func_0000DDCC_1 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
};

struct Unk_func_0000DDCC_2 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
};

struct Unk_func_0000EDB8_0 {
    struct Unk_func_0000EDB8_temp_v1 *unk0;
    void **unk4;
    struct Unk_func_0000EDB8_temp_a0 *unk8;
};

struct Unk_func_0000EDB8_temp_a0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0000EDB8_temp_v1 {
    u8 pad0[0x4];
    void **unk4;
};

struct Unk_func_0000EE04_0 {
    struct Unk_func_0000EE04_temp_v1_2 *unk0;
    void **unk4;
    struct Unk_func_0000EE04_temp_v1 *unk8;
};

struct Unk_func_0000EE04_temp_v1 {
    u8 pad0[0x8];
    u16 unk8;
    u8 padA[0x2];
    s32 unkC;
};

struct Unk_func_0000EE04_temp_v1_2 {
    u8 pad0[0x4];
    void **unk4;
};

struct Unk_func_0000F27C_0 {
    u8 pad0[0x10];
    u8 * unk10;
};

struct Unk_func_0000F27C_1 {
    u8 pad0[0x8];
    s32 unk8;
    s32 unkC;
};

struct Unk_func_0000F2A8_0 {
    u8 pad0[0xC];
    u8 * unkC;
};

struct Unk_func_0000F2A8_1 {
    u8 pad0[0x8];
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00015654_0 {
    struct Unk_func_00015654_temp_v1_2 *unk0;
    void **unk4;
    u8 pad8[0x4];
    struct Unk_func_00015654_var_s0 *unkC;
};

struct Unk_func_00015654_temp_v1 {
    u8 pad0[0x4];
    void **unk4;
};

struct Unk_func_00015654_temp_v1_2 {
    u8 pad0[0x4];
    void **unk4;
};

struct Unk_func_00015654_var_s0 {
    struct Unk_func_00015654_temp_v1 *unk0;
    void **unk4;
    u8 pad8[0x4];
    s32 unkC;
};

struct Unk_func_0001AA20_0 {
    s32 unk0;
    struct Unk_Unk_func_0001AA20_0_4 *unk4;
    u8 pad8[0x14];
    u32 unk1C;
    struct Unk_Unk_func_0001AA20_0_20 *unk20;
};

struct Unk_func_0001C57C_0 {
    u8 pad0[0x1C];
    struct Unk_func_0001C57C_var_a2 *unk1C;
};

struct Unk_func_0001C57C_var_a2 {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad3E[0x26];
    u16 unk64;
    u8 pad66[0x26];
    u16 unk8C;
};

struct Unk_func_000232C0_0 {
    u8 pad0[0x4];
    struct Unk_func_000232C0_var_s0 *unk4;
};

struct Unk_func_000232C0_temp_v1 {
    u8 pad0[0x4];
    void **unk4;
};

struct Unk_func_000232C0_temp_v1_2 {
    u8 pad0[0x18];
    void **unk18;
};

struct Unk_func_000232C0_var_s0 {
    void *unk0;
    void **unk4;
    u8 pad8[0x4];
    s32 unkC;
    u8 pad10[0x4];
    void *unk14;
    void **unk18;
};

struct Unk_func_00023828_0 {
    u8 pad0[0x2A];
    u16 unk2A;
};

struct Unk_func_00023AB8_0 {
    u8 pad0[0x10];
    struct Unk_func_00023AB8_temp_v1 *unk10;
};

struct Unk_func_00023AB8_temp_v1 {
    u8 pad0[0x26];
    u16 unk26;
    u8 pad28[0x50];
    s32 unk78;
};

struct Unk_func_00027830_0 {
    u8 pad0[0xD4];
    s32 unkD4;
    u8 padD8[0x58];
    s32 unk130;
};

struct Unk_func_00028768_0 {
    u8 pad0[0x254];
    s32 unk254;
};

struct Unk_func_000289B0_0 {
    u8 pad0[0x254];
    s32 unk254;
};

struct Unk_func_0002A244_0 {
    u8 pad0[0x4BC];
    s32 unk4BC;
};

struct inpcb *func_00013478(struct inpcbtable *table, struct in_addr laddr, u32 lport_arg, s32 lookup_wildcard);

struct inpcb *func_00013478(struct inpcbtable *table, struct in_addr laddr, u32 lport_arg, s32 lookup_wildcard);

extern void (*const D_0002BB24)(struct sppp *sp); /* lcp.Close (split rodata label) */
extern void (*const D_0002BBCC)(struct sppp *sp); /* pap.scr (split rodata label) */
extern s32 D_0002BEC0;
extern struct ifqueue D_0002BF8C;
extern s32 D_0002C01C;
extern s32 D_0002C020;
extern struct SceTailqHead D_0002C024;
extern s32 D_0002C02C;
extern s32 D_0002C030;
extern s32 D_0002C1D4;
extern s32 D_0002C1D8;
extern s32 D_0002C1DC;
extern s32 D_0002C1E0;
extern s32 D_0002C1E4;
extern s32 D_0002C1E8; /* icmperrppslim */
extern s32 D_0002C208; /* ip_maxfragpackets */
extern s32 D_0002C228;
extern s32 D_0002C22C;
extern s32 D_0002C234;
extern s32 D_0002C270; /* icmpreturndatabytes */
extern s32 D_0002C30C;
extern s32 D_0002C310;
extern s32 D_0002C314;
extern s32 D_0002C318;
extern s32 D_0002C31C;
extern s32 D_0002C320;
extern s32 D_0002C358;
extern s32 D_0002C35C;
extern s32 D_0002C360;
extern s32 D_0002C364;
extern s32 D_0002C368;
extern s32 D_0002C39C;
extern s32 D_0002C4F0;
extern s32 D_0002C4F4;
extern s32 D_0002C504;
extern char D_0002C519[]; /* end of intoa static buf[sizeof(".xxx.xxx.xxx.xxx")] */
extern SceNetInetHook D_0002C51C;
extern s32 D_0002C520;
extern s32 D_0002C534;
extern s32 D_0002C538;
extern s32 D_0002C53C;
extern s32 D_0002C540;
extern s32 D_0002C544;
extern s32 D_0002C57C; /* ip_nfragpackets */
extern s32 D_0002C588;
extern s32 D_0002C58C;
extern s32 D_0002C590;
extern s32 D_0002C594;
extern s32 D_0002C5B4; /* icmpmaskrepl */
extern struct { struct SceNetInetKeyNode *lh_first; } D_0002C5B8;
extern s32 D_0002C5D8;
extern u8 D_0002C5DC[];
extern u8 D_0002CC50[]; /* pffasttimo_ch */
extern u8 D_0002CC74[]; /* pfslowtimo_ch */
extern s32 D_0002CCB4;
extern u8 D_0002CD38[];
extern char D_0002CDB0[16]; /* 1.5x inet_ntoa buf */
extern s32 D_0002CEB0;
extern s32 D_0002CEBC;
extern s32 D_0002CEC0;
extern s32 D_0002CF00;
extern s32 D_0002CF0C;
extern s32 D_0002CF10;
extern struct SceTailqHead D_0002CFF8[];
extern s32 D_0002D944; /* ipq_locked */
extern struct ipstat D_0002D960; /* ipstat */
extern struct { struct ipq *lh_first; } D_0002DA48; /* ipq */
extern u8 D_0002DA50[0x170]; /* icmpstat */
extern M2C_UNK D_0002DBC8;
extern s32 D_0002DC30;
extern struct inpcbtable D_0002DC78;
extern struct SceTailqHead D_0002DC98[13];
extern s32 D_0002DD04;
extern s32 D_0002DF50;
extern s32 D_0002E5EC;
extern s32 D_0002E5F0;
extern s32 D_0002E5F4; /* lowportmin */
extern s32 D_0002E5F8; /* lowportmax */
extern s32 D_0002E798;
extern s32 D_0002E79C;
extern s32 D_0002E7A4;
extern s32 D_0002E7B0; /* ip_defttl */
extern s32 D_0002E7BC; /* ip_mtudisc */
extern struct sockaddr_in D_0002E834 __attribute__((aligned(4)));
extern struct sockaddr_in D_0002E844 __attribute__((aligned(4)));
extern struct sockaddr_in D_0002E854 __attribute__((aligned(4)));
extern s32 D_0002E8D8;
extern s32 D_0002E8F8; /* tcp_mssdflt */
extern s32 D_0002E8FC; /* tcp_rttdflt */
extern s32 D_0002E900; /* tcp_do_rfc1323 */
extern s32 D_0002E904; /* tcp_do_sack */
extern s32 D_0002E908; /* tcp_do_win_scale */
extern s32 D_0002E90C; /* tcp_do_timestamps */
extern s32 D_0002E910; /* tcp_init_win */
extern s32 D_0002E918; /* tcp_keepidle */
extern s32 D_0002E924;
extern s32 D_0002E95C;
extern s8 D_0002EAB0[];
extern s32 D_0002EAB1;
extern s32 D_0002EB40;
extern s32 D_0002EB44;
extern s32 D_0002EB54;
extern s32 D_0002EB88;
extern s32 D_0002EB8C;
extern s32 D_0002EB90;
extern s32 D_0002EB94;
extern char D_0002EBB0[16]; /* inet_ntoa buf */
extern s32 D_0002EC1C;
extern char D_0002F288[18] __attribute__((aligned(4)));
extern s32 D_0002F500;
extern s32 D_0002F50C;
extern s32 D_0002F510;
extern struct route D_0002FF98; /* ipforward_rt */
extern s32 arp_locked; /* arp_locked */
extern const struct cp chap; /* chap */
extern const struct cp *cps[IDX_COUNT]; /* cps */
extern SceNetBytes4 dns_primary;
extern SceNetBytes4 dns_secondary;
extern struct domain *domains;
extern u8 ether_ipmulticast_max[6]; /* ether_ipmulticast_max */
extern u8 ether_ipmulticast_min[6]; /* ether_ipmulticast_min */
extern struct igmpstat igmp_stat; /* igmpstat */
extern s32 igmp_timers_are_running; /* igmp_timers_are_running */
extern TAILQ_HEAD(, in_ifaddr) in_ifaddrhead; /* in_ifaddr */
extern u32 in_maxmtu;
extern s32 inetctlerrmap[]; /* inetctlerrmap */
extern s32 ip_nhops; /* ip_nhops */
extern struct ip_srcrt_s ip_srcrt; /* ip_srcrt */
extern const struct cp ipcp; /* ipcp */
extern struct ifqueue ipintrq; /* ipintrq, exported by sceNetInet_lib_D7928A6D */
extern const struct cp lcp; /* lcp */
extern struct { struct llinfo_arp *lh_first; } llinfo_arp_head; /* llinfo_arp */
extern struct ifnet loif; /* loif */
extern const struct cp pap; /* pap */
extern s32 pffasttimo_now; /* pffasttimo_now */
extern s32 pfslowtimo_now; /* pfslowtimo_now (SCE tcp timers are absolute slowtimo ticks) */
extern u32 raw_recvspace; /* raw_recvspace */
extern u32 raw_sendspace; /* raw_sendspace */
extern struct { struct rawcb *lh_first; } rawcb; /* rawcb */
extern struct inpcbtable rawcbtable;
extern struct radix_node_head *rt_tables[32]; /* rt_tables */
extern s32 rttrash; /* rttrash */
extern struct soqhead so_list;
extern s32 somaxconn; /* somaxconn */
extern struct inpcbtable tcbtable;
extern s32 tcp_backoff[]; /* tcp_backoff */
extern s32 tcp_compat_42; /* tcp_compat_42 */
extern struct tcpcb *tcp_delacks; /* tcp_delacks */
extern u32 tcp_iss_seq; /* tcp_iss_seq */
extern struct tcpstat tcp_stat;
extern struct inpcbtable udbtable;
extern struct in_addr zeroin_addr; /* zeroin_addr */

void _sce_pspnet_callout_init(void *c);
void _sce_pspnet_callout_reset(void *c, s32 ticks, void (*func)(void *), void *arg);
void _sce_pspnet_callout_stop(void *c);
s32 _sce_pspnet_get_if_core_variables(s32 *if_indexp, struct ifnet ***ifindex2ifnetp, struct ifaddr ***ifnet_addrsp, struct ifnet **ifnetp);
M2C_UNK _sce_pspnet_get_thread_errno();
void *_sce_pspnet_hashinit(s32 elements, u32 *hashmask);
void _sce_pspnet_if_attach(struct ifnet *ifp);
void _sce_pspnet_if_down(struct ifnet *ifp);
s32 _sce_pspnet_if_nulloutput();
void _sce_pspnet_ifafree(struct ifaddr *ifa);
s32 _sce_pspnet_ifioctl(struct socket *so, u32 cmd, void *data, s32 p);
void _sce_pspnet_inet_sabort(struct socket *so);
void _sce_pspnet_link_rtrequest(s32 cmd, struct rtentry *rt, struct sockaddr *sa);
void _sce_pspnet_microtime(struct timeval *tv);
s32 _sce_pspnet_pppoe_term(void);
void _sce_pspnet_selwakeup(struct selinfo *sip);
s32 _sce_pspnet_spllock(void);
void _sce_pspnet_splunlock(s32 s);
M2C_UNK _sce_pspnet_start_of_inet_module_in_if_core(M2C_UNK *, void (*)(), void (*)(s32), void (*)(s32), M2C_UNK *, M2C_UNK *, void (*)(s32), void (*)(void *), void (*)(s32), void (*)(s32), s32 (*)(), M2C_UNK *, M2C_UNK *);
M2C_UNK _sce_pspnet_start_of_inet_module_in_if_ethersubr_core(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *);
M2C_UNK _sce_pspnet_start_of_inet_module_in_sched(M2C_UNK *, void (*)(void *));
M2C_UNK _sce_pspnet_stop_of_inet_module_in_if_core();
M2C_UNK _sce_pspnet_stop_of_inet_module_in_if_ethersubr_core();
M2C_UNK _sce_pspnet_stop_of_inet_module_in_ifhandle_ether();
M2C_UNK _sce_pspnet_stop_of_inet_module_in_netintr();
M2C_UNK _sce_pspnet_stop_of_inet_module_in_sched();
M2C_UNK _sce_pspnet_stop_of_pppoe_module_in_netintr();
struct SceNetInetWaiter *_sce_pspnet_thread_enter(void);
s32 _sce_pspnet_thread_leave(struct SceNetInetWaiter *w, s32 error);
s32 _sce_pspnet_tsleep(void *chan, s32 timo);
void _sce_pspnet_wakeup(void *chan);
s32 ether_multiaddr(struct sockaddr *sa, u8 *addrlo, u8 *addrhi);
s32 falloc(void);
void func_00001320(void);
s32 func_00001334(s32 req, struct sockaddr_in *dst, struct sockaddr_in *gateway, struct sockaddr_in *netmask, s32 flags);
void func_00001584(void);
void func_00001BA0(void);
void func_00001BC8(void);
void func_00001BE4(struct SceNetInetWaiter *w);
void func_00001C28(struct socket *so);
void func_00001D50(void);
s32 func_00001D78(void);
void func_00001DD8(struct socket *so);
void func_00001DF4(void);
void func_00001FA4(void);
s32 func_00003A00(struct socket *so, s32 level, s32 optname, struct mbuf *m0);
void func_000040FC(void);
s32 func_00004124(struct socket *so, struct mbuf *nam);
s32 func_0000431C(struct socket *so, struct mbuf *nam);
void func_000044AC(struct socket *so);
void func_000046A8(struct socket *so);
void func_000047DC(struct socket *head, struct socket *so, s32 q);
void func_00004A3C(struct sockbuf *sb);
void func_00004A68(struct sockbuf *sb, struct mbuf *m0);
void func_00004E28(struct sockbuf *sb, struct mbuf *m, struct mbuf *n);
void func_00005778(struct socket *so);
void func_0000588C(struct socket *so);
void func_000058CC(struct socket *so);
void func_00005964(struct socket *so);
void func_00005A78(struct socket *so);
void func_00005AB8(struct socket *so);
s32 func_00005B8C(void);
s32 func_00006568(struct SceNetInetWaiter *w, s32 s, struct msghdr *mp, s32 flags, s32 *retsize);
s32 func_00006AB0(struct SceNetInetWaiter *w, s32 s, struct msghdr *mp, u32 *namelenp, s32 *retsize);
void func_000076C4(s32 arg0, s32 arg1, s32 arg2);
void func_000076E0(s32 arg0, s32 arg1, s32 arg2);
void func_00007A88(s32 arg0, s32 arg1, s32 arg2);
void func_00007AA4(s32 arg0, s32 arg1, s32 arg2);
s32 func_00008704(s32, s32, s32, s32);
void func_000093F0(s32 arg0);
void func_0000940C(s32 arg0);
void func_00009548(s32 arg0);
void func_00009564(void *arg0);
void func_00009570(s32 arg0);
void func_0000958C(s32 arg0);
void func_000095A4(s32 arg0);
void func_000095AC(struct ifnet *ifp, s32 family);
void func_000095C0(s32 arg0);
s32 func_000095DC(void);
void func_0000963C(void);
void func_00009650(struct ifnet *ifp);
void func_000096C8(s32 arg0);
s32 func_000096D0(void);
void func_000096E4(struct Unk_func_000096E4_0 *arg0);
void func_00009724(s32 arg0);
void func_00009740(s32 arg0);
s32 func_0000975C(void);
s32 func_00009764(void *arg0, s32 *arg1);
s32 func_00009788(struct socket *so, s32 cmd, void *data, void *ifp);
void func_000097BC(void);
void func_00009850(void);
void func_0000993C(void);
s32 func_00009968(s32 arg0);
s32 func_00009984(void);
void func_0000999C(void);
s32 func_000099D4(void);
void func_00009A14(void *arg0, void *arg1, u16 arg2, void *arg3);
s32 func_00009A58();
s32 func_00009AF0(s32 arg0);
s32 func_00009B0C(void);
void func_00009B24(void);
void func_00009B5C(void);
s32 func_00009B84();
struct radix_node *func_0000A144(void *v_arg, struct radix_node_head *head);
struct radix_node *func_0000A61C(void *n_arg, s32 search, s32 skip);
struct rtentry *func_0000BA10(struct sockaddr *dst, s32 report);
s32 func_0000BEE0(s32 req, void *dst, void *gateway, void *netmask, s32 flags, struct rtentry **ret_nrt);
s32 func_0000C998(s32, s32, s32);
void func_0000CE98(void *arg);
s32 func_0000D128(u32 cmd, void *data);
s32 func_0000D1F4(void);
void func_0000D25C(s32 *arg0, s32 arg1);
s32 func_0000D264(void *arg0, s32 arg1);
void func_0000D330(s32 *arg0, s32 arg1);
s32 func_0000D338(struct Unk_func_0000D338_0 *arg0, s32 arg1);
s32 func_0000D378(s32);
void func_0000DD34(s32 arg0, void *arg1, void *arg2);
void func_0000DDCC(s32 arg0, struct Unk_func_0000DDCC_1 *arg1, struct Unk_func_0000DDCC_2 *arg2);
void func_0000E318(s32 type, struct rt_addrinfo *rtinfo, s32 flags, s32 error);
s32 func_0000E3F0(s32);
s32 func_0000E448(s32, s32);
s32 func_0000E4E4(s32, s32);
void func_0000ED48(void *arg0);
void func_0000ED94(void *arg0);
void func_0000EDB8(struct Unk_func_0000EDB8_0 *arg0);
void func_0000EE04(struct Unk_func_0000EE04_0 *arg0);
void func_0000F1F8(void);
s32 func_0000F204(void);
void func_0000F268(void);
s32 func_0000F274(void);
void func_0000F27C(struct Unk_func_0000F27C_0 *arg0, struct Unk_func_0000F27C_1 *arg1);
void func_0000F2A8(struct Unk_func_0000F2A8_0 *arg0, struct Unk_func_0000F2A8_1 *arg1);
s32 func_0000F2D4();
void func_0000F730(s32 req, struct rtentry *rt);
void func_0000FA70(struct ifnet *ifp, struct in_addr *sip, struct in_addr *tip, u8 *enaddr);
void func_00010528(struct mbuf *m);
s32 func_000106E0(void);
s32 func_00010700(void);
s32 func_00019A98(void);
void func_00019C00(struct rtentry *rt);
s32 func_0001A410(void);
void func_0001A49C(void);
void func_0001A548(struct rtentry *rt);
void func_0001A8AC(void);
void func_0001AA20(struct Unk_func_0001AA20_0 *arg0);
void func_0001C208(void);
void func_0001C57C(struct Unk_func_0001C57C_0 *arg0, s16 arg1);
s32 func_000232C0(struct Unk_func_000232C0_0 *arg0);
void func_0002373C(struct inpcb *inp, s32 errno);
s32 func_00023828(struct Unk_func_00023828_0 *arg0);
void func_00023AB8(struct Unk_func_00023AB8_0 *arg0);
void func_000244B0(void);
void func_0002544C(void *arg0);
void func_00025638(struct sppp *sp, u16 proto, u8 type, u8 ident, u16 len, void *data);
void func_00025E94(void);
void func_00026FF4(const struct cp *cp, struct sppp *sp, u32 type, u32 id, ...);
s32 func_00027830(struct Unk_func_00027830_0 *arg0);
void func_00027C20(void);
void func_00028758(void *arg0);
void func_00028768(struct Unk_func_00028768_0 *arg0);
void func_00028778(void *arg0);
void func_000287F4(void *arg0);
void func_0002884C(void);
void func_000288E4(void);
void func_000289B0(struct Unk_func_000289B0_0 *arg0);
void func_000289C0(void *arg0);
void func_00028A18(void);
void func_00028B30(void);
void func_00028B7C(void);
s32 func_00028D50(void);
void func_00029280(void *arg);
s32 func_00029330(void *arg0);
void func_0002A244(struct Unk_func_0002A244_0 *arg0);
void func_0002A4DC(void);
void func_0002A51C(void);
void func_0002A538(void *arg0);
void func_0002A548(void *arg0);
void func_0002A62C(void);
void func_0002A67C(void);
s32 func_0002AA4C(s32, s32, s32);
void func_0002AF14(void);
void func_0002BDB4(void *arg0);
s32 func_0002C4CC(s32, s32, s32);
s32 *func_0002C820(void);
void *func_0002C864(void *dst, const void *src, s32 n);
u8 *func_0002C918(u8 *dst, const u8 *src, s32 n);
void *func_0002C94C(void *p, s32 c, s32 n);
void func_0002C9B8(const void *src, void *dst, s32 len);
u8 *func_0002CC40(u8 *arg0, u8 *arg1);
s32 func_0002CCF8(void *putc, void *arg, const char *fmt, __builtin_va_list ap);
void func_0002D420();
struct socket *getsock(s32 s);
void icmp_send(struct mbuf *m, struct mbuf *opts);
s32 icmp_sysctl(s32 *name, u32 namelen, void *oldp, u32 *oldlenp, void *newp, u32 newlen);
s32 if_rtdel(struct rtentry *rt, void *arg);
struct ifaddr *ifa_ifwithaddr(struct sockaddr *addr);
struct ifaddr *ifa_ifwithladdr(struct sockaddr *addr);
void igmp_leavegroup(void *arg0);
void igmp_sendpkt(struct in_multi *inm, s32 type);
s32 in_cksum(struct mbuf *m, s32 len);
void in_delmulti(struct in_multi *inm);
void in_losing(struct inpcb *inp);
s32 in_pcballoc(struct socket *so, void *v);
s32 in_pcbbind(void *v, struct mbuf *nam);
s32 in_pcbconnect(void *v, struct mbuf *nam);
void in_pcbdetach(void *v);
void in_pcbdisconnect(void *v);
void in_pcbinit(struct inpcbtable *table, s32 bindhashsize, s32 connecthashsize);
struct inpcb *in_pcblookup_bind(struct inpcbtable *table, struct in_addr laddr, u32 lport_arg);
struct inpcb *in_pcblookup_connect(struct inpcbtable *table, struct in_addr faddr, u32 fport_arg, struct in_addr laddr, u32 lport_arg);
struct inpcb *in_pcblookup_port(struct inpcbtable *table, struct in_addr laddr, u32 lport_arg, s32 lookup_wildcard);
s32 in_pcbnotify(struct inpcbtable *table, struct in_addr faddr, u32 fport_arg, struct in_addr laddr, u32 lport_arg, s32 errno, void (*notify)(struct inpcb *, s32));
void in_pcbnotifyall(struct inpcbtable *table, struct in_addr faddr, s32 errno, void (*notify)(struct inpcb *, s32));
void in_pcbstate(struct inpcb *inp, s32 state);
void in_rtchange(struct inpcb *inp, s32 errno);
struct sockaddr_in *in_selectsrc(struct sockaddr_in *sin, struct route *ro, s32 soopts, struct ip_moptions *mopts, s32 *errorp);
s32 ip_ctloutput(s32 op, struct socket *so, s32 level, s32 optname, struct mbuf **m);
void ip_drain(void);
void ip_freef();
void ip_input(struct mbuf *m);
s32 ip_optcopy(struct ip *ip, struct ip *jp);
s32 ip_optlen(void *inp);
s32 ip_output(struct mbuf *m0, struct mbuf *opt, struct route *ro, s32 flags, struct ip_moptions *imo);
struct in_ifaddr *ip_rtaddr(struct in_addr dst);
void ip_savecontrol(struct inpcb *inp, struct mbuf **mp, struct ip *ip, struct mbuf *m);
void ip_slowtimo(void);
void ip_stripoptions(struct mbuf *m, struct mbuf *mopt);
void link_rtrequest(s32 cmd, struct rtentry *rt, struct sockaddr *sa);
void lortrequest(s32 cmd, struct rtentry *rt);
s32 module_start(void);
s32 module_stop(void);
void pfctlinput(s32 cmd, struct sockaddr *sa);
void pffasttimo(void *arg);
void pfslowtimo(void *arg);
s32 raw_attach(struct socket *so, s32 proto);
void rip_disconnect(struct inpcb *inp);
struct radix_node *rn_lookup(void *v_arg, void *m_arg, struct radix_node_head *head);
void rt_maskedcopy(struct sockaddr *src, struct sockaddr *dst, struct sockaddr *netmask);
void rt_timer_remove_all(struct rtentry *rt);
void rtfree(struct rtentry *rt);
void save_rte(u8 *option, struct in_addr dst);
s32 sb_lock(struct sockbuf *sb);
s32 sbappendaddr(struct sockbuf *sb, struct sockaddr *asa, struct mbuf *m0, struct mbuf *control);
struct mbuf *sbcreatecontrol(void *p, s32 size, s32 type, s32 level);
void sbdrop(struct sockbuf *sb, s32 len);
void sbdroprecord(struct sockbuf *sb);
void sbflush(struct sockbuf *sb);
s32 sbreserve(struct sockbuf *sb, u32 cc);
s32 sceKernelSignalSema(u32, s32);
M2C_UNK sceNetBcopy(u8 *, s32, u8);
s32 sceNetConfigAddArp(s32, s32);
s32 sceNetConfigDelArp(s32, s32);
s32 sceNetConfigGetArpInfo(s32, s32);
s32 sceNetConfigGetRouteInfo(s32 *len, void *buf);
void sceNetFreeInternal(void *p);
s32 sceNetIfhandle_lib_5FB31C72(s32 *max_linkhdr, s32 *a1, s32 *a2, s32 *a3);
s32 sceNetInetInetAddr(s32 arg0);
void sceNetInetInetAton(s32 arg0, s32 arg1);
const char *sceNetInetInetNtop(s32 af, const void *src, char *dst, s32 size);
s32 sceNetInetListen(s32 s, s32 backlog);
s32 sceNetInetShutdown(s32 s, s32 how);
struct ifqueue *sceNetInet_lib_D7928A6D(void);
void sceNetMAdj(struct mbuf *mp, s32 req_len);
struct mbuf *sceNetMCopym(struct mbuf *m, s32 off, s32 len, s32 wait);
struct mbuf *sceNetMFree(struct mbuf *m);
void sceNetMFreem(struct mbuf *m);
struct mbuf *sceNetMGet(s32 how, s32 type);
struct mbuf *sceNetMGetclr(s32 how, s32 type);
void *sceNetMallocInternal(u32 size);
M2C_UNK sceNetMemset(M2C_UNK *, M2C_UNK, M2C_UNK);
u32 sceNetRand(void);
s32 sce_alignbytes(void);
s32 soabort(struct socket *so);
s32 soaccept(struct socket *so, struct mbuf *nam);
s32 sockargs(struct mbuf **mp, const void *buf, u32 buflen, s32 type);
s32 soclose(struct socket *so);
s32 soconnect(struct socket *so, struct mbuf *nam);
s32 soconnect2(struct socket *so1, struct socket *so2);
s32 sodisconnect(struct socket *so);
void sofree(struct socket *so);
void soisconnected(struct socket *so);
s32 solisten(struct socket *so, s32 backlog);
struct socket *sonewconn1(struct socket *head, s32 connstatus);
s32 soo_poll(struct socket *so, s32 events, void *p);
s32 soqremque(struct socket *so, s32 q);
s32 soreserve(struct socket *so, u32 sndcc, u32 rcvcc);
void sorflush(struct socket *so);
s32 soshutdown(struct socket *so, s32 how);
void sowakeup(struct socket *so, struct sockbuf *sb);
void sppp_cp_change_state(const struct cp *cp, struct sppp *sp, s32 newstate);
void sppp_lcp_check_and_close(struct sppp *sp);
void sppp_lcp_tld(struct sppp *sp);
void sppp_lcp_up(struct sppp *sp);
void sppp_pap_TO(void *arg);
void sppp_to_event(const struct cp *cp, struct sppp *sp);
void syn_cache_cleanup(struct tcpcb *tp);
s32 sysctl_int(void *oldp, u32 *oldlenp, void *newp, u32 newlen, s32 *valp);
s32 sysctl_rdstruct(void *oldp, u32 *oldlenp, void *newp, const void *sp, u32 len);
struct tcpcb *tcp_close(struct tcpcb *tp);
struct tcpcb *tcp_drop(struct tcpcb *tp, s32 errno);
void tcp_established(struct tcpcb *tp);
s32 tcp_freeq(struct tcpcb *tp);
void tcp_mss_from_peer(struct tcpcb *tp, s32 offer);
void tcp_mtudisc(struct inpcb *inp, s32 errno);
void tcp_mtudisc_callback(struct in_addr addr);
struct tcpcb *tcp_newtcpcb(s32 family, void *aux);
void tcp_notify(struct inpcb *inp, s32 error);
s32 tcp_optlen(void *tp);
s32 tcp_output(struct tcpcb *tp);
void tcp_rmx_rtt(struct tcpcb *tp);
void *udp_ctlinput(s32 cmd, struct sockaddr *sa, void *v);
void udp_notify(void *arg0, s16 arg1);
s32 udp_sysctl(s32 *name, u32 namelen, void *oldp, u32 *oldlenp, void *newp, u32 newlen);

#endif
