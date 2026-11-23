#include "common.h"
#include "msaudio_decls.h"

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00000000);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00000194);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00000234);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_000002F8);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00000478);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00000570);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_000005C0);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_0000080C);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00000918);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00000B38);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00000C2C);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00000D98);

INCLUDE_RODATA("tmp/asm/340/msaudio/nonmatchings/msaudio", D_000069C8);

INCLUDE_RODATA("tmp/asm/340/msaudio/nonmatchings/msaudio", D_000069D0);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00000E84);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00001168);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_000011C8);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00001240);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00001360);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_0000145C);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_0000150C);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00001600);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00001820);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00001908);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00001938);

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

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_000019D4);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00001A2C);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00001A58);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00001ACC);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00001B78);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00001BD4);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00001C44);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00001C7C);

s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    sceMSAudio_driver_3872FBE5();
    return 0;
}

INCLUDE_RODATA("tmp/asm/340/msaudio/nonmatchings/msaudio", D_000069F0);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", sceMSAudio_driver_757F4FD3);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", sceMSAudio_driver_3872FBE5);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", sceMSAudio_driver_107D83D4);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", sceMSAudio_driver_DA34AB8F);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", sceMSAudio_driver_47F7DAFC);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", sceMSAudio_driver_7B953C1A);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", sceMSAudio_driver_80BD1592);

s32 func_000026B0(void *arg0) {
    s32 var_v1;

    var_v1 = 0x80508016;
    if (!(M2C_FIELD(arg0, u8 *, 0x2D) & 0x40) && ((var_v1 = 0, (M2C_FIELD(arg0, s32 *, 0x44) != 0)) || (M2C_FIELD(arg0, s32 *, 0x48) != 0))) {
        var_v1 = 0x80508016;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", sceMSAudio_driver_9E37E51D);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", sceMSAudio_driver_68EF9696);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", sceMSAudio_driver_45E1994B);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", sceMSAudio_driver_135F2225);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", sceMSAudio_driver_22DA9981);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", sceMSAudio_driver_5D1C9867);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", sceMSAudio_driver_67E58C07);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", sceMSAudio_driver_38178F2F);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", sceMSAudio_driver_86666DA6);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", sceMSAudio_driver_FE7BC654);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00003B60);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00003D20);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00003F10);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", sceMSAudio_driver_2685C036);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", sceMSAudio_driver_A18A1DF6);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", sceMSAudio_driver_E8B25D38);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", sceMSAudio_driver_66F19CA3);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", sceMSAudio_driver_383DEC75);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", sceMSAudio_driver_C1B87E96);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", sceMSAudio_driver_60577DBD);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", sceMSAudio_driver_A2161ACB);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00004A60);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00004A9C);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00004B90);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00004C9C);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00004F70);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_000050C0);

INCLUDE_RODATA("tmp/asm/340/msaudio/nonmatchings/msaudio", D_00006A18);

INCLUDE_RODATA("tmp/asm/340/msaudio/nonmatchings/msaudio", D_00006A1C);

INCLUDE_RODATA("tmp/asm/340/msaudio/nonmatchings/msaudio", D_00006A20);

INCLUDE_RODATA("tmp/asm/340/msaudio/nonmatchings/msaudio", D_00006A28);

INCLUDE_RODATA("tmp/asm/340/msaudio/nonmatchings/msaudio", D_00006A30);

INCLUDE_RODATA("tmp/asm/340/msaudio/nonmatchings/msaudio", D_00006A38);

INCLUDE_RODATA("tmp/asm/340/msaudio/nonmatchings/msaudio", D_00006A44);

INCLUDE_RODATA("tmp/asm/340/msaudio/nonmatchings/msaudio", D_00006A50);

INCLUDE_RODATA("tmp/asm/340/msaudio/nonmatchings/msaudio", D_00006A5C);

INCLUDE_RODATA("tmp/asm/340/msaudio/nonmatchings/msaudio", D_00006A68);

INCLUDE_RODATA("tmp/asm/340/msaudio/nonmatchings/msaudio", D_00006A74);

INCLUDE_RODATA("tmp/asm/340/msaudio/nonmatchings/msaudio", D_00006AE0);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00005100);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00005148);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_000051FC);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_000052BC);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_0000535C);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00005508);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00005594);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_000055E8);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_0000570C);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00005780);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00005A98);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00005C18);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00005D30);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00005F4C);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_000061E4);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_0000637C);

INCLUDE_ASM("tmp/asm/340/msaudio/nonmatchings/msaudio", func_00006414);
