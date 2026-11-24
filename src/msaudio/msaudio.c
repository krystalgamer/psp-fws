/* cflags: -Os */
#include "common.h"
#include "k1.h"
#include "msaudio_decls.h"

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msaudio", func_00000000);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_00000000);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_00000194);
#endif

#if FW_VERSION != 100
s32 func_00000234(s32 arg0, M2C_UNK arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s2;
    s32 var_v0;

    var_s2 = -1;
    var_v0 = func_00000194(arg1);
    if (var_v0 >= 0) {
        temp_v0 = sceMgr_driver_F30E22CF(1);
        var_s0 = temp_v0;
        if (temp_v0 >= 0) {
            var_s2 = temp_v0;
            temp_v0_2 = sceMgr_driver_02F7AB01(temp_v0, arg0, var_v0);
            var_s0 = temp_v0_2;
            if (temp_v0_2 >= 0) {
                sceMgr_driver_1B8F3192(var_v0);
                return temp_v0;
            }
        }
        if (var_v0 >= 0) {
            sceMgr_driver_1B8F3192(var_v0);
        }
        if (var_s2 >= 0) {
            sceMgr_driver_1B8F3192(var_s2);
        }
        var_v0 = func_00000000(var_s0);
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_000002F8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_00000478);
#endif

#if FW_VERSION != 100
s32 func_00000570(struct Unk_func_00000570_0 *arg0, struct Unk_func_00000570_1 *arg1) {
    s32 temp_v1;
    s32 var_a2;

    temp_v1 = (arg1->unk15 + (arg1->unk14 << 8)) - 1;
    var_a2 = 0x8050800D;
    if (temp_v1 >= 0) {
        var_a2 = temp_v1;
        arg0->unk0 = (s32) arg1->unk28;
        arg0->unk4 = (s32) arg1->unk2C;
        if (temp_v1 > 0) {
            arg0->unk8 = (s32) arg1->unk30;
            arg0->unkC = (s32) arg1->unk34;
        }
    }
    return var_a2;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_000005C0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_0000080C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_00000918);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_00000B38);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_00000C2C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_00000D98);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/msaudio", D_000069C8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/msaudio", D_000069D0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_00000E84);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_00001168);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_000011C8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_00001240);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_00001360);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_0000145C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_0000150C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_00001600);
#endif

INCLUDE_ASM("nonmatchings/msaudio", func_00001820);

#if FW_VERSION == 100
s32 func_000002D8(void *arg0) {
    void *temp_v0;

    temp_v0 = arg0 + 0xFFC;
    return M2C_FIELD(temp_v0, u8 *, 3) + (M2C_FIELD(temp_v0, u8 *, 2) << 8) + (M2C_FIELD(temp_v0, u8 *, 1) << 0x10) + (M2C_FIELD(arg0, u8 *, 0xFFC) << 0x18);
}
#endif

#if FW_VERSION != 100
s32 func_00001908(struct Unk_func_00001908_0 *arg0) {
    struct Unk_func_00001908_temp_v0 *temp_v0;

    temp_v0 = &arg0->unkFFC;
    return temp_v0->unk3 + (temp_v0->unk2 << 8) + (temp_v0->unk1 << 0x10) + (arg0->unkFFC << 0x18);
}
#endif

INCLUDE_ASM("nonmatchings/msaudio", func_00001938);

#if FW_VERSION == 100
s32 func_0000035C(s32 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = *arg0;
    if (temp_v0 > 0) {
        temp_v0_2 = sceKernelDeleteSema(temp_v0);
        var_v1 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            *arg0 = 0;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 100
s32 func_000003A4(s32 *arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0x8050800F;
    temp_v0 = *arg0;
    if (temp_v0 > 0) {
        var_s0 = sceKernelWaitSema(temp_v0, 1, NULL);
        if (var_s0 == 0x800201B5) {
            var_s0 = 0x8050800F;
        } else if (var_s0 != 0) {
            KDebugForKernel_84F370BC("msaudio.c:%s:Error int sceKernelWaitSema (ret=%x))\n", "_msaSemaLock", var_s0);
        }
    }
    return var_s0;
}
#endif

#if FW_VERSION == 100
s32 func_00000424(s32 *arg0) {
    s32 var_v0;

    var_v0 = sceKernelSignalSema(*arg0, 1);
    if (var_v0 != 0) {
        KDebugForKernel_84F370BC("msaudio.c:%s:Error in sceKernelSignalSema (ret=%x))\n", "_msaSemaUnlock", var_v0);
        var_v0 = 0x80508001;
    }
    return var_v0;
}
#endif

#if FW_VERSION != 100
s32 func_0000198C(s32 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = *arg0;
    if (temp_v0 > 0) {
        temp_v0_2 = sceKernelDeleteSema(temp_v0);
        var_v1 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            *arg0 = 0;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_000019D4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_00001A2C);
#endif

INCLUDE_ASM("nonmatchings/msaudio", func_00001A58);

INCLUDE_ASM("nonmatchings/msaudio", func_00001ACC);

INCLUDE_ASM("nonmatchings/msaudio", func_00001B78);

#if FW_VERSION == 100
s32 module_start(void) {
    return 0;
}
#endif

#if FW_VERSION == 100
s32 module_stop(void) {
    sceMSAudio_driver_3872FBE5();
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_00001BD4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_00001C44);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_00001C7C);
#endif

#if FW_VERSION != 100
s32 module_start(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 module_stop(void) {
    sceMSAudio_driver_3872FBE5();
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/msaudio", D_000069F0);
#endif

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudio_driver_757F4FD3);

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudio_driver_3872FBE5);

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudio_driver_107D83D4);

#if FW_VERSION != 100
s32 sceMSAudio_driver_DA34AB8F(void) {
    s32 var_v1;
    u32 temp_a0;

    temp_a0 = shiftK1();
    var_v1 = 0x80508004;
    if ((u32) D_00006B80.unk138 >= 2U) {
        var_v1 = D_00006B80.unk2D4;
    }
    setK1(temp_a0);
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudio_driver_47F7DAFC);

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudio_driver_7B953C1A);

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudio_driver_80BD1592);

#if FW_VERSION != 100
s32 func_000026B0(struct Unk_func_000026B0_0 *arg0) {
    s32 var_v1;

    var_v1 = 0x80508016;
    if (!(arg0->unk2D & 0x40) && ((var_v1 = 0, (arg0->unk44 != 0)) || (arg0->unk48 != 0))) {
        var_v1 = 0x80508016;
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudio_driver_9E37E51D);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", sceMSAudio_driver_68EF9696);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", sceMSAudio_driver_45E1994B);
#endif

#if FW_VERSION == 100
s32 sceMSAudio_driver_135F2225(u32 arg0) {
    if (D_00003088 != 0) {
        if (arg0 < 3U) {
            func_00001B78((s32) arg0);
        }
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/msaudio", sceMSAudio_driver_135F2225);
#endif

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudio_driver_22DA9981);

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudio_driver_5D1C9867);

#if FW_VERSION == 100
s32 sceMSAudio_driver_67E58C07(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 sceMSAudio_driver_67E58C07(void) {
    u32 temp_v0;

    temp_v0 = shiftK1();
    setK1(temp_v0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudio_driver_38178F2F);

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudio_driver_86666DA6);

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudio_driver_FE7BC654);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_00003B60);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_00003D20);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_00003F10);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", sceMSAudio_driver_2685C036);
#endif

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudio_driver_A18A1DF6);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msaudio", sceMSAudio_driver_E8B25D38);
#endif

#if FW_VERSION != 100
s32 sceMSAudio_driver_E8B25D38(void) {
    u32 temp_v0;

    temp_v0 = shiftK1();
    setK1(temp_v0);
    return 0x80508011;
}
#endif

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudio_driver_66F19CA3);

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudio_driver_383DEC75);

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudio_driver_C1B87E96);

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudio_driver_60577DBD);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", sceMSAudio_driver_A2161ACB);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_00004A60);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_00004A9C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_00004B90);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_00004C9C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_00004F70);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_000050C0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/msaudio", D_00006A18);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/msaudio", D_00006A1C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/msaudio", D_00006A20);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/msaudio", D_00006A28);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/msaudio", D_00006A30);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/msaudio", D_00006A38);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/msaudio", D_00006A44);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/msaudio", D_00006A50);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/msaudio", D_00006A5C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/msaudio", D_00006A68);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/msaudio", D_00006A74);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/msaudio", D_00006AE0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_00005100);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_00005148);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_000051FC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_000052BC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_0000535C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_00005508);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_00005594);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msaudio", func_000055E8);
#endif

INCLUDE_ASM("nonmatchings/msaudio", func_0000570C);

INCLUDE_ASM("nonmatchings/msaudio", func_00005780);

INCLUDE_ASM("nonmatchings/msaudio", func_00005A98);

INCLUDE_ASM("nonmatchings/msaudio", func_00005C18);

INCLUDE_ASM("nonmatchings/msaudio", func_00005D30);

INCLUDE_ASM("nonmatchings/msaudio", func_00005F4C);

INCLUDE_ASM("nonmatchings/msaudio", func_000061E4);

INCLUDE_ASM("nonmatchings/msaudio", func_0000637C);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/msaudio", D_00003050);
#endif

INCLUDE_ASM("nonmatchings/msaudio", func_00006414);
