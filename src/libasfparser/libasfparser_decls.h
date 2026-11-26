#ifndef LIBASFPARSER_DECLS_H
#define LIBASFPARSER_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_Unk_func_00000FB8_0_38 {
    u8 pad0[0x40];
    u32 unk40;
};

struct Unk_func_00000214_temp_v0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0000083C_0 {
    s32 unk0;
    u8 pad4[0x4];
    M2C_UNK (*unk8)(s32, s32);
};

struct Unk_func_00000FB8_0 {
    u8 pad0[0x8];
    u32 unk8;
    u8 padC[0x14];
    u32 unk20;
    u8 pad24[0x14];
    struct Unk_Unk_func_00000FB8_0_38 *unk38;
};

struct Unk_func_00001728_0 {
    u8 pad0[0x1];
    u8 unk1;
    u8 pad2[0x6];
    u32 unk8;
    s32 unkC;
    u8 pad10[0x10];
    u32 unk20;
    u8 pad24[0x4];
    u32 unk28;
};

struct Unk_func_00001758_0 {
    u8 pad0[0x20];
    u32 unk20;
    u32 unk24;
};

struct Unk_func_00001820_0 {
    u8 pad0[0x2];
    u8 unk2;
};

struct Unk_func_0000182C_0 {
    u8 pad0[0x2];
    u8 unk2;
};

struct Unk_func_00001838_0 {
    u8 pad0[0x2];
    u8 unk2;
};

struct Unk_func_00001844_0 {
    u8 pad0[0x3];
    u8 unk3;
};

struct Unk_func_00001850_0 {
    u8 pad0[0x3];
    u8 unk3;
};

struct Unk_func_0000185C_0 {
    u8 pad0[0x3];
    u8 unk3;
};

struct Unk_func_00001874_0 {
    u8 pad0[0x4];
    u8 unk4;
};

struct Unk_func_00001880_0 {
    u8 pad0[0x4];
    u8 unk4;
};

struct Unk_func_0000188C_0 {
    u8 pad0[0x4];
    u8 unk4;
};

struct Unk_func_00001898_0 {
    u8 pad0[0x17];
    u8 unk17;
};

struct Unk_func_000018A4_0 {
    u8 pad0[0x17];
    u8 unk17;
};

struct Unk_func_000018CC_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_00003B44_temp_v0 {
    u8 pad0[0x8];
    s32 *unk8;
};

struct Unk_func_0000478C_0 {
    u8 pad0[0x2AC];
    s32 unk2AC;
    u8 pad2B0[0x1C];
    s32 unk2CC;
};

struct Unk_func_000048C4_0 {
    u8 pad0[0x2D4];
    s32 unk2D4;
    s32 unk2D8;
    s32 unk2DC;
};

struct Unk_func_00004A0C_0 {
    u8 pad0[0xA];
    s16 unkA;
    u8 padC[0x27C];
    s32 unk288;
};

struct Unk_func_00006638_0 {
    u8 pad0[0x28];
    u16 unk28;
    u8 pad2A[0x278];
    u16 unk2A2;
    u16 unk2A4;
    u8 pad2A6[0x6];
    s32 unk2AC;
};

struct Unk_func_0000664C_0 {
    u8 pad0[0x14];
    s32 unk14;
    u8 pad18[0x290];
    s16 unk2A8;
    u16 unk2AA;
    s32 unk2AC;
};

struct Unk_func_00006678_0 {
    u8 pad0[0x10];
    u32 unk10;
    u8 pad14[0x14];
    s32 unk28;
};

struct Unk_func_000066EC_0 {
    u32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};

struct Unk_func_0000672C_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0000673C_0 {
    u32 unk0;
    u32 unk4;
    s32 unk8;
};

struct Unk_func_00006760_0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00006774_0 {
    u8 pad0[0x8];
    u32 unk8;
};

struct Unk_func_00006780_0 {
    u32 unk0;
    u32 unk4;
    s32 unk8;
    s32 unkC;
};


s32 func_000001E0(s32 arg0, s32 arg1, s32 *arg2);
s32 func_00000214(s32 arg0, s32 arg1, void **arg2);
void func_00000548(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_000006D8(void *arg0);
void func_0000083C(struct Unk_func_0000083C_0 *arg0);
s32 func_00000FB8(struct Unk_func_00000FB8_0 *arg0);
void func_00001288(s32 arg0, s32 arg1);
s32 func_000012DC(s32, s32);
s32 func_00001300(s32, s32);
s32 func_000016F4(s32, s32);
s32 func_00001728(struct Unk_func_00001728_0 *arg0);
s32 func_00001744(struct Unk_func_00001728_0 *arg0);
s32 func_0000174C(void *arg0);
s32 func_00001758(struct Unk_func_00001758_0 *arg0);
s32 func_0000175C(void *arg0);
s32 func_0000176C_v250(void *arg0);
s32 func_00001788(void *arg0);
s32 func_0000178C(struct Unk_func_00001728_0 *arg0);
s32 func_00001798(void *arg0);
s32 func_00001810(u8 *arg0, s32 arg1);
s32 func_00001820(struct Unk_func_00001820_0 *arg0);
s32 func_0000182C(struct Unk_func_0000182C_0 *arg0);
s32 func_0000182C_v260(void *arg0);
s32 func_00001838(struct Unk_func_00001838_0 *arg0);
s32 func_00001844(struct Unk_func_00001844_0 *arg0);
s32 func_00001850(struct Unk_func_00001850_0 *arg0);
s32 func_0000185C(struct Unk_func_0000185C_0 *arg0);
s32 func_00001868(s32);
s32 func_00001874(struct Unk_func_00001874_0 *arg0);
s32 func_00001880(struct Unk_func_00001880_0 *arg0);
s32 func_0000188C(struct Unk_func_0000188C_0 *arg0);
s32 func_00001898(struct Unk_func_00001898_0 *arg0);
u32 func_000018A4(struct Unk_func_000018A4_0 *arg0);
void func_000018B0(s32 arg0, s32 arg1);
s32 func_000018CC(struct Unk_func_000018CC_0 *arg0);
s32 func_00001BD8(s32, s32, s32);
s32 func_00001BFC(s32, s32, s32);
s32 func_00001C88(s32, s32, s32, s32, s32);
s32 func_00001CAC(s32, s32, s32, s32, s32);
s32 func_00001E98(s32 arg0);
s32 func_00002000(s32, s32, s32);
s32 func_00002124(s32, s32, s32);
void func_00002334(s32 *arg0);
s32 func_0000245C(void);
s32 func_0000251C(void);
s32 func_000025DC(void);
void func_000026F0(s32 arg0);
s32 func_000026F8(s32);
s32 func_0000271C(s32);
s32 func_0000279C(s32);
s32 func_000027C0(s32);
void func_00002808(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_0000282C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00002834(s32 arg0, s32 arg1);
void func_00002858(s32 arg0, s32 arg1);
s32 func_00002860(s32);
s32 func_00002884(s32);
void func_00002C24(s32 arg0, s32 arg1);
s32 func_000033E4(s32, s32);
s32 func_000034E0_v250(s32 arg0, void *arg1);
s32 func_00003718(void *arg0);
s32 func_00003B24(s32 arg0, s32 *arg1);
s32 func_00003B44(s32 arg0, s32 *arg1);
void func_0000478C(struct Unk_func_0000478C_0 *arg0, s32 arg1);
void func_000047A0(void *arg0);
void func_000047C0(struct Unk_func_0000478C_0 *arg0);
void func_000048A4(void *arg0);
void func_000048C4(struct Unk_func_000048C4_0 *arg0);
void func_000049EC(void *arg0, s32 arg1);
void func_00004A0C(struct Unk_func_00004A0C_0 *arg0, s32 arg1);
s32 func_00004A98(s32, s32);
s32 func_00004AB8(s32, s32);
void func_00005054(void *arg0);
void func_00005158(void *arg0);
void func_000052A0(void *arg0, s32 arg1);
s32 func_0000534C(s32, s32);
s32 func_000056E8(u32 arg0);
s32 func_00006128(void);
void func_00006638(struct Unk_func_00006638_0 *arg0);
void func_0000664C(struct Unk_func_0000664C_0 *arg0);
u32 func_00006678(struct Unk_func_00006678_0 *arg0);
void func_000066EC(struct Unk_func_000066EC_0 *arg0, s32 arg1, s32 arg2);
void func_0000672C(struct Unk_func_0000672C_0 *arg0);
s32 func_0000673C(struct Unk_func_0000673C_0 *arg0);
s32 func_00006760(struct Unk_func_00006760_0 *arg0);
u32 func_00006774(struct Unk_func_00006774_0 *arg0);
void func_00006780(struct Unk_func_00006780_0 *arg0);
void sceAsfGetFrameData(s32 arg0, s32 arg1, s32 arg2);
void sceAsfParser_385E1320(s32 arg0, s32 arg1, s32 arg2);
s32 sceAsfParserEndEntry(void);
s32 sceAsfParserStartEntry(void);

#endif
