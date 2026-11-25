#include "common.h"
#include "msvideo_main_plugin_decls.h"

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_0009F938);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_0009F9D4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_0009FA70);

s32 func_0009FD64(struct Unk_func_0009FD64_0 *arg0, u32 arg1) {
    s32 temp_v1;
    s32 var_a0;
    s32 var_s0;
    s32 var_s0_2;

    temp_v1 = arg0->unk10;
    if (arg1 < (u32) ((u32) (temp_v1 + 1) >> 1)) {
        var_a0 = arg0->unk14;
        var_s0 = arg1 - 1;
        if (arg1 != 0) {
            do {
                var_s0 -= 1;
                var_a0 = func_000A0020(var_a0);
            } while (var_s0 != -1);
        }
    } else {
        var_s0_2 = (temp_v1 - arg1) - 2;
        var_a0 = arg0->unk18;
        if (var_s0_2 != -1) {
            do {
                var_s0_2 -= 1;
                var_a0 = func_000A0010(var_a0);
            } while (var_s0_2 != -1);
        }
    }
    return var_a0;
}

s32 func_0009FDF0(struct Unk_func_0009FDF0_0 *arg0) {
    void *sp0;
    s32 temp_v0;
    s32 var_a1;

    temp_v0 = func_0009FF38(arg0->unk0 * arg0->unkC, &sp0);
    var_a1 = temp_v0;
    if (temp_v0 == 0) {
        if (arg0->unk10 == 0) {
            arg0->unk14 = sp0;
            arg0->unk18 = sp0;
        } else {
            func_000A0028(arg0->unk18, (s32) sp0);
            func_000A0018(sp0, (s32) arg0->unk18);
            arg0->unk18 = sp0;
        }
        arg0->unk10 = (s32) (arg0->unk10 + 1);
        var_a1 = 0;
        arg0->unk8 = (s32) (arg0->unk8 + arg0->unkC);
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_0009FE8C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_0009FF38);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_0009FFC4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A0010);

void func_000A0018(struct Unk_func_000A0018_0 *arg0, s32 arg1) {
    arg0->unk8 = arg1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A0020);

void func_000A0028(struct Unk_func_000A0028_0 *arg0, s32 arg1) {
    arg0->unkC = arg1;
}

s32 func_000A0030(struct Unk_func_000A0030_0 *arg0, u32 arg1, s32 *arg2) {
    s32 var_v1;

    var_v1 = 0xC;
    if (arg1 < (u32) arg0->unk0) {
        var_v1 = 0;
        *arg2 = arg0->unk4 + arg1;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A0058);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A00AC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A0100);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A0174);

void func_000A01CC(void) {
    func_000A05BC();
}

s32 func_000A01E8(struct Unk_func_000A01E8_0 *arg0) {
    func_000A0220(arg0->unk4, arg0->unk0);
    func_00080F50(arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A0220);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A02FC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A0360);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A049C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A04EC);

s32 func_000A0588(s32 **arg0) {
    s32 *temp_v0;

    temp_v0 = func_00080C20(0x14);
    *arg0 = temp_v0;
    return temp_v0 == NULL;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A05BC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A0638);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A06C4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A0958);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A0C2C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A0D5C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A0E3C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A0F1C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A10E4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A11BC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A127C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A1360);

s32 func_000A14E0(struct Unk_func_000A14E0_0 *arg0, s32 arg1, s32 *arg2) {
    s32 *temp_v0;
    s32 var_v1;

    var_v1 = 0;
    if (arg0->unk34 == NULL) {
        temp_v0 = func_00080C20(arg1);
        arg0->unk34 = temp_v0;
        var_v1 = 1;
        if (temp_v0 != NULL) {
            func_00078688(temp_v0, arg2, arg1);
            arg0->unk38 = arg1;
            var_v1 = 0;
        }
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A1560);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A1874);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A1964);

s32 func_000A19F4(struct Unk_func_000A19F4_0 *arg0, s32 arg1) {
    arg0->unk0 = arg1;
    arg0->unk4 = 0;
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A1A04);

s32 func_000A1A88(s32 **arg0) {
    *arg0 = func_00080C20(8);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A1AB8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A1BCC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A1D08);

void func_000A1D80(s32 **arg0) {
    func_000A0588(arg0);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A1D9C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A1FDC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A216C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A2370);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A2504);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A2650);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A26C0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A2BE8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A2D58);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A2DCC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A2E40);

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A2EF4);
#else
s32 func_000A2EF4(s32 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = scePaf_3AC3E06A(0xC);
    *arg0 = temp_v0;
    var_v1 = 1;
    if (temp_v0 != 0) {
        scePaf_9479C11B(temp_v0, 0, 0xC);
        var_v1 = func_000A31C4(*arg0 + 8);
    }
    return var_v1;
}
#endif

s32 func_000A2F54(struct Unk_func_000A2F54_0 *arg0, s8 arg1) {
    arg0->unk6 = arg1;
    return 0;
}

void func_000A2F60(struct Unk_func_000A2F60_0 *arg0, s32 arg1, s32 arg2) {
    func_000A329C(arg0->unk8, arg1, arg2 & 0xFF);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A2F80);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A2FF4);

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A3088);
#else
s32 func_000A3088(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 != 0) {
        func_000A3268(temp_v0);
    }
    scePaf_4729E549(arg0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A30D0);

void func_000A3140(struct Unk_func_000A3140_0 *arg0) {
    func_000A33F8(arg0->unk8);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A315C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A31C4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A3268);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A329C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A3390);

s32 func_000A33B8(struct Unk_func_000A33B8_0 *arg0) {
    u8 temp_v1;

    temp_v1 = arg0->unk8;
    if (temp_v1 == 0) {

    } else {
        func_000A329C((s32) arg0, 0, (8 - temp_v1) & 0xFF);
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A33F8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A348C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A34E4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A35BC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A3654);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A36F8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A38E8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A398C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A3A14);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A3A9C);

s32 func_000A3AF8(struct Unk_func_000A3AF8_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x5001;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = arg0->unk8;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A3B14);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A3D8C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A3E40);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A3EB0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A3FAC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A4068);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A40AC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A4138);

void func_000A417C(s32 arg0) {
    func_000A4198(arg0 + 8);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A4198);

void func_000A41C8(struct Unk_func_000A41C8_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk8;
    if (temp_v0 == 0) {

    } else {
        func_000A4228(temp_v0);
    }
    if (arg0->unkC != 0) {
        func_000A4228(arg0->unkC);
    }
    func_00080F50(arg0);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A4228);

void func_000A426C(s32 arg0) {
    func_000A4288(arg0 + 0x94);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A4288);

void func_000A4308(s32 arg0) {
    func_000A4324(arg0 + 8);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A4324);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A435C);

void func_000A43A0(s32 arg0) {
    func_00091434();
    func_000A45EC(arg0 + 0x14);
    func_000A4488(arg0 + 0x30);
    func_000A44B8(arg0 + 0x54);
    func_000A44E8(arg0 + 0x78);
    func_000A4518(arg0 + 0x9C);
    func_000A4548(arg0 + 0xC0);
    func_000A4458(arg0 + 0xE4);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A4400);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A4458);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A4488);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A44B8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A44E8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A4518);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A4548);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A4578);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A45EC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A4624);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A4704);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A4748);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A478C);

void func_000A48B4(struct Unk_func_000A48B4_0 *arg0) {
    if (arg0 != NULL) {
        func_00080F50(arg0->unkC);
    }
    func_00080F50(arg0);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A48E8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A4984);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A4A34);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A4AAC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A4B60);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A4BF4);

s32 func_000A4C48(struct Unk_func_000A4C48_0 *arg0, M2C_UNK arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (func_000A36F8((u8 *)arg0 + 0x14, 3, arg1, 0x3E8) == 0) {
        var_v1 = 0;
        arg0->unk10 = (s32) (arg0->unk10 + 1);
    }
    return var_v1;
}

s32 func_000A4C98(struct Unk_func_000A4C98_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (func_000A36F8((u8 *)arg0 + 0x14, 2, arg1, 0x3E8) == 0) {
        var_v1 = 0;
        arg0->unk10 = (s32) (arg0->unk10 + 1);
    }
    return var_v1;
}

s32 func_000A4CE8(struct Unk_func_000A4CE8_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (func_000A36F8((u8 *)arg0 + 0x14, 2, arg1, 0x3E8) == 0) {
        var_v1 = 0;
        arg0->unk10 = (s32) (arg0->unk10 + 1);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A4D38);

s32 func_000A4D8C(struct Unk_func_000A4D8C_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (func_000A36F8((u8 *)arg0 + 0x10, 3, arg1, 0x3E8) == 0) {
        var_v1 = 0;
        arg0->unkC = (s32) (arg0->unkC + 1);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A4DDC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A4F18);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A5000);

void func_000A5070(struct Unk_func_000A5070_0 *arg0) {
    arg0->unk0 = 8;
    if (arg0->unk8 != 0) {
        func_000A50C0(&arg0->unk8);
        arg0->unk0 = (s32) (arg0->unk0 + arg0->unk8);
    }
}

void func_000A50C0(struct Unk_func_000A50C0_0 *arg0) {
    arg0->unk0 = (s32) ((arg0->unkC * 0xC) + 0x10);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A50DC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A5178);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A5274);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A52D8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A5470);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A5580);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A55F8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A563C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A5680);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A56D0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A5764);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A57D4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A5884);

s32 func_000A58E8(struct Unk_func_000A58E8_0 *arg0) {
    return arg0->unk110->unk2AC->unk90->unk104->unk4->unk48;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A5904);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09F938", func_000A5F1C);

void func_000A665C(struct Unk_func_000A665C_0 *arg0, s32 arg1) {
    arg0->unk34 = arg1;
}

s32 func_000A6664(s32 arg0) {
    return arg0;
}

void func_000A666C(void) {
    func_000A8C50();
}

s32 func_000A6688(struct Unk_func_000A6688_0 *arg0) {
    return arg0->unk60;
}

s32 func_000A6690(struct Unk_func_000A6690_0 *arg0) {
    return arg0->unk30;
}
