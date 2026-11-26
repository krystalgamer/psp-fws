#ifndef NETPLAY_SERVER_PLUS_UTILITY_DECLS_H
#define NETPLAY_SERVER_PLUS_UTILITY_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_00001884_1 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00002588_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00002590_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00002598_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_000025A0_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_000025A8_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_000025B0_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_000025B8_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_000025E4_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00002600_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0000261C_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00003470_0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x14];
    s32 unk1C;
};

struct Unk_func_000036C4_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

extern s32 D_00004890;
extern s8 D_00004894;
extern s32 D_000049C0;

M2C_UNK func_0000015C();
s32 func_000001FC(void);
void func_00000470(void);
M2C_UNK func_000004A0(M2C_UNK, M2C_UNK);
void func_0000052C(void);
void func_0000054C(void);
void func_00000618(s32 arg0, s32 arg1);
M2C_UNK func_00000674(M2C_UNK);
void func_00000BBC(void);
s32 func_00000F3C(void);
void func_00001480(void);
void func_000014F0(void);
void func_000014F8(void);
void func_00001530(s32 arg0, s32 arg1);
M2C_UNK func_0000161C(s32, s32, s32);
s32 func_00001884(u32 arg0, struct Unk_func_00001884_1 *arg1);
M2C_UNK func_00001CC8();
M2C_UNK func_00001D28(u32, s32);
M2C_UNK func_00001DC4(u32, void *);
M2C_UNK func_00001EF0(u32, void *);
M2C_UNK func_00001F48(M2C_UNK, M2C_UNK);
void func_00002020(void);
void func_00002040(void);
void func_000024F4(void);
void func_00002510(void);
s32 func_00002588(struct Unk_func_00002588_0 *arg0);
s32 func_00002590(struct Unk_func_00002590_0 *arg0);
s32 func_00002598(struct Unk_func_00002598_0 *arg0);
s32 func_000025A0(struct Unk_func_000025A0_0 *arg0);
s32 func_000025A8(struct Unk_func_000025A8_0 *arg0);
s32 func_000025B0(struct Unk_func_000025B0_0 *arg0);
s32 func_000025B8(struct Unk_func_000025B8_0 *arg0);
void func_000025C0(void *arg0, s32 arg1);
void func_000025E4(struct Unk_func_000025E4_0 *arg0);
void func_00002600(struct Unk_func_00002600_0 *arg0);
void func_0000261C(struct Unk_func_0000261C_0 *arg0);
s32 func_00002C9C(void);
s32 func_00002CBC(void);
void func_00002DE4(void);
M2C_UNK func_000033BC();
M2C_UNK func_00003450();
void func_00003470(struct Unk_func_00003470_0 *arg0);
void func_000036C4(struct Unk_func_000036C4_0 *arg0);
M2C_UNK func_00003708(void *);
void func_00003898(s32 arg0, s32 arg1);
M2C_UNK func_00003AA0(s32, s32, s32);
M2C_UNK func_00003C08();
s32 module_stop(void);
M2C_UNK sceNetAdhocDownload_48F87AB1();
M2C_UNK sceNetAdhocDownload_4C542FD1();
M2C_UNK scePaf_27F64616(s32);
M2C_UNK scePaf_3481F595(s32);
M2C_UNK scePaf_39E62C88(s32, s32, M2C_UNK, M2C_UNK);
s32 scePaf_5E4447F6(s32);
M2C_UNK scePaf_82CF97B0(M2C_UNK);
M2C_UNK scePaf_8B38372A(s32, s32);
M2C_UNK scePaf_A013540A(s32, s32);
s32 scePaf_C1B0AA0D(s32);
M2C_UNK scePaf_C4BAD564(M2C_UNK);
s32 scePaf_CA79D58B(s32);
M2C_UNK scePaf_CAF05F1D(s32);
M2C_UNK scePaf_CD216C47(s32);
M2C_UNK scePaf_D1447DB7(s32);
M2C_UNK scePaf_DAB59652(s32);
s32 scePaf_FD4C9F47(s32);

#endif
