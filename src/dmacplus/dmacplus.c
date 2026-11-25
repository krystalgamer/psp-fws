/* cflags: -O2 -frename-registers */
#include "common.h"
#include "dmacplus_decls.h"

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_C748491D);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_A7B05225);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_BF939272);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_6AA3D654);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_0DA570C1);

INCLUDE_ASM("nonmatchings/dmacplus", func_00000288);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dmacplus", module_start);

s32 module_reboot_before(void) {
    sceSysEventForKernel_D7D3FDCD(&D_00002E80);
    sceDmacplus_driver_4F1B8D26();
    sceDmacplus_driver_D1E1567E();
    sceDmacplus_driver_F7DEC189();
    sceDmacplus_driver_7AAE5443();
    sceDmacplus_driver_CDB039A7();
    InterruptManagerForKernel_F987B1F0(0x15);
    return 0;
}

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_DF32F547);

s32 sceDmacplus_driver_E6219C61(void) {
    sceSysEventForKernel_D7D3FDCD(&D_00002E80);
    sceDmacplus_driver_4F1B8D26();
    sceDmacplus_driver_D1E1567E();
    sceDmacplus_driver_F7DEC189();
    sceDmacplus_driver_7AAE5443();
    sceDmacplus_driver_CDB039A7();
    InterruptManagerForKernel_F987B1F0(0x15);
    return 0;
}
#else
s32 module_start(void) {
    sceSysreg_driver_678AD3ED();
    D_0000404C.unk0 = 0;
    InterruptManagerForKernel_58DD8978(0x15, 1, &func_00000288, 0, &D_00002EC8);
    InterruptManagerForKernel_4D6E7305(0x15);
    sceDmacplus_driver_FE3F3228();
    sceDmacplus_driver_BEC10779();
    sceDmacplus_driver_FD8B15BC();
    sceDmacplus_driver_1F5A80D0();
    sceDmacplus_driver_B6592A56();
    sceSysEventForKernel_CD9E4BB5(&D_00002F40);
    return 0;
}

s32 module_reboot_before(void) {
    sceSysEventForKernel_D7D3FDCD(&D_00002F40);
    sceDmacplus_driver_4F1B8D26();
    sceDmacplus_driver_D1E1567E();
    sceDmacplus_driver_F7DEC189();
    sceDmacplus_driver_7AAE5443();
    sceDmacplus_driver_CDB039A7();
    InterruptManagerForKernel_F987B1F0(0x15);
    return 0;
}

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_DF32F547);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_E6219C61);
#endif

s32 sceDmacplus_driver_853C5EC6(void) {
    sceDmacplus_driver_C8336549();
    sceDmacplus_driver_168836CF();
    sceDmacplus_driver_FEE3392C();
    sceDmacplus_driver_6D4F8BD7();
    sceDmacplus_driver_3DB353DB();
    sceSysreg_driver_168C09B8();
    return 0;
}

s32 sceDmacplus_driver_D49A5922(void) {
    sceSysreg_driver_678AD3ED();
    sceDmacplus_driver_42BEB349();
    sceDmacplus_driver_5E32C8AF();
    sceDmacplus_driver_C5B75E09();
    sceDmacplus_driver_78A55D62();
    sceDmacplus_driver_97DCBBBF();
    return 0;
}

INCLUDE_ASM("nonmatchings/dmacplus", func_000005D0);

INCLUDE_ASM("nonmatchings/dmacplus", func_00000694);

INCLUDE_ASM("nonmatchings/dmacplus", func_000006B4);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_FE3F3228);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_42BEB349);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_29B50A82);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_8AE579CD);

#if FW_VERSION < 282
s32 sceDmacplus_driver_241601AE(s32 *arg0, s32 *arg1, s32 *arg2) {
    if (arg0 != NULL) {
        *arg0 = D_00002F50;
    }
    if (arg1 != NULL) {
        *arg1 = D_00002F54;
    }
    if (arg2 != NULL) {
        *arg2 = D_00002F58;
    }
    return 0;
}
#else
s32 sceDmacplus_driver_241601AE(s32 *arg0, s32 *arg1, s32 *arg2) {
    if (arg0 != NULL) {
        *arg0 = D_00002F8C;
    }
    if (arg1 != NULL) {
        *arg1 = D_00002F90;
    }
    if (arg2 != NULL) {
        *arg2 = D_00002F94;
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_F8C7C180);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_CDB039A7);

s32 sceDmacplus_driver_C3236D69(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_C8336549);

#if FW_VERSION < 282
s32 sceDmacplus_driver_58C380BB(void) {
    return D_00002F4C;
}
#else
s32 sceDmacplus_driver_58C380BB(void) {
    return D_00002F88;
}
#endif

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_576522BC);

#if FW_VERSION < 282
s32 func_00000D18(void) {
    *(s32 *)0xBC800110 &= ~1;
    M2C_VFIELD(&D_00002F40, s32, 0xC) = 0;
    M2C_VFIELD(&D_00002F40, s32, 4) = 1;
    return -1;
}
#else
INCLUDE_ASM("nonmatchings/dmacplus", func_00000D14);
#endif

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_1D73DDA8);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_74323807);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_3A98EE05);

#if FW_VERSION < 282
s32 func_00001328(void) {
    return D_00003F84;
}

s32 func_00001334(s32 arg0) {
    D_00003F84 = arg0;
    return 0;
}
#endif

INCLUDE_RODATA("nonmatchings/dmacplus", D_00002E90);

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/dmacplus", D_00002E38);

INCLUDE_RODATA("nonmatchings/dmacplus", D_00002EEC);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/dmacplus", D_00002E9C);

INCLUDE_RODATA("nonmatchings/dmacplus", D_00002EC8);
#endif

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_BEC10779);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_7AAE5443);

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_1E7483D0);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
s32 sceDmacplus_driver_1E7483D0(void) {
    return (D_00003F84 == 0) ? 0 : -1;
}
#endif

#if FW_VERSION == 282
s32 sceDmacplus_driver_1E7483D0(void) {
    return !(D_0000404E & 2) ? 0 : -1;
}
#endif

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_168836CF);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_5E32C8AF);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_B2EFA681);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dmacplus", func_00001678);

s32 func_0000177C(void) {
    sceKernelSetEventFlag(M2C_FIELD(&D_00003FC0, s32 *, 0), 1U);
    M2C_FIELD(&D_00003FC0, s32 *, 4) = 0;
    return -1;
}
#else
INCLUDE_ASM("nonmatchings/dmacplus", func_00001698);

s32 func_00001798(void) {
    sceKernelSetEventFlag(D_00003FC0, 1U);
    D_0000404C.unk2 = (u16) (D_0000404C.unk2 & 0x7FFD);
    return -1;
}
#endif

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_4B980588);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_3438DA0B);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_58DE4914);

#if FW_VERSION < 282
s32 func_00001A64(void) {
    return D_00003FD4;
}

s32 func_00001A70(s32 arg0) {
    D_00003FD4 = arg0;
    return 0;
}

s32 sceDmacplus_driver_FD8B15BC(void) {
    s32 temp_v0;

    temp_v0 = sceKernelCpuSuspendIntr();
    M2C_VFIELD(&D_0000400C, s32, 4) = 0;
    M2C_VFIELD(&D_0000400C, s32, 0) = sceKernelCreateEventFlag("SceDmacplusSc2Me", 0x201U, 0U, NULL);
    sceKernelRegisterSubIntrHandler(0x15, 5, &func_00001BCC, 0);
    sceKernelRegisterSubIntrHandler(0x15, 4, &func_00001C50, 0);
    sceKernelEnableSubIntr(0x15, 5);
    sceKernelEnableSubIntr(0x15, 4);
    sceKernelCpuResumeIntrWithSync(temp_v0);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_FD8B15BC);
#endif

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_F7DEC189);

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_D0464B29);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
s32 sceDmacplus_driver_D0464B29(void) {
    return (D_00003FD4 == 0) ? 0 : -1;
}
#endif

#if FW_VERSION < 282
s32 sceDmacplus_driver_FEE3392C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 sceDmacplus_driver_C5B75E09(void) {
    return 0;
}
#endif

#if FW_VERSION == 100
s32 sceDmacplus_driver_C5B75E09(void) {
    D_00003FD4 = 0;
    return 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dmacplus", func_00001BCC);

INCLUDE_ASM("nonmatchings/dmacplus", func_00001C50);
#else
s32 sceDmacplus_driver_D0464B29(void) {
    return !(D_0000404E & 4) ? 0 : -1;
}

s32 sceDmacplus_driver_FEE3392C(void) {
    return 0;
}

s32 sceDmacplus_driver_C5B75E09(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/dmacplus", func_00001BD4);

INCLUDE_ASM("nonmatchings/dmacplus", func_00001C54);
#endif

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_BE693828);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_AB49D2CB);

#if FW_VERSION < 282
s32 sceDmacplus_driver_1F5A80D0(void) {
    s32 temp_v0;

    temp_v0 = sceKernelCpuSuspendIntr();
    M2C_VFIELD(&D_00004020, s32, 4) = 0;
    M2C_VFIELD(&D_00004020, s32, 0) = sceKernelCreateEventFlag("SceDmacplusMe2Sc", 0x201U, 0U, NULL);
    sceKernelRegisterSubIntrHandler(0x15, 7, &func_000020C4, 0);
    sceKernelRegisterSubIntrHandler(0x15, 6, &func_00002148, 0);
    sceKernelEnableSubIntr(0x15, 7);
    sceKernelEnableSubIntr(0x15, 6);
    sceKernelCpuResumeIntrWithSync(temp_v0);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_1F5A80D0);
#endif

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_D1E1567E);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_9393B40D);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
s32 sceDmacplus_driver_9393B40D(void) {
    return (D_00003FEC == 0) ? 0 : -1;
}
#endif

#if FW_VERSION == 100
s32 sceDmacplus_driver_9393B40D(void) {
    s32 var_v0;

    var_v0 = -1;
    if (M2C_VFIELD(&D_00004020, s32, 4) == 0) {
        M2C_VFIELD(&D_00004020, s32, 4) = -1;
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 282
s32 sceDmacplus_driver_6D4F8BD7(void) {
    return 0;
}
#endif

#if FW_VERSION == 100
s32 sceDmacplus_driver_78A55D62(void) {
    D_00003FEC = 0;
    return 0;
}
#endif

#if FW_VERSION == 282
s32 sceDmacplus_driver_9393B40D(void) {
    return !(D_0000404E & 8) ? 0 : -1;
}

s32 sceDmacplus_driver_6D4F8BD7(void) {
    return 0;
}
#endif

#if FW_VERSION >= 150
s32 sceDmacplus_driver_78A55D62(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_2D5940FF);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dmacplus", func_000020C4);

INCLUDE_ASM("nonmatchings/dmacplus", func_00002148);
#else
INCLUDE_ASM("nonmatchings/dmacplus", func_0000205C);

INCLUDE_ASM("nonmatchings/dmacplus", func_000020DC);
#endif

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_3DB353DB);

INCLUDE_ASM("nonmatchings/dmacplus", func_00002198);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dmacplus", func_00002250);
#else
INCLUDE_ASM("nonmatchings/dmacplus", func_000021EC);
#endif

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_FD183BCF);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_B6592A56);
#else
s32 sceDmacplus_driver_B6592A56(void) {
    M2C_UNK *temp_v0;
    s32 temp_s2;

    temp_s2 = sceKernelCpuSuspendIntr();
    temp_v0 = "SceDmacplusSc128";
    D_00004034.unk0 = sceKernelCreateSema(temp_v0, 1U, 1, 1, NULL);
    D_00004034.unk4 = sceKernelCreateEventFlag(temp_v0, 0x201U, 0U, NULL);
    sceKernelRegisterSubIntrHandler(0x15, 8, &func_00002198, 0);
    sceKernelRegisterSubIntrHandler(0x15, 9, &func_000021EC, 0);
    sceKernelEnableSubIntr(0x15, 8);
    sceKernelEnableSubIntr(0x15, 9);
    sceKernelCpuResumeIntr(temp_s2);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_4F1B8D26);

s32 sceDmacplus_driver_410ED0DD(void) {
    return 0;
}

s32 sceDmacplus_driver_97DCBBBF(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_C7D33466);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplus_driver_28558DBF);

INCLUDE_ASM("nonmatchings/dmacplus", func_00002528);
