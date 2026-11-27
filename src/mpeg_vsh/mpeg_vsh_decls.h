#ifndef MPEG_VSH_DECLS_H
#define MPEG_VSH_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_D_00009DC0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_D_00009EC0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00005318_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00005BEC_0 {
    u8 pad0[0x3];
    u8 unk3;
};

struct Unk_func_00005BF4_0 {
    u8 pad0[0x3];
    u8 unk3;
};

struct Unk_func_00005C18_0 {
    u8 pad0[0x1];
    u8 unk1;
};

struct Unk_func_00005C64_temp_a1 {
    u8 pad0[0x24];
    s32 unk24;
};

struct Unk_func_00007F04_0 {
    u8 pad0[0x50];
    s32 unk50;
};

struct Unk_func_00007F64_0 {
    u8 pad0[0x54];
    s32 unk54;
};

struct Unk_func_00008FF8_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00009004_0 {
    s32 unk0;
    u8 pad4[0x8];
    s32 unkC;
};

struct Unk_func_00009018_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_000090DC_0 {
    s32 unk0;
    u8 pad4[0x8];
    s32 unkC;
};

extern M2C_UNK D_00007C61;
extern M2C_UNK D_00007D00;
extern s32 D_00007D40;
extern void *D_00007E40;
extern s32 D_00007F04;
extern s32 D_00007F08;
extern M2C_UNK D_00008A10;
extern void *D_00009B80;
extern M2C_UNK D_00009B98;
extern s32 D_00009C2C;
extern s32 D_00009C48;
extern struct Unk_D_00009DC0 *D_00009DC0;
extern struct Unk_D_00009EC0 *D_00009EC0;
extern s32 D_00009F6C;
extern s32 D_00009F80;
extern s32 D_00009F84;

s32 func_00000000(s32, s32);
s32 func_00000124(s32);
s32 func_000001B4(s32, s32);
s32 func_0000026C(s32, s32, s32);
s32 func_0000034C(void);
s32 func_0000041C(void);
s32 func_00000B80(s32, s32, s32);
s32 func_00000B88(s32, s32, s32);
s32 func_00000D54(s32, s32);
s32 func_00000D5C(s32, s32);
s32 func_00000DFC(s32, s32, s32);
s32 func_00000E04(s32, s32, s32);
s32 func_00000F08(s32, s32);
s32 func_00000F10(s32, s32);
s32 func_00000F70(s32, s32);
s32 func_00000F78(s32, s32);
s32 func_00000FE8(s32, s32);
s32 func_00000FFC(s32, s32, s32, s32, s32);
s32 func_00001058(s32, s32, s32, s32, s32);
s32 func_0000114C(s32, s32, s32, s32);
s32 func_00001264(s32, s32, s32, s32);
s32 func_000012D4(s32, s32, s32, s32);
void func_00001430(s32 arg0, s32 arg1);
void func_000014A0(s32 arg0, s32 arg1);
s32 func_000014C0(s32, s32, s32, s32);
s32 func_00001604(s32, s32, s32, s32, s32);
s32 func_00001674(s32, s32, s32, s32, s32);
s32 func_000018E4(s32, s32, s32);
s32 func_00001954(s32, s32, s32);
s32 func_00001974(s32, s32, s32, s32);
s32 func_000019E4(s32, s32, s32, s32);
s32 func_00001A18(s32, s32, s32);
s32 func_00001A88(s32, s32, s32);
s32 func_00001A90(s32, s32, s32);
s32 func_00001B00(s32, s32, s32);
s32 func_00001DE4(s32, s32, s32, s32);
s32 func_00001E54(s32, s32, s32, s32);
s32 func_00001E8C(s32, s32, s32);
s32 func_00001EFC(s32, s32, s32);
s32 func_00001F8C(s32 arg0, s32 *arg1);
s32 func_00001FC8(s32 *arg0);
s32 func_00001FFC(s32 arg0, s32 *arg1);
s32 func_00003220(s32);
s32 func_00003290(s32);
s32 func_00003360(s32, s32, s32, s32);
s32 func_000033D0(s32, s32, s32, s32);
s32 func_000034F0(s32);
s32 func_00003508(s32);
s32 func_00003524(s32, s32, s32, s32, s32, s32);
s32 func_00003560(s32);
s32 func_00003578(s32);
s32 func_00003594(s32, s32, s32, s32, s32, s32);
s32 func_000035FC(void);
s32 func_0000366C(void);
s32 func_00003674(void *arg0);
s32 func_00003BAC(s32, s32);
s32 func_00003C1C(s32, s32);
s32 func_00003C54(s32, s32, s32, s32);
s32 func_00003CC4(s32, s32, s32, s32);
s32 func_00003D0C(s32, s32, s32, s32);
s32 func_00003D7C(s32, s32, s32, s32);
s32 func_00003FA8(s32, s32, s32, s32, s32);
s32 func_00004308(s32, s32, s32, s32, s32);
s32 func_00004694(s32, s32);
s32 func_00004704(s32, s32);
s32 func_000047A8(s32, s32, s32, s32);
s32 func_00004818(s32, s32, s32, s32);
s32 func_00004BA8(s32, s32, s32, s32);
s32 func_00004C18(s32, s32, s32, s32);
s32 func_00004D20(void *arg0, s32 arg1);
s32 func_00004FD8(s32, s32, s32);
s32 func_00005048(s32, s32, s32);
s32 func_000050DC(s32, s32, s32, s32, s32);
void func_000052D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_00005318(struct Unk_func_00005318_0 *arg0, s32 arg1);
void func_00005324(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00005348(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_00005444(s32, s32, s32, s32, s32);
s32 func_000055EC(s32 arg0);
s32 func_00005614(u8 *arg0);
s32 func_00005664(s32 arg0);
u8 func_0000568C(void *arg0);
void *func_00005694(void *arg0, u32 arg1);
u8 func_000056B8(void *arg0);
s32 func_000056C0(s32 arg0, s32 arg1);
s32 func_000056FC(s32 arg0);
void *func_00005704(void **arg0);
s32 func_00005720(s32, s32);
s32 func_00005724(void);
s32 func_0000572C(void);
s32 func_00005790(s32, s32);
s32 func_000057A0(s32, s32, s32);
s32 func_00005810(s32, s32, s32);
s32 func_00005818(s32, s32, s32);
s32 func_00005888(s32, s32, s32);
s32 func_000059F4(s32, s32, s32);
s32 func_00005A40(s32, s32, s32);
s32 func_00005A64(s32, s32, s32);
s32 func_00005AB0(s32, s32, s32);
s32 func_00005B08(s32, s32, s32);
s32 func_00005B54(s32 arg0);
s32 func_00005B7C(u8 *arg0);
s32 func_00005BCC(s32 arg0);
u8 func_00005BEC(struct Unk_func_00005BEC_0 *arg0);
void *func_00005BF4(struct Unk_func_00005BF4_0 *arg0, s32 arg1);
u8 func_00005C18(struct Unk_func_00005C18_0 *arg0);
s32 func_00005C20(s32 arg0, s32 arg1);
s32 func_00005C5C(s32 arg0);
void *func_00005C64(void **arg0);
s32 func_00005C74(s32, s32);
s32 func_00005C84(void);
s32 func_00005CC4(s32 arg0, s32 arg1, void *arg2, s32 *arg3);
s32 func_00005CE4(s32, s32);
s32 func_00005D1C(s32 arg0);
s32 func_00005DB8(s32 arg0);
s32 func_00005DFC(s32, s32, s32, s32);
s32 func_00005E6C(s32, s32, s32, s32);
s32 func_00006030(s32, s32, s32);
void func_00006048(void);
s32 func_00006050(s32 *arg0);
s32 func_000060A0(s32, s32, s32);
s32 func_000060C0(void);
void func_000060D0(s32 arg0, s32 arg1);
s32 func_0000610C(s32, s32, s32);
s32 func_00006124(s32 arg0);
s32 func_00006178(s32 arg0);
s32 func_0000617C(s32, s32, s32);
s32 func_000061CC(s32 arg0);
s32 func_00006234(s32);
s32 func_0000639C(void);
void func_00006420(void);
void func_00006484(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_00006508(void);
s32 func_00006518(s32 arg0);
s32 func_00006614(s32, s32);
u8 *func_000066C8(u8 *arg0, u8 *arg1, s32 arg2);
void func_00006768(s32 arg0, s32 arg1);
s32 func_00006884(s32, s32);
s32 func_00006F5C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_00006F6C(void);
s32 func_00006FCC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_00006FD4(s32 arg0, s32 arg1, s32 arg2);
s32 func_00007040(s32, s32, s32);
s32 func_00007044(s32 arg0, s32 arg1, s32 arg2);
s32 func_0000732C(s32 arg0);
M2C_UNK *func_000073AC(void);
s32 func_00007754(void *arg0, s32 arg1);
void func_00007828(void);
s32 func_00007830(void *arg0);
s32 func_0000783C(void *arg0);
s32 func_00007850(void *arg0);
s32 func_00007914(void *arg0);
s32 func_00007958(s32 arg0, s32 arg1, void *arg2, s32 *arg3);
s32 func_000079AC(s32 arg0);
s32 func_000079D0(s32);
s32 func_000079D8(s32 arg0);
s32 func_00007A14(void);
s32 func_00007A3C(s32 arg0);
s32 func_00007A68(s32 arg0);
s32 func_00007ADC(void);
void func_00007B94(void);
s32 func_00007BAC(s32);
s32 func_00007BB8(s32 arg0);
void func_00007D70(void);
s32 func_00007D94(s32 arg0);
s32 func_00007DE4(void);
s32 func_00007DF4(s32 arg0);
s32 func_00007E14(s32, s32, s32);
s32 func_00007E48(s32 arg0);
s32 func_00007E9C(s32 arg0);
s32 func_00007F04(struct Unk_func_00007F04_0 *arg0, s32 arg1);
s32 func_00007F64(struct Unk_func_00007F64_0 *arg0, s32 arg1);
void func_00007FC0(void);
s32 func_00007FF4(void *arg0, s32 arg1);
s32 func_00007FF8(s32 arg0, s32 arg1);
s32 func_00008058(s32 *arg0);
s32 func_00008734(void);
s32 func_000088AC(s32, s32, s32);
void func_00008A58(void);
s32 func_00008A90(s32 arg0, s32 arg1);
s32 func_00008AF0(s32 *arg0);
void func_00008FF0(void);
s32 func_00008FF8(struct Unk_func_00008FF8_0 *arg0);
s32 func_00009004(struct Unk_func_00009004_0 *arg0);
s32 func_00009018(struct Unk_func_00009018_0 *arg0);
s32 func_000090DC(struct Unk_func_000090DC_0 *arg0);
u8 *func_00009134(u8 *arg0, u8 *arg1, s32 arg2);
s32 func_00009194(s32, s32);
s32 func_00009214(s32 arg0);
s32 func_00009530(s32);
s32 func_00009548(s32);
s32 func_00009568(s32);
s32 module_stop(void);
s32 sceAudiocodecDecode(s32, M2C_UNK);
M2C_UNK sceAudiocodecReleaseEDRAM(void *);
s32 sceKernelCheckThreadStack(void);
s32 sceKernelCreateSema(void *, u32, s32, s32, void *);
s32 sceKernelDeleteSema(s32);
s32 sceKernelPollSema(s32, s32);
s32 sceKernelSignalSema(s32, s32);
s32 sceKernelWaitSema(s32, s32, void *);
s32 sceMpegAtracDecode(void *arg0, void *arg1, void *arg2, s32 arg3);
s32 sceMpegAvcCopyYCbCr(void *arg0, void *arg1, void *arg2);
s32 sceMpegAvcDecode(void *arg0, void *arg1, s32 arg2, void *arg3, void *arg4);
s32 sceMpegAvcDecodeDetail(void *arg0, void *arg1);
s32 sceMpegAvcDecodeDetail2(s32 arg0, s32 arg1);
s32 sceMpegAvcDecodeDetailIndex(void *arg0, s32 arg1, void *arg2);
s32 sceMpegAvcDecodeGetDecodeSEI(s32 arg0, s32 arg1);
s32 sceMpegAvcDecodeMode(void *arg0, void *arg1);
s32 sceMpegAvcDecodeStop(void *arg0, s32 arg1, void *arg2, void *arg3);
s32 sceMpegAvcDecodeStopYCbCr(void *arg0, void *arg1, void *arg2);
s32 sceMpegAvcDecodeYCbCr(void *arg0, void *arg1, void *arg2, void *arg3);
s32 sceMpegAvcQueryYCbCrSize(void *arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);
s32 sceMpegChangeGetAuMode(void *arg0, void *arg1, s32 arg2);
s32 sceMpegChangeGetAvcAuMode(s32 arg0, s32 arg1, s32 arg2);
s32 sceMpegFinish(void);
s32 sceMpegFlushAllStream(void *arg0);
s32 sceMpegFlushAu(s32 arg0, s32 arg1);
s32 sceMpegFlushStream(void *arg0, void *arg1);
s32 sceMpegFreeAvcEsBuf(void *arg0, s32 arg1);
s32 sceMpegGetAtracAu(void *arg0, void *arg1, void *arg2, void *arg3);
s32 sceMpegGetAvcAu(void *arg0, void *arg1, void *arg2, void *arg3);
s32 sceMpegGetAvcNalAu(void *arg0, void *arg1, void *arg2);
s32 sceMpegGetPcmAu(void *arg0, void *arg1, void *arg2, void *arg3);
s32 sceMpegInit(void);
s32 sceMpegInitAu(void *arg0, s32 arg1, void *arg2);
s32 sceMpegNextAvcRpAu(void *arg0, void *arg1);
s32 sceMpegQueryAtracEsSize(void *arg0, void *arg1, void *arg2);
s32 sceMpegQueryPcmEsSize(void *arg0, void *arg1, void *arg2);
s32 sceMpegQueryStreamOffset(void *arg0, void *arg1, void *arg2);
s32 sceMpegQueryStreamSize(void *arg0, void *arg1);
s32 sceMpegQueryUserdataEsSize(void *arg0, void *arg1, void *arg2);
void *sceMpegRegistStream(void *arg0, s32 arg1, s32 arg2);
s32 sceMpegRingbufferAvailableSize(void *arg0);
s32 sceMpegRingbufferConstruct(void *arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4, void *arg5);
s32 sceMpegRingbufferDestruct(void *arg0);
s32 sceMpegRingbufferQueryMemSize(s32 arg0);
s32 sceMpegRingbufferQueryPackNum(s32 arg0);
s32 sceMpegUnRegistStream(void *arg0, void *arg1);
s32 sceMpeg_11CAB459(s32 arg0, s32 arg1, s32 arg2);
s32 sceMpeg_5AC68A41(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 sceMpeg_988E9E12(s32 arg0, s32 arg1, s32 arg2);
s32 sceMpeg_AE693D0B(s32 arg0, s32 arg1);
s32 sceMpeg_B27711A8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 sceMpeg_C2F02CDD(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 sceMpeg_C345DED2(s32 arg0, s32 arg1);
void sceMpeg_D4DD6E75(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 sceVideocodecDecode(s32, M2C_UNK);
s32 sceVideocodecDelete(s32, M2C_UNK);
s32 sceVideocodecGetFrameCrop(void *, M2C_UNK);
s32 sceVideocodecGetSEI(void *, M2C_UNK);
s32 sceVideocodecOpen(s32, M2C_UNK);
M2C_UNK sceVideocodecReleaseEDRAM(s32);
s32 sceVideocodecStop(s32, M2C_UNK);
s32 sceVideocodec_893B32B1(void *, M2C_UNK);

#endif
