#ifndef UPDATE_PLUGIN_DECLS_H
#define UPDATE_PLUGIN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_000002A4_temp_v0 {
    u8 pad0[0x61];
    u8 unk61;
};

struct Unk_func_00002360_temp_v0 {
    u8 pad0[0x4];
    M2C_UNK (*unk4)(M2C_UNK *, M2C_UNK);
};

struct Unk_func_0000292C_temp_v0 {
    u8 pad0[0x10];
    M2C_UNK (*unk10)(void (*)(s32));
};

struct Unk_func_00002960_temp_v0 {
    u8 pad0[0xC];
    M2C_UNK (*unkC)(M2C_UNK *, M2C_UNK *, M2C_UNK);
};

struct Unk_func_00002FE4_1 {
    u8 pad0[0x8];
    u8 unk8;
};

struct Unk_func_00003358_temp_v0 {
    u8 pad0[0x84];
    u8 unk84;
};

struct Unk_func_00004E0C_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00004F5C_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0000553C_0 {
    u8 pad0[0x58];
    s32 unk58;
};

struct Unk_func_00005B74_0 {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 unk60;
};

struct Unk_func_00005BA4_0 {
    u8 pad0[0x5C];
    s32 unk5C;
};

struct Unk_func_00005CA0_0 {
    u8 pad0[0x61];
    u8 unk61;
    u8 pad62[0x1E];
    s32 unk80;
};

struct Unk_func_00005DD4_temp_v0 {
    u8 pad0[0x7C];
    s32 (*unk7C)();
};

struct Unk_func_00006160_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_ret_func_00005364 {
    u8 pad0[0x40];
    u8 unk40;
    u8 pad41[0x3];
    s32 unk44;
    u8 pad48[0x4];
    s32 unk4C;
    u8 pad50[0x34];
    s8 unk84;
};

struct Unk_vt_func_0000086C_temp_v0 {
    u8 pad0[0x70];
    M2C_UNK (*unk70)(void **, M2C_UNK, M2C_UNK);
};

typedef void (*func_ptr)(void);

extern M2C_UNK D_00005224;
extern M2C_UNK D_000059F8;
extern M2C_UNK D_00005BB0;
extern M2C_UNK D_00006114;
extern s32 D_00006298;
extern s32 D_00006364;
extern func_ptr D_00007280[];
extern s32 D_000073BC;
extern s32 D_0000751C;
extern M2C_UNK D_00007520;
extern s32 D_00007538;
extern M2C_UNK D_000075BC;
extern s32 D_000076BC;
extern u8 D_000076C8;
extern u8 D_000076C9;
extern s32 D_000076CC;
extern s32 D_000076DC;
extern M2C_UNK D_00007788;
extern s32 D_00007DF8;
extern s32 D_00007EBC;
extern s32 D_00007EC0;
extern s32 D_00007EC4;
extern u8 D_00007EC8;
extern u8 D_00007EC9;
extern s32 D_00007ECC;
extern s8 D_00007ED0;
extern s32 D_00007EDC;
extern s32 D_0000843C;
extern u8 D_00008448;
extern u8 D_00008449;
extern s32 D_0000844C;
extern M2C_UNK D_00008454;
extern s32 D_0000845C;
extern M2C_UNK D_00008474;
extern s8 D_00008564;
extern s32 D_00008570;
extern s8 D_00008584;
extern s8 D_00008586;
extern M2C_UNK func_00000D8C;
extern s32 func_00000F94;
extern s32 func_00001040;
extern s32 func_000011A8;
extern s32 func_00001290;
extern M2C_UNK func_00001328;
extern s32 func_00001380;
extern M2C_UNK func_000016A4;
extern M2C_UNK func_0000175C;
extern M2C_UNK func_00001940;
extern M2C_UNK func_00001E3C;
extern M2C_UNK func_0000231C;
extern s32 func_000025CC;
extern s32 func_00002614;
extern s32 func_0000269C;
extern M2C_UNK func_00002870;

M2C_UNK InputDevice_PspPad_Lock();
M2C_UNK InputDevice_PspPad_Unlock();
M2C_UNK Job_Start(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *);
s32 _ZN3paf4View4FindEPKc(M2C_UNK *);
M2C_UNK _ZN3paf6Module12SetInterfaceEiPv(s32, M2C_UNK, M2C_UNK *);
M2C_UNK _ZN3paf6ModuleD1Ev(s32);
void **_ZN3paf8PhWidget9FindChildEPKci(s32, M2C_UNK *, M2C_UNK);
M2C_UNK _ZN3paf9PhHandler11KillTimerCBEi(s32, M2C_UNK);
M2C_UNK _ZN3paf9PhHandler11SetCallBackEiPFvPNS_8PhWidgetEPNS_7PhEventEPvES5_(s32, M2C_UNK, void (*)(s32, void *), M2C_UNK);
M2C_UNK _ZN3vsh12BusyIcon_DecEv();
M2C_UNK _ZN3vsh12BusyIcon_IncEv();
M2C_UNK _ZN3vsh13Infobar_CloseEb(M2C_UNK);
M2C_UNK _ZN3vsh13MessageDialog10HideDeleteEv(s32);
s32 _ZN3vsh15GetString_EnterEv();
s32 _ZN3vsh16GetString_CancelEv();
M2C_UNK _ZN3vsh25ShowButtonNavigation_BackEb(M2C_UNK);
M2C_UNK _ZN3vsh30SetButtonNavigationString_BackEPKw(void *, s32);
M2C_UNK _ZN3vsh31SetButtonNavigationString_EnterEPKw(void *, s32);
void *_ZNK3paf4View12GetInterfaceEi(s32, M2C_UNK);
M2C_UNK _ZdlPv(s32);
void func_0000015C(s32 arg0);
s32 func_00000180(void);
void func_00000210(void);
void func_00000214_v250(void);
void func_00000258(void);
void func_0000025C(void);
void func_000002A4(void);
void func_00000314(void);
void func_00000320(s32 arg0);
void func_0000086C(s32 arg0);
void func_000008A4(void);
void func_000008C4(void);
s32 func_00000AB4(s32, s32);
void func_00000F5C(void);
void func_00000FF4(void);
s32 func_0000142C(s32, s32);
void func_00001714(void);
void func_000017B4(s32 arg0);
void func_000018C0(s32 arg0);
s32 func_00001A40(s32, s32);
void func_00001C20(void);
void func_00001C64(s32 arg0);
void func_00001CA4(void);
s32 func_00001D14(void);
void func_00001D54(void);
void func_00001DD8(void);
void func_00001DDC(void);
void func_00001DE0(s32 arg0, void *arg1);
void func_00001E88(s32 arg0);
M2C_UNK func_00001EB4(s32, s32);
void func_00001F10(void);
void func_00001FD0(s32 arg0);
s32 func_00002100(void);
s32 func_00002128(void);
void func_0000214C(s32 arg0);
void func_0000217C(void);
s32 func_00002188(void);
s32 func_00002204(s32, s32);
void func_0000226C(void);
void func_0000228C(void);
void func_000022C0(void);
void func_00002360(s32 arg0);
void func_000023E8(void);
void func_000023F8(void);
void func_00002440(void);
s32 func_00002654(void);
s32 func_0000268C(void);
s32 func_00002730(void);
void func_00002770(void);
void func_000027B8(s32 arg0);
void func_00002824(s32 arg0);
void func_0000283C(void);
void func_00002858(void);
void func_00002870_v152(s32 arg0);
void func_00002874_v150(s32 arg0);
s32 func_000028A8(s32);
void func_000028D4(s32 arg0);
void func_0000292C(s32 arg0);
void func_00002960(s32 arg0);
void func_000029A0(void);
void *func_00002C28(void **arg0);
void func_00002FE4(s32 arg0, struct Unk_func_00002FE4_1 *arg1);
void func_00003084(s32 arg0);
void func_00003358(s32 arg0);
void func_000033B8(s32 arg0);
M2C_UNK func_00003408(M2C_UNK, M2C_UNK);
void func_000034B0(void);
void func_000034D0(void);
s32 func_000034F0(s32);
void func_00003520(void);
s32 func_000036EC(s32);
s32 func_00003838(void);
M2C_UNK func_000038C8();
void func_00003C04(void);
void func_00003F14(void *arg0);
s32 func_00003F30(void *arg0);
s32 func_00004010(void);
void func_000043A0(void *arg0);
M2C_UNK func_0000495C();
s32 func_00004B3C(s32, s32);
void func_00004BFC(s32 arg0);
void func_00004D0C(s32 arg0);
M2C_UNK func_00004D40();
void func_00004E0C(struct Unk_func_00004E0C_0 *arg0, s32 arg1);
s32 func_00004EC0(s32, s32);
void func_00004F5C(struct Unk_func_00004F5C_0 *arg0);
M2C_UNK func_00004FD0(s32, M2C_UNK);
s32 func_00005130(s32, s32);
void func_00005138(void *arg0);
struct Unk_ret_func_00005364 *func_00005364();
void func_000053BC(void);
s32 func_00005530(void);
void func_0000553C(struct Unk_func_0000553C_0 *arg0);
void func_00005920(void);
void func_0000593C(void);
s32 func_000059E8(void *arg0);
void func_00005B74(struct Unk_func_00005B74_0 *arg0);
s32 func_00005BA4(struct Unk_func_00005BA4_0 *arg0);
void func_00005BD8(void);
void func_00005BF4(void);
s32 func_00005CA0(struct Unk_func_00005CA0_0 *arg0);
M2C_UNK func_00005D10(s32);
s32 func_00005DD4(void);
void func_00005E90(void);
void func_00006118(void);
void func_00006160(struct Unk_func_00006160_0 *arg0);
s32 func_00006170(s32);
void func_000062D4(void);
M2C_UNK func_00006900();
s32 module_stop(void);
M2C_UNK sceHttpEnd();
M2C_UNK sceIoClose(s32);
s32 sceIoDevctl(void *, s32, void *, u32, void *, u32);
s32 sceIoWrite(s32);
M2C_UNK sceKernelDelayThread(M2C_UNK);
s32 sceKernelPowerLock(s32);
M2C_UNK sceKernelPowerTick(M2C_UNK);
s32 sceKernelPowerUnlock(s32);
s32 sceKernelSignalSema(s32, s32);
s32 sceKernelWaitSema(s32, s32, void *);
M2C_UNK scePaf_08350B98(s32, M2C_UNK, void (*)(s32, struct Unk_func_00002FE4_1 *), M2C_UNK);
M2C_UNK scePaf_0CFD27E9();
M2C_UNK scePaf_3AC3E06A();
M2C_UNK scePaf_3EDD45EF(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *);
M2C_UNK scePaf_4729E549();
M2C_UNK scePaf_6261C0A5(s32);
M2C_UNK scePaf_6A82A8C6(s32, M2C_UNK);
void **scePaf_79A4A59D(s32, M2C_UNK *, M2C_UNK);
s32 scePaf_88784487(M2C_UNK *);
M2C_UNK scePaf_8E7F9126(s32);
void *scePaf_DCE3D225(s32, M2C_UNK);
M2C_UNK scePowerCancelRequest();
M2C_UNK sceUpdateDownloadAbort();
M2C_UNK sceUpdateDownloadEnd();
M2C_UNK sceVshCommonGui_11C48509(void *, s32);
M2C_UNK sceVshCommonGui_2EBB5C2B(void *, s32);
s32 sceVshCommonGui_30FA68C3();
s32 sceVshCommonGui_6BC16C05();
M2C_UNK sceVshCommonGui_6F4C9FDB();
M2C_UNK sceVshCommonGui_891DD627(M2C_UNK);
M2C_UNK sceVshCommonGui_8F414E35(s32);
M2C_UNK sceVshCommonUtil_0587F20C(M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK sceVshCommonUtil_21EF453A(M2C_UNK *, s32);
M2C_UNK sceVshCommonUtil_8584376D(M2C_UNK *, s32);
M2C_UNK sce_paf_private_free();
M2C_UNK sce_paf_private_malloc();
M2C_UNK sce_paf_private_printf(M2C_UNK *);
M2C_UNK vsh_0E5502FC(s32);
M2C_UNK vsh_388428D3(s32);
M2C_UNK vsh_475ABD41(s32);
M2C_UNK vsh_8C1E8A38(s32);

#endif
