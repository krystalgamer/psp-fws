#ifndef PSPNET_AP_DIALOG_DUMMY_DECLS_H
#define PSPNET_AP_DIALOG_DUMMY_DECLS_H

#include "common.h"
#include "m2c_macros.h"

/* devkit 0.6.0 DWARF (tools/dwarf_types.py) */
struct SceNetApDialogDummyParam;
struct SceNetApDialogDummyStateInfo;
struct pppoe;
struct static_ip;
union SceNetCnfAPCnfEntry;
union ip_opt;

struct static_ip {
    char ip_address[16];
    char netmask[16];
    char default_route[16];
} /* size 0x30 */;

struct pppoe {
    char auth_name[128];
    char auth_key[128];
} /* size 0x100 */;

typedef short unsigned int SceUShort16;

enum SceNetApctlState {
    SCE_NET_APCTL_STATE_Detached = 0,
    SCE_NET_APCTL_STATE_Disconnected = 1,
    SCE_NET_APCTL_STATE_Scanning = 2,
    SCE_NET_APCTL_STATE_Joinning = 3,
    SCE_NET_APCTL_STATE_IPObtaining = 4,
    SCE_NET_APCTL_STATE_IPObtained = 5,
} /* size 0x4 */;

enum SceNetApDialogDummyState {
    SceNetApDialogDummyState_Initialized = 0,
    SceNetApDialogDummyState_Connecting = 1,
    SceNetApDialogDummyState_Connected = 2,
    SceNetApDialogDummyState_Disconnecting = 3,
    SceNetApDialogDummyState_Disconnected = 4,
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

typedef char SceChar8;

typedef unsigned int SceUInt32;

union ip_opt {
    struct static_ip static_ip;
    struct pppoe pppoe;
} /* size 0x100 */;

struct SceNetApDialogDummyStateInfo {
    enum SceNetApDialogDummyState state;
    int error_code;
} /* size 0x8 */;

union SceNetCnfAPCnfEntry {
    SceChar8 apcnf_name[64];
    SceChar8 ssid[33];
    SceUInt32 auth_proto;
    SceChar8 wep_key[13];
    SceUInt32 order_of_connection;
    SceUInt32 how_to_set_ip;
    SceChar8 ip_address[16];
    SceChar8 netmask[16];
    SceChar8 default_route[16];
    SceUInt32 dns_flag;
    SceChar8 primary_dns[16];
    SceChar8 secondary_dns[16];
    SceChar8 dhcp_hostname[128];
    SceChar8 auth_name[128];
    SceChar8 auth_key[128];
    SceUInt32 http_proxy_flag;
    SceChar8 http_proxy_server[128];
    SceUInt32 http_proxy_port;
} /* size 0x80 */;

struct SceNetApDialogDummyParam {
    char ssid[33];
    unsigned int auth_proto;
    char wep_key[13];
    unsigned int how_to_set_ip;
    union ip_opt ip_opt;
    unsigned int dns_flag;
    char primary_dns[16];
    char secondary_dns[16];
    unsigned int http_proxy_flag;
    char http_proxy_server[128];
    SceUShort16 http_proxy_port;
} /* size 0x1E8 */;


s32 module_start(void);
s32 module_stop(void);
int sceNetApDialogDummyTerm(void);

#endif
