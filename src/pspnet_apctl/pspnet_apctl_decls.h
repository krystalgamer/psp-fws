#ifndef PSPNET_APCTL_DECLS_H
#define PSPNET_APCTL_DECLS_H

#include "common.h"
#include "m2c_macros.h"

/* devkit 0.6.0 DWARF (tools/dwarf_types.py) */
union SceNetApctlBSSDescEntry;
union SceNetApctlInfo;

typedef void (*sceNetApctlHandler)(enum SceNetApctlState, enum SceNetApctlState, enum SceNetApctlEvent, int, void *);

enum SceNetApctlState {
    SCE_NET_APCTL_STATE_Detached = 0,
    SCE_NET_APCTL_STATE_Disconnected = 1,
    SCE_NET_APCTL_STATE_Scanning = 2,
    SCE_NET_APCTL_STATE_Joinning = 3,
    SCE_NET_APCTL_STATE_IPObtaining = 4,
    SCE_NET_APCTL_STATE_IPObtained = 5,
} /* size 0x4 */;

enum SceNetApctlEvent {
    SCE_NET_APCTL_EVENT_DETECT_IF = 0,
    SCE_NET_APCTL_EVENT_CONNECT_REQ = 1,
    SCE_NET_APCTL_EVENT_SCAN_REQ = 2,
    SCE_NET_APCTL_EVENT_SCAN_COMPLETED = 3,
    SCE_NET_APCTL_EVENT_ESTABLISH = 4,
    SCE_NET_APCTL_EVENT_GET_IP = 5,
    SCE_NET_APCTL_EVENT_DISCONNECT_REQ = 6,
    SCE_NET_APCTL_EVENT_ERROR = 7,
} /* size 0x4 */;

enum SceNetApctlBSSDescEntryCode {
    SCE_NET_APCTL_BSSDESC_BSSID = 0,
    SCE_NET_APCTL_BSSDESC_SSID = 1,
    SCE_NET_APCTL_BSSDESC_SSID_LEN = 2,
    SCE_NET_APCTL_BSSDESC_CHANNEL = 3,
    SCE_NET_APCTL_BSSDESC_RSSI = 4,
    SCE_NET_APCTL_BSSDESC_AUTH_PROTO = 5,
} /* size 0x4 */;

typedef unsigned char SceUChar8;

typedef unsigned int SceUInt32;

enum SceNetApctlInfoCode {
    SCE_NET_APCTL_INFO_APCNF_NAME = 0,
    SCE_NET_APCTL_INFO_BSSID = 1,
    SCE_NET_APCTL_INFO_SSID = 2,
    SCE_NET_APCTL_INFO_SSID_LEN = 3,
    SCE_NET_APCTL_INFO_AUTH_PROTO = 4,
    SCE_NET_APCTL_INFO_RSSI = 5,
    SCE_NET_APCTL_INFO_CHANNEL = 6,
    SCE_NET_APCTL_INFO_PWRSAVE = 7,
    SCE_NET_APCTL_INFO_IP_ADDRESS = 8,
    SCE_NET_APCTL_INFO_NETMASK = 9,
    SCE_NET_APCTL_INFO_DEFAULT_ROUTE = 10,
    SCE_NET_APCTL_INFO_PRIMARY_DNS = 11,
    SCE_NET_APCTL_INFO_SECONDARY_DNS = 12,
    SCE_NET_APCTL_INFO_HTTP_PROXY_FLAG = 13,
    SCE_NET_APCTL_INFO_HTTP_PROXY_SERVER = 14,
    SCE_NET_APCTL_INFO_HTTP_PROXY_PORT = 15,
} /* size 0x4 */;

typedef char SceChar8;

typedef short unsigned int SceUShort16;

union SceNetApctlBSSDescEntry {
    SceUChar8 bssid[6];
    SceUChar8 ssid[33];
    SceSize ssidlen;
    SceUChar8 channel;
    SceUChar8 rssi;
    SceUInt32 auth_proto;
} /* size 0x24 */;

union SceNetApctlInfo {
    SceChar8 apcnf_name[64];
    SceUChar8 bssid[6];
    SceUChar8 ssid[32];
    SceSize ssidlen;
    SceUInt32 auth_proto;
    SceUChar8 rssi;
    SceUChar8 channel;
    SceUChar8 pwrsave;
    SceChar8 ip_address[16];
    SceChar8 netmask[16];
    SceChar8 default_route[16];
    SceChar8 primary_dns[16];
    SceChar8 secondary_dns[16];
    SceUInt32 http_proxy_flag;
    SceChar8 http_proxy_server[128];
    SceUShort16 http_proxy_port;
} /* size 0x80 */;

/* sceNetConfig80211GetBssDesc / scan result descriptor */
typedef struct {
    u8 bssid[6];                /* 0x00 */
    u8 channel;                 /* 0x06 */
    u8 ssidLen;                 /* 0x07 */
    char ssid[0x20];            /* 0x08 */
    s32 bssType;                /* 0x28 1 = infrastructure */
    u8 unk2C[0x12];
    u16 capability;             /* 0x3E 0x10 = privacy */
    u8 unk40[8];
    u8 rssi;                    /* 0x48 */
    u8 unk49[7];
} SceNetApctlBssDesc;
typedef char chk_SceNetApctlBssDesc[(sizeof(SceNetApctlBssDesc) == 0x50) ? 1 : -1];

/* sceNetApctlGetBSSDescIDList output entry */
typedef struct SceNetApctlBssId {
    struct SceNetApctlBssId *next;
    s32 id;
} SceNetApctlBssId;

typedef struct {
    s32 id;
    void (*func)(s32 oldState, s32 newState, s32 event, s32 error, void *arg);
    void *arg;
} SceNetApctlHandlerEntry;

/* parameters handed to the DHCP / PPPoE client threads */
typedef struct {
    s32 manualDns;              /* 0x00 */
    char primaryDns[0x10];      /* 0x04 */
    char secondaryDns[0x10];    /* 0x14 */
    char user[0x80];            /* 0x24 PPPoE */
    char pass[0x80];            /* 0xA4 PPPoE */
} SceNetApctlIpParam;

/* network configuration copied from sceUtilityGetNetParam (1.00: ctx+0x6CC) */
typedef struct {
    char name[0x40];            /* 0x00 NETPARAM 0 */
    char ssid[0x24];            /* 0x40 NETPARAM 1 */
    s32 secure;                 /* 0x64 NETPARAM 2: 1/2 = WEP */
    union {
        u32 w[3];
        u8 b[13];
    } wepKey;                   /* 0x68 NETPARAM 3 */
    s32 powerSave;              /* 0x78 SYSTEMPARAM 3 */
    s32 ipType;                 /* 0x7C NETPARAM 4: 0 DHCP, 1 static, 2 PPPoE */
    union {
        struct {
            char ip[0x10];      /* 0x80 NETPARAM 5 */
            char netmask[0x10]; /* 0x90 NETPARAM 6 */
            char route[0x10];   /* 0xA0 NETPARAM 7 */
        } s;
        struct {
            char user[0x80];    /* 0x80 NETPARAM 11 */
            char pass[0x80];    /* 0x100 NETPARAM 12 */
        } p;
    } addr;
    s32 manualDns;              /* 0x180 NETPARAM 8 */
    char primaryDns[0x10];      /* 0x184 NETPARAM 9 */
    char secondaryDns[0x10];    /* 0x194 NETPARAM 10 */
    s32 useProxy;               /* 0x1A4 NETPARAM 13 */
    char proxyServer[0x80];     /* 0x1A8 NETPARAM 14 */
    u16 proxyPort;              /* 0x228 NETPARAM 15 */
} SceNetApctlNetConf;
typedef char chk_SceNetApctlNetConf[(sizeof(SceNetApctlNetConf) == 0x22C) ? 1 : -1];

/* sceNetApctl main state (1.00 layout, g_apctl) */
typedef struct {
    char ifname[0x10];          /* 0x000 "wlan" */
    s32 state;                  /* 0x010 */
    s32 event;                  /* 0x014 */
    SceUID thid;                /* 0x018 */
    SceUID evf;                 /* 0x01C */
    SceUID sema;                /* 0x020 */
    s32 priority;               /* 0x024 */
    u8 scanBuf[0x690];          /* 0x028 sceNetConfig80211ScanRequest output */
    u32 scanBufLen;             /* 0x6B8 */
    s32 idle;                   /* 0x6BC accepts Connect/Scan requests */
    s32 connIndex;              /* 0x6C0 */
    s32 error;                  /* 0x6C4 */
    s32 linkUp;                 /* 0x6C8 */
#if FW_VERSION >= 150
    s32 exitReq;                /* 0x6CC set by Term */
#endif
    SceNetApctlNetConf conf;    /* 0x6CC (1.50+: 0x6D0) */
} SceNetApctlCtx;
#if FW_VERSION >= 150
typedef char chk_SceNetApctlCtx[(sizeof(SceNetApctlCtx) == 0x8FC) ? 1 : -1];
#else
typedef char chk_SceNetApctlCtx[(sizeof(SceNetApctlCtx) == 0x8F8) ? 1 : -1];
#endif
/* event flag wait mode: OR | CLEAR (1.50+: OR | CLEARALL) */
#if FW_VERSION >= 150
#define APCTL_EVF_MODE 0x21
#else
#define APCTL_EVF_MODE 0x11
#endif
/* event masks waited for while obtaining / holding an IP address */
#if FW_VERSION >= 150
#define APCTL_WAIT_IP 0x3A
#define APCTL_WAIT_GOTIP 0x2A
#else
#define APCTL_WAIT_IP -1
#define APCTL_WAIT_GOTIP -1
#endif

/* sceUtilityGetNetParam output buffer */
typedef union {
    u32 asUint;
    char asString[128];
} SceNetApctlNetParam;

typedef struct SceNetApctlScanEntry {
    struct SceNetApctlScanEntry *next;
    SceNetApctlBssDesc desc;
} SceNetApctlScanEntry;

/* sceNetConfig80211ScanRequest parameters */
typedef struct {
    s32 unk0;                   /* 0x00 = 1 */
    u8 unk4[6];
    u8 channels[14];            /* 0x0A 1..14 */
    u8 unk18[0x24];
    s32 unk3C;                  /* 0x3C = 1 */
    s32 unk40;                  /* 0x40 = 0 */
    s32 unk44;                  /* 0x44 = 6 */
    s32 unk48;                  /* 0x48 = 500 */
} SceNetApctlScanParam;
typedef char chk_SceNetApctlScanParam[(sizeof(SceNetApctlScanParam) == 0x4C) ? 1 : -1];

typedef struct {
    u16 hrd;
    u16 pro;
    u8 hln;
    u8 pln;
    u16 op;
    u8 sha[6];
    u8 spa[4];
    u8 tha[6];
    u8 tpa[4];
} __attribute__((packed)) SceNetArpHdr;

typedef struct {
    u16 sport;
    u16 dport;
    u16 len;
    u16 sum;
} __attribute__((packed)) SceNetDhcpUdpHdr;

typedef struct {
    u8 dst[6];
    u8 src[6];
    u16 type;
} __attribute__((packed)) SceNetEtherHdr;

typedef struct {
    u32 s_addr;
} __attribute__((packed)) SceNetInAddrPacked;

typedef struct {
    u8 unk0[0xD];
    SceNetInAddrPacked yiaddr;  /* 0x00D */
    u8 unk11[0xC8];
    char hostname[0x100];       /* 0x0D9 option 12 */
    char domain[0x100];         /* 0x1D9 option 15 */
    char message[0x100];        /* 0x2D9 option 56 */
    u8 unk3D9[3];
    u32 unk3DC;                 /* 0x3DC option 51 lease time */
    u32 unk3E0;                 /* 0x3E0 option 58 T1 */
    u32 unk3E4;                 /* 0x3E4 option 59 T2 */
    u32 unk3E8;                 /* 0x3E8 option 54 server id */
    u32 netmask;                /* 0x3EC option 1 */
    u32 broadcast;              /* 0x3F0 option 28 */
    u32 router;                 /* 0x3F4 option 3 */
    u32 dns[2];                 /* 0x3F8 option 6 */
    u8 msgType;                 /* 0x400 option 53 */
} SceNetDhcpLease;

/* DHCP client state (1.00: D_00008B38) */
typedef struct {
    char ifname[0x10];          /* 0x000 */
    s32 bpf;                    /* 0x010 */
    s32 arpBpf;                 /* 0x014 */
    u8 unk18[0x5E0];
    u8 unk5F8[0x5DC];           /* 0x5F8 receive buffer */
    s32 unkBD4;                 /* 0xBD4 */
    u8 unkBD8[2];
    u8 pkt[0x24E];              /* 0xBDA outgoing frame */
    s32 pktLen;                 /* 0xE28 */
    u8 unkE2C[0x24];
    SceNetDhcpUdpHdr *udp;      /* 0xE50 */
    u8 *unkE54;                 /* 0xE54 */
    struct {
        u32 src;
        u32 dst;
        u8 zero;
        u8 proto;
        u16 len;
    } pseudo;                   /* 0xE58 UDP pseudo header */
    u8 unkE64[2];
    u8 hwaddr[6];               /* 0xE66 own MAC */
    u8 unkE6C[0x118];
    SceNetDhcpLease *lease;     /* 0xF84 */
    u8 unkF88[0xC];
    s32 startTime;              /* 0xF94 */
    u8 unkF98[0xC];
    SceUID sema;                /* 0xFA4 */
    SceUID thid;                /* 0xFA8 */
    s32 state;                  /* 0xFAC */
    u8 unkFB0[0x418];
    u8 arpAddr[6];              /* 0x13C8 */
    u8 arpHw[0xE];              /* 0x13CE */
    void (*callback)(s32 event, s32 arg); /* 0x13DC */
    s32 unk13E0;
    s32 sock;                   /* 0x13E4 */
} SceNetDhcpCtx;
typedef char chk_SceNetDhcpCtx[(sizeof(SceNetDhcpCtx) == 0x13E8) ? 1 : -1];

typedef struct {
    void *iov_base;
    u32 iov_len;
} SceNetIovec;

typedef struct {
    void *msg_name;
    u32 msg_namelen;
    SceNetIovec *msg_iov;
    s32 msg_iovlen;
    void *msg_control;
    u32 msg_controllen;
    s32 msg_flags;
} SceNetMsghdr;

typedef struct {
    u8 sin_len;
    u8 sin_family;
    u16 sin_port;
    u32 sin_addr;
    u8 sin_zero[8];
} SceNetSockaddrIn;

/* PPPoE client state (1.00: pointed to by D_00013F20) */
struct Unk_D_00013F20 {
    s32 sock;                   /* 0x0 */
    SceUID sema;                /* 0x4 */
    SceUID thid;                /* 0x8 */
};

struct Unk_func_000016E0_0 {
    u8 pad0[0x7DC];
    s32 unk7DC;
};

struct Unk_func_00009850_0 {
    u8 pad0[0x2374];
    M2C_UNK * unk2374;
    s32 unk2378;
    u8 pad237C[0x14];
    s32 unk2390;
};

struct Unk_func_00009BEC_0 {
    u8 pad0[0x2508];
    s32 unk2508;
    s32 unk250C;
    s32 unk2510;
};

struct Unk_func_00009C34_0 {
    u8 pad0[0x2518];
    s32 unk2518;
};

struct Unk_func_00009C40_0 {
    u8 pad0[0x2518];
    s32 unk2518;
};

struct Unk_func_00009CE0_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_00009CE0_temp_a4 {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x8];
    s32 unk18;
};

struct Unk_func_00009CE0_temp_a6 {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x4];
    s32 unk14;
};

struct Unk_func_00009D80_0 {
    u8 pad0[0x24DC];
    s32 unk24DC;
};

struct Unk_func_00009D90_0 {
    u8 pad0[0x24F4];
    s32 unk24F4;
};

struct Unk_func_00009DA0_0 {
    u8 pad0[0x24DC];
    s32 unk24DC;
    u8 pad24E0[0x1C];
    s32 unk24FC;
};

struct Unk_func_00009DB4_0 {
    u8 pad0[0x18];
    s32 unk18;
    u8 pad1C[0x24C0];
    s32 unk24DC;
    u8 pad24E0[0x1C];
    s32 unk24FC;
};

struct Unk_func_0000A200_0 {
    u8 pad0[0x30EC];
    s32 unk30EC;
};

struct Unk_func_0000A23C_0 {
    u8 pad0[0x30F4];
    s32 unk30F4;
};

struct Unk_func_0000A248_0 {
    u8 pad0[0x30F4];
    s32 unk30F4;
};

struct Unk_func_0000A354_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_0000A354_temp_s1 {
    u8 pad0[0x8];
    s32 unk8;
    u8 padC[0xBBC];
    s32 unkBC8;
};

struct Unk_func_0000A448_0 {
    u8 pad0[0x24E8];
    s32 unk24E8;
};

struct Unk_func_0000A458_temp_v1 {
    u8 pad0[0x14];
    s32 unk14;
    u8 pad18[0x28];
    s32 unk40;
};

struct Unk_func_0000A46C_0 {
    u8 pad0[0x24D4];
    s32 unk24D4;
};

struct Unk_func_0000A808_0 {
    u8 pad0[0x3108];
    s32 unk3108;
};

struct Unk_func_0000AB74_0 {
    u8 pad0[0x2520];
    s32 unk2520;
    s32 unk2524;
};

struct Unk_func_0000ACBC_0 {
    u8 pad0[0x24B8];
    s32 unk24B8;
};

struct Unk_func_0000ACCC_0 {
    u8 pad0[0x24B0];
    s32 unk24B0;
};

struct Unk_func_0000E4E0_0 {
    s32 unk0;
    u8 pad4[0x40];
    s32 unk44;
};

struct Unk_func_0000E8E8_0 {
    u8 pad0[0x10];
    u32 unk10;
};

/* clears the resolver configuration (inlined at every use) */
static __inline s32 apctlResetDns(void) {
    u32 dns1[4];
    u32 dns2[4];

    dns2[0] = 0;
    dns1[0] = 0;
    return sceNetConfigSetDNS(dns1, dns2);
}

/* static address setup (inlined into func_00001C54; func_000038EC is the same code) */
static __inline s32 apctlSetStatic(SceNetApctlCtx *ctx, u32 *ip, u32 *bcast, u32 *mask, u32 *route, u32 *dns1, u32 *dns2) {
    s32 ret;

    ret = sceNetConfigSetIfaddr(ctx, ip, bcast, mask);
    if (ret >= 0) {
        sceNetConfigSetDefaultRoute(route);
        if (ctx->conf.manualDns == 1) {
            ret = sceNetConfigSetDNS(dns1, dns2);
        }
    }
    return ret;
}

extern s32 (*D_00008120[5])(SceNetApctlCtx *ctx, s32 prev, s32 *state, s32 *event);
extern s32 D_00008134;
extern s32 (*D_00008138[7])(SceNetDhcpCtx *dc, s32 prev);
extern s32 D_00008154[];
extern s32 (*D_00008180[5])(SceNetApctlCtx *ctx, s32 prev, s32 *state, s32 *event);
extern u32 D_000081FC; /* ARP BPF filter: target IP constant */
extern u32 D_00008210[2]; /* struct bpf_program for the ARP filter */
extern s32 D_00008220;
extern s32 D_00008234; /* D_00011DD4.state (prx reloc target) */
extern u32 D_00008240;
extern SceNetApctlHandlerEntry D_00008B1C[2];
extern SceNetApctlCtx *D_00008B34;
extern SceNetDhcpCtx D_00008B38;
extern SceNetApctlHandlerEntry D_00008B80[2];
extern SceNetApctlHandlerEntry D_00008B98[1]; /* 1.50+ internal handler */
extern char D_00010A8C[]; /* "wlan" */
extern SceNetApctlCtx D_00011DD4;
extern s32 D_00011DE4;
extern u32 D_00011DF0;
extern s32 D_00012420;
extern s32 D_00012424;
extern s32 D_00012428;
extern s32 D_0001242C;
extern s32 D_00012430;
extern s32 D_00012434;
extern s32 D_00012438;
extern s32 D_0001253C;
extern s32 D_000125BC;
extern s32 D_000129FC;
extern s32 D_00012A00;
extern s32 D_00012A04;
extern s32 D_00012A08;
extern s32 D_00012A0C;
extern s32 D_00012A10;
extern s32 D_00012A14;
extern struct Unk_D_00013F20 *D_00013F20;
extern s32 D_00015E2C;
extern s32 D_00016528;
extern s32 D_000170A8;
extern M2C_UNK D_000177A0;
extern u32 D_00017820;

s32 func_000002BC(SceNetApctlCtx *ctx);
s32 func_0000038C(SceNetApctlCtx *ctx, u32 *buflen, SceNetApctlBssId *buf);
s32 func_0000050C(SceNetApctlCtx *ctx, s32 code, union SceNetApctlInfo *info);
s32 func_00000788(SceNetApctlCtx *ctx);
s32 func_00000964(SceNetApctlCtx *ctx, u32 *bits);
s32 func_00000A30();
s32 func_00000A74(SceNetApctlCtx *ctx);
s32 func_00000B24(SceNetApctlCtx *ctx);
s32 func_00000B54(s32, s32, s32);
s32 func_00000B68(s32 stackSize, s32 prio);
s32 func_00000C38(SceNetApctlCtx *ctx, s32 index, s32 code, union SceNetApctlBSSDescEntry *info);
s32 func_00000CB0(void);
s32 func_00000D54(void *func, void *arg, s32 *id);
s32 func_00000D60(s32, s32, s32, s32);
s32 func_00000E28(s32 id);
s32 func_00000EC8(SceNetApctlCtx *ctx, s32 prev);
s32 func_00000F18(s32, s32);
s32 func_00000FD0(void);
s32 func_00000FE8(SceNetApctlCtx *ctx, s32 prev);
s32 func_00000FF8(void);
s32 func_00001038(u32 *buflen, void *buf);
s32 func_00001098(s32 code, void *info);
s32 func_000010EC(s32 *state);
s32 func_00001250(SceNetApctlCtx *ctx, u32 *bits);
s32 func_000016E0(struct Unk_func_000016E0_0 *arg0, s32 arg1);
s32 func_00001710(SceSize args, void *argp);
s32 func_00001940(SceNetApctlCtx *ctx);
s32 func_00001A68(SceNetApctlCtx *ctx);
s32 func_00001BB0(SceNetApctlCtx *ctx);
s32 func_00001BC0(void);
s32 func_00001C54(SceNetApctlCtx *ctx);
void func_00001D84(SceNetApctlCtx *ctx);
void func_00001DB8(SceNetApctlCtx *ctx);
void func_00001DE8(SceNetApctlCtx *ctx);
s32 func_00001E20(SceNetApctlCtx *ctx, SceNetInAddrPacked *ip, SceNetInAddrPacked *bcast, SceNetInAddrPacked *mask, SceNetInAddrPacked *route, SceNetInAddrPacked *dns1, SceNetInAddrPacked *dns2);
s32 func_000020CC(s32 *arg0);
s32 func_00002204(s32 connIndex);
s32 func_0000228C(void);
void func_0000235C(s32 arg0, s32 arg1);
s32 func_00002388(s32 index, s32 code, void *info);
s32 func_000023BC(SceNetApctlCtx *ctx, u32 mask, u32 *bits, s32 wait);
s32 func_00002480();
s32 func_00002514(s32 arg0);
s32 func_000038E4(void);
void func_00003B30(s32 arg0);
s32 func_00003C64(void);
void func_00003E70();
void func_00003EF0();
s32 func_0000407C(const char *ifname, SceNetDhcpLease *l);
u32 func_00004270(SceNetInAddrPacked *addr);
s32 func_00004424(const char *ifname);
s32 func_00004704(s32 sock, u32 *dst, void *buf);
s32 func_0000487C(SceNetDhcpCtx *dc, void *spa, void *tpa);
s32 func_00004EBC(s8 *opt, SceNetDhcpLease *l);
s32 func_00004FC4(s8 *opt, SceNetDhcpLease *l);
s32 func_00005064(s8 *opt, SceNetDhcpLease *l);
s32 func_000051A0(const char *ifname, void *func, s32 a2, s32 prio, s32 a4, SceNetApctlIpParam *param);
void func_00005290(void *arg0);
void func_00005634(void);
s32 func_00005678(SceNetDhcpCtx *dc, s32 type);
void func_00005D14(SceNetDhcpCtx *dc, s32 state, s32 err);
u16 func_00005E00(void *pseudo, void *data, s32 len);
u16 func_00005E90(u16 *p, s32 nwords);
s32 func_00006050(s32 sock);
s32 func_000060AC(SceNetDhcpCtx *dc);
s32 func_00006304(s32 arg0);
s32 func_0000643C(SceNetDhcpCtx *dc);
s32 func_00006A14(const char *ifname, void *func, s32 a2, s32 prio, s32 a4, SceNetApctlIpParam *param);
s32 func_00006F34(s8 *opt, SceNetDhcpLease *l);
void func_000070C0(s32 *arg0);
s32 func_000070E8(void *pkt, s32 len, s32 area, u32 *overload);
s32 func_00007244(void *pkt, void *arg, s8 tag, s32 area, u32 *overload);
s32 func_00007324(void);
s32 func_0000741C(s32, s32);
u8 *func_000074D0(u8 *dst, u8 *src, s32 n);
void *func_00007504(void *dst, s32 c, s32 n);
char *func_0000774C(char *dst, const char *src, s32 n);
char *func_000077F8(char *dst, const char *src);
s32 func_00007830(const char *s);
s32 func_00008BB0(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00008E00(void);
s32 func_0000901C(void);
s32 func_00009098(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00009328(void);
s32 func_00009348(void);
s32 func_000093C0(s32);
s32 func_00009500(void);
s32 func_00009588(s32 arg0);
M2C_UNK *func_00009850(struct Unk_func_00009850_0 *arg0);
s32 func_00009880(s32 arg0);
s32 func_000098A4(s32);
s32 func_00009BEC(struct Unk_func_00009BEC_0 *arg0);
s32 func_00009C34(struct Unk_func_00009C34_0 *arg0);
s32 func_00009C40(struct Unk_func_00009C40_0 *arg0);
s32 func_00009CE0(struct Unk_func_00009CE0_0 *arg0);
s32 func_00009D80(struct Unk_func_00009D80_0 *arg0);
s32 func_00009D90(struct Unk_func_00009D90_0 *arg0);
s32 func_00009DA0(struct Unk_func_00009DA0_0 *arg0);
s32 func_00009DB4(struct Unk_func_00009DB4_0 *arg0);
s32 func_0000A1F0(void);
s32 func_0000A1F8(void);
s32 func_0000A200(struct Unk_func_0000A200_0 *arg0);
s32 func_0000A23C(struct Unk_func_0000A23C_0 *arg0);
s32 func_0000A248(struct Unk_func_0000A248_0 *arg0);
s32 func_0000A354(struct Unk_func_0000A354_0 *arg0);
void func_0000A418(s32 arg0, s32 arg1);
s32 func_0000A448(struct Unk_func_0000A448_0 *arg0);
s32 func_0000A458(s32 arg0);
s32 func_0000A46C(struct Unk_func_0000A46C_0 *arg0);
s32 func_0000A808(struct Unk_func_0000A808_0 *arg0);
s32 func_0000A84C(void);
s32 func_0000A854(void);
s32 func_0000A95C(void);
s32 func_0000A9A4(void);
s32 func_0000A9AC(s32 arg0);
s32 func_0000AB74(struct Unk_func_0000AB74_0 *arg0);
s32 func_0000ACBC(struct Unk_func_0000ACBC_0 *arg0);
s32 func_0000ACCC(struct Unk_func_0000ACCC_0 *arg0);
s32 func_0000AE44(s32);
s32 func_0000B318(void);
s32 func_0000B320(void);
s32 func_0000B328(s32);
s32 func_0000B490(s32, s32, s32, s32, s32);
s32 func_0000B6A4(s32);
void func_0000B720(void);
s32 func_0000B7D8(s32, s32);
s32 func_0000B7FC(s32, s32, s32, s32, s32);
s32 func_0000B8C4(s32);
s32 func_0000B974(s32, s32, s32, s32, s32);
s32 func_0000B9F8(s32, s32, s32, s32, s32);
void func_0000BBEC(s32 arg0);
s32 func_0000BC08(s32);
s32 func_0000BC30(s32);
s32 func_0000BC54(void);
void func_0000BCBC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_0000BCD8(void);
s32 func_0000BCF8(void);
s32 func_0000BD34(void);
s32 func_0000BD70(s32, s32);
void func_0000BE2C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 func_0000BE5C(s32);
s32 func_0000BF90(s32, s32, s32, s32);
s32 func_0000C174(void);
void func_0000C738(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_0000C768(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_0000D184(s32);
void func_0000E320(void);
void func_0000E340(void);
s32 func_0000E4D0(void);
s32 func_0000E4D8(void);
s32 func_0000E4E0(struct Unk_func_0000E4E0_0 *arg0);
s32 func_0000E524(s32 *arg0);
s32 func_0000E55C(s32 *arg0);
s32 func_0000E8E8(struct Unk_func_0000E8E8_0 *arg0);
s32 module_start(void);
s32 module_stop(void);
s32 sceKernelCheckThreadStack(void);
s32 sceKernelSetEventFlag(u32, u32);
s32 sceKernelSignalSema(s32, s32);
s32 sceNetApctlAddHandler(void *handler, void *arg);
s32 sceNetApctlAddInternalHandler(void *handler, void *arg);
s32 sceNetApctlConnect(s32 connIndex);
s32 sceNetApctlDelHandler(s32 id);
s32 sceNetApctlDelInternalHandler(s32 id);
s32 sceNetApctlDisconnect(void);
s32 sceNetApctlGetBSSDescEntry(s32 index, s32 code, void *info);
s32 sceNetApctlGetBSSDescEntryUser(s32 index, s32 code, void *info);
s32 sceNetApctlGetBSSDescIDList(u32 *buflen, void *buf);
s32 sceNetApctlGetBSSDescIDListUser(u32 *buflen, void *buf);
s32 sceNetApctlGetInfo(s32 code, void *info);
s32 sceNetApctlGetState(s32 *state);
s32 sceNetApctlInit(s32 stackSize, s32 prio);
s32 sceNetApctlScan(void);
s32 sceNetApctlScanUser(void);
s32 sceNetApctlTerm(void);
s32 sceNetApctl_lib_C519EDCD(s32 arg0);
M2C_UNK sceNetBpfClose();
s32 sceNetBpfRead();
s32 sceNetConfigDelIfaddr(s32);
s32 sceNetConfigFlushRoute();
M2C_UNK sceNetMemcpy(s32, s32, s32);
M2C_UNK sceNetMemset(M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK sceWlanDevDetach();

#endif
