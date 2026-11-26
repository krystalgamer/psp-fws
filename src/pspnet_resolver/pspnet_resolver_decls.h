#ifndef PSPNET_RESOLVER_DECLS_H
#define PSPNET_RESOLVER_DECLS_H

#include "common.h"
#include "m2c_macros.h"

/* devkit 0.6.0 DWARF (tools/dwarf_types.py) */
struct SceKernelSysClock;
struct SceNetInetInAddr;
struct SceNetInetSockaddrIn;
struct _sce_pspnet_resolver_ctx_list;
struct _sce_pspnet_resolver_dns_header;

typedef unsigned int SceUInt32;

typedef unsigned int u_int;

typedef unsigned int size_t;

enum _sce_pspnet_resolver_flag {
    _SCE_PSPNET_RESOLVER_NTOA = 0,
    _SCE_PSPNET_RESOLVER_ATON = 1,
} /* size 0x4 */;

typedef short unsigned int u_int16_t;

typedef unsigned char SceUChar8;

typedef unsigned int SceUInt;

typedef unsigned char u_int8_t;

typedef short unsigned int SceUShort16;

typedef char SceChar8;

typedef unsigned int u_int32_t;

struct SceNetInetInAddr {
    SceUInt32 s_addr;
} /* size 0x4 */;

struct _sce_pspnet_resolver_ctx_list {
    int rid;
    struct _sce_pspnet_resolver_ctx_list *next;
    void *buf;
    size_t buflen;
    int sockid;
    int stopped;
    int resolving;
} /* size 0x1C */;

struct SceKernelSysClock {
    SceUInt low;
    SceUInt hi;
} /* size 0x8 */;

struct _sce_pspnet_resolver_dns_header {
    u_int16_t id;
    u_int8_t rd : 1;
    u_int8_t tc : 1;
    u_int8_t aa : 1;
    u_int8_t opcode : 4;
    u_int8_t qr : 1;
    u_int8_t rcode : 4;
    u_int8_t z : 3;
    u_int8_t ra : 1;
    u_int16_t qdcount;
    u_int16_t ancount;
    u_int16_t nscount;
    u_int16_t arcount;
} /* size 0xC */;

struct SceNetInetSockaddrIn {
    SceUChar8 sin_len;
    SceUChar8 sin_family;
    SceUShort16 sin_port;
    struct SceNetInetInAddr sin_addr;
    SceChar8 sin_zero[8];
} /* size 0x10 */;

extern s32 D_00001F74;
extern s32 D_00001F78;
extern M2C_UNK D_000022B1;
extern s32 D_00002340;
extern s32 D_00002344;

int _sce_pspnet_resolver_delete_ctx(int id);
struct _sce_pspnet_resolver_ctx_list *_sce_pspnet_resolver_get_resolver_ctx(int id, struct _sce_pspnet_resolver_ctx_list **prev_ptr);
s32 _sce_pspnet_resolver_init(void);
int _sce_pspnet_resolver_net_init(void);
int _sce_pspnet_resolver_strncasecmp(const char *s1, const char *s2, size_t len);
s32 _sce_pspnet_resolver_term(void);
int create_query_message(enum _sce_pspnet_resolver_flag flag, const char *hostname, char *buf, size_t *buflen, u_int16_t *id);
s32 func_0000055C(void);
s32 func_000005B0(void);
s32 func_0000060C(s32);
s32 func_0000065C(void);
s32 func_000006B0(void);
s32 func_0000070C(s32);
s32 func_00000DE8(void);
s32 func_00000E2C(void);
s32 func_00000F64(void);
s32 func_00000FA8(void);
M2C_UNK *func_00001BC0(void);
s32 func_00001C04(s32, s32);
u8 *func_00001CB8(u8 *arg0, u8 *arg1, s32 arg2);
void func_00001D58(s32 arg0, s32 arg1);
u8 *func_00001FE0(u8 *arg0, u8 *arg1);
int get_domain_name(const char *src, const char *src_border, char *dst, char **dst_border, const char *buf_top, const char *buf_border);
s32 module_start(void);
s32 module_stop(void);
int parse_dns_header(const char **top_ptr, const char *border, u_int16_t id, u_int16_t *qdcount, u_int16_t *ancount, int *tryagain);
s32 sceKernelCheckThreadStack(void);
int sceNetResolverCreate(int *rid, void *buf, size_t buflen);
s32 sceNetResolverDelete(s32 arg0);
int sceNetResolverInit(void);
int sceNetResolverStartAtoN(int rid, const struct SceNetInetInAddr *addr, char *hostname, size_t hostname_len, u_int timeout, int retry);
int sceNetResolverStartNtoA(int rid, const char *hostname, struct SceNetInetInAddr *addr, u_int timeout, int retry);
int sceNetResolverStop(int rid);
s32 sceNetResolverTerm(void);
int send_query_message(struct _sce_pspnet_resolver_ctx_list *entry, const char *buf, size_t buflen, const struct SceNetInetInAddr *server, u_int timeout);
int set_domain_name(char **top_ptr, char *border, const char *hostname);
int skip_question_section(const char **top_ptr, const char *border, const char *buf_top, const char *qname, const char *qname_border, u_int16_t qdcount);

#endif
