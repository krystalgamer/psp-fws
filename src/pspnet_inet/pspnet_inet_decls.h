#ifndef PSPNET_INET_DECLS_H
#define PSPNET_INET_DECLS_H

#include "common.h"
#include "m2c_macros.h"

/* NetBSD-derived (4.4BSD-Lite2 + NetBSD 1.3-1.5 socket layer) types, offsets checked in 1.00 */
struct mbuf;
struct socket;

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
    s16 unk22;
    s32 sb_timeo;           /* 0x24 timeout for read/write */
};

#define SB_LOCK     0x01
#define SB_WANT     0x02
#define SB_WAIT     0x04
#define SB_SEL      0x08
#define SB_ASYNC    0x10
#define SB_UPCALL   0x20
#define SB_NOINTR   0x40
#define SB_NOTIFY   (SB_WAIT | SB_SEL | SB_ASYNC | SB_UPCALL)

/* struct protosw (4.4BSD layout, pr_usrreq without the proc argument) */
struct protosw {
    s16 pr_type;                    /* 0x00 */
    struct domain *pr_domain;       /* 0x04 */
    s16 pr_protocol;                /* 0x08 */
    s16 pr_flags;                   /* 0x0A */
    void (*pr_input)();             /* 0x0C */
    s32 (*pr_output)();             /* 0x10 */
    void *(*pr_ctlinput)();         /* 0x14 */
    s32 (*pr_ctloutput)();          /* 0x18 */
    s32 (*pr_usrreq)(struct socket *so, s32 req, struct mbuf *m, struct mbuf *nam, struct mbuf *control); /* 0x1C */
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
    s16 so_linger;              /* 0x04 */
    s16 unk6;
    s16 so_state;               /* 0x08 SS_* */
    s16 unkA;
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
    s16 unk3E;
    u32 so_oobmark;             /* 0x40 */
    struct sockbuf so_rcv;      /* 0x44 */
    struct sockbuf so_snd;      /* 0x6C */
    u8 unk94[0xA0 - 0x94];
    void *unkA0;                /* 0xA0 SCE callback (func_00002844) */
    void *unkA4;                /* 0xA4 SCE callback (func_00002E98) */
    s32 so_fd;                  /* 0xA8 SCE descriptor, -1 until allocated */
    TAILQ_ENTRY(socket) so_list; /* 0xAC all sockets (D_0002CC9C) */
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
#define SS_PRIV             0x080
#define SS_NBIO             0x100
#define SS_ASYNC            0x200
#define SS_ISCONFIRMING     0x400

/* struct mbuf (MSIZE 0x100); allocated by pspnet ifhandle (sceNetMGet...) */
struct mbuf {
    struct mbuf *m_next;        /* 0x00 */
    struct mbuf *m_nextpkt;     /* 0x04 */
    u8 *m_data;                 /* 0x08 */
    s32 m_len;                  /* 0x0C */
    s16 m_type;                 /* 0x10 */
    u16 m_flags;                /* 0x12 M_* */
    void *m_pkthdr_rcvif;       /* 0x14 */
    s32 m_pkthdr_len;           /* 0x18 */
    struct mbuf *m_pkthdr_aux;  /* 0x1C */
    u8 unk20[0x3C - 0x20];
    u32 m_ext_size;             /* 0x3C */
    u8 unk40[4];
    struct mbuf *m_ext_nextref; /* 0x44 */
    struct mbuf *m_ext_prevref; /* 0x48 */
};

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
    void (*dom_dispose)();              /* 0x10 */
    struct protosw *dom_protosw;        /* 0x14 */
    struct protosw *dom_protoswNPROTOSW; /* 0x18 */
    struct domain *dom_next;            /* 0x1C */
};

struct sockaddr {
    u8 sa_len;
    u8 sa_family;
    char sa_data[14];
};

/* 2-byte aligned in this stack: copies and bzero use halfword accesses */
struct in_addr {
    u32 s_addr;
} __attribute__((packed, aligned(2)));

struct sockaddr_in {
    u8 sin_len;                 /* 0x0 */
    u8 sin_family;              /* 0x1 */
    u16 sin_port;               /* 0x2 */
    struct in_addr sin_addr;    /* 0x4 */
    s8 sin_zero[8];             /* 0x8 */
};

#define AF_INET 2

/* struct rawcb (4.4BSD) */
struct rawcb {
    void *rcb_next;             /* 0x00 */
    void *rcb_prev;             /* 0x04 */
    struct socket *rcb_socket;  /* 0x08 */
    struct sockaddr *rcb_faddr; /* 0x0C */
    struct sockaddr *rcb_laddr; /* 0x10 */
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
    u8 unk50[4];
    struct socket *sockets;     /* 0x54 list linked by so_selnext */
};



/* struct rtentry (4.4BSD route.h, partial) */
struct rtentry {
    struct radix_node rt_nodes[2];  /* 0x00 */
    struct sockaddr *rt_gateway;    /* 0x30 */
    s32 rt_flags;                   /* 0x34 RTF_* */
    s32 rt_refcnt;                  /* 0x38 */
    u32 rt_use;                     /* 0x3C */
    struct ifnet *rt_ifp;           /* 0x40 */
};
#define RTF_UP 0x1

struct route {
    struct rtentry *ro_rt;
    struct sockaddr ro_dst;
};

/* NetBSD if_spppsubr.c control protocol descriptor (0x3C): lcp D_0002BB10, ipcp D_0002BB54, pap D_0002BB94, chap D_0002BBD8 */
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

/* struct sppp (NetBSD if_spppsubr, partial; callouts are 0x24 bytes) */
struct sppp {
    u8 unk0[0x170];
    s32 pp_phase;                   /* 0x170 */
    s32 unk174;
    u8 unk178[0x19C - 0x178];
    s32 unk19C;                     /* 0x19C set from lcp.max_configure by pap.Open */
    u8 unk1A0[0x1B4 - 0x1A0];
    u8 ch[IDX_COUNT][0x24];         /* 0x1B4 per-protocol timeout callouts */
    u8 unk244[0x254 - 0x244];
    s32 lcp_protos;                 /* 0x254 lcp.protos */
    u8 unk258[0x27C - 0x258];
    u16 myauth_proto;               /* 0x27C myauth.proto */
    u8 unk27E[0x394 - 0x27E];
    s32 lcp_timeout;                /* 0x394 */
    s32 lcp_max_configure;          /* 0x398 */
    u8 unk39C[0x4A8 - 0x39C];
    void (*pp_tls)(struct sppp *sp);    /* 0x4A8 */
    void (*pp_tlf)(struct sppp *sp);    /* 0x4AC */
};

/* struct ifqueue (4.4BSD if.h) */
struct ifqueue {
    struct mbuf *ifq_head;      /* 0x00 */
    struct mbuf *ifq_tail;      /* 0x04 */
    s32 ifq_len;                /* 0x08 */
    s32 ifq_maxlen;             /* 0x0C */
    s32 ifq_drops;              /* 0x10 */
};
#define IFQ_MAXLEN 50

/* struct ip_moptions (4.4BSD ip_var.h) */
struct ip_moptions {
    struct ifnet *imo_multicast_ifp;    /* 0x0 */
    u8 imo_multicast_ttl;               /* 0x4 */
    u8 imo_multicast_loop;              /* 0x5 */
    u16 imo_num_memberships;            /* 0x6 */
    struct in_multi *imo_membership[1]; /* 0x8 */
};

/* struct inpcb (partial) */
struct inpcb {
    u8 unk0[0x18];
    u16 inp_fport;              /* 0x18 */
    u16 inp_lport;              /* 0x1A */
    u8 unk1C[0x20 - 0x1C];
    struct route inp_route;     /* 0x20 */
    u8 unk34[0x44 - 0x34];
    struct in_addr inp_laddr;   /* 0x44 */
    struct in_addr inp_faddr;   /* 0x48 */
};

struct SceTailqHead {
    void *tqh_first;
    void **tqh_last;
};

typedef struct {
    s8 b[4];
} SceNetBytes4;

typedef void (*SceNetInetHook)(void *a, u16 b, void *c);

struct Unk_Unk_func_0001AA20_0_20 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_Unk_func_0001AA20_0_4 {
    u8 pad0[0x30];
    u16 unk30;
};

struct Unk_func_000090FC_0 {
    u8 pad0[0xC];
    s32 unkC;
    s32 unk10;
    u8 pad14[0x1C];
    s32 unk30;
    s32 unk34;
    u8 pad38[0x8];
    s32 unk40;
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

struct Unk_func_000138B4_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_00013ED4_0 {
    void *unk0;
    void *unk4;
    s32 unk8;
    s32 unkC;
    u8 pad10[0x8];
    s16 unk18;
    s16 unk1A;
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

struct Unk_func_00019C00_0 {
    u8 pad0[0xC];
    s32 unkC;
    s32 unk10;
    u8 pad14[0x1C];
    s32 unk30;
    s32 unk34;
    u8 pad38[0x18];
    s32 unk50;
    s32 unk54;
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

extern const struct cp D_0002BB10; /* lcp */
extern void (*const D_0002BB24)(struct sppp *sp); /* lcp.Close (split rodata label) */
extern const struct cp D_0002BB54; /* ipcp */
extern M2C_UNK D_0002BB94;
extern void (*const D_0002BBCC)(struct sppp *sp); /* pap.scr (split rodata label) */
extern M2C_UNK D_0002BBD8;
extern s32 D_0002BEC0;
extern struct ifqueue D_0002BF8C; /* ipintrq */
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
extern s32 D_0002C1E8;
extern s32 D_0002C228;
extern s32 D_0002C22C;
extern s32 D_0002C234;
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
extern const struct cp *D_0002C4E0[IDX_COUNT]; /* cps */
extern s32 D_0002C4F0;
extern s32 D_0002C4F4;
extern struct domain *D_0002C500;
extern s32 D_0002C504;
extern SceNetInetHook D_0002C51C;
extern s32 D_0002C520;
extern s32 D_0002C534;
extern s32 D_0002C538;
extern s32 D_0002C53C;
extern s32 D_0002C540;
extern s32 D_0002C544;
extern s32 D_0002C57C;
extern s32 D_0002C588;
extern s32 D_0002C58C;
extern s32 D_0002C590;
extern s32 D_0002C594;
extern s32 *D_0002C5BC;
extern s32 D_0002C5D8;
extern u8 D_0002C5DC[];
extern struct soqhead D_0002CC9C;
extern s32 D_0002CCB4;
extern u8 D_0002CD38[];
extern s32 D_0002CD80;
extern s32 D_0002CEB0;
extern s32 D_0002CEB4;
extern s32 D_0002CEB8;
extern s32 D_0002CEBC;
extern s32 D_0002CEC0;
extern s32 D_0002CEEC;
extern s32 D_0002CF00;
extern s32 D_0002CF0C;
extern s32 D_0002CF10;
extern struct SceTailqHead D_0002CFF8[];
extern s32 D_0002D930;
extern s32 D_0002DBC0;
extern M2C_UNK D_0002DBC8;
extern struct Unk_func_00013ED4_0 D_0002DC10;
extern s32 D_0002DC30;
extern M2C_UNK D_0002DC78;
extern struct SceTailqHead D_0002DC98[13];
extern s32 D_0002DD04;
extern u8 D_0002DD10[];
extern s32 D_0002DF50;
extern s32 D_0002E480;
extern s32 D_0002E5EC;
extern s32 D_0002E5F0;
extern s32 D_0002E798;
extern s32 D_0002E79C;
extern s32 D_0002E7A4;
extern s32 D_0002E8D8;
extern s32 D_0002E918;
extern s32 D_0002E924;
extern s32 D_0002E95C;
extern s8 D_0002EAB0[];
extern s32 D_0002EAB1;
extern s32 D_0002EB40;
extern s32 D_0002EB44;
extern SceNetBytes4 D_0002EB48;
extern SceNetBytes4 D_0002EB4C;
extern s32 D_0002EB54;
extern s32 D_0002EB88;
extern s32 D_0002EB8C;
extern s32 D_0002EB90;
extern s32 D_0002EB94;
extern char D_0002F288[18] __attribute__((aligned(4)));
extern s32 D_0002F500;
extern s32 D_0002F50C;
extern s32 D_0002F510;
extern SceNetBytes4 D_0002F544;
extern u8 D_00030218[];
extern struct Unk_func_00013ED4_0 D_000302C8;
extern u8 *D_000305A4;

void _sce_pspnet_callout_init(void *c);
void _sce_pspnet_callout_reset(void *c, s32 ticks, void (*func)(void *), void *arg);
void _sce_pspnet_callout_stop(void *c);
M2C_UNK _sce_pspnet_get_thread_errno();
s32 _sce_pspnet_hashinit(s32, void *);
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
s32 _sce_pspnet_thread_enter(void);
s32 _sce_pspnet_thread_leave(s32 t, s32 error);
s32 _sce_pspnet_tsleep(void *chan, s32 timo);
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
s32 func_00002028(s32, s32);
s32 func_000023A8(s32);
s32 func_0000243C(struct socket *so);
void func_000040FC(void);
s32 func_00004124(struct socket *so, struct mbuf *nam);
s32 func_0000431C(struct socket *so, struct mbuf *nam);
void func_000044AC(struct socket *so);
void func_000046A8(struct socket *so);
void func_000047DC(struct socket *head, struct socket *so, s32 q);
void func_000048B8(struct socket *so, struct sockbuf *sb);
void func_00004A3C(struct sockbuf *sb);
void func_00005008(struct sockbuf *sb);
void func_00005050(struct sockbuf *sb, s32 len);
struct socket *func_00005700(s32 s);
void func_00005778(struct socket *so);
void func_0000588C(struct socket *so);
void func_000058CC(struct socket *so);
void func_00005964(struct socket *so);
void func_00005A78(struct socket *so);
void func_00005AB8(struct socket *so);
s32 func_00005B8C(void);
s32 func_00005D70(void);
void func_000076C4(s32 arg0, s32 arg1, s32 arg2);
void func_000076E0(s32 arg0, s32 arg1, s32 arg2);
void func_00007A88(s32 arg0, s32 arg1, s32 arg2);
void func_00007AA4(s32 arg0, s32 arg1, s32 arg2);
s32 func_00008704(s32, s32, s32, s32);
s32 func_000090FC(struct Unk_func_000090FC_0 *arg0, s32 arg1);
void func_000093F0(s32 arg0);
void func_0000940C(s32 arg0);
void func_00009548(s32 arg0);
void func_00009564(void *arg0);
void func_00009570(s32 arg0);
void func_0000958C(s32 arg0);
void func_000095A4(s32 arg0);
s32 func_000095AC();
void func_000095C0(s32 arg0);
s32 func_000095DC(void);
void func_0000963C(void);
s32 func_00009650();
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
s32 func_0000986C();
void func_0000993C(void);
s32 func_00009944();
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
struct rtentry *func_0000BA10(struct sockaddr *dst, s32 report);
s32 func_0000BEE0(s32, s32, s32, s32, s32, s32);
s32 func_0000C998(s32, s32, s32);
void func_0000CE98(void *arg);
s32 func_0000D128(void);
s32 func_0000D15C(s32);
s32 func_0000D1F4(void);
void func_0000D25C(s32 *arg0, s32 arg1);
s32 func_0000D264(void *arg0, s32 arg1);
void func_0000D330(s32 *arg0, s32 arg1);
s32 func_0000D338(struct Unk_func_0000D338_0 *arg0, s32 arg1);
s32 func_0000D378(s32);
void func_0000DD34(s32 arg0, void *arg1, void *arg2);
void func_0000DDCC(s32 arg0, struct Unk_func_0000DDCC_1 *arg1, struct Unk_func_0000DDCC_2 *arg2);
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
s32 func_000106E0(void);
s32 func_00010700(void);
void func_00012684(struct in_multi *inm);
void func_000138B4(struct Unk_func_000138B4_0 *arg0);
void func_00013ED4(struct Unk_func_00013ED4_0 *arg0, s32 arg1, s32 arg2);
void func_00014614(void *a, SceNetBytes4 addr, s32 c, void *d);
void func_00015654(struct Unk_func_00015654_0 *arg0);
s32 func_00019A98(void);
void func_00019C00(struct Unk_func_00019C00_0 *arg0);
s32 func_0001A410(void);
void func_0001A548(void *arg0);
s32 func_0001A714(s32, s32);
void func_0001A8AC(void);
void func_0001AA20(struct Unk_func_0001AA20_0 *arg0);
void func_0001B50C(void *arg0);
void func_0001C208(void);
void func_0001C57C(struct Unk_func_0001C57C_0 *arg0, s16 arg1);
void func_0001D1E4(void *arg0, s16 arg1);
void func_000215C4(void *p);
s32 func_000232C0(struct Unk_func_000232C0_0 *arg0);
s32 func_00023828(struct Unk_func_00023828_0 *arg0);
void func_00023AB8(struct Unk_func_00023AB8_0 *arg0);
void func_00023B08();
void func_000244B0(void);
s32 func_00024B7C(void *arg0);
s32 func_000251A4(void *arg0);
void func_0002544C(void *arg0);
void func_00025E94(void);
s32 func_00025F18(s32, s32, s32);
s32 func_00027830(struct Unk_func_00027830_0 *arg0);
void func_00027C20(void);
void func_00028758(void *arg0);
void func_00028768(struct Unk_func_00028768_0 *arg0);
void func_00028778(void *arg0);
void func_000287F4(void *arg0);
void func_0002884C(void);
void func_00028854(void *arg);
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
u8 *func_0002C918(u8 *arg0, u8 *arg1, s32 arg2);
void *func_0002C94C(void *p, s32 c, s32 n);
void func_0002C9B8(const void *src, void *dst, s32 len);
u8 *func_0002CC40(u8 *arg0, u8 *arg1);
s32 func_0002CCF8(void *putc, void *arg, const char *fmt, __builtin_va_list ap);
void func_0002D420();
s32 module_start(void);
s32 module_stop(void);
s32 sceKernelSignalSema(u32, s32);
M2C_UNK sceNetBcopy(u8 *, s32, u8);
s32 sceNetConfigAddArp(s32, s32);
s32 sceNetConfigDelArp(s32, s32);
s32 sceNetConfigGetArpInfo(s32, s32);
M2C_UNK sceNetFreeInternal(void *);
s32 sceNetInetInetAddr(s32 arg0);
void sceNetInetInetAton(s32 arg0, s32 arg1);
const char *sceNetInetInetNtop(s32 af, const void *src, char *dst, s32 size);
s32 *sceNetInet_lib_D7928A6D(void);
M2C_UNK sceNetMFreem(s32);
M2C_UNK sceNetMemset(M2C_UNK *, M2C_UNK, M2C_UNK);
u32 sceNetRand();

#endif
