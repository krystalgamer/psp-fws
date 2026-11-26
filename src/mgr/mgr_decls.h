#ifndef MGR_DECLS_H
#define MGR_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_0000AFF8_s {
    s32 unk0;
    u8 pad4[0x8];
    volatile s32 unkC;
};

struct D_0000B050_s {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
};

struct D_0000B708_s {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_000018F4_4 {
    u8 pad0[0x20];
    u8 unk20;
};

struct Unk_func_000018F4_temp_a4 {
    u8 pad0[0x1];
    u8 unk1;
    u8 unk2;
    u8 unk3;
};

extern s32 D_0000955C;
extern s32 D_00009C0C;
extern u32 D_00009C10;
extern M2C_UNK D_00009C58;
extern M2C_UNK D_00009C68;
extern M2C_UNK D_0000AEE0;
extern M2C_UNK D_0000AFA0;
extern M2C_UNK D_0000AFCC;
extern M2C_UNK D_0000AFD0;
extern struct D_0000AFF8_s D_0000AFF8;
extern s32 D_0000AFFC;
extern s32 D_0000B004;
extern struct D_0000B050_s D_0000B050;
extern s32 D_0000B6AC;
extern M2C_UNK D_0000B6C8;
extern M2C_UNK D_0000B6D8;
extern M2C_UNK D_0000B6E0;
extern M2C_UNK D_0000B6E8;
extern M2C_UNK D_0000B6F8;
extern struct D_0000B708_s D_0000B708;

M2C_UNK sceKernelIsIntrContext();
s32 func_0000015C(s32, s32);
s32 func_000001E4(void);
s32 func_0000027C(s32);
M2C_UNK func_000002A4(M2C_UNK);
M2C_UNK func_000002EC(M2C_UNK);
M2C_UNK func_00000310(M2C_UNK);
M2C_UNK func_00000378(M2C_UNK);
M2C_UNK func_000003BC(s32);
s32 func_00000424(s32, M2C_UNK, M2C_UNK);
s32 func_000004CC(s32);
s32 func_000006CC(M2C_UNK);
s32 func_000007DC(M2C_UNK, M2C_UNK);
void func_00000840(s32 arg0, s32 arg1, s32 arg2);
s32 func_00000898();
s32 func_000008A4(void);
M2C_UNK func_00000AC4();
s32 func_00000B7C(void);
s32 func_00000BF8(void);
s32 func_00000DBC(s32, s32, s32);
M2C_UNK *func_00001394(void);
s32 func_000013B8(s32 arg0, s32 arg1);
M2C_UNK *func_000013C8(void);
M2C_UNK *func_000013E8(void);
M2C_UNK *func_00001408(void);
M2C_UNK *func_00001414(void);
M2C_UNK *func_00001420(void);
s32 func_0000142C(s32 arg0, s32 arg1);
s32 func_000015A4(s32, s32, s32, s32, s32, s32);
s32 func_00001868(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4, s32 arg5);
s32 func_000018F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, struct Unk_func_000018F4_4 *arg4, s32 arg5);
void func_00001980(void);
void func_00001A44(void);
s32 func_00001B90(void);
s32 func_00001BD8(s32, s32);
s32 func_00001BE8(s32, s32, s32);
s32 func_00001C64(s32, s32, s32);
void func_00001CB4(s32 arg0, s32 arg1, s32 arg2);
s32 func_00001D2C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_00001D40(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_00001E3C(s32, s32, s32, s32, s32, s32, s32);
s32 func_00002498(void);
void func_000024A4(void);
M2C_UNK func_00002588();
s32 func_000027E0(void);
void func_000027EC(void);
s32 func_00002934(s32, M2C_UNK);
s32 func_00002F84(s32, s32, s32, s32, s32);
s32 func_0000341C(s32, s32, s32, s32, s32, s32, s32);
s32 func_000038D0(s32, s32);
void func_00003E08(s32 arg0);
void func_00004410(s32 arg0);
s32 func_000045DC(void);
s32 func_00004664(M2C_UNK, M2C_UNK);
s32 func_00004724(s32, s32);
s32 func_00004CBC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_00005194(s32 arg0, s32 arg1);
s32 func_00005834(s32);
s32 func_00005B88(void);
s32 func_00005E30(void);
M2C_UNK func_00005F7C();
s32 func_00006030(void);
s32 func_0000608C(void);
void func_000060B4(s32 arg0, s32 *arg1);
void func_00006100(s32 arg0);
s32 func_00006104(void);
s32 func_00006340(s32, s32, s32, s32, s32);
s32 func_00006528(s32, s32);
s32 func_000065FC(s32, s32, s32);
s32 func_00006884(s32, s32);
s32 func_000069E0(s32 arg0, s32 arg1);
s32 func_00006C40(s32, s32, s32, s32, s32);
s32 func_00006D2C(s32 arg0, s32 arg1, s32 arg2, s32 *arg3);
s32 func_00007644(s32);
void func_0000798C(s32 arg0);
void func_00008388(s32 arg0);
s32 func_00008584(s32 arg0, s32 arg1, s32 arg2, s32 *arg3);
void func_00009BAC(s32 arg0);
s32 func_0000A1C8(s32 arg0, s32 arg1, s32 arg2);
s32 module_start(void);
s32 module_stop(void);
s32 sceIoClose(s32);
s32 sceIoDevctl(void *, s32, void *, u32, void *, u32);
s32 sceIoIoctl(s32, s32, void *, u32, void *, u32);
s32 sceKernelDeleteEventFlag(s32);
s32 sceKernelDeleteSema(s32);
s32 sceKernelSignalSema(s32, s32);
s32 sceKernelWaitSema(s32, s32, void *);
s32 sceMScmHCLastStatus();
s32 sceMgrDecryptKc(s32 arg0, s32 arg1, s32 arg2);
s32 sceMgrEncryptWithKbCBC(s32 arg0, s32 arg1, M2C_UNK *arg2, u32 arg3, s32 arg4);
s32 sceMgrEncryptKc(s32 arg0, s32 arg1, s32 arg2);
void sceMgrGenerateMACWithKseCBC(s32 arg0, s32 arg1, M2C_UNK *arg2, s32 arg3);
void sceMgrDecryptWithKse(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 sceMgrDecryptWithKbCBC(s32 arg0, s32 arg1, M2C_UNK *arg2, u32 arg3, s32 arg4);
s32 sceMgrDESDecryptBlock(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 sceMgrCreateKc(s32 arg0, M2C_UNK arg1);
void sceMgr_driver_4A14DD18(s32 arg0, s32 arg1, s32 arg2);
void sceMgrEncryptWithKse(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 sceMgrMSDeauth(s32 arg0);
s32 sceMgrStartSession(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 sceMgrGenerateICV(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 sceMgrGenerateKse(s32 arg0, s32 arg1, s32 arg2);
void sceMgrReset(void);
s32 sceMgrEncryptKcWithKse(s32 arg0, s32 arg1);
s32 sceMgrGenerateMACWithKbCBC(s32 arg0, s32 arg1, M2C_UNK *arg2, s32 arg3, s32 arg4);
u32 sceMgrGetInitialEKB(s32 arg0, u32 arg1);
void sceMgrAesEnd(void);
s32 sceMgrRandom(s32 arg0, M2C_UNK arg1);
s32 sceMgr_driver_BB1E3C1A(s32 arg0, M2C_UNK arg1, s32 arg2);
s32 sceMgrLock();
s32 sceMgrGenerateKb(s32 arg0, M2C_UNK arg1, s32 arg2, s32 arg3);
s32 sceMgrDESEncryptBlock(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 sceMgrAesInit(void);
M2C_UNK sceMgrEnd();
void sceMgrNetDecryptKc(s32 arg0, s32 arg1, s32 arg2);
void sceMgr_driver_DBB5C63E(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK sceMgrUnLock();
s32 sceMgrDecryptKcWithKse(s32 arg0, s32 arg1);
s32 sceMgrDecryptKicv(s32 arg0, s32 arg1, s32 arg2);
s32 sceMgr_driver_F98874E9(s32 arg0, s32 arg1, s32 arg2);

#endif
