/* lang: c++ */
#include "common.h"
#include "savedata_plugin_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000CE3C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0000CE3C(M2C_UNK **arg0) {
    *arg0 = &D_00022508;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 102 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000CE64);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
s32 func_0000CE64(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xA3C) != 0) {
        func_000139C4(M2C_FIELD(arg0, s32 *, 0xA38));
        M2C_FIELD(arg0, s32 *, 0xA38) = 0;
        M2C_FIELD(arg0, s32 *, 0xA3C) = 0;
    }
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_0000CE64(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xA3C) != 0) {
        func_000139C4(M2C_FIELD(arg0, s32 *, 0xA38));
        M2C_FIELD(arg0, s32 *, 0xA3C) = 0;
    }
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 func_0000CE94(struct Unk_func_0000CE94_0 *arg0) {
    return arg0->unk1C;
}
#endif

#if FW_VERSION == 102 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000CE9C);
#endif

#if FW_VERSION == 271
s32 func_0000CE9C(void *arg0) {
    return func_0000C26C(M2C_FIELD(arg0, s32 *, 0xA3C));
}
#endif

#if FW_VERSION == 260
s32 func_0000CE9C(void *arg0) {
    return func_0000CA34(M2C_FIELD(arg0, s32 *, 0xA40));
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 260)
s32 func_0000CE9C(void *arg0) {
    return func_00013E50(M2C_FIELD(arg0, s32 *, 0xA38)) != 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000978C);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00009804);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00009838);
#endif

#if FW_VERSION == 271
s32 func_0000B74C(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80103002;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0xA3C);
    if (temp_v0 != 0) {
        var_v1 = __builtin_allegrex_min(func_0000CB48(temp_v0), 0);
    }
    return var_v1;
}
#endif

#if FW_VERSION == 260
s32 func_0000B74C(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80103002;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0xA40);
    if (temp_v0 != 0) {
        var_v1 = __builtin_allegrex_min(func_0000CB48(temp_v0), 0);
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_000098B8);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000B874);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000B948);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000B970);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000B0E8);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000B9AC_v260);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000BA4C);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000BB94);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000B4CC);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000BD8C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000BF70);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000C22C);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000C464);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000BD5C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_00023050);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000C5E8);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000C858);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000C26C);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000CA34);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 func_0000CAA4(void *arg0, s32 *arg1, s32 *arg2) {
    if (arg2 != NULL) {
        *arg2 = M2C_FIELD(arg0, s32 *, 0x50);
    }
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(arg0, s32 *, 0x4C);
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000CACC);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000CB48);
#endif

#if FW_VERSION == 271
s32 func_0000A5F0(void *arg0) {
    return func_0001849C((s32) (arg0 + 0x24), 0, 0);
}
#endif

#if FW_VERSION == 260
s32 func_0000A5F0(void *arg0) {
    return func_000142E8((s32) (arg0 + 0x24));
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
s32 func_0000A5F0(void *arg0) {
    return func_00014E64(M2C_FIELD(arg0, s32 *, 0xA38)) != 0;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 func_0000CBB8(void) {
    return __builtin_allegrex_min(func_00019650(0x2710, 0x2710, 0x2710, 0x2710), 0);
}

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000CBE8);

void func_0000CCA4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00023078;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}

void func_0000CCC0(M2C_UNK **arg0) {
    *arg0 = &D_00023078;
}

void func_0000CCD0(M2C_UNK **arg0) {
    *arg0 = &D_00023078;
}

void func_0000CCE0(M2C_UNK **arg0) {
    *arg0 = &D_00023078;
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000CD08);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000CE04);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_00023078);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_00023088);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D05C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000C914);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D124);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D18C);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D304);

s32 func_0000D47C(void *arg0, u32 arg1) {
    s32 temp_v1;
    s32 var_a2;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0xC);
    var_a2 = 0;
    if ((temp_v1 != 0) && ((u32) M2C_FIELD(arg0, u32 *, 4) >= arg1)) {
        var_a2 = temp_v1 + (arg1 * 0x68);
    }
    return var_a2;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_000098B8);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_00022488);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_000098E8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00009908);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00009968);

void func_000099C8(M2C_UNK **arg0) {
    *arg0 = &D_00022508;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000CE2C);
#endif

#if FW_VERSION < 201
void func_0000CE2C(s32 **arg0) {
    *arg0 = &D_00022508;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000CE3C);
#endif

#if FW_VERSION < 201
void func_0000CE3C(s32 **arg0) {
    *arg0 = &D_00022508;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000A798);
#endif

#if FW_VERSION == 150
void func_0000A798(void *arg0) {
    s32 var_v0;

    var_v0 = func_00016470();
    if (var_v0 < 0) {
        var_v0 = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x20) = var_v0;
}
#endif

#if FW_VERSION == 271
s32 func_0000A7C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
s32 func_0000A7C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x20);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000A7D0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00009A10);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
s32 func_00009B04(void *arg0, u32 arg1) {
    s32 var_a1;
    u32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, u32 *, 0x10);
    var_a1 = 0;
    if (temp_v0 >= 2U) {
        var_a1 = (u32) (M2C_FIELD(arg0, s32 *, 0xC) * M2C_FIELD(arg0, s32 *, 0x18) * (temp_v0 - 2)) >= arg1;
    }
    return var_a1;
}
#endif

#if FW_VERSION < 150
s32 func_00009B04(void *arg0, u32 arg1) {
    s32 var_v1;
    u32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, u32 *, 0x10);
    var_v1 = 0;
    if (temp_v0 >= 2U) {
        var_v1 = arg1 < (u32) (M2C_FIELD(arg0, s32 *, 0xC) * M2C_FIELD(arg0, s32 *, 0x18) * (temp_v0 - 2));
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000A920);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000A984);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000A9D4);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00009B3C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00009C84);

void func_00009E10(M2C_UNK **arg0) {
    *arg0 = &D_000224F8;
    func_00009EC0((s32) arg0);
}

void func_00009E38(M2C_UNK **arg0) {
    *arg0 = &D_000224F8;
    func_0000D214((s32) arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D19C);
#endif

#if FW_VERSION < 201
void func_0000D19C(s32 **arg0) {
    *arg0 = &D_000224F8;
    func_0000D214((s32) arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D1C4);
#endif

#if FW_VERSION < 201
void func_0000D1C4(s32 **arg0) {
    *arg0 = &D_000224F8;
    func_0000D214((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00009EC0);
#else
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000CEB8);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_000224C8);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_000224D8);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000CF50);

void func_0000CFA0(s32 arg0) {
    func_000159A4(arg0 + 8, arg0 + 0x14, arg0 + 0xC, arg0 + 0x10);
}

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000CFCC);

void func_0000D14C(M2C_UNK **arg0) {
    *arg0 = &D_000224F8;
    func_0000D1FC((s32) arg0);
}

void func_0000D174(M2C_UNK **arg0) {
    *arg0 = &D_000224F8;
    func_0000D214((s32) arg0);
}

void func_0000D19C(M2C_UNK **arg0) {
    *arg0 = &D_000224F8;
    func_0000D214((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D1C4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0000D1C4(M2C_UNK **arg0) {
    *arg0 = &D_000224F8;
    func_0000D214((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D1FC);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D214);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00009F38);
#endif

#if FW_VERSION < 201
s32 func_00009FAC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00009FB4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00009FB4(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_v1;

    var_v1 = 0;
    if ((arg1 >= 0) && (M2C_FIELD(arg0, s32 *, 8) >= arg1)) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x10);
        if (temp_a0 != 0) {
            var_v1 = temp_a0 + (arg1 * 0x34) + 0x20;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000B54C);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000B5E4);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000B740);
#endif

#if FW_VERSION < 150
s32 func_00009FB4(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_v1;

    var_v1 = 0;
    if ((arg1 >= 0) && (M2C_FIELD(arg0, s32 *, 8) >= arg1)) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0xC);
        if (temp_a0 != 0) {
            var_v1 = temp_a0 + (arg1 * 0x34) + 0x20;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00009FF4);
#endif

#if FW_VERSION < 150
s32 func_0000A088(s32 arg0) {
    func_0000A168(arg0, 0, -1);
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000A0AC);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000A168);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D274);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D2FC);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D33C);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D3D4);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D530);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D588);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D5E4);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D630);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000B0CC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000A324);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000A440);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000A724);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000A958);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D6A0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000B928);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000A988);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000AA28);
#endif

#if FW_VERSION < 260
s32 func_0000AA28(s32 arg0) {
    return func_00014ABC(arg0) != 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_0000B9AC(M2C_UNK **arg0) {
    *arg0 = &D_00022518;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000AA48);

s32 func_0000AA84(s32 arg0) {
    return func_00014C34(arg0) != 0;
}

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000AAA4);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000AAE0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D6E8);
#endif

#if FW_VERSION < 201
s32 func_0000D718(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return __builtin_allegrex_min(func_00014D5C(arg0, arg1, arg2, arg3), 0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D718);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000ABAC);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_000114C0);
#endif

#if FW_VERSION < 282
void func_0000AD30(M2C_UNK **arg0) {
    *arg0 = &D_00022518;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D778);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D7F4);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D7F0);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000ADF8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D754);

void func_0000D7B8(M2C_UNK **arg0) {
    *arg0 = &D_00022518;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D7C8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0000D7C8(M2C_UNK **arg0) {
    *arg0 = &D_00022518;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D7F0);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D86C);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D8E8);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D924);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D960);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D9B0);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D9C8);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_00020FF4);
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_000224F8);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_00022508);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_00022518);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000DA2C);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_000224F0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_00021038);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_00022550);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000B090);
#else
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000DAA8);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000DB00);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000DC24);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000C374);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000DC34);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
void func_0000C3F0(void) {

}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000B22C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000B258);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000DC30);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000DCAC);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000DD2C);

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E83C);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E84C);
#endif

#if FW_VERSION < 282
void func_0000B37C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#else
void func_0000DDAC(struct Unk_func_0000DDAC_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000DDBC);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000DDFC);

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000B420);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000DE50);

#if FW_VERSION < 282
void func_0000B518(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    temp_v0 = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_0000DF38((s32) arg0, temp_v1 - 0xA);
    }
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000B55C);
#endif

#if FW_VERSION >= 282
void func_0000DEF4(struct Unk_func_0000DEF4_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = arg0->unk8;
    temp_v0 = arg0->unk4 - 1;
    arg0->unk4 = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_0000DF38((s32) arg0, temp_v1 - 0xA);
    }
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000DF38);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E0A8);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E120);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E190);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E200);

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000B914);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E274);

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000B944);
#endif

#if FW_VERSION < 201
void func_0000B95C(void) {

}

void func_0000B964(void) {

}
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000C164);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
s32 func_0000CB18(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC) != 0;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E28C);

#if FW_VERSION < 282
void func_0000B9BC(s32 arg0) {
    func_0000EB30(arg0 + 8);
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000B9D8);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000CB80);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
s32 func_0000CB80(void) {
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000C728);
#endif

#if FW_VERSION == 150
s32 func_0000CB90_v150(void) {
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000CB98);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000BB78);
#endif

#if FW_VERSION < 250
s32 func_0000BC04(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38) != 0;
}
#endif

#if FW_VERSION >= 282
void func_0000E2DC(s32 arg0) {
    func_0000EB30(arg0 + 8);
}

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E2F8);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E34C);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E500);

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000BC60);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E554);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000CA64);

void func_0000CB34(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38) = Job_Start(0, (s32 *) func_0000CB80, arg0, -1, -1, &func_0000C728);
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000BDF0);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_00021038);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_00022550);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000BF1C);

void func_0000BFA8(void) {
    func_0000BF1C(1, 0xFFFF);
}

void func_0000BFC8(void) {
    func_0000BF1C(0, 0xFFFF);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E7B0);
#else
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E688);

void func_0000E768(struct Unk_func_0000E768_0 *arg0) {
    arg0->unk38 = Job_Start(0, &func_0000E2F8, arg0, -1, -1, &func_0000E34C);
}

void func_0000E7B0(struct Unk_func_0000E7B0_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E7C0);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E83C);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E84C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E88C);
#else
void func_0000E83C(struct Unk_func_0000E83C_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E84C);

void func_0000E88C(struct Unk_func_0000E88C_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E89C);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E8DC);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E930);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E9B8);

#if FW_VERSION < 282 || FW_VERSION >= 350
void func_0000E9F4(void **arg0) {
    void *temp_s0;
    void *var_a0;
    void *var_v0;

    var_a0 = *arg0;
    var_v0 = M2C_FIELD(var_a0, void **, 4);
    if (var_v0 != var_a0) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            sce_paf_private_free2(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    sce_paf_private_free2(var_a0);
}
#else
void func_0000E9F4(void **arg0) {
    void *temp_s0;
    struct Unk_func_0000E9F4_var_a0 *var_a0;
    struct Unk_func_0000E9F4_var_v0 *var_v0;

    var_a0 = *arg0;
    var_v0 = var_a0->unk4;
    if (var_v0 != var_a0) {
        do {
            temp_s0 = var_v0->unk4;
            sce_paf_private_free2(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    sce_paf_private_free2(var_a0);
}
#endif

#if FW_VERSION < 282 || FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000EA4C);
#else
void func_0000EA4C(struct Unk_func_0000EA4C_0 *arg0) {
    M2C_UNK *temp_v0;
    M2C_UNK *var_v1;
    void *temp_s0;
    struct Unk_func_0000EA4C_var_v0 *var_v0;

    var_v1 = arg0->unk0;
    var_v0 = M2C_FIELD(var_v1, void **, 4);
    if (var_v0 != var_v1) {
        do {
            temp_s0 = var_v0->unk4;
            sce_paf_private_free2(var_v0);
            var_v1 = arg0->unk0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_v1);
    }
    M2C_FIELD(var_v1, M2C_UNK **, 4) = var_v1;
    arg0->unk4 = 0;
    temp_v0 = arg0->unk0;
    *temp_v0 = temp_v0;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000EAA8);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000EB30);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000F424);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000CF20);
#endif

#if FW_VERSION == 100
void ***func_0000C38C(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    *temp_s0 = M2C_FIELD(temp_v1, void **, 0);
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    sce_paf_private_free2(temp_v1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}
#endif

#if FW_VERSION < 250
void func_0000C3F4(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    temp_v0 = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_0000C760((s32) arg0, temp_v1 - 0xA);
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000EBA4);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000ECAC);

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000CB0C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void ***func_0000D4E8(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    *temp_s0 = M2C_FIELD(temp_v1, void **, 0);
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    sce_paf_private_free2(temp_v1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}
#endif

#if FW_VERSION >= 350
void ***func_0000ED50(void ***arg0, struct Unk_func_0000ED50_1 *arg1, void **arg2) {
    void **temp_s0;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    *temp_s0 = M2C_FIELD(temp_v1, void **, 0);
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    sce_paf_private_free2(temp_v1);
    *arg0 = temp_s0;
    arg1->unk4 -= 1;
    return arg0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void ***func_0000ED50(void ***arg0, struct Unk_func_0000ED50_1 *arg1, void **arg2) {
    void **temp_s0;
    struct Unk_func_0000ED50_temp_v1 *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = temp_v1->unk4;
    *temp_s0 = temp_v1->unk0;
    M2C_FIELD(temp_v1->unk0, void ***, 4) = temp_s0;
    sce_paf_private_free2(temp_v1);
    *arg0 = temp_s0;
    arg1->unk4 = (s32) (arg1->unk4 - 1);
    return arg0;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000EDB8);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000EE4C);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000EF5C);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000F8D4);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000C760);
#endif

#if FW_VERSION < 282
void func_0000C844(void) {
    sce_paf_private_malloc();
}

void func_0000C860(void) {
    sce_paf_private_memalign();
}

void func_0000C87C(void) {
    sce_paf_private_free();
}

void func_0000C898(void) {
    sce_paf_private_qsort();
}
#else
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000F054);

void func_0000F130(void) {
    sce_paf_private_malloc();
}

void func_0000F14C(void) {
    sce_paf_private_memalign();
}

void func_0000F168(void) {
    sce_paf_private_free();
}

void func_0000F184(void) {
    sce_paf_private_qsort();
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000F1A0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000C900);

void func_0000C94C(M2C_UNK **arg0) {
    *arg0 = &D_00022578;
}

void func_0000C95C(M2C_UNK **arg0) {
    *arg0 = &D_00022578;
}

void func_0000C96C(M2C_UNK **arg0) {
    *arg0 = &D_00022578;
    _ZdlPv(arg0);
}

void func_0000F280(struct Unk_func_000040AC_0 *arg0) {
    arg0->unk8 = 1;
    arg0->unkC = 0;
}

void func_0000C9A4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}
#else
void func_0000F1EC(struct Unk_func_000040AC_0 *arg0, s32 arg1) {
    arg0->unk0 = &D_00022578;
    func_0000F280(arg0);
    arg0->unk4 = arg1;
    arg0->unk10 = -1;
    arg0->unk14 = -1;
}

void func_0000F238(M2C_UNK **arg0) {
    *arg0 = &D_00022578;
}

void func_0000F248(M2C_UNK **arg0) {
    *arg0 = &D_00022578;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000F258);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0000F258(M2C_UNK **arg0) {
    *arg0 = &D_00022578;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
void func_0000F280(struct Unk_func_000040AC_0 *arg0) {
    arg0->unk8 = 1;
    arg0->unkC = 0;
}

void func_0000F290(struct Unk_func_0000F290_0 *arg0, s32 arg1) {
    arg0->unk8 = arg1;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000F298);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D5C8);

s32 func_0000CA04(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (((M2C_FIELD(arg0, s32 *, 8) & 0xD8) == 0) || (arg1 != M2C_FIELD(arg0, s32 *, 0x10))) {
        var_v1 = 0;
    }
    return var_v1;
}
#endif

#if FW_VERSION < 201
s32 func_0000CA04(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (((M2C_FIELD(arg0, s32 *, 8) & 0x18) == 0) || (arg1 != M2C_FIELD(arg0, s32 *, 0x10))) {
        var_v1 = 0;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 271
s32 func_0000CA2C(void *arg0) {
    return __builtin_allegrex_ext(M2C_FIELD(arg0, s32 *, 8), 4, 1);
}
#endif

#if FW_VERSION < 271
s32 func_0000CA2C(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 8) >> 4) & 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_0000CA3C(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 8) & 0xD8) != 0;
}
#endif

#if FW_VERSION < 201
s32 func_0000CA3C(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 8) & 0x18) != 0;
}
#endif

#if FW_VERSION < 282
s32 func_0000CA4C(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 1;
    if ((((M2C_FIELD(arg0, u8 *, 8) ^ 1) & 1) == 0) || (arg1 != M2C_FIELD(arg0, s32 *, 0x10))) {
        var_v1 = 0;
    }
    return var_v1;
}
#endif

#if FW_VERSION < 250
s32 func_0000CA78(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 8) & 0x19) == 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000F2F8);

s32 func_0000F364(struct Unk_func_0000F364_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (((arg0->unk8 & 0xD8) == 0) || (arg1 != arg0->unk10)) {
        var_v1 = 0;
    }
    return var_v1;
}

s32 func_0000F38C(struct Unk_func_0000F38C_0 *arg0) {
    return __builtin_allegrex_ext(arg0->unk8, 4, 1);
}

s32 func_0000F398(struct Unk_func_0000F398_0 *arg0) {
    return (arg0->unk8 & 0xD8) != 0;
}

s32 func_0000F3A8(struct Unk_func_0000F3A8_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 1;
    if ((((arg0->unk8 ^ 1) & 1) == 0) || (arg1 != arg0->unk10)) {
        var_v1 = 0;
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000F3D4);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000F44C);

#if FW_VERSION < 282
void func_0000CB40(s32 **arg0) {
    *arg0 = &D_00022560;
    func_0000C94C(arg0);
}

void func_0000CB68(s32 **arg0) {
    *arg0 = &D_00022560;
    func_0000C94C(arg0);
}

void func_0000CB90(s32 **arg0) {
    *arg0 = &D_00022560;
    func_0000C94C(arg0);
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000F50C);
#else
void func_0000F484(s32 **arg0) {
    *arg0 = &D_00022560;
    func_0000F238(arg0);
}

void func_0000F4AC(s32 **arg0) {
    *arg0 = &D_00022560;
    func_0000F238(arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000F4D4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0000F4D4(s32 **arg0) {
    *arg0 = &D_00022560;
    func_0000F238(arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
void func_0000F50C(struct Unk_func_0000F50C_0 *arg0) {
    arg0->unk18 = 0;
    arg0->unk1C = 0;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000F518);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000CC00);
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D36C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000DD4C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D9A8);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D9B0_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000DA64);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000CD7C);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000CDFC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000F544);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000F564);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000F5F8);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000F68C);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000F7A0);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000DC50);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000CFC4);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D028);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000F88C);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000F968);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000F9A8);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000F9E4);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000FA20);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000FA70);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000FB1C);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000FB58);

#if FW_VERSION < 282
void func_0000D284(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000226A0;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    func_0000FBF8((s32) arg0);
}
#else
void func_0000FB84(struct Unk_func_0000FB84_0 *arg0, s32 arg1) {
    arg0->unk0 = &D_000226A0;
    arg0->unk4 = arg1;
    func_0000FBF8((s32) arg0);
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000FBB0);

#if FW_VERSION < 282
void func_0000D2C0(M2C_UNK **arg0) {
    *arg0 = &D_000226A0;
}

void func_0000D2D0(M2C_UNK **arg0) {
    *arg0 = &D_000226A0;
    _ZdlPv(arg0);
}
#else
void func_0000FBC0(M2C_UNK **arg0) {
    *arg0 = &D_000226A0;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000FBD0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0000FBD0(M2C_UNK **arg0) {
    *arg0 = &D_000226A0;
    _ZdlPv(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000FBF8);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000FC10);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000FD8C);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000FE74);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E3A4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_0000D6C8(void) {
    void *sp0;
    _ZN3vsh31SetButtonNavigationString_EnterEPKw(&sp0, _ZN3vsh15GetString_EnterEv());
    func_000020C4(&sp0);
    _ZN3vsh30SetButtonNavigationString_BackEPKw(&sp0, _ZN3vsh14GetString_BackEv());
    func_000020C4(&sp0);
    _ZN3vsh32SetButtonNavigationString_OptionEPKw(&sp0, _ZN3vsh16GetString_OptionEv());
    func_000020C4(&sp0);
}
#endif

#if FW_VERSION < 260
void func_0000D6C8(void) {
    void *sp0;
    _ZN3vsh31SetButtonNavigationString_EnterEPKw(&sp0, _ZN3vsh15GetString_EnterE6Locale(-1));
    func_000020C4(&sp0);
    _ZN3vsh30SetButtonNavigationString_BackEPKw(&sp0, _ZN3vsh14GetString_BackE6Locale(-1));
    func_000020C4(&sp0);
    _ZN3vsh32SetButtonNavigationString_OptionEPKw(&sp0, _ZN3vsh16GetString_OptionE6Locale(-1));
    func_000020C4(&sp0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000FFF8);

void func_0001009C(void) {
    void *sp0;
    _ZN3vsh31SetButtonNavigationString_EnterEPKw(&sp0, _ZN3vsh15GetString_EnterEv());
    func_000020C4(&sp0);
    _ZN3vsh30SetButtonNavigationString_BackEPKw(&sp0, _ZN3vsh14GetString_BackEv());
    func_000020C4(&sp0);
    _ZN3vsh32SetButtonNavigationString_OptionEPKw(&sp0, _ZN3vsh16GetString_OptionEv());
    func_000020C4(&sp0);
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00010104);

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_0000E840(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    func_0000D850(arg0);
    M2C_FIELD(arg0, s32 *, 0xC) = arg3;
    M2C_FIELD(arg0, s32 *, 0x10) = sceVshCommonGui_10906D79(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0000E840(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    func_0000D850(arg0);
    M2C_FIELD(arg0, s32 *, 0xC) = arg3;
    M2C_FIELD(arg0, s32 *, 0x10) = sceVshCommonGui_1A6F3382(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}
#endif

#if FW_VERSION < 150
void func_0000D7B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    func_0000D850(arg0);
    M2C_FIELD(arg0, s32 *, 8) = arg3;
    M2C_FIELD(arg0, s32 *, 0xC) = sceVshCommonGui_1A6F3382(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D850);
#else
void func_00010184(struct Unk_func_00010184_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    func_00010224(arg0);
    arg0->unkC = arg3;
    arg0->unk10 = sceVshCommonGui_10906D79(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

void func_00010224(struct Unk_func_00010184_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk10;
    if (temp_v0 != 0) {
        _ZN3vsh13MessageDialog10HideDeleteEv(temp_v0);
        arg0->unk10 = 0;
    }
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00010260);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00010B00);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00010B84);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
void func_0000E924(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg4;
    M2C_FIELD(arg0, s8 *, 0x1C) = 1;
    func_0000E840((s32) arg0, arg1, arg2, arg3, (s32) &func_0000E950, arg5, arg6, arg7);
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000D894);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000DB9C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_00022560);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_00022578);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_00022548);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E950);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_000226C4);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_000226C8);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_000226CC);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E9D0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000EA70);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000ED90);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000DC30);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E0B4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E180);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000F504);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000EF64);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000F588);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000F6B8);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_000210C4);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_00021608);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_0002258C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_00022710);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00010CAC);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_000210E4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_00023164);
#endif

#if FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_000210EC);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_000210FC);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_00021110);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_00021124);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_00021138);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_0002114C);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_00021160);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_00021168);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_00021170);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_00021184);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_0002119C);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_000211BC);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E180);
#endif

#if FW_VERSION < 150 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00010268);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E364);
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000EB50);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E4B8);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E6A0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_0000E6A0(s32 arg0, void **arg1, s32 arg2) {
    void *sp0;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;

    func_000020A4((s32*) &sp0, 0);
    temp_s0 = arg2 << 0x10;
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32 *, s32), 0xAC)(arg1, (s32*) &sp0, temp_s0 | 1);
    if (sp0 != NULL) {
        temp_v0 = M2C_FIELD(sp0, s32 *, 4) - 1;
        M2C_FIELD(sp0, s32 *, 4) = temp_v0;
        if (temp_v0 > 0) {

        } else {
            M2C_FIELD(M2C_FIELD(sp0, void **, 0), M2C_UNK (**)(void *), 4)(sp0);
        }
    }
    _ZNK3paf4View10GetTextureEPKc((s32*) &sp0, arg0, "tex_broken_data");
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32 *, s32), 0xAC)(arg1, (s32*) &sp0, temp_s0);
    if (sp0 != NULL) {
        temp_v0_2 = M2C_FIELD(sp0, s32 *, 4) - 1;
        M2C_FIELD(sp0, s32 *, 4) = temp_v0_2;
        if (temp_v0_2 > 0) {

        } else {
            M2C_FIELD(M2C_FIELD(sp0, void **, 0), M2C_UNK (**)(void *), 4)(sp0);
        }
    }
    _ZNK3paf4View10GetTextureEPKc((s32*) &sp0, arg0, "tex_broken_data_f");
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32 *, s32), 0xAC)(arg1, (s32*) &sp0, temp_s0 | 7);
    if (sp0 != NULL) {
        temp_v0_3 = M2C_FIELD(sp0, s32 *, 4) - 1;
        M2C_FIELD(sp0, s32 *, 4) = temp_v0_3;
        if (temp_v0_3 > 0) {

        } else {
            M2C_FIELD(M2C_FIELD(sp0, void **, 0), M2C_UNK (**)(void *), 4)(sp0);
        }
    }
    _ZNK3paf4View10GetTextureEPKc((s32*) &sp0, arg0, "tex_broken_data_s");
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32 *, s32), 0xAC)(arg1, (s32*) &sp0, temp_s0 | 0xE);
    if (sp0 != NULL) {
        temp_v0_4 = M2C_FIELD(sp0, s32 *, 4) - 1;
        M2C_FIELD(sp0, s32 *, 4) = temp_v0_4;
        if (temp_v0_4 > 0) {

        } else {
            M2C_FIELD(M2C_FIELD(sp0, void **, 0), M2C_UNK (**)(void *), 4)(sp0);
        }
    }
}
#endif

#if FW_VERSION == 100
void func_0000E6A0(s32 arg0, void **arg1, s32 arg2) {
    void *sp0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;

    func_000020A4((s32*) &sp0, 0);
    temp_s2 = arg2 << 0x10;
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32 *, s32), 0xA8)(arg1, (s32*) &sp0, temp_s2 | 1);
    if ((sp0 == NULL) || (temp_v0 = M2C_FIELD(sp0, s32 *, 4) - 1, M2C_FIELD(sp0, s32 *, 4) = temp_v0, (temp_v0 > 0))) {

    } else {
        M2C_FIELD(M2C_FIELD(sp0, void **, 0), M2C_UNK (**)(void *), 4)(sp0);
    }
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32, M2C_UNK, M2C_UNK), 0x7C)(arg1, temp_s2, 0x19, 3);
    _ZNK3paf4View10GetTextureEPKc((s32*) &sp0, arg0, D_000210EC);
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32 *, s32), 0xA8)(arg1, (s32*) &sp0, temp_s2);
    if ((sp0 == NULL) || (temp_v0_2 = M2C_FIELD(sp0, s32 *, 4) - 1, M2C_FIELD(sp0, s32 *, 4) = temp_v0_2, (temp_v0_2 > 0))) {

    } else {
        M2C_FIELD(M2C_FIELD(sp0, void **, 0), M2C_UNK (**)(void *), 4)(sp0);
    }
    temp_s0 = temp_s2 | 7;
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32, M2C_UNK, M2C_UNK), 0x7C)(arg1, temp_s0, 0x19, 3);
    _ZNK3paf4View10GetTextureEPKc((s32*) &sp0, arg0, D_000210FC);
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32 *, s32), 0xA8)(arg1, (s32*) &sp0, temp_s0);
    if ((sp0 == NULL) || (temp_v0_3 = M2C_FIELD(sp0, s32 *, 4) - 1, M2C_FIELD(sp0, s32 *, 4) = temp_v0_3, (temp_v0_3 > 0))) {

    } else {
        M2C_FIELD(M2C_FIELD(sp0, void **, 0), M2C_UNK (**)(void *), 4)(sp0);
    }
    temp_s0_2 = temp_s2 | 0xE;
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32, M2C_UNK, M2C_UNK), 0x7C)(arg1, temp_s0_2, 0x19, 3);
    _ZNK3paf4View10GetTextureEPKc((s32*) &sp0, arg0, D_00021110);
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32 *, s32), 0xA8)(arg1, (s32*) &sp0, temp_s0_2);
    if (sp0 != NULL) {
        temp_v0_4 = M2C_FIELD(sp0, s32 *, 4) - 1;
        M2C_FIELD(sp0, s32 *, 4) = temp_v0_4;
        if (temp_v0_4 > 0) {

        } else {
            M2C_FIELD(M2C_FIELD(sp0, void **, 0), M2C_UNK (**)(void *), 4)(sp0);
        }
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000FA5C);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000FC00);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000FC10_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000FE54);
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000E8B8);
#endif

#if FW_VERSION == 100
void func_0000E8B8(s32 arg0, void **arg1, s32 arg2) {
    void *sp0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;

    func_000020A4((s32*) &sp0, 0);
    temp_s2 = arg2 << 0x10;
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32 *, s32), 0xA8)(arg1, (s32*) &sp0, temp_s2 | 1);
    if ((sp0 == NULL) || (temp_v0 = M2C_FIELD(sp0, s32 *, 4) - 1, M2C_FIELD(sp0, s32 *, 4) = temp_v0, (temp_v0 > 0))) {

    } else {
        M2C_FIELD(M2C_FIELD(sp0, void **, 0), M2C_UNK (**)(void *), 4)(sp0);
    }
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32, M2C_UNK, M2C_UNK), 0x7C)(arg1, temp_s2, 0x19, 3);
    _ZNK3paf4View10GetTextureEPKc((s32*) &sp0, arg0, D_00021124);
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32 *, s32), 0xA8)(arg1, (s32*) &sp0, temp_s2);
    if ((sp0 == NULL) || (temp_v0_2 = M2C_FIELD(sp0, s32 *, 4) - 1, M2C_FIELD(sp0, s32 *, 4) = temp_v0_2, (temp_v0_2 > 0))) {

    } else {
        M2C_FIELD(M2C_FIELD(sp0, void **, 0), M2C_UNK (**)(void *), 4)(sp0);
    }
    temp_s0 = temp_s2 | 7;
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32, M2C_UNK, M2C_UNK), 0x7C)(arg1, temp_s0, 0x19, 3);
    _ZNK3paf4View10GetTextureEPKc((s32*) &sp0, arg0, D_00021138);
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32 *, s32), 0xA8)(arg1, (s32*) &sp0, temp_s0);
    if ((sp0 == NULL) || (temp_v0_3 = M2C_FIELD(sp0, s32 *, 4) - 1, M2C_FIELD(sp0, s32 *, 4) = temp_v0_3, (temp_v0_3 > 0))) {

    } else {
        M2C_FIELD(M2C_FIELD(sp0, void **, 0), M2C_UNK (**)(void *), 4)(sp0);
    }
    temp_s0_2 = temp_s2 | 0xE;
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32, M2C_UNK, M2C_UNK), 0x7C)(arg1, temp_s0_2, 0x19, 3);
    _ZNK3paf4View10GetTextureEPKc((s32*) &sp0, arg0, D_0002114C);
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32 *, s32), 0xA8)(arg1, (s32*) &sp0, temp_s0_2);
    if (sp0 != NULL) {
        temp_v0_4 = M2C_FIELD(sp0, s32 *, 4) - 1;
        M2C_FIELD(sp0, s32 *, 4) = temp_v0_4;
        if (temp_v0_4 > 0) {

        } else {
            M2C_FIELD(M2C_FIELD(sp0, void **, 0), M2C_UNK (**)(void *), 4)(sp0);
        }
    }
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000EAD0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_000102EC);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_00022530);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_00022550);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_00022560);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_00022578);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_00022588);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_0002258C);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00010414);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_000225AC);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_000225B4);
#endif

#if FW_VERSION >= 300
void func_00010664(s32 arg0, struct Unk_vt_func_00010664_arg1 **arg1, s32 arg2) {
    void *sp0;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;

    func_000020A4((s32*) &sp0, 0);
    temp_s0 = arg2 << 0x10;
    (*arg1)->unkAC((void **) arg1, (s32*) &sp0, temp_s0 | 1);
    if (sp0 != NULL) {
        temp_v0 = M2C_FIELD(sp0, s32 *, 4) - 1;
        M2C_FIELD(sp0, s32 *, 4) = temp_v0;
        if (temp_v0 > 0) {

        } else {
            M2C_FIELD(M2C_FIELD(sp0, void **, 0), M2C_UNK (**)(void *), 4)(sp0);
        }
    }
    _ZNK3paf4View10GetTextureEPKc((s32*) &sp0, arg0, "tex_broken_data");
    (*arg1)->unkAC((void **) arg1, (s32*) &sp0, temp_s0);
    if (sp0 != NULL) {
        temp_v0_2 = M2C_FIELD(sp0, s32 *, 4) - 1;
        M2C_FIELD(sp0, s32 *, 4) = temp_v0_2;
        if (temp_v0_2 > 0) {

        } else {
            M2C_FIELD(M2C_FIELD(sp0, void **, 0), M2C_UNK (**)(void *), 4)(sp0);
        }
    }
    _ZNK3paf4View10GetTextureEPKc((s32*) &sp0, arg0, "tex_broken_data_f");
    (*arg1)->unkAC((void **) arg1, (s32*) &sp0, temp_s0 | 7);
    if (sp0 != NULL) {
        temp_v0_3 = M2C_FIELD(sp0, s32 *, 4) - 1;
        M2C_FIELD(sp0, s32 *, 4) = temp_v0_3;
        if (temp_v0_3 > 0) {

        } else {
            M2C_FIELD(M2C_FIELD(sp0, void **, 0), M2C_UNK (**)(void *), 4)(sp0);
        }
    }
    _ZNK3paf4View10GetTextureEPKc((s32*) &sp0, arg0, "tex_broken_data_s");
    (*arg1)->unkAC((void **) arg1, (s32*) &sp0, temp_s0 | 0xE);
    if (sp0 != NULL) {
        temp_v0_4 = M2C_FIELD(sp0, s32 *, 4) - 1;
        M2C_FIELD(sp0, s32 *, 4) = temp_v0_4;
        if (temp_v0_4 > 0) {

        } else {
            M2C_FIELD(M2C_FIELD(sp0, void **, 0), M2C_UNK (**)(void *), 4)(sp0);
        }
    }
}
#endif

#if FW_VERSION == 282
void func_00010664(s32 arg0, struct Unk_vt_func_00010664_arg1 **arg1, s32 arg2) {
    struct Unk_func_00010664_sp0 *sp0;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;

    func_000020A4((s32*) &sp0, 0);
    temp_s0 = arg2 << 0x10;
    (*arg1)->unkAC(arg1, (s32*) &sp0, temp_s0 | 1);
    if (sp0 != NULL) {
        temp_v0 = sp0->unk4 - 1;
        sp0->unk4 = temp_v0;
        if (temp_v0 > 0) {

        } else {
            sp0->unk0->unk4(sp0);
        }
    }
    _ZNK3paf4View10GetTextureEPKc((s32*) &sp0, arg0, "tex_broken_data");
    (*arg1)->unkAC(arg1, (s32*) &sp0, temp_s0);
    if (sp0 != NULL) {
        temp_v0_2 = sp0->unk4 - 1;
        sp0->unk4 = temp_v0_2;
        if (temp_v0_2 > 0) {

        } else {
            sp0->unk0->unk4(sp0);
        }
    }
    _ZNK3paf4View10GetTextureEPKc((s32*) &sp0, arg0, "tex_broken_data_f");
    (*arg1)->unkAC(arg1, (s32*) &sp0, temp_s0 | 7);
    if (sp0 != NULL) {
        temp_v0_3 = sp0->unk4 - 1;
        sp0->unk4 = temp_v0_3;
        if (temp_v0_3 > 0) {

        } else {
            sp0->unk0->unk4(sp0);
        }
    }
    _ZNK3paf4View10GetTextureEPKc((s32*) &sp0, arg0, "tex_broken_data_s");
    (*arg1)->unkAC(arg1, (s32*) &sp0, temp_s0 | 0xE);
    if (sp0 != NULL) {
        temp_v0_4 = sp0->unk4 - 1;
        sp0->unk4 = temp_v0_4;
        if (temp_v0_4 > 0) {

        } else {
            sp0->unk0->unk4(sp0);
        }
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00010818);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_000109CC);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00010C10);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00010C74);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000EDCC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_000226A0);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_000226B8);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_00022680);

INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_000226D0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/savedata_plugin_00CE3C", D_000226C0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000FAD4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00011150);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000FA34_v201);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00011180);
#else
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00010D2C);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00010DE8);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00011150);

void func_00011180(struct Unk_func_00011180_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00011190);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_000111F8);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00011274);

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0001130C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000FF78);
#endif

#if FW_VERSION < 282
void func_0000F02C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00011718();
}

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000F04C);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0001135C);
#endif

#if FW_VERSION >= 282
void func_00011428(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00011718();
}

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00011448);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_000114C0);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00011554);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00011F64);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0001166C);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00011718);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00011738);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00011770);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_000117A8);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_000117D0);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_000117F8);

#if FW_VERSION >= 271
void func_00011834(s32 arg0) {
    sce_paf_private_memset(arg0 + 0xA20, 0, 0x10);
    func_0001186C(arg0);
}
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00011834);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 271)
void func_00011834(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0xA34) = 0;
    sce_paf_private_memset(arg0 + 0xA20, 0, 0x10);
    func_0001186C(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0001186C);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00011844);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_000118F4);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0001195C);
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000F480);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 271)
void func_0000F480(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xA34);
    if (temp_v0 != 0) {
        func_0001646C(temp_v0);
        M2C_FIELD(arg0, s32 *, 0xA34) = 0;
    }
}
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000FA3C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000F4BC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_000104BC);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000F54C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00010584);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_000118BC);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0001196C);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_000119D4);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_000119F0);
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_0000F644);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 282)
void func_0000F644(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xA20);
    if (temp_v0 != 0) {
        _ZdaPv(temp_v0);
        M2C_FIELD(arg0, s32 *, 0xA20) = 0;
        M2C_FIELD(arg0, s32 *, 0xA24) = 0;
        M2C_FIELD(arg0, s32 *, 0xA28) = 0;
    }
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00011AA0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00011AA0(struct Unk_func_00011AA0_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unkA20;
    if (temp_v0 != 0) {
        _ZdaPv(temp_v0);
        arg0->unkA20 = 0;
        arg0->unkA24 = 0;
        arg0->unkA28 = 0;
    }
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00011AE4);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00011B3C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00010924);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00011BB4);

INCLUDE_ASM("nonmatchings/savedata_plugin_00CE3C", func_00011C24);

void func_00011C4C(struct Unk_func_00011C4C_0 *arg0, s32 arg1) {
    arg0->unk10 = arg1;
}
#endif
