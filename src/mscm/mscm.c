/* cflags: -O2 -frename-registers */
#include "common.h"
#include "mscm_decls.h"

INCLUDE_ASM("nonmatchings/mscm", func_00000000);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_000000AC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_000000C8);
#endif

INCLUDE_RODATA("nonmatchings/mscm", D_00007120);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00000124);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_000001E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00000244);
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_4E923738);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_68C14F25);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_00000B9C);
#endif

#if FW_VERSION != 100
s32 func_00000C1C(struct Unk_func_00000C1C_0 *arg0) {
    sceSysreg_driver_18172C6A(arg0->unk4);
    sceMScm_driver_F1924A06((s32) arg0, 1);
    sceKernelDelayThread(0x186A0U);
    sceMScm_driver_F1924A06((s32) arg0, 2);
    sceKernelDelayThread(0x4E20U);
    sceSysreg_driver_D74F1D48(arg0->unk4);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/mscm", module_reboot_before);

#if FW_VERSION == 100
void func_00000930(s32 arg0) {
    s32 temp_a0;
    s32 temp_s0;

    temp_s0 = func_00004870();
    temp_a0 = temp_s0;
    do {

    } while (func_0000488C(temp_a0, arg0) == 0);
}
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_12BD8FEC);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_08A1EC6B);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_4451D813);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_5BAAB238);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_9A5CB5CC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_0000123C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_000015C8);
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_5AB92658);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00001478);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_00001804);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mscm", D_0000716C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_0D8D6A54);
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_54B3A3F1);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_0D8D6A54);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_0000179C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_000018B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00001BA0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00001D18);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00002194);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00002238);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_00001AD4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_00001BF8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_00001F10);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_00002114);
#endif

#if FW_VERSION != 100
s32 func_0000254C(s32 (*arg0)(s32, s32, s32, s32, s32), s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_s2;
    s32 temp_v0;

    temp_v0 = sceKernelGetThreadCurrentPriority();
    sceKernelChangeThreadPriority(0U, temp_v0 + 5);
    temp_s2 = arg0(arg1, arg2, arg3, arg4, arg5);
    sceKernelChangeThreadPriority(0U, temp_v0);
    return temp_s2;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_000025F0);
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_42A40895);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_CBB2BF6F);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_0128147B);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_6C8AEF0B);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_46AAC4E5);
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_907D7766);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_B01C378C);
#endif

#if FW_VERSION != 100
s32 sceMScm_driver_B01C378C(struct Unk_sceMScm_driver_B01C378C_0 *arg0) {
    sceKernelClearEventFlag(arg0->unk8->unk2C, 0U);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_2D7C40FA);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_000029F8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_00002FE0);
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_F1133DAF);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_36921225);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_EF42A4A3);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_BE455B5D);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_21183216);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00002FF0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00003020);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_00003624);
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_DE188BB6);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_18DD6E90);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_97290A44);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_B1D1C718);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_D6DB3199);
#endif

INCLUDE_ASM("nonmatchings/mscm", func_00004430);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00003E58);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00003EB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00003F48);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_000044D8);
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_AA67D87A);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_F82AF926);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_3FFE76E5);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_4FA42259);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_494FB570);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_FF6C50D8);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_34124B97);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_000047C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_0A054CDA);
#endif

#if FW_VERSION == 100
s32 func_00004870(void) {
    return sceKernelGetSystemTimeLow();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_0000488C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_00004D94);
#endif

#if FW_VERSION != 100
s32 sceMScm_driver_0A054CDA(struct Unk_sceMScm_driver_0A054CDA_0 *arg0) {
    return arg0->unk8->unk14;
}
#endif

#if FW_VERSION != 100
void func_00004E4C(void) {
    sceKernelGetSystemTimeLow();
}
#endif

#if FW_VERSION != 100
s32 func_00004E68(s32 arg0, s32 arg1) {
    u32 temp_s0;

    temp_s0 = arg1 * D_00007AF4;
    return temp_s0 < (u32) (sceKernelGetSystemTimeLow() - arg0);
}
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_E24B5D0C);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_46AAC4E5);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_00004F4C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_D6DB3199);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_00005030);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_00005088);
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_C003705D);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_4E4C3099);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_6F4F7E4C);

#if FW_VERSION == 100
void sceMScm_driver_CFD8F662(s32 arg0) {
    sceMScm_driver_AA67D87A(arg0, 4);
}
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/mscm", D_000068A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00004B70);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00004D30);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00004E50);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00004E94);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00004F60);
#endif

#if FW_VERSION != 100
void sceMScm_driver_CFD8F662(s32 arg0) {
    sceMScm_driver_AA67D87A(arg0, 4);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_00005330);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_000054C4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_00005620);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_00005658);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_00005718);
#endif

INCLUDE_ASM("nonmatchings/mscm", func_00005804);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00005094);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00005174);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_0000584C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_0000591C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_000059C0);
#endif

INCLUDE_ASM("nonmatchings/mscm", func_00005A44);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00005270);
#endif

#if FW_VERSION == 100
s32 func_000052F4(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_00005A90);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_000063B4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_0000641C);
#endif

#if FW_VERSION != 100
s32 func_00006484(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_0000648C(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00006494(struct Unk_func_00006494_0 *arg0) {
    s32 var_a0;

    var_a0 = 0x80220081;
    if (arg0->unk4 == 0) {
        var_a0 = (D_00007880 != 0) ? 0 : 0x80220083;
    }
    return var_a0;
}
#endif

#if FW_VERSION != 100
s32 func_000064C0(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_000064C8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_0000652C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_FCD92C74);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_2AD0A649);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_00006684);
#endif

#if FW_VERSION != 100
s32 func_000066DC(struct Unk_func_000066DC_0 *arg0) {
    s32 var_v0;

    var_v0 = 0x80220081;
    if (arg0 != NULL) {
        var_v0 = func_000064C8(arg0->unk4);
    }
    return var_v0;
}
#endif

#if FW_VERSION != 100
s32 func_00006704(struct Unk_func_00006704_0 *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0x80220081;
    if (arg0 != NULL) {
        var_v0 = func_0000652C(arg0->unk4, arg1);
    }
    return var_v0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_F0CC24D1);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_7B5396BA);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_000067CC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_00006800);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_00006854);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_F1924A06);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mscm", func_00006908);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mscm", D_0000719C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mscm", D_00007204);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mscm", D_0000725C);
#endif

INCLUDE_RODATA("nonmatchings/mscm", D_000072B4);

INCLUDE_RODATA("nonmatchings/mscm", D_000072BC);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mscm", D_000072D0);
#endif

INCLUDE_RODATA("nonmatchings/mscm", D_000072E4);

INCLUDE_RODATA("nonmatchings/mscm", D_000072EC);

INCLUDE_RODATA("nonmatchings/mscm", D_00007300);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/mscm", D_00006950);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_000052FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00005358);
#endif

#if FW_VERSION == 100
s32 func_000053EC(void) {
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_000053F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_000059CC);
#endif

#if FW_VERSION == 100
s32 func_000059D8(void) {
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_000059E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00005A44_v100);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00005AA8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00005AD0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00005B3C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00005B64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_F0CC24D1);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_7B5396BA);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00005C58);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00005C8C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00005CE4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_F1924A06);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_FCD92C74);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_2AD0A649);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00005E58);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00005EB0);
#endif
