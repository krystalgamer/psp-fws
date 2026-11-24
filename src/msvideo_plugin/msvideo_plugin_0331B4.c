#include "common.h"
#include "msvideo_plugin_decls.h"

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_000331B4);

s32 func_00033750(s32 arg0) {
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v1;
    void *temp_v1_2;
    struct Unk_func_00033750_var_a0 *var_a0;
    struct Unk_func_00033750_var_a0_2 *var_a0_2;

    temp_s0 = arg0 + 0xB4;
    func_000250D4(arg0 + 0xC4);
    var_a0 = M2C_FIELD(temp_s0, void **, 4);
    if (var_a0 != NULL) {
        do {
            temp_v1 = var_a0->unk0;
            var_a0->unk8 = 0;
            var_a0->unk0 = (void *) M2C_FIELD(temp_s0, void **, 8);
            M2C_FIELD(temp_s0, void **, 8) = var_a0;
            var_a0 = temp_v1;
        } while (temp_v1 != NULL);
    }
    M2C_FIELD(temp_s0, void **, 4) = NULL;
    temp_s0_2 = arg0 + 0x2C8;
    func_000250F0((s32) (temp_s0 + 0x10));
    func_000250D4(arg0 + 0x2D8);
    var_a0_2 = M2C_FIELD(temp_s0_2, void **, 4);
    if (var_a0_2 != NULL) {
        do {
            temp_v1_2 = var_a0_2->unk0;
            var_a0_2->unk8 = 0;
            var_a0_2->unk0 = (void *) M2C_FIELD(temp_s0_2, void **, 8);
            M2C_FIELD(temp_s0_2, void **, 8) = var_a0_2;
            var_a0_2 = temp_v1_2;
        } while (temp_v1_2 != NULL);
    }
    M2C_FIELD(temp_s0_2, void **, 4) = NULL;
    func_000250F0((s32) (temp_s0_2 + 0x10));
    return 0;
}

s32 func_000337FC(struct Unk_func_000337FC_0 *arg0) {
    func_00030974(arg0->unkA8, arg0->unkAC);
    return 0;
}

s32 func_00033820(struct Unk_func_00033820_0 *arg0) {
    func_000309A8(arg0->unkA8);
    return 0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00033840);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_000338E8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00033944);

void func_00033970(struct Unk_func_00033970_0 *arg0) {
    func_00035F00(arg0->unkAC);
}

s32 func_0003398C(void *arg0) {
    s32 temp_s1;
    s32 temp_s2;

    temp_s1 = arg0 + 0x5F4;
    func_000250D4(temp_s1);
    temp_s2 = M2C_FIELD(arg0, s32 *, 0x548);
    func_000250F0(temp_s1);
    return temp_s2;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_000339D8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00033A10);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00033A44);

s32 func_00033A70(struct Unk_func_00033A70_0 *arg0) {
    return func_00035F50(arg0->unkAC) == 1;
}

s32 func_00033A94(struct Unk_func_00033A94_0 *arg0) {
    return func_00035FAC(arg0->unkAC) == 1;
}

s32 func_00033AB8(struct Unk_func_00033AB8_0 *arg0) {
    return func_00035FA4(arg0->unkAC) == 1;
}

void func_00033ADC(struct Unk_func_00033ADC_0 *arg0) {
    func_00035F10(arg0->unkAC);
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00033AF8);

s32 func_00033C28(struct Unk_func_00033C28_0 *arg0) {
    s32 var_a0;
    struct Unk_func_00033C28_temp_v1 *temp_v1;

    temp_v1 = arg0->unk61C;
    var_a0 = 0;
    if (temp_v1->unk8 != 0) {
        var_a0 = temp_v1->unk9 != 0;
    }
    return var_a0;
}

s32 func_00033C48(void) {
    return ~func_00033C7C() != 0;
}

s32 func_00033C6C(struct Unk_func_00033C6C_0 *arg0) {
    return ~arg0->unk618 != 0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00033C7C);

s32 func_00033C84(struct Unk_func_00033C84_0 *arg0) {
    return arg0->unk618;
}

void func_00033C8C(struct Unk_func_00033C8C_0 *arg0, s32 arg1) {
    arg0->unk614 = arg1;
}

void func_00033C94(struct Unk_func_00033C94_0 *arg0, s32 arg1) {
    arg0->unk618 = arg1;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00033C9C);

s32 func_00033D24(struct Unk_func_00033D24_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (func_000371A0(arg0->unkAC, 1, arg1) == 0) {
        var_v1 = 1;
        *arg1 += 1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00033D70);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00033DB8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00033E20);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00033F60);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_0003409C);

void func_000341C0(struct Unk_func_000341C0_0 *arg0) {
    func_00035F40(arg0->unkAC);
}

void func_000341DC(s32 arg0) {
    func_00031978(arg0 - 0xA4);
}

void func_000341F8(s32 arg0) {
    func_00031978(arg0 - 0x68);
}

void func_00034214(s32 arg0) {
    func_00031BD8(arg0 - 0xA4);
}

void func_00034230(s32 arg0) {
    func_00031BD8(arg0 - 0x68);
}

void func_0003424C(s32 arg0) {
    func_00032094(arg0 - 0x68);
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00034268);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_0003432C);

void func_000343F8(void) {
}

s32 func_00034400(void) {
    return 0;
}

s32 func_00034408(void) {
    return 0;
}

s32 func_00034410(void) {
    return 0;
}

s32 func_00034418(void) {
    return 0;
}

s32 func_00034420(void) {
    return 0;
}

s32 func_00034428(void) {
    return 0;
}

s32 func_00034430(void) {
    return 0;
}

s32 func_00034438(void) {
    return 0;
}

s32 func_00034440(void) {
    return 0;
}

s32 func_00034448(void) {
    return 0;
}

s32 func_00034450(void) {
    return 0;
}

s32 func_00034458(void) {
    return 0;
}

s32 func_00034460(void) {
    return 0;
}

s32 func_00034468(void) {
    return 0;
}

s32 func_00034470(void) {
    return 0;
}

s32 func_00034478(void) {
    return 0;
}

s32 func_00034480(void) {
    return 0;
}

s32 func_00034488(void) {
    return 0;
}

s32 func_00034490(void) {
    return 0;
}

s32 func_00034498(void) {
    return 0;
}

s32 func_000344A0(void) {
    return 0;
}

s32 func_000344A8(void) {
    return 0;
}

s32 func_000344B0(void) {
    return 0;
}

s32 func_000344B8(void) {
    return 0;
}

s32 func_000344C0(void) {
    return 0;
}

s32 func_000344C8(void) {
    return 0;
}

s32 func_000344D0(void) {
    return 0;
}

s32 func_000344D8(void) {
    return 0;
}

s32 func_000344E0(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_000344E8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_000345E4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_0003470C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_000347C4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_0003484C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00034904);

s32 func_000349A0(s32 **arg0) {
    s32 *temp_v0;
    s32 var_v1;

    var_v1 = 1;
    if (arg0 != NULL) {
        temp_v0 = scePaf_5FAC9869(0x1DC);
        *arg0 = temp_v0;
        var_v1 = 2;
        if (temp_v0 != NULL) {
            func_00036148(temp_v0);
            var_v1 = 0;
        }
    }
    return var_v1;
}

s32 func_000349F4(void *arg0) {
    s32 var_v0;

    var_v0 = 1;
    if (arg0 != NULL) {
        func_000377BC(arg0 + 0x1B8);
        func_000378F0(arg0 + 0x1C4);
        scePaf_545FE2DA(arg0);
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00034A3C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00034C48);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00034D10);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00035228);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_000354AC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_000357D0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00035A24);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00035A68);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00035D10);

void *func_00035EF0(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 0x1AC) == 0) ? NULL : (arg0 + 0xAC);
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00035F00);

s32 func_00035F08(struct Unk_func_00035F08_0 *arg0) {
    return arg0->unk8;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00035F10);

s32 func_00035F18(struct Unk_func_00035F18_0 *arg0) {
    return arg0->unk7C;
}

s16 func_00035F20(struct Unk_func_00035F20_0 *arg0) {
    return arg0->unk58;
}

s16 func_00035F28(struct Unk_func_00035F28_0 *arg0) {
    return arg0->unk56;
}

s32 func_00035F30(struct Unk_func_00035F30_0 *arg0) {
    return arg0->unk5C;
}

s32 func_00035F38(struct Unk_func_00035F38_0 *arg0) {
    return arg0->unk60;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00035F40);

u16 func_00035F48(struct Unk_func_00035F48_0 *arg0) {
    return arg0->unkA0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00035F50);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00035FA4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00035FAC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00035FC0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00036148);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_000361F4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00036254);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00036294);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_000364BC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_000367D8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_000368D4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_000369B8);

void func_00036BB4(struct Unk_func_00036BB4_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk14;
    if (temp_v1 != -1) {
        arg0->unk14 = (s32) (temp_v1 + 1);
        return;
    }
    arg0->unk14 = 0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00036BD4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00036DCC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00036E44);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00036EF0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00036F48);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00037060);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_000371A0);

void func_000371BC(void) {
    func_00036F48();
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_000371D8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_000372E4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_000374A8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_000374D8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00037508);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_000375A8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0331B4", func_00037648);

