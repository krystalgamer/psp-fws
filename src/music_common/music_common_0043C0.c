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

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_000045FC);

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

void func_0000471C(struct Unk_func_0000471C_0 *arg0) {
    arg0->unk0 = &D_0001EF20;
    sceKernelDeleteSema(arg0->unk4);
    scePaf_4E67BB08(arg0);
}

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

INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_79F370C1);

INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_5C2678FA);

INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_A14CA640);

INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_BD897CD8);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EF10);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EF20);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EF28);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EF34);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EF40);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EF4C);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EF58);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EF68);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EF78);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EF84);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EF90);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EF9C);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EFAC);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001EFBC);

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

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F048);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F054);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F060);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F06C);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F078);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F084);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F090);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F09C);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F0AC);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F0BC);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F0C4);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F0CC);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F0D8);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F0E0);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F0E8);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F0F4);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F0FC);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F108);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F110);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F11C);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F124);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F12C);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F138);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F140);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F144);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F150);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F158);

INCLUDE_RODATA("nonmatchings/music_common_0043C0", D_0001F164);

INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_299CB545);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00004D88);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00004E1C);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00004E68);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00004EAC);

INCLUDE_ASM("nonmatchings/music_common_0043C0", func_00004FB8);

INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_07771D45);

INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_9F1B5B95);

INCLUDE_ASM("nonmatchings/music_common_0043C0", music_common_A0472F68);

u8 func_000055AC(struct Unk_func_000055AC_0 *arg0) {
    return arg0->unkAC;
}

