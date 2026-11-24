/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "psheet_decls.h"

INCLUDE_ASM("tmp/asm/340/psheet/nonmatchings/psheet", scePsheet_driver_15355B0E);

INCLUDE_ASM("tmp/asm/340/psheet/nonmatchings/psheet", scePsheet_driver_34E68A41);

INCLUDE_ASM("tmp/asm/340/psheet/nonmatchings/psheet", scePsheet_driver_E16F3A48);

INCLUDE_ASM("tmp/asm/340/psheet/nonmatchings/psheet", module_start);

s32 module_reboot_before(void) {
    if (M2C_FIELD(&D_00002A80, s32 *, 0) > 0) {
        sceKernelDeleteSema(M2C_FIELD(&D_00002A80, s32 *, 0));
    }
    if (D_00002A80.unk4 > 0) {
        sceKernelDeleteSema(D_00002A80.unk4);
    }
    memset(&D_00002A80, 0, 0x40);
    memset(&D_00002AC0, 0, 0x4D0);
    return 0;
}

INCLUDE_ASM("tmp/asm/340/psheet/nonmatchings/psheet", scePsheet_driver_302AB4B8);

s32 scePsheet_driver_3CEC4078(void) {
    scePsheet_driver_302AB4B8(0, 0);
    return 0;
}

INCLUDE_ASM("tmp/asm/340/psheet/nonmatchings/psheet", scePsheet_driver_3BA93CFA);

void scePsheet_driver_226D9099(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_00001460(1);
    setK1(temp_s0);
}

INCLUDE_RODATA("tmp/asm/340/psheet/nonmatchings/psheet", D_000027EC);

INCLUDE_RODATA("tmp/asm/340/psheet/nonmatchings/psheet", D_00002804);

INCLUDE_ASM("tmp/asm/340/psheet/nonmatchings/psheet", func_00000658);

INCLUDE_RODATA("tmp/asm/340/psheet/nonmatchings/psheet", D_00002828);

INCLUDE_ASM("tmp/asm/340/psheet/nonmatchings/psheet", func_00000784);

INCLUDE_ASM("tmp/asm/340/psheet/nonmatchings/psheet", func_00000900);

s32 func_0000127C(void *arg0) {
    s32 var_v0;
    s32 var_v1;

    var_v0 = sceKernelWaitSema(D_00002A80.unk0, 1, NULL);
    if ((var_v0 < 0) || (M2C_FIELD(arg0, s32 *, 0) = (s32) D_00002A80.unk8, M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(&D_00002A80, s32 *, 0xC), var_v0 = sceKernelSignalSema(D_00002A80.unk0, 1), var_v1 = 0, (var_v0 < 0))) {
        var_v1 = var_v0;
    }
    return var_v1;
}

s32 func_000012F0(s32 arg0) {
    s32 var_v0;
    s32 var_v1;

    var_v0 = sceKernelWaitSema(D_00002A80.unk0, 1, NULL);
    if ((var_v0 < 0) || (D_00002A80.unk8 = (s32) (D_00002A80.unk8 + arg0), var_v0 = sceKernelSignalSema(D_00002A80.unk0, 1), var_v1 = 0, (var_v0 < 0))) {
        var_v1 = var_v0;
    }
    return var_v1;
}

s32 func_00001360(s32 arg0, s32 arg1) {
    s32 var_v0;
    s32 var_v1;

    var_v0 = sceKernelWaitSema(M2C_VFIELD(&D_00002A80, u32, 0), 1, NULL);
    if ((var_v0 < 0) || (D_00002A80.unkC = arg1, M2C_VFIELD(&D_00002A80, s32, 8) = arg0, var_v0 = sceKernelSignalSema(M2C_VFIELD(&D_00002A80, u32, 0), 1), var_v1 = 0, (var_v0 < 0))) {
        var_v1 = var_v0;
    }
    return var_v1;
}

s32 func_000013D8(void) {
    s32 temp_s0;
    s32 var_s1;
    s32 var_v0;

    var_s1 = sceKernelWaitSema(D_00002A80.unk0, 1, NULL);
    if ((var_s1 < 0) || (temp_s0 = D_00002A80.unk18, var_s1 = sceKernelSignalSema(D_00002A80.unk0, 1), var_v0 = temp_s0, (var_s1 < 0))) {
        KDebugForKernel_84F370BC(&D_000027EC, &D_00002804, "get_state", var_s1);
        var_v0 = var_s1;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/340/psheet/nonmatchings/psheet", func_00001460);

INCLUDE_RODATA("tmp/asm/340/psheet/nonmatchings/psheet", D_000028D0);

INCLUDE_RODATA("tmp/asm/340/psheet/nonmatchings/psheet", D_000028D8);

INCLUDE_RODATA("tmp/asm/340/psheet/nonmatchings/psheet", D_000028F0);

INCLUDE_ASM("tmp/asm/340/psheet/nonmatchings/psheet", func_000014F8);

INCLUDE_ASM("tmp/asm/340/psheet/nonmatchings/psheet", func_00001628);

INCLUDE_ASM("tmp/asm/340/psheet/nonmatchings/psheet", func_00001810);

INCLUDE_ASM("tmp/asm/340/psheet/nonmatchings/psheet", func_000019E8);

INCLUDE_ASM("tmp/asm/340/psheet/nonmatchings/psheet", func_00001B8C);

INCLUDE_ASM("tmp/asm/340/psheet/nonmatchings/psheet", func_00001D3C);

INCLUDE_ASM("tmp/asm/340/psheet/nonmatchings/psheet", func_00001E64);

s32 func_00001F40(s32 *arg0) {
    memset(arg0, 0, 0x90);
    M2C_FIELD(arg0, s32 *, 0) = D_000029AC;
    M2C_FIELD(arg0, s32 *, 4) = 1;
    M2C_FIELD(arg0, s32 *, 0x48) = 0x400;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0x90;
    return 0;
}

INCLUDE_RODATA("tmp/asm/340/psheet/nonmatchings/psheet", D_000029AC);

s32 func_00001F94(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v0;
    s32 var_v1;

    var_v0 = sceAmctrl_driver_1CCB66D2(&D_00002F48, 2, 1, arg3, arg2, 0);
    if ((var_v0 < 0) || (var_v0 = sceAmctrl_driver_0785C974(&D_00002F48, arg0, arg1), (var_v0 < 0)) || (var_v0 = sceAmctrl_driver_9951C50F(&D_00002F48), var_v1 = 0, (var_v0 < 0))) {
        KDebugForKernel_84F370BC(&D_000029C4, &D_000029E0, "data_encrypt", var_v0);
        var_v1 = 0x80510102;
    }
    return var_v1;
}

INCLUDE_RODATA("tmp/asm/340/psheet/nonmatchings/psheet", D_000029C4);

INCLUDE_RODATA("tmp/asm/340/psheet/nonmatchings/psheet", D_000029E0);

INCLUDE_ASM("tmp/asm/340/psheet/nonmatchings/psheet", func_00002048);

s32 func_0000217C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_v0;
    s32 var_v1;

    var_v0 = sceAmctrl_driver_1CCB66D2(&D_00002F30, 1, 2, arg4, arg3, arg2);
    if ((var_v0 < 0) || (var_v0 = sceAmctrl_driver_0785C974(&D_00002F30, arg0, arg1), (var_v0 < 0)) || (var_v0 = sceAmctrl_driver_9951C50F(&D_00002F30), var_v1 = 0, (var_v0 < 0))) {
        KDebugForKernel_84F370BC("%s: %s(): error 0x%08X\n\n", &D_00002A1C, &D_00002A30, var_v0);
        var_v1 = 0x80510102;
    }
    return var_v1;
}

INCLUDE_RODATA("tmp/asm/340/psheet/nonmatchings/psheet", D_00002A1C);

INCLUDE_RODATA("tmp/asm/340/psheet/nonmatchings/psheet", D_00002A30);

INCLUDE_ASM("tmp/asm/340/psheet/nonmatchings/psheet", func_00002238);
