#include "common.h"
#include "msvideo_main_plugin_decls.h"

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000105E0);

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AEAB0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AEAC4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AEAE0);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00010798);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00010A14);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00010A64);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00010AE4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00010CC8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00010D08);

void func_00010EC8(struct Unk_func_00010EC8_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00010ED8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00010F18);

void func_00010F94(struct Unk_func_00010F94_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = arg0->unk8;
    temp_v0 = arg0->unk4 - 1;
    arg0->unk4 = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_00010FD8((s32) arg0, temp_v1 - 0xA);
    }
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00010FD8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00011134);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000111C8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00011980);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001199C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00011A5C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00011AE4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00011B00);

void *func_00011E34(struct Unk_func_00011E34_0 *arg0) {
    return (arg0->unk30 == 0) ? NULL : ((u8 *)arg0 + 0x54);
}

void func_00011E44(void) {
    func_00012034();
}

void func_00011E60(void) {
    func_0001208C();
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00011E7C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00011EC0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00011F40);

s32 *func_00011FFC(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_000122BC(arg1, arg2);
    return arg0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00012034);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001208C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000120B8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000122BC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000123C4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000124FC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00012550);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000126E4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00012824);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00012C10);

void func_00012D2C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_00015D84(arg0, 2, (arg3 << 0x10) + (arg4 & 0xFFFF));
    func_00012C10(arg0, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00012D8C);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AF5E8);

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AF5F8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AF604);
#endif

#if FW_VERSION < 310 || FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AF60C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AF61C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AF620);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AF628);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AF630);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AF638);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AF640);
#endif

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AEBEC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AEC00);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00012DEC);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFFE8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B0024);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B0030);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B0044);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B004C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B005C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B0060);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B0068);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B0070);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B0078);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B63AC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AF6A0);
#endif

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AEC44);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AEC80);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000135F0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001360C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000137A0);
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000136BC);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00013714);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00013730);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00013A10);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 352
void *func_00013A10(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 0x30) == 0) ? NULL : (arg0 + 0x54);
}
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00013A20);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00013A3C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00013A58);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00013A9C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00013B1C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00013BD8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00013C10);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00013C68);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00013C94);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00013E50);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00013F10);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00014048);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001409C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001422C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00014368);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00014754);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00014870);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 352
void func_00014870(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_00015D84(arg0, 2, (arg3 << 0x10) + (arg4 & 0xFFFF));
    func_00014754(arg0, arg1, arg2);
}
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000148D0);
#else
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AF648);
#endif

#if FW_VERSION < 310 || FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AF6A0);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00012F0C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00012FF8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00013688);

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B0160);
#endif

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AED38);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00013868);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00013A90);

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AF744);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AF758);

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B0184);
#endif

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AED5C);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AF768);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00013B48);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00013BB0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00013C3C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00013D7C);

#if FW_VERSION == 300 || FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00013DF8);
#else
s32 func_00013DF8(void *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 6;
    if (arg1 != 0) {
        var_v0 = func_0002CC00(arg1, ((M2C_FIELD(arg0, s32 *, 0x38) ^ 2) != 0) ? 0 : 2);
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00013E70);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00013EDC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00013F5C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00013FD4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00014040);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00014390);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00014480);

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001633C);
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00016108);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00014678);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00014734);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00014794);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00014928);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000149DC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00014AA8);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00016630);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001696C);
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00014B84);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00014EB8);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00014F14);

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00014FD8);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 352
void func_00014FD8(struct Unk_func_00014FD8_0 *arg0) {
    if (D_000B602C != 1) {
        arg0->pad0[0xB0] = 1;
        func_00013C3C((s32) arg0);
    }
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
void func_00014FD8(struct Unk_func_00014FD8_0 *arg0) {
    if (D_000B602C != 1) {
        arg0->pad0[0xAC] = 1;
        func_00013C3C((s32) arg0);
    }
}
#endif

#if FW_VERSION == 352
void func_00014FD8(struct Unk_func_00014FD8_0 *arg0) {
    if (D_000B602C != 1) {
        arg0->unkB4 = 1;
        func_00013C3C((s32) arg0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00015008);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001505C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000152B0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00015414);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00015608);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00015658);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00015714);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000157A4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00015860);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001590C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000159C0);

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B01B8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B01C0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B01D4);
#endif

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AED90);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AED98);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AEDAC);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00015A48);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00015A78);

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00015AB0);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 352
void func_00015AB0(struct Unk_func_00015AB0_0 *arg0, s32 arg1) {
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0xC0) = arg1;
    }
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
void func_00015AB0(struct Unk_func_00015AB0_0 *arg0, s32 arg1) {
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0xBC) = arg1;
    }
}
#endif

#if FW_VERSION == 352
void func_00015AB0(struct Unk_func_00015AB0_0 *arg0, s32 arg1) {
    if (arg1 != 0) {
        arg0->unkC4 = arg1;
    }
}
#endif

s32 func_00015AC0(s32 arg0) {
    if (D_000B602C != 0) {

    } else {
        func_00012FF8(arg0);
        func_000001B8(0);
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00015B00);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00015B3C);

s32 func_00015CE8(struct Unk_func_00015CE8_0 *arg0) {
    return arg0->unk4;
}

void func_00015CF0(struct Unk_func_00015CF0_0 *arg0, s32 arg1) {
    arg0->unk8 = arg1;
}

s32 func_00015CF8(struct Unk_func_00015CF8_0 *arg0) {
    return arg0->unk8;
}

s32 func_00015D00(struct Unk_func_00015D00_0 *arg0) {
    return arg0->unk14;
}

s32 func_00015D08(struct Unk_func_00015D08_0 *arg0, s32 arg1) {
    return arg0->unk14 & arg1;
}

void func_00015D14(struct Unk_func_00015D14_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk14 = (s32) ((arg0->unk14 & ~arg2) | (arg1 & arg2));
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00015D30);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00015D84);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00016148);

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000161A8);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 352
s32 func_000161A8(struct Unk_func_000161A8_0 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x6C);
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
s32 func_000161A8(struct Unk_func_000161A8_0 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x68);
}
#endif

#if FW_VERSION == 352
s32 func_000161A8(struct Unk_func_000161A8_0 *arg0) {
    return arg0->unk70;
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000161B0);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 352
s32 func_000161B0(s32 arg0) {
    return arg0 + 0x70;
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
s32 func_000161B0(s32 arg0) {
    return arg0 + 0x6C;
}
#endif

#if FW_VERSION == 352
s32 func_000161B0(s32 arg0) {
    return arg0 + 0x74;
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000161B8);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 352
void *func_000161B8(struct Unk_func_000161B8_0 *arg0) {
    u8 *var_v1;

    var_v1 = NULL;
    if ((M2C_FIELD(arg0, s32 *, 0x88) != 0) || (arg0->unk8C != 0)) {
        var_v1 = &arg0->pad0[0x84];
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
void *func_000161B8(struct Unk_func_000161B8_0 *arg0) {
    u8 *var_v1;

    var_v1 = NULL;
    if ((M2C_FIELD(arg0, s32 *, 0x84) != 0) || (M2C_FIELD(arg0, s32 *, 0x88) != 0)) {
        var_v1 = &arg0->pad0[0x80];
    }
    return var_v1;
}
#endif

#if FW_VERSION == 352
void *func_000161B8(struct Unk_func_000161B8_0 *arg0) {
    void *var_v1;

    var_v1 = NULL;
    if ((arg0->unk8C != 0) || (arg0->unk90 != 0)) {
        var_v1 = (u8 *)arg0 + 0x88;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000161DC);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 352
s32 func_000161DC(struct Unk_func_000161DC_0 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xA4);
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
s32 func_000161DC(struct Unk_func_000161DC_0 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xA0);
}
#endif

#if FW_VERSION == 352
s32 func_000161DC(struct Unk_func_000161DC_0 *arg0) {
    return arg0->unkA8;
}
#endif

s32 func_000161E4(struct Unk_func_000161E4_0 *arg0) {
    return arg0->unk10;
}

void func_000161EC(struct Unk_func_000161EC_0 *arg0, s32 arg1) {
    arg0->unk10 = arg1;
}

s32 func_000161F4(struct Unk_func_000161F4_0 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (arg0->unk18 & 0x10) {
        var_v1 = arg0->unk30;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00016210);

s32 func_00016234(struct Unk_func_00016234_0 *arg0) {
    return arg0->unkC;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001623C);

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00016398);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 352
void func_00016398(struct Unk_func_00016398_0 *arg0) {
    arg0->pad0[0xC4] = 1;
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
void func_00016398(struct Unk_func_00016398_0 *arg0) {
    arg0->pad0[0xC0] = 1;
}
#endif

#if FW_VERSION == 352
void func_00016398(struct Unk_func_00016398_0 *arg0) {
    arg0->unkC8 = 1;
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000163A4);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 352
u8 func_000163A4(struct Unk_func_000163A4_0 *arg0) {
    return arg0->pad0[0xC4];
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
u8 func_000163A4(struct Unk_func_000163A4_0 *arg0) {
    return arg0->pad0[0xC0];
}
#endif

#if FW_VERSION == 352
u8 func_000163A4(struct Unk_func_000163A4_0 *arg0) {
    return arg0->unkC8;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000163AC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00016428);

void func_00016474(M2C_UNK **arg0) {
    *arg0 = &D_000AF7B0;
    func_00016C58((s32) arg0);
}

void func_0001649C(M2C_UNK **arg0) {
    *arg0 = &D_000AF7B0;
    func_00016C58((s32) arg0);
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000164C4);
#else
void func_000164C4(M2C_UNK **arg0) {
    *arg0 = &D_000AF7B0;
    func_00016C58((s32) arg0);
    scePaf_6261C0A5((s32) arg0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000164FC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000165F0);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00018074);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001813C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000183BC);
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00016638);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000166B0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00016890);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000169D0);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 352
s32 func_000169D0(void) {
    s32 temp_v0_2;
    s32 var_v1;
    void *temp_v0;

    temp_v0 = func_000165F0();
    var_v1 = 4;
    if (temp_v0 != NULL) {
        temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 0x10);
        if (temp_v0_2 != 0) {
            scePaf_35F25BA1(0, temp_v0_2);
            var_v1 = 0;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 352
s32 func_000169D0(void) {
    s32 temp_v0_2;
    s32 var_v1;
    struct Unk_func_000169D0_temp_v0 *temp_v0;

    temp_v0 = func_000165F0();
    var_v1 = 4;
    if (temp_v0 != NULL) {
        temp_v0_2 = temp_v0->unk10;
        if (temp_v0_2 != 0) {
            scePaf_47B886E3(0, temp_v0_2);
            var_v1 = 0;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00016A18);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 352
s32 func_00016A18(void *arg0, s32 arg1) {
    s32 temp_a1;
    s32 var_s1;
    s32 var_s3;
    void *temp_v0;
    void *var_s0;

    var_s3 = 0;
    var_s1 = 0x1F;
    var_s0 = arg0;
    do {
        temp_a1 = M2C_FIELD(var_s0, s32 *, 0x18);
        var_s1 -= 1;
        if ((temp_a1 != 0) && (M2C_FIELD(var_s0, void **, 8) == arg1)) {
            var_s3 += 1;
            scePaf_35F25BA1(0, temp_a1);
            temp_v0 = M2C_FIELD(var_s0, void **, 8);
            if (temp_v0 != NULL) {
                M2C_FIELD(temp_v0, s8 *, 0x65) = 1;
            }
        }
        var_s0 += 0x14;
    } while (var_s1 >= 0);
    return var_s3;
}
#endif

#if FW_VERSION == 352
s32 func_00016A18(void *arg0, s32 arg1) {
    s32 temp_a1;
    s32 var_s1;
    s32 var_s3;
    struct Unk_func_00016A18_temp_v0 *temp_v0;
    void *var_s0;

    var_s3 = 0;
    var_s1 = 0x1F;
    var_s0 = arg0;
    do {
        temp_a1 = M2C_FIELD(var_s0, s32 *, 0x18);
        var_s1 -= 1;
        if ((temp_a1 != 0) && (M2C_FIELD(var_s0, void **, 8) == arg1)) {
            var_s3 += 1;
            scePaf_47B886E3(0, temp_a1);
            temp_v0 = M2C_FIELD(var_s0, void **, 8);
            if (temp_v0 != NULL) {
                temp_v0->unk65 = 1;
            }
        }
        var_s0 += 0x14;
    } while (var_s1 >= 0);
    return var_s3;
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00016AA8);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 352
s32 func_00016AA8(void *arg0) {
    s32 temp_v0;
    s32 var_s1;
    s32 var_s2;
    void *temp_v0_2;
    void *var_s0;

    var_s2 = 0;
    var_s1 = 0x1F;
    var_s0 = arg0;
    do {
        temp_v0 = M2C_FIELD(var_s0, s32 *, 0x18);
        var_s1 -= 1;
        if (temp_v0 != 0) {
            var_s2 += 1;
            scePaf_35F25BA1(0, temp_v0);
            temp_v0_2 = M2C_FIELD(var_s0, void **, 8);
            if (temp_v0_2 != NULL) {
                M2C_FIELD(temp_v0_2, s8 *, 0x65) = 1;
            }
        }
        var_s0 += 0x14;
    } while (var_s1 >= 0);
    return var_s2;
}
#endif

#if FW_VERSION == 352
s32 func_00016AA8(void *arg0) {
    s32 temp_v0;
    s32 var_s1;
    s32 var_s2;
    struct Unk_func_00016AA8_temp_v0_2 *temp_v0_2;
    void *var_s0;

    var_s2 = 0;
    var_s1 = 0x1F;
    var_s0 = arg0;
    do {
        temp_v0 = M2C_FIELD(var_s0, s32 *, 0x18);
        var_s1 -= 1;
        if (temp_v0 != 0) {
            var_s2 += 1;
            scePaf_47B886E3(0, temp_v0);
            temp_v0_2 = M2C_FIELD(var_s0, void **, 8);
            if (temp_v0_2 != NULL) {
                temp_v0_2->unk65 = 1;
            }
        }
        var_s0 += 0x14;
    } while (var_s1 >= 0);
    return var_s2;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00016B28);

void func_00016BB4(s32 arg0) {
    func_00016B28(arg0, func_000165F0());
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00016BE4);

void func_00016C58(s32 arg0) {
    s32 var_s1;
    void *var_s0;

    var_s1 = 0x1F;
    var_s0 = arg0 + 8;
    do {
        var_s1 -= 1;
        func_00016B28(arg0, var_s0);
        var_s0 += 0x14;
    } while (var_s1 >= 0);
}

s32 func_00016CA8(struct Unk_func_00016CA8_0 *arg0, s32 arg1) {
    s32 var_a2;
    s32 var_a3;
    void *var_v1;

    var_a3 = 0;
    var_v1 = arg0;
    var_a2 = 0x1F;
    if (arg1 != 0) {
        do {
            var_a2 -= 1;
            if (M2C_FIELD(var_v1, s32 *, 8) == arg1) {
                var_a3 += M2C_FIELD(var_v1, s32 *, 0x18) != 0;
            }
            var_v1 += 0x14;
        } while (var_a2 >= 0);
    } else {
        var_a3 = arg0->unk28C;
    }
    return var_a3;
}

void func_00016CEC(struct Unk_func_00016CEC_0 *arg0) {
    arg0->unk28C = (s32) (arg0->unk28C + 1);
}

void func_00016CFC(struct Unk_func_00016CFC_0 *arg0) {
    arg0->unk28C = (s32) (arg0->unk28C - 1);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00016D0C);

void func_00016D2C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00016DC4();
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00016D4C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00016DC4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00016DE4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00016E18);

void func_00016E4C(M2C_UNK **arg0) {
    *arg0 = &D_000AF830;
    D_000B60EC = 0;
    func_000466D4((s32) arg0);
}

void func_00016E78(M2C_UNK **arg0) {
    *arg0 = &D_000AF830;
    D_000B60EC = 0;
    func_000466D4((s32) arg0);
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00016EA4);
#else
void func_00016EA4(M2C_UNK **arg0) {
    *arg0 = &D_000AF830;
    D_000B60EC = 0;
    func_000466D4((s32) arg0);
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AF7A0);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AF7B0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00016EE4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00016F50);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00016F5C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001701C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00017140);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000171D8);
#else
s32 func_000171D8(struct Unk_func_000171D8_0 *arg0) {
    return (sceVshCommonGui_CBD3BD66(arg0->unk4, arg0->unk8, "msvideo_option_menu_plane", 0, "msvideo_option_menu_list", 0, 0) == 0) ? 0 : 0xFF;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00017220);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00017250);

void func_00017280(M2C_UNK **arg0) {
    *arg0 = &D_000AF8F0;
    D_000B60F0 = 0;
    func_000466D4((s32) arg0);
}

void func_000172AC(M2C_UNK **arg0) {
    *arg0 = &D_000AF8F0;
    D_000B60F0 = 0;
    func_000466D4((s32) arg0);
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000172D8);
#else
void func_000172D8(M2C_UNK **arg0) {
    *arg0 = &D_000AF8F0;
    D_000B60F0 = 0;
    func_000466D4((s32) arg0);
    scePaf_6261C0A5((s32) arg0);
}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AF810);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AF830);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00017318);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00017384);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00017390);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001740C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00017454);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00017498);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000174DC);
#else
void func_000174DC(M2C_UNK **arg0) {
    *arg0 = &D_000AFD48;
    sceVshCommonGui_891DD627(0);
    D_000B60F4 = 0;
    func_00004374((s32) arg0);
}
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00017520);
#else
void func_00017520(M2C_UNK **arg0) {
    *arg0 = &D_000AFD48;
    sceVshCommonGui_891DD627(0);
    D_000B60F4 = 0;
    func_00004374((s32) arg0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00017564);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AF8F0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000175B0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001761C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00017628);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AF954);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AF970);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000176D4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AF9A4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AF9AC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AF9C0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AF9D0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00017A54);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001B024);
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000195C8);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000195F8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000196B4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000197C4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001989C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00019968);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00019A3C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00019BBC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFA10);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFA18);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFA30);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFA44);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFA54);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFA70);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFA90);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFAAC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFACC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFAD4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFAE8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFB04);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFB24);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFB40);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFB58);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFB70);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFB98);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFBB8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFBE0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFC04);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFC0C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFC34);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFC48);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFC64);

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFC78);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFC84);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFC9C);

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B081C);
#endif

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AF3F4);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFCB0);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFCDC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFCF0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFD04);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFD0C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00019C6C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00019E98);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00019EEC);

void func_00019F40(M2C_UNK **arg0) {
    *arg0 = &D_000AFF00;
    D_000B60F8 = 0;
    func_00004374((s32) arg0);
}

void func_00019F6C(M2C_UNK **arg0) {
    *arg0 = &D_000AFF00;
    D_000B60F8 = 0;
    func_00004374((s32) arg0);
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00019F98);
#else
void func_00019F98(M2C_UNK **arg0) {
    *arg0 = &D_000AFF00;
    D_000B60F8 = 0;
    func_00004374((s32) arg0);
    scePaf_6261C0A5((s32) arg0);
}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFD30);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFD34);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFD38);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFD3C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFD48);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00019FD8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001A044);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001A050);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001A31C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001A3DC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001A514);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFDF4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFDFC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFE10);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001A6CC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFE50);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001A864);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001A934);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001AA44);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001AB70);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001AD54);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001AE48);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001AF24);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001AF98);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001B020);

s32 func_0001B0A4(void) {
    void *sp0;
    s32 var_v1;

    var_v1 = 0;
    if (sceIoDevctl(&D_000AFEE4, 0x02125802, NULL, 0U, &sp0, 4U) == 0) {
        var_v1 = (sp0 == 0x11) | (sp0 == 0x41);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001B100);

void func_0001B17C(void) {
    func_0001B100(1, 0xFFFF);
}

void func_0001B19C(void) {
    func_0001B100(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001B1BC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001B1EC);

void func_0001B21C(s32 **arg0) {
    *arg0 = &D_000B00D8;
    D_000B6110 = 0;
    func_00019F40(arg0);
}

void func_0001B248(s32 **arg0) {
    *arg0 = &D_000B00D8;
    D_000B6110 = 0;
    func_00019F40(arg0);
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001B274);
#else
void func_0001B274(s32 **arg0) {
    *arg0 = &D_000B00D8;
    D_000B6110 = 0;
    func_00019F40(arg0);
    scePaf_6261C0A5((s32) arg0);
}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFEE4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFEF0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFEF4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFF00);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001B2B4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001B320);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001B32C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFFB8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001B500);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001B5D0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001B6D0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFFEC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001B914);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001BAE8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001BBDC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001BD10);

#if FW_VERSION == 352
s32 func_0001BDB0(s32 arg0) {
    s32 temp_v0;
    s32 var_v0;

    var_v0 = D_000B6118;
    if (var_v0 == 0) {
        temp_v0 = scePaf_61A8E8EC(0xD4);
        func_0001BF6C(temp_v0, arg0);
        D_000B6118 = temp_v0;
        var_v0 = temp_v0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001BE14);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001BE20);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001BF6C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001C0B8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001C3F0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001C51C);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B00C4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B00C8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B00D8);

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AF850);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AF864);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001D7E4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001BE14);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001D884);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001D9D4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001DB24);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001DE5C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001DF88);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001C61C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001C758);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001D380);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001D484);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001D5E0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001D638);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001D7E8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001D81C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001D848);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001D96C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001DA9C);

void func_0001DC80(struct Unk_func_0001DC80_0 *arg0) {
    arg0->unk60 = 1;
}

void func_0001DC8C(struct Unk_func_0001DC8C_0 *arg0) {
    arg0->unk60 = 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001DC94);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001DCF4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001DF64);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001DFA0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001E07C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001E1E4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001E2CC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001E370);

void func_0001E4A4(struct Unk_func_0001E4A4_0 *arg0) {
    if (arg0->unk5C != 2) {
        func_0001D96C((s32) arg0);
    } else {
        func_0001DA9C((s32) arg0, 0);
    }
}

s32 func_0001E4E0(struct Unk_func_0001E4E0_0 *arg0, s32 arg1) {
    arg0->unk40 = arg1;
    return 0;
}

s32 func_0001E4EC(struct Unk_func_0001E4EC_0 *arg0) {
    return arg0->unk40;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001E4F4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001E5C8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001E6AC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001E7D4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001E8F8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001E9F4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001EAB0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001EB48);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001EBE0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001EC24);

u8 func_0001ECC4(struct Unk_func_0001ECC4_0 *arg0) {
    return arg0->unk58;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001ECCC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001ED5C);

void func_0001EE54(struct Unk_func_0001EE54_0 *arg0) {
    arg0->unk58 = 0;
}

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001EE5C);
#endif

#if FW_VERSION >= 310
s32 func_0001EE5C(struct Unk_func_0001EE5C_0 *arg0) {
    return arg0->unk88;
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
s32 func_0001EE5C(struct Unk_func_0001EE5C_0 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x90);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001EE64);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001EEA8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B02CC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B02E8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B0304);

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFA6C);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B0320);

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B0ECC);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B033C);

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B0358);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B036C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B0390);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B03B8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B03DC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B0400);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B041C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B043C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B0450);

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFBBC);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B0474);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B0490);

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFC18);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFC3C);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001EEEC);

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFC68);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B10C8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000B10D8);
#endif

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFC70);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0105E0", D_000AFC80);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001EFD4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001F018);

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001F03C);
#endif

#if FW_VERSION >= 310
u8 func_0001F03C(struct Unk_func_0001F03C_0 *arg0) {
    return arg0->unk6E;
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
u8 func_0001F03C(struct Unk_func_0001F03C_0 *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x76);
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001F044);
#endif

#if FW_VERSION >= 310
u8 func_0001F044(struct Unk_func_0001F044_0 *arg0) {
    return arg0->unk6C;
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
u8 func_0001F044(struct Unk_func_0001F044_0 *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x74);
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001F04C);
#endif

#if FW_VERSION >= 310
u8 func_0001F04C(struct Unk_func_0001F04C_0 *arg0) {
    return arg0->unk6D;
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
u8 func_0001F04C(struct Unk_func_0001F04C_0 *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x75);
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001F054);
#endif

#if FW_VERSION >= 310
u8 func_0001F054(struct Unk_func_0001F054_0 *arg0) {
    return arg0->unk6F;
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
u8 func_0001F054(struct Unk_func_0001F054_0 *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x77);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001F05C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001F0BC);

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00020E60);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001F224);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001F2D0);

#if FW_VERSION == 300 || (FW_VERSION >= 310 && FW_VERSION < 352)
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001F49C);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
s32 func_0001F49C(struct Unk_func_0001F49C_0 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x78);
}
#endif

#if FW_VERSION == 352
s32 func_0001F49C(struct Unk_func_0001F49C_0 *arg0) {
    return arg0->unk70;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001F4A4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001F520);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001F5C0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001F68C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001F720);

#if FW_VERSION >= 310 && FW_VERSION < 352
s32 func_0002145C(void *arg0, s32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0;
    if (M2C_FIELD(arg0, u8 *, 0xCC) != 0) {

    } else {
        var_v0 = func_0001E6AC((s32) arg0, arg1, arg2);
    }
    return var_v0;
}
#endif

#if FW_VERSION == 311
s32 func_0002148C_v311(void *arg0, s32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0;
    if (M2C_FIELD(arg0, u8 *, 0xCC) != 0) {

    } else {
        var_v0 = func_0001E7D4((s32) arg0, arg1, arg2);
    }
    return var_v0;
}
#endif

#if FW_VERSION == 310
s32 func_0002148C_v310(void *arg0, s32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0;
    if (M2C_FIELD(arg0, u8 *, 0xCC) != 0) {

    } else {
        var_v0 = func_0001E7D4((s32) arg0, arg1, arg2);
    }
    return var_v0;
}
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_00021124);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000211F0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0002128C);
#endif

#if FW_VERSION == 352
s32 func_0001F7E0(struct Unk_func_0001F7E0_0 *arg0, s32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0->unkCC != 0) {

    } else {
        var_v0 = func_0001E6AC((s32) arg0, arg1, arg2);
    }
    return var_v0;
}

s32 func_0001F810(struct Unk_func_0001F810_0 *arg0, s32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0->unkCC != 0) {

    } else {
        var_v0 = func_0001E7D4((s32) arg0, arg1, arg2);
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001F840);

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_000214F8);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001F87C);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001F8B8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001F8F0);

#if FW_VERSION == 300 || (FW_VERSION >= 310 && FW_VERSION < 352)
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0105E0", func_0001F950);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
void func_0001F950(struct Unk_func_0001F950_0 *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xD0) == 0) {
        M2C_FIELD(arg0, u8 *, 0xD0) = 1U;
        M2C_FIELD(arg0, s32 *, 0xD4) = 1;
    }
}
#endif

#if FW_VERSION == 352
void func_0001F950(struct Unk_func_0001F950_0 *arg0) {
    if (arg0->unkCC == 0) {
        arg0->unkCC = 1U;
        arg0->unkD0 = 1;
    }
}
#endif
