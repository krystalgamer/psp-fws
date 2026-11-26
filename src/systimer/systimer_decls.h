#ifndef SYSTIMER_DECLS_H
#define SYSTIMER_DECLS_H

#include "common.h"
#include "m2c_macros.h"

typedef struct {
    volatile u32 timerData;
    volatile u32 baseTime;
    volatile s32 prsclNumerator;
    volatile s32 prsclDenominator;
    volatile s32 rsrv[60];
    volatile u32 nowData;
} SceHwTimer;
typedef s32 (*SceSTimerCb)(s32, s32, s32, s32);
typedef struct {
    SceHwTimer *regadr;
    s32 intrcode;
    s32 timid;
    u32 prev_tmcy;
    u32 prev_icnt;
    SceSTimerCb cb;
    u32 totalcount;
    void *common;
} SceSTimerInfo;

typedef struct {
    u32 Control;
    u32 N;
    s32 M;
} SceSTimerReg;

struct Unk_func_000002B0_temp_a2 {
    s32 unk0;
    u8 pad4[0xFC];
    s32 unk100;
};

extern SceSTimerInfo D_00000B20[4];
extern SceSTimerReg STimerRegSave[4];

s32 _sceSTimerGetCount(SceSTimerInfo *timer);
void _sceSTimerStopCount(SceSTimerInfo *timer);
void func_00000128(SceSTimerInfo *timer);
void func_000002B0(void **arg0);
void func_000002B4(void **arg0);

#endif
