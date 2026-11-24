#ifndef WLAN_DECLS_H
#define WLAN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_0001925C_s {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
};

struct Unk_D_000191B0 {
    u8 pad0[0x184];
    s32 unk184;
    u8 pad188[0x48];
    s32 unk1D0;
};

struct Unk_Unk_func_0000F370_0_B8 {
    u8 pad0[0x40];
    u32 *unk40;
};

struct Unk_func_00003114_0 {
    s32 unk0;
    u8 pad4[0x170];
    u32 unk174;
    u8 pad178[0xC];
    struct Unk_func_00017A3C_temp_s2 *unk184;
};

struct Unk_func_00003158_0 {
    u8 pad0[0x1DC];
    s32 unk1DC;
    M2C_UNK * unk1E0;
    s32 unk1E4;
};

struct Unk_func_000031DC_0 {
    u8 pad0[0x1DC];
    s32 unk1DC;
    s32 unk1E0;
};

struct Unk_func_00003268_0 {
    u8 pad0[0x134];
    u32 unk134;
    s32 unk138;
    s32 unk13C;
    s32 unk140;
    void * unk144;
};

struct Unk_func_00003268_temp_a2 {
    s32 unk0;
    u8 pad4[0xC];
    s32 unk10;
};

struct Unk_func_00003304_0 {
    u8 pad0[0x134];
    u32 unk134;
    u8 pad138[0xC];
    struct Unk_func_00003304_temp_a0 *unk144;
};

struct Unk_func_00003304_temp_a0 {
    s32 unk0;
    struct Unk_func_00003304_var_v1 *unk4;
};

struct Unk_func_00003304_var_v1 {
    s32 unk0;
    struct Unk_func_00003304_var_v1 *unk4;
};

struct Unk_func_00003374_0 {
    u8 pad0[0x134];
    u32 unk134;
    u8 pad138[0xC];
    struct Unk_func_00003374_temp_a0 *unk144;
};

struct Unk_func_00003374_temp_a0 {
    s32 unk0;
    struct Unk_func_00003374_var_v1 *unk4;
};

struct Unk_func_00003374_var_v1 {
    s32 unk0;
    struct Unk_func_00003374_var_v1 *unk4;
};

struct Unk_func_000033E4_0 {
    u8 pad0[0x15C];
    struct Unk_func_000033E4_temp_v1 *unk15C;
};

struct Unk_func_000033E4_temp_v1 {
    u16 unk0;
    u8 pad2[0x2];
    struct Unk_func_000033E4_var_v0 *unk4;
};

struct Unk_func_000033E4_var_v0 {
    s16 unk0;
    s16 unk2;
    struct Unk_func_000033E4_var_v0 *unk4;
};

struct Unk_func_00003CE0_0 {
    u8 pad0[0x178];
    u32 unk178;
    u8 pad17C[0x64];
    struct Unk_func_00003CE0_temp_s0 *unk1E0;
};

struct Unk_func_00003CE0_temp_s0 {
    u8 pad0[0x8];
    s32 unk8;
    u8 padC[0xC];
    s32 unk18;
};

struct Unk_func_0000829C_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_00008470_0 {
    u8 pad0[0x17C];
    u32 unk17C;
};

struct Unk_func_00008470_1 {
    u8 pad0[0xC];
    u32 unkC;
    u32 unk10;
    u8 pad14[0xD4];
    s32 unkE8;
    void * unkEC;
    u8 padF0[0x8];
    u32 unkF8;
    u32 unkFC;
    void * unk100;
    void * unk104;
    void * unk108;
};

struct Unk_func_000090E8_0 {
    u8 pad0[0xC];
    u32 unkC;
};

struct Unk_func_00009160_0 {
    u8 pad0[0xC];
    u32 unkC;
};

struct Unk_func_0000AC90_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0000AC90_temp_t9 {
    u8 pad0[0x18];
    s32 *unk18;
    s32 *unk1C;
};

struct Unk_func_0000AF1C_0 {
    u8 pad0[0xC];
    u32 unkC;
};

struct Unk_func_0000B018_0 {
    u8 pad0[0xC];
    u32 unkC;
};

struct Unk_func_0000B3CC_1 {
    u8 pad0[0x30];
    u16 * unk30;
};

struct Unk_func_0000F370_0 {
    u8 pad0[0xB8];
    struct Unk_Unk_func_0000F370_0_B8 *unkB8;
};

struct Unk_func_00015958_0 {
    u8 pad0[0xB8];
    struct Unk_func_00015958_temp_s0 *unkB8;
    u8 padBC[0x6C];
    s32 unk128;
};

struct Unk_func_00015958_temp_s0 {
    u8 pad0[0x30];
    s32 unk30;
    s32 unk34;
    s32 unk38;
    u8 pad3C[0x30];
    s32 unk6C;
    u8 pad70[0x4];
    s32 unk74;
};

struct Unk_func_00017A3C_temp_s2 {
    u8 pad0[0xD8];
    M2C_UNK (*unkD8)(void *, s32, s32, u32, s32);
    u8 padDC[0x32];
    s16 unk10E;
    s16 unk110;
};

struct Unk_func_00017BCC_temp_s2 {
    u8 pad0[0xE4];
    s32 (*unkE4)(void *, s32, s32);
};

struct Unk_func_00017EA4_1 {
    s32 unk0;
    u16 unk4;
};

struct Unk_func_00017EA4_temp_s1 {
    u8 pad0[0x112];
    s16 unk112;
    u8 pad114[0x7A];
    u16 unk18E;
    s32 unk190;
    u8 pad194[0xC];
    s32 unk1A0;
};

struct Unk_func_00017FC4_1 {
    u16 unk0;
    u16 unk2;
    u16 unk4;
};

struct Unk_func_00017FC4_temp_s0 {
    u8 pad0[0x12C];
    u16 unk12C;
    u16 unk12E;
    u16 unk130;
};

struct Unk_sceWlanDrv_driver_4C7F62E0_temp_s1 {
    u8 pad0[0x1CC];
    s32 unk1CC;
};

struct Unk_sceWlanDrv_driver_C9A8CAB7_temp_s0 {
    u8 pad0[0x188];
    s32 unk188;
};

extern struct Unk_D_000191B0 *D_000191B0;
extern struct D_0001925C_s D_0001925C;
extern s32 D_00019290;
extern s32 D_0001929C;
extern s32 D_000192A0;
extern s32 D_000192A4;
extern s32 D_000192A8;
extern s32 D_000192AC;
extern s32 D_000192B0;
extern s32 D_000192B4;

M2C_UNK DmacManForKernel_745E19EF(s32);
M2C_UNK InterruptManagerForKernel_CDC86B64(s32, M2C_UNK, s32, M2C_UNK);
void func_00003114(struct Unk_func_00003114_0 *arg0);
void func_00003138(struct Unk_func_00003114_0 *arg0);
void func_00003158(struct Unk_func_00003158_0 *arg0);
void func_000031DC(struct Unk_func_000031DC_0 *arg0);
void func_00003268(struct Unk_func_00003268_0 *arg0, s32 arg1);
s32 func_00003304(struct Unk_func_00003304_0 *arg0);
void func_00003374(struct Unk_func_00003374_0 *arg0);
void func_000033E4(struct Unk_func_000033E4_0 *arg0);
s32 func_00003CE0(struct Unk_func_00003CE0_0 *arg0);
s32 func_00004A04(s32);
s32 func_00004B20(s32 *arg0);
s32 func_0000829C(struct Unk_func_0000829C_0 *arg0);
void func_000082AC(void);
s32 func_000083B4(s32 *arg0);
void func_000083C0(u32 arg0);
void func_000083F0(u32 arg0);
void func_00008470(struct Unk_func_00008470_0 *arg0, struct Unk_func_00008470_1 *arg1);
s32 func_000090E8(struct Unk_func_000090E8_0 *arg0, s32 arg1, s8 *arg2);
s32 func_00009160(struct Unk_func_00009160_0 *arg0, s32 arg1, u8 *arg2);
void func_0000AB18(struct Unk_func_00008470_1 *arg0);
void func_0000AC3C(void);
void func_0000AC90(struct Unk_func_0000AC90_0 *arg0);
s32 func_0000AF1C(struct Unk_func_0000AF1C_0 *arg0, s32 arg1, u16 *arg2);
s32 func_0000B018(struct Unk_func_0000B018_0 *arg0, s32 arg1, s32 *arg2);
void func_0000B24C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_0000B3CC(s32 arg0, struct Unk_func_0000B3CC_1 *arg1, M2C_UNK arg2);
s32 func_0000BD90(s32, s32, s32, s32);
s32 func_0000BE8C(s32, s32, s32, s32);
s32 func_0000BF70(void);
s32 func_0000D18C(void);
s32 func_0000E5F0(s32, s32, s32);
s32 func_0000F370(struct Unk_func_0000F370_0 *arg0);
void func_00015958(struct Unk_func_00015958_0 *arg0);
s32 func_000161A4(s32, s32, s32, s32, s32);
s32 func_00017880(s32);
s32 func_00017A3C(struct Unk_func_00003114_0 *arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4);
s32 func_00017BCC(struct Unk_func_00003114_0 *arg0, s32 arg1, s32 arg2);
s32 func_00017EA4(struct Unk_func_00003114_0 *arg0, struct Unk_func_00017EA4_1 *arg1);
s32 func_00017FC4(struct Unk_func_00003114_0 *arg0, struct Unk_func_00017FC4_1 *arg1);
s32 module_reboot_before(void);
s32 sceKernelCancelAlarm(s32);
s32 sceKernelCancelCallback(s32);
s32 sceKernelClearEventFlag(s32, u32);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelCreateVpl(void *, s32, u32, u32, void *);
s32 sceKernelDeleteEventFlag(u32);
s32 sceKernelDeleteMbx(u32);
s32 sceKernelDeleteSema(u32);
s32 sceKernelDeleteVpl(u32);
s32 sceKernelFreeVpl(u32, void *);
u32 sceKernelGetSystemTimeLow(void);
s32 sceKernelPollEventFlag(s32, u32, s32, void *);
s32 sceKernelSendMbx(u32, void *);
s32 sceKernelSetAlarm(u32, s32, void *);
s32 sceKernelSetEventFlag(s32, u32);
s32 sceKernelSignalSema(u32, s32);
s32 sceKernelWaitSema(u32, s32, void *);
M2C_UNK sceNetIfhandle_driver_54D1AEA1(void *);
M2C_UNK sceNetIfhandle_driver_C9344A59(void *);
M2C_UNK sceSysreg_driver_00C2628E(M2C_UNK);
M2C_UNK sceSysreg_driver_1969E840(M2C_UNK, M2C_UNK);
M2C_UNK sceSysreg_driver_1D382514(M2C_UNK, M2C_UNK);
M2C_UNK sceSysreg_driver_31154490(M2C_UNK);
M2C_UNK sceSysreg_driver_4716E71E(M2C_UNK);
M2C_UNK sceSysreg_driver_D74F1D48(M2C_UNK);
M2C_UNK sceSysreg_driver_EC4BF81F(M2C_UNK);
s32 sceWlanDrv_driver_44A99F9D(s32 *arg0, s32 *arg1);
s32 sceWlanDrv_driver_4C7F62E0(void);
void sceWlanDrv_driver_C9A8CAB7(void);
void sceWlanDrv_driver_E50312AB(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 sceWlanDrv_driver_EB3235B5(u32 arg0, s32 arg1);
s32 sceWlanDrv_driver_EC9232F0(void);
s32 sceWlanDrv_driver_FBD385FB(void);
s32 sceWlanGetSwitchState(void);

#endif
