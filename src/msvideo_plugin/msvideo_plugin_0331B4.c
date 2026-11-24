#include "common.h"
#include "msvideo_plugin_decls.h"

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000331B4);
#endif

#if FW_VERSION != 100
s32 func_00033750(s32 arg0) {
    struct Unk_func_00033750_temp_s0 *temp_s0;
    struct Unk_func_00033750_temp_s0_2 *temp_s0_2;
    void *temp_v1;
    void *temp_v1_2;
    struct Unk_func_00033750_var_a0 *var_a0;
    struct Unk_func_00033750_var_a0_2 *var_a0_2;

    temp_s0 = arg0 + 0xB4;
    func_000250D4(arg0 + 0xC4);
    var_a0 = temp_s0->unk4;
    if (var_a0 != NULL) {
        do {
            temp_v1 = var_a0->unk0;
            var_a0->unk8 = 0;
            var_a0->unk0 = (void *) temp_s0->unk8;
            temp_s0->unk8 = var_a0;
            var_a0 = temp_v1;
        } while (temp_v1 != NULL);
    }
    temp_s0->unk4 = NULL;
    temp_s0_2 = arg0 + 0x2C8;
    func_000250F0((s32) ((u8 *)temp_s0 + 0x10));
    func_000250D4(arg0 + 0x2D8);
    var_a0_2 = temp_s0_2->unk4;
    if (var_a0_2 != NULL) {
        do {
            temp_v1_2 = var_a0_2->unk0;
            var_a0_2->unk8 = 0;
            var_a0_2->unk0 = (void *) temp_s0_2->unk8;
            temp_s0_2->unk8 = var_a0_2;
            var_a0_2 = temp_v1_2;
        } while (temp_v1_2 != NULL);
    }
    temp_s0_2->unk4 = NULL;
    func_000250F0((s32) ((u8 *)temp_s0_2 + 0x10));
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_000337FC(struct Unk_func_000337FC_0 *arg0) {
    func_00030974(arg0->unkA8, arg0->unkAC);
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00033820(struct Unk_func_00033820_0 *arg0) {
    func_000309A8(arg0->unkA8);
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00033840);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000338E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00033944);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00028D38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00028D54);
#endif

#if FW_VERSION != 100
void func_00033970(struct Unk_func_00033970_0 *arg0) {
    func_00035F00(arg0->unkAC);
}
#endif

#if FW_VERSION != 100
s32 func_0003398C(struct Unk_func_0003398C_0 *arg0) {
    s32 temp_s1;
    s32 temp_s2;

    temp_s1 = (u8 *)arg0 + 0x5F4;
    func_000250D4(temp_s1);
    temp_s2 = arg0->unk548;
    func_000250F0(temp_s1);
    return temp_s2;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000339D8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00033A10);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00028E0C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00028E28);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00028E44);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00028E60);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00028E7C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00033A44);
#endif

#if FW_VERSION != 100
s32 func_00033A70(struct Unk_func_00033A70_0 *arg0) {
    return func_00035F50(arg0->unkAC) == 1;
}
#endif

#if FW_VERSION != 100
s32 func_00033A94(struct Unk_func_00033A94_0 *arg0) {
    return func_00035FAC(arg0->unkAC) == 1;
}
#endif

#if FW_VERSION != 100
s32 func_00033AB8(struct Unk_func_00033AB8_0 *arg0) {
    return func_00035FA4(arg0->unkAC) == 1;
}
#endif

#if FW_VERSION != 100
void func_00033ADC(struct Unk_func_00033ADC_0 *arg0) {
    func_00035F10(arg0->unkAC);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00033AF8);
#endif

#if FW_VERSION != 100
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
#endif

#if FW_VERSION != 100
s32 func_00033C48(void) {
    return ~func_00033C7C() != 0;
}
#endif

#if FW_VERSION != 100
s32 func_00033C6C(struct Unk_func_00033C6C_0 *arg0) {
    return ~arg0->unk618 != 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00033C7C);
#endif

#if FW_VERSION != 100
s32 func_00033C84(struct Unk_func_00033C84_0 *arg0) {
    return arg0->unk618;
}
#endif

#if FW_VERSION != 100
void func_00033C8C(struct Unk_func_00033C8C_0 *arg0, s32 arg1) {
    arg0->unk614 = arg1;
}
#endif

#if FW_VERSION != 100
void func_00033C94(struct Unk_func_00033C94_0 *arg0, s32 arg1) {
    arg0->unk618 = arg1;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00033C9C);
#endif

#if FW_VERSION != 100
s32 func_00033D24(struct Unk_func_00033D24_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (func_000371A0(arg0->unkAC, 1, arg1) == 0) {
        var_v1 = 1;
        *arg1 += 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00033D70);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00033DB8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00033E20);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00033F60);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0003409C);
#endif

#if FW_VERSION != 100
void func_000341C0(struct Unk_func_000341C0_0 *arg0) {
    func_00035F40(arg0->unkAC);
}
#endif

#if FW_VERSION != 100
void func_000341DC(s32 arg0) {
    func_00031978(arg0 - 0xA4);
}
#endif

#if FW_VERSION != 100
void func_000341F8(s32 arg0) {
    func_00031978(arg0 - 0x68);
}
#endif

#if FW_VERSION != 100
void func_00034214(s32 arg0) {
    func_00031BD8(arg0 - 0xA4);
}
#endif

#if FW_VERSION != 100
void func_00034230(s32 arg0) {
    func_00031BD8(arg0 - 0x68);
}
#endif

#if FW_VERSION != 100
void func_0003424C(s32 arg0) {
    func_00032094(arg0 - 0x68);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00034268);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0003432C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00028FF8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00029000);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00029008);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00029010);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00029018);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00029020);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00029028);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00029030);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00029038);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00029040);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00029048);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00029050);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00029058);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00029060);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00029068);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00029070);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00029078);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00029080);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00029088);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00029090);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00029098);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000290A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000290A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000290B0);
#endif

#if FW_VERSION != 100
void func_000343F8(void) {
}
#endif

#if FW_VERSION != 100
s32 func_00034400(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00034408(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00034410(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00034418(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00034420(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00034428(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00034430(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00034438(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00034440(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00034448(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00034450(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00034458(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00034460(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00034468(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00034470(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00034478(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00034480(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00034488(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00034490(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00034498(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_000344A0(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_000344A8(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_000344B0(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_000344B8(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_000344C0(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_000344C8(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_000344D0(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_000344D8(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_000344E0(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000344E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000345E4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0003470C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000347C4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0003484C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000294D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0002952C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00034904);
#endif

#if FW_VERSION != 100
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
#endif

#if FW_VERSION != 100
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
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00034A3C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000296D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00034D10);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00029B9C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00029D80);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00034C48);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00034D10);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00035228);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000354AC);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000357D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00035A24);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0002A2D8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00035A68);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00035D10);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0002A704);
#endif

#if FW_VERSION != 100
void *func_00035EF0(struct Unk_func_00035EF0_0 *arg0) {
    return (arg0->unk1AC == 0) ? NULL : ((u8 *)arg0 + 0xAC);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00035F00);

#if FW_VERSION != 100
s32 func_00035F08(struct Unk_func_00035F08_0 *arg0) {
    return arg0->unk8;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00035F10);

#if FW_VERSION != 100
s32 func_00035F18(struct Unk_func_00035F18_0 *arg0) {
    return arg0->unk7C;
}
#endif

#if FW_VERSION != 100
s16 func_00035F20(struct Unk_func_00035F20_0 *arg0) {
    return arg0->unk58;
}
#endif

#if FW_VERSION != 100
s16 func_00035F28(struct Unk_func_00035F28_0 *arg0) {
    return arg0->unk56;
}
#endif

#if FW_VERSION != 100
s32 func_00035F30(struct Unk_func_00035F30_0 *arg0) {
    return arg0->unk5C;
}
#endif

#if FW_VERSION != 100
s32 func_00035F38(struct Unk_func_00035F38_0 *arg0) {
    return arg0->unk60;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00035F40);

#if FW_VERSION != 100
u16 func_00035F48(struct Unk_func_00035F48_0 *arg0) {
    return arg0->unkA0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00035F50);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00035FA4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0002A73C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0002A744);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0002A74C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0002A754);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00035FAC);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00035FC0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0002A8E4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00036148);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000361F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00036254);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00036294);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0002AC40);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000364BC);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000367D8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000368D4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0002B070);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0002B158);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000369B8);
#endif

#if FW_VERSION != 100
void func_00036BB4(struct Unk_func_00036BB4_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk14;
    if (temp_v1 != -1) {
        arg0->unk14 = (s32) (temp_v1 + 1);
        return;
    }
    arg0->unk14 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00036BD4);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00036DCC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00036E44);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00036EF0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00036F48);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00037060);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000371A0);
#endif

#if FW_VERSION != 100
void func_000371BC(void) {
    func_00036F48();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000371D8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000372E4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000374A8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000374D8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00037508);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000375A8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00037648);
#endif

