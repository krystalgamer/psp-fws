/* cflags[152]: -O2 -frename-registers */
/* cflags[151]: -O2 -frename-registers */
/* cflags[150]: -O2 -frename-registers */
/* cflags[100]: -O2 -frename-registers */
#include "common.h"
#include "usbstorms_decls.h"

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/usbstorms", func_00000000_v352);
#endif

#if FW_VERSION == 351
INCLUDE_ASM("nonmatchings/usbstorms", func_00000000_v351);
#endif

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/usbstorms", func_00000000_v350);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/usbstorms", func_00000000_v340);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/usbstorms", func_00000000_v330);
#endif

#if FW_VERSION == 311
INCLUDE_ASM("nonmatchings/usbstorms", func_00000000_v311);
#endif

#if FW_VERSION == 310
INCLUDE_ASM("nonmatchings/usbstorms", func_00000000_v310);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/usbstorms", func_00000000_v303);
#endif

#if FW_VERSION == 302
INCLUDE_ASM("nonmatchings/usbstorms", func_00000000_v302);
#endif

#if FW_VERSION == 301
INCLUDE_ASM("nonmatchings/usbstorms", func_00000000_v301);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/usbstorms", func_00000000_v300);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/usbstorms", func_00000000_v282);
#endif

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/usbstorms", func_00000000_v280);
#endif

INCLUDE_ASM("nonmatchings/usbstorms", func_00000000);

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/usbstorms", func_00000374_v152);
#endif

#if FW_VERSION == 151
INCLUDE_ASM("nonmatchings/usbstorms", func_00000374_v151);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/usbstorms", func_00000374_v150);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00000544);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/usbstorms", func_0000082C);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/usbstorms", D_00005100);

INCLUDE_RODATA("nonmatchings/usbstorms", D_00005104);

INCLUDE_RODATA("nonmatchings/usbstorms", D_00005124);

INCLUDE_RODATA("nonmatchings/usbstorms", D_0000513C);

INCLUDE_RODATA("nonmatchings/usbstorms", D_00005154);

INCLUDE_RODATA("nonmatchings/usbstorms", D_0000516C);

INCLUDE_RODATA("nonmatchings/usbstorms", D_00005184);

INCLUDE_RODATA("nonmatchings/usbstorms", D_000051A0);

INCLUDE_RODATA("nonmatchings/usbstorms", D_000051B4);

INCLUDE_RODATA("nonmatchings/usbstorms", D_000051C8);

INCLUDE_RODATA("nonmatchings/usbstorms", D_000051E0);

INCLUDE_RODATA("nonmatchings/usbstorms", D_000051F8);

INCLUDE_RODATA("nonmatchings/usbstorms", D_00005210);

INCLUDE_RODATA("nonmatchings/usbstorms", D_00005228);

INCLUDE_RODATA("nonmatchings/usbstorms", D_0000523C);

INCLUDE_RODATA("nonmatchings/usbstorms", D_0000524C);

INCLUDE_RODATA("nonmatchings/usbstorms", D_0000526C);

INCLUDE_RODATA("nonmatchings/usbstorms", D_00005284);

INCLUDE_RODATA("nonmatchings/usbstorms", D_000052DC);

INCLUDE_RODATA("nonmatchings/usbstorms", D_000052E4);

INCLUDE_RODATA("nonmatchings/usbstorms", D_00005300);

INCLUDE_RODATA("nonmatchings/usbstorms", D_00005304);

INCLUDE_RODATA("nonmatchings/usbstorms", D_00005308);

INCLUDE_RODATA("nonmatchings/usbstorms", D_0000531C);

INCLUDE_RODATA("nonmatchings/usbstorms", D_00005364);

INCLUDE_RODATA("nonmatchings/usbstorms", D_00005368);

INCLUDE_RODATA("nonmatchings/usbstorms", D_0000536C);

INCLUDE_RODATA("nonmatchings/usbstorms", D_00005370);

INCLUDE_RODATA("nonmatchings/usbstorms", D_00005374);

INCLUDE_RODATA("nonmatchings/usbstorms", D_00005390);

INCLUDE_RODATA("nonmatchings/usbstorms", D_00005398);

INCLUDE_RODATA("nonmatchings/usbstorms", D_000053A0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/usbstorms", func_000006BC);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/usbstorms", D_00003A50);
#endif

INCLUDE_RODATA("nonmatchings/usbstorms", D_00003424);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00000374);
#endif

INCLUDE_RODATA("nonmatchings/usbstorms", D_00003430);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/usbstorms", D_000029E8);

INCLUDE_RODATA("nonmatchings/usbstorms", D_00002A14);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/usbstorms", D_000028FC);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/usbstorms", D_00003460);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/usbstorms", func_00000894);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/usbstorms", func_00000728);
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/usbstorms", D_0000349C);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/usbstorms", D_000034A8);
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/usbstorms", D_000034D4);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/usbstorms", D_00003B2C);
#endif

INCLUDE_RODATA("nonmatchings/usbstorms", D_00003500);

INCLUDE_RODATA("nonmatchings/usbstorms", D_00003530);

INCLUDE_RODATA("nonmatchings/usbstorms", D_0000355C);

INCLUDE_RODATA("nonmatchings/usbstorms", D_00003588);

INCLUDE_RODATA("nonmatchings/usbstorms", D_000035B8);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/usbstorms", D_00002A48);
#endif

INCLUDE_RODATA("nonmatchings/usbstorms", D_000035E8);

INCLUDE_RODATA("nonmatchings/usbstorms", D_0000360C);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00000700);
#else
INCLUDE_ASM("nonmatchings/usbstorms", func_00000A9C);

INCLUDE_RODATA("nonmatchings/usbstorms", D_00003764);

INCLUDE_ASM("nonmatchings/usbstorms", module_start);
#endif

#if FW_VERSION == 152
s32 module_start(void) {
    s32 var_v1;

    memset(&D_00002D20, 0, 0x60);
    var_v1 = 0;
    if (sceUsbstor_internal_489E6BF1(&D_00002DD0) < 0) {
        Kprintf("%serror - cannot register handler\n", &D_00002A14);
        var_v1 = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 151
s32 module_start(void) {
    s32 var_v1;

    memset(&D_00002D20, 0, 0x60);
    var_v1 = 0;
    if (sceUsbstor_internal_489E6BF1(&D_00002DB0) < 0) {
        Kprintf("%serror - cannot register handler\n", &D_00002A14);
        var_v1 = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 150
s32 module_start(void) {
    s32 var_v1;

    memset(&D_00002D20, 0, 0x60);
    var_v1 = 0;
    if (sceUsbstor_internal_489E6BF1(&D_00002E10) < 0) {
        Kprintf("%serror - cannot register handler\n", &D_00002A14);
        var_v1 = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 100
s32 module_start(void) {
    s32 var_v1;

    memset(&D_00002D20, 0, 0x60);
    var_v1 = 0;
    if (sceUsbstor_internal_489E6BF1(&D_00002D00) < 0) {
        Kprintf("%serror - cannot register handler\n", &D_00003460);
        var_v1 = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 271 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/usbstorms", sceUsbstorMsSetNickname);

INCLUDE_ASM("nonmatchings/usbstorms", sceUsbstorMsGetNickname);

INCLUDE_ASM("nonmatchings/usbstorms", sceUsbstorMsSetVSHInfo);

INCLUDE_ASM("nonmatchings/usbstorms", sceUsbstorMsGetVSHInfo);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/usbstorms", module_stop);
#endif

#if FW_VERSION == 100
s32 module_stop(void) {
    s32 var_v1;

    var_v1 = 0;
    if (sceUsbstor_internal_2CAFEFF1(&D_00002D00) < 0) {
        Kprintf("%serror - cannot unregister handler\n", &D_00003460);
        var_v1 = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 152
s32 module_stop(void) {
    s32 var_v1;

    var_v1 = 0;
    if (sceUsbstor_internal_2CAFEFF1(&D_00002DD0) < 0) {
        Kprintf("%serror - cannot unregister handler\n", &D_00002A14);
        var_v1 = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 151
s32 module_stop(void) {
    s32 var_v1;

    var_v1 = 0;
    if (sceUsbstor_internal_2CAFEFF1(&D_00002DB0) < 0) {
        Kprintf("%serror - cannot unregister handler\n", &D_00002A14);
        var_v1 = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 150
s32 module_stop(void) {
    s32 var_v1;

    var_v1 = 0;
    if (sceUsbstor_internal_2CAFEFF1(&D_00002E10) < 0) {
        Kprintf("%serror - cannot unregister handler\n", &D_00002A14);
        var_v1 = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00000924);

INCLUDE_ASM("nonmatchings/usbstorms", func_00000A9C);

INCLUDE_ASM("nonmatchings/usbstorms", func_00000CA8);

INCLUDE_ASM("nonmatchings/usbstorms", func_00001058);

INCLUDE_ASM("nonmatchings/usbstorms", func_00001104);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00001238);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/usbstorms", func_000011F0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00001264);

INCLUDE_ASM("nonmatchings/usbstorms", func_000014E0);

INCLUDE_ASM("nonmatchings/usbstorms", func_00001914);

INCLUDE_ASM("nonmatchings/usbstorms", func_00001A84);

INCLUDE_ASM("nonmatchings/usbstorms", func_00001B54);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00001C9C);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00000E9C);

INCLUDE_ASM("nonmatchings/usbstorms", func_00000F40);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/usbstorms", func_00001610);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/usbstorms", func_000010E4);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/usbstorms", func_000012D4);

INCLUDE_ASM("nonmatchings/usbstorms", func_0000169C);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/usbstorms", func_00001C1C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/usbstorms", func_00001740);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00001824);

INCLUDE_ASM("nonmatchings/usbstorms", func_000018AC);

INCLUDE_ASM("nonmatchings/usbstorms", func_00001944);

INCLUDE_RODATA("nonmatchings/usbstorms", D_00003890);
#endif

INCLUDE_RODATA("nonmatchings/usbstorms", D_000038C4);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00001B60);

INCLUDE_ASM("nonmatchings/usbstorms", func_00002158);

INCLUDE_ASM("nonmatchings/usbstorms", func_000023E0);

INCLUDE_ASM("nonmatchings/usbstorms", func_00002514);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/usbstorms", func_000029BC);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/usbstorms", func_000025E4);
#endif

INCLUDE_ASM("nonmatchings/usbstorms", func_000026A8);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00001E38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/usbstorms", func_00002030);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00002084);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/usbstorms", func_00002138);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00002220);
#else
INCLUDE_ASM("nonmatchings/usbstorms", func_000028E8);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/usbstorms", func_00003170);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00002B7C);

INCLUDE_ASM("nonmatchings/usbstorms", func_00002C4C);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/usbstorms", func_0000332C);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/usbstorms", func_00003248);

INCLUDE_ASM("nonmatchings/usbstorms", func_000033BC);

INCLUDE_ASM("nonmatchings/usbstorms", func_00003438);

INCLUDE_ASM("nonmatchings/usbstorms", func_000034B4);

INCLUDE_ASM("nonmatchings/usbstorms", func_000035BC);

INCLUDE_ASM("nonmatchings/usbstorms", func_0000377C);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/usbstorms", func_00003908);

INCLUDE_ASM("nonmatchings/usbstorms", func_00003A5C);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/usbstorms", func_00003B48);

INCLUDE_ASM("nonmatchings/usbstorms", func_00003C04);

INCLUDE_ASM("nonmatchings/usbstorms", func_00003CC0);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/usbstorms", D_0000505C);

INCLUDE_RODATA("nonmatchings/usbstorms", D_0000506C);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/usbstorms", D_00005A30);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/usbstorms", func_00003860);

s32 func_00003944(s32 arg0, s32 arg1) {
    sceRegCloseCategory(arg1);
    sceRegCloseRegistry(arg0);
    sceKernelPowerUnlock(0);
    return 0;
}

INCLUDE_ASM("nonmatchings/usbstorms", func_00003980);

INCLUDE_ASM("nonmatchings/usbstorms", func_00003A24);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/usbstorms", func_00003FE0);

INCLUDE_RODATA("nonmatchings/usbstorms", D_00005A74);

INCLUDE_RODATA("nonmatchings/usbstorms", D_00005A80);

INCLUDE_ASM("nonmatchings/usbstorms", func_00004064);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/usbstorms", sceUsbstorMsSetNickname);

INCLUDE_ASM("nonmatchings/usbstorms", sceUsbstorMsGetNickname);

INCLUDE_ASM("nonmatchings/usbstorms", sceUsbstorMsSetVSHInfo);

INCLUDE_ASM("nonmatchings/usbstorms", sceUsbstorMsGetVSHInfo);

INCLUDE_ASM("nonmatchings/usbstorms", sceUsbstorMsRegisterEventFlag);

INCLUDE_ASM("nonmatchings/usbstorms", sceUsbstorMsUnregisterEventFlag);

INCLUDE_ASM("nonmatchings/usbstorms", sceUsbstorMsGetApInfo);

INCLUDE_ASM("nonmatchings/usbstorms", sceUsbstorMsNotifyEventDone);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/usbstorms", sceUSB_Stor_Ms_driver_9C029B16);

INCLUDE_ASM("nonmatchings/usbstorms", sceUSB_Stor_Ms_driver_56AA41EA);

INCLUDE_ASM("nonmatchings/usbstorms", sceUSB_Stor_Ms_driver_18EB011A);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/usbstorms", func_0000432C);

s32 func_00004380(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/usbstorms", func_00004388);

INCLUDE_ASM("nonmatchings/usbstorms", func_000043C4);

INCLUDE_ASM("nonmatchings/usbstorms", func_00004400);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/usbstorms", func_00002CA4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00002CC4);
#endif
