#ifndef DD_HELPER_DECLS_H
#define DD_HELPER_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_00000610_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00000628_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000006A8_temp_v0 {
    u8 pad0[0x1B8];
    s32 unk1B8;
};

struct Unk_func_000006E0_0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00000718_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00000964_1 {
    void * unk0;
    s32 unk4;
};

struct Unk_func_00003100_temp_a0 {
    u8 pad0[0x10];
    s32 unk10;
    s32 unk14;
};

struct Unk_func_00003BE4_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    u8 pad24[0x4];
    s32 unk28;
};

struct Unk_func_00003CB8_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    u8 pad24[0x4];
    s32 unk28;
};

struct Unk_func_00005908_0 {
    u8 pad0[0x20];
    s32 unk20;
    s32 unk24;
    s32 unk28;
};

struct Unk_func_000060F0_1 {
    void * unk0;
    s32 unk4;
};

struct Unk_func_00007DE8_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    u8 pad10[0x8];
    s32 unk18;
};

struct Unk_func_00007E4C_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    u8 pad10[0x8];
    s32 unk18;
};

struct Unk_func_00007EB0_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    u8 pad10[0x8];
    s32 unk18;
};

struct Unk_func_00008408_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00008424_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00008440_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0000845C_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00008478_0 {
    u8 pad0[0xC];
    s32 unkC;
};

extern M2C_UNK D_0000AA40;
extern M2C_UNK D_0000AAB8;
extern M2C_UNK D_0000B538;
extern u8 D_0000B618;
extern M2C_UNK D_0000B61C;
extern M2C_UNK D_0000B628;
extern M2C_UNK func_00001500;
extern s32 func_0000696C;

void func_000001C4(void);
void func_00000230(void);
s32 func_0000038C(void);
M2C_UNK func_0000052C(M2C_UNK);
void func_000005BC(void);
void func_000005C4(void);
u8 func_000005E0(void);
void func_00000610(struct Unk_func_00000610_0 *arg0, s32 arg1, s32 arg2);
void func_00000628(struct Unk_func_00000628_0 *arg0, s32 arg1, s32 arg2);
void func_00000640(M2C_UNK **arg0);
void func_00000650(M2C_UNK **arg0);
void func_00000660(M2C_UNK **arg0);
void func_000006A8(void);
void func_000006E0(struct Unk_func_000006E0_0 *arg0);
void func_00000718(struct Unk_func_00000718_0 *arg0);
M2C_UNK func_00000734(M2C_UNK, M2C_UNK);
void func_000007BC(void);
void func_000007DC(void);
s32 func_0000082C(s32);
s32 func_0000085C(s32, s32);
void func_000008F8(void);
s32 func_00000964(s32 arg0, struct Unk_func_00000964_1 *arg1);
void func_000009E4(s32 arg0, void *arg1, s32 arg2);
void func_000010C0(struct Unk_func_000006E0_0 *arg0);
void func_00001138(void *arg0);
void func_000014E0(void *arg0);
void func_0000178C(s32 arg0);
s32 func_00002520(s32, s32);
s32 func_00002570(s32, s32, s32);
M2C_UNK func_00002B2C(void *, s32);
void func_00003100(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK func_000031E8(s32, s32);
M2C_UNK func_00003830(s32);
s32 *func_000038E8(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_00003AB4(M2C_UNK, M2C_UNK);
void func_00003BE4(struct Unk_func_00003BE4_0 *arg0);
void func_00003CB8(struct Unk_func_00003CB8_0 *arg0);
s32 func_00004E10(s32 *arg0);
M2C_UNK func_00004EC8(void *, s32);
M2C_UNK func_00004F30(void *, s32);
s32 func_00005908(struct Unk_func_00005908_0 *arg0, void *arg1);
void func_000059EC(s32 *arg0);
void func_000059F4(s32 *arg0);
void func_000059FC(s32 *arg0);
void func_00005A2C(s32 *arg0);
s32 func_000060F0(s32 arg0, struct Unk_func_000060F0_1 *arg1);
void func_00006170(s32 arg0, void *arg1, s32 arg2);
void func_000066CC(struct Unk_func_000006E0_0 *arg0);
void func_00006744(s32 arg0);
void func_0000694C(void *arg0);
M2C_UNK func_00007668(void *, s32);
M2C_UNK func_00007B60(s32);
void func_00007DE8(struct Unk_func_00007DE8_0 *arg0);
void func_00007E4C(struct Unk_func_00007E4C_0 *arg0);
void func_00007EB0(struct Unk_func_00007EB0_0 *arg0);
void func_00008408(struct Unk_func_00008408_0 *arg0);
void func_00008424(struct Unk_func_00008424_0 *arg0);
void func_00008440(struct Unk_func_00008440_0 *arg0);
void func_0000845C(struct Unk_func_0000845C_0 *arg0);
void func_00008478(struct Unk_func_00008478_0 *arg0);
void func_0000854C(s32 arg0);
void func_00008578(s32 arg0);
M2C_UNK func_00008734();
void func_00008AD0(void);
M2C_UNK func_00008AEC(s32);
void func_00008B08(void);
M2C_UNK func_00008B24();
void func_00008BEC(void);
s32 *func_00008D18(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
M2C_UNK func_00008D50();
void func_00008DA8(s32 *arg0);
M2C_UNK func_00008DD4();
M2C_UNK func_00008E00();
s32 func_00009248(M2C_UNK, M2C_UNK);
s32 func_00009BB8(s32 arg0, void *arg1, s32 arg2);
M2C_UNK func_00009F6C();
s32 module_stop(void);
s32 sceCccUTF8toUTF16(void *, s32, void *);
M2C_UNK sceHtmlViewerHelper_05E0C3D4(M2C_UNK);
M2C_UNK sceHtmlViewerHelper_C92C71B7(s32);
M2C_UNK sceHtmlViewerHelper_F27998C2(s32);
s32 sceHttpDeleteConnection(s32);
s32 sceHttpDeleteRequest(s32);
s32 sceHttpDeleteTemplate(s32);
M2C_UNK sceHttpGetContentLength(s32);
M2C_UNK sceHttpGetNetworkPspError(s32);
M2C_UNK sceHttpGetStatusCode(s32);
M2C_UNK sceHttpReadData(s32);
M2C_UNK sceHttpsGetSslError(s32);
s32 sceKernelDeleteSema(s32);
M2C_UNK sceKernelSetEventFlag(s32, M2C_UNK);
s32 sceNetApctlGetState(void *);
M2C_UNK scePaf_49A81B18(void *, s32, void *, s32);
M2C_UNK scePaf_4E67BB08();
M2C_UNK scePaf_545FE2DA(s32);
M2C_UNK scePaf_5EBC648F(void *, s32);
void *scePaf_5FAC9869(s32);
M2C_UNK scePaf_7EC15225(s32);
M2C_UNK scePaf_A0ED77C4(M2C_UNK, void (*)(void *), void *, M2C_UNK, M2C_UNK, M2C_UNK *);
M2C_UNK scePaf_CAF05F1D(s32, M2C_UNK *);
s32 scePaf_CE699963(s32, M2C_UNK);
void *scePaf_D4FAE7D0(M2C_UNK *);
M2C_UNK scePaf_F95EA3F1(s32, void *, s32);
s32 scePaf_FD4C9F47(void *);
M2C_UNK sceVshCommonGui_54BC644C(void *, s32);
M2C_UNK sceVshCommonGui_6C81492F(void *, s32);
s32 sceVshCommonGui_764A5495();
s32 sceVshCommonGui_DBEE94DC();

#endif
