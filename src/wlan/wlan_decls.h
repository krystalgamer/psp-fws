#ifndef WLAN_DECLS_H
#define WLAN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

typedef struct {
    s32 val;
    u32 key;
} SceWlanKeyVal;

/* message posted to the driver thread's mailbox (VPL-allocated or static) */
typedef struct SceWlanMsg {
    struct SceWlanMsg *next;    /* 0x00 SceKernelMsgPacket */
    u8 msgPriority;             /* 0x04 */
    u8 pad5[3];
    u32 cmd;                    /* 0x08 0x8000000x */
    u32 unkC;
    u32 unk10;
    u32 arg;                    /* 0x14 */
    u32 state;                  /* 0x18 bit 0: queued */
} SceWlanMsg;

typedef struct {
    u8 addr[6];
} SceWlanEtherAddr;

/* MLME request posted to the MAC management mailbox */
typedef struct SceWlanMlmeMsg {
    struct SceWlanMlmeMsg *next;    /* 0x00 SceKernelMsgPacket */
    u8 msgPriority;                 /* 0x04 */
    u8 pad5[3];
    u32 cmd;                        /* 0x08 */
    s32 status;                     /* 0x0C */
    union {
        u32 arg;                    /* 0x10 (or a 6-byte address, cmd 7) */
        u16 arg16;
    };
    union {
        void *buf;                  /* 0x14 */
        u32 arg2;
    };
    u8 data[0xC4 - 0x18];
} SceWlanMlmeMsg;

/* singly linked FIFO protected by suspendIntr (next pointer at +8) */
/* packet buffer: pool entry (circular list) and FIFO element (next pointer at +8) */
typedef struct SceWlanQEnt {
    u32 inUse;                  /* 0x00 */
    struct SceWlanQEnt *link;   /* 0x04 pool ring */
    struct SceWlanQEnt *next;   /* 0x08 FIFO */
    u32 unkC;
    void *buf;                  /* 0x10 */
} SceWlanQEnt;
typedef struct {
    SceWlanQEnt *head;          /* 0x00 */
    SceWlanQEnt *tail;          /* 0x04 */
} SceWlanQueue;

/* sceWlanDrv_lib_81579D36 parameter block */
typedef struct {
    u32 unk0[4];                /* 0x00 */
    u32 unk10;                  /* 0x10 */
    u8 unk14[4];                /* 0x14 */
    u8 unk18[4];                /* 0x18 */
} SceWlanGPParam;

/* memory-stick-style host interface of the chip (SceWlanMac.bus) */
typedef struct {
    SceUID sema;                /* 0x00 command lock */
    SceUID evf;                 /* 0x04 */
    u32 base;                   /* 0x08 controller base, 0xBD300000 = MSIF0 */
    volatile u32 *cmdReg;       /* 0x0C */
    u32 unk10;
    volatile u32 *statusReg;    /* 0x14 */
    volatile u32 *reg;          /* 0x18 control */
    u8 unk1C[0x30 - 0x1C];
} SceWlanBus;

typedef struct {
    u32 w[10];
} SceWlanWakeUp;

/* scan result entry */
typedef struct {
    u8 bssid[6];                /* 0x00 */
    u8 unk6[2];
    u32 flags;                  /* 0x08 bit 0: new */
    u8 *info;                   /* 0x0C */
} SceWlanBssEnt;

typedef struct SceWlanSoftc SceWlanSoftc;
typedef struct SceWlanMac SceWlanMac;

#if FW_VERSION >= 201
/* only the common head is known for 2.00+ */
struct SceWlanMac {
    u32 status;                 /* 0x000 bit 0: powered */
    u32 unk4;
    u32 flags;                  /* 0x008 */
    SceWlanBus bus;             /* 0x00C */
};
#else
typedef struct {
    SceUID sema;                /* 0x00 */
    u8 frame[1];                /* 0x04 received frame */
} SceWlanMlmeBuf;

typedef struct {
    u32 unk00;
    u16 unk04;                  /* 0x04 */
    u16 unk06;                  /* 0x06 */
    u16 unk08;                  /* 0x08 */
    u16 unk0A;                  /* 0x0A */
    SceWlanEtherAddr bssid;     /* 0x0C */
    u8 unk12[2];
    u16 unk14;                  /* 0x14 */
    u8 unk16[2];
    u32 unk18;                  /* 0x18 */
    u8 unk1C[0x30 - 0x1C];
    s32 unk30;                  /* 0x30 */
    SceUID evf34;               /* 0x34 */
    SceUID evf38;               /* 0x38 */
    SceUID sema3C;              /* 0x3C */
    SceWlanMlmeBuf *buf;        /* 0x40 */
    u8 unk44[0x50 - 0x44];
    void *unk50;                /* 0x50 */
    void *unk54;                /* 0x54 */
} SceWlanMlmeSync;

/* MAC/chip state (D_000191B0->mac); offsets are 1.00's, 1.50 inserts 0x3C bytes before 0x7C */
struct SceWlanMac {
    u32 status;                 /* 0x000 bit 0: powered */
    u32 unk4;
    u32 flags;                  /* 0x008 bit 0: clock on, bit 0x20: ... */
    SceWlanBus bus;             /* 0x00C */
    u8 unk03C[0x3E];            /* 0x03C */
    u8 unk07A[2];
#if FW_VERSION >= 150
    u8 unk_v150[0x3C];
#endif
    SceWlanMlmeSync *sync;      /* 0x07C mode data */
    void (*modeStop)(SceWlanMac *);  /* 0x080 */
    u32 unk84[4];               /* 0x084 */
    s32 (*regWrite)(SceWlanMac *, s32, void *);  /* 0x094 */
    s32 (*gpSend)(SceWlanMac *, s32, void *, u32);              /* 0x098 */
    s32 (*gpRecv)(SceWlanMac *, s32, void *, u32, s32 *);       /* 0x09C */
    u32 unkA0;
    s32 (*prevEstablish)(SceWlanMac *, void *);  /* 0x0A4 */
    s32 dmaOp;                  /* 0x0A8 */
    void *dmaBuf;               /* 0x0AC */
    u32 unkB0;                  /* 0x0B0 */
    SceUID thread;              /* 0x0B4 */
    u8 unk0B8[0xBC - 0xB8];
    SceUID mbx;                 /* 0x0BC MLME mailbox */
    SceWlanSoftc *sc;           /* 0x0C0 */
    u8 unk0C4[0xCE - 0xC4];
    s16 nAddrs;                 /* 0x0CE */
    u8 unk0D0[2];
    s16 unkD2;                  /* 0x0D2 */
    u8 unk0D4[0xE0 - 0xD4];
    SceWlanBssEnt **bss;        /* 0x0E0 */
    u8 unk0E4[4];
    u16 unkE8[3];               /* 0x0E8 */
    u8 unk0EE[2];
    s32 unkF0;                  /* 0x0F0 */
    u32 unkF4[4];               /* 0x0F4 */
    s32 unk104;                 /* 0x104 */
    u8 unk108[0x40];            /* 0x108 */
    u16 unk148;                 /* 0x148 */
    u16 unk14A;                 /* 0x14A */
    u32 unk14C;                 /* 0x14C */
    u32 unk150;                 /* 0x150 */
    u32 unk154;                 /* 0x154 */
    u32 unk158;                 /* 0x158 */
    u32 unk15C;                 /* 0x15C */
    u8 unk160[4];               /* 0x160 */
    u8 unk164[4];               /* 0x164 */
};
#if FW_VERSION < 150
typedef char chk_SceWlanMac[((u32)&((SceWlanMac *)0)->unk15C == 0x15C) ? 1 : -1];
#endif

/* driver state (1.00-1.52), pointed to by D_000191B0; offsets are 1.00's */
struct SceWlanSoftc {
    u32 flags;                  /* 0x000 0x800: game mode, 0x200: MAC address valid, 0x2000: ... */
    u8 unk004[0x90 - 0x4];
    u32 unk90;                  /* 0x090 */
    u32 unk94;                  /* 0x094 */
    u32 unk98;                  /* 0x098 */
    u32 unk9C;                  /* 0x09C */
    u16 unkA0;                  /* 0x0A0 from idstorage key 0x45 */
    u8 unkA2;                   /* 0x0A2 */
    u8 unkA3;
    u32 unkA4;
    SceWlanEtherAddr etherAddr; /* 0x0A8 */
    u8 unk0AE[0x178 - 0xAE];
    u32 unk178;                 /* 0x178 */
    u32 unk17C;                 /* 0x17C */
    u16 unk180;                 /* 0x180 */
    u16 unk182;                 /* 0x182 */
    u8 unk184;                  /* 0x184 */
    u8 unk185;
    u16 unk186;                 /* 0x186 */
    u16 unk188;                 /* 0x188 */
    u16 unk18A;                 /* 0x18A */
    u8 unk18C[0x228 - 0x18C];
    SceUID poolSema;            /* 0x228 */
    s32 poolStride;             /* 0x22C */
    s32 poolCount;              /* 0x230 */
    SceWlanQEnt *pool;          /* 0x234 */
    SceWlanQEnt *poolNext;      /* 0x238 */
    u8 unk23C[0x260 - 0x23C];
    SceUID thread;              /* 0x260 SceWlanMac */
#if FW_VERSION >= 150
    u32 unk_v150;
#endif
    SceUID lock264;             /* 0x264 */
    SceUID lock268;             /* 0x268 */
    SceUID mbx;                 /* 0x26C */
    SceUID vpl;                 /* 0x270 */
    u32 unk274;
    SceWlanMac *mac;            /* 0x278 */
    void *ifh;                  /* 0x27C sceNetIfhandle handle */
    u32 unk280;
    void *ifhCb[4];             /* 0x284 */
    u8 unk294[0x2A8 - 0x294];
    SceWlanQueue q2A8;          /* 0x2A8 */
    SceWlanQueue q2B0;          /* 0x2B0 */
    u8 unk2B8[4];
    u32 unk2BC;                 /* 0x2BC */
    s32 gpCallback;             /* 0x2C0 */
    s32 switchState;            /* 0x2C4 */
};
#if FW_VERSION < 150
typedef char chk_SceWlanSoftc[((u32)&((SceWlanSoftc *)0)->gpCallback == 0x2C0) ? 1 : -1];
#endif
#endif

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

extern const u32 D_00018A00[15];
extern const u16 D_00018A3C[6];
extern const u8 D_00018A48[][14];
extern const SceWlanKeyVal D_000190C4[5];
#if FW_VERSION < 201
extern SceWlanSoftc *D_000191B0;
#else
extern struct Unk_D_000191B0 *D_000191B0;
#endif
extern struct D_0001925C_s D_0001925C;
extern s32 D_00019290;
extern s32 D_0001929C;
extern s32 D_000192A0;
extern s32 D_000192A4;
extern s32 D_000192A8;
extern s32 D_000192AC;
extern s32 D_000192B0;
extern s32 D_000192B4;
extern s32 D_000194E4;
extern SceWlanWakeUp D_0002A038;
extern SceWlanMsg D_0002A060;
extern SceWlanMsg D_0002A07C;
extern SceWlanMsg D_0002A098;
extern u16 D_0002A0C0;
extern SceWlanMsg D_0002A83C;
extern s32 D_0002D7A8;
extern s32 D_0002D7AC;
extern s32 D_0002D7B0;
extern s32 D_0002D7B4;
extern s32 D_0002D7B8;
extern s32 D_0002D7BC;
extern s32 D_0002D7C0;
extern s32 D_0002D7C4;
extern M2C_UNK D_0002E3AC;
extern s32 D_0002E3DC;
extern s32 D_0002EE00;
extern M2C_UNK func_00003F08;

s32 func_000010E0(SceSize args, void *argp);
s32 func_00001118(SceSize args, void *argp);
void func_00001B5C(s32 sw, void *arg);
void func_00002188(void *arg0);
void func_000021AC(void *arg0);
void func_0000227C(void *arg0);
void func_000022A0(void *arg0);
void func_000022C0(void *arg0);
void func_000022E4(void *arg0);
void func_00002350(void *arg0, s32 arg1);
void func_000023EC(void *arg0);
s32 func_00002BC8(void *arg0, s32 arg1);
void func_00003114(struct Unk_func_00003114_0 *arg0);
void func_00003138(struct Unk_func_00003114_0 *arg0);
void func_00003158(struct Unk_func_00003158_0 *arg0);
void func_000031DC(struct Unk_func_000031DC_0 *arg0);
void func_00003268(struct Unk_func_00003268_0 *arg0, s32 arg1);
s32 func_00003304(struct Unk_func_00003304_0 *arg0);
void func_00003374(struct Unk_func_00003374_0 *arg0);
void func_000033E4(struct Unk_func_000033E4_0 *arg0);
void func_00003448(void *arg0);
void func_000034CC(void *arg0);
s32 func_000035F4(void *arg0);
void func_00003664(void *arg0);
s32 func_000036EC(s32);
s32 func_000037A4(s32 *arg0);
s32 func_00003CE0(struct Unk_func_00003CE0_0 *arg0);
s32 func_00004A04(s32);
s32 func_00004B20(s32 *arg0);
s32 func_00006338(void *arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4);
s32 func_00006458(void *arg0, void *arg1);
s32 func_00006574(void *arg0, void *arg1);
s32 func_000065D4(void *arg0);
void func_000065E4(void);
s32 func_000066FC(s32 *arg0);
void func_00006708(u32 arg0);
void func_00006738(u32 arg0);
void func_000067B8(void *arg0, void *arg1);
void func_0000806C(void *arg0);
s32 func_0000829C(struct Unk_func_0000829C_0 *arg0);
void func_000082AC(void);
s32 func_000082D4(s32 arg0, s32 arg1);
void func_00008394(void);
s32 func_000083B4(s32 *arg0);
void func_000083C0(u32 arg0);
void func_000083DC(void);
void func_000083F0(u32 arg0);
void func_00008424(void *arg0);
void func_00008470(struct Unk_func_00008470_0 *arg0, struct Unk_func_00008470_1 *arg1);
s32 func_000086B0(s32);
void func_00008854(s32 arg0, s32 arg1);
s32 func_00008914(void *arg0, s32 arg1, u16 *arg2);
s32 func_00008A10(void *arg0, s32 arg1, s32 *arg2);
s32 func_00008A84(void *arg0, s32 arg1, s32 *arg2);
s32 func_00008FB4(void);
s32 func_000090E8(struct Unk_func_000090E8_0 *arg0, s32 arg1, s8 *arg2);
s32 func_00009160(struct Unk_func_00009160_0 *arg0, s32 arg1, u8 *arg2);
s32 func_000091D4(s32, s32);
s32 func_00009500(SceWlanBus *bus, s32 ms);
s32 func_00009810(void);
s32 func_00009FA8(SceWlanMac *mac, s32 cmd, u16 len, void *buf);
s32 func_0000A4C8(s32 arg0, void *arg1, s32 arg2);
void func_0000AB18(struct Unk_func_00008470_1 *arg0);
s32 func_0000ABB4(void);
void func_0000AC3C(void);
void func_0000AC90(struct Unk_func_0000AC90_0 *arg0);
s32 func_0000ACB8(void);
s32 func_0000AF1C(struct Unk_func_0000AF1C_0 *arg0, s32 arg1, u16 *arg2);
s32 func_0000AF8C(s32 arg0);
s32 func_0000AFEC(void);
s32 func_0000B018(struct Unk_func_0000B018_0 *arg0, s32 arg1, s32 *arg2);
void func_0000B24C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_0000B3CC(s32 arg0, struct Unk_func_0000B3CC_1 *arg1, M2C_UNK arg2);
s32 func_0000BC54(s32, s32, s32);
s32 func_0000BD90(s32, s32, s32, s32);
s32 func_0000BE8C(s32, s32, s32, s32);
s32 func_0000BF70(void);
s32 func_0000C5E4(void *arg0);
s32 func_0000D18C(void);
s32 func_0000E5F0(s32, s32, s32);
s32 func_0000F370(struct Unk_func_0000F370_0 *arg0);
s32 func_0000FAEC(void);
s32 func_0000FAF4(void);
s32 func_0000FAFC(void);
s32 func_0000FB04(void);
s32 func_0000FE1C(void);
s32 func_00010ADC(void);
s32 func_00010AE4(void);
s32 func_00010AEC(void);
s32 func_00010AF4(void);
s32 func_00010AFC(void);
s32 func_00010B04(void);
s32 func_00010B0C(void);
void func_00010F6C(void *arg0);
void func_000144F0(void *arg0);
void func_00015218(void *arg0);
s32 func_000152F4(s32);
s32 func_000156F8(void *arg0, s32 arg1, s32 arg2);
void func_00015958(struct Unk_func_00015958_0 *arg0);
s32 func_000161A4(s32, s32, s32, s32, s32);
s32 func_00017880(s32);
s32 func_00017A3C(struct Unk_func_00003114_0 *arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4);
s32 func_00017BCC(struct Unk_func_00003114_0 *arg0, s32 arg1, s32 arg2);
s32 func_00017EA4(struct Unk_func_00003114_0 *arg0, struct Unk_func_00017EA4_1 *arg1);
s32 func_00017FC4(struct Unk_func_00003114_0 *arg0, struct Unk_func_00017FC4_1 *arg1);
s32 module_reboot_before(void);
M2C_UNK sceKernelCallSubIntrHandler(s32, M2C_UNK, s32, M2C_UNK);
s32 sceKernelCancelAlarm(s32);
s32 sceKernelCancelCallback(s32);
s32 sceKernelClearEventFlag(s32, u32);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelCreateVpl(void *, s32, u32, u32, void *);
s32 sceKernelDelayThread(u32);
s32 sceKernelDeleteEventFlag(u32);
s32 sceKernelDeleteMbx(u32);
s32 sceKernelDeleteSema(u32);
s32 sceKernelDeleteVpl(u32);
M2C_UNK sceKernelDmaOpFree(s32);
s32 sceKernelFreeVpl(u32, void *);
u32 sceKernelGetSystemTimeLow(void);
s32 sceKernelPollEventFlag(s32, u32, s32, void *);
s32 sceKernelSendMbx(u32, void *);
s32 sceKernelSetAlarm(u32, s32, void *);
s32 sceKernelSetEventFlag(s32, u32);
s32 sceKernelSignalSema(u32, s32);
s32 sceKernelWaitSema(u32, s32, void *);
M2C_UNK sceNetDestroyIfhandleEther(void *);
M2C_UNK sceNetDetachIfhandleEther(void *);
M2C_UNK sceNetFlagIfEvent(void *, M2C_UNK, M2C_UNK);
void *sceNetGetIfhandleOpt(void *ifh);
s32 sceNetSendIfEvent(void *ifh, s32 ev, s32 arg);
M2C_UNK sceSysconResetDevice(M2C_UNK, M2C_UNK);
M2C_UNK sceSysregMsifBusClockDisable(M2C_UNK);
M2C_UNK sceSysregMsifBusClockEnable(M2C_UNK);
M2C_UNK sceSysregMsifClkDisable(M2C_UNK);
M2C_UNK sceSysregMsifClkEnable(M2C_UNK);
M2C_UNK sceSysregMsifClkSelect(M2C_UNK, M2C_UNK);
M2C_UNK sceSysregMsifDelaySelect(M2C_UNK, M2C_UNK);
M2C_UNK sceSysregMsifIoDisable(M2C_UNK);
M2C_UNK sceSysregMsifIoEnable(M2C_UNK);
M2C_UNK sceSysregMsifResetDisable(M2C_UNK);
M2C_UNK sceSysregMsifResetEnable(M2C_UNK);
void sceWlanDevDetach(void);
s32 sceWlanDevEnd(void);
s32 sceWlanDropCheck(void);
s32 sceWlanGPUnRegisterCallback(void);
s32 sceWlanGetDropRate(s32 *arg0, s32 *arg1);
s32 sceWlanGetSwitchState(void);
s32 sceWlanSetDropRate(u32 arg0, s32 arg1);
void sceWlanSetFirm(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

#endif
