/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "usb_decls.h"

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", sceUsb_driver_E20B23A6);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00000090);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_00009520);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_00009550);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_00009584);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_000095B4);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_000095E4);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_00009608);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_00009630);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_00009664);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", sceUsbDeactivate);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_000005E4);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00000688);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_000006D4);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_0000073C);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_000009AC);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00000A38);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00000B14);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00000EE0);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_000014DC);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_000016C0);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00001790);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_0000192C);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00001984);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00001AD0);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00001B54);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00001D94);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00001E20);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00001FC4);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00002214);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_000022AC);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", sceUsbBus_driver_23E51D8F);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", sceUsbBus_driver_913EC15D);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", sceUsbBus_driver_CC57EC9D);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_000026E8);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00002808);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_00009A20);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_00009A3C);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_0000293C);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_00009A6C);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00002A48);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", module_stop);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_00009B28);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", module_reboot_before);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", sceUsbGetState);

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

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", sceUsbWaitCancel);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00002DC8);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", sceUsbBus_driver_C5E53685);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00002E80);

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

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00002F64);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00003164);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00003258);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_000033F8);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_00009D20);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00003490);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_000036A0);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00003734);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_000037C4);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00003A10);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00003C34);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00003E5C);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00003EB8);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00004050);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00004100);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_000041FC);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00004258);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00004510);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00004714);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_000048A4);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_000049D0);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00004E94);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00004F58);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00005084);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_0000526C);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00005400);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_00009FE8);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_0000574C);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00005AB0);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00005B1C);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00005B68);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_0000A174);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", sceUsbBus_driver_951A24CC);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", sceUsbBus_driver_E65441C1);

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

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00005CD0);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00005F58);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00006010);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00006358);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00006420);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00006544);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_000067B0);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00006C28);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_000070E8);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00007188);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_000072A0);

s32 func_00007344(void) {
    sceSysreg_driver_692F31FF(8);
    func_00007414();
    return -1;
}

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_0000736C);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00007414);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_0000A3E4);

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

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_000075A4);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_000076B4);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_0000A46C);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_0000A48C);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_0000A4C0);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", sceUsbStart);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_0000A500);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_0000A528);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_0000A54C);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_0000A578);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_0000A5A4);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_0000A5D4);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", sceUsbStop);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", sceUsbGetDrvList);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_0000A690);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_0000A6B0);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", sceUsbGetDrvState);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00008244);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_000082A4);

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

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", sceUsbBus_driver_B1644BE7);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_0000A7C8);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_0000A7FC);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_0000A82C);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_0000A86C);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", sceUsbBus_driver_C1E2A540);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00008634);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_000088B0);

s32 func_00008A30(void) {
    D_0000B440 = 0;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00008A40);

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

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00008ADC);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00008B28);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00008B70);

s32 func_00008BD8(void) {
    s32 temp_v0;

    temp_v0 = sceGpio_driver_317D9D2C(0x17, 2);
    if (temp_v0 >= 0) {

    } else {
        KDebugForKernel_84F370BC("usbbd ERROR : cannot finalize GPIO for USB host power supply : 0x%08x\n", temp_v0);
    }
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00008C28);

INCLUDE_RODATA("tmp/asm/282/usb/nonmatchings/usb", D_0000ADD4);

INCLUDE_ASM("tmp/asm/282/usb/nonmatchings/usb", func_00008CB4);

s32 func_00008D38(s32 arg0) {
    s32 var_v0;

    var_v0 = 0x251;
    if ((D_0000B450 == 0) || !(D_0000B450 & 1)) {
        var_v0 = arg0;
    }
    return var_v0;
}
