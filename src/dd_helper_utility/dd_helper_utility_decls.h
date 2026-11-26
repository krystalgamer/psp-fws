#ifndef DD_HELPER_UTILITY_DECLS_H
#define DD_HELPER_UTILITY_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_000005A4_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000005BC_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0000063C_temp_v0 {
    u8 pad0[0x1B8];
    s32 unk1B8;
};

struct Unk_func_00000674_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000006AC_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_000008C4_1 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_00001120_0 {
    u8 pad0[0x24];
    s32 unk24;
};

extern M2C_UNK D_00004770;
extern M2C_UNK D_000047C8;
extern M2C_UNK D_00004AC8;
extern M2C_UNK D_00004B7C;
extern M2C_UNK D_00004B88;
extern s32 D_00006F3C;

void func_00000198(void);
void func_00000204(void);
s32 func_00000320(void);
M2C_UNK func_000004C0(M2C_UNK);
void func_0000050C(void);
void func_00000550(void);
void func_00000558(void);
void func_000005A4(struct Unk_func_000005A4_0 *arg0, s32 arg1, s32 arg2);
void func_000005A8(void);
void func_000005BC(struct Unk_func_000005BC_0 *arg0, s32 arg1, s32 arg2);
void func_000005D4(M2C_UNK **arg0);
void func_000005E4(M2C_UNK **arg0);
void func_000005F4(M2C_UNK **arg0);
void func_0000063C(void);
void func_00000674(struct Unk_func_00000674_0 *arg0);
void func_000006AC(struct Unk_func_000006AC_0 *arg0);
M2C_UNK func_000006C8(M2C_UNK, M2C_UNK);
void func_00000750(void);
void func_00000770(void);
void func_00000774(void);
void func_00000790_v330(void);
void func_00000790_v340(void);
void func_00000790_v350(void);
s32 func_000007C0(s32);
s32 func_000007F0(s32, s32);
void func_0000088C(void);
s32 func_000008C4(s32 arg0, struct Unk_func_000008C4_1 *arg1);
void func_00000944(s32 arg0, s32 arg1, M2C_UNK arg2);
void func_00000F18(s32 arg0);
void func_00001120(struct Unk_func_00001120_0 *arg0);
M2C_UNK func_00001CFC(s32, s32);
M2C_UNK func_00001D4C(s32, s32, s32);
void func_00001ECC(s32 arg0, s32 arg1);
M2C_UNK func_00001F1C(s32, s32, s32);
void func_00002128(void *arg0);
void func_00002150(void *arg0);
M2C_UNK func_000021C8(void *, s32);
M2C_UNK func_000026C0(s32);
s32 *func_00002760(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_0000292C(M2C_UNK, M2C_UNK);
void func_00002A3C(s32 arg0);
void func_00002A68(s32 arg0);
M2C_UNK func_00002C24();
void func_00002FC0(void);
M2C_UNK func_00002FDC(s32);
void func_00002FF8(void);
M2C_UNK func_00003014();
void func_000030DC(void);
s32 *func_00003208(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
M2C_UNK func_00003240();
void func_00003298(s32 *arg0);
M2C_UNK func_000032C4();
M2C_UNK func_000032F0();
void func_00003370(void *arg0);
void func_00003618(void *arg0);
s32 func_00003738(M2C_UNK, M2C_UNK);
void func_000039A0(void *arg0, void *arg1);
void func_000039BC(void *arg0, void *arg1);
void func_000039D8(void *arg0, void *arg1, void *arg2);
void func_000039F4(void *arg0, void *arg1, u32 arg2);
void func_00003A10(void *arg0, void *arg1);
s32 func_00003A2C(s32);
M2C_UNK func_00004100();
void func_00004294(void *arg0);
void func_000042DC(void *arg0);
s32 module_stop(void);
M2C_UNK sceCccUTF8toUTF16(s32, s32, s32);
M2C_UNK sceHtmlViewerHelper_05E0C3D4(M2C_UNK);
M2C_UNK sceHtmlViewerHelper_2030683A();
M2C_UNK sceHtmlViewerHelper_4FA8ECCA();
M2C_UNK sceHtmlViewerHelper_8B77E777(M2C_UNK);
M2C_UNK sceHtmlViewerHelper_B1B946C4();
M2C_UNK sceHtmlViewerHelper_C92C71B7();
M2C_UNK sceHtmlViewerHelper_D2FC6A5A();
M2C_UNK sceHtmlViewerHelper_F27998C2(s32);
s32 sceHttpAbortRequest(s32);
s32 sceHttpDeleteConnection(s32);
s32 sceHttpDeleteRequest(s32);
s32 sceHttpDeleteTemplate(s32);
s32 sceHttpGetContentLength(s32, void *);
s32 sceHttpGetNetworkPspError(s32, void *);
s32 sceHttpGetStatusCode(s32, void *);
s32 sceHttpReadData(s32, void *, u32);
s32 sceHttpsGetSslError(s32, void *, void *);
s32 sceKernelDeleteSema(s32);
M2C_UNK scePaf_39E62C88(s32, M2C_UNK *, M2C_UNK, M2C_UNK);
s32 scePaf_3AC3E06A(s32);
M2C_UNK scePaf_4729E549(s32);
M2C_UNK scePaf_49A81B18(s32, s32, s32, M2C_UNK);
M2C_UNK scePaf_4E67BB08();
M2C_UNK scePaf_545FE2DA(s32);
M2C_UNK scePaf_5EBC648F(void *, s32);
s32 scePaf_5FAC9869(s32);
M2C_UNK scePaf_6261C0A5(void *);
M2C_UNK scePaf_731CAA5B(s32, s32, s32);
M2C_UNK scePaf_7EC15225(s32);
void *scePaf_88784487(M2C_UNK *);
M2C_UNK scePaf_A013540A(s32, M2C_UNK *);
s32 scePaf_C1B0AA0D(s32);
M2C_UNK scePaf_C5DBD12F(void *, s32);
s32 scePaf_CA79D58B(s32);
M2C_UNK scePaf_CAF05F1D(s32, M2C_UNK *);
void *scePaf_D4FAE7D0(M2C_UNK *);
M2C_UNK scePaf_F5001144(s32);
s32 scePaf_FD4C9F47(s32);
M2C_UNK sceVshCommonGui_54BC644C(void *, s32);
M2C_UNK sceVshCommonGui_6C81492F(void *, s32);
s32 sceVshCommonGui_764A5495();
s32 sceVshCommonGui_DBEE94DC();

#endif
