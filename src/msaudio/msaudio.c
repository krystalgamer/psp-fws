/* cflags: -Os */
#include "common.h"
#include "k1.h"
#include "msaudio_decls.h"

INCLUDE_ASM("nonmatchings/msaudio", func_00000000);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/msaudio", func_00000194);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 340
INCLUDE_ASM("nonmatchings/msaudio", func_00000234);

INCLUDE_ASM("nonmatchings/msaudio", func_000002F8);

INCLUDE_ASM("nonmatchings/msaudio", func_00000478);

s32 func_00000570(struct Unk_func_00000570_0 *arg0, struct Unk_func_00000570_1 *arg1) {
    s32 temp_v1;
    s32 var_a2;

    temp_v1 = (arg1->unk15 + (arg1->unk14 << 8)) - 1;
    var_a2 = 0x8050800D;
    if (temp_v1 >= 0) {
        var_a2 = temp_v1;
        arg0->unk0 = arg1->unk28;
        arg0->unk4 = arg1->unk2C;
        if (temp_v1 > 0) {
            arg0->unk8 = arg1->unk30;
            arg0->unkC = arg1->unk34;
        }
    }
    return var_a2;
}

INCLUDE_ASM("nonmatchings/msaudio", func_000005C0);

INCLUDE_ASM("nonmatchings/msaudio", func_0000080C);

INCLUDE_ASM("nonmatchings/msaudio", func_00000918);

s32 func_00000B38(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s0;

    temp_v0 = func_000003A4(&D_00006DE0);
    var_s0 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = sceMgrAllocKeyReg(2);
        if (temp_v0_2 >= 0) {
            temp_v0_3 = sceMgrGenerateKb(temp_v0_2, &D_00006A60, &D_00006A60, arg3);
            var_s0 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                var_s0 = sceMgrGenerateMACWithKbCBC(arg0, arg1, 0, arg2, temp_v0_2);
            }
            sceMgrFreeKeyReg(temp_v0_2);
        }
        if (var_s0 < 0) {
            var_s0 = func_00000000(var_s0);
        }
        func_00000424(&D_00006DE0);
    }
    return var_s0;
}

INCLUDE_ASM("nonmatchings/msaudio", func_00000C2C);

INCLUDE_ASM("nonmatchings/msaudio", func_00000D98);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006A60);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006A68);
#endif

#if FW_VERSION >= 340
s32 func_00000234(s32 arg0, M2C_UNK arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s2;
    s32 var_v0;

    var_s2 = -1;
    var_v0 = func_00000194(arg1);
    if (var_v0 >= 0) {
        temp_v0 = sceMgrAllocKeyReg(1);
        var_s0 = temp_v0;
        if (temp_v0 >= 0) {
            var_s2 = temp_v0;
            temp_v0_2 = sceMgrDecryptKc(temp_v0, arg0, var_v0);
            var_s0 = temp_v0_2;
            if (temp_v0_2 >= 0) {
                sceMgrFreeKeyReg(var_v0);
                return temp_v0;
            }
        }
        if (var_v0 >= 0) {
            sceMgrFreeKeyReg(var_v0);
        }
        if (var_s2 >= 0) {
            sceMgrFreeKeyReg(var_s2);
        }
        var_v0 = func_00000000(var_s0);
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/msaudio", func_000002F8);

INCLUDE_ASM("nonmatchings/msaudio", func_00000478);

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

INCLUDE_ASM("nonmatchings/msaudio", func_000005C0);

INCLUDE_ASM("nonmatchings/msaudio", func_0000080C);

INCLUDE_ASM("nonmatchings/msaudio", func_00000918);

INCLUDE_ASM("nonmatchings/msaudio", func_00000B38);

INCLUDE_ASM("nonmatchings/msaudio", func_00000C2C);

INCLUDE_ASM("nonmatchings/msaudio", func_00000D98);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/msaudio", D_0000678C);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006790);

INCLUDE_RODATA("nonmatchings/msaudio", D_000067A4);

INCLUDE_RODATA("nonmatchings/msaudio", D_000067BC);

INCLUDE_RODATA("nonmatchings/msaudio", D_000067D4);

INCLUDE_RODATA("nonmatchings/msaudio", D_000067EC);

INCLUDE_RODATA("nonmatchings/msaudio", D_000067FC);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006814);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006828);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006910);

INCLUDE_RODATA("nonmatchings/msaudio", D_0000691C);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006930);

INCLUDE_RODATA("nonmatchings/msaudio", D_000069B8);

INCLUDE_RODATA("nonmatchings/msaudio", D_000069BC);
#endif

#if FW_VERSION >= 340
INCLUDE_RODATA("nonmatchings/msaudio", D_000069C8);

INCLUDE_RODATA("nonmatchings/msaudio", D_000069D0);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/msaudio", func_00000E84);

INCLUDE_ASM("nonmatchings/msaudio", func_00001168);

INCLUDE_ASM("nonmatchings/msaudio", func_000011C8);

INCLUDE_ASM("nonmatchings/msaudio", func_00001240);

INCLUDE_ASM("nonmatchings/msaudio", func_00001360);

INCLUDE_ASM("nonmatchings/msaudio", func_0000145C);

INCLUDE_ASM("nonmatchings/msaudio", func_0000150C);

INCLUDE_ASM("nonmatchings/msaudio", func_00001600);
#endif

INCLUDE_ASM("nonmatchings/msaudio", func_00001820);

#if FW_VERSION < 340
s32 func_000002D8(void *arg0) {
    void *temp_v0;

    temp_v0 = arg0 + 0xFFC;
    return M2C_FIELD(temp_v0, u8 *, 3) + (M2C_FIELD(temp_v0, u8 *, 2) << 8) + (M2C_FIELD(temp_v0, u8 *, 1) << 0x10) + (M2C_FIELD(arg0, u8 *, 0xFFC) << 0x18);
}
#else
s32 func_00001908(struct Unk_func_00001908_0 *arg0) {
    struct Unk_func_00001908_temp_v0 *temp_v0;

    temp_v0 = &arg0->unkFFC;
    return temp_v0->unk3 + (temp_v0->unk2 << 8) + (temp_v0->unk1 << 0x10) + (arg0->unkFFC << 0x18);
}
#endif

INCLUDE_ASM("nonmatchings/msaudio", func_00001938);

#if FW_VERSION < 340
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

#if (FW_VERSION >= 102 && FW_VERSION < 151) || (FW_VERSION >= 250 && FW_VERSION < 340)
INCLUDE_ASM("nonmatchings/msaudio", func_000003A4);

INCLUDE_ASM("nonmatchings/msaudio", func_00000424);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msaudio", D_00006A88);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 151 && FW_VERSION < 250)
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
            Kprintf("msaudio.c:%s:Error int sceKernelWaitSema (ret=%x))\n", "_msaSemaLock", var_s0);
        }
    }
    return var_s0;
}

s32 func_00000424(s32 *arg0) {
    s32 var_v0;

    var_v0 = sceKernelSignalSema(*arg0, 1);
    if (var_v0 != 0) {
        Kprintf("msaudio.c:%s:Error in sceKernelSignalSema (ret=%x))\n", "_msaSemaUnlock", var_v0);
        var_v0 = 0x80508001;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 340
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

INCLUDE_ASM("nonmatchings/msaudio", func_000019D4);

INCLUDE_ASM("nonmatchings/msaudio", func_00001A2C);
#endif

INCLUDE_ASM("nonmatchings/msaudio", func_00001A58);

INCLUDE_ASM("nonmatchings/msaudio", func_00001ACC);

INCLUDE_ASM("nonmatchings/msaudio", func_00001B78);

#if FW_VERSION >= 201 && FW_VERSION < 340
INCLUDE_ASM("nonmatchings/msaudio", func_00001C18);

INCLUDE_ASM("nonmatchings/msaudio", func_00001C80);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 340
INCLUDE_ASM("nonmatchings/msaudio", func_000005C4);
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/msaudio", func_00001BD4);

INCLUDE_ASM("nonmatchings/msaudio", func_00001C44);

INCLUDE_ASM("nonmatchings/msaudio", func_00001C7C);
#endif

s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    sceMSAudioEnd();
    return 0;
}

#if FW_VERSION >= 250 && FW_VERSION < 340
INCLUDE_RODATA("nonmatchings/msaudio", D_00006A88);
#endif

#if FW_VERSION >= 340
INCLUDE_RODATA("nonmatchings/msaudio", D_000069F0);
#endif

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudioInit);

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudioEnd);

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudioAuth);

#if FW_VERSION >= 201 && FW_VERSION < 340
s32 sceMSAudioGetMediaType(void) {
    s32 var_v1;
    u32 temp_a0;

    temp_a0 = shiftK1();
    var_v1 = 0x80508004;
    if ((u32) M2C_VFIELD(&D_00006CA0, u32, 0x138) >= 2U) {
        var_v1 = M2C_VFIELD(&D_00006CA0, s32, 0x2D4);
    }
    setK1(temp_a0);
    return var_v1;
}
#endif

#if FW_VERSION >= 340
s32 sceMSAudioGetMediaType(void) {
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

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudioCheckICV);

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudioCheckICVn);

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudioDeauth);

#if FW_VERSION >= 201 && FW_VERSION < 340
s32 func_00002700(void *arg0) {
    s32 var_v1;

    var_v1 = 0x80508016;
    if (!(M2C_FIELD(arg0, u8 *, 0x2D) & 0x40) && ((var_v1 = 0, (M2C_FIELD(arg0, s32 *, 0x44) != 0)) || (M2C_FIELD(arg0, s32 *, 0x48) != 0))) {
        var_v1 = 0x80508016;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 340
s32 func_000026B0(struct Unk_func_000026B0_0 *arg0) {
    s32 var_v1;

    var_v1 = 0x80508016;
    if (!(arg0->unk2D & 0x40) && ((var_v1 = 0, (arg0->unk44 != 0)) || (arg0->unk48 != 0))) {
        var_v1 = 0x80508016;
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudioInitTrack);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/msaudio", sceMSAudio_driver_68EF9696);

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudio_driver_45E1994B);
#endif

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/msaudio", sceMSAudioEndTrack);
#else
s32 sceMSAudioEndTrack(u32 arg0) {
    if (D_00003088 != 0) {
        if (arg0 < 3U) {
            func_00001B78((s32) arg0);
        }
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudioInitFringe);

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudioDecryptFringe);

#if FW_VERSION >= 152
s32 sceMSAudioEndFringe(void) {
    u32 temp_v0;

    temp_v0 = shiftK1();
    setK1(temp_v0);
    return 0;
}
#else
s32 sceMSAudioEndFringe(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudioDecryptTrack);

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudioInvalidateICV);

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudioReadMACList);

#if FW_VERSION >= 201 && FW_VERSION < 340
INCLUDE_ASM("nonmatchings/msaudio", func_00003BD4);

INCLUDE_ASM("nonmatchings/msaudio", func_00003D94);

INCLUDE_ASM("nonmatchings/msaudio", func_00003F74);
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/msaudio", func_00003B60);

INCLUDE_ASM("nonmatchings/msaudio", func_00003D20);

INCLUDE_ASM("nonmatchings/msaudio", func_00003F10);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/msaudio", sceMSAudio_driver_2685C036);
#endif

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudioClearMACEntry);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msaudio", sceMSAudioCalculateICVn);
#else
s32 sceMSAudioCalculateICVn(void) {
    u32 temp_v0;

    temp_v0 = shiftK1();
    setK1(temp_v0);
    return 0x80508011;
}
#endif

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudioUpdateIBD);

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudioGetInitialEKB);

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudioFormatICV);

INCLUDE_ASM("nonmatchings/msaudio", sceMSAudioGetICVInfo);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/msaudio", sceMSAudioGetICVEKBVersion);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 340
INCLUDE_ASM("nonmatchings/msaudio", func_00004AE8);

INCLUDE_ASM("nonmatchings/msaudio", func_00004B24);

INCLUDE_ASM("nonmatchings/msaudio", func_00004C18);

INCLUDE_ASM("nonmatchings/msaudio", func_00004D24);

INCLUDE_ASM("nonmatchings/msaudio", func_00004FF8);

INCLUDE_ASM("nonmatchings/msaudio", func_00005148);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006B38);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006B3C);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006B40);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006B48);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006B50);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006B58);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006B64);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006B70);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006B7C);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006B88);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006B94);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006C00);

INCLUDE_ASM("nonmatchings/msaudio", func_00005188);

INCLUDE_ASM("nonmatchings/msaudio", func_000051D0);

INCLUDE_ASM("nonmatchings/msaudio", func_00005284);

INCLUDE_ASM("nonmatchings/msaudio", func_00005344);

INCLUDE_ASM("nonmatchings/msaudio", func_000053E4);

INCLUDE_ASM("nonmatchings/msaudio", func_00005590);

INCLUDE_ASM("nonmatchings/msaudio", func_0000561C);

INCLUDE_ASM("nonmatchings/msaudio", func_00005670);
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/msaudio", func_00004A60);

INCLUDE_ASM("nonmatchings/msaudio", func_00004A9C);

INCLUDE_ASM("nonmatchings/msaudio", func_00004B90);

INCLUDE_ASM("nonmatchings/msaudio", func_00004C9C);

INCLUDE_ASM("nonmatchings/msaudio", func_00004F70);

INCLUDE_ASM("nonmatchings/msaudio", func_000050C0);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006A18);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006A1C);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006A20);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006A28);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006A30);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006A38);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006A44);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006A50);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006A5C);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006A68);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006A74);

INCLUDE_RODATA("nonmatchings/msaudio", D_00006AE0);

INCLUDE_ASM("nonmatchings/msaudio", func_00005100);

INCLUDE_ASM("nonmatchings/msaudio", func_00005148);

INCLUDE_ASM("nonmatchings/msaudio", func_000051FC);

INCLUDE_ASM("nonmatchings/msaudio", func_000052BC);

INCLUDE_ASM("nonmatchings/msaudio", func_0000535C);

INCLUDE_ASM("nonmatchings/msaudio", func_00005508);

INCLUDE_ASM("nonmatchings/msaudio", func_00005594);

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

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/msaudio", D_00003050);
#endif

INCLUDE_ASM("nonmatchings/msaudio", func_00006414);
