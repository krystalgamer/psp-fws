#ifndef SYSCONF_PLUGIN_DECLS_H
#define SYSCONF_PLUGIN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

#ifdef __cplusplus
#include "paf.h"
#include "vsh.h"
extern "C" {
#endif

struct D_0001F31C_s {
    u8 pad0[0x8];
    volatile s32 unk8;
};

struct Unk_func_00000824_temp_a0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00006CFC_0 {
    u8 pad0[0x1D0];
    s32 unk1D0;
};

struct Unk_func_0000D604_0 {
    u8 pad0[0x1D0];
    s32 unk1D0;
};

struct Unk_func_00015F98_var_a0 {
    u8 pad0[0x4];
    struct Unk_func_00015F98_var_v0 *unk4;
};

struct Unk_func_00015F98_var_v0 {
    u8 pad0[0x4];
    void *unk4;
};

struct Unk_func_00017644_0 {
    u8 pad0[0x30];
    s32 unk30;
};

struct Unk_func_00017668_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000176C4_0 {
    u8 pad0[0x30];
    s32 unk30;
    s32 unk34;
};

struct Unk_func_00017A18_0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x2C];
    s32 unk34;
};

struct Unk_func_00017A68_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00017A70_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00017A78_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00017A80_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_00017A88_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_00017A90_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_00017A98_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00017AA0_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00017AC4_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00017AE0_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00017AFC_0 {
    u8 pad0[0x4];
    s32 unk4;
};

typedef void (*func_ptr)(void);

extern M2C_UNK D_000108D4;
extern M2C_UNK D_00012708;
extern M2C_UNK D_0001386C;
extern s32 D_00014F1C;
extern s32 D_00014F20;
extern s32 D_00015040;
extern s32 D_000155F8;
extern s32 D_00015974;
extern s32 D_00015A8C;
extern s32 D_00015A9C;
extern void *D_000181AC;
extern s32 D_00018214;
extern s32 D_00018244;
extern M2C_UNK D_000187C8;
extern s32 D_00018854;
extern func_ptr D_00018D9C[];
extern s32 D_00019820;
extern s32 D_00019830;
extern s32 D_00019F98;
extern M2C_UNK D_0001A14C;
extern M2C_UNK D_0001A160;
extern M2C_UNK D_0001A668;
extern M2C_UNK D_0001A670;
extern M2C_UNK D_0001A690;
extern M2C_UNK D_0001AEE0;
extern M2C_UNK D_0001AEFC;
extern M2C_UNK D_0001B720;
extern s32 D_0001B730;
extern s32 D_0001BEA0;
extern s32 D_0001CC14;
extern M2C_UNK D_0001CE90;
extern s32 D_0001E0EC;
extern s32 D_0001EE04;
extern struct D_0001F31C_s D_0001F31C;
extern s32 D_0001F354;
extern s32 D_0001F394;
extern s32 D_0001F3DC;
extern s32 D_0001F3F4;
extern s32 D_0001F418;
extern s32 D_0001F55C;
extern M2C_UNK D_00020874;
extern M2C_UNK D_00020B70;
extern s32 D_00021380;
extern s32 D_000214E4;
extern s32 D_00021C70;
extern M2C_UNK D_00021D24;
extern s32 D_00021E34;
extern M2C_UNK D_00022044;
extern s32 D_000222E0;
extern s32 func_0000576C;
extern M2C_UNK func_00006098;
extern s32 func_00009750;
extern M2C_UNK func_00009B00;

M2C_UNK InputDevice_PspPad_Lock(...);
M2C_UNK InputDevice_PspPad_Unlock(...);
M2C_UNK Job_Start(M2C_UNK, s32 (*)(), M2C_UNK, M2C_UNK, M2C_UNK, void (*)());
M2C_UNK _ZN11PageManager4ExitEv(void);
M2C_UNK _ZN11PageManager5ClearEv(void *self);
M2C_UNK _ZN3paf4View12PageActivateEPKc(s32);
s32 _ZN3paf4View4FindEPKc(M2C_UNK *);
M2C_UNK _ZN3paf4View6UnloadEPS0_PFvPKcE(s32, M2C_UNK *);
M2C_UNK _ZN3paf4View8PageOpenEPKcii(s32, M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK _ZN3paf4View9PageCloseEPKc(s32);
M2C_UNK _ZN3paf4View9PlaySoundEPKc(s32, M2C_UNK *);
M2C_UNK _ZN3paf5SleepEi(M2C_UNK);
s32 _ZN3paf6Module12SetInterfaceEiPv(s32, s32, s32);
s32 _ZN3paf9PhHandler11SetCallBackEiPFvPNS_8PhWidgetEPNS_7PhEventEPvES5_(s32, s32, s32, s32);
M2C_UNK _ZN3vsh10OptionMenu5CloseEPN3paf4ViewEPKcS5_(s32, s32, s32);
M2C_UNK _ZN3vsh12BusyIcon_DecEv(void);
M2C_UNK _ZN3vsh12BusyIcon_IncEv(void);
M2C_UNK _ZN3vsh12RemoveConfigEi(M2C_UNK);
s32 _ZN3vsh14GetString_BackEv(void);
s32 _ZN3vsh15GetString_EnterEv(void);
M2C_UNK _ZN3vsh25ShowButtonNavigation_BackEb(M2C_UNK);
M2C_UNK _ZN3vsh26ShowButtonNavigation_EnterEb(M2C_UNK);
M2C_UNK _ZN3vsh30SetButtonNavigationString_BackEPKw(void *, s32);
M2C_UNK _ZN3vsh31SetButtonNavigationString_EnterEPKw(void *, s32);
M2C_UNK _ZN3vsh9PowerLockC1Ei(void *, M2C_UNK);
M2C_UNK _ZN3vsh9PowerLockC1Ev(void *);
M2C_UNK _ZN3vsh9PowerLockD1Ev(void *);
M2C_UNK _ZNK3paf4View8PageRootEPKc(s32);
s32 _ZNK3paf8PhWidget8GetChildEi(s32, M2C_UNK);
M2C_UNK _ZdlPv(void *);
void func_0000015C(void);
s32 func_0000030C(s32 arg0);
void func_00000334(s32 arg0);
s32 func_00000340(s32 arg0);
void func_00000368(s32 arg0);
s32 func_000003CC(s32 arg0);
void func_000003F4(s32 arg0);
void func_000004DC(s32 arg0);
void func_000004E8(void);
void func_000004F0(void);
void func_000004F8(void);
void func_00000580(void);
s32 func_000005D8(s32, s32);
void func_000005EC(s32 arg0);
M2C_UNK func_00000610(M2C_UNK, M2C_UNK);
void func_00000684(void);
void func_000006A4(void);
void func_0000070C(void);
void func_0000073C(void);
void func_0000075C(void);
void func_0000075C_v271(void);
s32 func_00000770(void);
void func_00000824(void **arg0);
void func_00000864(void **arg0);
void func_000008C0(void **arg0, void *arg1);
s32 func_000008E0(void);
void func_00000900(void **arg0, void *arg1);
M2C_UNK func_0000091C(...);
void func_00000A60(s32 arg0);
M2C_UNK func_00000A94(...);
void func_00000B24(s32 arg0);
s32 func_00000B48(s32);
void func_00000C00(void);
void func_00000C34(void);
void func_00000DE4(void);
void func_00000E64(void);
void func_00000E78(void);
void func_00001008(void);
void func_00001028(void);
void func_00001110(void);
void func_00001954(s32 arg0, s32 arg1);
s32 func_000019A4(s32, s32, s32);
M2C_UNK func_000019CC(M2C_UNK, M2C_UNK);
s32 func_00001A14(s32, s32);
void func_00001A48(void);
s32 func_00001A58(void);
void func_00001A68(void);
void func_00001A90(void);
void func_00001AB0(void);
s32 func_00001AE4(void);
void func_00001B08(s32 arg0, s32 arg1);
M2C_UNK func_00001B58(s32, s32, s32);
void func_00001C0C(M2C_UNK **arg0);
void func_00001C1C(M2C_UNK **arg0);
s32 func_00001C44(void);
void func_00001C54(M2C_UNK **arg0);
void func_00001C64(M2C_UNK **arg0);
s32 func_00001CD0(void);
void func_000021F8(void);
void func_00002294(void);
void func_0000229C(void);
s32 func_00002454(void);
void *func_0000294C(void **arg0);
void func_000034E4(void);
void func_000034EC(s32 arg0);
void func_0000377C(s32 arg0);
void func_000037C4(void);
void func_00003888(void);
void func_000038AC(s32 arg0, s32 arg1);
M2C_UNK func_00003990(...);
void func_00003A0C(s32 arg0, s32 arg1);
s32 func_00003A5C(s32, s32, s32);
M2C_UNK func_00003BCC(s32, s32, s32);
void func_0000407C(void);
void func_00004084(s32 arg0);
void func_00004128(s32 arg0);
void func_000043B4(void);
void func_000046F4(void);
s32 func_00004ACC(s32);
s32 func_00004D34(s32, s32);
void func_00004DB0(void);
void func_00004DD0(void);
void func_00004E4C(s32 arg0);
M2C_UNK func_00004FCC(M2C_UNK, M2C_UNK);
void func_0000502C_v260(void);
void func_00005048(void);
void func_00005068(void);
s32 func_000050A0(void);
void func_000050E8(void);
void func_00005280(void);
void func_0000528C(void);
void func_000052A4(void);
void func_0000530C(void);
void func_00005328(void);
void func_00005464(void);
s32 func_00005494(s32 arg0);
void func_00005650(void);
void func_000056B4(void);
void func_00005734(void);
s32 func_000057C0(void);
s32 func_00005814(void);
void func_00005DBC(void);
void func_00006064(void);
s32 func_000067BC_v260(s32, s32);
void func_0000680C(void);
void func_00006858(void);
s32 func_000068C8(s32, s32);
void func_000069F8(void);
void func_00006A00(s32 arg0);
s32 func_00006A10(void *arg0);
M2C_UNK func_00006AB4(M2C_UNK, M2C_UNK);
void func_00006B30(void);
void func_00006B50(void);
void func_00006C90(s32 arg0);
s32 func_00006CFC(struct Unk_func_00006CFC_0 *arg0);
void func_00006D7C(void);
void func_00006F58(void *arg0);
void func_00007088(void);
void func_00007438(s32 *arg0, s32 arg1);
s32 func_000074D0(s32);
s32 func_00007658(s32, s32);
void func_000076D4(void);
void func_000076F4(void);
void func_000079C4(void);
void func_000079CC(s32 arg0);
void func_00007EB4(void);
M2C_UNK func_00008DE0(M2C_UNK);
void func_0000930C(void);
void func_00009408(void);
s32 func_00009458(void);
s32 func_00009478(s32 arg0);
void func_000094F0(void);
void func_000094FC(void);
void func_00009518(void);
void func_000096BC(void);
void func_00009718(void);
s32 func_00009828(s32 arg0);
void func_00009974(void);
void func_00009A78(void);
void func_00009AC8(void);
s32 func_0000A590(s32, s32);
void func_0000A60C(void);
void func_0000A62C(void);
void func_0000A748(void);
void func_0000A7F4(s32 arg0);
s32 func_0000A81C(s32);
s32 func_0000A96C(void);
M2C_UNK func_0000A9E4(M2C_UNK, M2C_UNK);
void func_0000A9F0(s32 arg0);
void func_0000AA60(void);
void func_0000AA80(void);
s32 func_0000ADCC(s32, s32);
void func_0000AE48(void);
void func_0000AE68(void);
void func_0000B74C(void);
void func_0000B79C(s32 arg0);
s32 func_0000B82C(s32, s32);
s32 func_0000B870(s32, s32);
void func_0000B8A8(void);
void func_0000B8C8(void);
void func_0000BB8C(void);
M2C_UNK func_0000BC9C(M2C_UNK, M2C_UNK);
void func_0000BD18(void);
void func_0000BD38(void);
void func_0000C5B8(void);
void func_0000C5C0(s32 arg0);
void func_0000C6E0(void);
s32 func_0000C718(void);
void func_0000C9FC(void);
void func_0000CB74(void);
void func_0000CB7C(void);
void func_0000CE70(void);
void func_0000CE78(s32 arg0);
void func_0000D108(s32 arg0);
s32 func_0000D194(void *arg0);
void func_0000D1F4(void);
void func_0000D3BC(void);
void func_0000D3F4(void);
s32 func_0000D604(struct Unk_func_0000D604_0 *arg0);
void func_0000D864(void);
void func_0000DA24(void);
s32 func_0000DA5C(void);
void func_0000DA7C(void);
void func_0000DA94(s32 arg0);
s32 func_0000DAEC(void);
void func_0000DED0(void);
void func_0000DEF4(...);
s32 func_0000DFD8(s32);
void func_0000E02C(void);
void func_0000E038(void);
void func_0000E0D4(void);
s32 func_0000E680(s32);
void func_0000E6A4(void *arg0);
void func_0000E700(void *arg0);
s32 func_0000EAF0(s32, s32, s32, s32);
void func_0000EBEC(...);
s32 func_0000EDB4(void *arg0);
s32 func_0000EDBC(void *arg0);
s32 func_0000EDC4(void *arg0);
s32 func_0000EDCC(void *arg0);
s32 func_0000EDD4(void *arg0);
s32 func_0000EDDC(void *arg0);
s32 func_0000EDE4(void *arg0);
void func_0000EDEC(void *arg0, s32 *arg1);
void func_0000EE2C(void *arg0);
void func_0000EE48(void *arg0);
M2C_UNK func_0000EF58(...);
void func_0000F560(s32 *arg0, s32 arg1);
s32 func_0000F5F8(s32);
void func_0000F64C(void);
void func_0000F7C0(void);
void func_0000F8F8(void);
s32 func_0000FDF8(void);
void func_0000FF64(void);
s32 func_000110A0(void);
s32 func_000110F0(void);
void func_00011128(void);
void func_00011144(void);
void func_00011484(void);
void func_000117FC(void);
void func_00011A60(void);
M2C_UNK func_00013590(M2C_UNK, M2C_UNK);
void func_00013774(void);
void func_00013794(void);
void func_00013C8C(void);
s32 func_00013CC8(s32, s32);
void func_00013D44(void);
void func_00013D64(void);
void func_00013D68(void);
s32 func_00013E44(s32, s32);
void func_00013EC0(void);
void func_00013EE0(void);
M2C_UNK func_000140F0(M2C_UNK, M2C_UNK);
void func_0001416C(void);
void func_0001418C(void);
void func_00014338(void);
s32 func_00014640(s32, s32);
void func_000146BC(void);
void func_000146DC(void);
void func_0001494C(void **arg0);
void func_00014E24(s32 arg0);
M2C_UNK func_00015314(M2C_UNK, M2C_UNK);
void func_00015390(void);
void func_000153B0(void);
void func_000155D8(void);
void func_00015C5C(void);
M2C_UNK func_00015C8C(M2C_UNK, M2C_UNK);
void func_00015D08(void);
void func_00015D28(void);
void func_00015F98(void **arg0);
M2C_UNK func_0001604C(...);
s32 func_00016A7C(s32, s32);
void func_00016B5C(void);
void func_00016B78(...);
void func_00016BEC(s32 arg0);
s32 func_00016DD4(s32);
void func_000174C8(s32 *arg0, s32 arg1);
M2C_UNK func_00017560(...);
void func_00017644(struct Unk_func_00017644_0 *arg0);
void func_00017668(struct Unk_func_00017668_0 *arg0);
s32 func_00017694(s32, s32);
void func_000176C4(struct Unk_func_000176C4_0 *arg0);
s32 func_00017728(...);
s32 func_00017A18(struct Unk_func_00017A18_0 *arg0);
s32 func_00017A68(struct Unk_func_00017A68_0 *arg0);
s32 func_00017A70(struct Unk_func_00017A70_0 *arg0);
s32 func_00017A78(struct Unk_func_00017A78_0 *arg0);
s32 func_00017A80(struct Unk_func_00017A80_0 *arg0);
s32 func_00017A88(struct Unk_func_00017A88_0 *arg0);
s32 func_00017A90(struct Unk_func_00017A90_0 *arg0);
s32 func_00017A98(struct Unk_func_00017A98_0 *arg0);
void func_00017AA0(struct Unk_func_00017AA0_0 *arg0, s32 *arg1);
void func_00017AC4(struct Unk_func_00017AC4_0 *arg0);
void func_00017AE0(struct Unk_func_00017AE0_0 *arg0);
void func_00017AFC(struct Unk_func_00017AFC_0 *arg0);
void func_00017B18(void *arg0);
void func_00017B7C(void);
M2C_UNK func_00017BD4(...);
s32 module_stop(void);
s32 sceKernelCreateEventFlag(void *, u32, u32, void *);
s32 sceKernelDelayThread(u32);
s32 sceKernelDeleteEventFlag(s32);
M2C_UNK sceKernelPowerLock(M2C_UNK);
M2C_UNK sceKernelPowerTick(M2C_UNK);
M2C_UNK scePaf_39E62C88(s32, M2C_UNK *, M2C_UNK, M2C_UNK);
s32 scePaf_503585A4(s32, M2C_UNK);
s32 scePaf_5E4447F6(s32);
M2C_UNK scePaf_6428A1DE(s32, M2C_UNK *);
M2C_UNK scePaf_648CA0C5(...);
M2C_UNK scePaf_82CF97B0(M2C_UNK);
M2C_UNK scePaf_8B38372A(s32, M2C_UNK *);
M2C_UNK scePaf_A013540A(s32, M2C_UNK *);
s32 scePaf_C1B0AA0D(s32);
M2C_UNK scePaf_CD216C47(s32);
M2C_UNK scePaf_F5001144(void *);
s32 sceUsbActivate(u32);
s32 sceUsbDeactivate(void);
s32 sceUsbStart(void *, u32, void *);
s32 sceUsbStop(void *, u32, void *);
M2C_UNK sceUsbstorBootRegisterNotify(s32);
M2C_UNK sceUsbstorBootSetCapacity(M2C_UNK);
M2C_UNK sceUsbstorBootUnregisterNotify(s32);
M2C_UNK sceVshBridge_C62E0B0D(s32);
M2C_UNK sceVshCommonGui_11C48509(void *, s32);
M2C_UNK sceVshCommonGui_2EBB5C2B(void *, s32);
s32 sceVshCommonGui_30FA68C3(...);
M2C_UNK sceVshCommonGui_3BE24617(s32, s32, s32);
M2C_UNK sceVshCommonGui_891DD627(M2C_UNK);
M2C_UNK sceVshCommonGui_E4ED451E(...);
s32 sceVshCommonGui_EC899EBE(...);
M2C_UNK sceVshCommonGui_F5A16B4D(M2C_UNK);
M2C_UNK sceVshCommonUtil_0587F20C(M2C_UNK *, M2C_UNK, s32);
M2C_UNK sceVshCommonUtil_094B0219(void *, M2C_UNK);
M2C_UNK sceVshCommonUtil_21EF453A(M2C_UNK *, s32);
M2C_UNK sceVshCommonUtil_53120F49(s32, s32);
M2C_UNK sceVshCommonUtil_8584376D(M2C_UNK *, s32);
M2C_UNK sceVshCommonUtil_9E42444E(M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK sceVshCommonUtil_D24DD449(void *);
M2C_UNK sceVshCommonUtil_DA88D006(M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK sceVshCommonUtil_F6567B66(M2C_UNK *, M2C_UNK, s32);
M2C_UNK sce_paf_private_free2(void *);
M2C_UNK sce_paf_private_printf(M2C_UNK *, M2C_UNK *, const char *);
s32 sce_paf_private_strlen(s32);
s32 sce_paf_private_wcslen(s32);
M2C_UNK vshUsbstorMsUnregisterEventFlag(s32);
M2C_UNK vsh_1122D59B(...);
M2C_UNK vsh_125B1B72(s32, s32);
M2C_UNK vsh_2695A5B8(M2C_UNK);
M2C_UNK vsh_3E00F3B4(...);
M2C_UNK vsh_4A619A1D(...);
M2C_UNK vsh_53120F49(s32, s32);
M2C_UNK vsh_7485813E(M2C_UNK);
M2C_UNK vsh_8419AC80(...);
M2C_UNK vsh_8F76CA2A(...);
M2C_UNK vsh_C7D1D06C(...);

#ifdef __cplusplus
}
#endif

#endif
