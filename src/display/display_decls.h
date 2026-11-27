#ifndef DISPLAY_DECLS_H
#define DISPLAY_DECLS_H

#include "common.h"
#include "m2c_macros.h"

typedef struct {
    s32 changed;      /* 0x00: new topaddr pending for the next vblank */
    void *topaddr;    /* 0x04: requested frame buffer */
    void *curTopaddr; /* 0x08: frame buffer being displayed */
    s32 bufferWidth;  /* 0x0C */
    s32 pixelFormat;  /* 0x10 */
} SceDisplayFrameBuf; /* 0x14 */

typedef struct {
    void *unk0[9];
    s32 (*unk24)(s32);
} SceDisplaySm1Ops;

typedef struct {
#if FW_VERSION == 100
    SceDisplayFrameBuf fb[4]; /* 0x00: one per level */
    s8 foregroundLevel;       /* 0x50: level shown, -1 none */
    s8 enabled;               /* 0x51: sceDisplayEnable/Disable */
    s8 lcdOn;                 /* 0x52: last enabled state written to GPIO 1 */
    s8 pwmState;              /* 0x53: backlight PWM 0 off, 1 restart, 2 on */
    s32 bufferWidth;          /* 0x54: format programmed into the DMAC */
    s32 pixelFormat;          /* 0x58 */
    s32 brightness;           /* 0x5C: target level 0..100 */
    s32 curBrightness;        /* 0x60 */
    s32 brightnessFade;       /* 0x64: step curBrightness towards brightness each vblank */
    s32 curModeIdx;           /* 0x68 */
    s32 modeIdx;              /* 0x6C */
    s32 mode;                 /* 0x70 */
    s32 width;                /* 0x74 */
    s32 height;               /* 0x78 */
    s32 holdMode;             /* 0x7C */
    s32 suspendWait;          /* 0x80: vblanks to wait before allowing suspend */
    s32 modeChangeWait;       /* 0x84: vblanks left of a mode change */
    SceDisplaySm1Ops *sm1Ops; /* 0x88 */
#else
    u8 pad0[0x60];
    volatile s32 unk60;
#endif
} SceDisplay;

typedef struct {
#if FW_VERSION == 100
    u32 subIntrMask;          /* 0x00: enabled VBLANK sub interrupts */
    u32 vcount;               /* 0x04 */
    s32 unk8;                 /* 0x08 */
    s32 hcountPerFrame;       /* 0x0C */
    s32 vblankStart;          /* 0x10: hcount where the vblank starts */
    SceUID evflg;             /* 0x14 */
#else
    u8 pad0[0x20];
    volatile s32 unk20;
#endif
} SceDisplayVblank;

extern s32 D_00002060;
extern s32 D_000020D0;
extern SceDisplay g_display;
extern s32 D_000021CC;
extern s32 D_000021E0;
extern s32 D_000021EC;
extern s32 D_000021F0;
extern s8 D_00002CB0;
extern s32 D_00002CE4;
extern s8 D_00003675;
extern s32 D_000036C0;
extern M2C_UNK D_00003D10;
extern s8 D_00003E14;
extern s8 D_00003E1A;
extern s32 D_00003EB0;
extern SceDisplayVblank g_Vblank;
extern s32 D_00003EE8;
extern s32 D_00003EF0;
extern s32 D_00003EF4;
extern s32 D_00003EF8;

M2C_UNK Kprintf(M2C_UNK *, M2C_UNK *, s32);
s32 func_00000658(void);
s32 func_000009F8(void);
s32 func_000013B4(s32 *arg0);
s32 func_000016F4(void);
s32 func_00001728(void);
s32 func_00001748(void);
s32 func_000021C8(void);
s32 func_000023B8(void);
s32 func_00002A64(void);
s32 func_00002AA0(void);
s32 func_00002B20(s32 arg0);
s32 func_0000315C(void);
s32 module_start(void);
s32 sceDisplayEnd(void);
s32 sceDisplayGetCurrentHcount(void);
s8 sceDisplayGetForegroundLevel(void);
s32 sceDisplayGetFrameBuf(void *arg0, void *arg1, void *arg2, s32 arg3);
void sceDisplayGetFramePerSec(void);
s32 sceDisplayGetVblankRest(void);
s32 sceDisplayGetVcount(void);
s32 sceDisplayInit(void);
s32 sceDisplayIsForeground(void);
s32 sceDisplayIsPseudoField(void);
s32 sceDisplayIsVblank(void);
s32 sceDisplaySetFrameBuf(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 sceDisplaySetHoldMode(s32 arg0);
s32 sceDisplaySetResumeMode(s32 arg0);
s32 sceDisplayWaitVblankStart(void);
s32 sceDisplayWaitVblankStartCB(void);
s8 sceDisplay_driver_23CE8C51(void);
s32 sceDisplay_driver_5B5AEFAD(s32, s32, s32, s32, s32);
s32 sceDisplay_driver_63E22A26(s32, s32, s32, s32, s32);
s32 sceDisplay_driver_66961521(void);
void * sceGeEdramGetAddr(void);
s32 sceGeEdramGetHwSize();
u32 sceGeEdramGetSize(void);
s32 sceGeEdramSetAddrTranslation(s32);
M2C_UNK sceGeEdramSetSize(s32);
void sceKernelDcacheWritebackAll(void);
s32 sceKernelDeleteEventFlag(s32);
M2C_UNK sceKernelDisableIntr(M2C_UNK);
s32 sceKernelInitApitype();
M2C_UNK sceKernelMemset32(void *, M2C_UNK, s32);
M2C_UNK sceKernelReleaseIntrHandler(M2C_UNK);
M2C_UNK sceKernelReleaseSubIntrHandler(M2C_UNK, M2C_UNK);
M2C_UNK sceKernelUnregisterSysEventHandler(M2C_UNK *);
s32 sceKernelWaitEventFlag(s32, u32, s32, void *, void *);
s32 sceKernelWaitEventFlagCB(s32, u32, s32, void *, void *);
M2C_UNK sceLcdcGetVsyncFreq();
M2C_UNK sceSysregApbTimerClkDisable(M2C_UNK);
M2C_UNK sceSysregVblankIRQPolar(M2C_UNK);

#endif
