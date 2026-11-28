#ifndef SAVEDATA_PLUGIN_DECLS_H
#define SAVEDATA_PLUGIN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

#ifdef __cplusplus
#include "paf.h"
#include "vsh.h"
#pragma interface
extern "C" {
#endif

#ifdef __cplusplus
/* vtable _ZTV14Class_000224C8 is data (vptr = label - 8 + 8) */
class Class_000224C8 {
public:
    virtual ~Class_000224C8();
};
#endif

#ifdef __cplusplus
/* vtable _ZTV14Class_00022508 is data (vptr = label - 8 + 8) */
class Class_00022508 {
public:
    virtual ~Class_00022508();
};
#endif

#ifdef __cplusplus
/* vtable _ZTV14Class_00022578 is data (vptr = label - 8 + 8) */
class Class_00022578 {
public:
    u8 pad4[0x4];
    s32 unk8;
    s32 unkC;
    virtual ~Class_00022578();
};
#endif

#ifdef __cplusplus
/* vtable _ZTV14Class_00022560 is data (vptr = label - 8 + 8) */
class Class_00022560 : public Class_00022578 {
public:
    virtual ~Class_00022560();
};
#endif

#ifdef __cplusplus
/* vtable _ZTV14Class_000226A0 is data (vptr = label - 8 + 8) */
class Class_000226A0 {
public:
    s32 unk4;
    Class_000226A0(s32 arg1);
    virtual ~Class_000226A0();
};
#endif

#ifdef __cplusplus
/* vtable _ZTV14Class_00021E38 is data (vptr = label - 8 + 8) */
class Class_00021E38 : public Class_000226A0 {
public:
    virtual ~Class_00021E38();
};
#endif

#ifdef __cplusplus
/* vtable _ZTV14Class_00023078 (vptr D_00023078) */
class Class_00023078 {
public:
    virtual ~Class_00023078();
};
#endif

struct D_00023028_s {
    s32 unk0;
    s32 unk4;
};

struct Unk_D_00022EE0 {
    u8 pad0[0x58];
    void *unk58;
};

struct Unk_Unk_Unk_func_00004A94_0_10_24 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_Unk_func_00001478_0_0 {
    u8 pad0[0x10];
    s32 (*unk10)(void *);
};

struct Unk_Unk_func_00004A94_0_10 {
    u8 pad0[0x24];
    struct Unk_Unk_Unk_func_00004A94_0_10_24 *unk24;
};

struct Unk_Unk_func_00010664_sp0_0 {
    u8 pad0[0x4];
    M2C_UNK (*unk4)(void *);
};

struct Unk_func_000008C8_0 {
    u8 pad0[0x10];
    s32 unk10;
    u8 pad14[0x39];
    s8 unk4D;
    s8 unk4E;
    u8 pad4F[0x11];
    s8 unk60;
};

struct Unk_func_00000924_0 {
    u8 pad0[0x50];
    s32 unk50;
    u8 pad54[0x4];
    s32 unk58;
};

struct Unk_func_00000A58_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_00001478_0 {
    struct Unk_Unk_func_00001478_0_0 *unk0;
    u8 pad4[0x5C];
    u8 unk60;
};

struct Unk_func_0000206C_1 {
    u8 pad0[0x8];
    u32 unk8;
};

struct Unk_func_00004048_0 {
    u8 pad0[0x18];
    s32 unk18;
    s32 unk1C;
    u8 pad20[0xC];
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    s8 unk38;
};

struct Unk_func_000040AC_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    u8 pad18[0x1C];
    s32 unk34;
    s8 unk38;
};

struct Unk_func_000041D4_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_0000463C_0 {
    u8 pad0[0x8];
    s32 unk8;
    u8 padC[0x28];
    s32 unk34;
};

struct Unk_func_00004A94_0 {
    u8 pad0[0x10];
    struct Unk_Unk_func_00004A94_0_10 *unk10;
};

struct Unk_func_00005CE4_0 {
    M2C_UNK *unk0;
    u8 pad4[0x14];
    s32 unk18;
    s8 unk1C;
};

struct Unk_func_00005D20_0 {
    M2C_UNK *unk0;
    u8 pad4[0x14];
    s32 unk18;
    s8 unk1C;
};

struct Unk_func_00006D50_0 {
    u8 pad0[0x20];
    s32 unk20;
    s32 unk24;
};

struct Unk_func_0000763C_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00008D14_0 {
    u8 pad0[0x1D0];
    s32 unk1D0;
};

struct Unk_func_00008D14_1 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x14];
    void * unk1C;
};

struct Unk_func_00009978_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_0000ABBC_0 {
    u8 pad0[0xA34];
    s32 unkA34;
    s32 unkA38;
    s32 unkA3C;
};

struct Unk_func_0000AC3C_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0000ACE0_0 {
    u8 pad0[0xA3C];
    s32 unkA3C;
};

struct Unk_func_0000AD20_0 {
    u8 pad0[0xA3C];
    s32 unkA3C;
};

struct Unk_func_0000AE00_0 {
    u8 pad0[0xA3C];
    s32 unkA3C;
};

struct Unk_func_0000AF00_0 {
    u8 pad0[0xA3C];
    s32 unkA3C;
};

struct Unk_func_0000C304_0 {
    u8 pad0[0x4C];
    s32 unk4C;
    s32 unk50;
};

struct Unk_func_0000C50C_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_0000CD88_0 {
    u8 pad0[0x4];
    u32 unk4;
    u8 pad8[0x4];
    s32 unkC;
};

struct Unk_func_0000CDBC_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s8 unk20;
};

struct Unk_func_0000CDEC_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s8 unk20;
};

struct Unk_func_0000CE94_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_0000DDAC_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0000DEF4_0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0000E768_0 {
    u8 pad0[0x38];
    s32 unk38;
};

struct Unk_func_0000E7B0_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0000E83C_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0000E88C_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0000E9F4_var_a0 {
    u8 pad0[0x4];
    struct Unk_func_0000E9F4_var_v0 *unk4;
};

struct Unk_func_0000E9F4_var_v0 {
    u8 pad0[0x4];
    void *unk4;
};

struct Unk_func_0000EA4C_0 {
    M2C_UNK *unk0;
    s32 unk4;
};

struct Unk_func_0000EA4C_var_v0 {
    u8 pad0[0x4];
    void *unk4;
};

struct Unk_func_0000ED50_1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0000ED50_temp_v1 {
    void *unk0;
    void **unk4;
};

struct Unk_func_0000F290_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0000F364_0 {
    u8 pad0[0x8];
    s32 unk8;
    u8 padC[0x4];
    s32 unk10;
};

struct Unk_func_0000F38C_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0000F398_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0000F3A8_0 {
    u8 pad0[0x8];
    u8 unk8;
    u8 pad9[0x7];
    s32 unk10;
};

struct Unk_func_0000F50C_0 {
    u8 pad0[0x18];
    s32 unk18;
    s32 unk1C;
};

struct Unk_func_0000FB84_0 {
    M2C_UNK * unk0;
    s32 unk4;
};

struct Unk_func_00010184_0 {
    u8 pad0[0xC];
    s32 unkC;
    s32 unk10;
};

struct Unk_func_00010664_sp0 {
    struct Unk_Unk_func_00010664_sp0_0 *unk0;
    s32 unk4;
};

struct Unk_func_00011180_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00011AA0_0 {
    u8 pad0[0xA20];
    s32 unkA20;
    s32 unkA24;
    s32 unkA28;
};

struct Unk_func_00011C4C_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_00011C54_0 {
    M2C_UNK *unk0;
    u8 pad4[0x18];
    s32 unk1C;
    u8 pad20[0x4];
    s32 unk24;
};

struct Unk_func_00011CAC_0 {
    M2C_UNK *unk0;
    u8 pad4[0x18];
    s32 unk1C;
    u8 pad20[0x4];
    s32 unk24;
};

struct Unk_func_00011F54_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00012764_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00012D8C_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_00013048_var_a0 {
    u8 pad0[0x4];
    struct Unk_func_00013048_var_v0 *unk4;
};

struct Unk_func_00013048_var_v0 {
    u8 pad0[0x4];
    void *unk4;
};

struct Unk_func_000130A0_0 {
    M2C_UNK *unk0;
    s32 unk4;
};

struct Unk_func_000130A0_var_v0 {
    u8 pad0[0x4];
    void *unk4;
};

struct Unk_func_000132BC_1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000132BC_temp_v1 {
    void *unk0;
    void **unk4;
};

struct Unk_func_0001346C_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000134AC_0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x14];
    s32 unk1C;
};

struct Unk_func_000134AC_temp_s1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000134FC_0 {
    u8 pad0[0x30];
    s32 unk30;
};

struct Unk_func_00013540_0 {
    u8 pad0[0x34];
    s8 unk34;
};

struct Unk_func_000135C4_0 {
    u8 pad0[0x34];
    s8 unk34;
};

struct Unk_func_000135FC_0 {
    u8 pad0[0x34];
    u8 unk34;
};

struct Unk_func_00013708_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00013710_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00013718_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00013720_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_00013728_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_00013730_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_00013738_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00013764_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00013780_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0001379C_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00013C24_0 {
    u8 pad0[0x4C];
    u8 unk4C;
};

struct Unk_func_00013C24_1 {
    u8 pad0[0xA30];
    u8 unkA30;
};

struct Unk_func_00013C98_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_00013D78_0 {
    s32 unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_00016C4C_0 {
    s32 unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_00016ED4_0 {
    u8 pad0[0x100];
    s32 unk100;
};

struct Unk_func_00018D40_0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x14];
    s32 unk1C;
};

struct Unk_func_00018F94_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00018FA4_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0001906C_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_vt_func_00010664_arg1 {
    u8 pad0[0xAC];
    M2C_UNK (*unkAC)(void **, s32 *, s32);
};

typedef void (*func_ptr)(void);

#ifndef __cplusplus
typedef struct Class_00021E38 {
    void *vptr;
    s32 unk4;
} Class_00021E38;
typedef struct Class_000224C8 {
    void *vptr;
} Class_000224C8;
typedef struct Class_00022508 {
    void *vptr;
} Class_00022508;
typedef struct Class_00022560 {
    void *vptr;
    u8 pad4[0x4];
    s32 unk8;
    s32 unkC;
} Class_00022560;
typedef struct Class_00022578 {
    void *vptr;
    u8 pad4[0x4];
    s32 unk8;
    s32 unkC;
} Class_00022578;
typedef struct Class_000226A0 {
    void *vptr;
    s32 unk4;
} Class_000226A0;
typedef struct Class_00023078 {
    void *vptr;
} Class_00023078;
#endif

extern const char D_000210EC[];
extern const char D_000210FC[];
extern const char D_00021110[];
extern const char D_00021124[];
extern const char D_00021138[];
extern const char D_0002114C[];
extern M2C_UNK D_000212C0;
extern M2C_UNK D_000212D8;
extern M2C_UNK D_000213E4;
extern M2C_UNK D_000213EC;
extern func_ptr D_00021734[];
extern M2C_UNK D_0002197C;
extern s8 D_00021CA4;
extern s32 D_00021CA8;
extern s32 D_00021CB8;
extern M2C_UNK D_00021DD0;
extern M2C_UNK D_00021E38;
extern M2C_UNK D_00021FAC;
extern M2C_UNK D_00022070;
extern M2C_UNK D_00022088;
extern s8 D_000221AC;
extern s32 D_00022270;
extern s32 D_00022378;
extern M2C_UNK D_00022488;
extern M2C_UNK D_000224C8;
extern s32 D_000224F8;
extern s32 D_00022508;
extern M2C_UNK D_00022518;
extern s32 D_00022560;
extern M2C_UNK D_00022578;
extern M2C_UNK D_000226A0;
extern M2C_UNK D_000226D8;
extern M2C_UNK D_00022718;
extern M2C_UNK D_000227E0;
extern M2C_UNK D_000228C8;
extern M2C_UNK D_00022908;
extern M2C_UNK D_00022B18;
extern M2C_UNK D_00022B20_v271;
extern M2C_UNK D_00022E0C;
extern struct Unk_D_00022EE0 *D_00022EE0;
extern s32 D_00022EF0;
extern s32 D_00022F0C;
extern M2C_UNK D_00022F1C;
extern struct D_00023028_s D_00023028;
extern M2C_UNK D_00023078;
extern M2C_UNK func_000010A0;
extern M2C_UNK func_000011A8;
extern M2C_UNK func_00004980;
extern s32 func_00004A40;
extern M2C_UNK func_00004AC4;
extern s32 func_000051A0;
extern M2C_UNK func_00007C24;
extern M2C_UNK func_00008F6C;
extern s32 func_0000C728;
extern M2C_UNK func_0000E2F8;
extern M2C_UNK func_0000E34C;
extern M2C_UNK func_0000E950;

s32 Job_Start(M2C_UNK, M2C_UNK *, void *, M2C_UNK, M2C_UNK, M2C_UNK *);
s32 Job_isCanceled(s32);
void _ZN14Class_00022508D1Ev(M2C_UNK **arg0);
void _ZN14Class_000226A0C1Ei(struct Unk_func_0000FB84_0 *arg0, s32 arg1);
s32 _ZN14Class_000226A0C2Ei(s32, s32);
M2C_UNK _ZN3paf12FormatStringEPKwS1_S1_S1_S1_S1_S1_S1_S1_S1_(M2C_UNK *, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32);
M2C_UNK _ZN3paf4View12PageActivateEPKc(s32);
M2C_UNK _ZN3paf4View12PageCloseAllEv(s32);
s32 _ZN3paf4View8PageOpenEPKcii(s32, s32, s32, s32);
M2C_UNK _ZN3paf4View9PageCloseEPKc(s32);
s32 _ZN3paf6Module12SetInterfaceEiPv(s32, s32, s32);
s32 _ZN3paf8PhAppear12ShadowRenderEv(void);
s32 _ZN3paf8PhWidget9FindChildEPKci(s32, const char *, M2C_UNK);
s32 _ZN3paf9PhHandler11KillTimerCBEi(s32, s32);
M2C_UNK _ZN3paf9PhSRender8SetStyleEii(s32, M2C_UNK, M2C_UNK);
M2C_UNK _ZN3vsh10OptionMenu4HideEv(void);
M2C_UNK _ZN3vsh10OptionMenu4ShowEv(void);
M2C_UNK _ZN3vsh10OptionMenu5CloseEPN3paf4ViewEPKcS5_(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK _ZN3vsh13MessageDialog10HideDeleteEv(s32);
s32 _ZN3vsh14GetString_BackE6Locale(M2C_UNK);
s32 _ZN3vsh14GetString_BackEv(void);
s32 _ZN3vsh15GetString_EnterE6Locale(M2C_UNK);
s32 _ZN3vsh15GetString_EnterEv(void);
s32 _ZN3vsh16GetString_OptionE6Locale(M2C_UNK);
s32 _ZN3vsh16GetString_OptionEv(void);
M2C_UNK _ZN3vsh30SetButtonNavigationString_BackEPKw(void *, s32);
M2C_UNK _ZN3vsh31SetButtonNavigationString_EnterEPKw(void *, s32);
M2C_UNK _ZN3vsh32SetButtonNavigationString_OptionEPKw(void *, s32);
M2C_UNK _ZNK3paf4View10GetTextureEPKc(s32 *, s32, const char *);
M2C_UNK _ZNK3paf4View8PageRootEPKc(void *self, char *);
s32 _ZNK3paf4View9GetStringEPKc(s32, M2C_UNK *);
M2C_UNK _ZdaPv(s32);
M2C_UNK _ZdlPv(void *);
s32 _Znwj(M2C_UNK);
void func_0000015C_v100(void);
void func_0000015C_v150(void);
void func_0000015C_v152(void);
void func_0000015C_v201(void);
void func_0000015C_v250(void);
void func_0000015C_v260(void);
void func_00000164(void);
u8 func_00000170(void);
void func_00000348(s32 arg0);
s32 func_00000778(void *arg0);
void func_000007B4(void *arg0);
s32 func_000008C8(struct Unk_func_000008C8_0 *arg0);
void func_00000924(struct Unk_func_00000924_0 *arg0);
s32 func_0000094C(void *arg0);
s32 func_00000960(...);
s32 func_000009C8(s32, s32);
s32 func_00000A58(struct Unk_func_00000A58_0 *arg0);
s32 func_00000B00(s32, s32);
M2C_UNK func_00000D10(void *, M2C_UNK);
void func_00000DBC(void *arg0);
void func_00000E40(void *arg0);
s32 func_00000F20(s32);
s32 func_00001340(void *arg0, s32 arg1);
s32 func_00001478(struct Unk_func_00001478_0 *arg0, s32 arg1);
s32 func_00001964(s32, s32);
void func_00001A74(void);
s32 func_00001E10(s32);
void func_00001E88(void);
void func_00001E90(s32 arg0, void *arg1);
void func_00001ED0(void *arg0);
void func_00001F58(s32 arg0, void *arg1);
void func_0000206C(s32 arg0, struct Unk_func_0000206C_1 *arg1);
void func_000020A4(s32 *arg0, s32 arg1);
s32 func_000020C4(s32);
M2C_UNK func_00002144(...);
s32 func_000022C8(s32);
M2C_UNK func_0000231C(void *, M2C_UNK);
M2C_UNK func_0000283C(void *, M2C_UNK);
void func_00002F7C(s32 arg0, s32 arg1);
s32 func_00003214(void *arg0);
void func_00003234(void *arg0, s32 arg1);
void func_0000328C(Class_00022578 *arg0, s32 arg1, s32 arg2);
void func_00003AA0(s32 arg0, s32 arg1);
void func_00003B18(s32 arg0, s32 arg1);
M2C_UNK func_00003D14(s32, M2C_UNK);
void func_00003E68(M2C_UNK **arg0);
void func_00003E90(s32 arg0, s32 arg1);
void func_00003EC0(s32 arg0, s32 arg1);
void func_00003EF0(M2C_UNK **arg0);
void func_00003F18(M2C_UNK **arg0);
void func_00003F40(M2C_UNK **arg0);
void func_00004048(struct Unk_func_00004048_0 *arg0);
void func_000040AC(struct Unk_func_000040AC_0 *arg0);
M2C_UNK func_000040D0(void *);
void func_000041D4(struct Unk_func_000041D4_0 *arg0, s32 arg1);
void func_00004598(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_000045E8(s32, s32, s32);
void func_0000463C(struct Unk_func_0000463C_0 *arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3);
void func_00004678(void *arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK func_0000468C(M2C_UNK, s32, M2C_UNK);
void func_00004950(void *arg0);
void func_00004A10(void *arg0);
void func_00004A94(struct Unk_func_00004A94_0 *arg0);
void func_00005170(void *arg0);
void func_0000574C(M2C_UNK **arg0);
void func_00005774(M2C_UNK **arg0);
void func_00005A24(s32 *arg0, s32 arg1);
void func_00005A44(s32 *arg0, s32 arg1);
M2C_UNK func_00005A64(void *, M2C_UNK);
void func_00005AA8(void *arg0);
M2C_UNK func_00005ADC(void *, M2C_UNK);
s32 func_00005AEC(s32, s32);
M2C_UNK func_00005B38(void *, M2C_UNK);
M2C_UNK func_00005B94(...);
M2C_UNK func_00005BC4(...);
void func_00005CBC(M2C_UNK **arg0);
void func_00005CE4(struct Unk_func_00005CE4_0 *arg0, s32 arg1);
void func_00005D20(struct Unk_func_00005D20_0 *arg0, s32 arg1);
void func_00005D5C(M2C_UNK **arg0);
void func_00005D84(M2C_UNK **arg0);
void func_00005DAC(M2C_UNK **arg0);
void func_00005DEC(s32 arg0, s32 arg1, s32 arg2);
s32 func_00005E68(s32, s32);
s32 func_00005EF8(s32);
s32 func_00005FCC(s32, s32);
s32 func_000060B4(s32, s32, s32, s32);
void func_000061E0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_000062B8(void);
void func_000065FC(s32 arg0);
s32 func_00006608(void);
void func_000068E0(s32 arg0);
void func_00006950(M2C_UNK **arg0);
void func_00006978(M2C_UNK **arg0);
void func_000069A0(M2C_UNK **arg0);
void func_00006B04(void);
void func_00006B0C(void);
void func_00006CD8(s32 arg0, s32 arg1, s32 arg2);
s32 func_00006CF8(s32, s32, s32);
void func_00006D50(struct Unk_func_00006D50_0 *arg0, M2C_UNK arg1);
s32 func_00006D54(s32, s32);
M2C_UNK func_00006DCC(s32, M2C_UNK);
void func_00006FF0(M2C_UNK **arg0);
s32 func_0000703C(s32, s32);
void func_00007114(void *arg0);
void func_000072F4(void);
s32 func_000072FC(s32, s32, s32);
void func_0000763C(struct Unk_func_0000763C_0 *arg0);
void func_0000767C(s32 arg0);
s32 func_00007688(void);
void func_00007984(void *arg0, void *arg1);
void func_000081E4(void *arg0);
void func_000086E8(void);
void func_00008770(void);
void func_0000878C(void);
void func_00008804(void);
void func_00008D14(struct Unk_func_00008D14_0 *arg0, struct Unk_func_00008D14_1 *arg1);
s32 func_00008DC4(s32, s32);
s32 func_00008E98(s32, s32);
void func_00009478(M2C_UNK **arg0);
M2C_UNK func_0000947C(void *, M2C_UNK);
void func_000094B0(M2C_UNK **arg0);
void func_000094E8(M2C_UNK **arg0);
s32 func_00009528(s32, s32, s32);
s32 func_00009680(void *arg0);
void func_0000992C(struct Unk_func_0000763C_0 *arg0);
void func_00009978(struct Unk_func_00009978_0 *arg0);
void func_000099B0(void *arg0);
void func_000099C8(M2C_UNK **arg0);
void func_00009A08(void *arg0);
void func_00009A60(void *arg0);
void func_00009AB8(void *arg0);
s32 func_00009B04(void *arg0, u32 arg1);
M2C_UNK func_00009B10(...);
void func_00009B68(void);
void func_00009B84(void);
M2C_UNK func_00009BA0(...);
void func_00009BF8(void);
void func_00009C14(void);
M2C_UNK func_00009C30(...);
void func_00009C38(void);
void func_00009D44(void);
s32 func_00009D4C(s32, s32, s32);
void func_00009E10(M2C_UNK **arg0);
s32 func_00009E30(s32, s32);
void func_00009E38(M2C_UNK **arg0);
s32 func_00009EC0(s32);
s32 func_00009F20(s32 arg0, void *arg1, s32 arg2);
s32 func_00009FAC(void *arg0);
s32 func_00009FB4(void *arg0, s32 arg1);
s32 func_0000A088(s32 arg0);
s32 func_0000A168(s32, s32, s32);
s32 func_0000A5F0(void *arg0);
void func_0000A798(void *arg0);
s32 func_0000A7C8(void *arg0);
s32 func_0000AA28(s32 arg0);
s32 func_0000AA84(s32 arg0);
void func_0000AB0C(M2C_UNK **arg0);
void func_0000AB44(M2C_UNK **arg0);
void func_0000AB7C(M2C_UNK **arg0);
void func_0000ABBC(struct Unk_func_0000ABBC_0 *arg0);
s32 func_0000ABCC(s32);
s32 func_0000AC3C(struct Unk_func_0000AC3C_0 *arg0, s32 arg1);
s32 func_0000ACE0(struct Unk_func_0000ACE0_0 *arg0);
s32 func_0000AD20(struct Unk_func_0000AD20_0 *arg0, s32 arg1);
void func_0000AD30(M2C_UNK **arg0);
void func_0000AE00(struct Unk_func_0000AE00_0 *arg0);
s32 func_0000AF00(struct Unk_func_0000AF00_0 *arg0);
s32 func_0000B0FC(void *arg0, s32 arg1);
s32 func_0000B34C(s32);
void func_0000B37C(void *arg0);
void func_0000B518(void *arg0);
s32 func_0000B58C(void *arg0, s32 arg1);
s32 func_0000B5E4(s32, s32, s32, s32, s32);
s32 func_0000B74C(void *arg0);
s32 func_0000B75C(s32, s32);
void func_0000B95C(void);
void func_0000B964(void);
void func_0000B9AC(M2C_UNK **arg0);
void func_0000B9BC(s32 arg0);
s32 func_0000BB94(s32);
s32 func_0000BC04(void *arg0);
s32 func_0000BF1C(s32, s32);
s32 func_0000BF70(s32, s32);
void func_0000BFA8(void);
void func_0000BFC8(void);
s32 func_0000C26C(s32);
M2C_UNK func_0000C2E4(s32);
s32 func_0000C304(struct Unk_func_0000C304_0 *arg0, s32 *arg1, s32 *arg2);
void ***func_0000C38C(void ***arg0, void *arg1, void **arg2);
s32 func_0000C3A8(s32);
void func_0000C3F0(void);
void func_0000C3F4(void *arg0);
void func_0000C3FC(s32 arg0);
s32 func_0000C420(void);
void func_0000C50C(struct Unk_func_0000C50C_0 *arg0, s32 arg1);
void func_0000C528(M2C_UNK **arg0);
void func_0000C538(M2C_UNK **arg0);
void func_0000C548(M2C_UNK **arg0);
s32 func_0000C760(s32, s32);
void func_0000C844(void);
void func_0000C860(void);
void func_0000C87C(void);
void func_0000C898(void);
void func_0000C9A4(void *arg0, s32 arg1);
s32 func_0000CA04(void *arg0, s32 arg1);
s32 func_0000CA2C(void *arg0);
s32 func_0000CA34(s32);
s32 func_0000CA3C(void *arg0);
s32 func_0000CA4C(void *arg0, s32 arg1);
s32 func_0000CA78(void *arg0);
s32 func_0000CAA4(void *arg0, s32 *arg1, s32 *arg2);
s32 func_0000CB18(void *arg0);
void func_0000CB34(void *arg0);
s32 func_0000CB48(s32);
s32 func_0000CB80(void);
s32 func_0000CB90_v150(void);
s32 func_0000CBB8(void);
void func_0000CCA4(void *arg0, s32 arg1);
s32 func_0000CD88(struct Unk_func_0000CD88_0 *arg0, u32 arg1);
void func_0000CDBC(struct Unk_func_0000CDBC_0 *arg0, s32 arg1);
void func_0000CDEC(struct Unk_func_0000CDEC_0 *arg0, s32 arg1);
void func_0000CE1C(M2C_UNK **arg0);
void func_0000CE2C(M2C_UNK **arg0);
void func_0000CE3C(M2C_UNK **arg0);
s32 func_0000CE64(void *arg0);
s32 func_0000CE94(struct Unk_func_0000CE94_0 *arg0);
s32 func_0000CE9C(void *arg0);
void func_0000CFA0(s32 arg0);
void func_0000D14C(M2C_UNK **arg0);
void func_0000D174(M2C_UNK **arg0);
void func_0000D19C(s32 **arg0);
void func_0000D1C4(s32 **arg0);
s32 func_0000D1FC(s32);
s32 func_0000D214(s32);
void func_0000D284(void *arg0, s32 arg1);
void func_0000D2C0(M2C_UNK **arg0);
void func_0000D2D0(M2C_UNK **arg0);
s32 func_0000D3D4(s32, s32, s32, s32, s32);
s32 func_0000D47C(void *arg0, u32 arg1);
void ***func_0000D4E8(void ***arg0, void *arg1, void **arg2);
void func_0000D6C8(void);
s32 func_0000D718(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_0000D7B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_0000D7B8(M2C_UNK **arg0);
void func_0000D7C8(M2C_UNK **arg0);
s32 func_0000D850(s32);
s32 func_0000D8E8(s32);
void func_0000DDAC(struct Unk_func_0000DDAC_0 *arg0);
void func_0000DEF4(struct Unk_func_0000DEF4_0 *arg0);
s32 func_0000DF38(s32, s32);
s32 func_0000E180(s32, s32, s32);
void func_0000E2DC(s32 arg0);
void func_0000E6A0(s32 arg0, void **arg1, s32 arg2);
void func_0000E768(struct Unk_func_0000E768_0 *arg0);
void func_0000E7B0(struct Unk_func_0000E7B0_0 *arg0);
void func_0000E83C(struct Unk_func_0000E83C_0 *arg0);
void func_0000E840(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_0000E88C(struct Unk_func_0000E88C_0 *arg0);
void func_0000E8B8(s32 arg0, void **arg1, s32 arg2);
void func_0000E924(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_0000E9F4(void **arg0);
void func_0000EA4C(struct Unk_func_0000EA4C_0 *arg0);
M2C_UNK func_0000EB30(s32);
void ***func_0000ED50(void ***arg0, struct Unk_func_0000ED50_1 *arg1, void **arg2);
void func_0000F02C(s32 *arg0, s32 arg1);
void func_0000F130(void);
void func_0000F14C(void);
void func_0000F168(void);
void func_0000F184(void);
s32 func_0000F1A0(s32, s32);
void func_0000F1EC(struct Unk_func_000040AC_0 *arg0, s32 arg1);
void func_0000F238(M2C_UNK **arg0);
void func_0000F248(M2C_UNK **arg0);
void func_0000F258(M2C_UNK **arg0);
void func_0000F280(Class_00022578 *arg0);
void func_0000F290(struct Unk_func_0000F290_0 *arg0, s32 arg1);
void func_0000F298(Class_00022578 *arg0, s32 arg1, s32 arg2);
s32 func_0000F364(struct Unk_func_0000F364_0 *arg0, s32 arg1);
s32 func_0000F38C(struct Unk_func_0000F38C_0 *arg0);
s32 func_0000F398(struct Unk_func_0000F398_0 *arg0);
s32 func_0000F3A8(struct Unk_func_0000F3A8_0 *arg0, s32 arg1);
s32 func_0000F3D4(s32);
M2C_UNK func_0000F44C(s32, M2C_UNK);
void func_0000F480(void *arg0);
void func_0000F484(s32 **arg0);
void func_0000F4AC(s32 **arg0);
void func_0000F4D4(s32 **arg0);
void func_0000F50C(struct Unk_func_0000F50C_0 *arg0);
void func_0000F644(void *arg0);
void func_0000F844(void *arg0, s32 arg1);
void func_0000F86C(s32 arg0, s32 arg1, s32 arg2);
void func_0000F8C4(s32 arg0, s32 arg1, s32 arg2);
s32 func_0000FB58(s32, s32);
void func_0000FB5C(void *arg0, s32 arg1);
void func_0000FB84(struct Unk_func_0000FB84_0 *arg0, s32 arg1);
s32 func_0000FBB0(void);
void func_0000FBC0(M2C_UNK **arg0);
void func_0000FBD0(M2C_UNK **arg0);
s32 func_0000FBF8(s32);
s32 func_0000FD8C(s32, s32, s32);
void func_0001009C(void);
M2C_UNK func_00010104(M2C_UNK, M2C_UNK);
void func_00010184(struct Unk_func_00010184_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_00010224(struct Unk_func_00010184_0 *arg0);
M2C_UNK func_00010260(s32);
s32 func_000102C4(s32, s32, s32);
void func_000103B8(void *arg0, s32 arg1);
s32 func_000104AC(void);
void func_00010664(s32 arg0, struct Unk_vt_func_00010664_arg1 **arg1, s32 arg2);
s32 func_00010994(void *arg0);
void func_00010BE0(void **arg0);
void ***func_00010E54(void ***arg0, void *arg1, void **arg2);
s32 func_00011004(void *arg0);
s32 func_00011024(void);
void func_00011110(void *arg0);
s32 func_00011150(s32);
void func_00011160(void *arg0, s32 arg1, s32 arg2);
void func_00011180(struct Unk_func_00011180_0 *arg0);
void func_000111A4(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_000111EC(void);
void func_00011208(void);
void func_00011224(void *arg0, s32 arg1, s32 arg2, s32 arg3);
u8 func_0001125C(void *arg0);
s32 func_00011368(void *arg0);
s32 func_00011370(void *arg0);
s32 func_00011378(void *arg0);
s32 func_00011380(void *arg0);
s32 func_00011388(void *arg0);
s32 func_00011390(void *arg0);
s32 func_00011398(void *arg0);
void func_000113C4(void *arg0);
void func_000113E0(void *arg0);
void func_000113FC(void *arg0, s32 arg1);
void func_00011428(s32 *arg0, s32 arg1);
M2C_UNK func_00011718(...);
s32 func_000117A8(s32);
void func_00011834(s32 arg0);
M2C_UNK func_0001186C(s32);
void func_00011A84(void *arg0);
void func_00011AA0(struct Unk_func_00011AA0_0 *arg0);
void func_00011C4C(struct Unk_func_00011C4C_0 *arg0, s32 arg1);
void func_00011C54(struct Unk_func_00011C54_0 *arg0, s32 arg1, s32 arg2);
void func_00011CAC(struct Unk_func_00011CAC_0 *arg0, s32 arg1, s32 arg2);
void func_00011D7C(void);
s32 func_00011ED4(s32);
void func_00011F54(struct Unk_func_00011F54_0 *arg0, s32 arg1);
M2C_UNK func_000126B0(...);
void func_00012764(struct Unk_func_00012764_0 *arg0, s32 arg1);
s32 func_00012860(void);
s32 func_000128E4(void *arg0, void *arg1);
s32 func_00012A58(void *arg0);
M2C_UNK *func_00012A60(void);
s32 func_00012B54(void);
s32 func_00012B80(void);
s32 func_00012C54(void *arg0);
void func_00012C88(void *arg0, s8 arg1);
s32 func_00012D8C(struct Unk_func_00012D8C_0 *arg0);
void func_00013048(void **arg0);
void func_000130A0(struct Unk_func_000130A0_0 *arg0);
void ***func_000132BC(void ***arg0, struct Unk_func_000132BC_1 *arg1, void **arg2);
s32 func_0001346C(struct Unk_func_0001346C_0 *arg0);
s32 func_0001348C(void);
void func_000134AC(struct Unk_func_000134AC_0 *arg0);
void func_000134FC(struct Unk_func_000134FC_0 *arg0, s32 arg1, s32 arg2);
s32 func_0001351C(s32);
s32 func_00013528(void);
void func_00013530(s32 arg0, s32 arg1);
void func_00013540(struct Unk_func_00013540_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_0001358C(void);
void func_000135A8(void);
void func_000135C4(struct Unk_func_000135C4_0 *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3);
u8 func_000135FC(struct Unk_func_000135FC_0 *arg0);
M2C_UNK func_00013680(void *);
s32 func_00013708(struct Unk_func_00013708_0 *arg0);
s32 func_00013710(struct Unk_func_00013710_0 *arg0);
s32 func_00013718(struct Unk_func_00013718_0 *arg0);
s32 func_00013720(struct Unk_func_00013720_0 *arg0);
s32 func_00013728(struct Unk_func_00013728_0 *arg0);
s32 func_00013730(struct Unk_func_00013730_0 *arg0);
s32 func_00013738(struct Unk_func_00013738_0 *arg0);
void func_00013740(void *arg0, s32 arg1);
void func_00013764(struct Unk_func_00013764_0 *arg0);
void func_00013780(struct Unk_func_00013780_0 *arg0);
void func_0001379C(struct Unk_func_0001379C_0 *arg0, s32 arg1);
s32 func_0001393C(s32 arg0, u32 arg1);
s32 func_000139C4(s32);
s32 func_00013C24(struct Unk_func_00013C24_0 *arg0, struct Unk_func_00013C24_1 *arg1);
s32 func_00013C5C(void *);
void func_00013C88(void);
void func_00013C90(struct Unk_func_000008C8_0 *arg0, s8 arg1);
s32 func_00013C98(struct Unk_func_00013C98_0 *arg0);
M2C_UNK *func_00013CA0(void);
M2C_UNK func_00013D04(s32);
s32 func_00013D74(void);
s32 func_00013D78(struct Unk_func_00013D78_0 *arg0);
s32 func_00013DEC(void);
s32 func_00013E50(s32);
s32 func_00013E84(void *arg0, s32 *arg1, s32 *arg2);
s32 func_00014038(s32, s32, s32, s32, s32);
s32 func_000142E8(s32);
s32 func_0001445C(s32, s32, s32);
s32 func_000145E0(s32 arg0, u32 arg1);
s32 func_0001466C(void);
s32 func_00014ABC(s32);
s32 func_00014C34(s32);
s32 func_00014D28(s32 arg0);
s32 func_00014D5C(s32, s32, s32, s32);
s32 func_00014E64(s32);
s32 func_000152B4(void);
void func_000152BC(s32 arg0, s32 arg1);
void func_000155D8(s32 *arg0, s32 arg1, s32 arg2);
void func_000155FC(s32 *arg0, s32 arg1);
void func_000157E8(void *arg0);
M2C_UNK func_000159A4(s32, s32, s32, s32);
s32 func_00015B18(s32, s32, s32);
s32 func_00015B9C(s32, s32, s32);
void func_00015CB8(s32 arg0, s32 arg1);
void func_00015D3C(s32 arg0, s32 arg1);
s32 func_00015EAC(void);
s32 func_0001603C(s32);
s32 func_00016100(s32 arg0);
void func_000161EC(s32 arg0, s32 arg1, s32 arg2);
s32 func_000162CC(s32, s32, s32, s32);
s32 func_0001646C(s32);
s32 func_00016470(void);
void func_00016560(s32 arg0, s8 arg1);
s32 func_00016800(u8 *arg0, s32 arg1);
void func_00016828(s32 *arg0, s32 arg1, s32 arg2);
void func_00016944(s32 *arg0, s32 arg1, s32 arg2);
void func_0001696C(s32 *arg0, s32 arg1);
void func_00016C4C(struct Unk_func_00016C4C_0 *arg0);
void func_00016D30(void *arg0);
s32 func_00016D90(void *arg0);
s32 func_00016E64(void);
s32 func_00016ED4(struct Unk_func_00016ED4_0 *arg0);
s32 func_00016FA8(void);
void func_00016FC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_00016FFC(s32, s32, s32, s32);
void func_0001716C(void *arg0);
void func_0001717C(void *arg0, s32 arg1);
s32 func_000171DC(s32, s32, s32, s32);
s32 func_00017FD4(s32, s32, s32);
s32 func_0001849C(s32, s32, s32);
M2C_UNK func_0001851C(s32, M2C_UNK, M2C_UNK);
M2C_UNK *func_00018A1C(s32 arg0);
M2C_UNK *func_00018A44(s32 arg0);
s32 func_00018A60(s32, s32, s32, s32);
void func_00018D40(struct Unk_func_00018D40_0 *arg0);
M2C_UNK func_00018D78(...);
s32 func_00018DC4(s32, s32);
void func_00018F94(struct Unk_func_00018F94_0 *arg0);
void func_00018FA4(struct Unk_func_00018FA4_0 *arg0, s32 arg1);
void func_0001906C(struct Unk_func_0001906C_0 *arg0);
s32 func_000190E0(s32, s32);
s32 func_00019650(s32, s32, s32, s32);
M2C_UNK func_0001C2A0(s32);
M2C_UNK func_0001F998(...);
s32 func_0001FA38(s32, s32);
s32 func_0001FDE8(s32, s32);
void func_00020510(void);
M2C_UNK func_00020B3C(...);
s32 module_stop(void);
s32 sceIoClose(s32);
s32 sceIoOpen(void *, s32, s32);
M2C_UNK sceIoUnassign(M2C_UNK *);
s32 scePaf_BB3CBD19(s32, M2C_UNK *, M2C_UNK);
s32 sceVshCommonGui_10906D79(s32, s32, s32, s32, s32, s32, s32);
s32 sceVshCommonGui_1A6F3382(s32, s32, s32, s32, s32, s32, s32);
M2C_UNK sceVshCommonGui_35D57A35(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK sceVshCommonGui_DE027583(s32, s32, M2C_UNK, M2C_UNK, s32);
M2C_UNK sceVshCommonGui_F4D1E387(s32, s32, s32, s32, s32, s32, M2C_UNK);
M2C_UNK sceVshCommonGui_FA1DE461(s32, M2C_UNK *, void *);
M2C_UNK sce_paf_private_free(...);
M2C_UNK sce_paf_private_free2(void *);
M2C_UNK sce_paf_private_malloc(...);
M2C_UNK sce_paf_private_memalign(...);
M2C_UNK sce_paf_private_memcpy(M2C_UNK *, void *, M2C_UNK);
M2C_UNK sce_paf_private_memset(s32, M2C_UNK, M2C_UNK);
M2C_UNK sce_paf_private_printf(M2C_UNK *);
M2C_UNK sce_paf_private_qsort(...);
s32 sce_paf_private_strcmp(s32, M2C_UNK *);
M2C_UNK vsh_DE027583(s32, s32, M2C_UNK, M2C_UNK, s32);
M2C_UNK vsh_FA1DE461(s32, M2C_UNK *, void *);

#ifdef __cplusplus
}
#endif

#endif
