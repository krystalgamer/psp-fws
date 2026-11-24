#include "common.h"
#include "netconf_plugin_decls.h"

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/netconf_plugin", module_start);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", module_stop);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000015C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001C4C);
#endif

#if FW_VERSION == 150
s32 func_00001C4C(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_00012C1C;
    D_00012C1C = arg0;
    return temp_v0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000001BC);
#endif

#if FW_VERSION == 150
s32 func_000001BC(void) {
    return D_00012C1C;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000001C8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000254);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000002DC);
#endif

#if FW_VERSION == 282
s32 module_stop(void) {
    func_0001A060();
    return 0;
}

s32 func_0000015C(void) {
    return 0;
}

s32 func_00000164(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000016C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000022C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000002B4);

void func_00000314(s32 arg0, struct Unk_func_00000314_1 *arg1, s32 arg2) {
    if (arg1 != NULL) {
        arg1->unk4 = arg0;
        arg1->unk8 = 0;
        scePaf_A0ED77C4(0, func_0000035C, arg1, -1, -1, arg2);
    }
}

s32 func_0000035C(struct Unk_func_0000035C_0 *arg0) {
    s32 temp_v0;

    temp_v0 = func_000002B4(arg0->unk4);
    arg0->unk8 = temp_v0;
    return (temp_v0 == 0) ? 0 : 2;
}

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B0F0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000394);

s32 func_000004BC(s32 arg0) {
    s32 temp_v0;

    func_00000394();
    temp_v0 = sceUtilityCheckNetParam(arg0);
    if (temp_v0 != 0) {

    } else {
        func_00000624(arg0, 0);
        func_00000624(arg0, 1);
        func_00000624(arg0, 2);
        func_00000624(arg0, 3);
        func_00000624(arg0, 4);
        func_00000624(arg0, 5);
        func_00000624(arg0, 6);
        func_00000624(arg0, 7);
        func_00000624(arg0, 8);
        func_00000624(arg0, 9);
        func_00000624(arg0, 0xA);
        func_00000624(arg0, 0xB);
        func_00000624(arg0, 0xC);
        func_00000624(arg0, 0xD);
        func_00000624(arg0, 0xE);
        func_00000624(arg0, 0xF);
        if (func_00001354(arg0) >= 2) {
            func_00000624(arg0, 0x12);
            func_00000624(arg0, 0x13);
            func_00000624(arg0, 0x14);
            func_00000624(arg0, 0x15);
            func_00000624(arg0, 0x16);
            func_00000624(arg0, 0x17);
        }
    }
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000624);

void func_00000784(s32 arg0, struct Unk_func_00000784_1 *arg1, s32 arg2) {
    if (arg1 != NULL) {
        arg1->unk4 = arg0;
        arg1->unk8 = 0;
        scePaf_A0ED77C4(0, func_000007CC, arg1, -1, -1, arg2);
    }
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000007CC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000820);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000097C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000C8C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000E28);

s32 func_00000EE0(struct Unk_func_00000EE0_0 *arg0) {
    s32 temp_v0;

    temp_v0 = func_0000097C((u8 *)arg0 + 4);
    arg0->unk8 = temp_v0;
    return (temp_v0 == 0) ? 0 : 2;
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000F18);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001088);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001298);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000012C0);

s32 func_000012E8(void) {
    return D_000203D8 != D_000203DC;
}

s32 func_00001304(void) {
    return D_000203D8;
}

void func_00001310(s32 arg0) {
    D_000203D8 = arg0;
}

void func_0000131C(void) {
    sceUtilityGetNetParamLatestID();
}

void func_00001338(void) {
    sceUtility_netparam_internal_8E8E3AA3();
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001354);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001384);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000013A4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000013D0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001420);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000147C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000154C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000156C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000158C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000015CC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000016F8);

void sceVshNetconf_92136BE5(void) {
    D_000203E0 = 1;
    func_00000394();
}

void sceVshNetconf_AA073A3D(void) {
    func_00001088();
}

INCLUDE_ASM("nonmatchings/netconf_plugin", sceVshNetconf_B4006E84);

INCLUDE_ASM("nonmatchings/netconf_plugin", sceVshNetconf_BEAC6DF3);

void sceVshNetconf_E5C98505(void) {
    func_00001088();
}

INCLUDE_ASM("nonmatchings/netconf_plugin", sceVshNetconf_C721AEF6);

void sceVshNetconf_ED56BC38(void) {
    func_000002B4(0);
    func_0000022C(0);
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001AB0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001B0C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001B40);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001B90);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001C10);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000348);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000003F8);
#endif

#if FW_VERSION == 150
s32 func_0000015C(void) {
    return D_00012C18 != 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000480);
#endif

#if FW_VERSION == 150
s32 func_00000480(void) {
    return D_00012C14 & 1;
}

s32 func_0000040C(void) {
    return ((u32) D_00012C14 >> 1) & 1;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000490);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000004B4);
#else
void func_00001C34(s32 arg0) {
    D_000203E8 = arg0;
}

s32 func_00001C40(void) {
    return D_000203E8;
}

s32 func_00001C4C(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_000203F8;
    D_000203F8 = arg0;
    return temp_v0;
}

s32 func_00001C5C(void) {
    return D_000203F8;
}

s32 func_00001C68(struct Unk_func_00001C68_0 *arg0) {
    s32 var_a1;
    struct Unk_func_00001C68_temp_a0 *temp_a0;

    var_a1 = 0;
    if (func_000022DC() != 0) {
        temp_a0 = D_000203F4->unk34;
        if (temp_a0 != NULL) {
            var_a1 = 1;
            arg0->unk0 = (s32) temp_a0->unk0;
            arg0->unk4 = (s32) temp_a0->unk4;
            arg0->unk8 = (s32) temp_a0->unk8;
        }
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001CC8);

void func_00001D60(s32 arg0) {
    D_000203FC = arg0;
}

s32 func_00001D6C(void) {
    return D_000203FC;
}

s32 func_00001D78(s32 arg0, s32 *arg1) {
    s32 var_a2;

    var_a2 = 0;
    if (((D_00020400 == NULL) | (arg1 == NULL)) == 0) {
        if (arg0 == 0x11) {
            var_a2 = 1;
            *D_00020400 = *arg1;
        }
    }
    return var_a2;
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001DB4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001DF8);

s32 func_00001E44(void) {
    return D_0002040C;
}

s32 func_00001E50(void) {
    return D_00020410;
}

s32 func_00001E5C(void) {
    return D_00020414;
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001E68);

void func_00001EC4(s32 arg0) {
    D_0001F648 = arg0;
}

s32 func_00001ED0(void) {
    return D_0001F648;
}
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B2C8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B2E4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B304);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B324);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B340);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B35C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B380);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B3A0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B3C4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B3E4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B40C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B438);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B458);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B480);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B4A0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B4C0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B4E8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B514);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B540);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B564);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B58C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B5AC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B5CC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B5F0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B614);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B63C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B668);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B690);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B6B4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B6D4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B6F8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B718);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B734);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B758);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B778);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B794);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B7B0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B7D0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B7EC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B80C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B82C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B84C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B86C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B888);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B8A8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B8C8);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B8E4);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B900);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B924);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B94C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B970);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B994);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B9B4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B9D0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001B9F8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BA20);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BA40);

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011040);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BA5C);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BA7C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BA98);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BAB4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BAD8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BAFC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BB18);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BB34);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BB50);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BB70);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BB90);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BBAC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BBC4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BBE0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BC00);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BC20);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BC40);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BC60);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BC80);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BC9C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BCB8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BCD4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BCF4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BD14);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BD30);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BD50);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BD70);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BD90);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BDB0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BDCC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BDEC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BE0C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BE2C);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BE48);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BE64);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BE80);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BEA0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BEBC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BEDC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BEF8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BF18);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BF34);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BF54);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BF7C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BFA4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BFCC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001BFF8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C014);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C034);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C05C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C084);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C0A8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C0CC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C0F4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C120);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C148);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C170);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C198);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C1C4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C1E0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C200);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C220);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C23C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C258);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C278);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C298);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C2B8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C2D8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C2F4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C314);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C334);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C350);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C370);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C38C);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C3B0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C3CC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C3EC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C40C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C430);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C450);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C46C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C488);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C4A4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C4C4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C4E4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C50C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C530);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C560);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C58C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C5B8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C5E0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C604);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C634);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C660);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C68C);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C6B8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C6D8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C6F4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C710);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C72C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C74C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C770);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C790);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C7AC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C7CC);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C7F0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C810);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C830);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C84C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C868);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C888);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C8A8);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C8D0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C8F0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C918);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C938);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C960);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C984);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C9B0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C9D8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001C9F8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CA1C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CA40);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CA5C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CA84);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CA9C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CAC0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CAE4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CB08);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CB2C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CB4C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CB70);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CB88);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CBA0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CBAC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CBC4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CBDC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CBEC);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CC08);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CC24);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CC38);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CC50);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CC64);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CC78);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CC90);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CCA4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CCB8);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CCC8);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000540);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000738);
#else
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001EDC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000020A0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00002130);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000021E0);

s32 func_000022CC(void) {
    return D_000203F0 & 1;
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000022DC);

s32 func_000022EC(void) {
    return __builtin_allegrex_ext(D_000203F0, 1, 1);
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000022FC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00002320);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000023EC);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000024FC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000025C8);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000008B4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000090C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000A10);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000A20);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000AA4);
#else
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00002608);

s32 func_00002650(void) {
    return D_00020424;
}

void func_0000265C(s32 arg0) {
    D_00020424 = arg0;
}

void func_00002668(s8 arg0) {
    D_00020418 = arg0;
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00002674);

void func_00002680(s8 arg0) {
    D_0002041A = arg0;
}

u8 func_0000268C(void) {
    return (u8) D_0002041A;
}

void func_00002698(s8 arg0) {
    D_00020440 = arg0;
}

u8 func_000026A4(void) {
    return (u8) D_00020440;
}

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CD04);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000026B0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000294C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00002C48);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00002DAC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000030C8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00003178);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000032BC);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000B3C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000B10);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000032EC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000331C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000336C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00003408);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CE38);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CE3C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000034BC);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000354C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000035F0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000C60);
#endif

#if FW_VERSION == 150
void func_00000C60(void) {
    sceNetAdhocctlConnect(&D_00012C30);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000C80);
#endif

#if FW_VERSION == 150
void func_00000C80(void) {
    sceNetAdhocctlDisconnect();
}
#endif

#if FW_VERSION == 282
void func_0000364C(void) {
    D_00020444 = 0;
    sceNetAdhocctlConnect(&D_0002044C);
}

void func_00003674(void) {
    D_00020444 = 0;
    sceNetAdhocctlCreate(&D_0002044C);
}

void func_0000369C(void) {
    D_00020444 = 0;
    sceNetAdhocctlJoin(&D_00020458);
}

void func_000036C4(void) {
    D_00020444 = 0;
    sceNetAdhocctlScan();
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000036E4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00003734);

void func_00003960(void) {
    D_00020444 = 0;
    sceNetAdhocctlDisconnect();
}
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00003980);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000CE4);
#endif

#if FW_VERSION == 150
s32 func_00000CE4(s32 arg0) {
    s32 temp_a0;

    temp_a0 = D_00012C28 & arg0;
    if (temp_a0 != 0) {
        D_00012C28 &= ~temp_a0;
    }
    return temp_a0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000D08);
#endif

#if FW_VERSION == 150
s32 func_00000D08(void) {
    s32 temp_v0;

    temp_v0 = D_00012C2C;
    D_00012C2C = 0;
    return temp_v0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000D18);
#endif

#if FW_VERSION == 150
s32 func_00000D84(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000D8C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000D34);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000D50);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000DE0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000E2C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000E48);
#endif

#if FW_VERSION == 150
void func_00000E48(s32 arg0, void *arg1, s32 arg2) {
    if (arg1 != NULL) {
        M2C_FIELD(arg1, s32 *, 4) = arg0;
        M2C_FIELD(arg1, s32 *, 8) = 0;
        scePaf_A0ED77C4(0, func_00000E90, arg1, -1, -1, arg2);
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000E90);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00010C90);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000EC8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000FD8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000010E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000011F0);
#endif

#if FW_VERSION == 150
void func_000011F0(s32 arg0, void *arg1, s32 arg2) {
    if (arg1 != NULL) {
        M2C_FIELD(arg1, s32 *, 4) = arg0;
        M2C_FIELD(arg1, s32 *, 8) = 0;
        scePaf_A0ED77C4(0, func_00001238, arg1, -1, -1, arg2);
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001238);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000128C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000013A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000014D4);
#endif

#if FW_VERSION == 150
void func_000014D4(s32 arg0, void *arg1, s32 arg2) {
    if (arg1 != NULL) {
        M2C_FIELD(arg1, s32 *, 4) = arg0;
        M2C_FIELD(arg1, s32 *, 8) = 0;
        scePaf_A0ED77C4(0, func_0000151C, arg1, -1, -1, arg2);
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000151C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00000F18);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001088);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001850);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001878);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000018A0);
#endif

#if FW_VERSION == 150
s32 func_000018A0(void) {
    return D_00012EA0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000018AC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000018E8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000013A4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001954);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000019B0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001C08);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001A24);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000015CC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001D9C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001B98);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001C24);
#endif

#if FW_VERSION == 150
s32 func_00001C24(void) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    if (D_00013DB8 < 0) {
        temp_v0 = sceNetApctl_lib_7CFAB990(&func_00001D9C, 0);
        var_v1 = temp_v0;
        if (temp_v0 >= 0) {
            D_00013DB8 = temp_v0;
            var_v1 = 0;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001C7C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001CD0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001CFC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001D28);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001D54);
#else
s32 func_000039C8(s32 arg0) {
    s32 temp_a0;

    temp_a0 = D_00020444 & arg0;
    if (temp_a0 != 0) {
        D_00020444 &= ~temp_a0;
    }
    return temp_a0;
}

s32 func_000039EC(void) {
    s32 temp_v0;

    temp_v0 = D_00020448;
    D_00020448 = 0;
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000039FC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00003C54);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00003CF4);

s32 func_00003D8C(s32 arg0) {
    s32 temp_s0;
    s32 var_v0;

    if (func_00002674() != 0) {
        var_v0 = 0x80110481;
    } else {
        sceKernelClearEventFlag(D_00020420, -2U);
        D_000204C8 = 0;
        temp_s0 = sceNetApctlConnect(arg0);
        sceKernelSetEventFlag(D_00020420, 1U);
        var_v0 = temp_s0;
    }
    return var_v0;
}

s32 func_00003E08(void) {
    s32 temp_s0;
    s32 var_v0;

    if (func_00002674() != 0) {
        var_v0 = 0x80110483;
    } else {
        sceKernelClearEventFlag(D_00020420, -2U);
        D_000204C8 = 0;
        temp_s0 = sceNetApctlDisconnect();
        sceKernelSetEventFlag(D_00020420, 1U);
        var_v0 = temp_s0;
    }
    return var_v0;
}

s32 func_00003E74(s32 arg0) {
    s32 temp_s0;
    s32 var_v0;

    if (func_00002674() != 0) {
        var_v0 = 0x80410A0A;
    } else {
        sceKernelClearEventFlag(D_00020420, -2U);
        temp_s0 = sceNetApctlGetState(arg0);
        sceKernelSetEventFlag(D_00020420, 1U);
        var_v0 = temp_s0;
    }
    return var_v0;
}

s32 func_00003EE8(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 var_v0;

    if (func_00002674() != 0) {
        var_v0 = 0x80410A0A;
    } else {
        sceKernelClearEventFlag(D_00020420, -2U);
        temp_s0 = sceNetApctlGetInfo(arg0, arg1);
        sceKernelSetEventFlag(D_00020420, 1U);
        var_v0 = temp_s0;
    }
    return var_v0;
}

s32 func_00003F6C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 temp_s0;
    s32 var_v0;

    if (func_00002674() != 0) {
        var_v0 = 0x80410A0A;
    } else {
        sceKernelClearEventFlag(D_00020420, -2U);
        temp_s0 = sceVshNetconfRaku_42C68F08(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
        sceKernelSetEventFlag(D_00020420, 1U);
        var_v0 = temp_s0;
    }
    return var_v0;
}

s32 func_00004040(s32 arg0) {
    s32 temp_s0;
    s32 var_v0;

    if (func_00002674() != 0) {
        var_v0 = 0x80410A0A;
    } else {
        sceKernelClearEventFlag(D_00020420, -2U);
        temp_s0 = sceVshNetconfRaku_F3AF9DD1(arg0);
        sceKernelSetEventFlag(D_00020420, 1U);
        var_v0 = temp_s0;
    }
    return var_v0;
}

s32 func_000040B4(s32 arg0) {
    s32 temp_s0;
    s32 var_v0;

    if (func_00002674() != 0) {
        var_v0 = 0x80410A0A;
    } else {
        sceKernelClearEventFlag(D_00020420, -2U);
        temp_s0 = sceVshNetconfRaku_D030086D(arg0);
        sceKernelSetEventFlag(D_00020420, 1U);
        var_v0 = temp_s0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004128);

s32 func_00004190(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 var_v0;

    if (func_00002674() != 0) {
        var_v0 = 0x80410A0A;
    } else {
        sceKernelClearEventFlag(D_00020420, -2U);
        temp_s0 = sceVshNetconfAoss_50DF536D(arg0, arg1, arg2);
        sceKernelSetEventFlag(D_00020420, 1U);
        var_v0 = temp_s0;
    }
    return var_v0;
}

s32 func_00004224(void) {
    s32 temp_s0;
    s32 var_v0;

    if (func_00002674() != 0) {
        var_v0 = 0x80410A0A;
    } else {
        sceKernelClearEventFlag(D_00020420, -2U);
        temp_s0 = sceVshNetconfAoss_D253B522();
        sceKernelSetEventFlag(D_00020420, 1U);
        var_v0 = temp_s0;
    }
    return var_v0;
}

s32 func_0000428C(void) {
    s32 temp_s0;
    s32 var_v0;

    if (func_00002674() != 0) {
        var_v0 = 0x80410A0A;
    } else {
        sceKernelClearEventFlag(D_00020420, -2U);
        temp_s0 = sceVshNetconfAoss_653D453F();
        sceKernelSetEventFlag(D_00020420, 1U);
        var_v0 = temp_s0;
    }
    return var_v0;
}

s32 func_000042F4(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 var_v0;

    if (func_00002674() != 0) {
        var_v0 = 0x80410A0A;
    } else {
        sceKernelClearEventFlag(D_00020420, -2U);
        temp_s0 = sceVshNetconfAoss_2AEE9D4D(arg0, arg1, arg2);
        sceKernelSetEventFlag(D_00020420, 1U);
        var_v0 = temp_s0;
    }
    return var_v0;
}

s32 func_00004388(void) {
    s32 temp_s0;
    s32 var_v0;

    if (func_00002674() != 0) {
        var_v0 = 0x80410A0A;
    } else {
        sceKernelClearEventFlag(D_00020420, -2U);
        temp_s0 = sceVshNetconfAoss_AC307152();
        sceKernelSetEventFlag(D_00020420, 1U);
        var_v0 = temp_s0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000043F0);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004484);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001DB0);
#endif

#if FW_VERSION == 150
s32 func_00001DB0(void) {
    s32 temp_v0;

    temp_v0 = D_00012EFC;
    D_00012EFC = 0;
    return temp_v0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001DC0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001E6C);
#endif

#if FW_VERSION == 150
void func_00001E6C(void) {
    D_000204C4 = 0;
}
#endif

#if FW_VERSION == 282
s32 func_000044AC(void) {
    s32 temp_v0;

    temp_v0 = D_000204CC;
    D_000204CC = 0;
    return temp_v0;
}

s32 func_000044BC(void) {
    s32 temp_s0;
    s32 var_v0;

    if (func_00002674() != 0) {
        var_v0 = 0x80110483;
    } else {
        sceKernelClearEventFlag(D_00020420, -2U);
        D_000204C8 = 0;
        temp_s0 = sceNetApctl_lib_B3CF6849();
        sceKernelSetEventFlag(D_00020420, 1U);
        var_v0 = temp_s0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004528);

void func_00004754(void) {
    D_000204C4 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004760);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001EAC);
#endif

#if FW_VERSION == 150
s32 func_00001EAC(void) {
    return D_000204C4;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001EB8);
#endif

#if FW_VERSION == 150
void func_00001EB8(void) {
    D_00012F00 = 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001EC4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001F50);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011E28);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011E2C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011E3C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011E48);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011E70);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011E7C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011EA0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011EC4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011EC8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000024F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000022C4);
#endif

#if FW_VERSION == 282
s32 func_00004794(void) {
    return D_000204C4;
}

s32 func_000047A0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 var_v0;

    if (func_00002674() != 0) {
        var_v0 = 0x80410A0A;
    } else {
        sceKernelClearEventFlag(D_00020420, -2U);
        temp_s0 = sceNetApctl_lib_96BEB231(arg0, arg1, arg2);
        sceKernelSetEventFlag(D_00020420, 1U);
        var_v0 = temp_s0;
    }
    return var_v0;
}

s32 func_00004834(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 var_v0;

    if (func_00002674() != 0) {
        var_v0 = 0x80410A0A;
    } else {
        sceKernelClearEventFlag(D_00020420, -2U);
        temp_s0 = sceNetApctl_lib_0C7FFA5C(arg0, arg1);
        sceKernelSetEventFlag(D_00020420, 1U);
        var_v0 = temp_s0;
    }
    return var_v0;
}

void func_000048B8(void) {
    D_000204D4 = 0;
}

void func_000048C4(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    sceCccUTF8toUTF16(&D_00020550, 0x100, arg0);
    func_00004950((s32) &D_00020550, arg1, arg2, arg3, arg4, arg5);
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004950);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CE68);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CE6C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CE7C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CEA4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CEB0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CEBC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CEE0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CF04);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CF08);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004C80);
#endif

#if FW_VERSION != 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004DA0);
#else
void func_00004DA0(void) {
    func_0000252C();
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00002390);
#else
void func_00004DDC(void) {
    func_00004FA8();
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004DF8);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004EC4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004F14);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000252C);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004FA8);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00002580);
#else
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004FD4);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000051E4);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00002670);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000271C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000027EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00002A24);
#endif

#if FW_VERSION == 150
void *func_00002A24(void **arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *var_a0;
    void *var_v0;
    void *var_v1;

    var_a0 = *arg0;
    var_v0 = NULL;
    if (var_a0 != NULL) {
        temp_v0 = M2C_FIELD(var_a0, void **, 4);
        if (temp_v0 != NULL) {
            var_v1 = temp_v0;
            do {
                temp_v0_2 = M2C_FIELD(var_v1, void **, 4);
                var_a0 = var_v1;
                var_v1 = temp_v0_2;
            } while (temp_v0_2 != NULL);
        }
        var_v0 = var_a0;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00002A5C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00002BD0);
#endif

#if FW_VERSION == 150
void func_00002BD0(void) {
    void *sp0;
    s32 temp_s0;

    if (!(D_000142F0 & 0x80)) {
        temp_s0 = M2C_FIELD(scePaf_5DFB5858(), s32 *, 0x90);
        sceVshCommonGui_6C81492F(&sp0, sceVshCommonGui_E9930C29(temp_s0));
        func_000032EC(&sp0);
        sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_5C161337(temp_s0));
        func_000032EC(&sp0);
        sceVshCommonGui_BAA1F762(&sp0, sceVshCommonGui_7DB9C54A(temp_s0));
        func_000032EC(&sp0);
        D_000142EC = 0;
        D_000142F0 = 0;
        if (sceVshCommonGui_A0DE7090(0) != 0) {
            D_000142F0 |= 1;
        }
        if (sceVshCommonGui_441D55D7(0) != 0) {
            D_000142F0 |= 2;
        }
        if (sceVshCommonGui_EEB86F0E(0) != 0) {
            D_000142F0 |= 8;
        }
        D_000142F0 |= 0x80;
    }
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00002F6C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00002C68);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00002C84);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00002C90);
#else
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00005290);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000536C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000054A4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000054F8);

void func_0000554C(void) {
    void *sp0;
    if (!(D_00020654 & 0x80)) {
        sceVshCommonGui_6C81492F(&sp0, sceVshCommonGui_764A5495());
        func_000032EC(&sp0);
        sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_DBEE94DC());
        func_000032EC(&sp0);
        sceVshCommonGui_BAA1F762(&sp0, sceVshCommonGui_93107A60());
        func_000032EC(&sp0);
        D_00020650 = 0;
        D_00020654 = 0;
        if (sceVshCommonGui_A0DE7090(0) != 0) {
            D_00020654 |= 1;
        }
        if (sceVshCommonGui_441D55D7(0) != 0) {
            D_00020654 |= 2;
        }
        if (sceVshCommonGui_EEB86F0E(0) != 0) {
            D_00020654 |= 8;
        }
        D_00020654 |= 0x80;
    }
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00005638);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000056A8);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00005798);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00002F20);
#endif

#if FW_VERSION == 150
void func_00002F20(void) {
    if (D_0002065C != 0) {
        if (D_000142F4 != 0) {
            sceVshCommonGui_4704D5BD(0);
        } else {
            func_00005A9C();
        }
        func_000067E0((s32) &D_0002065C, 0);
        func_0000331C((s32) &D_00020660, (s32) &D_0001CF8C);
        func_0000331C((s32) &D_0002066C, (s32) &D_0001CF8C);
    }
}
#endif

#if FW_VERSION == 282
void func_00005A14(void) {
    if (D_0002065C != 0) {
        if (D_00020658 != 0) {
            sceVshCommonGui_4704D5BD(0);
        } else {
            func_00005A9C();
        }
        func_000067E0((s32) &D_0002065C, 0);
        func_0000331C((s32) &D_00020660, (s32) &D_0001CF8C);
        func_0000331C((s32) &D_0002066C, (s32) &D_0001CF8C);
    }
}
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00005A9C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00003060);
#else
void func_00005B20(void) {
    if (sceVshCommonGui_071749CE() == 0) {

    } else {
        sceVshCommonGui_4704D5BD(0);
    }
}

void func_00005B54(void) {
    s32 temp_s0;

    temp_s0 = func_00010424();
    func_00005798();
    M2C_FIELD(temp_s0, s32 *, 0x9C) = 0;
    M2C_FIELD(temp_s0, s32 *, 0xA4) = 0;
    M2C_FIELD(temp_s0, s32 *, 0xC4) = 0;
    M2C_FIELD(temp_s0, s32 *, 0xC0) = 0;
    M2C_FIELD(temp_s0, s32 *, 0xBC) = 0;
    M2C_FIELD(temp_s0, s32 *, 0xD0) = 0;
    scePaf_F609FA81(temp_s0, &D_0001D098, 0, 0);
    func_000056A8(0);
    func_00005C24(0);
}
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00005BBC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CF8C);

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011F34);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011F54);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CF90);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CFAC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CFC4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001CFE0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D000);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D020);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D03C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D058);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D078);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D084);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D098);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D0A8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00005C24);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00005E94);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000608C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000060D4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000359C);
#endif

#if FW_VERSION == 150
void func_0000359C(void) {

}
#endif

#if FW_VERSION == 282
void func_00006108(void) {
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006110);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000061B4);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00003610);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006220);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000629C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006318);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000037E0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00003C34);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000386C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006340);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006410);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000064AC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006538);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000065FC);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006668);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00003B24);
#endif

#if FW_VERSION == 150
void func_00003B24(void) {
    func_00006668(1, 0xFFFF);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00003B44);
#endif

#if FW_VERSION == 150
void func_00003B44(void) {
    func_00006668(0, 0xFFFF);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000032EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00003B94);
#endif

#if FW_VERSION == 150
void func_00003B94(void **arg0, void **arg1) {
    *arg0 = *arg1;
    func_00006858(arg0);
}
#endif

#if FW_VERSION == 282
void func_00006780(void) {
    func_00006668(1, 0xFFFF);
}

void func_000067A0(void) {
    func_00006668(0, 0xFFFF);
}

void func_000067C0(void **arg0, void **arg1) {
    *arg0 = *arg1;
    func_00006858(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000067E0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00003C2C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000331C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006858);
#endif

#if FW_VERSION == 150
void func_00006858(void **arg0) {
    void *temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != NULL) {
        M2C_FIELD(temp_a0, s32 *, 4) = (s32) (M2C_FIELD(temp_a0, s32 *, 4) + 1);
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00003D38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006878);
#endif

#if FW_VERSION == 150
void func_00006878(void **arg0, void *arg1) {
    *arg0 = arg1;
    func_00006858(arg0);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00003E0C);
#else
void func_00006858(void **arg0) {
    struct Unk_func_00006858_temp_a0 *temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != NULL) {
        temp_a0->unk4 = (s32) (temp_a0->unk4 + 1);
    }
}

void func_00006878(void **arg0, void *arg1) {
    *arg0 = arg1;
    func_00006858(arg0);
}

void func_00006898(struct Unk_func_00006898_0 *arg0) {
    func_00005B54();
    if (func_000043F0() == 0) {
        func_000022FC();
        func_000065FC(1);
        D_00020698 = arg0->unk1D0;
        func_000193A8((s32) &D_00020698, (s32) &func_0000691C);
    } else {
        func_0001177C((s32) "msgnetconf_error_set_connecting", 0x80110405, 0, 0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000691C);

#if FW_VERSION == 150
void func_00004350(s32 arg0, void *arg1) {
    if ((u32) (M2C_FIELD(arg1, u8 *, 8) - 5) >= 2U) {

    } else {
        func_000045E8(arg0, (s32) arg1);
    }
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004388);
#endif

#if FW_VERSION == 282
void func_000069C8(s32 arg0, struct Unk_func_000069C8_1 *arg1, M2C_UNK arg2) {
    if (func_000022DC() == 0) {
        if ((u32) (arg1->unk8 - 5) >= 2U) {

        } else {
            func_00006D90(arg0, arg1, arg2);
        }
    }
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006A38);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006A50);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006ACC);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D11C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006BA4);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006D3C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006D90);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006DE8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006EC0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006FE0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000705C);

void func_000071A0(s32 arg0, struct Unk_func_000071A0_1 *arg1) {
    if ((u32) (arg1->unk8 - 5) >= 2U) {

    } else {
        func_00007294(arg0, (s32) arg1);
    }
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000071D8);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00007258);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000045E8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004640);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004710);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004828);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000048A8);

void func_000049D8(s32 arg0, void *arg1) {
    if ((u32) (M2C_FIELD(arg1, u8 *, 8) - 5) >= 2U) {

    } else {
        func_00004ACC(arg0, (s32) arg1);
    }
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004A10);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004A90);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001102C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001103C);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D1F8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D1FC);

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_000121C4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_000121C8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_000121CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004168);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000041B4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004284);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004390);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004410);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004540);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000045B8);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D200);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D204);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D208);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D20C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D228);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004ACC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004B24);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00007294);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000072EC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000734C);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D288);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D28C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000045DC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004628);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000073F0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000047B8);
#else
void func_00007508(void) {
    func_00005B54();
    if (func_00003980() == 0) {
        func_000022FC();
        func_000065FC(1);
        func_00018ED0((s32) &D_000206A4, (s32) &func_0000757C);
    } else {
        func_0001177C((s32) &D_0001D294, 0x80110405, 0, 0);
    }
}
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D294);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000757C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000048A0);
#else
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D2E4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D2F8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D314);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D32C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D340);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D350);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D364);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D384);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D390);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004E68);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_000122F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004984);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D3A4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D3BC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D3D4);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D3F8);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D41C);

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001235C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000075F4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000076BC);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000777C);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004F64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004A44);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000077DC);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000078A4);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00005160);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00007904);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000079AC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000079C8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00007A78);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00007B1C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00007BE0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00007CC4);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00007D58);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004BD4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004BEC);
#endif

#if FW_VERSION == 150
s32 func_00004BEC(void) {
    return D_000130D4;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004BF8);
#else
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00007D88);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00007DFC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00007EDC);

void func_00007F54(s8 arg0) {
    D_000206B4 = arg0;
}

u8 func_00007F60(void) {
    return (u8) D_000206B4;
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00007F6C);

s32 func_00007F84(void) {
    return D_000206B8;
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00007F90);

s32 func_00007FA8(void) {
    return D_000206BC;
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00007FB4);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008268);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000082EC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004EF0);
#else
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D6D8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D6F0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D70C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D728);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D748);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D768);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D788);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D7A8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D7C0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D7CC);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D7EC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00004FF8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000050FC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00005174);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D800);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D804);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_000113FC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011400);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011404);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011408);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001140C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011410);
#else
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008398);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008564);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008838);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000088B8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000089A8);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008A34);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008AFC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000053E4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00005414);
#else
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008B9C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008C6C);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008D44);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000054B0);
#endif

#if FW_VERSION == 150
void func_000054B0(void) {
    func_0000608C();
}
#endif

#if FW_VERSION == 282
void func_00008D84(s8 arg0) {
    D_000206D8 = arg0;
}

u8 func_00008D90(void) {
    return (u8) D_000206D8;
}

void func_00008D9C(void) {
    func_0000608C();
}
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008DB8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D858);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D870);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D884);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D8A0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008E18);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008EA8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008F48);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008FA8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009038);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000090D8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009110);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00005E30);

void func_00005E70(s32 arg0, void *arg1) {
    if ((u32) (M2C_FIELD(arg1, u8 *, 8) - 5) >= 2U) {

    } else {
        func_00005E30(arg0, (s32) arg1);
    }
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000914C);

void func_0000918C(s32 arg0, struct Unk_func_0000918C_1 *arg1, M2C_UNK arg2) {
    if (func_000022DC() == 0) {
        if ((u32) (arg1->unk8 - 5) >= 2U) {

        } else {
            func_0000914C(arg0, arg1, arg2);
        }
    }
}
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000091FC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009270);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000092E8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009324);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D920);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000093E8);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006170);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011530);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011538);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011540);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00005A98);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000094C8);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000095D4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009688);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000096C4);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011588);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D9A8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D9C4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D9C8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D9CC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D9D0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D9D4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009730);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00005D08);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000097B8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009838);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00005E40);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00005E58);
#endif

#if FW_VERSION == 150
s32 func_00005E58(void) {
    return D_000206E4;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00005E64);
#endif

#if FW_VERSION == 150
void func_00005E64(s32 arg0) {
    func_00009400(arg0 & 0xFF);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00005E80);
#endif

#if FW_VERSION == 150
void func_00005E80(void) {
    func_0000941C();
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000065A0);

void func_000065E0(s32 arg0, void *arg1) {
    if (((u32) (M2C_FIELD(arg1, u8 *, 8) - 5) < 2U) && (D_00013DC0 != 0)) {
        func_000065A0(arg0, (s32) arg1);
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00005E9C);
#endif

#if FW_VERSION == 150
void func_00005E9C(void *arg0) {
    func_00005C24(0);
    func_00002C90(0);
    func_00000490();
    sceVshCommonGui_80271F41();
    D_000130F8 = M2C_FIELD(arg0, s32 *, 0x1D0);
    func_000011F0(D_000206E4, &D_000130F8, (s32) &func_00005F00);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00005F00);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00005F7C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006014);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000A0F8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006120);
#else
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000098AC);

s32 func_000098C4(void) {
    return D_000206E4;
}

void func_000098D0(s32 arg0) {
    func_00013B24(arg0 & 0xFF);
}

void func_000098EC(void) {
    func_00013B40();
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009908);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009948);

void func_000099C8(void) {
    func_00009BD8();
}

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001D9FC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DA14);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DA28);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DA48);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006144);
#else
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DA54);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DA68);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DA80);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DA9C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DAC0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DAD8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DAF0);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_000116DC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_000116F8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001170C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011720);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011730);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00012900);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DB08);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DB1C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DB30);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DB48);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DB5C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DB70);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DB80);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DB98);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DBB0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DBC8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DBE0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DBFC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DC1C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DC30);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DC44);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DC58);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DC6C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DC80);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DC9C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DCB0);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DCCC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DCE0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DCF4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DD08);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DD1C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DD30);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DD44);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DD58);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DD70);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DD88);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DD94);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DDA8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DDBC);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DDD0);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DDE4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DDF8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DE0C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DE10);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DE30);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DE50);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DE70);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DE84);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DE94);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DEAC);

#if FW_VERSION != 150
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DEC0);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DED4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DEE8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DEFC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DF10);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DF2C);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001DF50);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011994);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011998);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001199C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_000119A0);
#else
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000099E4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009B64);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009BD8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009D18);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009DBC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009E7C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009F08);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009F88);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000A020);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000A0F8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000A128);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000A170);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000A1F8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000A2E8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000A368);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006434);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006458);
#endif

#if FW_VERSION == 150
void func_00006458(void) {
    func_00005C24(3);
    func_00002C90(5);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000647C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000AB54);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000653C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006D54);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000065C4);
#else
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000A464);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000A628);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000A6C0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000A7E8);

void func_0000AB30(void) {
    func_00005C24(3);
    func_000056A8(0x14);
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000AB54);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000ABB0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000AC18);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000AC90);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000AD80);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000AE00);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006FCC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000067E0_v100);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000068D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006964);
#endif

#if FW_VERSION == 150
void func_00006964(void *arg0) {
    void **temp_v0;

    temp_v0 = scePaf_72514A05(M2C_FIELD(arg0, s32 *, 0x1D0), &D_0001DAF0, 0);
    if (temp_v0 != NULL) {
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK), 0xB8)(temp_v0, 0, 0);
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000069AC);
#endif

#if FW_VERSION == 150
void func_000069AC(void *arg0) {
    void **temp_v0;

    temp_v0 = scePaf_72514A05(M2C_FIELD(arg0, s32 *, 0x1D0), &D_00011730, 0);
    if (temp_v0 != NULL) {
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK), 0xB8)(temp_v0, 0, 0);
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000069F4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006A18);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006AE4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006B60);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006BE4);
#else
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000AE78);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000B078);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000B154);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000B24C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000B568);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000B684);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000B7FC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000B82C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000B874);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00006D20);
#endif

#if FW_VERSION == 150
void func_00006D20(s32 arg0, void *arg1) {
    func_0000A7DC(arg0, (M2C_FIELD(arg1, s32 *, 0xC) << 0x10) | 0xC8);
}
#endif

#if FW_VERSION == 282
void func_0000B920(s32 arg0, struct Unk_func_0000B920_1 *arg1) {
    func_00015300(arg0, (arg1->unkC << 0x10) | 0xC8);
}
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000B944);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000B9C8);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000BAD0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000BB00);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000BB48);

void func_0000BBD0(s32 arg0, struct Unk_func_0000BBD0_1 *arg1) {
    func_000153C0(arg0, (arg1->unkC << 0x10) | 0xC8);
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000BBF4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000BC78);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000BD9C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000BE2C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000BE74);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000BEE8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000C03C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000C0EC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000C214);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000C2A8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000C3A0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000C3D8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000C418);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000C4A0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000C544);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000C5E4);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000C610);
#else
void func_0000C610(void) {
    func_00010494((s32) &D_0001DD88);
    func_0000C3A0();
    D_0001FFE8 = 1;
}
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000C644);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00007704);
#endif

#if FW_VERSION == 150
void func_00007704(s32 arg0) {
    func_0000C544(arg0, 9);
    func_0000C3A0();
    D_00013DC0 = 1;
}
#endif

#if FW_VERSION == 282
void func_0000C6B0(s32 arg0) {
    func_0000C544(arg0, 9);
    func_0000C3A0();
    D_0001FFE8 = 1;
}
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000C6E0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00007794);
#endif

#if FW_VERSION == 150
void func_00007794(s32 arg0) {
    func_0000C544(arg0, 0xA);
    func_0000C3A0();
    D_00013DC0 = 1;
}
#endif

#if FW_VERSION == 282
void func_0000C74C(s32 arg0) {
    func_0000C544(arg0, 0xA);
    func_0000C3A0();
    D_0001FFE8 = 1;
}
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000C77C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000C7B4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000C7F4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000C87C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000C8A8);
#else
void func_0000C8A8(void) {
    func_00010494((s32) &D_0001DD88);
    func_0000C77C();
    D_0001FFE8 = 1;
}
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000C8DC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00007940);
#endif

#if FW_VERSION == 150
void func_00007940(s32 arg0) {
    func_0000C544(arg0, 5);
    func_0000C77C();
    D_00013DC0 = 1;
}
#endif

#if FW_VERSION == 282
void func_0000C948(s32 arg0) {
    func_0000C544(arg0, 5);
    func_0000C77C();
    D_0001FFE8 = 1;
}
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000C978);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000079D0);
#endif

#if FW_VERSION == 150
void func_000079D0(s32 arg0) {
    func_0000C544(arg0, 6);
    func_0000C77C();
    D_00013DC0 = 1;
}
#endif

#if FW_VERSION == 282
void func_0000C9E4(s32 arg0) {
    func_0000C544(arg0, 6);
    func_0000C77C();
    D_0001FFE8 = 1;
}
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000CA14);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00007A60);
#endif

#if FW_VERSION == 150
void func_00007A60(s32 arg0) {
    func_0000C544(arg0, 7);
    func_0000C77C();
    D_00013DC0 = 1;
}
#endif

#if FW_VERSION == 282
void func_0000CA80(s32 arg0) {
    func_0000C544(arg0, 7);
    func_0000C77C();
    D_0001FFE8 = 1;
}
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000CAB0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00007AF0);
#endif

#if FW_VERSION == 150
void func_00007AF0(s32 arg0) {
    func_0000C544(arg0, 9);
    func_0000C77C();
    D_00013DC0 = 1;
}
#endif

#if FW_VERSION == 282
void func_0000CB1C(s32 arg0) {
    func_0000C544(arg0, 9);
    func_0000C77C();
    D_0001FFE8 = 1;
}
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000CB4C);

#if FW_VERSION == 282
void func_0000CBB8(s32 arg0) {
    func_0000C544(arg0, 0xA);
    func_0000C77C();
    D_0001FFE8 = 1;
}
#endif

#if FW_VERSION != 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000CBE8);
#else
void func_0000CBE8(s32 arg0) {
    func_0000C544(arg0, 0xA);
    func_0000C77C();
    D_00013DC0 = 1;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00007BA4);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000CC20);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000085C4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000CC7C);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000CCE4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000CD6C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000CE74);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000CF60);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000CFE0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D060);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D0F0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D1E4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D240);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D2B0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D328);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D430);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D544);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D5C8);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008F9C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D640);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D6D8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D714);

#if FW_VERSION != 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D78C);
#else
void func_0000D78C(s32 arg0) {
    s32 sp10;
    void **temp_v0;

    scePaf_533F3856(&sp10, func_0000D230((s32) &D_0001DE84, -1), 0, 0, 0, 0, 0, 0, 0, 0, 0);
    temp_v0 = scePaf_72514A05(arg0, &D_0001DE94, 0);
    M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK), 0x6C)(temp_v0, 0xF, 0x20);
    M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32 *, M2C_UNK), 0xB0)(temp_v0, &sp10, 0);
    func_000032EC((s32) &sp10);
}
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D838);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D880);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000086DC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000871C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D8D0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D9AC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000DAC4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000DAFC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000DB58);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000DBC0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000DC48);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000DD50);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000DE3C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000DEBC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000DF3C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000E01C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000E0E8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000E1F4);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000E3B8);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009278);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000092E0);

void func_000093A4(void) {
    if (M2C_VFIELD(&D_0001437C, s32, 0x1C) != 0) {
        M2C_VFIELD(&D_0001437C, s32, 0x1C) = 0;
    }
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000093C0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00011718);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009458);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008860);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008914);
#else
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000E440);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000E4A8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000E61C);

void func_0000E628(void) {
    scePaf_5FAC9869();
}

void func_0000E644(void) {
    scePaf_545FE2DA();
}

void func_0000E660(s8 arg0) {
    D_00020704 = arg0;
}

u8 func_0000E66C(void) {
    return (u8) D_00020704;
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000E678);

void func_0000E6E4(void) {
    s32 temp_s0;

    temp_s0 = D_00020708;
    if (temp_s0 != 0) {
        scePaf_4612DB4B(temp_s0);
        scePaf_4E67BB08(temp_s0);
        D_00020708 = 0;
    }
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000E730);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000E7DC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E270);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E294);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000E934);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E358);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000EC48);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E388);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000ECC0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000EED8);

void func_0000EF50(void) {
    func_00004128();
}

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E3D0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E400);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E418);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E43C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000089C0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008A40);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008A58);
#endif

#if FW_VERSION == 150
s32 func_00008A58(void) {
    return D_0001311C;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008A64);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008B60);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E458);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008B9C);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E468);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008BEC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008D1C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008DBC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008DEC);
#endif

#if FW_VERSION == 150
s32 func_00008DEC(void) {
    return D_00013150;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008DF8);
#endif

#if FW_VERSION == 150
s32 func_00008DF8(void) {
    return D_00013154;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008E04);
#endif

#if FW_VERSION == 150
s32 func_00008E04(void) {
    return D_00013158;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008E10);
#endif

#if FW_VERSION == 150
s32 func_00008E10(void) {
    return D_0001315C;
}

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00012CF8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008E1C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008E74);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008ECC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008F24);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008F7C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008FD4);
#endif

#if FW_VERSION == 150
void func_00008FD4(void) {

}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00008FDC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009010);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009070);
#endif

#if FW_VERSION == 150
void func_00009070(void) {
    func_00002C90(3);
}

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00012D74);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E488);

#if FW_VERSION != 150
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E4AC);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E4C4);

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00012DB8);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E4E8);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E4FC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E500);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E504);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E508);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E50C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E510);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E514);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E518);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E51C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E520);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E524);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E528);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E52C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E530);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000908C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009D70);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009DF4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009110_v100);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009194);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000091FC_v100);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009280);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000092D8);
#endif

#if FW_VERSION == 150
void func_000092D8(void *arg0) {
    s32 temp_a0;

    func_00000490();
    sceVshCommonGui_80271F41();
    func_00002C90(0);
    temp_a0 = func_00008A58();
    D_00013160 = M2C_FIELD(arg0, s32 *, 0x1D0);
    func_00000E48(temp_a0, &D_00013160, (s32) &func_00009280);
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009280);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009334);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009358);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000A034);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000093DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000093F4);
#endif

#if FW_VERSION == 150
s32 func_000093F4(void) {
    return D_0001316C;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009400);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000941C);
#endif

#if FW_VERSION == 150
s32 func_0000941C(void) {
    return (s32) D_00013170;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009428);
#endif

#if FW_VERSION == 150
void func_00009428(void *arg0) {
    func_00005C24(0);
    func_00002C90(0);
    func_00000490();
    sceVshCommonGui_80271F41();
    D_00013174 = M2C_FIELD(arg0, s32 *, 0x1D0);
    func_000014D4(func_000093F4(), &D_00013174, (s32) &func_00009490);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009490);
#endif

#if FW_VERSION == 150
void func_0000A1B0(s32 arg0, void *arg1) {
    if ((u32) (M2C_FIELD(arg1, u8 *, 8) - 5) >= 2U) {

    } else {
        func_00009550(arg0, (s32) arg1);
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000952C);
#endif

#if FW_VERSION != 150
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E534);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E538);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009550);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009594);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009640);
#endif

#if FW_VERSION == 150
void func_00009640(void) {
    func_0000608C();
}

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00012E78);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00012E7C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00012E80);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000965C);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E53C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009750);
#else
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000EF6C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000F024);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000F0A4);

void func_0000F104(void) {
}

void func_0000F10C(s8 arg0) {
    D_00020750 = arg0;
}

u8 func_0000F118(void) {
    return (u8) D_00020750;
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000F124);

void func_0000F190(void) {
    s32 temp_s0;

    temp_s0 = D_00020754;
    if (temp_s0 != 0) {
        scePaf_4612DB4B(temp_s0);
        scePaf_4E67BB08(temp_s0);
        D_00020754 = 0;
    }
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000F1DC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000F310);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000F480);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000F5F8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000F670);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000F6E8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000F750);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000F868);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000F910);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000F9DC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000FA5C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000FABC);

void func_0000FB00(void) {
}

void func_0000FB08(void) {
    func_0000FABC(1, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000FB28);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000FC0C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000FC50);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000FD30);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000FDA0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000FE28);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000FF64);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00010008);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000100AC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000101AC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00010308);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0001038C);

s32 func_000103F4(void) {
    s32 var_v0;

    var_v0 = -1;
    if (D_000207A0 != 0) {
        var_v0 = D_000207B4;
    }
    return var_v0;
}

s32 func_00010414(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_000207B4;
    D_000207B4 = arg0;
    return temp_v0;
}

s32 func_00010424(void) {
    return D_000207A0;
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00010430);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00010450);

void func_00010494(s32 arg0) {
    s32 temp_v0;

    if (func_00002674() != 0) {

    } else {
        temp_v0 = func_00010430();
        if (temp_v0 != 0) {
            scePaf_49CE42F7(temp_v0, arg0);
        }
    }
}
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000104E4);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000A540);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000A5B4);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011CD0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011CE8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011CF8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011D08);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011D20);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011D38);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00012F60);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00012F80);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011D5C);
#else
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00010514);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000105AC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000107AC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000109D8);

void func_00010B08(void) {
    func_0000FF64();
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00010B24);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00010BA4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00010BF4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00010C74);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00010D54);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00010DA8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00010E40);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00010E98);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00010F50);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00010FA0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00011020);

void func_000110B0(void) {
    func_00011020(1, 0xFFFF);
}

void func_000110D0(void) {
    func_00011020(0, 0xFFFF);
}

void func_000110F0(struct Unk_func_000110F0_0 *arg0, s32 arg1) {
    if (arg0->unk8 >= arg1) {

    } else {
        func_000112B4((s32) arg0, arg1);
    }
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00011124);

void func_000111AC(struct Unk_func_000111AC_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    func_000032BC((arg0->unk0 + (arg0->unk4 * 0xC)) - 0xC);
    temp_v1 = arg0->unk4 - 1;
    temp_v0 = arg0->unk8;
    arg0->unk4 = temp_v1;
    if (temp_v1 >= (temp_v0 - 0x14)) {

    } else {
        func_000112B4((s32) arg0, temp_v0 - 0xA);
    }
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00011220);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000112B4);

void func_000113D8(void) {
}

void func_000113E0(struct Unk_func_000113E0_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000113F0);

void func_0001146C(void) {
    if (D_000207F0.unk1C != 0) {
        D_000207F0.unk1C = 0;
    }
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00011488);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00011520);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000116C8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00011718);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0001177C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000117E4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0001186C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00011B90);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00011C78);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00011D0C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00011D94);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E60C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E610);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E614);

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00012FB8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00012FBC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00012FC0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00012FC4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00012FC8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009868);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000098D0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009A48);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009BE0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009CE8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009D48);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009E30);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009E88);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00009FE0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000A048);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000A090);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000A0A8);
#endif

#if FW_VERSION == 150
s32 func_0000A0A8(void) {
    return D_00013184;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000A0B4);
#endif

#if FW_VERSION == 150
void func_0000A0B4(void *arg0) {
    func_00005C24(0);
    func_00002C90(0);
    func_00000490();
    sceVshCommonGui_80271F41();
    D_00013188 = M2C_FIELD(arg0, s32 *, 0x1D0);
    func_000011F0(D_00013184, &D_00013188, (s32) &func_0000A118);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000A118);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000A19C);
#endif

#if FW_VERSION == 150
void func_0000A19C(void) {
    func_00005C24(0);
    func_00002C90(2);
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000AF08);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E618);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E62C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E644);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E654);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E66C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00011FB8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0001209C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000121A8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00012270);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00012330);

s32 func_00012348(void) {
    return D_00020818;
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00012354);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00012450);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E6FC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0001248C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E724);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E738);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00012530);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00012694);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000126EC);

s32 func_0001272C(void) {
    return D_00020858 == 4;
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00012740);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000127F8);

s32 func_00012828(void) {
    return D_0002084C;
}

s32 func_00012834(void) {
    return D_00020850;
}

s32 func_00012840(void) {
    return D_00020854;
}

s32 func_0001284C(void) {
    return D_00020858;
}

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E764);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00012858);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000128C8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00012938);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000129A8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00012A18);

void func_00012A70(void) {
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00012A78);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00012ABC);

void func_00012B1C(void) {
    func_000056A8(0);
}

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E7E0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E7FC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E810);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E824);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E83C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E850);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E854);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E858);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E85C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E860);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E864);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E868);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E86C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E870);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E874);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00012B38);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00012BBC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00012C3C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00012CBC);

void func_00012D34(struct Unk_func_00012D34_0 *arg0) {
    s32 temp_a0;

    func_000022FC();
    func_000065FC(1);
    func_000056A8(0);
    temp_a0 = func_00012348();
    D_0002085C = arg0->unk1D0;
    func_00000314(temp_a0, &D_0002085C, (s32) &func_00012D90);
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00012D90);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00012E08);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00012F0C);

void func_00012F30(s8 arg0) {
    D_00020868 = arg0;
}

u8 func_00012F3C(void) {
    return (u8) D_00020868;
}

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E88C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E8A8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E8C4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E8DC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E8F8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E918);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E938);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E958);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E978);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E998);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E9B0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E9BC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E9DC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001E9F8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00012F48);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000131A0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00013464);

void func_000134E4(struct Unk_func_000134E4_0 *arg0) {
    if (func_000043F0() == 0) {
        func_000022FC();
        func_000065FC(1);
        D_0002087C = arg0->unk1D0;
        func_000193A8((s32) &D_0002087C, (s32) &func_00013560);
    } else {
        func_0001177C((s32) &D_0001E8F8, 0x80110405, 0, 0);
    }
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00013560);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0001360C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000136FC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0001379C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00013864);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00013904);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000139D4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00013AAC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00013B00);

s32 func_00013B18(void) {
    return D_00020888;
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00013B24);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00013B40);

void func_00013B4C(struct Unk_func_00013B4C_0 *arg0) {
    func_00005C24(0);
    func_000056A8(0);
    func_000022FC();
    func_000065FC(1);
    D_00020890 = arg0->unk1D0;
    func_00000E28(func_00013B18(), (s32) &D_00020890, (s32) &func_00013BB4);
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00013BB4);

void func_00013C5C(s32 arg0, struct Unk_func_00013C5C_1 *arg1) {
    if ((u32) (arg1->unk8 - 5) >= 2U) {

    } else {
        func_00013CD0(arg0, (s32) arg1);
    }
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00013C94);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00013CD0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00013D20);

void func_00013DD8(s8 arg0) {
    D_000208A0 = arg0;
}

u8 func_00013DE4(void) {
    return (u8) D_000208A0;
}

void func_00013DF0(void) {
    func_0000608C();
}

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EAA0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EAA4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EAA8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00013E0C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EAC4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00013ED0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00013FF4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00014044);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00014074);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000140F0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00014118);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00014290);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00014610);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0001474C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000147AC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00014804);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00014998);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EC34);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EC38);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EC3C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EC40);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EC44);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EC48);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EC4C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EC50);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EC54);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EC58);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EC5C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EC60);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EC64);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EC68);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EC6C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EC70);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EC74);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00014A10);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00014A68);

s32 func_00014A80(void) {
    return D_000208A4;
}

void func_00014A8C(struct Unk_func_00014A8C_0 *arg0) {
    func_00005C24(0);
    func_000056A8(0);
    func_000022FC();
    func_000065FC(1);
    D_000208A8 = arg0->unk1D0;
    func_00000784(D_000208A4, &D_000208A8, (s32) &func_00014AF0);
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00014AF0);

void func_00014B78(void) {
    func_00005C24(0);
    func_000056A8(2);
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00014B9C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001ECBC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001ECD4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001ECE4);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001ECF8);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00014C10);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00015100);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000151C4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00015220);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00015300);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000153C0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000154C4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000155AC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00015694);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000157AC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000158C4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000159DC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00015AE4);
#endif

#if FW_VERSION != 150
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EF10);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EF20);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EF34);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EF48);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00015C14);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00015CF4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00015DDC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00015EBC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00015F9C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00016080);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0001616C);

void func_00016250(s8 arg0) {
    D_000208BC = arg0;
}

u8 func_0001625C(void) {
    return (u8) D_000208BC;
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00016268);

s32 func_00016280(void) {
    return D_000208C0;
}

void func_0001628C(s32 arg0) {
    D_000208B4 = arg0;
}

s32 func_00016298(void) {
    return D_000208B4;
}

void func_000162A4(M2C_UNK *arg0) {
    if (arg0 != NULL) {
        D_0001FFEC = arg0;
        return;
    }
    D_0001FFEC = &func_00017788;
}

s32 func_000162C8(void) {
    return D_0001FFEC;
}

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EFC8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EFCC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EFD0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EFD4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EFD8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EFDC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001EFE0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000162D4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00016384);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F040);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00016400);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F078);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F090);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F0AC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F0C0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F0D0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F0E4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F0F8);
#endif

#if FW_VERSION != 150
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F118);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F130);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F14C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F160);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011EFC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011F14);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011F2C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011F40);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011F54);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011F64);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011F74);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011F88);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011F9C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011FB8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011FC8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000A1C0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000A228);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000A600);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000A6C4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000A720);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000A7DC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000A8A0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000A98C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000AA78);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000AB94);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000ACB0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000ADCC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000AEE4);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_000131C0_v150);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011F88);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00011F9C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000B018);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000B0FC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000B1E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000B2CC);
#endif

#if FW_VERSION == 150
void func_0000B2CC(s32 arg0) {
    D_00013194 = arg0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000B2D8);
#endif

#if FW_VERSION == 150
s32 func_0000B2D8(void) {
    return D_00013194;
}

void func_0000C038(M2C_UNK *arg0) {
    if (arg0 != NULL) {
        D_00013DCC = arg0;
        return;
    }
    D_00013DCC = &func_00017788;
}

s32 func_0000C05C(void) {
    return D_00013DCC;
}

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00013214);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00013218);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001321C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00013220_v150);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00013224_v150);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00013228);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001322C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000B2E4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000C0D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000B34C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000B370);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00012030);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000C14C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00012048);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_000132C8);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00012060);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00012070);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00012084);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00012098);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_000120B0);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_000120CC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_000120E4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_000120F8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00012114);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F174);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F18C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F1A4);

#if FW_VERSION != 150
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F1BC);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F1D8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F1F8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F208);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F218);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F230);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F248);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F258);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F26C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F28C);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F2A8);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F2C0);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F2D0);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F2E8);

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001346C);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F2EC);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F2F0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F2F4);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000B478);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000B500);
#else
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00016524);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0001662C);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00016B70);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00016C30);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000C6D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000B8DC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000B950);
#else
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00016C8C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00016D44);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00016E6C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00016EC0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00016F14);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00016F70);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00016FCC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00017028);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00017084);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000170E0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000171C0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000172A8);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00017388);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000174C0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000C02C);
#else
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00017588);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000176B0);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00017788);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000C0F0);
#else
void func_000177F8(s8 arg0) {
    D_00020960 = arg0;
}

u8 func_00017804(void) {
    return (u8) D_00020960;
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00017810);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00017828);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000C114);
#else
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F31C);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F338);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00017834);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F368);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000C21C);
#else
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F384);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00017A1C);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F42C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F438);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F454);

#if FW_VERSION != 150
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F468);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F484);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F498);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F4AC);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F4C4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F4F0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F500);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F52C);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F534);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F544);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F550);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F564);

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_00013574);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F580);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F5C0);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F5C4);

INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F5C8);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/netconf_plugin", D_0001F5CC);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00017D6C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00017DEC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00017EDC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00017F68);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00018030);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000C604);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000C6C0);
#else
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000180C4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00018248);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000183E4);

#if FW_VERSION == 150
void func_0000D674(void) {

}
#endif

#if FW_VERSION == 282
void func_00018448(void) {
    if ((D_0001FFF4 >= 0) && (D_0001FFF0 >= 0)) {
        func_00019CCC(D_0001FFF4);
        func_00019C50(D_0001FFF4);
        D_0001FFF4 = -1;
        func_00019B3C(D_0001FFF0);
        D_0001FFF0 = -1;
        func_000197B4();
        D_00020978 = 2;
    }
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000184C0);

void func_00018530(void) {
    scePaf_6B1E90C7();
    func_00005C24(0);
    func_000056A8(0);
    scePaf_A0ED77C4(0, func_00018584, &D_0001FFF8, -1, -1, (s32) &func_00018638);
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00018584);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00018638);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00018928);

void func_00018974(s32 arg0) {
    struct Unk_func_00018974_temp_v0 *temp_v0;

    func_00002698(1);
    temp_v0 = scePaf_338C3774(arg0, 1);
    if (temp_v0 != NULL) {
        temp_v0->unk4(&func_00018928, 0);
    }
    func_000065FC(0);
    func_00002320();
    func_000116C8();
    func_00005B20();
    scePaf_66907719();
    sceKernelPowerUnlock(0);
}

void func_000189F4(void) {
    s32 temp_s0;

    func_00002698(0);
    temp_s0 = D_0002097C;
    if (temp_s0 == 0) {

    } else {
        scePaf_4612DB4B(temp_s0);
        scePaf_4E67BB08(temp_s0);
    }
    D_0002097C = 0;
    func_000100AC((s32) &D_0001F384);
}

void func_00018A58(void) {
    func_00016268(func_00017828());
}
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00018A7C);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D774);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00018B74);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00018BBC);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D838_v150);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000C97C);
#else
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00018C50);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00018CD4);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00018DA8);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000CA18);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000CAFC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000CB30);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000DB5C_v150);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000CC04);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000CC68);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000CCF0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000CDF8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000CE80);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000CF24);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D024);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D180);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D204);
#endif

#if FW_VERSION == 150
s32 func_0000D204(void) {
    return D_000131C0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D210);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D230);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D284);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D2BC);
#endif

#if FW_VERSION == 150
s32 func_0000D2BC(void) {
    s32 var_v0;

    var_v0 = -1;
    if (D_000131C0 != 0) {
        var_v0 = D_000131D4;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D2DC);
#endif

#if FW_VERSION == 150
s32 func_0000D2DC(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_000131D4;
    D_000131D4 = arg0;
    return temp_v0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D2EC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D31C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D3B4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D5B4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D7E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D910);
#endif

#if FW_VERSION == 150
void func_0000D910(void) {
    func_0000CDF8();
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D92C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D9AC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000D9FC);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000DA7C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000DB5C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000DBB0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000DC48);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000DCA0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000DD58);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000DDA8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000DE28);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000DEB8);
#endif

#if FW_VERSION == 150
void func_0000DEB8(void) {
    func_0000DE28(1, 0xFFFF);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000DED8);
#endif

#if FW_VERSION == 150
void func_0000DED8(void) {
    func_0000DE28(0, 0xFFFF);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000DEF8);
#endif

#if FW_VERSION == 150
void func_0000DEF8(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) >= arg1) {

    } else {
        func_0000E0BC((s32) arg0, arg1);
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000DF2C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000DFB4);
#endif

#if FW_VERSION == 150
void func_0000DFB4(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    func_000032BC((M2C_FIELD(arg0, s32 *, 0) + (M2C_FIELD(arg0, s32 *, 4) * 0xC)) - 0xC);
    temp_v1 = M2C_FIELD(arg0, s32 *, 4) - 1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 4) = temp_v1;
    if (temp_v1 >= (temp_v0 - 0x14)) {

    } else {
        func_0000E0BC((s32) arg0, temp_v0 - 0xA);
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000E028);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000E0BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000E1E0);
#endif

#if FW_VERSION == 150
void func_0000E1E0(void) {

}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000E1E8);
#endif

#if FW_VERSION == 150
void func_0000E1E8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000E1F8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000E274);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000E2A8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00001B90);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000E378);
#else
s32 func_00018DE8(void) {
    scePaf_6829D7AF(&D_00020984, 0, 0xC);
    scePaf_6829D7AF(&D_00020980, 1, 2);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00018E28);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00018ED0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00018F10);
#else
s32 func_00018F10(struct Unk_func_00018F10_0 *arg0) {
    s32 temp_v0;

    temp_v0 = func_00018E28();
    arg0->unk4 = temp_v0;
    return (temp_v0 == 0) ? 0 : 2;
}

void func_00018F44(s32 arg0) {
    sceUtilityGetSystemParamInt(2, arg0);
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00018F64);

void func_0001901C(struct Unk_func_0001901C_0 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        arg0->unk4 = 0;
        scePaf_A0ED77C4(0, func_0001905C, arg0, -1, -1, arg1);
    }
}

s32 func_0001905C(struct Unk_func_0001905C_0 *arg0) {
    s32 temp_v0;

    temp_v0 = func_00018F64();
    arg0->unk4 = temp_v0;
    return (temp_v0 == 0) ? 0 : 2;
}
#endif

#if FW_VERSION != 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00019090);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000E580);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000E5F0);
#endif

#if FW_VERSION == 150
void func_0000E5F0(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 4) = 0;
        scePaf_A0ED77C4(0, func_0000E630, arg0, -1, -1, arg1);
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000E630);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00019090);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00019130);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000191A0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000191C8);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000E724);
#else
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000191F0);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000193A8);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000193E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000E878);
#endif

#if FW_VERSION == 150
void func_0000E878(void) {
    D_000134C8 = 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000E884);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00019488);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_00019610);
#endif

#if FW_VERSION == 150
s32 func_00019610(void) {
    return D_000134C8;
}
#endif

#if FW_VERSION == 282
s32 func_000193E4(struct Unk_func_000193E4_0 *arg0) {
    s32 temp_v0;

    temp_v0 = func_000191F0();
    arg0->unk8 = temp_v0;
    return (temp_v0 == 0) ? 0 : 2;
}

void func_00019418(void) {
    D_00020E18 = 0;
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00019424);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00019488);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000194D0);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00019538);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00019580);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000195C8);

s32 func_00019610(void) {
    return D_00020E18;
}
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0001961C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000E9C4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000EA18);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000FA1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000EA70);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000EA98);
#endif

#if FW_VERSION == 150
s32 func_0000EA98(s32 arg0) {
    s32 var_v1;

    var_v1 = 0x80000216;
    if (arg0 >= 0) {
        var_v1 = sceHttpDeleteTemplate(arg0);
    }
    return var_v1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000EAC8);
#endif

#if FW_VERSION == 150
void func_0000EAC8(s32 arg0) {
    func_0000EAEC(D_00012BE0, arg0);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000EAEC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000EB2C);
#endif

#if FW_VERSION == 150
s32 func_0000EB2C(s32 arg0) {
    s32 var_v1;

    var_v1 = 0x80000216;
    if (arg0 >= 0) {
        var_v1 = sceHttpDeleteConnection(arg0);
    }
    return var_v1;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000EB5C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000EB9C);
#endif

#if FW_VERSION == 150
s32 func_0000EB9C(s32 arg0) {
    s32 var_v1;

    var_v1 = 0x80000216;
    if (arg0 >= 0) {
        var_v1 = sceHttpDeleteRequest(arg0);
    }
    return var_v1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000EBCC);
#endif

#if FW_VERSION == 150
s32 func_0000EBCC(s32 arg0) {
    s32 var_v1;

    var_v1 = 0x80000216;
    if (arg0 >= 0) {
        var_v1 = sceHttpAbortRequest(arg0);
    }
    return var_v1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000EBFC);
#endif

#if FW_VERSION == 150
void func_0000EBFC(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 8) = 0;
        scePaf_A0ED77C4(0, func_0000EC3C, arg0, -1, -1, arg1);
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000EC3C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000EC74);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netconf_plugin", func_0000ED7C);
#endif

#if FW_VERSION == 150
s32 func_0000ED7C(s32 arg0) {
    void *sp0;
    s32 temp_v0;

    temp_v0 = sceNetGetLocalEtherAddr(&sp0);
    if (temp_v0 != 0) {

    } else {
        sceNetEtherNtostr(&sp0, arg0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/netconf_plugin", func_000196C4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000197B4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_000198AC);

s32 func_000199F8(s32 arg0) {
    s32 var_v1;

    var_v1 = 0x80410A0A;
    if (func_00002674() == 0) {
        var_v1 = 0x80000216;
        if (arg0 >= 0) {
            var_v1 = sceHttpDeleteTemplate(arg0);
        }
    }
    return var_v1;
}

s32 func_00019A48(s32 arg0) {
    s32 temp_s0;
    s32 var_v0;

    if (func_00002674() != 0) {
        var_v0 = 0x80410A0A;
    } else {
        sceKernelClearEventFlag(D_00020420, -2U);
        temp_s0 = func_00019AC4(D_0001FFFC, arg0);
        sceKernelSetEventFlag(D_00020420, 1U);
        var_v0 = temp_s0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00019AC4);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00019B3C);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00019BB8);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00019C50);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00019CCC);

void func_00019D48(struct Unk_func_00019D48_0 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        if (func_00002674() != 0) {
            arg0->unk8 = 0x80410A0A;
        } else {
            arg0->unk8 = 0;
            scePaf_A0ED77C4(0, func_00019DBC, arg0, -1, -1, arg1);
        }
    }
}

s32 func_00019DBC(void *arg0) {
    s32 temp_s0;

    sceKernelClearEventFlag(D_00020420, -2U);
    temp_s0 = func_00019E14((s32) arg0);
    sceKernelSetEventFlag(D_00020420, 1U);
    return (temp_s0 != 0) ? 0 : 2;
}

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00019E14);

INCLUDE_ASM("nonmatchings/netconf_plugin", func_00019F98);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin", func_0001A008);
