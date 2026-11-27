#include "common.h"
#include "msvideo_plugin_decls.h"

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005B564);

void func_0005BAA4(struct Unk_func_0005BAA4_0 *arg0) {
    arg0->unk0 = &D_00065A58;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

void func_0005BABC(struct Unk_func_0005BABC_0 *arg0) {
    s32 **temp_s0;
    s32 **var_v0;

    arg0->unk0 = &D_00065A58;
    if (arg0->unk4 != 0) {
        var_v0 = arg0->unk8;
        if (var_v0 != NULL) {
            do {
                temp_s0 = M2C_FIELD(var_v0, s32 ***, 8);
                if (var_v0 != NULL) {
                    _ZdlPv(var_v0);
                }
                var_v0 = temp_s0;
            } while (temp_s0 != NULL);
        }
    }
}

void func_0005BB14(struct Unk_func_0005BB14_0 *arg0) {
    s32 **temp_s0;
    s32 **var_v0;

    arg0->unk0 = &D_00065A58;
    if (arg0->unk4 != 0) {
        var_v0 = arg0->unk8;
        if (var_v0 != NULL) {
            do {
                temp_s0 = M2C_FIELD(var_v0, s32 ***, 8);
                if (var_v0 != NULL) {
                    _ZdlPv(var_v0);
                }
                var_v0 = temp_s0;
            } while (temp_s0 != NULL);
        }
    }
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005BB6C);
#else
void func_0005BB6C(s32 **arg0) {
    s32 **temp_s0;
    s32 **var_v0;

    M2C_FIELD(arg0, s32 **, 0) = &D_00065A58;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        var_v0 = M2C_FIELD(arg0, s32 ***, 8);
        if (var_v0 != NULL) {
            do {
                temp_s0 = M2C_FIELD(var_v0, s32 ***, 8);
                if (var_v0 != NULL) {
                    _ZdlPv(var_v0);
                }
                var_v0 = temp_s0;
            } while (temp_s0 != NULL);
        }
    }
    _ZdlPv(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005BBD8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005BC68);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_05B564", D_00065948);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_05B564", D_00049300);
#else
INCLUDE_RODATA("nonmatchings/msvideo_plugin_05B564", D_00065968);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005BCB0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_05B564", D_000659B8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005BDC8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_00041DFC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_00041E3C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_00041E7C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_00041EBC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_00041EE4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_00041F0C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_00041F48);

s32 func_00041FA8(void *arg0, s32 arg1) {
    return func_00025324(M2C_FIELD(arg0, s32 *, 4), ~arg1) == 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_00041FCC);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_05B564", D_00065A58);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/msvideo_plugin_05B564", D_000493E0);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005BFD4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005BFF8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005C07C);

#if FW_VERSION < 201
s32 func_00042164(void) {
    return -9;
}

void func_0004216C(void) {

}

void func_00042174(void) {

}

s32 func_0004217C(void) {
    return -9;
}

s32 func_00042184(void) {
    return -9;
}

void func_0004218C(void) {

}
#else
s32 func_0005C148(void) {
    return -9;
}

void func_0005C150(void) {
}

void func_0005C158(void) {
}

s32 func_0005C160(void) {
    return -9;
}

s32 func_0005C168(void) {
    return -9;
}

void func_0005C170(void) {
}
#endif

s32 func_0005C178(struct Unk_func_0005C178_0 *arg0) {
    func_0005C1B0(arg0->unk4, arg0->unk0);
    func_00041C08(arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005C1B0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005C228);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005C4FC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005C67C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005C6FC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005CA10);

s32 func_0005CAA0(struct Unk_func_0005CAA0_0 *arg0, s32 arg1) {
    arg0->unk0 = arg1;
    arg0->unk4 = 0;
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005CAB0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005CB34);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005CC0C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005CCA4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005CD48);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005CF38);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005CFDC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005D064);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005D0EC);

#if FW_VERSION < 201
s32 func_00043180(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x5001;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 8);
    }
    return var_v1;
}
#else
s32 func_0005D148(struct Unk_func_0005D148_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x5001;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = arg0->unk8;
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005D164);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005D3DC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005D490);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005D500);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005D5C4);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005D68C);

void func_00043734(s32 arg0) {
    func_00043750(arg0 + 8);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_00043750);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005D648);
#endif

#if FW_VERSION < 201
void func_0005D648(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 != 0) {
        func_0005D78C(temp_v0);
    }
    func_00041C08(arg0);
}
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005D68C);

void func_0005D6FC(s32 arg0) {
    func_0005D718(arg0 + 8);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005D718);

void func_0005D748(struct Unk_func_0005D748_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk8;
    if (temp_v0 != 0) {
        func_0005D78C(temp_v0);
    }
    func_00041C08(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005D78C);

#if FW_VERSION < 201
void func_00043808(s32 arg0) {
    func_0005D7EC(arg0 + 0x94);
}
#else
void func_0005D7D0(s32 arg0) {
    func_0005D7EC(arg0 + 0x94);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005D7EC);

#if FW_VERSION < 201
void func_00043888(s32 arg0) {
    func_000438A4(arg0 + 8);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_000438A4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_00043948);

void func_00043978(s32 arg0) {
    func_00049388();
    func_00043BC4(arg0 + 8);
    func_0005D9EC(arg0 + 0x24);
    func_0005DA1C(arg0 + 0x48);
    func_0005DA4C(arg0 + 0x6C);
    func_0005DA7C(arg0 + 0x90);
    func_0005DAAC(arg0 + 0xB4);
    func_0005D9BC(arg0 + 0xD8);
}
#else
void func_0005D86C(s32 arg0) {
    func_0005D888(arg0 + 8);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005D888);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005D8C0);

void func_0005D904(s32 arg0) {
    func_00049388();
    func_0005DB50(arg0 + 0x14);
    func_0005D9EC(arg0 + 0x2C);
    func_0005DA1C(arg0 + 0x50);
    func_0005DA4C(arg0 + 0x74);
    func_0005DA7C(arg0 + 0x98);
    func_0005DAAC(arg0 + 0xBC);
    func_0005D9BC(arg0 + 0xE0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005D964);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005D9BC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005D9EC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005DA1C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005DA4C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005DA7C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005DAAC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005DADC);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_00043BC4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_00043C68);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005DB50);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005DB88);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005DC4C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005DC90);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005DCD4);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005DE98);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005DF48);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005DFFC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005E090);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005E0E4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005E134);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005E184);
#else
s32 func_0005E0E4(struct Unk_func_0005E0E4_0 *arg0, M2C_UNK arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (func_0005CD48((u8 *)arg0 + 0x14, 3, arg1, 0x2710) == 0) {
        var_v1 = 0;
        arg0->unk10 = (s32) (arg0->unk10 + 1);
    }
    return var_v1;
}

s32 func_0005E134(struct Unk_func_0005E134_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (func_0005CD48((u8 *)arg0 + 0x14, 2, arg1, 0x2710) == 0) {
        var_v1 = 0;
        arg0->unk10 = (s32) (arg0->unk10 + 1);
    }
    return var_v1;
}

s32 func_0005E184(struct Unk_func_0005E184_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (func_0005CD48((u8 *)arg0 + 0x14, 2, arg1, 0x2710) == 0) {
        var_v1 = 0;
        arg0->unk10 = (s32) (arg0->unk10 + 1);
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005E1D4);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005E228);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_00044204);
#else
s32 func_0005E228(struct Unk_func_0005E228_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (func_0005CD48((u8 *)arg0 + 0x10, 3, arg1, 0x2710) == 0) {
        var_v1 = 0;
        arg0->unkC = (s32) (arg0->unkC + 1);
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005E278);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005E398);

#if FW_VERSION < 201
void func_00044448(void *arg0) {
    s32 temp_v1;
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(arg0, s32 *, 0) = 8;
    if (temp_a1 != NULL) {
        temp_v1 = (M2C_FIELD(temp_a1, u16 *, 8) * 4) + 8;
        M2C_FIELD(temp_a1, s32 *, 0) = temp_v1;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + temp_v1);
    }
}

void func_0004447C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 8;
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        func_000444CC(arg0 + 8);
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + M2C_FIELD(arg0, s32 *, 8));
    }
}

void func_000444CC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0xC) * 0xC) + 0x10);
}
#else
void func_0005E480(struct Unk_func_0005E480_0 *arg0) {
    s32 temp_v1;
    struct Unk_func_0005E480_temp_a1 *temp_a1;

    temp_a1 = arg0->unk8;
    arg0->unk0 = 8;
    if (temp_a1 != NULL) {
        temp_v1 = (temp_a1->unk8 * 4) + 8;
        temp_a1->unk0 = temp_v1;
        arg0->unk0 = (s32) (arg0->unk0 + temp_v1);
    }
}

void func_0005E4B4(struct Unk_func_0005E4B4_0 *arg0) {
    arg0->unk0 = 8;
    if (arg0->unk8 != 0) {
        func_0005E504(&arg0->unk8);
        arg0->unk0 = (s32) (arg0->unk0 + arg0->unk8);
    }
}

void func_0005E504(struct Unk_func_0005E504_0 *arg0) {
    arg0->unk0 = (s32) ((arg0->unkC * 0xC) + 0x10);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005E520);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005E5BC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005E698);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_000446AC);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005E6E4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005E854);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005E964);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005E9DC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005EA1C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005EA5C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005EAAC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005EB40);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005EBB0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005EC60);

#if FW_VERSION == 201
s32 func_0005ECC4(struct Unk_func_0005ECC4_0 *arg0) {
    return arg0->unk10C->unk298->unk8C->unkFC->unk4->unk28;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005ECE0);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005ED38);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005EDBC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005F104);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005F16C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005F1E0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005F558);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005F77C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005F804);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005F88C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005F968);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005FA3C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005FCDC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_05B564", func_0005FDF8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_05B564", D_00065A68);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_05B564", D_00065A6C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_05B564", D_00065A70);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_05B564", D_00065A74);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_05B564", D_00065A78);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_05B564", D_00065A7C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_05B564", D_00065A80);
#endif
