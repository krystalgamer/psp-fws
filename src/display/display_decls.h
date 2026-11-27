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
#if FW_VERSION < 271
    SceDisplayFrameBuf fb[4]; /* 0x00: one per level */
    s8 foregroundLevel;       /* 0x50: level shown, -1 none */
    s8 enabled;               /* 0x51: sceDisplayEnable/Disable */
    s8 lcdOn;                 /* 0x52: last enabled state written to GPIO 1 */
    s8 pwmState;              /* 0x53: backlight PWM 0 off, 1 restart, 2 on */
    s32 bufferWidth;          /* 0x54: format programmed into the DMAC */
    s32 pixelFormat;          /* 0x58 */
#if FW_VERSION >= 150
    volatile s32 unk5C;       /* 0x5C */
#endif
    s32 brightness;           /* 0x5C (1.50+: 0x60): target level 0..100 */
    s32 curBrightness;
    s32 brightnessFade;       /* step curBrightness towards brightness each vblank */
    s32 curModeIdx;
    s32 modeIdx;
    s32 mode;
    s32 width;
    s32 height;
    s32 holdMode;             /* 0x7C (1.50+: 0x80) */
#if FW_VERSION >= 150
    s32 resumeMode;           /* 0x84 */
#endif
    s32 suspendWait;          /* vblanks to wait before allowing suspend */
    s32 modeChangeWait;       /* vblanks left of a mode change */
    SceDisplaySm1Ops *sm1Ops; /* 0x88 (1.50+: 0x90) */
#elif FW_VERSION < 282
    u8 pad0[0x50];
    s8 foregroundLevel;       /* 0x50 */
    u8 pad51[4];
    s8 unk55;
    u8 pad56[0xA];
    volatile s32 unk60;
    u8 pad64[0x3C];
    s32 resumeMode;           /* 0xA0 */
#else
    u8 pad0[0x60];
    volatile s32 unk60;
    s8 foregroundLevel;       /* 0x64 */
#if FW_VERSION < 330
    u8 pad65[5];
    s8 unk6A;                 /* 0x6A */
#if FW_VERSION >= 310
    u8 pad6B[0x91];
#else
    u8 pad6B[0x95];
#endif
#else
    u8 pad65[7];
    s8 unk6A;                 /* 0x6C */
#if FW_VERSION >= 350
    u8 pad6D[0x97];
#else
    u8 pad6D[0x93];
#endif
#endif
    s32 resumeMode;           /* 0x100 (3.10: 0xFC, 3.50: 0x104) */
#endif
} SceDisplay;

typedef struct {
    u32 subIntrMask;          /* 0x00: enabled VBLANK sub interrupts */
    u32 vcount;               /* 0x04 */
    s32 unk8;                 /* 0x08: 1.50+: sceDisplayAdjustAccumulatedHcount offset */
#if FW_VERSION == 100
    s32 hcountPerFrame;       /* 0x0C */
#elif FW_VERSION < 201
    u8 padC[8];
#elif FW_VERSION < 282
    u8 padC[0xC];
#else
    u8 padC[8];
    s32 unk14;
    u8 pad18[8];
#endif
    s32 vblankStart;          /* 0x10 (1.50: 0x14, 2.01: 0x18, 2.82: 0x20): hcount where the vblank starts */
#if FW_VERSION >= 282
    s32 unk24;
    s32 pseudoField;          /* 0x28 */
    s32 unk2C;
#endif
    SceUID evflg;             /* g_Vblank.evflg */
} SceDisplayVblank;

typedef struct {
    u32 ctrl;   /* 0x00 */
    u32 unk4;   /* 0x04: accumulated hcount */
    u32 unk8;   /* 0x08 */
    u32 unkC;
    u32 unk10;
    u32 unk14;
    u32 unk18;
    u32 unk1C;
    u32 busy;   /* 0x20: write-pending bits */
    u32 unk24;
} SceDisplayHwCounter;

extern u8 D_00001FF8[];
extern s32 D_00002018;
extern s32 D_00002060;
extern s32 D_000020D0;
extern s32 D_0000213C;
extern M2C_UNK D_00003D10;
extern SceDisplayVblank g_Vblank;
extern SceDisplay g_display;

M2C_UNK Kprintf(M2C_UNK *, M2C_UNK *, s32);
s32 func_00000658(void);
s32 func_00000868(s32 level);
s32 func_0000092C(s32 mode, s32 width, s32 height, s32 bufferWidth, s32 pixelFormat);
s32 func_000009F8(void);
s32 func_00001254(void *arg);
s32 func_000013B4(s32 *arg0);
s32 func_000016F4(void);
s32 func_00001728(void);
s32 func_00001748(void);
s32 func_000021C8(void);
void func_000023B8(void);
s32 func_00002A64(void);
s32 func_00002AA0(void);
s32 func_00002AC8(void);
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
s32 sceDmacplusLcdcDisable(void);
s32 sceDmacplusLcdcEnable(void);
void *sceDmacplusLcdcGetBaseAddr(void);
s32 sceDmacplusLcdcGetFormat(s32 *width, s32 *bufferWidth, s32 *format);
s32 sceDmacplusLcdcSetBaseAddr(void *addr);
s32 sceDmacplusLcdcSetFormat(s32 width, s32 bufferWidth, s32 format);
void * sceGeEdramGetAddr(void);
s32 sceGeEdramGetHwSize();
u32 sceGeEdramGetSize(void);
s32 sceGeEdramSetAddrTranslation(s32);
M2C_UNK sceGeEdramSetSize(s32);
s32 sceGpioPortClear(s32 mask);
s32 sceGpioPortSet(s32 mask);
s32 sceGpioSetPortMode(s32 port, s32 mode);
s32 sceKernelCallSubIntrHandler(void *arg, s32 subIntr, s32 unk2, s32 unk3);
s32 sceKernelClearEventFlag(SceUID evid, u32 bits);
s32 sceKernelCpuResumeIntrWithSync(s32 intr);
SceUID sceKernelCreateEventFlag(const char *name, s32 attr, s32 bits, void *opt);
void sceKernelDcacheWritebackAll(void);
s32 sceKernelDeleteEventFlag(s32);
M2C_UNK sceKernelDisableIntr(M2C_UNK);
s32 sceKernelEnableIntr(s32 intno);
s32 sceKernelInitApitype();
M2C_UNK sceKernelMemset32(void *, M2C_UNK, s32);
s32 sceKernelRegisterIntrHandler(s32 intno, s32 unk1, void *handler, void *arg, void *cb);
M2C_UNK sceKernelReleaseIntrHandler(M2C_UNK);
M2C_UNK sceKernelReleaseSubIntrHandler(M2C_UNK, M2C_UNK);
s32 sceKernelSetEventFlag(SceUID evid, u32 bits);
s32 sceKernelSetUserModeIntrHanlerAcceptable(s32 intno, s32 subno, s32 accept);
SceDisplaySm1Ops *sceKernelSm1ReferOperations(void);
M2C_UNK sceKernelUnregisterSysEventHandler(M2C_UNK *);
s32 sceKernelWaitEventFlag(s32, u32, s32, void *, void *);
s32 sceKernelWaitEventFlagCB(s32, u32, s32, void *, void *);
s32 sceLcdcCheckMode(s32 mode, s32 width, s32 height, s32 unk3);
M2C_UNK sceLcdcGetVsyncFreq();
s32 sceLcdcInsertDisplay_default(s32 *unk0, s32 unk1, s32 *unk2, s32 *unk3);
s32 sceLcdcReset(void);
s32 sceLcdcSetMode(s32 mode, s32 width, s32 height, s32 format);
s32 scePwmChangeDuty(u32 id, u16 duty, u16 cycle);
s32 scePwmReferDuty(u32 id, u16 *duty, u16 *cycle);
s32 scePwmStart(u32 id, u16 unk1, u16 unk2, u16 unk3);
s32 scePwmStop(u32 id);
M2C_UNK sceSysregApbTimerClkDisable(M2C_UNK);
s32 sceSysregApbTimerClkEnable(s32 timer);
s32 sceSysregApbTimerClkSelect(s32 timer, s32 clk);
M2C_UNK sceSysregVblankIRQPolar(M2C_UNK);

#endif
