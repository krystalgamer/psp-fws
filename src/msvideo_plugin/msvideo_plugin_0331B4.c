#include "common.h"
#include "msvideo_plugin_decls.h"

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000331B4);

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

s32 func_000337FC(struct Unk_func_000337FC_0 *arg0) {
    func_00030974(arg0->unkA8, arg0->unkAC);
    return 0;
}

s32 func_00033820(struct Unk_func_00033820_0 *arg0) {
    func_000309A8(arg0->unkA8);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00033840);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000338E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00033944);

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00028D38(void *arg0) {
    func_0002D9E4(M2C_FIELD(arg0, void **, 0x98));
}
#endif

#if FW_VERSION == 100
void func_00028D38(void *arg0) {
    func_00035F00(M2C_FIELD(arg0, s32 *, 0x94));
}
#endif

#if FW_VERSION == 150
s32 func_00028D54(void *arg0) {
    s32 temp_s2;
    void *temp_s1;

    temp_s1 = arg0 + 0x2CC;
    func_000250D4((s32) temp_s1);
    temp_s2 = M2C_FIELD(arg0, s32 *, 0x2A4);
    func_000250F0((s32) temp_s1);
    return temp_s2;
}
#endif

#if FW_VERSION == 100
s32 func_00028D54(void *arg0) {
    s32 temp_s2;
    void *temp_s1;

    temp_s1 = arg0 + 0x394;
    func_000250D4((s32) temp_s1);
    temp_s2 = M2C_FIELD(arg0, s32 *, 0x36C);
    func_000250F0((s32) temp_s1);
    return temp_s2;
}
#endif

#if FW_VERSION == 152
s32 func_00028D54(void *arg0) {
    s32 temp_s1;
    s32 temp_s2;

    temp_s1 = arg0 + 0x2CC;
    func_000250D4(temp_s1);
    temp_s2 = M2C_FIELD(arg0, s32 *, 0x2A4);
    func_000250F0(temp_s1);
    return temp_s2;
}
#endif

#if FW_VERSION == 201
void func_00033970(struct Unk_func_00033970_0 *arg0) {
    func_00035F00(arg0->unkAC);
}

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

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0002BE6C);

s32 func_0002BE98(void *arg0) {
    return func_0002DA34(M2C_FIELD(arg0, s32 *, 0x98)) == 1;
}

s32 func_0002BEBC(void *arg0) {
    return func_0002DA90(M2C_FIELD(arg0, s32 *, 0x98)) == 1;
}

s32 func_0002BEE0(void *arg0) {
    return func_0002A754(M2C_FIELD(arg0, void **, 0x98)) == 1;
}

void func_00028E0C(s32 arg0) {
    func_0002D9F4(M2C_FIELD(arg0, void **, 0x98));
}
#endif

#if FW_VERSION == 100
void func_00028E0C(s32 arg0) {
    func_000275CC(arg0 - 0x8C);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002BF20(s32 arg0) {
    func_000275CC(arg0 - 0x90);
}
#endif

#if FW_VERSION < 201
void func_00028E28(s32 arg0) {
    func_000275CC(arg0 - 0x54);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00028E44(s32 arg0) {
    func_00031BD8(arg0 - 0x90);
}
#endif

#if FW_VERSION == 100
void func_00028E44(s32 arg0) {
    func_00031BD8(arg0 - 0x8C);
}
#endif

#if FW_VERSION < 201
void func_00028E60(s32 arg0) {
    func_00031BD8(arg0 - 0x54);
}

void func_00028E7C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_00027A40(arg0 - 0x54, arg1, arg2, arg3, arg4);
}
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00033A44);

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

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00033AF8);

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

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00033C7C);

s32 func_00033C84(struct Unk_func_00033C84_0 *arg0) {
    return arg0->unk618;
}

void func_00033C8C(struct Unk_func_00033C8C_0 *arg0, s32 arg1) {
    arg0->unk614 = arg1;
}

void func_00033C94(struct Unk_func_00033C94_0 *arg0, s32 arg1) {
    arg0->unk618 = arg1;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00033C9C);

s32 func_00033D24(struct Unk_func_00033D24_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (func_000371A0(arg0->unkAC, 1, arg1) == 0) {
        var_v1 = 1;
        *arg1 += 1;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00033D70);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00033DB8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00033E20);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00033F60);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0003409C);

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
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00034268);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0003432C);

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0002C10C(void) {
    return 0;
}
#endif

#if FW_VERSION < 201
s32 func_00028FF8(void) {
    return 0;
}

s32 func_00029000(void) {
    return 0;
}

s32 func_00029008(void) {
    return 0;
}

s32 func_00029010(void) {
    return 0;
}

s32 func_00029018(void) {
    return 0;
}

s32 func_00029020(void) {
    return 0;
}

s32 func_00029028(void) {
    return 0;
}

s32 func_00029030(void) {
    return 0;
}

s32 func_00029038(void) {
    return 0;
}

s32 func_00029040(void) {
    return 0;
}

s32 func_00029048(void) {
    return 0;
}

s32 func_00029050(void) {
    return 0;
}

s32 func_00029058(void) {
    return 0;
}

s32 func_00029060(void) {
    return 0;
}

s32 func_00029068(void) {
    return 0;
}

s32 func_00029070(void) {
    return 0;
}

s32 func_00029078(void) {
    return 0;
}

s32 func_00029080(void) {
    return 0;
}

s32 func_00029088(void) {
    return 0;
}

s32 func_00029090(void) {
    return 0;
}

s32 func_00029098(void) {
    return 0;
}

s32 func_000290A0(void) {
    return 0;
}

s32 func_000290A8(void) {
    return 0;
}

s32 func_000290B0(void) {
    return 0;
}
#else
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
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000344E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000345E4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0003470C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000347C4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0003484C);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000294D8);

s32 func_0002952C(void *arg0) {
    s32 var_v1;

    var_v1 = 1;
    if (arg0 != NULL) {
        sce_paf_private_free(arg0);
        var_v1 = 0;
    }
    return var_v1;
}
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00034904);

s32 func_000349A0(s32 **arg0) {
    s32 *temp_v0;
    s32 var_v1;

    var_v1 = 1;
    if (arg0 != NULL) {
        temp_v0 = sce_paf_private_malloc(0x1DC);
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
        sce_paf_private_free(arg0);
        var_v0 = 0;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00034A3C);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000296D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00034D10);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0002CD60);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0002CFE4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00029B9C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00029D80);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00034C48);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00034D10);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00035228);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000354AC);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000357D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00035A24);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0002A2D8);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00035A68);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00035D10);

#if FW_VERSION == 150
void *func_0002A704(void *arg0) {
    void *var_v1;

    var_v1 = NULL;
    if (M2C_FIELD(arg0, s32 *, 0x1A4) != 0) {
        var_v1 = arg0 + 0xA4;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 100
void *func_0002A704(void *arg0) {
    void *var_v1;

    var_v1 = NULL;
    if (M2C_FIELD(arg0, s32 *, 0x190) != 0) {
        var_v1 = arg0 + 0x90;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 152
void *func_0002A704(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 0x1A4) == 0) ? NULL : (arg0 + 0xA4);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0002D9E4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x64);
}

s32 func_0002D9EC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

s32 func_0002D9F4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x20);
}

s32 func_0002D9FC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x78);
}
#endif

#if FW_VERSION == 152
s16 func_0002D940(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x58);
}
#endif

#if FW_VERSION == 150
s16 func_0002DA04_v150(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x58);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s16 func_0002DA0C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x56);
}
#endif

#if FW_VERSION == 201
void *func_00035EF0(struct Unk_func_00035EF0_0 *arg0) {
    return (arg0->unk1AC == 0) ? NULL : ((u8 *)arg0 + 0xAC);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00035F00);

#if FW_VERSION == 201
s32 func_00035F08(struct Unk_func_00035F08_0 *arg0) {
    return arg0->unk8;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00035F10);

#if FW_VERSION == 201
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
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00035F40);

#if FW_VERSION == 201
u16 func_00035F48(struct Unk_func_00035F48_0 *arg0) {
    return arg0->unkA0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00035F50);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00035FA4);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0002DA34);
#endif

#if FW_VERSION == 100
s32 func_0002A73C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x54);
}

s32 func_0002A744(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x58);
}

s32 func_0002A74C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x8C);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0002A754(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x6C);
}
#endif

#if FW_VERSION == 100
s32 func_0002A754(void *arg0) {
    return (s32) M2C_FIELD(arg0, u16 *, 0x88);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0002DA90);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00035FAC);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00035FC0);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0002A8E4);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00036148);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000361F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00036254);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00036294);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0002DF94);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0002AC40);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000364BC);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000367D8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000368D4);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0002E430);

void func_0002E62C(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_v1 != -1) {
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (temp_v1 + 1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0002B070);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0002B158);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000369B8);

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

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_0002E84C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00036DCC);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00036E44);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00036EF0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00036F48);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00037060);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000371A0);

void func_000371BC(void) {
    func_00036F48();
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000371D8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000372E4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000374A8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000374D8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00037508);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_000375A8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0331B4", func_00037648);
#endif
