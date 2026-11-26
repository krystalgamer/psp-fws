/* cflags: -Os */
#include "common.h"
#include "music_common_decls.h"

s32 func_000043C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_v1;

    var_v1 = 0x8000C0FF;
    if (arg0 != 0) {
        var_v1 = func_00012A24(arg0, arg1, arg2, arg3, arg4);
    }
    return var_v1;
}

s32 func_000043F0(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0x8000C0FF;
    if (arg0 != 0) {
        var_v1 = func_00012844(arg0, arg1);
    }
    return var_v1;
}

s32 func_00004420(struct Unk_func_00004420_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x8000C0FF;
    if (arg0 != NULL) {
        var_v1 = func_00012834(arg0, arg1);
    }
    return var_v1;
}

s32 func_00004450(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0x8000C0FF;
    if (arg0 != 0) {
        var_v1 = func_000125E0(arg0, arg1);
    }
    return var_v1;
}

s32 func_00004480(s32 arg0) {
    s32 var_v1;

    var_v1 = 0x8000C0FF;
    if (arg0 != 0) {
        var_v1 = func_00012698(arg0);
    }
    return var_v1;
}

s32 func_000044B0(struct Unk_func_000044B0_0 *arg0, s8 *arg1) {
    s32 var_v1;

    var_v1 = 0x8000C0FF;
    if (arg0 != NULL) {
        *arg1 = func_0001280C(arg0);
        var_v1 = 0;
    }
    return var_v1;
}

s32 func_000044F0(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0x8000C0FF;
    if (arg0 != 0) {
        var_v1 = func_0001281C(arg0, arg1);
    }
    return var_v1;
}

s32 func_00004520(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0x8000C0FF;
    if (arg0 != 0) {
        var_v1 = func_00012C7C(arg0, arg1);
    }
    return var_v1;
}

s32 func_00004550(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 var_v1;

    var_v1 = 0x8000C0FF;
    if (arg0 != 0) {
        var_v1 = func_00014B48(arg0, arg1 & 0xFF, arg2, arg3, arg4, arg5, arg6);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00004584);

s32 func_000045C8(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0x8000C0FF;
    if (arg0 != 0) {
        var_v1 = func_00012EFC(arg0, arg1 & 0xFF, arg2);
    }
    return var_v1;
}

#if FW_VERSION == 260
void func_00004C6C(void *arg0, s32 arg1, s8 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 4) = arg2;
}

void func_00004C78(void *arg0, s32 arg1, s8 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 4) = arg2;
}

void func_00004C84(void) {

}

void func_00004C8C(void) {

}

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00004C94);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00004DB8);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00004EDC);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_000050B4);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_000053B0);
#else
INCLUDE_ASM("nonmatchings/music_common_0043C0", func_000045FC);
#endif

#if FW_VERSION == 260
void func_000045FC(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0001EF10;
    func_00006A08((s32) arg0);
    func_00005D08((s32) arg0);
    func_0000640C((s32) arg0);
    M2C_FIELD(arg0, s8 *, 0xAF) = 0;
    func_000046F4(arg0 + 0x90);
}

void func_00005524(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0001EF10;
    func_00006A08((s32) arg0);
    func_00005D08((s32) arg0);
    func_0000640C((s32) arg0);
    M2C_FIELD(arg0, s8 *, 0xAF) = 0;
    func_000046F4(arg0 + 0x90);
}

void func_00005574(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0001EF10;
    func_00006A08((s32) arg0);
    func_00005D08((s32) arg0);
    func_0000640C((s32) arg0);
    M2C_FIELD(arg0, s8 *, 0xAF) = 0;
    func_000046F4(arg0 + 0x90);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_000055C8);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00005D08);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_000060AC);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000640C);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_000065D8);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00006A08);

u8 func_00006D08(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xAF);
}

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_000125E0);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00012698);

u32 func_0001280C(struct Unk_func_000044B0_0 *arg0) {
    return (u32) ~arg0->unk9C >> 0x1F;
}

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0001281C);

s32 func_00012834(struct Unk_func_00004420_0 *arg0, s32 *arg1) {
    *arg1 = arg0->unk98;
    return 0;
}

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00012844);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00012A24);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00012C7C);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00012CA0);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00012EFC);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00007728);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00008650);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00008704);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00008850);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00014B48);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00009E64);
#endif

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00004648);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00004694);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_000046B0);

void func_000046CC(struct Unk_func_000046CC_0 *arg0) {
    arg0->unk0 = &D_0001EF20;
    sceKernelDeleteSema(arg0->unk4);
}

void func_000046F4(struct Unk_func_000046F4_0 *arg0) {
    arg0->unk0 = &D_0001EF20;
    sceKernelDeleteSema(arg0->unk4);
}

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000471C);
#else
void func_0000471C(struct Unk_func_0000471C_0 *arg0) {
    arg0->unk0 = &D_0001EF20;
    sceKernelDeleteSema(arg0->unk4);
    scePaf_4E67BB08(arg0);
}
#endif

s32 func_00004758(s32 arg0) {
    return arg0;
}

s32 func_00004760(struct Unk_func_00004760_0 *arg0) {
    return arg0->unk4 > 0;
}

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000476C);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_000047A8);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_000047E4);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00004874);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_000048B0);

void func_000048E8(void) {
    sceKernelDelayThread();
}

s32 func_00004904(void) {
    return -1;
}

void func_0000490C(void) {
    sceKernelGetThreadId();
}

u32 func_00004928(s32 arg0) {
    return (u32) ~arg0 >> 0x1F;
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000A238);

INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_9F1B5B95);

INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_A0472F68);
#endif

#if FW_VERSION == 271
u8 func_000055E4(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xAC);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_2C03147D);

INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_3B03E04A);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000567C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000A740);

INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_9E5A3EE2);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000ABB4);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000ABE8);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00006428);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00006450);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000648C);
#else
INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00004934);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00004970);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_000049AC);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_000049F0);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00004A04);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00004A48);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00004A60);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00004A78);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00004A94);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00004AB0);

s32 func_00004AD0(s32 arg0) {
    s32 var_v1;

    var_v1 = 1;
    if (arg0 != 0) {
        var_v1 = 0;
        if (arg0 != 1) {
            var_v1 = arg0 != 2;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00004B68);
#endif

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_C394D92B);

INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_2591E02A);

INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_ACDC3F06);

INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_1DAC45B5);

INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_B53F0C21);

INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_5CD602D6);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_79F370C1);

INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_5C2678FA);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_CCCAC688);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_A14CA640);

INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_BD897CD8);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_73CE7B0A);
#endif

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EF10);
#endif

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EF20);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EF28);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EF34);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00006494);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_000066DC);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00006734);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00006800);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00006808);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00006810);

void func_000068F4(void) {

}

void func_0000B0E4(void) {

}

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000B0EC);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000B134);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000B194);
#else
INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EF40);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EF4C);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EF58);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EF68);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EF78);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EF84);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EF90);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EF9C);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EFAC);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EFBC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EFCC);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EFD4);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EFE0);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EFEC);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EFF8);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F004);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F010);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F01C);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F028);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F034);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F040);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_00021438);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_00021444);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_00021454);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_00021464);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_00021470);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0002147C);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_00021488);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_00021498);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_000214A8);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F048);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F054);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F060);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F06C);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F078);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F084);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_00021500);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_00021508);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_00023E28);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_00021510);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0002151C);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_00021528);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_00021534);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F090);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F09C);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F0AC);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F0BC);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F0C4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F0CC);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F0D8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F0E0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F0E8);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F0F4);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F0FC);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F108);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F110);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F11C);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F124);
#endif

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F12C);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F138);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F140);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000B3B8);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000B9B8);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000B9C4);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000B9D0);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000C23C);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000C2DC);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000C344);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000C3C4);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000C408);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000C438);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000C4C8);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000C548);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000C718);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000C75C);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000C894);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000C940);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000CB6C);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000CBC0);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000CC14);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000CE04);
#else
INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F144);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F150);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F158);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F164);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_00021610);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_00021638);
#endif

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_4515BF94);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_299CB545);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00004D88);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00005000);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00004E1C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00004E68);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00004EAC);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00004FB8);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_common_0043C0", func_000052E4);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00005330);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000536C);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_000053EC);
#endif

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_97B68AC5);

INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_FCF47242);

INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_7D01F064);

u8 func_00005AC4(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xB0);
}

INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_4F0F1156);

INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_6335AB71);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00005B5C);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00005BE4);

INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_866C28C1);

void music_common_9054BC13(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0001F2C8;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00006060);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00005B50);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00005B60);

s32 music_common_6E70D737(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_000060B0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 music_common_14CFD460(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_06CC5AF5);

s32 music_common_63670719(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00006130);

void func_00005CC4(struct Unk_func_00005CC4_0 *arg0) {
    s8 *temp_v1;

    temp_v1 = arg0->unkC;
    if ((temp_v1 != NULL) && (arg0->unk4 != 0)) {
        *temp_v1 = 0;
    }
    arg0->unk8 = 0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_07771D45);
#endif

#if FW_VERSION >= 340
INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_00024194);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0002419C);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_000241A4);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_000241AC);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_000241B4);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_000241BC);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_000241C4);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_000241CC);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_000241D4);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_000240E4);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_000240EC);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_000240F4);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_000240FC);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_00024104);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0002410C);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_00024114);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0002411C);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_00024124);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_000223D4);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_000223DC);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_000223E4);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_000223EC);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_000223F4);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_000223FC);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_00022404);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0002240C);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_00022414);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_000217CC);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_000217D4);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_000217DC);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_000217E4);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_000217EC);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_000217F4);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_000217FC);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_00021804);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0002180C);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F274);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_9F1B5B95);

INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_A0472F68);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_common_0043C0", func_000055AC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
u8 func_000055AC(struct Unk_func_000055AC_0 *arg0) {
    return arg0->unkAC;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000CE48);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000CE50);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000CE58);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000CE60);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000CE68);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_0000CE70);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00008580);

void func_0000CE80(void) {

}

void func_0000CE88(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0001F2C8;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
#endif
