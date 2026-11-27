#ifndef SAVEDATA_UTILITY_DECLS_H
#define SAVEDATA_UTILITY_DECLS_H

#include "common.h"
#include "m2c_macros.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
/* vtables are still data (rodata asm): don't let cc1plus emit them (linkonce .gnu.linkonce.r) */
#pragma interface
extern "C++" {
#include "paf.h"
#include "vsh.h"
}
#endif

#ifdef __cplusplus
/* base class of Class_00024F10: ctor/dtor are single out-of-line copies (C2/D2 only:
   header inlines too big to inline, or another TU's linkonce); fields not typed yet */
class Class_000119A0 {
public:
    Class_000119A0(s32 arg1, s32 arg2);
    virtual void vfunc00();
    virtual void vfunc04();
#if FW_VERSION >= 150
    virtual void vfunc08();
#endif
    virtual ~Class_000119A0();
};
#endif

#ifdef __cplusplus
/* vtable _ZTV14Class_00024F10 (vptr D_00024F10, -fno-rtti: typeinfo slot 0):
   1.00 [vfunc00, vfunc04, D1, D0, vfunc10], 1.50+ [vfunc00, vfunc04, vfunc08, D1, D0, vfunc14] */
class Class_00024F10 : public Class_000119A0 {
public:
    Class_00024F10(s32 arg1, s32 arg2);
    virtual void vfunc00();
#if FW_VERSION >= 150
    virtual void vfunc08();
#endif
    virtual ~Class_00024F10();
    virtual void vfunc_last();
};
#endif

#ifdef __cplusplus
/* job slot: vtable _ZTV14Class_00025160 [D1, D0] (vptr D_00025160) */
class Class_00025160 {
public:
    Class_00025160(s32 owner);
    virtual ~Class_00025160();
    void Reset();

    s32 owner;  /* 0x04 */
    u32 state;  /* 0x08 (flags: bit 0, bit 4, 0x18, 0x19 tested) */
    s32 jobId;  /* 0x0C (Job_Cancel) */
    s32 unk10;  /* 0x10 */
    s32 unk14;  /* 0x14 */
};
#endif

#ifdef __cplusplus
/* object deleted through its virtual dtor (type unknown) */
class UnkPolyObj {
public:
    virtual ~UnkPolyObj();
};

/* job slot with a texture: vtable _ZTV14Class_0001FC80 (vptr D_0001FC80 before 2.82,
   D_00025300 after) [D1, D0, vfunc08, vfunc0C]; 2.71+ dropped the field at 0x20 */
class Class_0001FC80 : public Class_00025160 {
public:
    Class_0001FC80(s32 owner, s32 arg2);
    virtual ~Class_0001FC80();
    void LoadTexture();
    /* inline: both this dtor and Class_00024FC8's contain it */
    void Clear() {
        if (unk1C != 0) {
            delete unk1C;
            unk1C = 0;
        }
#if FW_VERSION >= 150
        tex = 0;
#endif
    }

    s32 unk18;                                  /* 0x18 */
    UnkPolyObj *unk1C;                          /* 0x1C */
#if FW_VERSION < 271
    s32 unk20;                                  /* 0x20 */
#endif
    paf::SurfaceRCPtr<paf::Surface> tex;        /* 0x24 (2.71+: 0x20) */
    s32 unk28;                                  /* 0x28 (2.71+: 0x24) */
};
#endif

#ifdef __cplusplus
/* vtable _ZTV14Class_00024FC8 (vptr D_00024F40 before 2.71, D_00025008 in 2.71, D_00024FC8 from 2.82) */
class Class_00024FC8 : public Class_0001FC80 {
public:
    Class_00024FC8(s32 owner, s32 arg2);
    virtual ~Class_00024FC8();

    s32 unk2C;  /* 0x2C (2.71+: 0x28) */
};
#endif

struct D_00025C48_s {
    s32 unk0;
    s32 unk4;
};

struct Unk_Unk_func_00000B08_0_50 {
    u8 pad0[0x30];
    s32 unk30;
};

struct Unk_Unk_func_00000B34_0_C {
    u8 pad0[0x38];
    s32 unk38;
};

struct Unk_Unk_func_000015EC_0_4 {
    u8 pad0[0x50];
    void *unk50;
};

struct Unk_Unk_func_000020F4_0_4 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_Unk_func_00003144_0_4 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_Unk_func_00003520_0_0 {
    u8 pad0[0xC];
    M2C_UNK (*unkC)();
};

struct Unk_Unk_func_00005510_0_4 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_Unk_func_00005A4C_0_4 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_Unk_func_0000CDAC_0_18 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00000A78_0 {
    u8 pad0[0x10];
    s32 unk10;
    u8 pad14[0x4];
    s32 unk18;
    u8 pad1C[0x8];
    s32 unk24;
};

struct Unk_func_00000B08_0 {
    u8 pad0[0xC];
    s32 unkC;
    s32 unk10;
    s32 unk14;
    u8 pad18[0x34];
    u8 unk4C;
    u8 pad4D[0x1];
    s8 unk4E;
    u8 pad4F[0x1];
    struct Unk_Unk_func_00000B08_0_50 *unk50;
};

struct Unk_func_00000B34_0 {
    u8 pad0[0xC];
    struct Unk_Unk_func_00000B34_0_C *unkC;
};

struct Unk_func_00000C70_1 {
    u8 pad0[0xA30];
    u8 unkA30;
};

struct Unk_func_00000D58_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_00001290_0 {
    u8 pad0[0x1CC];
    s32 unk1CC;
};

struct Unk_func_00001290_1 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_000015EC_0 {
    u8 pad0[0x4];
    struct Unk_Unk_func_000015EC_0_4 *unk4;
};

struct Unk_func_000015EC_temp_v0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00001718_0 {
    u8 pad0[0x4];
    struct Unk_func_00000B08_0 *unk4;
    u8 pad8[0x1];
    u8 unk9;
};

struct Unk_func_000017BC_0 {
    u8 pad0[0x4];
    struct Unk_func_00000B08_0 *unk4;
};

struct Unk_func_00001DF0_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s8 unk8;
    s8 unk9;
};

struct Unk_func_00001E0C_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s8 unk8;
    s8 unk9;
};

struct Unk_func_00002084_0 {
    u8 pad0[0x4];
    void ** unk4;
};

struct Unk_func_000020F4_0 {
    u8 pad0[0x4];
    struct Unk_Unk_func_000020F4_0_4 *unk4;
};

struct Unk_func_00002D04_0 {
    M2C_UNK *unk0;
    s32 unk4;
    s8 unk8;
    s8 unk9;
    u8 padA[0x12];
    s8 unk1C;
};

struct Unk_func_00002D50_0 {
    M2C_UNK *unk0;
    s32 unk4;
    s8 unk8;
    s8 unk9;
    u8 padA[0x12];
    s8 unk1C;
};

struct Unk_func_000030D4_0 {
    u8 pad0[0x4];
    void ** unk4;
};

struct Unk_func_00003144_0 {
    u8 pad0[0x4];
    struct Unk_Unk_func_00003144_0_4 *unk4;
};

struct Unk_func_00003520_0 {
    struct Unk_Unk_func_00003520_0_0 *unk0;
    u8 pad4[0x50];
    s32 unk54;
    s32 unk58;
    u8 pad5C[0x4];
    void **unk60;
};

struct Unk_func_00005510_0 {
    u8 pad0[0x4];
    struct Unk_Unk_func_00005510_0_4 *unk4;
};

struct Unk_func_00005A4C_0 {
    u8 pad0[0x4];
    struct Unk_Unk_func_00005A4C_0_4 *unk4;
};

struct Unk_func_00006B5C_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00006BB0_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00006C3C_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00006C90_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00006CE4_0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x15];
    s8 unk1D;
    u8 pad1E[0x2];
    s32 unk20;
};

struct Unk_func_00006D40_0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x15];
    s8 unk1D;
    u8 pad1E[0x2];
    s32 unk20;
};

struct Unk_func_00009448_0 {
    M2C_UNK *unk0;
    u8 pad4[0x14];
    s8 unk18;
};

struct Unk_func_0000AED4_0 {
    u8 pad0[0x24];
    struct Unk_func_0000AED4_temp_v0 *unk24;
};

struct Unk_func_0000AED4_temp_v0 {
    u8 pad0[0x5C];
    s32 unk5C;
};

struct Unk_func_0000B0CC_0 {
    u8 pad0[0xA30];
    u8 unkA30;
};

struct Unk_func_0000B0CC_1 {
    u8 pad0[0x500];
    u8 unk500;
};

struct Unk_func_0000B3C4_0 {
    M2C_UNK *unk0;
    u8 pad4[0x18];
    s32 unk1C;
    u8 pad20[0x4];
    s32 unk24;
    s32 unk28;
};

struct Unk_func_0000B560_0 {
    u8 pad0[0x28];
    s32 unk28;
};

struct Unk_func_0000CDAC_0 {
    u8 pad0[0x18];
    struct Unk_Unk_func_0000CDAC_0_18 *unk18;
};

struct Unk_func_0000CFD4_0 {
    u8 pad0[0x20];
    struct Unk_func_00013558_0 *unk20;
};

struct Unk_func_0000D588_0 {
    u8 pad0[0x38];
    u32 unk38;
};

struct Unk_func_0000DBE0_0 {
    u8 pad0[0x64];
    s8 unk64;
};

struct Unk_func_0000E724_0 {
    u8 pad0[0x5EC];
    u32 unk5EC;
};

struct Unk_func_0000F420_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00010F6C_0 {
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

struct Unk_func_00010F9C_0 {
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

struct Unk_func_00011044_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00011F5C_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000120A4_0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00012928_0 {
    u8 pad0[0x38];
    s32 unk38;
};

struct Unk_func_00012970_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000129FC_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00012A4C_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00012BB4_var_a0 {
    u8 pad0[0x4];
    struct Unk_func_00012BB4_var_v0 *unk4;
};

struct Unk_func_00012BB4_var_v0 {
    u8 pad0[0x4];
    void *unk4;
};

struct Unk_func_00012C0C_0 {
    M2C_UNK *unk0;
    s32 unk4;
};

struct Unk_func_00012C0C_var_v0 {
    u8 pad0[0x4];
    void *unk4;
};

struct Unk_func_00012F10_1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00012F10_temp_v1 {
    void *unk0;
    void **unk4;
};

struct Unk_func_00013450_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0001354C_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00013558_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00013568_0 {
    u8 pad0[0x8];
    u8 unk8;
    u8 pad9[0x7];
    s32 unk10;
};

struct Unk_func_00013594_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_000136CC_0 {
    u8 pad0[0x18];
    s32 unk18;
    s32 unk1C;
};

struct Unk_func_00013D44_0 {
    M2C_UNK * unk0;
    s32 unk4;
};

struct Unk_func_00014344_0 {
    u8 pad0[0xC];
    s32 unkC;
    s32 unk10;
};

struct Unk_func_00014420_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_00015310_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00015A68_0 {
    u8 pad0[0xA20];
    s32 unkA20;
    s32 unkA24;
    s32 unkA28;
};

struct Unk_func_00015C14_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_00015F1C_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00016678_0 {
    u8 pad0[0x8];
    s32 unk8;
    u8 padC[0xC];
    s32 unk18;
    s32 unk1C;
};

struct Unk_func_0001672C_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00016D54_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_00017010_var_a0 {
    u8 pad0[0x4];
    struct Unk_func_00017010_var_v0 *unk4;
};

struct Unk_func_00017010_var_v0 {
    u8 pad0[0x4];
    void *unk4;
};

struct Unk_func_000170C4_1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000170C4_temp_v1 {
    void *unk0;
    void **unk4;
};

struct Unk_func_00017604_0 {
    u8 pad0[0x4D];
    s8 unk4D;
};

struct Unk_func_0001760C_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_000176EC_0 {
    s32 unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_0001A5C0_0 {
    s32 unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_0001A848_0 {
    u8 pad0[0x100];
    s32 unk100;
};

struct Unk_vt_func_00001290_temp_a0 {
    u8 pad0[0xC];
    M2C_UNK (*unkC)(void **, void *);
};

struct Unk_vt_func_000014E8_arg0 {
    u8 pad0[0x50];
    M2C_UNK (*unk50)(void **, M2C_UNK);
};

struct Unk_vt_func_00002084_temp_a0 {
    u8 pad0[0x10];
    s32 (*unk10)(void **);
};

struct Unk_vt_func_000030D4_temp_a0 {
    u8 pad0[0x10];
    s32 (*unk10)(void **);
};

struct Unk_vt_func_00003520_temp_a0 {
    u8 pad0[0x30];
    M2C_UNK (*unk30)(void **);
};

struct Unk_vt_func_0000671C_arg0 {
    u8 pad0[0x10];
    s32 (*unk10)(void **);
};

typedef void (*func_ptr)(void);

extern M2C_UNK D_0001F6D0;
extern M2C_UNK D_0001F908;
extern s32 D_0001F958;
extern const char D_0001FAAC[];
extern const char D_0001FABC[];
extern const char D_0001FAD0[];
extern const char D_0001FAE4[];
extern const char D_0001FAF8[];
extern const char D_0001FB0C[];
extern M2C_UNK D_0001FC80;
extern M2C_UNK D_0001FDAC;
extern s32 D_000205B0;
extern s8 D_000205B4;
extern u8 D_000205B5;
extern s32 D_000205BC;
extern s32 D_00021ABC;
extern s8 D_000225C4;
extern s32 D_000225C8;
extern func_ptr D_00024264[];
extern M2C_UNK D_00024494;
extern s32 D_0002458C;
extern M2C_UNK D_000245CC;
extern s32 D_000245E4;
extern s32 D_00024734;
extern s32 D_0002474C;
extern s32 D_000248A0;
extern M2C_UNK D_00024AE0;
extern M2C_UNK D_00024B48;
extern M2C_UNK D_00024BB0;
extern M2C_UNK D_00024C18;
extern M2C_UNK D_00024C80;
extern M2C_UNK D_00024CE8;
extern M2C_UNK D_00024D50;
extern M2C_UNK D_00024E28;
extern M2C_UNK D_00024EF8;
extern M2C_UNK D_00024F10;
extern M2C_UNK D_00024F40;
extern s32 D_00024F48;
extern M2C_UNK D_00024FC8;
extern M2C_UNK D_00024FE8;
extern s32 D_000250E0;
extern s32 D_000250F0;
extern M2C_UNK D_00025100;
extern s32 D_00025148;
extern s32 D_00025160;
extern M2C_UNK D_00025288;
extern M2C_UNK D_00025300;
extern M2C_UNK D_00025370;
extern M2C_UNK D_00025458;
extern M2C_UNK D_00025498;
extern M2C_UNK D_000256A8;
extern M2C_UNK D_00025730;
extern M2C_UNK D_00025774;
extern s32 D_00025B10;
extern u8 D_00025B14;
extern u8 D_00025B15;
extern s32 D_00025B24;
extern s32 D_00025B2C;
extern M2C_UNK D_00025B3C;
extern struct D_00025C48_s D_00025C48;
extern s32 D_00026AAC;
extern M2C_UNK D_00026BC4;
extern s32 D_00026BDC;
extern s32 D_00026D04;
extern s32 D_00026D1C;
extern s32 D_00026E70;
extern M2C_UNK D_000270B8;
extern M2C_UNK D_00027120;
extern M2C_UNK D_00027188;
extern M2C_UNK D_000271F0;
extern M2C_UNK D_00027258;
extern M2C_UNK D_000272C0;
extern M2C_UNK D_00027328;
extern s32 D_00027400;
extern s32 D_00027518;
extern s32 D_00028268;
extern M2C_UNK D_00028288;
extern s32 D_00028394;
extern M2C_UNK func_00001438;
extern M2C_UNK func_00001DE0;
extern M2C_UNK func_00001F04;
extern M2C_UNK func_0000E458;
extern M2C_UNK func_000124B8;
extern M2C_UNK func_0001250C;
extern s32 func_00012AC8;

M2C_UNK Job_Cancel(M2C_UNK, s32);
s32 Job_Start(M2C_UNK, M2C_UNK *, void *, M2C_UNK, M2C_UNK, M2C_UNK *);
s32 Job_isCanceled(s32);
void _ZN14Class_0001FC8011LoadTextureEv(void *self);
void _ZN14Class_0001FC80C1Eii(void *self, s32 owner, s32 arg2);
void _ZN14Class_0001FC80C2Eii(void *self, s32 owner, s32 arg2);
void _ZN14Class_000251605ResetEv(void *self);
void _ZN14Class_00025160C2Ei(void *self, s32 owner);
void _ZN14Class_00025160D2Ev(void *self);
void _ZN3paf12SurfaceRCPtrINS_7SurfaceEE6AddRefEv(void *self);
void _ZN3paf12SurfaceRCPtrINS_7SurfaceEEC1EPS1_(void *self, void *p);
M2C_UNK _ZN3paf4View12PageActivateEPKc(s32);
M2C_UNK _ZN3paf4View12PageCloseAllEv(s32);
void *_ZN3paf4View4FindEPKc(const char *name);
s32 _ZN3paf4View8PageOpenEPKcii(s32, s32, s32, s32);
M2C_UNK _ZN3paf4View9PageCloseEPKc(s32);
void _ZN3paf4View9PlaySoundEPKc(void *self, const char *name);
s32 _ZN3paf6Module12SetInterfaceEiPv(s32, s32, s32);
M2C_UNK _ZN3paf8PhXmList10SetItemNumEi(s32, M2C_UNK);
M2C_UNK _ZN3paf9PhHandler11KillTimerCBEi(s32, M2C_UNK);
M2C_UNK _ZN3vsh13Infobar_CloseEb(M2C_UNK);
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
void _ZNK3paf4View10GetTextureEPKc(void *ret, void *self, const char *name);
s32 _ZNK3paf4View8PageRootEPKc(s32, M2C_UNK *);
s32 _ZNK3paf4View9GetStringEPKc(s32, M2C_UNK *);
M2C_UNK _ZdaPv(s32);
M2C_UNK _ZdlPv(void *);
void func_00000190(void);
void func_000001B4(void);
u8 func_000001D8(void);
void func_000003B8(void);
void func_000003D8(void);
void func_00000440(s32 arg0);
s32 func_00000464(s32);
s32 func_000008A4(void *arg0);
s32 func_000008C0(void *arg0);
s32 func_00000A78(struct Unk_func_00000A78_0 *arg0);
s32 func_00000B08(struct Unk_func_00000B08_0 *arg0);
void func_00000B14(void *arg0);
void func_00000B34(struct Unk_func_00000B34_0 *arg0);
M2C_UNK func_00000B9C(void *, s32);
s32 func_00000BCC(M2C_UNK, s32);
s32 func_00000C70(struct Unk_func_00000B08_0 *arg0, struct Unk_func_00000C70_1 *arg1);
s32 func_00000C8C(void *arg0, s32 arg1);
M2C_UNK func_00000CC8(void *);
s32 func_00000D58(struct Unk_func_00000D58_0 *arg0);
s32 func_00000D74(void *arg0);
void func_00000EA8(void);
void func_00001290(struct Unk_func_00001290_0 *arg0, struct Unk_func_00001290_1 *arg1);
void func_00001470(void);
void func_00001478(void *arg0, void *arg1);
void func_000014E8(struct Unk_vt_func_000014E8_arg0 **arg0, M2C_UNK arg1);
s32 func_000015A4(void *arg0);
void func_000015C0(void *arg0);
s32 func_000015CC(s32);
void func_000015EC(struct Unk_func_000015EC_0 *arg0, s32 arg1);
s32 func_000015F0(void *arg0);
M2C_UNK func_00001604(...);
void func_00001668(void *arg0, s32 arg1);
void func_00001674(void);
s32 func_00001680(s32);
void func_000016F0(s32 arg0);
void func_00001718(struct Unk_func_00001718_0 *arg0, s32 arg1);
void func_000017BC(struct Unk_func_000017BC_0 *arg0, M2C_UNK arg1);
M2C_UNK func_0000181C(void *, M2C_UNK);
s32 func_00001A70(s32);
void func_00001B00(void *arg0);
s32 func_00001B48(s32);
s32 func_00001C40(s32);
void func_00001D3C(s32 arg0);
void func_00001DE8(void *arg0);
void func_00001DF0(struct Unk_func_00001DF0_0 *arg0, s32 arg1, s8 arg2, s8 arg3);
void func_00001E0C(struct Unk_func_00001E0C_0 *arg0, s32 arg1, s8 arg2, s8 arg3);
void func_00001EA0(void *arg0, s32 arg1, s8 arg2, s8 arg3);
void func_00001EBC(void *arg0, s32 arg1, s8 arg2, s8 arg3);
void func_00002084(struct Unk_func_00002084_0 *arg0, s32 arg1);
void func_000020F4(struct Unk_func_000020F4_0 *arg0, s32 arg1);
void func_00002114(void *arg0, s32 arg1);
void func_00002134(struct Unk_func_00001DF0_0 *arg0, s32 arg1);
void func_0000216C(struct Unk_func_00001DF0_0 *arg0, s32 arg1);
void func_00002198(void *arg0, s32 arg1);
void func_000021EC(M2C_UNK **arg0, s32 arg1);
void func_00002224(M2C_UNK **arg0, s32 arg1);
s32 func_000026C0(s32);
void func_000026EC(struct Unk_func_00001DF0_0 *arg0, s32 arg1);
s32 func_00002738(s32);
void func_00002854(M2C_UNK **arg0, s32 arg1);
void func_00002AD8(s32 arg0);
void func_00002AF4(s32 arg0);
s32 func_00002B10(void *arg0, s32 arg1);
s32 func_00002C84(void *arg0, s32 arg1);
void func_00002CD0(void *arg0, s32 arg1);
void func_00002D04(struct Unk_func_00002D04_0 *arg0, s32 arg1, s8 arg2);
void func_00002D50(struct Unk_func_00002D50_0 *arg0, s32 arg1, s8 arg2);
s32 func_00002DA8(s32);
void func_00002E54(void *arg0, s32 arg1, s8 arg2);
void func_00002EA0(void *arg0, s32 arg1, s8 arg2);
void func_00002F68(void);
void func_000030D4(struct Unk_func_000030D4_0 *arg0, s32 arg1);
void func_00003144(struct Unk_func_00003144_0 *arg0, s32 arg1);
void func_000031E8(void *arg0, s32 arg1);
void func_0000326C(void *arg0, s32 arg1);
void func_00003520(struct Unk_func_00003520_0 *arg0);
void func_000036EC(struct Unk_func_00002D04_0 *arg0, s32 arg1);
void func_00003720(struct Unk_func_00002D04_0 *arg0, s32 arg1);
void func_00003724(void *arg0);
void func_000038E8(M2C_UNK **arg0, s32 arg1);
void func_0000391C(M2C_UNK **arg0, s32 arg1);
s32 func_000039A8(s32);
void func_00003AA0(void *arg0);
s32 func_00003C60(s32);
void func_00003EEC(s32 arg0);
void func_00003F08(s32 arg0);
void func_00003FE0(struct Unk_func_00002D04_0 *arg0, s32 arg1);
void func_00004228(M2C_UNK **arg0, s32 arg1);
void func_00004290(M2C_UNK **arg0);
void func_000042B8(M2C_UNK **arg0);
s32 func_00005168(s32, s32, s32);
void func_00005510(struct Unk_func_00005510_0 *arg0, s32 arg1);
void func_00005738(s32 arg0);
void func_0000576C(s32 arg0);
void func_000057D8(void *arg0, s32 arg1);
void func_00005A4C(struct Unk_func_00005A4C_0 *arg0);
void func_00005CBC(M2C_UNK **arg0);
void func_00005CE4(M2C_UNK **arg0);
void func_00005D0C(M2C_UNK **arg0);
s32 func_00005DAC(s32, s32);
void func_00005E30(void *arg0);
void func_00005E74(void *arg0, s32 arg1);
void func_00005E9C(void *arg0);
void func_00005F08(void *arg0);
s32 func_00005F30(s32, s32, s32);
void func_00006064(void *arg0, void *arg1);
void func_000063C0(void *arg0, s32 arg1);
u32 func_000063D4(s32 arg0, void *arg1, u32 arg2);
void func_0000644C(s32 arg0, s32 arg1);
void func_00006484(M2C_UNK **arg0);
s32 func_0000671C(struct Unk_vt_func_0000671C_arg0 **arg0, s32 arg1);
s32 func_000068E4(s32, s32);
s32 func_00006934(s32);
void func_00006AB4(M2C_UNK **arg0);
void func_00006AC4(M2C_UNK **arg0);
void func_00006AEC(M2C_UNK **arg0);
s32 func_00006B04(void);
void func_00006B14(M2C_UNK **arg0);
void func_00006B24(M2C_UNK **arg0);
void func_00006B34(M2C_UNK **arg0);
void func_00006B5C(struct Unk_func_00006B5C_0 *arg0);
void func_00006B78(M2C_UNK **arg0);
s32 func_00006B7C(void **arg0, s32 arg1);
void func_00006B88(M2C_UNK **arg0);
void func_00006BB0(struct Unk_func_00006BB0_0 *arg0);
void func_00006BCC(M2C_UNK **arg0);
void func_00006BF4(M2C_UNK **arg0);
void func_00006C04(M2C_UNK **arg0);
void func_00006C14(M2C_UNK **arg0);
void func_00006C3C(struct Unk_func_00006C3C_0 *arg0);
void func_00006C58(M2C_UNK **arg0);
void func_00006C68(M2C_UNK **arg0);
void func_00006C90(struct Unk_func_00006C90_0 *arg0);
void func_00006CAC(M2C_UNK **arg0);
void func_00006CD4(M2C_UNK **arg0);
void func_00006CE4(struct Unk_func_00006CE4_0 *arg0);
void func_00006D08(M2C_UNK **arg0);
void func_00006D18(M2C_UNK **arg0);
void func_00006D40(struct Unk_func_00006D40_0 *arg0);
void func_00006D64(M2C_UNK **arg0);
void func_00006D74(M2C_UNK **arg0);
void func_00006D9C(M2C_UNK **arg0);
void func_00006DAC(M2C_UNK **arg0);
void func_00006DFC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00006F18(M2C_UNK **arg0);
void func_00006F28(M2C_UNK **arg0);
void func_00006F50(M2C_UNK **arg0);
void func_00006F78(M2C_UNK **arg0);
void func_00006F88(M2C_UNK **arg0);
void func_00006F98(M2C_UNK **arg0);
void func_00006FC0(void *arg0);
void func_00006FDC(M2C_UNK **arg0);
void func_00006FEC(M2C_UNK **arg0);
void func_00007014(void *arg0);
void func_00007030(M2C_UNK **arg0);
void func_00007058(M2C_UNK **arg0);
void func_00007068(M2C_UNK **arg0);
void func_00007078(M2C_UNK **arg0);
void func_000070A0(void *arg0);
void func_000070BC(M2C_UNK **arg0);
void func_000070CC(M2C_UNK **arg0);
void func_000070F4(void *arg0);
void func_00007110(M2C_UNK **arg0);
void func_00007138(M2C_UNK **arg0);
void func_00007148(void *arg0);
void func_0000716C(M2C_UNK **arg0);
void func_0000717C(M2C_UNK **arg0);
void func_000071A4(void *arg0);
void func_000071C8(M2C_UNK **arg0);
void func_000071D8(M2C_UNK **arg0);
void func_00007200(M2C_UNK **arg0);
void func_00007210(M2C_UNK **arg0);
M2C_UNK func_000072DC(s32);
M2C_UNK func_000075F4(s32);
s32 func_00007758(s32);
void func_000078B8(struct Unk_func_00000B08_0 *arg0, s32 arg1);
s32 func_00007A68(s32);
void func_00007C50(M2C_UNK **arg0);
void func_00007C78(M2C_UNK **arg0);
void func_00007CA0(M2C_UNK **arg0);
void func_00008134(s32 **arg0);
s32 func_0000819C(s32, s32);
void func_00008210(void *arg0);
s32 func_0000827C(s32, s32, s32, s32);
s32 func_000082A4(s32 arg0);
s32 func_000082C4(void *arg0, s32 arg1);
s32 func_000084B0(s32, s32);
void func_00008674(M2C_UNK **arg0);
void func_0000869C(M2C_UNK **arg0);
void func_000086C4(M2C_UNK **arg0);
s32 func_00008754(void *arg0, s32 arg1);
void func_00008D74(M2C_UNK **arg0);
void func_00008D9C(M2C_UNK **arg0);
s32 func_00008E24(s32);
s32 func_00008E40(s32);
s32 func_00008E9C(s32, s32, s32);
s32 func_00008F10(void *arg0);
s32 func_00008F18(void *arg0, s32 arg1);
s32 func_00008FEC(s32 arg0);
s32 func_00009010(s32, s32, s32);
s32 func_000090CC(s32, s32, s32);
u32 func_00009198(s32 arg0, void *arg1, u32 arg2);
s32 func_0000936C(void *arg0, s32 arg1);
void func_00009448(struct Unk_func_00009448_0 *arg0, s32 arg1);
void func_00009480(M2C_UNK **arg0);
void func_000094A8(M2C_UNK **arg0);
void func_000094D0(M2C_UNK **arg0);
s32 func_00009910(void);
s32 func_0000998C(s32 arg0);
s32 func_000099E8(s32 arg0);
s32 func_00009AEC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00009C94(M2C_UNK **arg0);
void func_0000A108(s32 arg0);
s32 func_0000A114(void);
void func_0000A230(void *arg0);
void func_0000A25C(s32 arg0);
s32 func_0000A260(void *arg0);
M2C_UNK func_0000A290(M2C_UNK);
void func_0000A2E0(void *arg0);
void func_0000A428(void *arg0);
void func_0000A930(void);
void func_0000A938(void);
s32 func_0000A940(s32, s32, s32);
void func_0000A990(s32 arg0);
s32 func_0000AAC8(s32, s32, s32);
s32 func_0000ABD8(void *arg0);
s32 func_0000ADC4(s32, s32, s32, s32);
void func_0000AED4(struct Unk_func_0000AED4_0 *arg0, s32 arg1);
s32 func_0000AEF0(s32, s32);
void func_0000AF7C(void);
void func_0000AF90(M2C_UNK **arg0);
void func_0000AF9C(void);
void func_0000AFB8(M2C_UNK **arg0);
void func_0000AFE0(M2C_UNK **arg0);
void func_0000B0CC(struct Unk_func_0000B0CC_0 *arg0, struct Unk_func_0000B0CC_1 *arg1);
void ***func_0000B360(void ***arg0, void *arg1, void **arg2);
void func_0000B3C8(void *arg0);
void func_0000B560(struct Unk_func_0000B560_0 *arg0);
s32 func_0000B580_v250(s32, s32);
s32 func_0000B634(s32, s32);
void func_0000B644(void);
s32 func_0000B734(s32, s32);
void func_0000B818(void);
void func_0000B834(void);
void func_0000B850(void);
void func_0000B86C(void);
void func_0000B978(void *arg0, s32 arg1);
s32 func_0000BA00(void *arg0);
s32 func_0000BA10(void *arg0);
s32 func_0000BA20(void *arg0, s32 arg1);
s32 func_0000BA4C(void *arg0);
void func_0000BA5C(void *arg0);
void func_0000BAD8(void *arg0);
void func_0000BB3C(s32 **arg0);
void func_0000BB64(s32 **arg0);
M2C_UNK func_0000BCEC(s32, M2C_UNK);
s32 func_0000BCF0(s32, s32);
s32 func_0000BE0C(s32, s32, s32);
void func_0000BE88(void);
void func_0000C258(void *arg0, s32 arg1);
void func_0000C294(M2C_UNK **arg0);
void func_0000C2A4(M2C_UNK **arg0);
s32 func_0000C620(void *arg0);
s32 func_0000C698(void);
void func_0000C69C(void);
void func_0000C784(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
s32 func_0000C824(s32);
void func_0000C860(void *arg0);
s32 func_0000CD18(s32, s32);
void func_0000CDAC(struct Unk_func_0000CDAC_0 *arg0);
s32 func_0000CF6C(s32);
s32 func_0000CFD4(struct Unk_func_0000CFD4_0 *arg0);
void ***func_0000CFF0(void ***arg0, void *arg1, void **arg2);
void func_0000D3F4(M2C_UNK **arg0);
void func_0000D414(void *arg0);
void func_0000D41C(M2C_UNK **arg0);
void func_0000D444(M2C_UNK **arg0);
M2C_UNK func_0000D570(M2C_UNK);
s32 func_0000D57C(void);
s32 func_0000D588(struct Unk_func_0000D588_0 *arg0);
void func_0000D5FC(void *arg0);
void func_0000D674(paf::View *view, paf::PhWidget *widget, s32 idx);
s32 func_0000D678(void *arg0);
s32 func_0000D828(void *);
void func_0000D88C(paf::View *view, paf::PhWidget *widget, s32 idx);
s32 func_0000DBE0(struct Unk_func_0000DBE0_0 *arg0);
s32 func_0000DC4C(void *arg0);
s32 func_0000DEEC(s32);
void func_0000E000(s32 *arg0, s32 arg1);
s32 func_0000E0F8(void *arg0);
s32 func_0000E334(void *arg0);
s32 func_0000E380(s32, s32, s32);
void func_0000E42C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_0000E454(void *arg0);
s32 func_0000E60C(s32, s32);
void func_0000E618(void *arg0);
void func_0000E6EC(s32 arg0);
void func_0000E708(s32 arg0);
s32 func_0000E724(struct Unk_func_0000E724_0 *arg0);
void func_0000E818(void *arg0, s32 arg1);
void func_0000E898(s32 arg0, s32 arg1, s32 arg2);
void func_0000EB30(void *arg0, s32 arg1);
s32 func_0000EBEC(s32, s32);
void func_0000ECCC(s32 arg0);
s32 func_0000ECD0(s32, s32, s32, s32);
void func_0000ECE8(s32 arg0);
s32 func_0000ED04(void *arg0);
void func_0000F298(void *arg0, s32 arg1, s32 arg2);
void func_0000F38C(void *arg0, s32 arg1);
u32 func_0000F420(struct Unk_func_0000F420_0 *arg0, u32 arg1);
s32 func_0000F480(void);
s32 func_0000F968(void *arg0);
u32 func_0000F9CC(void *arg0, u32 arg1);
M2C_UNK func_0000FAF4(...);
void func_0000FBB4(void **arg0);
void ***func_0000FC68(void ***arg0, void *arg1, void **arg2);
s32 func_0000FE18(void *arg0);
s32 func_0000FE38(s32 arg0, s32 arg1);
void func_0000FF24(void *arg0);
void func_0000FF74(void *arg0, s32 arg1, s32 arg2);
void func_0000FFB8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_00010000(void);
void func_0001001C(void);
void func_00010038(void *arg0, paf::View *view, const char *page, const char *name);
u8 func_00010070(void *arg0);
s32 func_00010090(s32);
s32 func_000100F4(s32);
s32 func_0001017C(void *arg0);
s32 func_00010184(void *arg0);
s32 func_0001018C(void *arg0);
s32 func_00010194(void *arg0);
s32 func_0001019C(void *arg0);
s32 func_000101A4(void *arg0);
s32 func_000101AC(void *arg0);
void func_000101B4(void *arg0, s32 arg1);
void func_000101D8(void *arg0);
void func_000101F4(void *arg0);
void func_00010210(void *arg0, s32 *arg1);
void func_000102E0(void);
s32 func_00010444(s32 arg0);
s32 func_00010828(...);
void func_0001086C(s32 arg0);
void func_00010898(void *arg0);
s32 func_000109E4(s32 arg0);
void func_00010B90(void);
s32 func_00010D7C(void);
void func_00010E64(void *arg0, s32 *arg1, void **arg2);
void func_00010F6C(struct Unk_func_00010F6C_0 *arg0, s32 arg1);
void func_00010F9C(struct Unk_func_00010F9C_0 *arg0, s32 arg1);
void func_00010FCC(M2C_UNK **arg0);
void func_00010FDC(s32 **arg0);
void func_00010FEC(s32 **arg0);
s32 func_00011044(struct Unk_func_00011044_0 *arg0);
s32 func_00011100(s32);
void func_00011150(s32 arg0);
void func_000112D4(M2C_UNK **arg0);
void func_000112FC(M2C_UNK **arg0);
s32 func_00011324(s32);
void func_0001134C(s32 **arg0);
void func_00011374(s32 **arg0);
M2C_UNK func_000113AC(s32);
M2C_UNK func_000113C4(s32);
s32 func_00011584(s32, s32, s32, s32, s32);
void func_000116F0(M2C_UNK **arg0);
s32 func_000117A8(s32);
void func_00011968(M2C_UNK **arg0);
void func_00011978(M2C_UNK **arg0);
s32 func_000119A0_v250(s32, s32, s32, s32, s32);
s32 func_00011B44(s32, s32, s32, s32, s32);
void func_00011D68(M2C_UNK **arg0);
void func_00011F5C(struct Unk_func_00011F5C_0 *arg0);
void func_000120A4(struct Unk_func_000120A4_0 *arg0);
s32 func_000120E8(s32, s32);
void func_000121E0(void);
void func_000121E8(void);
s32 func_0001233C(void);
void func_00012344(s32 arg0, s32 arg1);
void func_0001249C(s32 arg0);
s32 func_000124D0(void *arg0);
s32 func_000124E0(s32, s32);
void func_00012504(void *arg0, s8 arg1);
s32 func_00012848(s32, s32, s32, s32, s32);
void func_00012928(struct Unk_func_00012928_0 *arg0);
void func_00012970(struct Unk_func_00012970_0 *arg0);
void func_000129FC(struct Unk_func_000129FC_0 *arg0);
void func_00012A4C(struct Unk_func_00012A4C_0 *arg0);
void func_00012BB4(void **arg0);
void func_00012C0C(struct Unk_func_00012C0C_0 *arg0);
M2C_UNK func_00012CF0(s32);
s32 func_00012E04(s32, s32, s32, s32);
void func_00012ED4(void *arg0);
void ***func_00012F10(void ***arg0, struct Unk_func_00012F10_1 *arg1, void **arg2);
s32 func_000131B8(s32 arg0, u32 arg1);
void func_000132F0(void);
void func_0001330C(void);
void func_00013328(void);
void func_00013344(void);
void func_00013450(struct Unk_func_00013450_0 *arg0, s32 arg1);
s32 func_00013480(void);
s32 func_0001354C(struct Unk_func_0001354C_0 *arg0);
s32 func_00013558(struct Unk_func_00013558_0 *arg0);
s32 func_00013568(struct Unk_func_00013568_0 *arg0, s32 arg1);
void func_00013594(struct Unk_func_00013594_0 *arg0);
s32 func_00013644(s32);
void func_0001366C(s32 **arg0);
void func_00013694(s32 **arg0);
void func_000136CC(struct Unk_func_000136CC_0 *arg0);
s32 func_000138D0(s32);
s32 func_00013A48(s32);
s32 func_00013B3C(s32 arg0);
s32 func_00013B70(s32, s32, s32, s32);
s32 func_00013C30(s32, s32, s32);
s32 func_00013D18(s32, s32);
void func_00013D44(struct Unk_func_00013D44_0 *arg0, s32 arg1);
s32 func_00013D70(void);
s32 func_00013D7C(void);
void func_00013D80(M2C_UNK **arg0);
void func_00013D90(M2C_UNK **arg0);
s32 func_00013DB8(s32);
s32 func_00013DD0(s32, s32);
s32 func_00013F4C(s32, s32, s32);
void func_0001425C(void);
M2C_UNK func_000142C4(M2C_UNK, M2C_UNK);
void func_00014344(struct Unk_func_00014344_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_000143E4(struct Unk_func_00014344_0 *arg0);
void func_000143EC(s32 *arg0, s32 arg1, s32 arg2);
void func_00014410(s32 *arg0, s32 arg1);
void func_00014420(struct Unk_func_00014420_0 *arg0);
void func_000145FC(void *arg0);
void func_00014824(paf::View *view, paf::PhWidget *widget, s32 idx);
s32 func_0001492C(void *arg0);
void func_00015310(struct Unk_func_00015310_0 *arg0);
void func_00015374(s32 arg0, s8 arg1);
void func_0001549C(s32 *arg0, s32 arg1);
M2C_UNK func_000156E0(...);
s32 func_00015770(s32);
void func_000157FC(s32 arg0);
M2C_UNK func_00015834(s32);
void func_00015A68(struct Unk_func_00015A68_0 *arg0);
M2C_UNK func_00015AAC(...);
void func_00015B44(void *arg0);
s32 func_00015B7C(s32, s32);
s32 func_00015BC8(s32, s32);
void func_00015C14(struct Unk_func_00015C14_0 *arg0, s32 arg1);
s32 func_00015CEC(void);
void func_00015F1C(struct Unk_func_00015F1C_0 *arg0, s32 arg1);
void func_00015F80(void *arg0);
void func_00015F90(void *arg0, s32 arg1);
M2C_UNK func_00015FD0(...);
void func_00016058(void *arg0);
s32 func_000160CC(s32, s32);
void func_00016678(struct Unk_func_00016678_0 *arg0, s32 arg1, s32 arg2);
void func_0001672C(struct Unk_func_0001672C_0 *arg0, s32 arg1);
s32 func_00016828(void);
s32 func_00016CE0(s32);
s32 func_00016D54(struct Unk_func_00016D54_0 *arg0);
s32 func_00016F4C(s32);
void func_00017010(void **arg0);
M2C_UNK func_00017068(void *);
void ***func_000170C4(void ***arg0, struct Unk_func_000170C4_1 *arg1, void **arg2);
s32 func_00017598(struct Unk_func_00000B08_0 *arg0, struct Unk_func_00000C70_1 *arg1);
s32 func_000175D0(void *);
s32 func_000175E0(s32, s32);
void func_000175FC(void);
void func_00017604(struct Unk_func_00017604_0 *arg0, s8 arg1);
s32 func_0001760C(struct Unk_func_0001760C_0 *arg0);
M2C_UNK *func_00017614(void);
M2C_UNK func_00017678(s32);
s32 func_000176EC(struct Unk_func_000176EC_0 *arg0);
s32 func_00017760(void);
s32 func_000179AC(s32, s32, s32, s32, s32);
s32 func_00017DD0(s32, s32, s32);
s32 func_00017F54(s32 arg0, u32 arg1);
s32 func_00018A4C(s32, s32);
s32 func_00018BC0(void *arg0);
M2C_UNK *func_00018BC8(void);
s32 func_00018C28(void);
void func_00018C30(s32 arg0, s32 arg1);
s32 func_00018C48(s32);
s32 func_00018CE8(void);
M2C_UNK func_00019318(s32, s32, s32, s32);
s32 func_0001948C(s32, s32, s32);
void func_00019610(s32 arg0, s32 arg1);
void func_0001962C(s32 arg0, s32 arg1);
s32 func_00019820(...);
M2C_UNK func_00019930(s32);
void func_00019A20(s32 arg0);
s32 func_00019DE0(s32);
s32 func_00019E68(u8 *arg0, s32 arg1);
void func_00019E90(s32 *arg0, s32 arg1, s32 arg2);
s32 func_0001A23C(s32);
void func_0001A2B8(s32 *arg0, s32 arg1, s32 arg2);
void func_0001A2E0(s32 *arg0, s32 arg1);
void func_0001A5C0(struct Unk_func_0001A5C0_0 *arg0);
s32 func_0001A848(struct Unk_func_0001A848_0 *arg0);
s32 func_0001A860(s32);
void func_0001A8D4(void);
s32 func_0001A91C(void);
void func_0001A93C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_0001A970(s32, s32, s32, s32);
s32 func_0001AB50(s32, s32, s32, s32);
void func_0001AFBC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_0001AFF0(s32, s32, s32, s32);
s32 func_0001B128(s32, s32, s32);
s32 func_0001BCC8(s32, s32, s32);
void func_0001BE68(s32 arg0, s32 arg1);
s32 func_0001C16C(s32);
void func_0001C254(s32 arg0);
M2C_UNK *func_0001C3B8(s32 arg0);
M2C_UNK *func_0001C3F8(s32 arg0);
void func_0001C490(s32 arg0, s32 arg1, s32 arg2);
s32 func_0001C570(s32, s32, s32, s32);
s32 func_0001D034(void *arg0);
s32 func_0001D04C(s32);
void func_0001D0C0(void);
s32 func_0001D0FC(void);
s32 func_0001D108(void);
void func_0001D770(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_0001D7A4(s32, s32, s32, s32);
s32 func_0001D8DC(s32, s32, s32);
M2C_UNK func_0001E7AC(...);
M2C_UNK func_0001F558(s32);
s32 func_0001F664(s32, s32);
s32 func_00022CF0(s32, s32);
void func_000237C8(void);
M2C_UNK func_00023820(...);
s32 module_stop(void);
s32 sceIoClose(s32);
s32 sceIoOpen(void *, s32, s32);
M2C_UNK sceIoUnassign(M2C_UNK *);
s32 scePaf_2CD3AB9E(s32, M2C_UNK *);
M2C_UNK scePaf_3AC3E06A(...);
s32 scePaf_3EDD45EF(M2C_UNK, M2C_UNK *, struct Unk_func_00012928_0 *, M2C_UNK, M2C_UNK, M2C_UNK *);
M2C_UNK scePaf_4729E549(...);
M2C_UNK scePaf_47B886E3(M2C_UNK, s32);
s32 scePaf_723D0C80(s32);
M2C_UNK scePaf_7EED9087(...);
M2C_UNK scePaf_9479C11B(s32, M2C_UNK, M2C_UNK);
M2C_UNK scePaf_A76BB96F(s32, M2C_UNK);
s32 scePaf_BB3CBD19(s32, M2C_UNK *, M2C_UNK);
s32 scePaf_CD216C47(s32, M2C_UNK *);
M2C_UNK scePaf_F5001144(void *);
M2C_UNK scePaf_F6921CAB(...);
s32 sceVshCommonGui_10906D79(s32, s32, s32, s32, s32, s32, s32);
M2C_UNK sceVshCommonGui_11C48509(void *, s32);
s32 sceVshCommonGui_1A6F3382(s32, s32, s32, s32, s32, s32, s32);
M2C_UNK sceVshCommonGui_2EBB5C2B(void *, s32);
s32 sceVshCommonGui_30FA68C3(...);
M2C_UNK sceVshCommonGui_73765E63(void *, s32);
M2C_UNK sceVshCommonGui_8F414E35(s32);
s32 sceVshCommonGui_C9529428(...);
s32 sceVshCommonGui_D728DEEA(s32, s32, s32, s32, s32, s32, s32);
s32 sceVshCommonGui_EC899EBE(...);
M2C_UNK sceVshCommonGui_F4D1E387(s32, s32, s32, s32, s32, s32, M2C_UNK);
M2C_UNK sce_paf_private_free(...);
M2C_UNK sce_paf_private_free2(void *);
M2C_UNK sce_paf_private_malloc(...);
M2C_UNK sce_paf_private_memalign(...);
M2C_UNK sce_paf_private_memcpy(M2C_UNK *, void *, M2C_UNK);
M2C_UNK sce_paf_private_memset(s32, M2C_UNK, M2C_UNK);
M2C_UNK sce_paf_private_printf(M2C_UNK *);
M2C_UNK sce_paf_private_qsort(...);

#ifdef __cplusplus
}
#endif

#endif
