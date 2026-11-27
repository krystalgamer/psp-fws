#ifndef NETPLAY_SERVER_UTILITY_DECLS_H
#define NETPLAY_SERVER_UTILITY_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_00001EC8_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00001ED0_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00001ED8_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00001EE0_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_00001EE8_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_00001EF0_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_00001EF8_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00001F24_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00001F40_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00001F5C_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000032C0_0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x14];
    s32 unk1C;
};

struct Unk_func_00003514_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

extern M2C_UNK D_000037C0;
extern M2C_UNK D_000037E4;
extern M2C_UNK D_00003D24;
extern s32 D_00003D28;
extern s32 D_00003E2C;
extern s8 D_00004154;
extern s32 D_00004160;
extern M2C_UNK D_0000416C;
extern s8 D_00004174;
extern s32 D_000045D0;
extern s8 D_000045D4;
extern s32 D_000045E4;
extern s32 D_000045F0;
extern s32 D_00004608;
extern M2C_UNK func_00000E38;
extern s32 func_00000E6C;
extern M2C_UNK func_00000F58;
extern s32 func_00000FD8;

M2C_UNK Job_Start(M2C_UNK, M2C_UNK *, s32, M2C_UNK, M2C_UNK, M2C_UNK *);
M2C_UNK _ZN3paf4View12PageActivateEPKc(s32);
M2C_UNK _ZN3paf4View12PageCloseAllEv(s32);
s32 _ZN3paf4View4FindEPKc(M2C_UNK *);
M2C_UNK _ZN3paf4View9PageCloseEPKc(s32);
M2C_UNK _ZN3paf5SleepEi(M2C_UNK);
s32 _ZN3vsh16GetString_CancelEv();
M2C_UNK _ZN3vsh26ShowButtonNavigation_EnterEb(M2C_UNK);
M2C_UNK _ZN3vsh30SetButtonNavigationString_BackEPKw(void *, s32);
M2C_UNK _ZNK3paf4View8PageRootEPKc(s32);
M2C_UNK func_0000015C();
s32 func_000001FC(void);
void func_00000430(void);
void func_000004AC(void);
void func_000004CC(void);
void func_000004D0(void);
M2C_UNK func_00000500(M2C_UNK, M2C_UNK);
void func_0000058C(void);
void func_000005AC(void);
s32 func_000005F4(s32);
s32 func_00000634(s32);
void func_00000678(s32 arg0, s32 arg1);
M2C_UNK func_000006D4(M2C_UNK);
void func_000007E8(void);
void func_00000804(void);
void func_000008EC(void);
void func_00000908(void);
void func_00000928(void);
void func_00000B70(void);
void func_00000D4C(void);
void func_00000F3C(void);
s32 func_00001048(void);
void func_0000116C(void);
void func_00001174(void);
void func_0000117C(void);
void func_00001360(void);
void func_00001430(void);
void func_00001438(void);
void func_0000149C(void);
void func_00001528(s32 arg0, s32 arg1);
void func_000016C8(void);
void func_000016D4(void);
void func_00001714(void);
void func_0000171C(void);
void func_00001724(void);
void func_0000172C(s32 arg0);
void func_00001790(s32 arg0);
s32 func_000017D0(s32);
void func_00001800(s32 arg0, s32 arg1);
s32 func_0000186C(s32);
void func_000018CC(void);
M2C_UNK func_000018EC(s32, s32, s32);
void func_000019A8(void);
void func_000019C4(void);
s32 func_00001A3C(void *arg0);
s32 func_00001A44(void *arg0);
s32 func_00001A4C(void *arg0);
s32 func_00001A54(void *arg0);
s32 func_00001A5C(void *arg0);
s32 func_00001A64(void *arg0);
s32 func_00001A6C(void *arg0);
void func_00001A98(void *arg0);
void func_00001AB4(void *arg0);
void func_00001AD0(void *arg0);
void func_00001E34(void);
void func_00001E50(void);
s32 func_00001EC8(struct Unk_func_00001EC8_0 *arg0);
s32 func_00001ED0(struct Unk_func_00001ED0_0 *arg0);
s32 func_00001ED8(struct Unk_func_00001ED8_0 *arg0);
s32 func_00001EE0(struct Unk_func_00001EE0_0 *arg0);
s32 func_00001EE8(struct Unk_func_00001EE8_0 *arg0);
s32 func_00001EF0(struct Unk_func_00001EF0_0 *arg0);
s32 func_00001EF8(struct Unk_func_00001EF8_0 *arg0);
void func_00001F00(void *arg0, s32 arg1);
void func_00001F24(struct Unk_func_00001F24_0 *arg0);
void func_00001F40(struct Unk_func_00001F40_0 *arg0);
void func_00001F5C(struct Unk_func_00001F5C_0 *arg0);
s32 func_000023A8(void);
s32 func_00002468(void);
s32 func_000025AC(s32);
void func_000025E4(void *arg0);
s32 func_00002638(void);
s32 func_000026F8(void);
s32 func_00002A38(void);
M2C_UNK func_00002F64();
M2C_UNK func_0000320C();
M2C_UNK func_000032A0();
void func_000032C0(struct Unk_func_000032C0_0 *arg0);
void func_00003514(struct Unk_func_00003514_0 *arg0);
M2C_UNK func_00003520();
M2C_UNK func_00003558(void *);
void func_000036E8(s32 arg0, s32 arg1);
M2C_UNK func_000038F0(s32, s32, s32);
M2C_UNK func_00003A58();
s32 module_stop(void);
s32 sceNetAdhocDownloadAbortReplySession();
M2C_UNK scePaf_39E62C88(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK scePaf_3EDD45EF(M2C_UNK, M2C_UNK *, s32, M2C_UNK, M2C_UNK, M2C_UNK *);
s32 scePaf_5E4447F6(s32);
M2C_UNK scePaf_82CF97B0(M2C_UNK);
M2C_UNK scePaf_8B38372A(s32, s32);
M2C_UNK scePaf_A013540A(s32, s32);
s32 scePaf_BB3CBD19(s32, M2C_UNK *, M2C_UNK);
s32 scePaf_C1B0AA0D(s32);
M2C_UNK scePaf_CD216C47(s32);
M2C_UNK scePaf_D1447DB7(s32);
M2C_UNK sceVshCommonGui_11C48509(void *, s32);
s32 sceVshCommonGui_6BC16C05();
M2C_UNK sceVshCommonGui_F5A16B4D(M2C_UNK);
s32 sce_paf_private_strlen(s32);
s32 sce_paf_private_wcslen(s32);

#endif
