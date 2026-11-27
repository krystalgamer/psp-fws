#ifndef REBOOT_DECLS_H
#define REBOOT_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_00008F0C_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_000091C4_0 {
    u8 pad0[0x10];
    struct Unk_func_000091C4_temp_a0 *unk10;
};

struct Unk_func_000091C4_temp_a0 {
    void *unk0;
    void **unk4;
    struct Unk_func_000091C4_temp_a3 *unk8;
};

struct Unk_func_000091C4_temp_a1 {
    u8 pad0[0x4];
    void **unk4;
};

struct Unk_func_000091C4_temp_a3 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0000D694_0 {
    u8 pad0[0x2];
    u8 unk2;
    u8 unk3;
};

extern s32 D_00016DEC;
extern M2C_UNK D_00016DF1;
extern s32 D_00017140;
extern s32 D_00017144;
extern s32 D_00017148;
extern void *D_00017344;
extern void **D_00017348;
extern void *D_0001734C;
extern s32 D_00018BCC;
extern s32 D_00018BD0;
extern s32 D_00018BD4;
extern M2C_UNK D_0001D890;
extern M2C_UNK D_0002B79C;
extern M2C_UNK D_0002DB34;
extern M2C_UNK D_0002DBF4;

s32 func_00000000(s32);
void func_00000768(s32 arg0);
s32 func_00001B78(const char *fmt, ...);
s32 func_00001CB4(void);
s32 func_00001D14(void);
s32 func_00001D2C(s32 arg0);
s32 func_00001D58(void);
s32 func_00001D68(s32 arg0);
s32 func_00001D74(void);
void func_00002A00(u8 *arg0, u8 *arg1);
void func_00002A4C(u8 *arg0, u8 *arg1, u32 arg2);
s32 func_00002CB8(s32 arg0);
void func_00002CCC(s32 arg0, s32 arg1);
void func_00002CF0(void);
s32 func_00002D74(s32);
M2C_UNK *func_00002D84(void);
s32 func_00002EA0(s32, s32);
M2C_UNK func_00002F14();
s32 func_000032F8(s8 arg0);
s32 func_000033C4(void);
void func_000033EC(void);
void func_0000348C(s8 arg0);
void func_00003B50(void *arg0, s32 arg1);
s32 func_00003DD8(void *arg0);
M2C_UNK func_000040CC();
s32 func_00004244(s32);
void func_000043B8(void);
s32 func_0000443C(void);
s32 func_00004444(void);
s32 func_00007140(void);
s32 func_000071F0(void);
M2C_UNK func_000079E4(s32, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_00007E50(s32, M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_00008268(s32);
s32 func_00008444();
s32 func_00008D1C();
s32 func_00008E68(void);
s32 func_00008E70(void);
void func_00008E78(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3);
s32 func_00008ED4(s32 arg0);
void func_00008F0C(struct Unk_func_00008F0C_0 *arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_00008F5C(s32 arg0, s32 arg1, s32 arg2);
s32 func_000090DC(s32 arg0, s32 arg1, s32 arg2);
s32 func_00009134(s32 arg0, s32 arg1);
s32 func_0000917C(s32 arg0, s32 arg1);
s32 func_000091C4(struct Unk_func_000091C4_0 *arg0);
void func_00009254(s32 arg0, M2C_UNK arg1);
void func_00009290(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_00009384(s32 arg0, s32 arg1);
s32 func_000093BC(void);
s32 func_000093E8(void);
s32 func_00009484(void);
s32 func_0000A3B4(s32, s32, s32);
s32 func_0000A7F4(s32, s32, s32);
s32 func_0000ABCC(s32, s32);
s32 func_0000AE8C(s32, s32);
M2C_UNK func_0000AFCC(s32, M2C_UNK);
M2C_UNK func_0000B148(s32, M2C_UNK, M2C_UNK);
s32 func_0000D694(struct Unk_func_0000D694_0 *arg0);
s32 func_0000DC4C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_0000E020(void);
M2C_UNK func_0000E028();
s32 func_0000E098(void);
void func_0000E0E8(void);
void func_0000E108(void);
s32 func_0000E2E4(void);
s32 func_0000E2F0(s32);
s32 func_0000F3D8(s32);
s32 func_0000F78C(s32, s32, s32, s32, s32);
M2C_UNK func_0000FC60();
void func_00010328(s32 arg0);
s32 func_00010960(void);
s32 func_00010E08(void);
s32 func_00010E14(void);
s32 func_00010EBC(void);
s32 func_000115B8(s32, s32, s32, s32, s32);
s32 func_000119F0(void);
s32 func_00011AB0(void);
void func_00011B80(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_00012BE0(void);
s32 func_00012BEC(void);
s32 func_00012BF8(void);
void func_0001318C(void);
void func_000131AC(void);
void func_000131CC(void);
void func_000131EC(void);
void func_0001320C(void);
void func_0001322C(void);
void func_0001324C(void);
void func_0001326C(void);
void func_0001328C(void);
void func_00013334(void);
void func_00013354(void);
void func_00013374(void);
void func_00013394(void);
void func_000133B4(void);
void func_000133D4(void);
void func_0001347C(void);
void func_0001349C(void);
void func_000134BC(void);
void func_000134DC(void);
void func_000134FC(void);
void func_0001351C(void);
M2C_UNK func_000135C4(M2C_UNK, M2C_UNK);
void func_000135F0(void);
void func_00013610(void);
void func_00013630(void);
void func_00013650(void);
void func_00013670(void);
void func_00013690(void);
void func_00013738(void);
void func_00013758(void);
void func_00013800(void);
void func_00013820(void);
void func_00013840(void);
void func_00013860(void);
void func_00013880(void);
void func_000138A0(void);
void func_000138D8(void);
void func_000138F8(void);
M2C_UNK func_00013AAC(M2C_UNK, M2C_UNK);
s32 module_bootstart(void);

#endif
