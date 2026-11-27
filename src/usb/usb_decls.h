#ifndef USB_DECLS_H
#define USB_DECLS_H

#include "common.h"
#include "m2c_macros.h"

typedef struct SceUsbdDeviceRequest {
    u8 bmRequestType;
    u8 bRequest;
    u16 wValue;
    u16 wIndex;
    u16 wLength;
} SceUsbdDeviceRequest;

typedef struct SceUsbdEndpoint {
    s32 endpointNumber;
    s32 busEndpointNumber; /* filled in by the bus driver */
    s32 transmittedBytes;
} SceUsbdEndpoint;

typedef struct SceUsbdInterface {
    s32 expectNumber; /* < 0: any */
    s32 unk4;
    s32 numInterfaces;
} SceUsbdInterface;

typedef struct SceUsbdDriver {
    const char *name;
    s32 numEndpoints;
    SceUsbdEndpoint *endpoints;
    SceUsbdInterface *interface;
    void *descriptorHi;
    void *configHi;
    void *descriptor;
    void *config;
    void *stringDescriptor;
    s32 (*processRequest)(s32, s32, SceUsbdDeviceRequest *);
    s32 (*chFunc)(s32, s32, s32);
    s32 (*attach)(s32 speed);
    s32 (*detach)(void);
    s32 unk34;
    s32 (*start)(s32, void *);
    s32 (*stop)(s32, void *);
    struct SceUsbdDriver *link;
} SceUsbdDriver;
typedef char chk_SceUsbdDriver[(sizeof(SceUsbdDriver) == 0x44) ? 1 : -1];

typedef struct SceUsbdDeviceReq {
    SceUsbdEndpoint *endpoint;
    void *data;
    s32 size;
    s32 isControlRequest;
    void (*onComplete)(struct SceUsbdDeviceReq *);
    s32 transmittedBytes;
    s32 returnCode;
    struct SceUsbdDeviceReq *next;
    void *unpackedArg;
    u32 physicalAddr; /* bus driver: (data & 0x1FFFFFFF) | user << 30 */
} SceUsbdDeviceReq;
typedef char chk_SceUsbdDeviceReq[(sizeof(SceUsbdDeviceReq) == 0x28) ? 1 : -1];

/* per bus endpoint (g_usbbd.eps) */
typedef struct UsbbdEpRec {
    SceUsbdEndpoint *endpoint;
    s32 type; /* 0: control */
    u32 address;
    u32 maxPacketSize;
    SceUsbdDeviceReq *head;
    SceUsbdDeviceReq *tail;
} UsbbdEpRec;

/* bus driver state (.data) */
typedef struct UsbbdState {
    SceUsbdDriver *drivers; /* started drivers */
    UsbbdEpRec eps[9];
    s32 started; /* 0xDC: bus driver started */
    s32 speed;
    u32 unkE4;
    u32 actState; /* 0x100 deactivated, 0x200 activated */
    u32 cableState; /* 0x10 / 0x20 */
    u32 connState; /* 1 / 2 */
    s32 numInterfaces;
    s32 numEndpoints;
    void *unkFC;
    void *unk100;
    void *unk104;
    void *unk108;
    u32 unk10C;
    u32 unk110;
    u32 unk114;
    u32 unk118;
    u32 unk11C;
    u32 unk120;
    u32 unk124;
    u32 unk128;
    u32 unk12C;
    SceUsbdDeviceRequest setup; /* 0x130 */
    SceUsbdEndpoint ep0; /* 0x138 */
    SceUsbdDeviceReq ep0Req; /* 0x144 */
    SceUID sema; /* 0x16C */
    SceUID eventFlag;
    u32 unk174;
    u32 unk178;
    u32 unk17C;
    u32 unk180;
    s32 (*start)(s32, void *);
    s32 (*stop)(s32, void *);
} UsbbdState;
typedef char chk_UsbbdState[(sizeof(UsbbdState) == 0x18C) ? 1 : -1];

/* per hardware endpoint (g_usbbdHw.eps) */
typedef struct UsbbdHwEp {
    UsbbdEpRec *rec;
    u32 maxPacketSize;
    u32 flags;
    u32 unkC;
    u32 *unk10;
    u32 unk14;
    u32 unk18;
    u32 unk1C;
    u32 unk20;
} UsbbdHwEp;

typedef struct UsbbdHwUnk14 {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 *unk10;
} UsbbdHwUnk14;

/* bus driver hardware state (.bss) */
typedef struct UsbbdHw {
    UsbbdHwEp eps[10]; /* [9]: EP0 OUT */
    UsbbdHwUnk14 unk168[9];
    u16 unk21C; /* endpoint bitmasks */
    u16 unk21E;
    u16 unk220;
    u16 unk222;
    SceUID fpl;
    SceUID alarm;
    u32 unk22C; /* setup packet DMA descriptor address */
} UsbbdHw;
typedef char chk_UsbbdHw[(sizeof(UsbbdHw) == 0x230) ? 1 : -1];

struct Unk_func_00008318_0 {
    u8 pad0[0x40];
    struct Unk_func_00008318_temp_a0 *unk40;
};

struct Unk_func_00008318_1 {
    u8 pad0[0x40];
    s32 unk40;
};

struct Unk_func_00008318_temp_a0 {
    u8 pad0[0x40];
    void *unk40;
};

extern s32 D_000094F0;
extern char D_00009550[];
extern s32 D_00009554;
extern char D_00009584[];
extern char D_00009608[];
extern char D_00009A20[];
extern char D_00009A3C[];
extern char D_00009A6C[];
extern char D_00009B28[];
extern char D_00009D20[];
extern void *D_00009FC8;
extern s32 D_0000A034;
extern s32 D_0000A038;
extern char D_0000A174[];
extern s32 D_0000AA3C;
extern s32 D_0000AA4C;
extern s32 D_0000AA6C;
extern s32 D_0000AD2C;
extern s32 D_0000AD4C;
extern s32 D_0000AD8C;
extern s32 D_0000AFB0;
extern s32 D_0000AFF0;
extern M2C_UNK D_0000B014;
extern s32 D_0000B1C4;
extern s32 D_0000B1C8;
extern s32 D_0000B1CC;
extern s32 D_0000B440;
extern s32 D_0000B444;
extern s32 D_0000B448;
extern s32 D_0000B44C;
extern s32 D_0000B450;
extern UsbbdState g_usbbd;
extern UsbbdHw g_usbbdHw;
extern SceUsbdDriver *g_usbbdRegistered;

s32 Kprintf(const char *fmt, ...);
s32 func_00000090(s32, s32);
s32 func_00002E4C(s32, s32, s32, s32);
s32 func_00002F64(s32, s32, s32, s32);
void func_00003198(void);
u32 func_00005084(void *common);
void func_0000581C(void);
s32 func_00005A70(void);
s32 func_00005AF0(void);
s32 func_00005B10(void);
s32 func_00005B6C(void);
s32 func_00005BA0(void);
s32 func_00005C38(void);
s32 func_00005CC0(void);
s32 func_00005CC8(void);
void func_000071AC(void);
s32 func_0000732C(void);
s32 func_00007344(void);
s32 func_00007414(void);
s32 func_00007440(void);
s32 func_000074B4(void);
s32 func_00007504(void);
s32 func_0000751C(void);
s32 func_00007554(s32 arg0);
s32 func_0000756C(void);
s32 func_000075A4(void);
s32 func_000075BC(s32 arg0);
s32 func_0000760C(void);
s32 func_000076B4(void);
void *func_00008318(struct Unk_func_00008318_0 *arg0, struct Unk_func_00008318_1 *arg1);
s32 func_00008318_v300(void);
s32 func_00008318_v301(void);
s32 func_00008318_v302(void);
s32 func_00008318_v303(void);
void *func_00008334(void *arg0, void *arg1);
s32 func_00008A24(void);
s32 func_00008A30(void);
void func_00008AA8(void);
void func_00008ACC(void);
s32 func_00008ADC(void);
s32 func_00008B28(void);
s32 func_00008BD8(void);
s32 func_00008BFC(void);
s32 func_00008D38(s32 arg0);
s32 module_reboot_phase(s32 arg0);
s32 module_start(void);
M2C_UNK sceGpioPortClear(M2C_UNK);
M2C_UNK sceGpioPortSet(M2C_UNK);
s32 sceGpioSetPortMode(M2C_UNK, M2C_UNK);
s32 sceKernelCreateSema(void *, u32, s32, s32, void *);
M2C_UNK sceKernelDisableIntr(M2C_UNK);
s32 sceKernelPowerLock(s32);
s32 sceKernelPowerUnlock(s32);
s32 sceKernelRegisterSysEventHandler(M2C_UNK *);
M2C_UNK sceKernelReleaseIntrHandler(M2C_UNK);
s32 sceKernelSignalSema(s32, s32);
s32 sceKernelUnregisterSysEventHandler(M2C_UNK *);
s32 sceKernelWaitSema(s32, s32, void *);
M2C_UNK sceSysregUsbAcquireIntr(M2C_UNK);
M2C_UNK sceSysregUsbBusClockDisable();
M2C_UNK sceSysregUsbBusClockEnable();
M2C_UNK sceSysregUsbClkDisable(M2C_UNK);
M2C_UNK sceSysregUsbClkEnable(M2C_UNK);
M2C_UNK sceSysregUsbIoDisable();
s32 sceUsbActivate(u32 arg0);
s32 sceUsbBus_driver_48CCE3C1(void);
void sceUsbBus_driver_7B87815D(void);
s32 sceUsbBus_driver_8A3EB5D2(void);
void sceUsbBus_driver_90B82F55(void);
void sceUsbBus_driver_FBA2072B(void);
s32 sceUsbDeactivate();
s32 sceUsbGetDrvList(u32 flags, void *list, s32 size);
s32 sceUsbStop(const char *name, s32 args, void *argp);
s32 sceUsbWaitState(u32 arg0, s32 arg1, void *arg2);
s32 sceUsbWaitStateCB(u32 arg0, s32 arg1, void *arg2);

#endif
