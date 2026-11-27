/* cflags: -O2 -frename-registers */
#include "common.h"
#include "libatrac3plus_decls.h"

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracReinit);
#endif

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracGetAtracID);

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracReleaseAtracID);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracSetData);
#endif

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracSetHalfwayBuffer);

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracSetDataAndGetID);
#endif

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracSetHalfwayBufferAndGetID);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracSetMOutHalfwayBuffer);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracSetMOutHalfwayBufferAndGetID);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracSetAA3HalfwayBufferAndGetID);
#endif

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracDecodeData);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracGetStreamDataInfo);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracAddStreamData);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracGetSecondBufferInfo);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracSetSecondBuffer);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracGetSoundSample);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracGetNextDecodePosition);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracSetLoopNum);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracGetBufferInfoForReseting);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracResetPlayPosition);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00000EBC);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00000F54);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00000DCC);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00000EB4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00000FA4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/libatrac3plus", func_0000100C);

s32 func_00001054(u8 *arg0) {
    return (s32) (*arg0 & 0x1C) >> 2;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00000D30);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00000E00);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00000E84);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00000EEC);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_000010D0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
s32 func_00001288(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x38) == 2) {
        return M2C_FIELD(arg0, s32 *, 0x4C) + M2C_FIELD(arg0, s32 *, 0x54);
    }
    return M2C_FIELD(arg0, s32 *, 0x40) + M2C_FIELD(arg0, s32 *, 0x48);
}
#endif

#if FW_VERSION == 100
u8 *func_00001140(u8 *arg0, u32 arg1, u32 arg2, s32 arg3) {
    s32 var_v0_2;
    u8 *var_v0;

    var_v0 = arg0 + arg1;
    if (arg2 < (u32) (arg1 + arg3)) {
        var_v0_2 = 0;
        if (arg1 < arg2) {
            var_v0_2 = arg2 - arg1;
        }
        func_00002320(arg0, var_v0, var_v0_2);
        var_v0 = arg0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00000F1C);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00000FD8);
#endif

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracStartEntry);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracEndEntry);

#if FW_VERSION == 100 || FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracReleaseAtracID);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracSetData);
#endif

#if FW_VERSION >= 250
s32 sceAtracSetData(s32 arg0, void *arg1, u32 arg2) {
    return sceAtracSetHalfwayBuffer(arg0, arg1, arg2, arg2);
}

s32 sceAtracSetDataAndGetID(void *arg0, u32 arg1) {
    return sceAtracSetHalfwayBufferAndGetID(arg0, arg1, arg1);
}
#endif

#if FW_VERSION >= 271
s32 sceAtracSetAA3DataAndGetID(void *arg0, u32 arg1, u32 arg2, void *arg3) {
    return sceAtracSetAA3HalfwayBufferAndGetID(arg0, arg1, arg1, arg2, arg3);
}
#endif

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracGetRemainFrame);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracIsSecondBufferNeeded);
#endif

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracGetChannel);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracGetOutputChannel);
#endif

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracGetMaxSample);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracGetNextSample);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracGetBitrate);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracGetLoopStatus);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracGetInternalErrorInfo);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00001504);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00001514);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00001628);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000015C8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00001654);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00001918);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00001654);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00001938);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libatrac3plus", func_0000198C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00001B88);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002090);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00001ABC);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_000020CC);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002120);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_000021A8);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_0000221C);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002254);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002278);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_000022D4);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002304);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_0000233C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000021DC);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000016A4);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00001748);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00001E08);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00001E24);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00001E8C);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00001F20);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00001F68);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002014);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002044);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_000020B4);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_000020FC);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002150);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_0000218C);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00001F9C);

s32 func_00002014(void *arg0) {
    s32 var_a1;
    u32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u32 *, 0x1C);
    var_a1 = 0;
    if ((temp_v1 != 0) && ((M2C_FIELD(arg0, s32 *, 0x24) != 0) || (temp_v1 >= (u32) M2C_FIELD(arg0, u32 *, 0xC)))) {
        var_a1 = 1;
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002044);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_000020B4);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_000020FC);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002150);

u32 func_000021E4(void *arg0) {
    u32 var_a0;

    var_a0 = 0x800;
    if (M2C_FIELD(arg0, s32 *, 0) == 0x1001) {
        var_a0 = 0x400;
    }
    return (u32) M2C_FIELD(arg0, u32 *, 0xC) % var_a0;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002218);

s32 func_000022A4(s32 *arg0) {
    s32 var_a0;

    var_a0 = 0x800;
    if (*arg0 == 0x1001) {
        var_a0 = 0x400;
    }
    return var_a0;
}

s32 func_000022C4(s32 *arg0) {
    s32 var_a0;

    var_a0 = 0x170;
    if (*arg0 == 0x1001) {
        var_a0 = 0x45;
    }
    return var_a0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000022E4);
#endif

#if FW_VERSION == 152
u32 func_000022E4(u32 arg0, u32 arg1) {
    return (arg1 >= arg0) ? arg0 : arg1;
}
#endif

#if FW_VERSION < 152
u32 func_000022E4(u32 arg0, u32 arg1) {
    u32 var_a1;

    var_a1 = arg1;
    if (var_a1 >= arg0) {
        var_a1 = arg0;
    }
    return var_a1;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000022F8);
#endif

#if FW_VERSION < 260
void func_00002320(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 var_a2;
    u8 *var_a0;
    u8 *var_a1;
    u8 temp_v1;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = arg2;
    if (var_a2 != 0) {
        do {
            temp_v1 = *var_a1;
            var_a2 -= 1;
            var_a1 += 1;
            *var_a0 = temp_v1;
            var_a0 += 1;
        } while (var_a2 != 0);
    }
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000023B4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002508);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_000025A8);

INCLUDE_RODATA("nonmatchings/libatrac3plus", D_00003604);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/libatrac3plus", D_000038A4);

INCLUDE_RODATA("nonmatchings/libatrac3plus", D_00003930);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000022B4);
#endif

#if FW_VERSION < 152
s32 func_00002348(void *arg0) {
    s32 var_a1;
    s32 var_a2;
    u32 temp_a0;
    u32 temp_v0;

    var_a1 = 0x800;
    var_a2 = 0;
    if (M2C_FIELD(arg0, s32 *, 0) == 0x1001) {
        var_a1 = 0x400;
    }
    temp_a0 = M2C_FIELD(arg0, u32 *, 0x14);
    temp_v0 = ((M2C_FIELD(arg0, s32 *, 0xC) + var_a1) & -var_a1) - 1;
    if (temp_a0 < temp_v0) {
        var_a2 = temp_v0 - temp_a0;
    }
    return var_a2;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002390);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_000024A0);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002588);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_000025D4);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002628);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002714);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002744);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_000027F8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000028A8);
#endif

#if FW_VERSION == 100
u32 func_000028B4(s32 arg0, u32 arg1, u32 arg2) {
    u32 var_v0;

    var_v0 = arg0 + arg1;
    if (var_v0 >= arg2) {
        var_v0 = arg1;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000028CC);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002918);
#endif

#if FW_VERSION == 100 || FW_VERSION == 201
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000029CC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000029CC(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    u32 temp_hi;
    u32 temp_t7;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, u32 *, 0x3C) = (u32) (M2C_FIELD(arg0, u32 *, 0x3C) - temp_v0);
    if (M2C_FIELD(arg0, s32 *, 0x38) != 2) {
        M2C_FIELD(arg0, s32 *, 0x48) = func_000028A8(M2C_FIELD(arg0, s32 *, 0x48), temp_v0, M2C_FIELD(arg0, s32 *, 0x44));
    } else {
        temp_v0_2 = func_000028A8(M2C_FIELD(arg0, s32 *, 0x54), temp_v0, (s32) M2C_FIELD(arg0, u32 *, 0x50));
        M2C_FIELD(arg0, s32 *, 0x54) = temp_v0_2;
        if (temp_v0_2 == 0) {
            M2C_FIELD(arg0, s32 *, 0x38) = 3;
            M2C_FIELD(arg0, s32 *, 0x48) = 0;
        }
    }
    if (func_00002014(arg0) == 0) {
        if (M2C_FIELD(arg0, s32 *, 0x34) == 5) {
            if ((M2C_FIELD(arg0, s32 *, 0x38) == 1) && (func_000020B4((s32) arg0, M2C_FIELD(arg0, s32 *, 0x1C)) < (u32) M2C_FIELD(arg0, u32 *, 0x28))) {
                temp_t7 = M2C_FIELD(arg0, u32 *, 0x50);
                temp_hi = temp_t7 % (u32) M2C_FIELD(arg0, s32 *, 8);
                M2C_FIELD(arg0, s32 *, 0x38) = 2;
                M2C_FIELD(arg0, u32 *, 0x3C) = temp_t7;
                M2C_FIELD(arg0, s32 *, 0x54) = 0;
                func_00002320(M2C_FIELD(arg0, u8 **, 0x40), M2C_FIELD(arg0, s32 *, 0x4C) + (temp_t7 - temp_hi), (s32) temp_hi);
            }
        }
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libatrac3plus", func_0000150C);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_0000153C);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_000015E4);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00001648);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_000016D4);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00001708);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_000019F8);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00001B38);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002050);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002088);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_000020E4);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002114);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_0000214C);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_0000219C);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002348);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_000023C0);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/libatrac3plus", D_000036C0);

INCLUDE_RODATA("nonmatchings/libatrac3plus", D_000036C4);

INCLUDE_RODATA("nonmatchings/libatrac3plus", D_000036D8);

INCLUDE_RODATA("nonmatchings/libatrac3plus", D_000036E8);

INCLUDE_RODATA("nonmatchings/libatrac3plus", D_00003718);

INCLUDE_RODATA("nonmatchings/libatrac3plus", D_00003728);

INCLUDE_RODATA("nonmatchings/libatrac3plus", D_00003850);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/libatrac3plus", D_000037F8);
#endif

INCLUDE_RODATA("nonmatchings/libatrac3plus", D_00003810);

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/libatrac3plus", D_000038A4);

INCLUDE_RODATA("nonmatchings/libatrac3plus", D_000038B4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002660);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002734);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002814);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002A78);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002B44);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002C24);
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002CE0);
#endif

#if FW_VERSION == 152
s32 func_00002CE0(s32 arg0) {
    s32 temp_a2;
    s32 temp_s0;
    u32 temp_v0;
    u32 var_a0;

    temp_a2 = func_0000326C(arg0);
    var_a0 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x38) != 2) {
        var_a0 = M2C_FIELD(arg0, u32 *, 0x48);
    }
    temp_s0 = func_00003150(var_a0, M2C_FIELD(arg0, u32 *, 0x44), (u32) temp_a2, M2C_FIELD(arg0, u32 *, 8));
    temp_v0 = func_0000302C(arg0);
    return (temp_v0 >= (u32) temp_s0) ? temp_s0 : (s32) temp_v0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002964);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002DD0);
#endif

#if FW_VERSION == 100
u32 func_00002D4C(void *arg0) {
    u32 temp_a1;
    u32 var_a2;

    temp_a1 = M2C_FIELD(arg0, u32 *, 0x3C);
    var_a2 = -2U;
    if (temp_a1 < (u32) (M2C_FIELD(arg0, s32 *, 0x30) - M2C_FIELD(arg0, s32 *, 0x28))) {
        var_a2 = temp_a1 / (u32) M2C_FIELD(arg0, u32 *, 8);
    }
    return var_a2;
}
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002D84);
#endif

#if FW_VERSION == 152
s32 func_00002D84(s32 arg0) {
    s32 temp_v0;
    s32 var_s2;
    u32 temp_a3;

    var_s2 = func_00002E3C(arg0);
    if (M2C_FIELD(arg0, s32 *, 0x24) >= 0) {
        temp_v0 = func_000020B4(arg0, M2C_FIELD(arg0, s32 *, 0x1C));
        temp_a3 = M2C_FIELD(arg0, s32 *, 0x28) + M2C_FIELD(arg0, s32 *, 0x3C);
        if (temp_a3 >= (u32) (temp_v0 + 1)) {
            var_s2 = ((s32) ((u32) ((temp_a3 - temp_v0) - 1) / (u32) ((temp_v0 - func_00002044(arg0, M2C_FIELD(arg0, s32 *, 0x18))) + 1)) >= M2C_FIELD(arg0, s32 *, 0x24)) ? -3 : var_s2;
        }
    }
    return var_s2;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002A60);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002B8C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002E3C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00003018);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002F7C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002FBC);
#endif

#if FW_VERSION == 152
u32 func_00002FBC(u32 arg0, s32 arg1, u32 arg2, u32 arg3) {
    u32 temp_v0;

    temp_v0 = arg1 + arg2;
    return !((temp_v0 < arg0) & (arg2 < arg3)) ? 0U : temp_v0;
}
#endif

#if FW_VERSION < 152
u32 func_00002FBC(u32 arg0, s32 arg1, u32 arg2, u32 arg3) {
    u32 temp_a1;
    u32 var_v0;

    temp_a1 = arg1 + arg2;
    var_v0 = 0;
    if ((temp_a1 < arg0) & (arg2 < arg3)) {
        var_v0 = temp_a1;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002BF0);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002C3C);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002CB4);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002CD4);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002FE0);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_0000302C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000030A8);
#endif

#if FW_VERSION == 152
s32 func_000030A8(void *arg0) {
    u32 temp_a2;
    u32 temp_a3;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0x28) + M2C_FIELD(arg0, s32 *, 0x3C);
    temp_a3 = M2C_FIELD(arg0, u32 *, 0x30);
    return (temp_a2 >= temp_a3) ? 0 : (temp_a3 - temp_a2);
}
#endif

#if FW_VERSION < 152
s32 func_000030A8(void *arg0) {
    s32 var_a2;
    u32 temp_a0;
    u32 temp_a1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x28) + M2C_FIELD(arg0, s32 *, 0x3C);
    temp_a0 = M2C_FIELD(arg0, u32 *, 0x30);
    var_a2 = 0;
    if (temp_a1 < temp_a0) {
        var_a2 = temp_a0 - temp_a1;
    }
    return var_a2;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000030D0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00003150);
#endif

#if FW_VERSION == 152
s32 func_00003150(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    s32 var_v1;
    u32 temp_v1;
    u32 var_a1;

    var_a1 = arg1;
    temp_v1 = arg0 + arg2;
    if (arg0 < var_a1) {
        var_a1 = (((u32) (var_a1 - arg0) / arg3) * arg3) + arg0;
    }
    var_v1 = var_a1 - temp_v1;
    if (temp_v1 >= var_a1) {
        var_v1 = (var_a1 >= arg2) ? (var_a1 - arg2) : 0;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002DB8);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002E3C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002E68);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002E70);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002ED0);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00003054);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000031C8);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00003400);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_000034F8);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00003580);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_000035F4);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00003634);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00003124);
#endif

#if FW_VERSION == 150
s32 func_00003214(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    s32 var_a5;
    u32 temp_a4;
    u32 var_a1;

    var_a1 = arg1;
    temp_a4 = arg0 + arg2;
    var_a5 = 0;
    if (arg0 < var_a1) {
        var_a1 = (((u32) (var_a1 - arg0) / arg3) * arg3) + arg0;
    }
    if (temp_a4 < var_a1) {
        var_a5 = var_a1 - temp_a4;
    } else if (var_a1 >= arg2) {
        var_a5 = var_a1 - arg2;
    }
    return var_a5;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/libatrac3plus", func_0000326C);

u32 func_000032F0(u32 arg0, u32 arg1, u32 arg2) {
    u32 var_a2;

    var_a2 = arg2;
    if (arg0 < var_a2) {
        var_a2 = (((u32) (var_a2 - arg0) / arg1) * arg1) + arg0;
    }
    return var_a2;
}

void func_00003320(void *arg0, u32 arg1) {
    u32 temp_a2;
    u32 temp_v1;
    u32 var_a3;
    u8 *temp_v0;

    if ((u32) (M2C_FIELD(arg0, s32 *, 0x34) - 1) >= 2U) {
        var_a3 = M2C_FIELD(arg0, u32 *, 0x44);
        temp_a2 = M2C_FIELD(arg0, u32 *, 0x2C);
        temp_v1 = M2C_FIELD(arg0, u32 *, 8);
        if (temp_a2 < var_a3) {
            var_a3 = (((u32) (var_a3 - temp_a2) / temp_v1) * temp_v1) + temp_a2;
        }
        if (var_a3 >= arg1) {

        } else {
            temp_v0 = M2C_FIELD(arg0, u8 **, 0x40);
            func_00002320(temp_v0, temp_v0 + var_a3, arg1 - var_a3);
        }
    }
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000032D4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000033A0_v150);
#endif

#if FW_VERSION == 100
s32 func_00003168(s32 arg0, u32 arg1, s32 arg2, u32 arg3) {
    s32 var_v1;
    u32 temp_a0;
    u32 temp_hi;

    temp_a0 = arg0 + arg2;
    var_v1 = 0;
    if (temp_a0 < arg1) {
        var_v1 = arg1 - temp_a0;
    } else {
        temp_hi = (u32) (arg1 - arg0) % arg3;
        if (arg1 >= (u32) (temp_hi + arg2)) {
            var_v1 = (arg1 - temp_hi) - arg2;
        }
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/libatrac3plus", func_000031B4);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_000031CC);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_000031E4);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00003238);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000033A0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000035F4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00003780);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00003478);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_000035A4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/libatrac3plus", D_00003820);

INCLUDE_RODATA("nonmatchings/libatrac3plus", D_00003830);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002478);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002544);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002624);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002710);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002774);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_000027B4);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002860);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002964);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_000029A8);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_000029C0);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002A04);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002A7C);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002A9C);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002B28);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002B70);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002BEC);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002C18);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002C78);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002F04);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_000030AC);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_000032E4);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_000033DC);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00003464);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_000034D8);

INCLUDE_ASM("nonmatchings/libatrac3plus", func_00003518);
#endif
