#ifndef PSPNET_ADHOCCTL_DECLS_H
#define PSPNET_ADHOCCTL_DECLS_H

#include "common.h"
#include "m2c_macros.h"

/* devkit 0.6.0 DWARF (tools/dwarf_types.py) */
struct SceNetAdhocctlIBSSName;
struct SceNetAdhocctlLobbyId;
struct SceNetAdhocctlUsername;
struct SceNetConfig80211BssDesc;
struct SceNetConfig80211BssDescList;
struct SceNetConfig80211GameModeDesc;
struct SceNetConfig80211JoinParam;
struct SceNetConfig80211ScanParam;
struct SceNetEtherAddr;
struct adhocctl_internal_info;
struct adhocctl_netcnf_ibss_param;
struct adhocctl_realtime_info;
struct adhocctl_ssid;

enum SceNetAdhocctlState {
    SCE_NET_ADHOCCTL_STATE_DISCONNECTED = 0,
    SCE_NET_ADHOCCTL_STATE_JOINING_LOBBY_IBSS = 1,
    SCE_NET_ADHOCCTL_STATE_JOINING_GAME_IBSS = 2,
} /* size 0x4 */;

typedef unsigned char SceUChar8;

typedef unsigned char u_int8_t;

typedef unsigned int u_int;

typedef short unsigned int u_int16_t;

typedef unsigned int u_int32_t;

typedef long long unsigned int u_int64_t;

typedef short unsigned int SceUShort16;

typedef unsigned int SceUInt32;

struct SceNetAdhocctlIBSSName {
    SceUChar8 data[8];
} /* size 0x8 */;

struct SceNetAdhocctlLobbyId {
    SceUChar8 data[9];
    int type;
} /* size 0x10 */;

struct SceNetAdhocctlUsername {
    SceUChar8 data[128];
} /* size 0x80 */;

struct SceNetEtherAddr {
    SceUChar8 data[6];
} /* size 0x6 */;

struct adhocctl_ssid {
    u_int8_t data[33];
} /* size 0x21 */;

struct SceNetConfig80211BssDesc {
    SceUChar8 bssid[6];
    SceUChar8 ssidlen;
    SceUChar8 ssid[32];
    int bsstype;
    int beacon;
    int dtim;
    int timestamp;
    int localtime;
    SceUChar8 channel;
    SceUShort16 atim;
    SceUShort16 capinfo;
    SceUChar8 rate[8];
    SceUChar8 rssi;
} /* size 0x4C */;

struct SceNetConfig80211GameModeDesc {
    SceUChar8 bssid[6];
    SceUChar8 ssidlen;
    SceUChar8 ssid[32];
    SceUChar8 channel;
    SceUChar8 mcastaddr[6];
    SceUShort16 keysize;
    SceUChar8 enckey[16];
    SceUShort16 maxpdu;
    SceUChar8 pwrsave;
    SceUChar8 mystaid;
    SceUChar8 maxsta;
    SceUChar8 ifstype;
    SceUChar8 ifs0;
    SceUChar8 ifsslot;
    SceUChar8 bcastdisable;
    SceUShort16 aggregation;
    SceUShort16 awakeperiod;
    SceUShort16 sleepperiod;
} /* size 0x50 */;

struct SceNetConfig80211ScanParam {
    int bsstype;
    SceUChar8 bssid[6];
    SceUChar8 ssidlen;
    SceUChar8 ssid[32];
    int scantype;
    int probedelay;
    SceUChar8 channel[14];
    int minchantime;
    int maxchantime;
} /* size 0x4C */;

struct adhocctl_internal_info {
    int evfid;
    int tid;
    int sid;
    enum SceNetAdhocctlState state;
    struct SceNetAdhocctlIBSSName game_name;
    struct SceNetAdhocctlLobbyId lobby_id;
    int channel;
    struct SceNetAdhocctlIBSSName lobby_name;
    struct SceNetAdhocctlUsername username;
} /* size 0xB4 */;

struct adhocctl_realtime_info {
    int type;
    int num;
    struct SceNetEtherAddr member[16];
    u_int8_t enckey[16];
    u_int timeout;
    int flag;
} /* size 0x80 */;

struct adhocctl_netcnf_ibss_param {
    struct SceNetAdhocctlIBSSName lobby_name;
    u_int32_t lobby_name_flag;
    u_int32_t channel;
    u_int32_t channel_flag;
} /* size 0x14 */;

struct SceNetConfig80211JoinParam {
    struct SceNetConfig80211BssDesc bss;
    int timeout;
    int probedelay;
    SceUChar8 rate[8];
    int disablebcntx;
} /* size 0x60 */;

struct SceNetConfig80211BssDescList {
    struct SceNetConfig80211BssDescList *next;
    struct SceNetConfig80211BssDesc bssdesc;
} /* size 0x50 */;

struct Unk_func_00002014_0 {
    u8 pad0[0x8];
    s32 unk8;
};

extern s32 D_00005960;
extern s32 D_00005B50;
extern s32 D_00005B54;
extern M2C_UNK D_00005BE4;
extern M2C_UNK D_0000610C;
extern s32 D_000062A0;
extern s32 D_000062A4;
extern s32 D_000062B0;
extern s32 D_000062BC;
extern M2C_UNK D_00006361;
extern M2C_UNK D_000063F4;
extern s32 D_00006400;

s32 _sce_pspnet_adhocctl_get_state(s32 *arg0);
void func_0000155C(s32 arg0, s32 arg1);
s32 func_000018F8(void);
s32 func_00001BD4(s32, s32, s32, s32);
void func_00002014(struct Unk_func_00002014_0 *arg0);
s32 func_00002068(s32, s32, s32, s32);
void func_00002280(s32 arg0, s32 arg1);
s32 func_000022A4(void *arg0);
s32 func_000023B4(s32 *arg0);
void func_00002984(s32 arg0);
s32 func_00002A24(s32, s32, s32);
s32 func_000030BC(s32 *arg0);
s32 func_00003360(void);
s32 func_0000338C(void);
void func_00003958(s32 arg0);
s32 func_00003A00(s32, s32, s32);
M2C_UNK *func_00004938(void);
s32 func_0000497C(s32, s32);
u8 *func_00004A30(u8 *arg0, u8 *arg1, s32 arg2);
void func_00004AD0(s32 arg0, s32 arg1);
u8 *func_00004D58(u8 *arg0, u8 *arg1);
void func_00004E78(void);
s32 func_00004EB4(void);
void func_00004F10(s32 arg0);
void func_00005870(void);
void func_00005918(s32 arg0);
char *get_taginfo(u_int8_t tag0, void *buf, int buflen, int *datalen);
s32 module_start(void);
s32 module_stop(void);
s32 sceKernelCheckThreadStack(void);
s32 sceKernelDeleteSema(u32);
s32 sceKernelGetThreadId(void);
s32 sceKernelSignalSema(s32, s32);
s32 sceKernelWaitSema(s32, s32, void *);
s32 sceNetAdhocctlGetAdhocId(void *arg0);
s32 sceNetAdhocctlGetState(s32 *arg0);
s32 sceNetAdhocctlTerm(void);
void sceNetAdhocctlRequestSuspend(void);
M2C_UNK sceNetMemset(s32, M2C_UNK, M2C_UNK);
M2C_UNK sceNetConfigSetIfEventFlag(M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK sceNetConfigDownInterface(M2C_UNK *);
s32 scePowerRequestSuspend(void);
M2C_UNK sceWlanDevDetach();

#endif
