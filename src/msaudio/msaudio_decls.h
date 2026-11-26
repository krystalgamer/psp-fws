#ifndef MSAUDIO_DECLS_H
#define MSAUDIO_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_00006B80_s {
    u8 pad0[0x138];
    volatile u32 unk138;
    u8 pad13C[0x198];
    volatile s32 unk2D4;
};

struct Unk_func_00000570_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00000570_1 {
    u8 pad0[0x14];
    u8 unk14;
    u8 unk15;
    u8 pad16[0x12];
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
};

struct Unk_func_00001908_0 {
    u8 pad0[0xFFC];
    u8 unkFFC;
};

struct Unk_func_00001908_temp_v0 {
    u8 pad0[0x1];
    u8 unk1;
    u8 unk2;
    u8 unk3;
};

struct Unk_func_000026B0_0 {
    u8 pad0[0x2D];
    u8 unk2D;
    u8 pad2E[0x16];
    s32 unk44;
    s32 unk48;
};

extern s32 D_00003088;
extern M2C_UNK D_00006A60;
extern struct D_00006B80_s D_00006B80;
extern M2C_UNK D_00006CA0;
extern s32 D_00006DE0;

M2C_UNK Kprintf(M2C_UNK *, M2C_UNK *, s32);
s32 func_00000000(s32);
s32 func_00000194(M2C_UNK);
s32 func_00000234(s32 arg0, M2C_UNK arg1);
s32 func_000002D8(void *arg0);
s32 func_0000035C(s32 *arg0);
s32 func_000003A4(s32 *arg0);
s32 func_00000424(s32 *arg0);
s32 func_00000570(struct Unk_func_00000570_0 *arg0, struct Unk_func_00000570_1 *arg1);
s32 func_00000B38(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_00001908(struct Unk_func_00001908_0 *arg0);
s32 func_0000198C(s32 *arg0);
s32 func_00001B78(s32);
s32 func_000026B0(struct Unk_func_000026B0_0 *arg0);
s32 func_00002700(void *arg0);
s32 module_start(void);
s32 module_stop(void);
s32 sceKernelDeleteSema(s32);
s32 sceKernelSignalSema(s32, s32);
s32 sceKernelWaitSema(s32, s32, void *);
s32 sceMSAudioCalculateICVn(void);
M2C_UNK sceMSAudioEnd();
s32 sceMSAudioEndFringe(void);
s32 sceMSAudioEndTrack(u32 arg0);
s32 sceMSAudioGetMediaType(void);
s32 sceMgrAllocKeyReg(M2C_UNK);
s32 sceMgrDecryptKc(s32, s32, s32);
M2C_UNK sceMgrFreeKeyReg(s32);
s32 sceMgrGenerateKb(s32, M2C_UNK *, M2C_UNK *, s32);
s32 sceMgrGenerateMACWithKbCBC(s32, s32, M2C_UNK, s32, s32);

#endif
