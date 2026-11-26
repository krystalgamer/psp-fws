#ifndef MGVIDEO_DECLS_H
#define MGVIDEO_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_0000038C_0 {
    s32 unk0;
    u32 unk4;
};

struct Unk_func_000003B8_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_000003E4_0 {
    s32 unk0;
    u32 unk4;
};

struct Unk_func_00000410_0 {
    s32 unk0;
    u32 unk4;
};

struct Unk_func_000049D0_0 {
    u8 pad0[0xE];
    u8 unkE;
    u8 unkF;
};

struct Unk_func_00004BEC_0 {
    u8 pad0[0x1];
    u8 unk1;
};

extern M2C_UNK D_000060F0;
extern M2C_UNK D_000060F8;
extern M2C_UNK D_00006100;
extern M2C_UNK D_0000807C;
extern s32 D_0000BE84;
extern s32 D_0000FAE0;
extern M2C_UNK func_00002D8C;

M2C_UNK sceKernelExtendKernelStack(M2C_UNK, M2C_UNK *, s32);
s32 func_00000000(s32);
s32 func_00000028(void *arg0);
s32 func_00000108(void);
s32 func_000002AC(s32 arg0, s32 arg1);
s32 func_0000038C(struct Unk_func_0000038C_0 *arg0);
s32 func_000003B8(struct Unk_func_000003B8_0 *arg0);
s32 func_000003C0(s32 arg0, s32 arg1);
s32 func_000003E4(struct Unk_func_000003E4_0 *arg0);
s32 func_00000410(struct Unk_func_00000410_0 *arg0, u32 arg1);
s32 func_0000043C(M2C_UNK);
s32 func_000004DC(s32 arg0, M2C_UNK arg1);
s32 func_000005A0(s32 arg0, s32 arg1);
s32 func_000006A0(s32 arg0, s32 arg1);
s32 func_00001084(void);
void func_00002F54(s32 arg0);
u32 func_000041E0(s32 arg0, s32 arg1);
s32 func_00004834(s32, s32, s32);
s32 func_000049D0(struct Unk_func_000049D0_0 *arg0, s32 *arg1, s32 *arg2, s32 *arg3);
s32 func_00004BEC(struct Unk_func_00004BEC_0 *arg0);
s32 func_000055A8(s32, s32);
s32 func_00005850(s32 arg0);
s32 func_0000595C(void *arg0);
s32 func_00005998(s32 arg0);
s32 func_000071DC(s32, s32, s32, s32);
s32 func_000072E4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_000073B8(s32, s32);
s32 func_00007660(s32 arg0);
void func_00008AE8(s32 arg0);
s32 func_00008B28(s32, s32);
s32 func_00008E14(s32 arg0);
s32 memcmp(void *, s32, M2C_UNK);
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);
M2C_UNK sceMgVideoEnd();
s32 sceMgVideo_driver_3B0F6095(void);
s32 sceMgVideoModuleEnd(void);
s32 sceMgVideoModuleInit(void);
s32 sceMgVideo_driver_ADA3D270(void);
s32 sceMgVideo_driver_F5E39E17(void);
M2C_UNK sceMgrFreeKeyReg(s32);
s32 sceMgr_driver_4A14DD18(s32, s32, s32);
s32 sceMgrNetDecryptKc(s32, s32, s32);
s32 sceMgr_driver_DBB5C63E(s32, s32, s32);
s32 sceMgrAllocKeyReg(M2C_UNK);
s32 sceRtcSetCurrentSecureTick(void *);
s32 sceRtcGetCurrentSecureTick(void *);

#endif
