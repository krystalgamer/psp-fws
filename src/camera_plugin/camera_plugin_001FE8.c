#include "common.h"
#include "camera_plugin_decls.h"

void func_00001FE8(void **arg0, void **arg1) {
    *arg0 = *arg1;
    func_00002008(arg0);
}

void func_00002008(void **arg0) {
    struct Unk_func_00002008_temp_a0 *temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != NULL) {
        temp_a0->unk4 = (s32) (temp_a0->unk4 + 1);
    }
}

s32 func_00002028(struct Unk_func_00002028_0 *arg0) {
    return arg0->unk1D4;
}

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000217DC);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000217F8);
#else
INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00020478);
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00002030);

s32 func_00002084(struct Unk_func_00002084_0 *arg0, s32 arg1) {
    arg0->unk1EC = arg1;
    return 0;
}

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00002090);
#endif

#if FW_VERSION < 330
s32 func_00002090(void) {
    s32 var_v1;

    sceVshCommonGui_80271F41();
    var_v1 = 1;
    if (func_0000C09C() < 0) {
        func_00002574();
        func_000025E0((s32) "msgcamera_connect_camera", 0);
        var_v1 = -1;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 352
s32 func_00002090(void) {
    s32 temp_v0;
    s32 var_v0;

    sceKernelPowerLock(0);
    temp_v0 = func_0000BD70();
    var_v0 = 1;
    if (temp_v0 < 0) {
        func_00002574();
        func_000025E0((s32) "msgcamera_connect_camera", temp_v0);
        var_v0 = -1;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_000020E8);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00002158);

void func_000021B8(void) {
}

void func_000021C0(void) {
    D_001669D0 = 0;
    D_001669C0 = 0;
    D_001669C8 = 0;
    D_001669D2 = 0;
}

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_000021E4);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000220C);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00002230);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_000022A8);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000231C);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000241C);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00002428);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00002574);

#if FW_VERSION >= 350
void func_000025BC(void) {
    sceVshCommonGui_891DD627(0);
    func_00002428();
}
#else
void func_000025BC(void) {
    sceVshCommonGui_441D55D7(0);
    func_00002428();
}
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_000025E0);

#if FW_VERSION >= 350
void func_00002718(void) {
    sceVshCommonGui_891DD627(0);
}
#else
void func_00002718(void) {
    sceVshCommonGui_441D55D7(0);
}
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00002734);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_000027BC);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_000029E8);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00002A40);

u8 func_00002B88(void) {
    return (u8) D_001669C8;
}

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021910);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021920);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021930);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00002B94);

void func_00002C20(void) {
    func_00002B94(1, 0xFFFF);
}

void func_00002C40(void) {
    func_00002B94(0, 0xFFFF);
}

void func_00002C60(void) {
    if (func_00012F7C() >= 0) {

    } else {
        func_00002A40(func_0000BC18(), 0, 0);
    }
}

void func_00002CA4(void) {
    if (func_0000C1B8() != 0) {
        func_0000C5E8();
    } else {
        func_00002A40(func_0000BC18(), 0, 0);
    }
}

void func_00002CF0(void) {
    func_0000BFF0(1);
}

void func_00002D0C(void) {
    if (func_0000FDBC(0) != 0x80108D25) {

    } else {
        func_00002A40(func_0000BC18(), 0, 0);
    }
}

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00002D58);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_0002194C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_0002195C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_0002196C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_0002197C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_0002198C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_0002199C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000219AC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000219BC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000219CC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000219DC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000219EC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000219FC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021A0C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021A28);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021A3C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021A48);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021A5C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021A84);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021AA0);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021ABC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021ACC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021AD8);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021AE4);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021A9C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00020934);
#endif

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00020764);
#endif

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021AF8);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021B04);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021B20);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021B40);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021B54);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021B58);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021B60);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021B84);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021BA4);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021BB8);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021BC8);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021BDC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021BF0);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021C18);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021C24);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021C38);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021C44);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021C58);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021C64);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021C78);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021C84);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021C98);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021CA4);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021CE4);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021D00);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021D10);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021D2C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021D3C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021D58);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021D68);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021D84);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021D94);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021DD4);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021DE4);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021DF4);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021E14);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021E24);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021E48);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021E58);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021E7C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021E8C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021ECC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021EE4);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021EF0);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021F08);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021F10);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021F30);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021F4C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021F68);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021F84);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021FA0);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021FBC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021FD8);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021FF0);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_0002200C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022028);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022044);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022060);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_0002207C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022098);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022168);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022178);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_0002218C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000221A4);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000221BC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000221CC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_0002221C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022230);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_0002224C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022260);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_0002227C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022290);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000222AC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000222C0);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000222D4);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000222E8);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022304);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_0002237C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022390);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000223AC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000223C0);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000223DC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000223EC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_0002240C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022424);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022444);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022454);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022474);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022484);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000224A0);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000224B4);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000224C8);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022570);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000225E8);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022690);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000226A0);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000226B4);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000226D0);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022748);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022768);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000227F8);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022808);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022820);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022898);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022928);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_0002293C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022950);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022998);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000229E0);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000229F0);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022A08);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022A18);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022A30);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00002DEC);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00003264);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00003298);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000357C);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_000035FC);

void func_00003734(s32 arg0) {
    func_0000E80C(func_0000BD64(), arg0);
    func_0000BB10();
    func_00001A54(1);
    func_0000E4C0();
}

void func_0000377C(s32 arg0) {
    func_0000E8D4(func_0000BD64(), arg0);
    func_0000BB10();
}

void func_000037B4(s32 arg0) {
    func_0000E964(func_0000BD64(), arg0);
    func_00001A54(0);
}

void func_000037EC(s32 arg0) {
    func_0000E994(func_0000BD64(), arg0);
    sceUsbCamSetEvLevel(0xA - func_0000E9BC(func_0000BD64()));
}

void func_00003838(s32 arg0) {
    func_0000EA90(func_0000BD64(), arg0);
    func_0000C254(arg0);
    func_00001A54(0);
}

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00003878);

#if FW_VERSION >= 330 && FW_VERSION < 352
void func_00003978(s32 arg0) {
    if ((func_0000ACFC() == 0) || (func_0000B9EC() == 0) || (arg0 != 0)) {
        func_0000E934(func_0000BD64(), arg0);
        func_0000BB10();
        func_00001A54(0);
    } else {
        func_00002A40((s32) &D_00021A0C, 0, 0);
    }
}
#endif

#if FW_VERSION < 330
void func_00003978(s32 arg0) {
    if ((func_0000AB8C() != 0) || (func_0000BBB4() == 0) || (arg0 != 0)) {
        func_0000E934(func_0000BD64(), arg0);
        func_0000BB10();
        func_00001A54(0);
    } else {
        func_00002A40((s32) &D_00021A0C, 0, 0);
    }
}
#endif

#if FW_VERSION == 352
void func_00003978(s32 arg0) {
    if ((func_0000ACC0() == 0) || (func_0000B9DC() == 0) || (arg0 != 0)) {
        func_0000E934(func_0000BD64(), arg0);
        func_0000BB10();
        func_00001A54(0);
    } else {
        func_00002A40((s32) &D_00021A0C, 0, 0);
    }
}
#endif

void func_000039F8(void) {
    func_00002C60();
}

void func_00003A14(void) {
    func_0000BFF0(1);
}

void func_00003A30(void) {
    func_00002D0C();
}

void func_00003A4C(void) {
    func_0000E310(4);
}

void func_00003A68(void) {
    func_0000C140();
    func_00008FC8(0);
}

void func_00003A8C(void) {
    func_0000C3C8();
    D_00166ADE = 1;
}

void func_00003AB4(void) {
    func_0000C454();
    D_00166ADE = 1;
}

void func_00003ADC(s32 arg0) {
    func_00002D58(arg0, (s32) &D_00021CA4, 4, (s32) func_00003734, func_0000E834(func_0000BD64()));
}

void func_00003B28(s32 arg0) {
    func_00002D58(arg0, (s32) &D_00021F10, 2, (s32) func_0000377C, func_0000E8FC(func_0000BD64()));
}

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00003B74);

void func_00003C28(s32 arg0) {
    D_00166ADD = 1;
    func_00002D58(arg0, (s32) &D_00022098, 0xD, (s32) func_000037EC, func_0000E9BC(func_0000BD64()) + 6);
}

void func_00003C84(s32 arg0) {
    func_00002D58(arg0, (s32) &D_000221CC, 5, (s32) func_00003838, func_0000EAB8(func_0000BD64()));
}

void func_00003CD0(void) {
    if (func_0000C128() != 1) {
        if (func_0000C128() != 2) {

        } else {
            func_00002CF0();
        }
    } else {
        func_00002CA4();
    }
}

void func_00003D2C(void) {
    func_0000BFF0(0);
}

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00003D48);

void func_00003DCC(s32 arg0) {
    func_00002D58(arg0, (s32) &D_00021F10, 2, (s32) func_00003978, func_0000E95C(func_0000BD64()));
}

#if FW_VERSION >= 350
void func_00003E18(void) {
    func_0000E16C();
    func_0000BFF0(func_0000C134());
    sceVshCommonGui_891DD627(0);
}
#else
void func_00003E18(void) {
    func_0000E16C();
    func_0000BFF0(func_0000C134());
    sceVshCommonGui_441D55D7(0);
}
#endif

#if FW_VERSION >= 350
void func_00003E4C(void) {
    sceVshCommonGui_891DD627(0);
    func_0000FDBC((s32) func_00003E18);
}
#else
void func_00003E4C(void) {
    sceVshCommonGui_441D55D7(0);
    func_0000FDBC((s32) func_00003E18);
}
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00003E74);
#endif

#if FW_VERSION >= 350
s32 func_00003E74(void) {
    s32 var_s0;

    func_0000B990();
    var_s0 = -1;
    sceVshCommonGui_6F4C9FDB();
    func_000021E4();
    if (func_0000241C() == 0) {
        var_s0 = func_000102E8();
    }
    func_0000220C();
    func_0000B9B8();
    return var_s0;
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
s32 func_00003E74(void) {
    s32 var_s0;

    func_0000B990();
    var_s0 = -1;
    sceVshCommonGui_80271F41();
    func_000021E4();
    if (func_0000241C() == 0) {
        var_s0 = func_000102E8();
    }
    func_0000220C();
    func_0000B9B8();
    return var_s0;
}
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00003ED8);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00003FD0);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_000040D4);

void func_00004274(void) {
    func_000100F0();
}

void func_00004290(void) {
    func_000101D8();
}

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_000042AC);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00004560);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00004728);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00004A18);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00004A38);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_000051D4);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00005290);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_000052E4);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00005334);

#if FW_VERSION >= 350
void func_000055B0(void) {
    sceVshCommonGui_F5A16B4D(1);
    func_0000E16C();
}
#else
void func_000055B0(void) {
    sceVshCommonGui_A0DE7090(1);
    func_0000E16C();
}
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_000055D4);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00005698);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00005778);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000586C);

#if FW_VERSION == 350
void func_00005918(void) {
    if (func_0000241C() == 0) {
        (*D_00166ACC)->unk7C((void **) D_00166ACC, 7, 0xD, 1);
        (*D_00166ACC)->unk7C((void **) D_00166ACC, 1, 0xD, 1);
        (*D_00166ACC)->unk7C((void **) D_00166ACC, 2, 0xD, 1);
    }
    scePaf_648CA0C5();
}
#endif

#if FW_VERSION < 350
void func_00005918(void) {
    if (func_0000241C() == 0) {
        M2C_FIELD(*D_0016558C, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK, M2C_UNK), 0x7C)(D_0016558C, 7, 0xD, 1);
        M2C_FIELD(*D_0016558C, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK, M2C_UNK), 0x7C)(D_0016558C, 1, 0xD, 1);
        M2C_FIELD(*D_0016558C, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK, M2C_UNK), 0x7C)(D_0016558C, 2, 0xD, 1);
    }
    scePaf_66907719();
}
#endif

#if FW_VERSION == 352
void func_00005918(void) {
    if (func_0000241C() == 0) {
        (*D_00166ACC)->unk7C(D_00166ACC, 7, 0xD, 1);
        (*D_00166ACC)->unk7C(D_00166ACC, 1, 0xD, 1);
        (*D_00166ACC)->unk7C(D_00166ACC, 2, 0xD, 1);
    }
    scePaf_648CA0C5();
}
#endif

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_000059AC);
#endif

#if FW_VERSION < 350
void func_000059AC(void) {
    if (D_00165594 == 0) {

    } else {
        scePaf_6B1E90C7();
        M2C_FIELD(*D_0016558C, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK, M2C_UNK), 0x7C)(D_0016558C, 7, 0xD, 0);
        M2C_FIELD(*D_0016558C, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK, M2C_UNK), 0x7C)(D_0016558C, 1, 0xD, 0);
        M2C_FIELD(*D_0016558C, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK, M2C_UNK), 0x7C)(D_0016558C, 2, 0xD, 0);
        scePaf_A0ED77C4(0, &func_0000586C, D_00165598, -1, -1, func_00005918);
    }
}
#endif

#if FW_VERSION == 352
void func_000059AC(void) {
    if (D_00166AD4 == 0) {

    } else {
        scePaf_0CFD27E9();
        (*D_00166ACC)->unk7C(D_00166ACC, 7, 0xD, 0);
        (*D_00166ACC)->unk7C(D_00166ACC, 1, 0xD, 0);
        (*D_00166ACC)->unk7C(D_00166ACC, 2, 0xD, 0);
        scePaf_3EDD45EF(0, &func_0000586C, D_00166AD8, -1, -1, func_00005918);
    }
}
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00005A64);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00005B20);

#if FW_VERSION >= 350
void func_00005CB4(s32 arg0) {
    scePaf_0BF42D26(arg0, func_0000EBC4(func_0000BD64()));
}
#else
void func_00005CB4(s32 arg0) {
    scePaf_C2C25056(arg0, func_0000EBC4(func_0000BD64()));
}
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00005CEC);

#if FW_VERSION == 350
void func_00005D48(s32 arg0) {
    scePaf_0BF42D26(arg0, func_0000EBC4(func_0000BD64()));
    (*D_00166AD0)->unkBC((void **) D_00166AD0, 0, 0);
    sceVshCommonGui_4D99D0C1(0);
    D_00166AD4 = 0;
}
#endif

#if FW_VERSION < 350
void func_00005D48(s32 arg0) {
    scePaf_C2C25056(arg0, func_0000EBC4(func_0000BD64()));
    M2C_FIELD(*D_00165590, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK), 0xBC)(D_00165590, 0, 0);
    sceVshCommonGui_EEB86F0E(0);
    D_00165594 = 0;
}
#endif

#if FW_VERSION == 352
void func_00005D48(s32 arg0) {
    scePaf_0BF42D26(arg0, func_0000EBC4(func_0000BD64()));
    (*D_00166AD0)->unkBC(D_00166AD0, 0, 0);
    sceVshCommonGui_4D99D0C1(0);
    D_00166AD4 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00005DAC);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00005E60);

void func_00005F50(void) {
    func_00005E60(1, 0xFFFF);
}

void func_00005F70(void) {
    func_00005E60(0, 0xFFFF);
}

void func_00005F90(void **arg0, void *arg1) {
    *arg0 = arg1;
    func_00002008(arg0);
}

void func_00005FB0(M2C_UNK **arg0) {
    *arg0 = &D_00022AE8;
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00005FC0);
#else
void func_00005FC0(M2C_UNK **arg0) {
    *arg0 = &D_00022AE8;
    scePaf_4E67BB08();
}
#endif

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00006050);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_00006050(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00022B28;
    temp_v0 = scePaf_B7E6052B(4);
    scePaf_0E106561(temp_v0, &D_00022AA8, 0, 0, 0, 0);
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    temp_v0_2 = scePaf_B7E6052B(4);
    scePaf_0E106561(temp_v0_2, &D_00022AC0, 0, 0, 0, 0);
    M2C_FIELD(arg0, s32 *, 8) = temp_v0_2;
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_000060E4);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00006178);

void func_000062F4(void) {
    func_0000632C();
}

void func_00006310(void) {
    func_000063A8();
}
#endif

#if FW_VERSION == 350
s32 func_0000632C(void) {
    s32 var_v0;

    var_v0 = sceUsbStart(&D_00022AD8, 0U, NULL);
    if (var_v0 >= 0) {
        var_v0 = sceUsbStart(&D_00022B30, 0U, NULL);
        if (var_v0 >= 0) {
            var_v0 = sceUsbStart(&D_00022AFC, 0U, NULL);
            if (var_v0 >= 0) {
                var_v0 = sceUsbStart(&D_00022B0C, 0U, NULL);
            }
        }
    }
    return var_v0;
}
#endif

#if FW_VERSION == 340
s32 func_0000632C(void) {
    s32 var_v0;

    var_v0 = sceUsbStart(&D_00022AD8, 0U, NULL);
    if (var_v0 >= 0) {
        var_v0 = sceUsbStart(&D_00022AE8_v340, 0U, NULL);
        if (var_v0 >= 0) {
            var_v0 = sceUsbStart(&D_00022AFC, 0U, NULL);
            if (var_v0 >= 0) {
                var_v0 = sceUsbStart(&D_00022B0C, 0U, NULL);
            }
        }
    }
    return var_v0;
}
#endif

#if FW_VERSION == 330
s32 func_0000632C(void) {
    s32 var_v0;

    var_v0 = sceUsbStart(&D_00022AD8, 0U, NULL);
    if (var_v0 >= 0) {
        var_v0 = sceUsbStart(&D_00022AE8_v330, 0U, NULL);
        if (var_v0 >= 0) {
            var_v0 = sceUsbStart(&D_00022AFC, 0U, NULL);
            if (var_v0 >= 0) {
                var_v0 = sceUsbStart(&D_00022B0C, 0U, NULL);
            }
        }
    }
    return var_v0;
}
#endif

#if FW_VERSION == 350
s32 func_000063A8(void) {
    s32 var_v0;

    var_v0 = sceUsbStop(&D_00022B0C, 0U, NULL);
    if (var_v0 >= 0) {
        var_v0 = sceUsbStop(&D_00022AFC, 0U, NULL);
        if (var_v0 >= 0) {
            var_v0 = sceUsbStop(&D_00022B30, 0U, NULL);
            if (var_v0 >= 0) {
                var_v0 = sceUsbStop(&D_00022AD8, 0U, NULL);
            }
        }
    }
    return var_v0;
}
#endif

#if FW_VERSION == 340
s32 func_000063A8(void) {
    s32 var_v0;

    var_v0 = sceUsbStop(&D_00022B0C, 0U, NULL);
    if (var_v0 >= 0) {
        var_v0 = sceUsbStop(&D_00022AFC, 0U, NULL);
        if (var_v0 >= 0) {
            var_v0 = sceUsbStop(&D_00022AE8_v340, 0U, NULL);
            if (var_v0 >= 0) {
                var_v0 = sceUsbStop(&D_00022AD8, 0U, NULL);
            }
        }
    }
    return var_v0;
}
#endif

#if FW_VERSION == 330
s32 func_000063A8(void) {
    s32 var_v0;

    var_v0 = sceUsbStop(&D_00022B0C, 0U, NULL);
    if (var_v0 >= 0) {
        var_v0 = sceUsbStop(&D_00022AFC, 0U, NULL);
        if (var_v0 >= 0) {
            var_v0 = sceUsbStop(&D_00022AE8_v330, 0U, NULL);
            if (var_v0 >= 0) {
                var_v0 = sceUsbStop(&D_00022AD8, 0U, NULL);
            }
        }
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00006424);
#endif

#if FW_VERSION == 350
s32 func_00006424(void) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80108D51;
    if (sceUsbGetState() & 0x100) {
        temp_v0 = sceUsbActivate(0x282);
        var_v1 = 1;
        if (temp_v0 < 0) {
            sceUsbWaitCancel();
            var_v1 = temp_v0;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00006478);
#endif

#if FW_VERSION == 350
s32 func_00006478(void) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80108D52;
    if (sceUsbGetState() & 0x200) {
        temp_v0 = sceUsbDeactivate();
        var_v1 = 1;
        if (temp_v0 < 0) {
            sceUsbWaitCancel();
            var_v1 = temp_v0;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_000064CC);
#endif

#if FW_VERSION == 352
void func_00005FE8(struct Unk_func_00005FE8_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    arg0->unk0 = &D_00022B70;
    temp_v0 = scePaf_61A8E8EC(4);
    scePaf_99F6554D(temp_v0, &D_00022AF0, 0, 0, 0, 0);
    arg0->unk4 = temp_v0;
    temp_v0_2 = scePaf_61A8E8EC(4);
    scePaf_99F6554D(temp_v0_2, &D_00022B08, 0, 0, 0, 0);
    arg0->unk8 = temp_v0_2;
}

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000607C);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00006110);

void func_0000628C(void) {
    func_000062C4();
}

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_000062A8);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_000062C4);

void func_00006340(void) {
    if ((sceUsbStop(&D_00022B54, 0U, NULL) >= 0) && (sceUsbStop(&D_00022B44, 0U, NULL) >= 0) && (sceUsbStop(&D_00022B30, 0U, NULL) >= 0)) {
        sceUsbStop(&D_00022B20, 0U, NULL);
    }
}

s32 func_000063BC(void) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80108D51;
    if (sceUsbGetState() & 0x100) {
        temp_v0 = sceUsbActivate(0x282);
        var_v1 = 1;
        if (temp_v0 < 0) {
            sceUsbWaitCancel();
            var_v1 = temp_v0;
        }
    }
    return var_v1;
}

s32 func_00006418(void) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80108D52;
    if (sceUsbGetState() & 0x200) {
        temp_v0 = sceUsbDeactivate();
        var_v1 = 1;
        if (temp_v0 < 0) {
            sceUsbWaitCancel();
            var_v1 = temp_v0;
        }
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00006470);
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000651C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022AE8);

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022AA8);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022AC0);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022AD8);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022B30);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022AE8_v340);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022AE8_v330);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022AFC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022B0C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022B28);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022AF0);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022B08);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022B20);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022B30);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022B44);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022B54);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022B70);
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00006550);

#if FW_VERSION >= 350
void func_000066C0(void) {
    func_0000E454(6);
    sceVshCommonGui_F5A16B4D(1);
    sceVshCommonGui_891DD627(1);
}
#else
void func_000066C0(void) {
    func_0000E454(6);
    sceVshCommonGui_A0DE7090(1);
    sceVshCommonGui_441D55D7(1);
}
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_000066EC);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000676C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022BE8);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00006970);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00006AF4);

void func_00006B74(void) {
    func_00006AF4(1, 0xFFFF);
}

void func_00006B94(void) {
    func_00006AF4(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00006BB4);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00006BF4);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00006C58);

void func_00006CE8(struct Unk_func_00006CE8_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00006CF8);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022BF4);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022C04);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022C10);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022C1C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022C28);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022C44);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022C60);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022C74);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022C90);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022CAC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022CB8);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022CC4);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022CD0);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022CDC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022CEC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022CFC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022D0C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022D1C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022D2C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022D3C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022D4C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022D5C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022D68);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022D70);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022D8C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022DA8);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022DC4);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022DE0);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022DFC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022E18);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022E30);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022E4C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022E68);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022E84);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022EA0);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022EBC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022ED8);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022EEC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022EF4);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022F10);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022F2C);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022F30);
#else
INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021B28);
#endif

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022FB0);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022FC8);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022FE0);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022FF8);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023010);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023014);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023018);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023034);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023050);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_0002305C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023070);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023088);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000230A0);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000230B8);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000230D0);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000230E0);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000230F4);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023104);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023118);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023128);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023140);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023154);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023170);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023184);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023190);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023148);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021F58);
#endif

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00021D88);
#endif

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000231C0);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000231D0);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000231EC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023208);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_0002321C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_0002322C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023238);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_0002324C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023260);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023274);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023288);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_0002329C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000232B0);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000232B8);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000232CC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000232DC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000232EC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000232FC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023310);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_0002331C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023328);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023334);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023348);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023358);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023364);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023378);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023384);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_0002339C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000233BC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000233C8);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000233D8);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000233F0);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000233FC);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023400);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_0002340C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023410);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023418);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023428);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023438);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023440);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023444);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023454);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023460);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023468);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023480);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_0002348C);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000234A0);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000234BC);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023474);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022284);
#endif

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000220B4);
#endif

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000234D0);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000234E0);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_000234F8);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023508);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00006D34);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00006E68);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00006F9C);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00006FF8);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_000071F0);

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_000072D8);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00007434);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 352
void func_00007434(void) {
    func_0000B89C();
    func_00008FC8(0);
}

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_000074B0);
#endif

#if FW_VERSION == 352
void func_00007434(void) {
    func_0000B88C();
    func_00008FC8(0);
}

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00007458);
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_000074A4);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_000076C0);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00007828);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00007964);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00007ADC);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00007C18);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_000080F4);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00008234);

void func_00008AC4(void) {
    func_00002574();
    func_000022A8();
    func_00008FC8(0);
}

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00008AF0);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00008B70);

s32 func_00008BA4(void) {
    D_00166BD0 = 0;
    D_00166BB8 = 0;
    return 1;
}

void func_00008BBC(void) {
    D_00166BB8 = 1;
}

void func_00008BCC(s32 arg0) {
    struct Unk_func_00008BCC_temp_a3 *temp_a3;

    temp_a3 = *D_00166B5C;
    temp_a3->unkB4(D_00166B5C, arg0, 0, temp_a3);
}

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00008C00);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00008CB0);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00008DC8);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00008E44);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_00008FC8);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000A5A0);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000A5CC);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000A60C);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000A780);

void func_0000AA3C(void) {
    func_0000A780(1);
}

void func_0000AA58(void) {
    func_0000A780(0);
}

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000AA74);

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022338);
#endif

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022168_v303);
#endif

#if FW_VERSION == 302
INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022168_v302);
#endif

#if FW_VERSION == 301
INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022168_v301);
#endif

#if FW_VERSION == 300
INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00022168_v300);
#endif

void func_0000AB18(void) {
    func_0000AA74(1, 0xFFFF);
}

void func_0000AB38(void) {
    func_0000AA74(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000AB58);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000ABF4);

#if FW_VERSION == 350
s32 func_0000ACFC(void) {
    return (*D_00166C30)->unk18((void **) D_00166C30);
}
#endif

#if FW_VERSION == 340
s32 func_0000ACFC(void) {
    return M2C_FIELD(*D_00166BB0_v340, s32 (**)(void **), 0x18)(D_00166BB0_v340);
}
#endif

#if FW_VERSION == 350
void func_0000ACEC(void) {
    (*D_00166C30)->unk8((void **) D_00166C30);
}
#endif

#if FW_VERSION == 330
s32 func_0000ACFC(void) {
    return M2C_FIELD(*D_00166BB0_v330, s32 (**)(void **), 0x18)(D_00166BB0_v330);
}
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000AB8C);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000AB98);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000AC20);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000ACB0);
#endif

#if FW_VERSION == 352
s32 func_0000ACC0(void) {
    return (*D_00166C30)->unk18(D_00166C30);
}

void func_0000ACEC(void) {
    (*D_00166C30)->unk8(D_00166C30);
}
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000AD18);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000AE34);

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023570);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000AF0C);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000B0C4);

#if FW_VERSION < 330
s32 func_0000B390(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000B398);
#endif

s32 func_0000B370(void) {
    return D_00166C48;
}

s32 func_0000B37C(void) {
    return D_00166C4C;
}

#if FW_VERSION == 350
void func_0000B388(void) {
    func_0000BB10();
    if ((func_0000C438() == 0) && (D_00166C3C == 3)) {
        func_0000BFF0(D_00166C40);
        sceVshCommonGui_F5A16B4D(0);
        sceVshCommonGui_891DD627(0);
        sceVshCommonGui_4D99D0C1(0);
    }
    if (func_0000E0BC() != 4) {
        if (func_0000E0BC() != 6) {

        } else {
            func_0000E16C();
        }
    } else {
        func_0000E454(4);
    }
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_0000B388(void) {
    func_0000BB10();
    if ((func_0000C438() == 0) && (D_00166C3C == 3)) {
        func_0000BFF0(D_00166C40);
        sceVshCommonGui_A0DE7090(0);
        sceVshCommonGui_441D55D7(0);
        sceVshCommonGui_EEB86F0E(0);
    }
    if (func_0000E0BC() != 4) {
        if (func_0000E0BC() != 6) {

        } else {
            func_0000E16C();
        }
    } else {
        func_0000E454(4);
    }
}
#endif

#if FW_VERSION < 330
void func_0000B388(void) {
    if ((D_001656E4 == 0) && (D_00166C3C == 3)) {
        func_0000BFF0(D_00166C40);
        sceVshCommonGui_A0DE7090(0);
        sceVshCommonGui_441D55D7(0);
        sceVshCommonGui_EEB86F0E(0);
    }
    if (func_0000E0BC() != 4) {
        if (func_0000E0BC() != 6) {

        } else {
            func_0000E16C();
        }
    } else {
        func_0000E454(4);
    }
}
#endif

#if FW_VERSION == 352
void func_0000B388(void) {
    func_0000BB10();
    if ((func_0000C160() == 0) && (D_00166C3C == 3)) {
        func_0000BFF0(D_00166C40);
        sceVshCommonGui_F5A16B4D(0);
        sceVshCommonGui_891DD627(0);
        sceVshCommonGui_4D99D0C1(0);
    }
    if (func_0000E0BC() != 4) {
        if (func_0000E0BC() != 6) {

        } else {
            func_0000E16C();
        }
    } else {
        func_0000E454(4);
    }
}
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000B434);

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000B564);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000B89C);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000B614);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000B9D0);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000BA48);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000BB00);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000B554);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000B88C);
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000B990);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000B9B8);

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000B9EC);
#endif

#if FW_VERSION < 330
s32 func_0000BBB4(void) {
    s32 var_v0;

    var_v0 = 6;
    if (D_001656E6 == 0) {
        var_v0 = D_00165708;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000B9DC);
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000BB10);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000BC18);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000BF2C);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000BFD0);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000BCC4);
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000BD64);

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000C090);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000C03C);
#endif

#if FW_VERSION == 311
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000C090_v311);
#endif

#if FW_VERSION == 310
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000C090_v310);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000C09C);
#else
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000BD70);
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000BEAC);

s32 func_0000BFD8(void) {
    return D_00166BEC;
}

void func_0000BFE4(s32 arg0) {
    D_00166BEC = arg0;
}

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000C1B8);
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000BFF0);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000C128);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000C134);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000C140);

u8 func_0000C154(void) {
    return D_00024BD0;
}

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000C438);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000C1B8);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000C254_v340);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000C254_v330);
#endif

#if FW_VERSION < 330
u8 func_0000C438(void) {
    u8 var_v0;

    var_v0 = 0;
    if (D_001656E6 == 0) {
        var_v0 = D_001656E4;
    }
    return var_v0;
}

u8 func_0000C458(void) {
    u8 var_v0;

    var_v0 = 0;
    if (D_001656E6 == 0) {
        var_v0 = D_001656E5;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000C160);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000C1B8);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000C1FC);
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000C254);

s32 func_0000C340(void) {
    s32 var_a0;

    var_a0 = 0;
    if (((D_00166C3C == 0) | (D_00166C3C == 4)) != 0) {
        var_a0 = D_00166BE0;
    }
    return var_a0;
}

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000C370);
#endif

#if FW_VERSION == 352
void func_0000C370(void) {
    scePaf_DCE3D225(scePaf_88784487("system_plugin"), 1);
}
#endif

#if FW_VERSION < 350
void func_0000C370(void) {
    scePaf_338C3774(scePaf_D4FAE7D0("system_plugin"), 1);
}
#endif

void func_0000C39C(s32 arg0) {
    func_0000EB8C((s32) &D_00166BF0, arg0);
    func_00008FC8(1);
}

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000C3C8);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000C454);

void func_0000C4B0(void) {
    func_0000EB8C(func_0000BD64(), 0xA);
    sceUsbCamSetZoom(0xA);
    func_0000A5A0();
}

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000C4E8);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000C578);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000C5E8);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000C628);

#if FW_VERSION >= 350
void func_0000C660(void) {
    sceKernelPowerUnlock(0);
    func_00008FC8(0);
    scePaf_648CA0C5();
}
#else
void func_0000C660(void) {
    sceKernelPowerUnlock(0);
    func_00008FC8(0);
    scePaf_66907719();
}
#endif

#if FW_VERSION >= 350
void func_0000C68C(void) {
    sceKernelWaitSema(D_00166C58, 1, NULL);
    if (func_00001AA8() == 0) {
        sceKernelSignalSema(D_00166C58, 1);
    } else {
        scePaf_0CFD27E9();
        func_00008FC8(0);
        func_0000E4C0();
        scePaf_3EDD45EF(0, &func_0000C628, 0, -1, -1, func_0000C660);
    }
}
#else
void func_0000C68C(void) {
    sceKernelWaitSema(D_00166C58, 1, NULL);
    if (func_00001AA8() == 0) {
        sceKernelSignalSema(D_00166C58, 1);
    } else {
        scePaf_6B1E90C7();
        func_00008FC8(0);
        func_0000E4C0();
        scePaf_A0ED77C4(0, &func_0000C628, 0, -1, -1, func_0000C660);
    }
}
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000C718);

void func_0000C788(void) {
    func_00014198(D_00166C28->unk4);
}

s32 func_0000C7AC(s32 arg0) {
    func_0001426C(arg0, D_00166C28->unk4);
    return arg0;
}

struct Unk_ret_func_0000C7E0 *func_0000C7E0(void) {
    return D_00166C38;
}

#if FW_VERSION >= 330 && FW_VERSION < 352
void func_0000C844(s32 arg0) {
    D_00166C38 = arg0;
    func_0000EBFC((s32) &D_00166BF0, func_00015020(arg0));
    func_0000EBCC((s32) &D_00166BF0, M2C_FIELD(arg0, s32 *, 0x114));
}
#endif

#if FW_VERSION < 330
void func_0000CA10(s32 arg0) {
    D_00166C38 = arg0;
}
#endif

#if FW_VERSION == 352
void func_0000C7EC(struct Unk_func_0000C7EC_0 *arg0) {
    D_00166C38 = arg0;
    func_0000EBFC((s32) &D_00166BF0, func_00014EF8(arg0));
    func_0000EBCC((s32) &D_00166BF0, arg0->unk114);
}
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000C840);

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000CBF0);
#endif

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000CA3C);
#endif

#if FW_VERSION < 350
void func_0000CA3C(void) {
    vsh_81BBD0D1(vsh_34DA1B67(), &D_00023724);
}
#endif

#if FW_VERSION == 352
void func_0000CA3C(void) {
    vsh_F6CF5A1C(vsh_36C11185(), &D_00023724);
}
#endif

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000CA68);
#endif

#if FW_VERSION < 350
void func_0000CA68(void) {
    vsh_6286E89D(vsh_34DA1B67(), &D_00023724);
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000CAEC);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000CAF8);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000CB30);
#endif

#if FW_VERSION == 352
void func_0000CA68(void) {
    vsh_60EA90BF(vsh_36C11185(), &D_00023724);
}

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000CA94);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000CAA0);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000CAD8);
#endif

INCLUDE_RODATA("nonmatchings/camera_plugin_001FE8", D_00023724);

INCLUDE_ASM("nonmatchings/camera_plugin_001FE8", func_0000CB20);

void func_0000CC24(void) {
    func_0000CB20(1, 0xFFFF);
}

void func_0000CC44(void) {
    func_0000CB20(0, 0xFFFF);
}
