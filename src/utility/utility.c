/* cflags: -O2 -frename-registers */
#include "common.h"
#include "utility_decls.h"

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00006C98);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_driver_F062AEA6);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_000000C4);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00000550);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_private_4ABA7FF9);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_private_A5168A5D);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_private_970F9C89);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_0000094C);

s32 module_start(void) {
    sceUtility_driver_F062AEA6();
    return 0;
}

s32 sceUtility_driver_20C68C34(void) {
    func_00001994();
    sceSysEventForKernel_D7D3FDCD(&D_00007BF0);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00000A4C);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00000AC4);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00000B0C);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_private_17CB4D96);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_private_EE7AC503);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_private_5FF96ED3);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_private_9C9DD5BC);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_private_4405BA38);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_private_1DFA62EF);

s32 sceUtility_private_680C0EA8(s32 arg0) {
    D_00007EA4 = arg0;
    return 0;
}

s32 sceUtility_private_B222E887(void) {
    return D_00007E9C;
}

s32 sceUtility_private_4F2206BC(void) {
    return D_00007EAC;
}

s32 sceUtility_private_EF5BC2D1(void) {
    return D_00007EB0;
}

s32 sceUtility_private_E01FE32A(void) {
    return D_00007EB4;
}

s32 sceUtility_private_5BA71568(void) {
    return D_00007EA8;
}

s32 sceUtility_private_6F923BD3(s32 arg0) {
    D_00007E90 = arg0;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_private_7635200E);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_private_3CEAE1DF);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_private_56BEDCA4);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_private_E921B59E);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_private_06AE20E5);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007020);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_0000704C);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00000E74);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_0000132C);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00001484);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_000014FC);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_0000171C);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_private_00948E27);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00001930);

s32 func_00001994(void) {
    if (D_00007EEC > 0) {
        sceKernelDeleteEventFlag(D_00007EEC);
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_000019C4);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00001A3C);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_private_DC17A878);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_private_2FBA0921);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_private_CD3C8C18);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_private_B20562D4);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_private_88682129);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_private_2FE219D7);

s32 sceUtility_private_97F922A3(s32 arg0) {
    D_00007EF4 = arg0;
    return 0;
}

s32 sceUtility_private_463EA95E(void) {
    return D_00007EF0;
}

s32 sceUtility_private_AB46A24F(void) {
    return D_00007EF8;
}

s32 sceUtility_private_4B677BA1(void) {
    return D_00007EFC;
}

s32 sceUtility_private_75FF798C(void) {
    return D_00007F00;
}

s32 sceUtility_private_9BAE7DCE(s32 arg0) {
    D_00007EE8 = arg0;
    return 0;
}

void sceUtility_private_4ACD6532(void) {
    func_00001DC8();
}

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_private_976F7805);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_private_E542E9D8);

s32 func_00001CB8(s32 arg0, s32 arg1, void *arg2) {
    s32 var_a1;
    s32 var_a3;
    s32 var_s0;
    void *var_a2;

    var_a2 = arg2;
    var_a3 = arg1 < 0x10E;
    var_a1 = 0;
    if (arg0 == 1) {
        var_s0 = 0x380000;
        if (var_a3 == 0) {
            var_a3 = M2C_FIELD(var_a2, s32 *, 0x4C);
            var_a2 = (void *) (var_a3 & 0x400);
            var_s0 = (var_a2 != NULL) ? 0x480000 : 0x380000;
        }
        KDebugForKernel_84F370BC("block size:%x\n", var_s0, (s32) var_a2, var_a3);
        var_a1 = var_s0;
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00001D1C);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00001DC8);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00001E4C);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00001EB4);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00001F5C);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00002004);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_0000207C);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_1579A159);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_64D50C56);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_000022BC);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_000023C8);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_000024A4);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00002748);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00002910);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00002B60);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00002CFC);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00002DCC);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00002E80);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00002F50);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00003004);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00003110);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_000031EC);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_000032F8);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_000033D4);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00003474);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00003520);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_0D5BC6D2);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_F64910F0);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_000035F0);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_000076A4);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_000076BC);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_000076D4);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_000076EC);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007704);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_0000771C);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_000036F8);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_000037F0);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00003890);

s32 func_000039B0(void) {
    memset(&D_00008014, 0xFF, 0x34);
    D_00008014 = 0;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_C629AF26);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_F7D8D092);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00003A78);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00003B3C);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007790);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_000077A8);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_000077C4);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_000077E4);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_000077F8);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00003C38);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00003D0C);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilityGameSharingInitStart);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilityGameSharingShutdownStart);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilityGameSharingUpdate);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilityGameSharingGetStatus);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilityNetconfInitStart);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilityNetconfShutdownStart);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilityNetconfUpdate);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilityNetconfGetStatus);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilitySavedataInitStart);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilitySavedataShutdownStart);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilitySavedataUpdate);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilitySavedataGetStatus);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilityMsgDialogInitStart);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilityMsgDialogShutdownStart);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilityMsgDialogUpdate);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilityMsgDialogGetStatus);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilityMsgDialogAbort);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilityOskInitStart);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilityOskShutdownStart);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilityOskUpdate);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilityOskGetStatus);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_DDE5389D);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_149A7895);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_4A833BA4);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_A50E5B30);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_943CBA46);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_0F3EEAAC);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_147F7C85);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_16A1A8D8);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilityInstallInitStart);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilityInstallShutdownStart);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilityInstallUpdate);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilityInstallGetStatus);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_private_04B24901);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_private_1B698F54);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_private_FD99AF0A);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_private_8FCABAB9);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilityHtmlViewerInitStart);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilityHtmlViewerShutdownStart);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilityHtmlViewerUpdate);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilityHtmlViewerGetStatus);

void sceUtility_3AD50AE7(void) {
}

void sceUtility_BC6B6296(void) {
}

void sceUtility_417BED54(void) {
}

void sceUtility_B6CEE597(void) {
}

void sceUtility_2995D020(void) {
}

void sceUtility_B62A4061(void) {
}

void sceUtility_ED0FAD38(void) {
}

void sceUtility_88BC7406(void) {
}

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilitySetSystemParamInt);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_0000782C);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007848);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007854);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_0000786C);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilityGetSystemParamInt);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00004764);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00004900);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilitySetSystemParamString);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007914);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilityGetSystemParamString);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00004A80);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilityCheckNetParam);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_netparam_internal_072DEBF2);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_netparam_internal_9CE50172);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_netparam_internal_FB0C4840);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilityGetNetParam);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_netparam_internal_FC4516F3);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtility_netparam_internal_8E8E3AA3);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", sceUtilityGetNetParamLatestID);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00004F98);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00004FFC);

s32 func_00005054(void *arg0) {
    s32 temp_v0;
    s32 var_s0;

    temp_v0 = func_000060B4();
    var_s0 = temp_v0;
    if (temp_v0 >= 0) {
        var_s0 = func_0000553C(M2C_FIELD(arg0, s32 *, 0));
    }
    func_000061C0();
    func_0000613C();
    M2C_FIELD(arg0, s32 *, 4) = var_s0;
    return var_s0;
}

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_000050AC);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00005160);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_000051DC);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00005260);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_0000535C);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_000054C8);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_0000553C);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00005590);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00005620);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00005760);

void func_000057AC(void) {
    func_00006190();
}

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_000057C8);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_0000580C);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007980);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_000079A0);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_000079AC);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_000079CC);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_000079D8);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_000079E0);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_000079EC);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_000079F4);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007A04);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007A10);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007A18);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007A28);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007A34);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007A40);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007A50);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007A5C);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007A68);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007A78);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007A8C);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007A9C);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007AA4);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007AAC);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007ABC);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007AD4);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007AE8);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007AF8);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007B00);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007B10);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007B14);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007B34);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00005888);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00005998);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00005DA4);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00005E1C);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00005E60);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00005F28);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00006044);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_000060B4);

s32 func_0000613C(void) {
    if (D_0000804C > 0) {
        sceReg_driver_39461B4D(D_00008050);
        sceReg_driver_FA8A5739(D_00008050);
        D_0000804C -= 1;
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00006190);

s32 func_000061C0(void) {
    sceReg_driver_39461B4D(D_00008050);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_000061E8);

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_0000620C);

void func_00006270(s32 arg0) {
    sceReg_driver_4CA16893(D_00008050, arg0, 0);
}

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_00006298);

void func_00006344(void) {
    D_00008054 = 0;
}

s32 func_00006350(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_00008054 != 0) {
        var_v0 = M2C_FIELD(D_00008054, s32 *, 0xC);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/utility/nonmatchings/utility", func_0000636C);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007BB4);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007BC0);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007BCC);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007BD8);

INCLUDE_RODATA("tmp/asm/282/utility/nonmatchings/utility", D_00007BE4);
