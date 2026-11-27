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

struct Unk_D_00013F20 {
    u8 pad0[0x4];
    s32 unk4;
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

extern s32 D_00008220;
extern u32 D_00008240;
extern s32 D_00008B34;
extern M2C_UNK D_00011DD4;
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

s32 func_00000A30(void *arg0, s32 arg1);
s32 func_00000B54(s32, s32, s32);
s32 func_00000CB0(void);
s32 func_00000D54(s32, s32, s32);
s32 func_00000D60(s32, s32, s32, s32);
s32 func_00000E28(s32);
s32 func_00000F18(s32, s32);
s32 func_00000FD0(void);
s32 func_00000FF8(void);
s32 func_00001038(s32, s32);
s32 func_00001098(s32, s32);
s32 func_000010EC(void);
s32 func_000016E0(struct Unk_func_000016E0_0 *arg0, s32 arg1);
s32 func_00001BB0(s32 arg0);
s32 func_00001BC0(void);
s32 func_000020CC(s32 *arg0);
s32 func_00002204(s32);
s32 func_0000228C(void);
void func_0000235C(s32 arg0, s32 arg1);
s32 func_00002388(s32, s32, s32);
s32 func_00002480(s32);
s32 func_00002514(s32 arg0);
s32 func_000038E4(void);
void func_00003B30(s32 arg0);
s32 func_00003C64(void);
s32 func_00004424(s32 arg0);
s32 func_00006304(s32 arg0);
void func_000070C0(s32 *arg0);
s32 func_00007324(void);
s32 func_0000741C(s32, s32);
u8 *func_000074D0(u8 *arg0, u8 *arg1, s32 arg2);
u8 *func_000077F8(u8 *arg0, u8 *arg1);
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
s32 sceNetApctlAddHandler(s32 arg0, s32 arg1);
s32 sceNetApctlAddInternalHandler(s32 arg0, s32 arg1);
void sceNetApctlConnect(s32 arg0);
void sceNetApctlDelHandler(s32 arg0);
void sceNetApctlDelInternalHandler(s32 arg0);
void sceNetApctlDisconnect(void);
void sceNetApctlGetBSSDescEntry(s32 arg0, s32 arg1, s32 arg2);
void sceNetApctlGetBSSDescEntryUser(s32 arg0, s32 arg1, s32 arg2);
void sceNetApctlGetBSSDescIDList(s32 arg0, s32 arg1);
void sceNetApctlGetBSSDescIDListUser(s32 arg0, s32 arg1);
void sceNetApctlGetInfo(s32 arg0, s32 arg1);
void sceNetApctlGetState(void);
int sceNetApctlInit(SceSize stacksize, int prio);
void sceNetApctlScan(void);
void sceNetApctlScanUser(void);
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
