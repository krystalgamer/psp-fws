#ifndef UMDMAN_DECLS_H
#define UMDMAN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_0000888C_0 {
    u8 pad0[0x18];
    struct Unk_func_0000888C_temp_v0 *unk18;
};

struct Unk_func_0000888C_temp_v0 {
    u8 pad0[0xC];
    s8 *unkC;
};

struct Unk_func_00008958_0 {
    u8 pad0[0x18];
    struct Unk_func_00008958_temp_v0 *unk18;
};

struct Unk_func_00008958_1 {
    u16 unk0;
    u16 unk2;
    u8 pad4[0x2];
    u8 unk6;
};

struct Unk_func_00008958_temp_v0 {
    u8 pad0[0xC];
    s8 *unkC;
};

struct Unk_func_00008CA0_0 {
    u8 pad0[0x18];
    struct Unk_func_00008CA0_temp_v0 *unk18;
};

struct Unk_func_00008CA0_1 {
    u16 unk0;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u8 unk6;
};

struct Unk_func_00008CA0_temp_v0 {
    u8 pad0[0xC];
    s8 *unkC;
};

struct Unk_func_00008D8C_0 {
    u8 pad0[0x18];
    struct Unk_func_00008D8C_temp_v0 *unk18;
};

struct Unk_func_00008D8C_1 {
    u8 unk0;
    u8 pad1[0x1];
    u16 unk2;
};

struct Unk_func_00008D8C_temp_v0 {
    u8 pad0[0xC];
    s8 *unkC;
};

extern M2C_UNK D_000110B4;
extern M2C_UNK D_00011254;
extern M2C_UNK D_00011A80;
extern s32 D_00011B0C;
extern s32 D_00011B40;
extern s32 D_00011B44;
extern s32 D_00011B48;
extern s32 D_00012BDC;
extern s32 D_00012BE0;
extern M2C_UNK D_00012C00;
extern s32 D_00012C10;
extern M2C_UNK D_00012C20;
extern M2C_UNK D_00012C40;
extern M2C_UNK D_00012C80;
extern M2C_UNK D_00012CC0;
extern s32 D_00012CD0;
extern s32 D_00012CD4;
extern s32 D_00012D00;
extern M2C_UNK D_0001AD8C;
extern M2C_UNK D_0001BD00;
extern M2C_UNK D_0001BD38;
extern s32 D_0001BE38;
extern s32 D_0001BE68;
extern s32 D_0001BE6C;
extern s32 D_0001BE90;
extern M2C_UNK D_0001BE94;
extern s32 D_0001BF14;
extern s32 D_0001BF18;
extern s32 D_0001BF1C;
extern s32 D_0001BF24;
extern s32 D_0001BF3C;
extern s32 D_0001BF40;
extern s32 D_0001BF48;
extern s32 *D_0001BF54;
extern s32 D_0001C034;
extern s32 D_0001C048;
extern s32 D_0001C050;
extern s32 D_0001C058;
extern M2C_UNK func_0000B2FC;
extern M2C_UNK func_0000B330;

M2C_UNK KDebugForKernel_84F370BC(M2C_UNK *, M2C_UNK *, M2C_UNK *, s32);
M2C_UNK LoadExecForKernel_11412288(s32 (*)());
void func_00000968(s32 arg0, s32 arg1);
void func_00001C40(s32 arg0);
s32 func_00001D7C(void);
void func_00001D94(s32 arg0);
s32 func_00001DF4(void);
void func_00001E00(s32 arg0);
s32 func_00001E18(void);
void func_00001E24(s32 arg0);
s32 func_00001E94(void);
void func_00001EC0(void);
s32 func_00006CE0(void);
M2C_UNK *func_00006D30(void);
M2C_UNK *func_00006D3C(void);
s32 func_00006D48(void);
s32 func_00006D50(void);
s32 func_00006D58(void);
M2C_UNK *func_00006D60(void);
s32 func_000072E0(void);
s32 func_000076B4(void);
s32 func_000079A4(void);
s32 func_00007A30(s32, s32);
s32 func_00007B34(void);
s32 func_00007B48(void);
void func_00007C08(s32 arg0, s32 arg1);
void func_00007C5C(void);
s32 func_00007C78(void);
void func_00007CA8(void);
void func_00007CD0(void);
s32 func_00007F24(s32, s32);
s32 func_00008274(s32 arg0);
s32 func_000084A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_0000888C(struct Unk_func_0000888C_0 *arg0, u8 *arg1);
s32 func_00008958(struct Unk_func_00008958_0 *arg0, struct Unk_func_00008958_1 *arg1);
s32 func_00008CA0(struct Unk_func_00008CA0_0 *arg0, struct Unk_func_00008CA0_1 *arg1);
s32 func_00008D8C(struct Unk_func_00008D8C_0 *arg0, struct Unk_func_00008D8C_1 *arg1);
s32 func_00008EC4(void);
M2C_UNK *func_00008FE8(void);
M2C_UNK *func_000090AC(void);
void func_00009F10(s32 arg0);
s32 func_00009FE8(void);
s32 func_0000A654(void);
s32 func_0000A7EC(void);
s32 func_0000A8DC(void);
s32 func_0000A924(void);
s32 func_0000A96C(void);
void func_0000AC20(s32 arg0);
void func_0000AD5C(void);
void func_0000AD78(void);
void func_0000AEA4(s32 arg0);
void func_0000AF0C(u32 arg0);
s32 func_0000AF38(void);
s32 func_0000B2A0(void);
s32 func_0000B344(void);
void func_0000BBC8(void);
void func_0000BFD0(s32 arg0);
s32 func_0000C004(void);
void func_0000C010(s32 arg0);
void func_0000C2BC(s32 arg0);
s32 func_0000C2C8(void);
s32 func_0000CD24(void);
s32 func_0000E0AC(void);
void func_0000E0B8(s32 arg0);
s32 func_0000E0C4(void);
void func_0000F4F8(void);
void func_0000FB08(void);
void func_0000FB64(void);
s32 func_0000FBE4(void);
s32 func_0000FD1C(void);
void func_0000FD4C(s32 arg0);
s32 func_0000FD80(void);
M2C_UNK sceAta_driver_1C29566B();
M2C_UNK sceAta_driver_68DEA2FF();
s32 sceAta_driver_6FC42083();
M2C_UNK sceAta_driver_7F551D66();
s32 sceClockgen_driver_7FF82F6F();
M2C_UNK sceClockgen_driver_DBE5F283();
s32 sceGpio_driver_317D9D2C(M2C_UNK, M2C_UNK);
u32 sceGpio_driver_4250D44A();
s32 sceKernelCancelAlarm(s32);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelDelayThread(u32);
s32 sceKernelDeleteEventFlag(s32);
s32 sceKernelDeleteSema(s32);
M2C_UNK sceKernelDisableSubIntr(M2C_UNK, M2C_UNK);
s32 sceKernelEnableSubIntr(M2C_UNK, M2C_UNK);
s32 sceKernelPollSema(s32, s32);
s32 sceKernelReleaseSubIntrHandler(M2C_UNK, M2C_UNK);
s32 sceKernelSetAlarm(u32, s32, void *);
s32 sceKernelSignalSema(s32, s32);
s32 sceKernelTerminateDeleteThread(s32);
s32 sceKernelTerminateThread(s32);
s32 sceKernelWaitSema(s32, s32, void *);
s32 sceSyscon_driver_8A4519F5(M2C_UNK);
s32 sceSyscon_driver_8CBC7987(M2C_UNK, M2C_UNK);
s32 sceUmdMan_driver_0D14D540(void);
void sceUmdMan_driver_0DC8D26D(void);
s32 sceUmdMan_driver_2C756C37(void);
s32 sceUmdMan_driver_3DCFAA71(s32 arg0);
s32 sceUmdMan_driver_405B48A5(void);
s32 sceUmdMan_driver_42D28DD1(void);
void sceUmdMan_driver_4FB913A3(void);
s32 sceUmdMan_driver_552F671A(s32);
s32 sceUmdMan_driver_65D0DEC6(void);
void sceUmdMan_driver_7DF2A18D(u32 arg0);
s32 sceUmdMan_driver_7F482409(void);
s32 sceUmdMan_driver_9814DCF3(void);
void sceUmdMan_driver_9F106F73(void);
void sceUmdMan_driver_A869CAB3(void);
void sceUmdMan_driver_B0A43DA7(void);
void sceUmdMan_driver_B0A6DC55(s32 arg0);
s32 sceUmdMan_driver_BD13A488(void);
s32 sceUmdMan_driver_D1D4F296(void);
M2C_UNK *sceUmdMan_driver_E192C10A(void);
M2C_UNK sceUmd_4832ABF3(void (*)(s32));

#endif
