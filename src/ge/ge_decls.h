#ifndef GE_DECLS_H
#define GE_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_00007AC0_s {
    u8 pad0[0x18];
    volatile s32 unk18;
    volatile s32 unk1C;
    volatile s32 unk20;
};

/* GE hardware registers */
#define HW(addr) (*(volatile u32 *)(addr))
#define HW_GE_RESET HW(0xBD400000)
#define HW_GE_UNK004 HW(0xBD400004)
#define HW_GE_EDRAM_HW_SIZE HW(0xBD400008)
#define HW_GE_EXEC HW(0xBD400100)
#define HW_GE_UNK104 HW(0xBD400104)
#define HW_GE_LISTADDR HW(0xBD400108)
#define HW_GE_STALLADDR HW(0xBD40010C)
#define HW_GE_RADR1 HW(0xBD400110)
#define HW_GE_RADR2 HW(0xBD400114)
#define HW_GE_VADR HW(0xBD400118)
#define HW_GE_IADR HW(0xBD40011C)
#define HW_GE_OADR HW(0xBD400120)
#define HW_GE_OADR1 HW(0xBD400124)
#define HW_GE_OADR2 HW(0xBD400128)
#define HW_GE_GEOMETRY_CLOCK HW(0xBD400200)
#define HW_GE_UNK300 HW(0xBD400300)
#define HW_GE_INTERRUPT_TYPE1 HW(0xBD400304)
#define HW_GE_INTERRUPT_TYPE2 HW(0xBD400308)
#define HW_GE_INTERRUPT_TYPE3 HW(0xBD40030C)
#define HW_GE_INTERRUPT_TYPE4 HW(0xBD400310)
#define HW_GE_EDRAM_ENABLED_SIZE HW(0xBD400400)
#define HW_GE_CMD(i) HW(0xBD400800 + (i) * 4)
#define HW_GE_EDRAM_REFRESH_UNK1 HW(0xBD500000)
#define HW_GE_EDRAM_UNK10 HW(0xBD500010)
#define HW_GE_EDRAM_REFRESH_UNK2 HW(0xBD500020)
#define HW_GE_EDRAM_REFRESH_UNK3 HW(0xBD500030)
#define HW_GE_EDRAM_UNK40 HW(0xBD500040)
#define HW_GE_EDRAM_ADDR_TRANS_DISABLE HW(0xBD500070)
#define HW_GE_EDRAM_ADDR_TRANS_VALUE HW(0xBD500080)
#define HW_GE_EDRAM_UNK90 HW(0xBD500090)

#define HW_GE_INTSIG 1
#define HW_GE_INTEND 2
#define HW_GE_INTFIN 4
#define HW_GE_INTERR 8

#define SCE_GE_INTR 25

#define pspSync() __asm__ __volatile__("sync")

/* GE context saved by sceGeSaveContext (kernel view of SceGeContext) */
typedef struct {
    u32 exec;               /* 0x00 */
    u32 ladr;               /* 0x04 */
    u32 sadr;               /* 0x08 */
    u32 radr1;              /* 0x0C */
    u32 radr2;              /* 0x10 */
    u32 vadr;               /* 0x14 */
    u32 iadr;               /* 0x18 */
    u32 oadr;               /* 0x1C */
    u32 oadr1;              /* 0x20 */
    u32 oadr2;              /* 0x24 */
    u32 edramTransDisable;  /* 0x28 */
    u32 edramTransVal;      /* 0x2C */
    u32 edramRefresh1;      /* 0x30 */
    u32 edramRefresh2;      /* 0x34 */
    u32 edramRefresh3;      /* 0x38 */
    u32 edramUnk40;         /* 0x3C */
    u32 geometryClock;      /* 0x40 */
    u32 dl[495];            /* 0x44: command list restoring the state */
} SceGeContext; /* 0x800 */

/* display list (1.00 layout) */
typedef struct SceGeDisplayList {
    struct SceGeDisplayList *next;  /* 0x00 */
    struct SceGeDisplayList *prev;  /* 0x04 */
    u16 state;                      /* 0x08: SCE_GE_DL_STATE_* */
    u16 signal;                     /* 0x0A: SCE_GE_DL_SIGNAL_* */
    SceGeContext *ctx;              /* 0x0C */
    u32 list;                       /* 0x10 */
    u32 stall;                      /* 0x14 */
    s32 cbId;                       /* 0x18 */
    u32 signalData;                 /* 0x1C */
} SceGeDisplayList; /* 0x20 */

#define SCE_GE_DL_STATE_NONE 0
#define SCE_GE_DL_STATE_QUEUED 1
#define SCE_GE_DL_STATE_RUNNING 2
#define SCE_GE_DL_STATE_COMPLETED 3
#define SCE_GE_DL_STATE_PAUSED 4

#define SCE_GE_DL_SIGNAL_NONE 0
#define SCE_GE_DL_SIGNAL_HANDLER_SUSPEND 1
#define SCE_GE_DL_SIGNAL_BREAK 2
#define SCE_GE_DL_SIGNAL_PAUSE 3

/* GE call stack entry (1.00: 16 bytes) */
typedef struct {
    u32 listAddr;  /* 0x0 */
    u32 oadr;      /* 0x4 */
    u32 radr1;     /* 0x8 */
    u32 radr2;     /* 0xC */
} SceGeStack;

/* display list queue (1.00 layout) */
typedef struct {
    SceGeDisplayList *active_first;  /* 0x000: running list */
    SceGeDisplayList *active_last;   /* 0x004 */
    SceGeDisplayList *free_first;    /* 0x008 */
    SceGeDisplayList *free_last;     /* 0x00C */
    SceGeDisplayList lists[64];      /* 0x010 */
    SceUID drawingEvFlagId;          /* 0x810 */
    s32 stackOff;                    /* 0x814 */
    SceGeStack stack[32];            /* 0x818 */
} SceGeQueue; /* 0xA18 */

/* saved by _sceGeQueueSuspend (1.00) */
typedef struct {
    u32 intrType;  /* 0x0: HW_GE_INTERRUPT_TYPE1 */
    u32 unk4;      /* 0x4: HW_GE_UNK004 */
} SceGeQueueSuspendInfo;

typedef void (*SceGeCallback)(int id, void *arg);

typedef struct {
    SceGeCallback signal_func;  /* 0x0 */
    void *signal_arg;           /* 0x4 */
    SceGeCallback finish_func;  /* 0x8 */
    void *finish_arg;           /* 0xC */
} SceGeCallbackData;

/* 1.00: 8 bytes */
typedef struct {
    u32 size;           /* 0x0 */
    SceGeContext *ctx;  /* 0x4 */
} SceGeListArgs;

typedef struct {
    u32 size;
    u32 attr;
    void *cb;
} SceIntrHandler;

extern s32 D_00003ABC;
extern s32 D_00004500;
extern M2C_UNK D_00005AC0;
extern s32 D_00006240;
extern u32 D_00006600;
extern s32 D_00006A80;
extern u32 D_00006A84;
extern s32 D_00006F80;
extern M2C_UNK D_00007640;
extern struct D_00007AC0_s D_00007AC0;
extern s32 D_00007AC8;
extern s32 D_00007FC0;
extern SceGeContext _aw_ctx;
extern SceGeQueue g_AwQueue;
extern SceIntrHandler g_GeIntrOpt;
extern SceGeQueueSuspendInfo g_GeSuspend;
extern u8 g_GeSysEv[];
extern u16 g_cbhook;
extern volatile u32 *const g_pAwRegAdr[20];
extern const u8 save_regs[32];

s32 SysMemForKernel_EF2EE8C1();
s32 _sceGeEdramResume(void);
s32 _sceGeEdramSuspend(void);
void _sceGeErrorInterrupt(u32 attr, u32 unk1, s32 arg2);
void _sceGeFinishInterrupt(u32 attr, u32 unk1, s32 arg2);
s32 _sceGeInterrupt(s32 arg0, s32 arg1, s32 arg2);
s32 _sceGeListEnQueue(void *list, void *stall, s32 cbid, SceGeListArgs *arg, s32 head);
void _sceGeListInterrupt(u32 attr, u32 unk1, s32 arg2);
s32 _sceGeQueueEnd(void);
s32 _sceGeQueueInit(void);
s32 _sceGeQueueResume(void);
s32 _sceGeQueueStatus(void);
s32 _sceGeQueueSuspend(void);
s32 _sceGeReset(void);
void func_00001790(s32 arg0);
void func_000017B8(s32 arg0);
s32 func_000017E0(s32, s32, s32, s32);
void func_000018B8(s32 arg0);
void func_000018E0(s32 arg0);
s32 func_00001908(s32, s32, s32, s32);
void func_00001E9C(s32 arg0);
void func_00001EC4(s32 arg0, s32 arg1, s32 arg2);
s32 func_00001EF0(void);
void func_00001FA4(s32 arg0);
void func_00001FCC(s32 arg0, s32 arg1, s32 arg2);
s32 func_00001FF8(void);
s32 func_00002990(s32, s32, s32, s32, s32);
s32 func_0000428C(s32, s32, s32, s32, s32);
void _sceGeErrorInterrupt(u32 attr, u32 unk1, s32 arg2);
s32 func_00005140(s32, s32, s32, s32, s32);
s32 module_start(void);
void *sceGeEdramGetAddr(void);
s32 sceGeEdramGetHwSize(void);
u32 sceGeEdramGetSize(void);
s32 sceGeEdramInit(void);
s32 sceGeInit(void);
s32 sceGeListEnQueue(void *arg0, void *arg1, s32 arg2, void *arg3);
s32 sceGeListEnQueueHead(void *arg0, void *arg1, s32 arg2, void *arg3);
s32 sceGeRegisterLogHandler(s32 arg0);
s32 sceGeRestoreContext(SceGeContext *ctx);
s32 sceGeSaveContext(SceGeContext *ctx);
s32 sceGeSetGeometryClock(s32 arg0);
s32 sceKernelDeleteEventFlag(s32);

#endif
