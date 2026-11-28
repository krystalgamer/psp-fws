#ifndef LIBHTTP_DECLS_H
#define LIBHTTP_DECLS_H

#include "common.h"
#include "m2c_macros.h"

/* devkit 0.6.0 DWARF (tools/dwarf_types.py) */
struct SceNetInetFdSet;
struct SceNetInetInAddr;
struct SceNetInetSockaddr;
struct SceNetInetSockaddrIn;
struct SceNetInetTimeval;
struct SceUriElement;
struct _SceHttpAuth;
struct _SceHttpAuthList;
struct _SceHttpBasicResponseHeader;
struct _SceHttpConnection;
struct _SceHttpFreeList;
struct _SceHttpRecvBuf;
struct _SceHttpReqHeaderList;
struct _SceHttpRequest;
struct _SceHttpTemplate;
union SceNetApctlInfo;

typedef struct _SceHttpTemplate _SceHttpTemplate;

typedef int SceBool;

typedef enum {
    _SCE_HTTP_NO_PROXY = 0,
    _SCE_HTTP_USE_PROXY = 1,
} /* size 0x4 */ _SceHttpProxyStatus;

typedef struct _SceHttpReqHeaderList _SceHttpReqHeaderList;

struct _SceHttpReqHeaderList {
    unsigned char *field_name;
    unsigned char *field_value;
    struct _SceHttpReqHeaderList *next;
} /* size 0xC */;

typedef int (*sceHttpStatusCB)(int, int);

typedef int (*sceHttpSelectionCB)(int, int);

typedef int (*sceHttpPasswordCB)(int, const char *, char **, char **);

struct _SceHttpFreeList {
    void *free_target;
    struct _SceHttpFreeList *next;
} /* size 0x8 */;

typedef enum {
    SCE_HTTP_PROXY_AUTO = 0,
    SCE_HTTP_PROXY_MANUAL = 1,
} /* size 0x4 */ SceHttpProxyMode;

typedef struct _SceHttpConnection _SceHttpConnection;

typedef enum {
    _CONNECTION_TERM = 0,
    _CONNECTION_CONNECTING = 1,
    _CONNECTION_RESOLVING = 2,
    _CONNECTION_ALIVE = 3,
    _CONNECTION_IN_USE = 4,
    _CONNECTION_TERMINATING = 5,
} /* size 0x4 */ _SceHttpConnectionStatus;

typedef struct _SceHttpAuthList _SceHttpAuthList;

typedef struct _SceHttpAuth _SceHttpAuth;

struct _SceHttpAuth {
    int type;
    const char *realm;
    const char **domains;
    const char *uri;
    const char *nonce;
    const char *opaque;
    int stale;
    int algorithm;
    int qop;
    int proxy;
} /* size 0x28 */;

typedef struct _SceHttpFreeList _SceHttpFreeList;

typedef unsigned char SceUChar8;

typedef short unsigned int SceUShort16;

typedef unsigned int SceUInt32;

typedef char SceChar8;

struct _SceHttpRecvBuf {
    void *byte_array;
    SceSize size;
    SceSize current;
    SceSize data_tail;
    int exhaust;
} /* size 0x14 */;

typedef struct _SceHttpRequest _SceHttpRequest;

typedef enum {
    _BEFORE_SEND_REQUEST = 0,
    _AFTER_SEND_HEADER = 1,
    _AFTER_SEND_REQUEST = 2,
    _BEFORE_RECV_HEADER = 3,
    _AFTER_RECV_HEADER = 4,
    _AFTER_RECV_BODY = 5,
    _CONNECTION_SHUTDOWN = 6,
} /* size 0x4 */ _SceHttpRequestStatus;

typedef long long unsigned int SceUInt64;

typedef struct _SceHttpBasicResponseHeader _SceHttpBasicResponseHeader;

typedef long long unsigned int SceULong64;

typedef enum {
    _SCE_HTTP_REDIRECT = 100,
} /* size 0x4 */ _SceHttpCreateConnectionOption;

typedef struct _SceHttpRecvBuf _SceHttpRecvBuf;

typedef struct SceUriElement SceUriElement;

typedef enum {
    SCE_HTTP_HEADER_OVERWRITE = 0,
    SCE_HTTP_HEADER_ADD = 1,
} /* size 0x4 */ SceHttpAddHeaderMode;

typedef enum {
    _SCE_HTTP_CR_RECV = 100,
    _SCE_HTTP_CRLF_RECV = 101,
    _SCE_HTTP_CRLFCR_RECV = 102,
    _SCE_HTTP_CRLFCRLF_RECV = 103,
} /* size 0x4 */ _SceHttpHeaderRecvStatus;

typedef unsigned int SceNetInetSocklen_t;

typedef struct SceNetInetFdSet SceNetInetFdSet;

typedef unsigned int SceNetInetFdMask;

struct SceNetInetTimeval {
    unsigned int tv_sec;
    unsigned int tv_usec;
} /* size 0x8 */;

typedef unsigned int size_t;

typedef void *(*SceHttpMallocFunction)(SceSize);

typedef void (*SceHttpFreeFunction)(void *);

typedef void *(*SceHttpReallocFunction)(void *, SceSize);

typedef int SceInt32;

struct _SceHttpTemplate {
    int template_id;
    int reference_counter;
    SceBool use_netcnf;
    _SceHttpProxyStatus proxy_status;
    unsigned char *proxy_host;
    short unsigned int proxy_port;
    int http_ver;
    unsigned int resolver_timeo;
    unsigned int connect_timeo;
    unsigned int receive_timeo;
    unsigned int send_timeo;
    unsigned int res_header_max;
    unsigned int redirect_max;
    short unsigned int keep_alive;
    short unsigned int redirect;
    short unsigned int cache;
    short unsigned int cookie;
    int resolver_retry;
    _SceHttpReqHeaderList *header_list;
    SceBool header_use;
    sceHttpStatusCB *status_cb;
    sceHttpSelectionCB *select_cb;
    sceHttpPasswordCB *password_cb;
    struct _SceHttpFreeList free_list;
    struct _SceHttpTemplate *next;
    struct _SceHttpTemplate *pre;
} /* size 0x64 */;

struct _SceHttpAuthList {
    _SceHttpAuth auth;
    _SceHttpAuth next;
} /* size 0x50 */;

struct SceNetInetInAddr {
    SceUInt32 s_addr;
} /* size 0x4 */;

struct _SceHttpBasicResponseHeader {
    int http_major_ver;
    int http_minor_ver;
    int response_code;
    const unsigned char *reason_phrase;
    unsigned int reason_len;
    const unsigned char *etags;
    unsigned int etags_len;
    const unsigned char *server;
    unsigned int server_len;
    const unsigned char *date;
    unsigned int date_len;
    const unsigned char *last_modified;
    unsigned int modified_len;
    const unsigned char *location;
    unsigned int location_len;
    const unsigned char *authorization;
    unsigned int authorization_len;
    const unsigned char *connection;
    unsigned int connection_len;
    SceULong64 content_length;
    SceBool no_content_length;
} /* size 0x60 */;

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

struct SceUriElement {
    unsigned char *scheme;
    unsigned char *hostname;
    short unsigned int port;
    unsigned char *path;
    unsigned char *query;
    unsigned char *username;
    unsigned char *password;
    unsigned char *fragment;
    SceBool opaque;
} /* size 0x24 */;

struct SceNetInetSockaddr {
    SceUChar8 sa_len;
    SceUChar8 sa_family;
    SceChar8 sa_data[14];
} /* size 0x10 */;

struct SceNetInetFdSet {
    SceNetInetFdMask fds_bits[8];
} /* size 0x20 */;

struct SceNetInetSockaddrIn {
    SceUChar8 sin_len;
    SceUChar8 sin_family;
    SceUShort16 sin_port;
    struct SceNetInetInAddr sin_addr;
    SceChar8 sin_zero[8];
} /* size 0x10 */;

struct _SceHttpRequest {
    _SceHttpRequestStatus status;
    int request_id;
    int method;
    int reference_counter;
    int pipeline_next;
    int pipeline_pre;
    int pipeline_skip_num;
    SceBool pipeline_end;
    int network_errno;
    short unsigned int need_auth;
    short unsigned int aborted;
    unsigned char *auth_string;
    short unsigned int need_cookie;
    unsigned char *cookie_string;
    unsigned char *path;
    unsigned char *query;
    unsigned char *fragment;
    unsigned char *res_header_buf;
    unsigned char *redirect_buf;
    unsigned int res_header_max;
    unsigned int res_header_size;
    unsigned char *header_clone_buf;
    unsigned int redirect_counter;
    unsigned int redirect_max;
    const unsigned char *post_buf;
    SceSize post_buf_size;
    SceUInt64 request_length;
    SceUInt64 total_body_recv;
    _SceHttpBasicResponseHeader response;
    _SceHttpConnection *connection;
    _SceHttpTemplate tmpl;
    sceHttpStatusCB *status_cb;
    sceHttpSelectionCB *select_cb;
    sceHttpPasswordCB *password_cb;
    _SceHttpFreeList free_list;
    _SceHttpConnection *redirect_con;
    struct _SceHttpRequest *next;
    struct _SceHttpRequest *pre;
} /* size 0x160 */;

struct _SceHttpConnection {
    int connection_id;
    int protocol;
    int reference_counter;
    int pipeline_counter;
    int pipeline_current_id;
    int pipeline_tail_id;
    int posting_id;
    unsigned char *hostname;
    unsigned char *url_parse_buf;
    unsigned char *userid;
    unsigned char *password;
    short unsigned int port;
    short unsigned int aborted;
    int resolver_id;
    int resolved;
    int network_errno;
    _SceHttpConnectionStatus status;
    _SceHttpAuthList auth_list;
    _SceHttpFreeList free_list;
    _SceHttpTemplate tmpl;
    int sock_id;
    struct SceNetInetSockaddrIn sin;
    struct _SceHttpRecvBuf recv_buf;
    struct _SceHttpConnection *redirect_list;
    struct _SceHttpConnection *next;
    struct _SceHttpConnection *pre;
} /* size 0x130 */;

/* 1.00-1.03 template (sceHttpCreateTemplate); offsets from the 1.00 asm.
 * Embedded in SceHttpConn (+0xA4) and SceHttpReq (+0x84/+0x88). */
typedef struct SceHttpTmpl {
    s32 id;                 /* 0x00 template_id (ids 0x00xxxxxx) */
    s32 http_ver;           /* 0x04 */
    s32 reference_counter;  /* 0x08 */
    s32 use_netcnf;         /* 0x0C */
    s32 proxy_status;       /* 0x10 */
    u32 resolver_timeo;     /* 0x14 */
    u32 connect_timeo;      /* 0x18 */
    u32 receive_timeo;      /* 0x1C */
    u32 send_timeo;         /* 0x20 */
    u32 unk24;              /* 0x24 */
    u32 unk28;              /* 0x28 */
    u32 unk2C;              /* 0x2C */
    char *proxy_host;       /* 0x30 */
    char *str34;            /* 0x34 */
    char *str38;            /* 0x38 */
    s32 keep_alive;         /* 0x3C */
    s32 redirect;           /* 0x40 */
    s32 cache;              /* 0x44 */
    s32 cookie;             /* 0x48 */
    s32 auth;               /* 0x4C */
    s32 unk50;              /* 0x50 */
    s32 proxy_mode;         /* 0x54 */
    void *unk58;            /* 0x58 */
    void *unk5C;            /* 0x5C */
    void *password_cb;      /* 0x60 sceHttpSetAuthInfoCB */
    _SceHttpReqHeaderList *header_list; /* 0x64 */
    void *unk68;            /* 0x68 */
    void *unk6C;            /* 0x6C */
    struct SceHttpTmpl *next; /* 0x70 */
    struct SceHttpTmpl *pre;  /* 0x74 */
    u16 proxy_port;         /* 0x78 */
    u8 unk7A[0x84 - 0x7A];
} SceHttpTmpl;
typedef char chk_SceHttpTmpl[(sizeof(SceHttpTmpl) == 0x84) ? 1 : -1];

/* 1.00-1.03 connection (ids 0x01xxxxxx) */
typedef struct SceHttpConn {
    s32 id;                 /* 0x00 */
    s32 protocol;           /* 0x04 */
    s32 reference_counter;  /* 0x08 */
    u8 unk0C[0x24 - 0x0C];
    s32 sock_id;            /* 0x24 */
    u8 unk28[0xA4 - 0x28];
    SceHttpTmpl tmpl;       /* 0xA4 */
    u8 unk128[0x150 - 0x128];
    struct SceHttpConn *next; /* 0x150 */
    struct SceHttpConn *pre;  /* 0x154 */
    u8 unk158[0x164 - 0x158];
} SceHttpConn;
typedef char chk_SceHttpConn[(sizeof(SceHttpConn) == 0x164) ? 1 : -1];

/* 1.00-1.03 request (ids 0x02xxxxxx); 1.02/1.03 grew by 0x18 */
/* HTTP_REQ_V(1.00, 1.02, 1.03) */
#if FW_VERSION < 102
#define HTTP_REQ_V(a, b, c) (a)
#elif FW_VERSION == 102
#define HTTP_REQ_V(a, b, c) (b)
#else
#define HTTP_REQ_V(a, b, c) (c)
#endif
typedef struct SceHttpReq {
    u8 unk00[0x10];
    s32 id;                 /* 0x10 */
    u8 unk14[0x18 - 0x14];
    s32 reference_counter;  /* 0x18 */
    u8 unk1C[0x2C - 0x1C];
    s32 status;             /* 0x2C */
    u8 unk30[HTTP_REQ_V(0x84, 0x88, 0x8C) - 0x30];
    SceHttpTmpl tmpl;       /* 0x84 (1.02: 0x88, 1.03: 0x8C) */
    u8 unk108[HTTP_REQ_V(0x124, 0x130, 0x134) - HTTP_REQ_V(0x108, 0x10C, 0x110)];
    s32 response_code;      /* 0x124 (1.02: 0x130, 1.03: 0x134) */
    u8 unk128[HTTP_REQ_V(0x178, 0x190, 0x190) - HTTP_REQ_V(0x128, 0x134, 0x138)];
    struct SceHttpReq *next; /* 0x178 (1.02: 0x190) */
    struct SceHttpReq *pre;  /* 0x17C (1.02: 0x194) */
    u8 unk180[HTTP_REQ_V(0x188, 0x1A0, 0x1A0) - HTTP_REQ_V(0x180, 0x198, 0x198)];
} SceHttpReq;
typedef char chk_SceHttpReq[(sizeof(SceHttpReq) == HTTP_REQ_V(0x188, 0x1A0, 0x1A0)) ? 1 : -1];

typedef void *(*SceHttpMallocFunction100)(SceSize size);
typedef void (*SceHttpFreeFunction100)(void *ptr);
typedef void *(*SceHttpReallocFunction100)(void *ptr, SceSize size);
/* sceHttpSetMallocFunction (0xDCC0 in 1.00) */
typedef struct {
    SceHttpMallocFunction100 malloc_func;
    SceHttpFreeFunction100 free_func;
    SceHttpReallocFunction100 realloc_func;
} SceHttpMallocFuncs;
/* library state (0xDCCC in 1.00) */
typedef struct {
    s32 inited;             /* 0x00 sceHttpInit */
    SceUID vpl;             /* 0x04 libhttp_pool */
    s32 cache_inited;       /* 0x08 sceHttpInitCache */
    s32 unk0C;
    u32 cache_size;         /* 0x10 */
    s32 unk14;
    void *cache_list;       /* 0x18 */
    u8 unk1C[0x5C - 0x1C];
} SceHttpGlobals;

struct Unk_func_00005CD0_var_a0 {
    u8 pad0[0x7C];
    void *unk7C;
};

struct Unk_func_00005CD0_var_s1 {
    s32 unk0;
    void *unk4;
};

struct Unk_func_00011B3C_0 {
    u8 pad0[0x28];
    s32 unk28;
    s32 unk2C;
};

struct Unk_func_00011B3C_1 {
    u8 pad0[0x34];
    s32 unk34;
    s32 unk38;
};

extern s32 D_0000DC20;
extern s32 D_0000DC24;
extern s32 D_0000DC28;
extern s32 D_0000DC2C;
extern s32 D_0000DC30;
extern s32 D_0000DC35;
extern SceHttpMallocFuncs D_0000DCC0;
extern SceHttpGlobals D_0000DCCC;
extern void *D_0000DCE4;
extern s32 D_0000DD28;
extern SceHttpTmpl D_0000DD2C;
extern SceHttpConn D_0000DDB0;
extern SceHttpReq D_0000DF18;
extern s32 D_0000E0A0;
extern SceHttpReq D_0000E7D8;
extern s32 D_0000F0F0;
extern s32 D_0000F0F4;
extern s32 D_0000F0F8;
extern s32 D_0000F0FC;
extern s32 D_0000F100;
extern s32 D_0000F104;
extern s32 D_0000F1B4;
extern s32 D_0000F1FC;
extern s32 D_0000F590;
extern s32 D_0001A334;
extern s32 D_0001A5C4;
extern s32 D_0001A7B4;
extern s32 D_0001AA44;
extern s32 D_0001AB6C;
extern s32 D_0001AB78;
extern s32 D_0001AC9C;
extern s32 D_0001AE08;
extern s32 D_0001AF9C;
extern s32 D_0001B0CC;
extern s32 D_0001B0E0;

int CopyHttpHeaderList(_SceHttpReqHeaderList **out, const _SceHttpReqHeaderList *src);
s32 CreateConnectionWithUrl(s32, s32, s32, s32, s32);
int DeleteHttpHeader(_SceHttpReqHeaderList **header_list, const SceUChar8 *name);
s32 GetHttpReq(s32, s32);
int HttpWhichId(int id);
M2C_UNK SSL_CTX_free(s32);
M2C_UNK SSL_clear(s32);
M2C_UNK SSL_free(s32);
M2C_UNK SSL_set_bio(s32, M2C_UNK, M2C_UNK);
M2C_UNK SSL_set_session(s32, M2C_UNK);
M2C_UNK SSL_shutdown(s32);
s32 SSL_write(s32);
SceUInt64 _HttpAtoi64(const char *str);
void _HttpI64toa(char *str, const SceUInt64 val);
void __HttpI64toa(char **pStr, const SceUInt64 val);
void _sceHttpFreeInternal(void *ptr);
void *_sceHttpMallocInternal(SceSize size);
void *_sceHttpReallocInternal(void *ptr, SceSize size);
int _try_build_header(SceUChar8 **out, _SceHttpRequest *request);
s32 func_000031DC(s32 arg0);
s32 func_0000325C(s32);
s32 func_000032B0(s32);
s32 func_00003614(s32);
s32 func_00003668(s32);
s32 func_00003A24(s32);
void func_00003C04(void *arg0);
s32 func_00003C90(void *arg0);
void func_00003CEC(void *arg0);
void func_00003D08(void *arg0);
s32 func_000042D4(void);
s32 func_000043A0(s32);
s32 func_00005004(s32, s32, s32);
s32 func_000050DC(s32);
void func_000050F4(void *arg0);
s32 func_00005748(s32);
s32 func_00005778(s32 arg0);
s32 func_000057E4(s32);
s32 func_000057F8(s32);
s32 func_0000584C(s32);
s32 func_00005CAC(s32);
void func_00005CD0(void *arg0, void *arg1);
s32 func_00005D20(s32);
u32 func_00005DE0(u32 arg0);
s32 func_00005EF4(s32);
s32 func_00006388(s32);
void func_0000646C(void *arg0, void *arg1, u32 arg2, s32 arg3);
s32 func_0000649C(s32);
void func_000064A8(void *arg0, void *arg1, u32 arg2, s32 arg3);
void func_00006558(void);
s32 func_00007C58(void);
void func_00008360(void *arg0);
s32 func_00008510(void);
void func_00008AB8(void *arg0, void *arg1, u32 arg2, s32 arg3);
void func_00008F68(void *arg0, void *arg1, u32 arg2, s32 arg3);
s32 func_00009300(s32);
void func_000097A4(void *arg0);
s32 func_000098F0(void);
s32 func_0000992C(s32, s32, s32, s32, s32, s32);
void func_00009A38(void);
s32 func_00009ADC(void);
void func_00009DA0(void *arg0);
s32 func_00009E68(s32);
s32 func_0000A02C(s32);
void func_0000A08C(s32 arg0);
s32 func_0000A0C0();
s32 func_0000A370(s32);
s32 func_0000A4B4(s32);
s32 func_0000A73C(void);
s32 func_0000A774(s32, s32, s32);
s32 func_0000A9B0(s32);
M2C_UNK func_0000AA9C(s32);
void func_0000AAAC(void *arg0);
s32 func_0000AE54(s32);
s32 func_0000AF34(void);
s32 func_0000B2C0(s32);
s32 func_0000B484(s32, s32, s32);
void func_0000B560(void *arg0, void *arg1);
s32 func_0000B598(void *arg0);
s32 func_0000BA58(void);
s32 func_0000BA64(void);
s32 func_0000BA74(void);
void func_0000BA84(s32 arg0);
void func_0000BAF8(void *arg0);
s32 *func_0000BB14(void);
u8 *func_0000BB98(u8 *arg0, u8 *arg1, s32 arg2);
u8 *func_0000C0DC(u8 *arg0, u8 *arg1);
s32 func_0000C114(s32, s32, s32);
s32 func_0000C1F0(s32);
void func_0000CD48(void);
void func_0000CD64(void);
void func_0000CD80(void);
void func_0000CD9C(void);
void func_0000CDB8(void);
void func_0000CDD4(void);
void func_0000CDF0(void);
void func_0000CE0C(void);
void func_0000CE28(void);
void func_0000CE44(void);
void func_0000CE60(void);
s32 func_0000E568(void);
s32 func_0000F81C(s32, s32, s32, s32, s32);
void func_00010A74(void);
void func_00011484(void);
void func_00011B3C(struct Unk_func_00011B3C_0 *arg0, struct Unk_func_00011B3C_1 *arg1);
s32 func_00013294(void);
s32 func_000132B0(void);
void func_00015428(void);
void func_00015444(void);
void func_00015460(void);
void func_0001547C(void);
void func_00015498(void);
void func_000154B4(void);
void func_000154D0(void);
void func_000154EC(void);
void func_00015508(void);
void func_00015524(void);
void func_00015540(void);
void func_00015A10(s32 arg0);
void func_00015A40(void);
s32 module_start(void);
s32 module_stop(void);
int sceHttpCreateConnection(int template_id, const unsigned char *server_name, unsigned char *scheme, short unsigned int port, int keepalive);
s32 sceHttpCreateConnectionWithURL(s32 arg0, void *arg1, s32 arg2);
void sceHttpCreateRequest(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 sceHttpCreateTemplate(void *arg0, s32 arg1, s32 arg2);
s32 sceHttpDeleteConnection(s32 arg0);
s32 sceHttpDeleteRequest(s32 arg0);
s32 sceHttpDeleteTemplate(s32 arg0);
s32 sceHttpEnd(void);
s32 sceHttpGetStatusCode(s32 arg0, s32 *arg1);
s32 sceHttpInit(u32 arg0);
s32 sceHttpInitCache(u32 arg0);
int sceHttpSetMallocFunction(SceHttpMallocFunction malloc_func, SceHttpFreeFunction free_func, SceHttpReallocFunction reallc_func);
M2C_UNK sceHttpStorageClose();
M2C_UNK sceHttpStorageLseek();
s32 sceHttpsEnableOption(s32 arg0);
M2C_UNK sceKernelCpuResumeIntr();
M2C_UNK sceKernelCpuSuspendIntr();
s32 sceKernelDeleteVpl(s32);
s32 sceKernelResumeDispatchThread(s32);
s32 sceKernelSuspendDispatchThread(void);
M2C_UNK sceKernelUtilsMd5BlockInit();
M2C_UNK sceKernelUtilsMd5BlockResult();
M2C_UNK sceKernelUtilsMd5BlockUpdate();
M2C_UNK sceKernelUtilsMd5Digest();
M2C_UNK sceNetInetInetPton();
s32 sceNetInetRecv(s32, void *, u32, s32);
s32 sceNetInetSend(s32, void *, u32, s32);
M2C_UNK sceNetMemset(s32 *, M2C_UNK, M2C_UNK);
M2C_UNK sceRtcFormatRFC2822();
M2C_UNK sceRtcGetCurrentTick();
M2C_UNK sceRtcParseDateTime();
M2C_UNK sceRtcTickAddSeconds();

#endif
