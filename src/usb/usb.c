/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "usb_decls.h"

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/usb", sceUsbActivate);
#else
INCLUDE_ASM("nonmatchings/usb", sceUsb_driver_E20B23A6);

INCLUDE_ASM("nonmatchings/usb", func_00000090);
#endif

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/usb", D_00009520);

INCLUDE_RODATA("nonmatchings/usb", D_00009550);

INCLUDE_RODATA("nonmatchings/usb", D_00009584);

INCLUDE_RODATA("nonmatchings/usb", D_000095B4);

INCLUDE_RODATA("nonmatchings/usb", D_000095E4);

INCLUDE_RODATA("nonmatchings/usb", D_00009608);

INCLUDE_RODATA("nonmatchings/usb", D_00009630);

INCLUDE_RODATA("nonmatchings/usb", D_00009664);
#endif

INCLUDE_ASM("nonmatchings/usb", sceUsbDeactivate);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/usb", sceUsbBus_driver_EDA8A020);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/usb", sceUsbWaitState);
#endif

INCLUDE_ASM("nonmatchings/usb", func_000005E4);

INCLUDE_ASM("nonmatchings/usb", func_00000688);

INCLUDE_ASM("nonmatchings/usb", func_000006D4);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/usb", func_0000077C);
#else
INCLUDE_ASM("nonmatchings/usb", func_0000073C);
#endif

INCLUDE_ASM("nonmatchings/usb", func_000009AC);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/usb", func_00000A58);

INCLUDE_ASM("nonmatchings/usb", func_00000AF4);
#else
INCLUDE_ASM("nonmatchings/usb", func_00000A38);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/usb", func_00000C90);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/usb", func_00000B14);
#endif

INCLUDE_ASM("nonmatchings/usb", func_00000EE0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/usb", func_000017B8);
#else
INCLUDE_ASM("nonmatchings/usb", func_000014DC);

INCLUDE_ASM("nonmatchings/usb", func_000016C0);
#endif

INCLUDE_ASM("nonmatchings/usb", func_00001790);

INCLUDE_ASM("nonmatchings/usb", func_0000192C);

INCLUDE_ASM("nonmatchings/usb", func_00001984);

INCLUDE_ASM("nonmatchings/usb", func_00001AD0);

INCLUDE_ASM("nonmatchings/usb", func_00001B54);

INCLUDE_ASM("nonmatchings/usb", func_00001D94);

INCLUDE_ASM("nonmatchings/usb", func_00001E20);

INCLUDE_ASM("nonmatchings/usb", func_00001FC4);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/usb", func_00002214);

INCLUDE_ASM("nonmatchings/usb", func_000022AC);
#endif

INCLUDE_ASM("nonmatchings/usb", sceUsbBus_driver_23E51D8F);

INCLUDE_ASM("nonmatchings/usb", sceUsbBus_driver_913EC15D);

INCLUDE_ASM("nonmatchings/usb", sceUsbBus_driver_CC57EC9D);

INCLUDE_ASM("nonmatchings/usb", func_000026E8);

INCLUDE_ASM("nonmatchings/usb", func_00002808);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/usb", func_00002854);

INCLUDE_ASM("nonmatchings/usb", func_00002928);

INCLUDE_ASM("nonmatchings/usb", module_stop);

s32 syslib_ADF12745(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 2:
        sceKernelWaitSema(D_000094F0, 1, NULL);
        break;
    case 1:
        sceKernelSignalSema(D_000094F0, 1);
        break;
    }
    return 0;
}
#else
INCLUDE_RODATA("nonmatchings/usb", D_00009A20);
#endif

INCLUDE_RODATA("nonmatchings/usb", D_00009A3C);

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/usb", func_0000293C);

INCLUDE_RODATA("nonmatchings/usb", D_00009A6C);

INCLUDE_ASM("nonmatchings/usb", func_00002A48);

INCLUDE_ASM("nonmatchings/usb", module_stop);

INCLUDE_RODATA("nonmatchings/usb", D_00009B28);
#endif

INCLUDE_ASM("nonmatchings/usb", module_reboot_before);

INCLUDE_ASM("nonmatchings/usb", sceUsbGetState);

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 sceUsbWaitState(u32 arg0, s32 arg1, void *arg2) {
    return func_00002E4C((s32) arg0, arg1, (s32) arg2, 0);
}

s32 sceUsbWaitStateCB(u32 arg0, s32 arg1, void *arg2) {
    return func_00002E4C((s32) arg0, arg1, (s32) arg2, 1);
}
#endif

#if FW_VERSION >= 282
s32 sceUsbActivate(u32 arg0) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_00000090((s32) arg0, 0);
    setK1(temp_s0);
    return temp_v0;
}

s32 sceUsbWaitState(u32 arg0, s32 arg1, void *arg2) {
    return func_00002F64((s32) arg0, arg1, (s32) arg2, 0);
}

s32 sceUsbWaitStateCB(u32 arg0, s32 arg1, void *arg2) {
    return func_00002F64((s32) arg0, arg1, (s32) arg2, 1);
}
#endif

INCLUDE_ASM("nonmatchings/usb", sceUsbWaitCancel);

INCLUDE_ASM("nonmatchings/usb", func_00002DC8);

INCLUDE_ASM("nonmatchings/usb", sceUsbBus_driver_C5E53685);

INCLUDE_ASM("nonmatchings/usb", func_00002E80);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/usb", module_start);
#endif

#if FW_VERSION >= 300
s32 module_start(void) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = sceKernelCreateSema(&D_00009A3C, 1U, 1, 1, NULL);
    var_v0 = 1;
    if (temp_v0 >= 0) {
        D_000094F0 = temp_v0;
        func_00005CC0();
        func_00008A30();
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
s32 module_start(void) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = sceKernelCreateSema(&D_00009A3C, 1U, 1, 1, NULL);
    if (temp_v0 >= 0) {
        D_0000AD2C = temp_v0;
        func_00005B6C();
        func_00008A24();
        var_v0 = 0;
    } else {
        KDebugForKernel_84F370BC("usbbd ERROR : Cannot create semaphore : 0x%08x\n", temp_v0);
        var_v0 = 1;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 152
s32 module_start(void) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = sceKernelCreateSema(&D_00009A3C, 1U, 1, 1, NULL);
    if (temp_v0 >= 0) {
        D_0000AA0C = temp_v0;
        func_00005B6C();
        func_00008A24();
        var_v0 = 0;
    } else {
        KDebugForKernel_84F370BC("usbbd ERROR : Cannot create semaphore : 0x%08x\n", temp_v0);
        var_v0 = 1;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/usb", func_00002E4C);
#endif

#if FW_VERSION == 150
s32 module_start(void) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = sceKernelCreateSema(&D_00009A3C, 1U, 1, 1, NULL);
    if (temp_v0 >= 0) {
        D_0000A9EC = temp_v0;
        func_00005B6C();
        func_00008A24();
        var_v0 = 0;
    } else {
        KDebugForKernel_84F370BC("usbbd ERROR : Cannot create semaphore : 0x%08x\n", temp_v0);
        var_v0 = 1;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 100
s32 module_start(void) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = sceKernelCreateSema(&D_00009A3C, 1U, 1, 1, NULL);
    if (temp_v0 >= 0) {
        D_0000A9DC = temp_v0;
        func_00005AF0();
        func_00008A24();
        var_v0 = 0;
    } else {
        KDebugForKernel_84F370BC("usbbd ERROR : Cannot create semaphore : 0x%08x\n", temp_v0);
        var_v0 = 1;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/usb", func_00003164);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/usb", func_000030D4);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/usb", func_0000305C);
#endif

#if FW_VERSION == 282
s32 module_start(void) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = sceKernelCreateSema(&D_00009A3C, 1U, 1, 1, NULL);
    if (temp_v0 >= 0) {
        D_0000AFB0 = temp_v0;
        func_00005CC0();
        func_00008A30();
        var_v0 = 0;
    } else {
        KDebugForKernel_84F370BC("usbbd ERROR : Cannot create semaphore : 0x%08x\n", temp_v0);
        var_v0 = 1;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/usb", func_00002F64);

INCLUDE_ASM("nonmatchings/usb", func_00003164);

INCLUDE_ASM("nonmatchings/usb", func_00003258);
#endif

#if FW_VERSION >= 300
void func_00003198(void) {
    sceSysreg_driver_7234EA80(9);
    sceSysreg_driver_3E216017();
    func_00008AA8();
    func_00008ADC();
}
#endif

INCLUDE_ASM("nonmatchings/usb", func_000033F8);

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/usb", D_00009D20);
#endif

INCLUDE_ASM("nonmatchings/usb", func_00003490);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/usb", func_000034D8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/usb", func_000036A0);
#endif

INCLUDE_ASM("nonmatchings/usb", func_00003734);

INCLUDE_ASM("nonmatchings/usb", func_000037C4);

INCLUDE_ASM("nonmatchings/usb", func_00003A10);

INCLUDE_ASM("nonmatchings/usb", func_00003C34);

INCLUDE_ASM("nonmatchings/usb", func_00003E5C);

INCLUDE_ASM("nonmatchings/usb", func_00003EB8);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/usb", func_00003DA0);

INCLUDE_ASM("nonmatchings/usb", func_00004100);

INCLUDE_ASM("nonmatchings/usb", func_00003F5C);
#else
INCLUDE_ASM("nonmatchings/usb", func_00004050);

INCLUDE_ASM("nonmatchings/usb", func_00004100);

INCLUDE_ASM("nonmatchings/usb", func_000041FC);
#endif

INCLUDE_ASM("nonmatchings/usb", func_00004258);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/usb", func_00004280);

INCLUDE_ASM("nonmatchings/usb", func_000044AC);
#else
INCLUDE_ASM("nonmatchings/usb", func_00004510);

INCLUDE_ASM("nonmatchings/usb", func_00004714);
#endif

INCLUDE_ASM("nonmatchings/usb", func_000048A4);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/usb", func_00004908);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/usb", func_000047AC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/usb", func_000049D0);
#endif

INCLUDE_ASM("nonmatchings/usb", func_00004E94);

INCLUDE_ASM("nonmatchings/usb", func_00004F58);

INCLUDE_ASM("nonmatchings/usb", func_00005084);

INCLUDE_ASM("nonmatchings/usb", func_0000526C);

INCLUDE_ASM("nonmatchings/usb", func_00005400);

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/usb", D_00009FE8);
#endif

INCLUDE_ASM("nonmatchings/usb", func_0000574C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/usb", func_00005870);
#else
INCLUDE_ASM("nonmatchings/usb", func_00005AB0);
#endif

#if FW_VERSION >= 300
void func_0000581C(void) {
    func_00008B28();
    sceSysreg_driver_BFBABB63();
    sceSysreg_driver_38EC3281(9);
}
#endif

INCLUDE_ASM("nonmatchings/usb", func_00005B1C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/usb", func_00005914);
#endif

INCLUDE_ASM("nonmatchings/usb", func_00005B68);

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/usb", D_0000A174);
#endif

INCLUDE_ASM("nonmatchings/usb", sceUsbBus_driver_951A24CC);

INCLUDE_ASM("nonmatchings/usb", sceUsbBus_driver_E65441C1);

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_00005A70(void) {
    sceKernelPowerLock(0);
    InterruptManagerForKernel_D774BA45(0x3B);
    InterruptManagerForKernel_D774BA45(0x3A);
    sceSysreg_driver_A3C8E075();
    sceSysreg_driver_BFBABB63();
    sceSysreg_driver_38EC3281(9);
    func_0000756C();
    sceKernelPowerUnlock(0);
    InterruptManagerForKernel_F987B1F0(0x38);
    InterruptManagerForKernel_F987B1F0(0x39);
    InterruptManagerForKernel_F987B1F0(0x3B);
    InterruptManagerForKernel_F987B1F0(0x3A);
    InterruptManagerForKernel_F987B1F0(0x1A);
    func_00008BFC();
    return 0;
}
#endif

#if FW_VERSION == 271
s32 func_00005BA0(void) {
    D_0000AFF0 = 0x3D090;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00005A70(void) {
    sceKernelPowerLock(0);
    InterruptManagerForKernel_D774BA45(0x3B);
    InterruptManagerForKernel_D774BA45(0x3A);
    sceSysreg_driver_A3C8E075();
    sceSysreg_driver_BFBABB63();
    sceSysreg_driver_38EC3281(9);
    func_0000756C();
    sceKernelPowerUnlock(0);
    InterruptManagerForKernel_F987B1F0(0x38);
    InterruptManagerForKernel_F987B1F0(0x39);
    InterruptManagerForKernel_F987B1F0(0x3B);
    InterruptManagerForKernel_F987B1F0(0x3A);
    InterruptManagerForKernel_F987B1F0(0x1A);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00005A70(void) {
    sceKernelPowerLock(0);
    InterruptManagerForKernel_D774BA45(0x3B);
    InterruptManagerForKernel_D774BA45(0x3A);
    sceSysreg_driver_A3C8E075();
    sceSysreg_driver_BFBABB63();
    sceSysreg_driver_38EC3281(1);
    func_0000756C();
    sceKernelPowerUnlock(0);
    InterruptManagerForKernel_F987B1F0(0x38);
    InterruptManagerForKernel_F987B1F0(0x39);
    InterruptManagerForKernel_F987B1F0(0x3B);
    InterruptManagerForKernel_F987B1F0(0x3A);
    InterruptManagerForKernel_F987B1F0(0x1A);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00005B6C(void) {
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00005AF0(void) {
    *(s32 *)0xBC000050 |= 0x20000;
    return 0;
}
#endif

#if FW_VERSION < 271
s32 func_00005B10(void) {
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 func_00005C38(void) {
    sceKernelPowerLock(0);
    InterruptManagerForKernel_D774BA45(0x3B);
    InterruptManagerForKernel_D774BA45(0x3A);
    sceSysreg_driver_A3C8E075();
    sceSysreg_driver_BFBABB63();
    sceSysreg_driver_38EC3281(9);
    func_00007504();
    sceKernelPowerUnlock(0);
    InterruptManagerForKernel_F987B1F0(0x38);
    InterruptManagerForKernel_F987B1F0(0x39);
    InterruptManagerForKernel_F987B1F0(0x3B);
    InterruptManagerForKernel_F987B1F0(0x3A);
    InterruptManagerForKernel_F987B1F0(0x1A);
    func_00008BD8();
    return 0;
}

s32 func_00005CC0(void) {
    return 0;
}

s32 func_00005CC8(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/usb", func_00005CD0);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/usb", D_00009FE8);
#endif

INCLUDE_ASM("nonmatchings/usb", func_00005F58);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/usb", func_00005F00);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/usb", func_00005E7C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/usb", func_00006290);

INCLUDE_ASM("nonmatchings/usb", func_00006358);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/usb", func_00006434);

INCLUDE_ASM("nonmatchings/usb", func_000066A0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/usb", func_000061EC);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/usb", func_00006334);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/usb", func_000062BC);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/usb", func_00006414);

INCLUDE_ASM("nonmatchings/usb", func_00006694);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/usb", func_00006B6C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/usb", func_00006B4C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/usb", func_00006010);

INCLUDE_ASM("nonmatchings/usb", func_00006358);

INCLUDE_ASM("nonmatchings/usb", func_00006420);

INCLUDE_ASM("nonmatchings/usb", func_00006544);

INCLUDE_ASM("nonmatchings/usb", func_000067B0);

INCLUDE_ASM("nonmatchings/usb", func_00006C28);
#endif

INCLUDE_ASM("nonmatchings/usb", func_000070E8);

INCLUDE_ASM("nonmatchings/usb", func_00007188);

INCLUDE_ASM("nonmatchings/usb", func_000072A0);

#if FW_VERSION < 282
s32 func_0000732C(void) {
    sceSysreg_driver_692F31FF(8);
    func_00007440();
    return -1;
}

INCLUDE_ASM("nonmatchings/usb", func_00007354);

INCLUDE_ASM("nonmatchings/usb", func_00007440);
#else
s32 func_00007344(void) {
    sceSysreg_driver_692F31FF(8);
    func_00007414();
    return -1;
}

INCLUDE_ASM("nonmatchings/usb", func_0000736C);

INCLUDE_ASM("nonmatchings/usb", func_00007414);
#endif

#if FW_VERSION >= 300
void func_000071AC(void) {
    sceSysEventForKernel_CD9E4BB5(&D_00009554);
}

s32 func_00007504(void) {
    return sceSysEventForKernel_D7D3FDCD(&D_00009554);
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/usb", func_000071F0);
#endif

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/usb", D_0000A3E4);
#endif

#if FW_VERSION == 271
s32 func_0000751C(void) {
    s32 temp_v0;

    temp_v0 = sceSysEventForKernel_CD9E4BB5(&D_0000AD4C);
    if (temp_v0 >= 0) {

    } else {
        KDebugForKernel_84F370BC("usbbd ERROR : cannot register system event handler : 0x%08x\n", temp_v0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
s32 func_0000751C(void) {
    s32 temp_v0;

    temp_v0 = sceSysEventForKernel_CD9E4BB5(&D_0000AD8C);
    if (temp_v0 >= 0) {

    } else {
        KDebugForKernel_84F370BC("usbbd ERROR : cannot register system event handler : 0x%08x\n", temp_v0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION == 152
s32 func_0000751C(void) {
    s32 temp_v0;

    temp_v0 = sceSysEventForKernel_CD9E4BB5(&D_0000AA6C);
    if (temp_v0 >= 0) {

    } else {
        KDebugForKernel_84F370BC("usbbd ERROR : cannot register system event handler : 0x%08x\n", temp_v0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION == 150
s32 func_0000751C(void) {
    s32 temp_v0;

    temp_v0 = sceSysEventForKernel_CD9E4BB5(&D_0000AA4C);
    if (temp_v0 >= 0) {

    } else {
        KDebugForKernel_84F370BC("usbbd ERROR : cannot register system event handler : 0x%08x\n", temp_v0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION == 100
s32 func_0000751C(void) {
    s32 temp_v0;

    temp_v0 = sceSysEventForKernel_CD9E4BB5(&D_0000AA3C);
    if (temp_v0 >= 0) {

    } else {
        KDebugForKernel_84F370BC("usbbd ERROR : cannot register system event handler : 0x%08x\n", temp_v0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION == 271
s32 func_0000756C(void) {
    s32 temp_v0;

    temp_v0 = sceSysEventForKernel_D7D3FDCD(&D_0000AD4C);
    if (temp_v0 >= 0) {

    } else {
        KDebugForKernel_84F370BC("usbbd ERROR : cannot unregister system event handler : 0x%08x\n", temp_v0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
s32 func_0000756C(void) {
    s32 temp_v0;

    temp_v0 = sceSysEventForKernel_D7D3FDCD(&D_0000AD8C);
    if (temp_v0 >= 0) {

    } else {
        KDebugForKernel_84F370BC("usbbd ERROR : cannot unregister system event handler : 0x%08x\n", temp_v0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION == 152
s32 func_0000756C(void) {
    s32 temp_v0;

    temp_v0 = sceSysEventForKernel_D7D3FDCD(&D_0000AA6C);
    if (temp_v0 >= 0) {

    } else {
        KDebugForKernel_84F370BC("usbbd ERROR : cannot unregister system event handler : 0x%08x\n", temp_v0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION == 150
s32 func_0000756C(void) {
    s32 temp_v0;

    temp_v0 = sceSysEventForKernel_D7D3FDCD(&D_0000AA4C);
    if (temp_v0 >= 0) {

    } else {
        KDebugForKernel_84F370BC("usbbd ERROR : cannot unregister system event handler : 0x%08x\n", temp_v0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION == 100
s32 func_0000756C(void) {
    s32 temp_v0;

    temp_v0 = sceSysEventForKernel_D7D3FDCD(&D_0000AA3C);
    if (temp_v0 >= 0) {

    } else {
        KDebugForKernel_84F370BC("usbbd ERROR : cannot unregister system event handler : 0x%08x\n", temp_v0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION < 282
s32 func_000075BC(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0x1000E:
        func_000076B4();
        break;
    case 0x400E:
        func_0000760C();
        break;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/usb", func_0000760C);
#endif

#if FW_VERSION == 282
s32 func_000074B4(void) {
    s32 temp_v0;

    temp_v0 = sceSysEventForKernel_CD9E4BB5(&D_0000B014);
    if (temp_v0 >= 0) {

    } else {
        KDebugForKernel_84F370BC("usbbd ERROR : cannot register system event handler : 0x%08x\n", temp_v0);
    }
    return temp_v0;
}

s32 func_00007504(void) {
    s32 temp_v0;

    temp_v0 = sceSysEventForKernel_D7D3FDCD(&D_0000B014);
    if (temp_v0 >= 0) {

    } else {
        KDebugForKernel_84F370BC("usbbd ERROR : cannot unregister system event handler : 0x%08x\n", temp_v0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
s32 func_00007554(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0x1000E:
        func_000076B4();
        break;
    case 0x400E:
        func_000075A4();
        break;
    }
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/usb", func_000075A4);
#endif

INCLUDE_ASM("nonmatchings/usb", func_000076B4);

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/usb", D_0000A46C);

INCLUDE_RODATA("nonmatchings/usb", D_0000A48C);

INCLUDE_RODATA("nonmatchings/usb", D_0000A4C0);
#endif

INCLUDE_ASM("nonmatchings/usb", sceUsbStart);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/usb", D_0000A2B8);

INCLUDE_RODATA("nonmatchings/usb", D_0000A2E4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/usb", D_0000A2D4);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/usb", D_0000A024);

INCLUDE_RODATA("nonmatchings/usb", D_0000A050);
#endif

#if FW_VERSION < 271 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/usb", D_0000A500);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/usb", D_0000A528);

INCLUDE_RODATA("nonmatchings/usb", D_0000A54C);
#endif

#if FW_VERSION < 250 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/usb", D_0000A578);
#endif

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/usb", D_0000A5A4);

INCLUDE_RODATA("nonmatchings/usb", D_0000A5D4);
#endif

INCLUDE_ASM("nonmatchings/usb", sceUsbStop);

INCLUDE_ASM("nonmatchings/usb", sceUsbGetDrvList);

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/usb", D_0000A690);

INCLUDE_RODATA("nonmatchings/usb", D_0000A6B0);
#endif

INCLUDE_ASM("nonmatchings/usb", sceUsbGetDrvState);

INCLUDE_ASM("nonmatchings/usb", func_00008244);

INCLUDE_ASM("nonmatchings/usb", func_000082A4);

#if FW_VERSION < 282
void *func_00008334(void *arg0, void *arg1) {
    void *temp_a0;
    void *temp_a2;
    void *var_v0;
    void *var_v1;

    var_v0 = arg0;
    if (arg0 != NULL) {
        var_v1 = M2C_FIELD(arg0, void **, 0x40);
        if (var_v1 == NULL) {
            M2C_FIELD(arg0, void **, 0x40) = arg1;
        } else {
            do {
                temp_a2 = M2C_FIELD(var_v1, void **, 0x40);
                temp_a0 = var_v1;
                var_v1 = temp_a2;
            } while (temp_a2 != NULL);
            M2C_FIELD(temp_a0, void **, 0x40) = arg1;
            var_v0 = temp_a0;
        }
    }
    M2C_FIELD(arg1, s32 *, 0x40) = 0;
    return var_v0;
}
#else
void *func_00008318(struct Unk_func_00008318_0 *arg0, struct Unk_func_00008318_1 *arg1) {
    struct Unk_func_00008318_temp_a0 *temp_a0;
    void *temp_a2;
    void *var_v0;
    struct Unk_func_00008318_temp_a0 *var_v1;

    var_v0 = arg0;
    if (arg0 != NULL) {
        var_v1 = arg0->unk40;
        if (var_v1 == NULL) {
            arg0->unk40 = arg1;
        } else {
            do {
                temp_a2 = var_v1->unk40;
                temp_a0 = var_v1;
                var_v1 = temp_a2;
            } while (temp_a2 != NULL);
            temp_a0->unk40 = arg1;
            var_v0 = temp_a0;
        }
    }
    arg1->unk40 = 0;
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/usb", sceUsbBus_driver_B1644BE7);

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/usb", D_0000A7C8);

INCLUDE_RODATA("nonmatchings/usb", D_0000A7FC);

INCLUDE_RODATA("nonmatchings/usb", D_0000A82C);

INCLUDE_RODATA("nonmatchings/usb", D_0000A86C);
#endif

INCLUDE_ASM("nonmatchings/usb", sceUsbBus_driver_C1E2A540);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/usb", func_0000800C);

INCLUDE_ASM("nonmatchings/usb", func_00008234);
#else
INCLUDE_ASM("nonmatchings/usb", func_00008634);

INCLUDE_ASM("nonmatchings/usb", func_000088B0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00008A24(void) {
    D_0000AE80 = 0;
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00008A24(void) {
    D_0000AE40_v100 = 0;
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 func_00008A30(void) {
    D_0000B440 = 0;
    return 0;
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/usb", func_00008348);

INCLUDE_RODATA("nonmatchings/usb", D_0000975C);

INCLUDE_RODATA("nonmatchings/usb", D_000092AC);

INCLUDE_RODATA("nonmatchings/usb", D_00009774);

INCLUDE_ASM("nonmatchings/usb", func_0000835C);

INCLUDE_ASM("nonmatchings/usb", func_0000840C);

INCLUDE_ASM("nonmatchings/usb", func_000084B8);

INCLUDE_RODATA("nonmatchings/usb", D_000098AC);

INCLUDE_ASM("nonmatchings/usb", func_00008528);

INCLUDE_ASM("nonmatchings/usb", func_000085A4);

INCLUDE_ASM("nonmatchings/usb", func_00008B70);
#endif

#if FW_VERSION == 303
s32 func_00008318_v303(void) {
    return (D_0000B440 == 0) ? 0 : -1;
}
#endif

#if FW_VERSION == 302
s32 func_00008318_v302(void) {
    return (D_0000B440 == 0) ? 0 : -1;
}
#endif

#if FW_VERSION == 301
s32 func_00008318_v301(void) {
    return (D_0000B440 == 0) ? 0 : -1;
}
#endif

#if FW_VERSION == 300
s32 func_00008318_v300(void) {
    return (D_0000B440 == 0) ? 0 : -1;
}
#endif

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/usb", func_00008A40);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void sceUsbBus_driver_FBA2072B(void) {
    if (D_0000B1C4 != 0) {
        D_0000B1CC = 1;
    }
}

s32 sceUsbBus_driver_8A3EB5D2(void) {
    return D_0000B1CC;
}

void func_00008ACC(void) {
    D_0000B1CC = 0;
}

void sceUsbBus_driver_90B82F55(void) {
    D_0000B1C4 = 1;
}

void sceUsbBus_driver_7B87815D(void) {
    D_0000B1C4 = 0;
}

s32 sceUsbBus_driver_48CCE3C1(void) {
    return D_0000B1C8;
}

INCLUDE_ASM("nonmatchings/usb", func_00008B00);

INCLUDE_ASM("nonmatchings/usb", func_00008B4C);

INCLUDE_ASM("nonmatchings/usb", func_00008B94);

s32 func_00008BFC(void) {
    s32 temp_v0;

    temp_v0 = sceGpio_driver_317D9D2C(0x17, 2);
    if (temp_v0 >= 0) {

    } else {
        KDebugForKernel_84F370BC("usbbd ERROR : cannot finalize GPIO for USB host power supply : 0x%08x\n", temp_v0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION >= 282
void sceUsbBus_driver_FBA2072B(void) {
    if (D_0000B444 != 0) {
        D_0000B44C = 1;
    }
}

s32 sceUsbBus_driver_8A3EB5D2(void) {
    return D_0000B44C;
}

void func_00008AA8(void) {
    D_0000B44C = 0;
}

void sceUsbBus_driver_90B82F55(void) {
    D_0000B444 = 1;
}

void sceUsbBus_driver_7B87815D(void) {
    D_0000B444 = 0;
}

s32 sceUsbBus_driver_48CCE3C1(void) {
    return D_0000B448;
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/usb", func_000086CC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/usb", func_00008ADC);

INCLUDE_ASM("nonmatchings/usb", func_00008B28);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/usb", func_0000877C);

INCLUDE_ASM("nonmatchings/usb", func_00008BD8);

INCLUDE_ASM("nonmatchings/usb", func_00008800);

INCLUDE_ASM("nonmatchings/usb", func_0000883C);

INCLUDE_ASM("nonmatchings/usb", func_00008860);

INCLUDE_ASM("nonmatchings/usb", func_0000887C);

INCLUDE_ASM("nonmatchings/usb", func_00008898);

INCLUDE_ASM("nonmatchings/usb", func_000088A0);

INCLUDE_ASM("nonmatchings/usb", func_000088BC);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/usb", D_000092A4);

INCLUDE_RODATA("nonmatchings/usb", D_000092AC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/usb", func_00008B70);

s32 func_00008BD8(void) {
    s32 temp_v0;

    temp_v0 = sceGpio_driver_317D9D2C(0x17, 2);
    if (temp_v0 >= 0) {

    } else {
        KDebugForKernel_84F370BC("usbbd ERROR : cannot finalize GPIO for USB host power supply : 0x%08x\n", temp_v0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/usb", func_00008C28);

INCLUDE_RODATA("nonmatchings/usb", D_0000ADD4);

INCLUDE_ASM("nonmatchings/usb", func_00008CB4);

s32 func_00008D38(s32 arg0) {
    s32 var_v0;

    var_v0 = 0x251;
    if ((D_0000B450 == 0) || !(D_0000B450 & 1)) {
        var_v0 = arg0;
    }
    return var_v0;
}
#endif
