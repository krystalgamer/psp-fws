/* cflags: -O2 -frename-registers */
#include "common.h"
#include "mscm_decls.h"

INCLUDE_ASM("nonmatchings/mscm", func_00000000);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/mscm", func_000000C8);
#else
INCLUDE_ASM("nonmatchings/mscm", func_000000AC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", func_0000015C);

INCLUDE_ASM("nonmatchings/mscm", func_000001E0);

INCLUDE_ASM("nonmatchings/mscm", func_00000240);
#endif

INCLUDE_RODATA("nonmatchings/mscm", D_00007120);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/mscm", func_00000124);

INCLUDE_ASM("nonmatchings/mscm", func_000001E4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/mscm", func_0000027C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00000244);
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_4E923738);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_68C14F25);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/mscm", func_00000B9C);

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

#if FW_VERSION < 250
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

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/mscm", func_000015C8);
#else
INCLUDE_ASM("nonmatchings/mscm", func_0000123C);
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_5AB92658);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/mscm", func_00001804);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/mscm", D_000070F8);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", func_00001478);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/mscm", D_0000716C);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_0D8D6A54);
#endif

#if FW_VERSION != 250
INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_54B3A3F1);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_0D8D6A54);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_54B3A3F1);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/mscm", func_00001AD4);

INCLUDE_ASM("nonmatchings/mscm", func_00001BF8);

INCLUDE_ASM("nonmatchings/mscm", func_00001F10);

INCLUDE_ASM("nonmatchings/mscm", func_00002114);
#else
INCLUDE_ASM("nonmatchings/mscm", func_0000179C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", func_00001B88);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", func_000018B8);

INCLUDE_ASM("nonmatchings/mscm", func_00001BA0);

INCLUDE_ASM("nonmatchings/mscm", func_00001D18);

INCLUDE_ASM("nonmatchings/mscm", func_00002194);
#endif

#if FW_VERSION == 250
s32 func_00002194(s32 (*arg0)(s32, s32, s32, s32, s32), s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_s2;
    s32 temp_v0;

    temp_v0 = sceKernelGetThreadCurrentPriority();
    sceKernelChangeThreadPriority(0U, temp_v0 + 5);
    temp_s2 = arg0(arg1, arg2, arg3, arg4, arg5);
    sceKernelChangeThreadPriority(0U, temp_v0);
    return temp_s2;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", func_0000244C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00002238);
#endif

#if FW_VERSION == 282
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

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/mscm", func_000025F0);
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_42A40895);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_CBB2BF6F);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_0128147B);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_6C8AEF0B);

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_46AAC4E5);
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_907D7766);

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_B01C378C);
#else
s32 sceMScm_driver_B01C378C(struct Unk_sceMScm_driver_B01C378C_0 *arg0) {
    sceKernelClearEventFlag(arg0->unk8->unk2C, 0U);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_2D7C40FA);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mscm", func_000029F8);
#else
INCLUDE_ASM("nonmatchings/mscm", func_00002FE0);
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_F1133DAF);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_36921225);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_EF42A4A3);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_BE455B5D);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_21183216);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/mscm", func_00003628);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", func_00002FF0);

INCLUDE_ASM("nonmatchings/mscm", func_00003020);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/mscm", func_00003624);
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_DE188BB6);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_18DD6E90);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_97290A44);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_B1D1C718);

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_D6DB3199);
#endif

INCLUDE_ASM("nonmatchings/mscm", func_00004430);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/mscm", func_000044E8);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", func_00003E58);

INCLUDE_ASM("nonmatchings/mscm", func_00003EB0);

INCLUDE_ASM("nonmatchings/mscm", func_00003F48);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/mscm", func_000044D8);
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_AA67D87A);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_F82AF926);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_3FFE76E5);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_4FA42259);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_494FB570);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_FF6C50D8);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_34124B97);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/mscm", func_00004DAC);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", func_000047C0);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_0A054CDA);
#endif

#if FW_VERSION == 250
s32 sceMScm_driver_0A054CDA(struct Unk_sceMScm_driver_0A054CDA_0 *arg0) {
    return arg0->unk8->unk14;
}
#endif

#if FW_VERSION < 282
s32 func_00004870(void) {
    return sceKernelGetSystemTimeLow();
}

INCLUDE_ASM("nonmatchings/mscm", func_0000488C);
#else
INCLUDE_ASM("nonmatchings/mscm", func_00004D94);

s32 sceMScm_driver_0A054CDA(struct Unk_sceMScm_driver_0A054CDA_0 *arg0) {
    return arg0->unk8->unk14;
}

void func_00004E4C(void) {
    sceKernelGetSystemTimeLow();
}

s32 func_00004E68(s32 arg0, s32 arg1) {
    u32 temp_s0;

    temp_s0 = arg1 * D_00007AF4;
    return temp_s0 < (u32) (sceKernelGetSystemTimeLow() - arg0);
}
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_E24B5D0C);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_46AAC4E5);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/mscm", func_00004F68);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_D6DB3199);

INCLUDE_ASM("nonmatchings/mscm", func_0000504C);

INCLUDE_ASM("nonmatchings/mscm", func_000050A4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/mscm", func_00004F4C);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_D6DB3199);

INCLUDE_ASM("nonmatchings/mscm", func_00005030);

INCLUDE_ASM("nonmatchings/mscm", func_00005088);
#endif

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_C003705D);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_4E4C3099);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_6F4F7E4C);

void sceMScm_driver_CFD8F662(s32 arg0) {
    sceMScm_driver_AA67D87A(arg0, 4);
}

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/mscm", func_0000534C);

INCLUDE_ASM("nonmatchings/mscm", func_000054E0);

INCLUDE_ASM("nonmatchings/mscm", func_0000563C);

INCLUDE_ASM("nonmatchings/mscm", func_00005674);

INCLUDE_ASM("nonmatchings/mscm", func_00005734);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/mscm", D_000068A4);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", func_00004B70);

INCLUDE_ASM("nonmatchings/mscm", func_00004D30);

INCLUDE_ASM("nonmatchings/mscm", func_00004E50);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", func_0000514C);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/mscm", func_00004E94);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", func_00004F60);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/mscm", func_00005330);

INCLUDE_ASM("nonmatchings/mscm", func_000054C4);

INCLUDE_ASM("nonmatchings/mscm", func_00005620);

INCLUDE_ASM("nonmatchings/mscm", func_00005658);

INCLUDE_ASM("nonmatchings/mscm", func_00005718);
#endif

INCLUDE_ASM("nonmatchings/mscm", func_00005804);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/mscm", func_00005868);

INCLUDE_ASM("nonmatchings/mscm", func_00005938);

INCLUDE_ASM("nonmatchings/mscm", func_000059F8);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", func_00005094);

INCLUDE_ASM("nonmatchings/mscm", func_00005174);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/mscm", func_0000584C);

INCLUDE_ASM("nonmatchings/mscm", func_0000591C);

INCLUDE_ASM("nonmatchings/mscm", func_000059C0);
#endif

INCLUDE_ASM("nonmatchings/mscm", func_00005A44);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/mscm", func_00005AC8);

INCLUDE_ASM("nonmatchings/mscm", func_00006360);

INCLUDE_ASM("nonmatchings/mscm", func_000063C8);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", func_00005270);
#endif

#if FW_VERSION < 282
s32 func_000052F4(void) {
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/mscm", func_00005A90);

INCLUDE_ASM("nonmatchings/mscm", func_000063B4);

INCLUDE_ASM("nonmatchings/mscm", func_0000641C);

s32 func_00006484(void) {
    return 0;
}

s32 func_0000648C(void) {
    return 0;
}

s32 func_00006494(struct Unk_func_00006494_0 *arg0) {
    s32 var_a0;

    var_a0 = 0x80220081;
    if (arg0->unk4 == 0) {
        var_a0 = (D_00007880 != 0) ? 0 : 0x80220083;
    }
    return var_a0;
}

s32 func_000064C0(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/mscm", func_000064C8);

INCLUDE_ASM("nonmatchings/mscm", func_0000652C);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_FCD92C74);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_2AD0A649);

INCLUDE_ASM("nonmatchings/mscm", func_00006684);

s32 func_000066DC(struct Unk_func_000066DC_0 *arg0) {
    s32 var_v0;

    var_v0 = 0x80220081;
    if (arg0 != NULL) {
        var_v0 = func_000064C8(arg0->unk4);
    }
    return var_v0;
}

s32 func_00006704(struct Unk_func_00006704_0 *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0x80220081;
    if (arg0 != NULL) {
        var_v0 = func_0000652C(arg0->unk4, arg1);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_F0CC24D1);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_7B5396BA);

INCLUDE_ASM("nonmatchings/mscm", func_000067CC);

INCLUDE_ASM("nonmatchings/mscm", func_00006800);

INCLUDE_ASM("nonmatchings/mscm", func_00006854);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_F1924A06);

INCLUDE_ASM("nonmatchings/mscm", func_00006908);

INCLUDE_RODATA("nonmatchings/mscm", D_0000719C);

INCLUDE_RODATA("nonmatchings/mscm", D_00007204);

INCLUDE_RODATA("nonmatchings/mscm", D_0000725C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/mscm", D_000072B4);

INCLUDE_RODATA("nonmatchings/mscm", D_000072BC);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/mscm", D_000072D0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/mscm", D_000072E4);

INCLUDE_RODATA("nonmatchings/mscm", D_000072EC);

INCLUDE_RODATA("nonmatchings/mscm", D_00007300);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/mscm", D_00006950);

INCLUDE_ASM("nonmatchings/mscm", func_000052FC);

INCLUDE_ASM("nonmatchings/mscm", func_00005358);
#endif

#if FW_VERSION < 282
s32 func_000053EC(void) {
    return 0;
}
#endif

#if FW_VERSION == 250
s32 func_00006440(void *arg0) {
    s32 var_a0;

    var_a0 = 0x80220081;
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        var_a0 = (D_00007800 != 0) ? 0 : 0x80220083;
    }
    return var_a0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", func_000057C4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_000057F0(void) {
    return 0;
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/mscm", func_00006474);

INCLUDE_ASM("nonmatchings/mscm", func_000064D8);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_FCD92C74);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_2AD0A649);

INCLUDE_ASM("nonmatchings/mscm", func_00006630);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mscm", func_000057F8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/mscm", func_000053F4);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", func_000059CC);

s32 func_000059D8(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/mscm", func_000059E0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", func_00005EE4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mscm", func_00005A44_v100);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", func_00005AA8);
#endif

#if FW_VERSION == 250
s32 func_00005AA8(void *arg0) {
    s32 var_v0;

    var_v0 = 0x80220081;
    if (arg0 != NULL) {
        var_v0 = func_00006474(M2C_FIELD(arg0, s32 *, 4));
    }
    return var_v0;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", func_00005AD0);

INCLUDE_ASM("nonmatchings/mscm", func_00005B3C);
#endif

#if FW_VERSION == 250
s32 func_00005B3C(void *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0x80220081;
    if (arg0 != NULL) {
        var_v0 = func_000064D8(M2C_FIELD(arg0, s32 *, 4), arg1);
    }
    return var_v0;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", func_00005B64);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_F0CC24D1);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_7B5396BA);

INCLUDE_ASM("nonmatchings/mscm", func_00005C58);

INCLUDE_ASM("nonmatchings/mscm", func_00005C8C);

INCLUDE_ASM("nonmatchings/mscm", func_00005CE4);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_F1924A06);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_FCD92C74);

INCLUDE_ASM("nonmatchings/mscm", sceMScm_driver_2AD0A649);

INCLUDE_ASM("nonmatchings/mscm", func_00005E58);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mscm", func_00005EB0);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/mscm", D_00007128);

INCLUDE_RODATA("nonmatchings/mscm", D_00007190);

INCLUDE_RODATA("nonmatchings/mscm", D_000071E8);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/mscm", D_000068A4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/mscm", D_00006E10);

INCLUDE_RODATA("nonmatchings/mscm", D_00006E18);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/mscm", D_0000725C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/mscm", D_00006E2C);

INCLUDE_RODATA("nonmatchings/mscm", D_00006E34);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/mscm", D_0000728C);
#endif
