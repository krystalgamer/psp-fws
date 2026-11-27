/* lang: c++ */
#include "common.h"
#include "msvideo_main_plugin_decls.h"

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008179C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008198C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00081B14);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00081CD8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00081D20);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00081E44);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00081F68);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00082060);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000820E0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000821A0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008231C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008233C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00082394);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000828C4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000829BC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000829D4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00082A00);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00082BF8);

void func_00082CF4(s32 *arg0) {
    func_00082D34((Unk_func_00082D34_0*) arg0);
    if (*arg0 == 0) {

    } else {
        func_000A4DDC(arg0);
    }
}

void func_00082D34(struct Unk_func_00082D34_0 *arg0) {
    if ((u32) (arg0->unkDC - 1) < 0xFU) {
        arg0->unkDC = 0x10;
    }
    if (arg0->unkA8 == 0) {

    } else {
        func_000A57D4(&arg0->unkA8);
    }
}

s32 func_00082D84(struct Unk_func_00082D84_0 *arg0, s32 *arg1, s32 arg2) {
    s32 var_a3;
    struct Unk_func_00082D84_temp_v0 *temp_v0;

    var_a3 = 0x2003;
    if (arg0->unkA0 != 0) {
        temp_v0 = arg0->unk2AC;
        if ((temp_v0 != NULL) && (var_a3 = 0, (temp_v0->unk88 == 0))) {
            *arg1 = arg0->unkB8;
        } else {
            var_a3 = func_000952C4((s32) ((u8 *)arg0 + 0x180), (s32) arg1, arg2);
        }
    }
    return var_a3;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00082DDC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008313C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000831D8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00083424);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00083484);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000834C0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00083568);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000835F8);

s32 func_0008363C(u32 *arg0, u32 arg1) {
    s32 var_a2;
    u32 temp_v0;
    u32 temp_v1;

    temp_v0 = *arg0;
    temp_v1 = temp_v0 + arg1;
    var_a2 = 0x500E;
    if ((temp_v1 >= temp_v0) & (temp_v1 >= arg1)) {
        *arg0 = temp_v1;
        var_a2 = 0;
    }
    return var_a2;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00083670);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00083720);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000838AC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00083A34);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00083ABC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00084240);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00084458);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00084A14);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00084D7C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000851B0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000854B4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00085704);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00085A4C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00085EC8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00086048);

void func_00086418(struct Unk_func_00086418_0 *arg0, s32 arg1) {
    func_0007B1D4((u8 *)arg0 + 9, 3, arg1);
    arg0->unkC = func_0007B094(arg1);
    arg0->unk10 = func_0007B094(arg1);
}

void func_0008646C(struct Unk_func_0008646C_0 *arg0, s32 arg1) {
    func_0007B1D4((u8 *)arg0 + 9, 3, arg1);
    arg0->unkC = func_0007B094(arg1);
    arg0->unk10 = func_0007B094(arg1);
    arg0->unk14 = func_0007B094(arg1);
    arg0->unk18 = func_0007B094(arg1);
    arg0->unk1C = func_0007B094(arg1);
    arg0->unk20 = func_0007B094(arg1);
    arg0->unk24 = func_0007B094(arg1);
    arg0->unk28 = func_0007B094(arg1);
}

void func_00086508(struct Unk_func_00086508_0 *arg0, s32 arg1) {
    func_0007B1D4((u8 *)arg0 + 9, 3, arg1);
    arg0->unkC = func_0007B094(arg1);
    arg0->unk10 = func_0007B094(arg1);
    arg0->unk14 = func_0007B094(arg1);
    arg0->unk18 = func_0007B094(arg1);
    arg0->unk1C = func_0007B094(arg1);
    arg0->unk20 = func_0007B094(arg1);
    arg0->unk24 = func_0007B094(arg1);
    arg0->unk28 = func_0007B094(arg1);
    arg0->unk2C = func_0007B094(arg1);
    arg0->unk30 = func_0007B094(arg1);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000865BC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00086638);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000869E4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00086BF0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00086F24);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00087474);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000875A0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00087950);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00087EE0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008801C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000882CC);

void func_00088838(struct Unk_func_00088838_0 *arg0, s32 arg1) {
    arg0->unk0 = func_0007B134(arg1);
    arg0->unk2 = func_0007B134(arg1);
    arg0->unk4 = func_0007B094(arg1);
    arg0->unk8 = func_0007B094(arg1);
    arg0->unkC = func_0007B094(arg1);
    arg0->unk10 = func_0007B184(arg1);
    arg0->unk12 = func_0007B184(arg1);
    arg0->unk14 = func_0007B0E4(arg1);
    arg0->unk18 = func_0007B0E4(arg1);
    arg0->unk1C = func_0007B094(arg1);
    arg0->unk20 = func_0007B134(arg1);
    func_0007B1D4((s32) ((u8 *)arg0 + 0x22), 0x20, arg1);
    arg0->unk42 = func_0007B184(arg1);
    arg0->unk44 = func_0007B134(arg1);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00088910);

void func_000889DC(struct Unk_func_000889DC_0 *arg0, s32 arg1) {
    func_0007B1D4((u8 *)arg0 + 9, 3, arg1);
    arg0->unkC = func_0007B184(arg1);
    arg0->unkE = func_0007B184(arg1);
    arg0->unk10 = func_0007B184(arg1);
    arg0->unk12 = func_0007B184(arg1);
}

void func_00088A48(struct Unk_func_00088A48_0 *arg0, s32 arg1) {
    func_0007B1D4((u8 *)arg0 + 9, 3, arg1);
    arg0->unkC = func_0007B184(arg1);
    arg0->unkE = func_0007B134(arg1);
}

void func_00088A9C(s32 arg0, s32 arg1) {
    func_0007B1D4(arg0 + 9, 3, arg1);
}

void func_00088AC0(struct Unk_func_00088AC0_0 *arg0, s32 arg1) {
    func_0007B1D4((u8 *)arg0 + 9, 3, arg1);
    arg0->unkC = func_0007B094(arg1);
    arg0->unk10 = func_0007B094(arg1);
    arg0->unk14 = func_0007B094(arg1);
    arg0->unk18 = func_0007B094(arg1);
    arg0->unk1C = func_0007B134(arg1);
    arg0->unk1E = func_0007B134(arg1);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00088B44);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00088C7C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00088DD8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00088DEC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00088E98);

s32 func_00088F64(struct Unk_func_00088F64_0 *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0x2003;
    if (arg0 != NULL) {
        arg0->unk188 = arg1;
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00088F7C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000893E0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008950C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00089578);

s32 func_000895C8(void **arg0, void **arg1) {
    s32 var_a2;
    struct Unk_func_000895C8_temp_v0 *temp_v0;

    temp_v0 = *arg1;
    var_a2 = 0xA;
    if (temp_v0 != NULL) {
        var_a2 = 0;
        temp_v0->unk1C = (void *) *arg0;
        *arg0 = *arg1;
        *arg1 = NULL;
    }
    return var_a2;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000895F4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000897C0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000898BC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00089CAC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00089E68);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008A064);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008A468);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008A658);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008A888);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008AC3C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008AD54);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008AE50);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008B0F4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008B214);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008B314);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008B680);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008B83C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008BA2C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008BD88);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008BF14);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008C0CC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008C140);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008C2C8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008C538);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008C60C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008C6E0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008C88C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008C9CC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008CBD4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008CCF8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008CD94);

void **func_0008CDE4(void **arg0) {
    void **var_a0;
    void *temp_v0;
    struct Unk_func_0008CDE4_var_v1 *var_v1;

    var_a0 = arg0;
    var_v1 = *var_a0;
    if (var_v1 != NULL) {
        do {
            temp_v0 = var_v1->unk1C;
            var_a0 = &var_v1->unk1C;
            var_v1 = temp_v0;
        } while (temp_v0 != NULL);
    }
    return var_a0;
}

void *func_0008CE08(void *arg0) {
    void *temp_v0;
    struct Unk_func_0008CE08_var_a0 *var_a0;
    struct Unk_func_0008CE08_var_a0 *var_v1;

    var_a0 = arg0;
    var_v1 = var_a0->unk1C;
    if (var_v1 != NULL) {
        do {
            temp_v0 = var_v1->unk1C;
            var_a0 = var_v1;
            var_v1 = temp_v0;
        } while (temp_v0 != NULL);
    }
    return var_a0;
}

s32 func_0008CE2C(s32 *arg0) {
    return *arg0 + 0x1C;
}

s32 func_0008CE38(struct Unk_func_0008CE38_0 *arg0, s32 arg1) {
    arg0->unk1C = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008CE44);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008D068);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008D164);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008D240);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008D2AC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008D5D4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008D6B0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008D72C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008D9E8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008DDF0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008DE7C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008E2A4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008E550);

s32 func_0008E584(s32 *arg0) {
    return *arg0 != 0;
}

s32 func_0008E590(s32 *arg0) {
    return *arg0 != 0;
}

s32 func_0008E59C(s32 *arg0) {
    return *arg0 != 0;
}

s32 func_0008E5A8(s32 *arg0) {
    return *arg0 != 0;
}

s32 func_0008E5B4(s32 *arg0) {
    return *arg0 != 0;
}

s32 func_0008E5C0(s32 *arg0) {
    return *arg0 != 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008E5CC);

s32 func_0008E63C(struct Unk_func_0008E63C_0 *arg0) {
    return arg0->unk10;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008E644);

s32 func_0008E6B4(struct Unk_func_0008E6B4_0 *arg0) {
    return arg0->unk10;
}

s32 func_0008E6BC(struct Unk_func_0008E6BC_0 *arg0) {
    return arg0->unk10;
}

void func_0008E6C4(struct Unk_func_0008E6C4_0 *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4) {
    if (arg1 != NULL) {
        *arg1 = arg0->unk28;
    }
    if (arg2 != NULL) {
        *arg2 = arg0->unk2C;
    }
    if (arg3 != NULL) {
        *arg3 = arg0->unk30;
    }
    if (arg4 != NULL) {
        *arg4 = arg0->unk34;
    }
}

void func_0008E70C(struct Unk_func_0008E70C_0 *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4) {
    if (arg1 != NULL) {
        *arg1 = arg0->unk28;
    }
    if (arg2 != NULL) {
        *arg2 = arg0->unk2C;
    }
    if (arg3 != NULL) {
        *arg3 = arg0->unk30;
    }
    if (arg4 != NULL) {
        *arg4 = arg0->unk34;
    }
}

void func_0008E754(struct Unk_func_0008E754_0 *arg0, s32 *arg1, s32 *arg2) {
    if (arg1 != NULL) {
        *arg1 = arg0->unk20;
    }
    if (arg2 != NULL) {
        *arg2 = arg0->unk24;
    }
}

void func_0008E77C(struct Unk_func_0008E77C_0 *arg0, s32 *arg1, s32 *arg2) {
    if (arg1 != NULL) {
        *arg1 = arg0->unk20;
    }
    if (arg2 != NULL) {
        *arg2 = arg0->unk24;
    }
}

void func_0008E7A4(struct Unk_func_0008E7A4_0 *arg0, s32 *arg1, s32 *arg2) {
    if (arg1 != NULL) {
        *arg1 = arg0->unk28;
    }
    if (arg2 != NULL) {
        *arg2 = arg0->unk2C;
    }
}

void func_0008E7CC(struct Unk_func_0008E7CC_0 *arg0, s32 *arg1, s32 *arg2) {
    if (arg1 != NULL) {
        *arg1 = arg0->unk28;
    }
    if (arg2 != NULL) {
        *arg2 = arg0->unk2C;
    }
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008E7F4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008E94C);

void func_0008E9E0(struct Unk_func_0008E9E0_0 *arg0) {
    if (arg0 != NULL) {
        func_0008EC84((u8 *)arg0 + 8);
        func_0008ECF4((u8 *)arg0 + 0x54);
        func_0008ED64((u8 *)arg0 + 0xA8);
        func_0008EDC4((u8 *)arg0 + 0xD8);
        func_0008EE24((u8 *)arg0 + 0x108);
        func_0008EE8C((u8 *)arg0 + 0x148);
        func_00080F50(arg0->unk190);
        func_00080F50(arg0);
    }
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008EA48);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008EAA0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008EAF8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008EB40);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008EB88);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008EBD8);

void func_0008EC28(void **arg0, void **arg1) {
    void *temp_s0;
    struct Unk_func_0008EC28_var_v0 *var_v0;

    var_v0 = *arg1;
    if (var_v0 != NULL) {
        do {
            temp_s0 = var_v0->unk1C;
            func_000895C8(arg0, arg1);
            *arg1 = temp_s0;
            var_v0 = temp_s0;
        } while (temp_s0 != NULL);
        *arg1 = NULL;
    }
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008EC84);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008ECF4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008ED64);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008EDC4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008EE24);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008EE8C);

s32 func_0008EEFC(struct Unk_func_0008EEFC_0 *arg0) {
    return arg0->unk38;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008EF04);

s32 func_0008EFA0(struct Unk_func_0008EFA0_0 *arg0, s32 arg1) {
    arg0->unk2C = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008EFAC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008F054);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008F0DC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008F248);

s32 func_0008F288(struct Unk_func_0008F288_0 *arg0) {
    s32 var_v1;

    var_v1 = 1;
    if ((arg0->unk0 != 0) && (arg0->unk18 != 0)) {
        var_v1 = arg0->unk40;
    }
    return var_v1;
}

s32 func_0008F2A8(struct Unk_func_0008F2A8_0 *arg0) {
    s32 var_v1;

    var_v1 = 1;
    if ((arg0->unk0 != 0) && (arg0->unk18 != 0)) {
        var_v1 = arg0->unk38;
    }
    return var_v1;
}

s32 func_0008F2C8(struct Unk_func_0008F2C8_0 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (arg0->unk14 != 0) {
        var_v1 = arg0->unk24 == 0;
    }
    return var_v1;
}

s32 func_0008F2E4(struct Unk_func_0008F2E4_0 *arg0, s32 *arg1) {
    s32 var_v1;
    struct Unk_func_0008F2E4_temp_a0 *temp_a0;

    var_v1 = 0x2003;
    if (arg0 != NULL) {
        temp_a0 = arg0->unk190;
        var_v1 = 7;
        if (temp_a0 != NULL) {
            var_v1 = 0;
            *arg1 = temp_a0->unk24;
        }
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008F30C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008F3DC);

void func_0008F424(struct Unk_func_0008F424_0 *arg0, s32 arg1, s32 arg2) {
    func_0008CCF8(arg0->unk18, arg0->unk20, arg1, 0, arg2);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008F454);

s32 func_0008F5B0(struct Unk_func_0008F5B0_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = arg0->unk0;
    if (var_v1 != 0) {
        var_v1 = (arg0->unk10 * 8) + 0x10;
        arg0->unk0 = var_v1;
    }
    *arg1 = var_v1;
    return 0;
}

s32 func_0008F5D4(struct Unk_func_0008F5D4_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = arg0->unk0;
    if (var_v1 != 0) {
        var_v1 = (arg0->unk10 * 0xC) + 0x10;
        arg0->unk0 = var_v1;
    }
    *arg1 = var_v1;
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008F604);

s32 func_0008F648(struct Unk_func_0008F648_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = arg0->unk0;
    if (var_v1 != 0) {
        var_v1 = (arg0->unk10 * 4) + 0x10;
        arg0->unk0 = var_v1;
    }
    *arg1 = var_v1;
    return 0;
}

s32 func_0008F66C(struct Unk_func_0008F66C_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = arg0->unk0;
    if (var_v1 != 0) {
        var_v1 = (arg0->unk10 * 4) + 0x10;
        arg0->unk0 = var_v1;
    }
    *arg1 = var_v1;
    return 0;
}

s32 func_0008F690(struct Unk_func_0008F690_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = arg0->unk0;
    if (var_v1 != 0) {
        var_v1 = (arg0->unk10 * 8) + 0x10;
        arg0->unk0 = var_v1;
    }
    *arg1 = var_v1;
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008F6B4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008F7DC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008F87C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008F958);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008F98C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008FB6C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008FC28);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0008FCA4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009006C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000901B4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000902F4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00090450);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00090598);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00090868);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00090930);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000909EC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00090AC0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00090CB4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000910F4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00091278);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00091328);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00091434);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000914A0);

s32 func_000916AC(s32 *arg0, s32 *arg1) {
    *arg1 = *arg0;
    return 0;
}

s32 func_000916BC(struct Unk_func_000916BC_0 *arg0, s32 *arg1) {
    *arg1 = arg0->unk8;
    return 0;
}

s32 func_000916CC(struct Unk_func_000916CC_0 *arg0, s32 *arg1) {
    *arg1 = arg0->unk4;
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000916DC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009175C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00091838);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00091908);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009199C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00092008);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00092258);

void func_0009238C(void) {
    func_000923A8();
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000923A8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00092898);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00092CC8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00092D58);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000930A4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00093134);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000931BC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009352C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00093604);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00093650);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009368C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000936C4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000936FC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00093740);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009377C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000937C4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000937FC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00093840);

s32 func_000938F4(struct Unk_func_000938F4_0 *arg0, u32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0x500F;
    if (arg0 != NULL) {
        if (arg1 >= (u32) arg0->unk10) {
            var_v0 = func_000A4BF4((s32) arg0, arg2);
        } else {
            var_v0 = func_000A38E8((s32) ((u8 *)arg0 + 0x14), (s32) arg1, 1, 0, arg2);
        }
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00093948);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000939B4);

s32 func_00093A1C(struct Unk_func_00093A1C_0 *arg0, u32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0x500F;
    if (arg0 != NULL) {
        if (arg1 >= (u32) arg0->unk10) {
            var_v0 = func_000A4D38((s32) arg0, arg2);
        } else {
            var_v0 = func_000A38E8((s32) ((u8 *)arg0 + 0x14), (s32) arg1, 1, 0, arg2);
        }
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00093A70);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00093ADC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00093B60);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00093B80);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00093C78);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00093CFC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00093DD8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00093ED4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00093FA8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000940A8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00094148);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00094228);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009456C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000948F8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00094A0C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00094C6C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00094CF0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00094F5C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00095170);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000951F8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000952C4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00095384);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000953F4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009541C);

s32 func_00095448(struct Unk_func_00095448_0 *arg0, s32 *arg1, s32 *arg2) {
    if (arg0->unkE4 != 0) {
        *arg1 = 1;
        *arg2 = arg0->unkF4;
    } else {
        *arg1 = 1;
        *arg2 = 0;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00095474);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000954E8);

s32 func_0009555C(struct Unk_func_0009555C_0 *arg0, u32 arg1, s32 arg2) {
    s32 var_a4;
    u32 temp_v1;
    struct Unk_func_0009555C_temp_v0 *temp_v0;

    temp_v0 = arg0->unk114;
    var_a4 = 7;
    if (temp_v0 != NULL) {
        temp_v1 = temp_v0->unk4;
        var_a4 = 0x2002;
        if ((arg1 >= temp_v1) && (arg1 < (u32) (temp_v1 + arg0->unkD0))) {
            func_000938F4((Unk_func_000938F4_0*) (((u8 *)arg0 + 0xC0)), arg1 - temp_v1, arg2);
            var_a4 = 0;
        }
    }
    return var_a4;
}

s32 func_000955BC(struct Unk_func_000955BC_0 *arg0, u32 arg1, s32 arg2) {
    s32 var_a4;
    u32 *temp_v0;
    u32 temp_v1;

    temp_v0 = arg0->unk114;
    var_a4 = 7;
    if (temp_v0 != NULL) {
        temp_v1 = *temp_v0;
        var_a4 = 0x2002;
        if ((arg1 >= temp_v1) && (arg1 < (u32) (temp_v1 + arg0->unkAC))) {
            func_00093840((s32) ((u8 *)arg0 + 0x9C), arg1 - temp_v1, arg2);
            var_a4 = 0;
        }
    }
    return var_a4;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009561C);

s32 func_00095824(s32 arg0) {
    return (arg0 != 0) ? 0 : 0x500F;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00095830);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000959D0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00095A7C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00095B00);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00095C9C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00095CD4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00095D14);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00095E5C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00096004);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009614C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00096320);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000964A4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00096784);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00096914);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000969C0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00096A64);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00096BC0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00096DE4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00096F30);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00097104);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00097264);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000973E4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000974E0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00097564);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000976A8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00097760);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00097898);

void func_000979F4(struct Unk_func_000979F4_0 *arg0, s32 arg1) {
    func_0007B2DC(arg0->unk0, arg1);
    func_0007B2DC(arg0->unk4, arg1);
    if (arg0->unk8 == 0) {

    } else {
        func_00097A54(&arg0->unk8, arg1);
    }
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00097A54);

void func_00097B60(struct Unk_func_00097B60_0 *arg0, s32 arg1) {
    func_0007B2DC(arg0->unk0, arg1);
    func_0007B2DC(arg0->unk4, arg1);
    func_0007B414((u8 *)arg0 + 8, 1, arg1);
    func_0007B414((u8 *)arg0 + 9, 3, arg1);
    func_0007B2DC(arg0->unkC, arg1);
    func_0007B2DC(arg0->unk10, arg1);
    func_0007B2DC(arg0->unk14, arg1);
    func_0007B2DC(arg0->unk18, arg1);
    func_0007B374(arg0->unk1C, arg1);
    func_0007B374(arg0->unk1E, arg1);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00097C08);

void func_00097D18(struct Unk_func_00097D18_0 *arg0, s32 arg1) {
    func_0007B2DC(arg0->unk0, arg1);
    func_0007B2DC(arg0->unk4, arg1);
    func_0007B414((u8 *)arg0 + 8, 1, arg1);
    func_0007B414((u8 *)arg0 + 9, 3, arg1);
    func_0007B374(arg0->unkC, arg1);
    func_0007B374(arg0->unkE, arg1);
    func_0007B374(arg0->unk10, arg1);
    func_0007B374(arg0->unk12, arg1);
}

void func_00097DA8(struct Unk_func_00097DA8_0 *arg0, s32 arg1) {
    func_0007B2DC(arg0->unk0, arg1);
    func_0007B2DC(arg0->unk4, arg1);
    func_0007B414((u8 *)arg0 + 8, 1, arg1);
    func_0007B414((u8 *)arg0 + 9, 3, arg1);
    func_0007B3C4(arg0->unkC, arg1);
    func_0007B374(arg0->unkE, arg1);
}

void func_00097E20(struct Unk_func_00097E20_0 *arg0, s32 arg1) {
    func_0007B2DC(arg0->unk0, arg1);
    func_0007B2DC(arg0->unk4, arg1);
    func_0007B414((u8 *)arg0 + 8, 1, arg1);
    func_0007B414((u8 *)arg0 + 9, 3, arg1);
}

void func_00097E84(struct Unk_func_00097E84_0 *arg0, s32 arg1) {
    func_0007B2DC(arg0->unk0, arg1);
    func_0007B2DC(arg0->unk4, arg1);
    if (arg0->unk8 == 0) {

    } else {
        func_00097EE4(&arg0->unk8, arg1);
    }
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00097EE4);

void func_00097FBC(struct Unk_func_00097FBC_0 *arg0, s32 arg1) {
    s32 temp_v1;

    func_0007B2DC(arg0->unk0, arg1);
    func_0007B2DC(arg0->unk4, arg1);
    func_0007B414((u8 *)arg0 + 8, 1, arg1);
    func_0007B414(&arg0->unk9, 3, arg1);
    if (((arg0->unk9 << 0x10) | (arg0->unkA << 8) | arg0->unkB) == 0) {
        if (arg0->unk4 == 0x75726C20) {
            temp_v1 = arg0->unk0;
            if (temp_v1 != 0xC) {
                func_0007B414(arg0->unkC, temp_v1 - 0xC, arg1);
            }
        }
    }
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00098070);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000981AC);

void func_00098424(struct Unk_func_00098424_0 *arg0, s32 arg1) {
    s32 temp_v1;

    func_0007B2DC(arg0->unk0, arg1);
    func_0007B2DC(arg0->unk4, arg1);
    temp_v1 = arg0->unk0;
    if (temp_v1 != 8) {
        func_0007B414(arg0->unk8, temp_v1 - 8, arg1);
    }
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00098480);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00098664);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000986E8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000987CC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00098880);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00098970);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00098A4C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00098B14);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00098C08);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00098D00);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00098E10);

s32 func_00098F90(struct Unk_func_00098F90_0 *arg0, s32 arg1) {
    func_0007B2DC(arg0->unk0, arg1);
    func_0007B2DC(arg0->unk4, arg1);
    func_0007B414((u8 *)arg0 + 8, 1, arg1);
    func_0007B414((u8 *)arg0 + 9, 3, arg1);
    func_0007B2DC(arg0->unkC, arg1);
    func_0007B2DC(arg0->unk10, arg1);
    return 0;
}

s32 func_0009900C(struct Unk_func_0009900C_0 *arg0, s32 arg1) {
    func_0007B2DC(arg0->unk0, arg1);
    func_0007B2DC(arg0->unk4, arg1);
    func_0007B414((u8 *)arg0 + 8, 1, arg1);
    func_0007B414((u8 *)arg0 + 9, 3, arg1);
    func_0007B2DC(arg0->unkC, arg1);
    func_0007B2DC(arg0->unk10, arg1);
    func_0007B2DC(arg0->unk14, arg1);
    func_0007B2DC(arg0->unk18, arg1);
    func_0007B2DC(arg0->unk1C, arg1);
    func_0007B2DC(arg0->unk20, arg1);
    func_0007B2DC(arg0->unk24, arg1);
    func_0007B2DC(arg0->unk28, arg1);
    return 0;
}

s32 func_000990D0(struct Unk_func_000990D0_0 *arg0, s32 arg1) {
    func_0007B2DC(arg0->unk0, arg1);
    func_0007B2DC(arg0->unk4, arg1);
    func_0007B414((u8 *)arg0 + 8, 1, arg1);
    func_0007B414((u8 *)arg0 + 9, 3, arg1);
    func_0007B2DC(arg0->unkC, arg1);
    func_0007B2DC(arg0->unk10, arg1);
    func_0007B2DC(arg0->unk14, arg1);
    func_0007B2DC(arg0->unk18, arg1);
    func_0007B2DC(arg0->unk1C, arg1);
    func_0007B2DC(arg0->unk20, arg1);
    func_0007B2DC(arg0->unk24, arg1);
    func_0007B2DC(arg0->unk28, arg1);
    func_0007B2DC(arg0->unk2C, arg1);
    func_0007B2DC(arg0->unk30, arg1);
    return 0;
}

void func_000991AC(struct Unk_func_000991AC_0 *arg0, s32 arg1) {
    func_0007B374(arg0->unk0, arg1);
    func_0007B374(arg0->unk2, arg1);
    func_0007B2DC(arg0->unk4, arg1);
    func_0007B2DC(arg0->unk8, arg1);
    func_0007B2DC(arg0->unkC, arg1);
    func_0007B3C4(arg0->unk10, arg1);
    func_0007B3C4(arg0->unk12, arg1);
    func_0007B328(arg0->unk14, arg1);
    func_0007B328(arg0->unk18, arg1);
    func_0007B2DC(arg0->unk1C, arg1);
    func_0007B374(arg0->unk20, arg1);
    func_0007B414((u8 *)arg0 + 0x22, 0x20, arg1);
    func_0007B3C4(arg0->unk42, arg1);
    func_0007B374(arg0->unk44, arg1);
}

void func_00099280(struct Unk_func_00099280_0 *arg0, s32 arg1, M2C_UNK arg2) {
    func_0007B374(arg0->unk0, arg2);
    func_0007B374(arg0->unk2, arg2);
    func_0007B2DC(arg0->unk4, arg2);
    func_0007B374(arg0->unk8, arg2);
    func_0007B374(arg0->unkA, arg2);
    func_0007B374(arg0->unkC, arg2);
    func_0007B374(arg0->unkE, arg2);
    func_0007B2DC(arg0->unk10, arg2);
    if ((arg1 & 0xFFFF) != 1) {

    } else {
        func_0007B2DC(arg0->unk14, arg2);
        func_0007B2DC(arg0->unk18, arg2);
        func_0007B2DC(arg0->unk1C, arg2);
        func_0007B2DC(arg0->unk20, arg2);
    }
}

void func_0009935C(struct Unk_func_0009935C_0 *arg0, s32 arg1) {
    func_0007B2DC(arg0->unk0, arg1);
    func_0007B2DC(arg0->unk4, arg1);
    func_0007B414((u8 *)arg0 + 8, 6, arg1);
    func_0007B374(arg0->unkE, arg1);
}

void func_000993B8(struct Unk_func_000993B8_0 *arg0) {
    arg0->unk8 = 1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000993C4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000995EC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000996D0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00099750);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_000999F0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_00099FCC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009A19C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009A26C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009A3C4);

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_08179C", D_000B48C8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_08179C", D_000B48CC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_08179C", D_000B48D0);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_08179C", D_000B48E0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_08179C", D_000B48E8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_08179C", D_000B48EC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_08179C", D_000B48F0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_08179C", D_000B48F8);

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_08179C", D_000B8190);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_08179C", D_000B4900);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_08179C", D_000B4A08);

#if FW_VERSION < 350
__asm__(".globl _ZTV14Class_000B4A08\n_ZTV14Class_000B4A08 = D_000B4A08 - 8\n");
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_08179C", D_000B4A10);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_08179C", D_000B4FB0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_08179C", D_000B4FD8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_08179C", D_000B4FF0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_08179C", D_000B4FFC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009A5C4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009A664);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009A718);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009A7C8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009A9AC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009AB90);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009AC04);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009ADBC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009AE90);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009B028);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009B088);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009B17C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009B304);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009B41C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009B534);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009B6A8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009B8AC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009B8D4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009B9BC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009BAEC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009BB68);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009BB80);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009BCDC);

s32 func_0009BD58(struct Unk_func_0009BD58_0 *arg0, s8 arg1) {
    arg0->unk17 = arg1;
    return 0;
}

s32 func_0009BD64(struct Unk_func_0009BD64_0 *arg0, s16 arg1) {
    arg0->unk34 = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009BD70);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009BDF0);

void func_0009C17C(s32 arg0) {
    func_00092008(arg0 + 0x180, 0);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009C19C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009C25C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_08179C", func_0009C404);

s32 func_0009C524(struct Unk_func_0009C524_0 *arg0, struct Unk_func_0009C524_1 *arg1) {
    s32 temp_a2;
    s32 var_a1;
    struct Unk_func_0009C524_temp_v0 *temp_v0;
    struct Unk_func_0009C524_temp_v0_2 *temp_v0_2;

    temp_v0 = arg0->unk2AC;
    temp_a2 = temp_v0->unk88;
    var_a1 = 7;
    if (temp_a2 != 0) {
        var_a1 = 0x1012;
        if (temp_v0->unk90->unk100 != 1) {
            temp_v0_2 = arg1->unk0;
            var_a1 = 0x1017;
            if (temp_v0_2 != NULL) {
                var_a1 = func_0007F450(temp_a2, arg0->unk20, temp_v0_2->unk18, arg1->unk4, arg1->unk8, arg1->unkC);
            }
        }
    }
    return var_a1;
}
