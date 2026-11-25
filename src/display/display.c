/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "display_decls.h"

INCLUDE_ASM("nonmatchings/display", module_reboot_before);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/display", D_00002968);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_206276C2);

s32 sceDisplay_driver_7A10289D(void) {
    sceSysEventForKernel_D7D3FDCD(&D_000020D0);
    sceKernelReleaseSubIntrHandler(0x1E, 0x12);
    func_000016F4();
    return 0;
}
#endif

#if FW_VERSION == 250
s32 func_00000658(void) {
    s32 temp_v0;
    void *temp_s1;

    if (M2C_VFIELD(&D_00002150, s32, 0x5C) != 0) {
        if (M2C_VFIELD(&D_00002150, s32, 0x5C) == 1) {
            do {
                sceDisplayWaitVblankStart();
            } while (M2C_VFIELD(&D_00002150, s32, 0x5C) == 1);
        }
        func_000021C8();
    }
    temp_v0 = InitForKernel_7A2333AD();
    if (((temp_v0 == 0x110) | (temp_v0 == 0x300)) != 0) {

    } else {
        sceDisplay_driver_63E22A26(2, 0, 0, 3, 1);
        sceDisplayWaitVblankStart();
        temp_s1 = sceGeEdramGetAddr();
        SysMemForKernel_2F808748(temp_s1, 0, sceGeEdramGetSize());
        sceKernelDcacheWritebackAll();
    }
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
s32 func_00000658(void) {
    void *temp_s1;

    if (M2C_VFIELD(&D_00002150, s32, 0x5C) != 0) {
        if (M2C_VFIELD(&D_00002150, s32, 0x5C) == 1) {
            do {
                sceDisplayWaitVblankStart();
            } while (M2C_VFIELD(&D_00002150, s32, 0x5C) == 1);
        }
        func_000021C8();
    }
    if (InitForKernel_7A2333AD() != 0x110) {
        sceDisplay_driver_63E22A26(2, 0, 0, 3, 1);
        sceDisplayWaitVblankStart();
        temp_s1 = sceGeEdramGetAddr();
        SysMemForKernel_2F808748(temp_s1, 0, sceGeEdramGetSize());
        sceKernelDcacheWritebackAll();
    }
    return 0;
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/display", func_0000073C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/display", func_00000724);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/display", func_00000890);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/display", func_00000468);

INCLUDE_ASM("nonmatchings/display", func_00000578);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/display", func_00000868);

INCLUDE_ASM("nonmatchings/display", func_0000092C);

INCLUDE_ASM("nonmatchings/display", sceDisplaySetMode);

INCLUDE_ASM("nonmatchings/display", sceDisplayGetMode);

INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_63E22A26);

INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_5B5AEFAD);

INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_9E3C6DC6);

INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_31C4BAA8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
s32 func_000013B4(s32 *arg0) {
    return *arg0 & ~3;
}
#endif

#if FW_VERSION < 282
s32 module_start(void) {
    sceDisplay_driver_206276C2();
    return 0;
}

INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_432D133F);

INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_681EE6A7);

s32 sceDisplaySetHoldMode(s32 arg0) {
    D_000021CC = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 sceDisplay_driver_A544C486(s32 arg0) {
    D_00002CE4 = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_BF79F646);
#endif

#if FW_VERSION < 282
void sceDisplayGetFramePerSec(void) {
    sceLcdc_driver_3107417C();
}

s32 sceDisplaySetFrameBuf(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    return sceDisplay_driver_63E22A26(2, (s32) arg0, arg1, arg2, arg3);
}

s32 sceDisplayGetFrameBuf(void *arg0, void *arg1, void *arg2, s32 arg3) {
    return sceDisplay_driver_5B5AEFAD(2, (s32) arg0, (s32) arg1, (s32) arg2, arg3);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 sceDisplayIsForeground(void) {
    return D_00002CB0 == 2;
}

s8 sceDisplay_driver_AC14F1FF(void) {
    return D_00002CB0;
}
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/display", D_00002C30);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/display", D_00003B94);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/display", func_0000118C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/display", func_000016C4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/display", func_00001254);
#else
INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_206276C2);

s32 sceDisplay_driver_7A10289D(void) {
    sceSysEventForKernel_D7D3FDCD(&D_00003D10);
    sceKernelReleaseSubIntrHandler(0x1E, 0x12);
    func_00002A64();
    return 0;
}

s32 func_000009F8(void) {
    s32 temp_v0;
    s32 temp_v0_2;

    if (D_00003DB0.unk60 != 0) {
        if (D_00003DB0.unk60 == 1) {
            do {
                sceDisplayWaitVblankStart();
            } while (D_00003DB0.unk60 == 1);
        }
        func_0000315C();
    }
    temp_v0 = InitForKernel_7A2333AD();
    if ((((u32) (temp_v0 - 0x110) < 2U) | (temp_v0 == 0x300)) != 0) {

    } else {
        sceDisplay_driver_63E22A26(2, 0, 0, 3, 1);
        sceDisplayWaitVblankStart();
        sceGeEdramSetAddrTranslation(0x400);
        temp_v0_2 = sceGe_driver_C576E897();
        sceGe_driver_5BAA5439(temp_v0_2);
        SysMemForKernel_2F808748(sceGeEdramGetAddr(), 0, temp_v0_2);
        sceKernelDcacheWritebackAll();
        sceGe_driver_5BAA5439(0x200000);
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/display", func_00000AF8);

INCLUDE_ASM("nonmatchings/display", func_00000EAC);

INCLUDE_ASM("nonmatchings/display", func_00001220);

INCLUDE_ASM("nonmatchings/display", func_000012C0);

INCLUDE_ASM("nonmatchings/display", func_00001398);

INCLUDE_ASM("nonmatchings/display", func_00001480);

INCLUDE_ASM("nonmatchings/display", sceDisplaySetMode);

INCLUDE_ASM("nonmatchings/display", sceDisplayGetMode);

INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_63E22A26);

INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_5B5AEFAD);

INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_96CFAC38);

INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_9E3C6DC6);

INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_31C4BAA8);

s32 module_start(void) {
    sceDisplay_driver_206276C2();
    return 0;
}

INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_432D133F);

INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_681EE6A7);

s8 sceDisplay_driver_23CE8C51(void) {
    return D_00003E1A;
}

INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_E4E4C018);

INCLUDE_ASM("nonmatchings/display", sceDisplaySetHoldMode);

s32 sceDisplay_driver_A544C486(s32 arg0) {
    D_00003EB0 = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_BF79F646);

void sceDisplayGetFramePerSec(void) {
    sceLcdc_driver_3107417C();
}

s32 sceDisplaySetFrameBuf(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    return sceDisplay_driver_63E22A26(2, (s32) arg0, arg1, arg2, arg3);
}

s32 sceDisplayGetFrameBuf(void *arg0, void *arg1, void *arg2, s32 arg3) {
    return sceDisplay_driver_5B5AEFAD(2, (s32) arg0, (s32) arg1, (s32) arg2, arg3);
}

s32 sceDisplayIsForeground(void) {
    return D_00003E14 == 2;
}

s8 sceDisplay_driver_AC14F1FF(void) {
    return D_00003E14;
}

INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_E55F0D50);

INCLUDE_ASM("nonmatchings/display", func_00002258);

INCLUDE_ASM("nonmatchings/display", func_000022A8);
#endif

INCLUDE_ASM("nonmatchings/display", func_000023B8);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/display", D_00001FF8);

INCLUDE_RODATA("nonmatchings/display", D_00002018);
#endif

INCLUDE_ASM("nonmatchings/display", sceDisplayWaitVblank);

INCLUDE_ASM("nonmatchings/display", sceDisplayWaitVblankCB);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_A83EF139);
#endif

INCLUDE_ASM("nonmatchings/display", sceDisplayGetAccumulatedHcount);

INCLUDE_ASM("nonmatchings/display", sceDisplayGetCurrentHcount);

#if FW_VERSION < 282
s32 func_000016F4(void) {
    sceSysreg_driver_F6D83AD0(1);
    InterruptManagerForKernel_F987B1F0(0x1E);
    sceKernelDeleteEventFlag(D_000021F0);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00001728(void) {
    sceSysreg_driver_F6D83AD0(1);
    InterruptManagerForKernel_D774BA45(0x1E);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00001728(void) {
    sceSysreg_driver_F6D83AD0(1);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/display", func_00001748);
#endif

#if FW_VERSION == 100
s32 func_00001748(void) {
    sceSysreg_driver_E88B77ED(1);
    func_000023B8();
    return 0;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_AE0E8972);

INCLUDE_RODATA("nonmatchings/display", D_00003C50);

INCLUDE_ASM("nonmatchings/display", func_00002968);

s32 func_00002A64(void) {
    sceSysreg_driver_F6D83AD0(1);
    InterruptManagerForKernel_F987B1F0(0x1E);
    InterruptManagerForKernel_F987B1F0(0x32);
    sceKernelDeleteEventFlag(D_00003EF8);
    return 0;
}

s32 func_00002AA0(void) {
    sceSysreg_driver_F6D83AD0(1);
    InterruptManagerForKernel_D774BA45(0x1E);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/display", func_00002AC8);

#if FW_VERSION == 282
s32 func_00002B20(s32 arg0) {
    D_00003EF4 = arg0;
    return 0;
}
#else
s32 sceDisplayGetVcount(void) {
    return __builtin_allegrex_ext(D_000021E0, 0, 0x1F);
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/display", sceDisplayGetVcount);
#else
s32 sceDisplayIsVblank(void) {
    return sceDisplayGetCurrentHcount() < D_000021EC;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 sceDisplay_driver_69B53541(void) {
    return __builtin_allegrex_max(M2C_VFIELD(&D_00003EC8, s32, 0x18) - sceDisplayGetCurrentHcount(), -1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceDisplay_driver_69B53541(void) {
    return __builtin_allegrex_max(M2C_VFIELD(&D_00003EC8, s32, 0x14) - sceDisplayGetCurrentHcount(), -1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_21038913);
#endif

#if FW_VERSION == 100
s32 sceDisplay_driver_69B53541(void) {
    return __builtin_allegrex_max(M2C_VFIELD(&D_00003EC8, s32, 0x10) - sceDisplayGetCurrentHcount(), -1);
}
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/display", D_00002060);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/display", sceDisplayWaitVblankStart);
#endif

#if FW_VERSION == 100
s32 sceDisplayWaitVblankStart(void) {
    s32 temp_v0;
    u32 temp_s1;

    temp_s1 = shiftK1();
    temp_v0 = sceKernelWaitEventFlag(D_000021F0, 1U, 1, NULL, NULL);
    if (temp_v0 < 0) {
        KDebugForKernel_84F370BC(&D_00002060, "sceDisplayWaitVblankStart", temp_v0);
    }
    setK1(temp_s1);
    return temp_v0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/display", sceDisplayWaitVblankStartCB);
#else
s32 sceDisplayIsVblank(void) {
    return sceDisplayGetCurrentHcount() < D_00003EE8;
}

s32 sceDisplay_driver_69B53541(void) {
    return __builtin_allegrex_max(D_00003EC8.unk20 - sceDisplayGetCurrentHcount(), -1);
}

INCLUDE_ASM("nonmatchings/display", sceDisplay_driver_21038913);

s32 sceDisplayWaitVblankStart(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = sceKernelWaitEventFlag(D_00003EF8, 1U, 1, NULL, NULL);
    setK1(temp_s0);
    return temp_v0;
}

s32 sceDisplayWaitVblankStartCB(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = sceKernelWaitEventFlagCB(D_00003EF8, 1U, 1, NULL, NULL);
    setK1(temp_s0);
    return temp_v0;
}

s32 sceDisplay_driver_92C8F8B7(void) {
    return D_00003EF0 != 0;
}
#endif

INCLUDE_ASM("nonmatchings/display", func_00002C7C);

INCLUDE_ASM("nonmatchings/display", func_00002C9C);

INCLUDE_ASM("nonmatchings/display", func_00002CC0);

INCLUDE_ASM("nonmatchings/display", func_00002CF8);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/display", func_00001DE4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/display", func_000020D8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/display", func_00001F08);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/display", func_00001FF0);

INCLUDE_ASM("nonmatchings/display", func_000021C8);

INCLUDE_RODATA("nonmatchings/display", D_00002B2C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/display", func_00002D14);

INCLUDE_ASM("nonmatchings/display", func_00002D48);

INCLUDE_ASM("nonmatchings/display", func_00002E84);

INCLUDE_ASM("nonmatchings/display", func_00002F98);

INCLUDE_ASM("nonmatchings/display", func_0000315C);

INCLUDE_RODATA("nonmatchings/display", D_00003C88);

INCLUDE_RODATA("nonmatchings/display", D_00003CA8);

INCLUDE_RODATA("nonmatchings/display", D_00003CBC);
#endif
