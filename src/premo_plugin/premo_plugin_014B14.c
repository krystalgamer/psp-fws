#include "common.h"
#include "premo_plugin_decls.h"

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00014B14);
#endif

#if FW_VERSION == 352
void func_00014B14(struct Unk_func_00014B14_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;

    temp_a0 = arg0->unk8;
    if (temp_a0 != 0) {
        scePaf_CCFF20ED(temp_a0);
        arg0->unk8 = 0;
    }
    temp_a0_2 = arg0->unk4;
    if (temp_a0_2 != 0) {
        scePaf_CCFF20ED(temp_a0_2);
        arg0->unk4 = 0;
    }
    temp_a0_3 = arg0->unkC;
    if (temp_a0_3 != 0) {
        scePaf_CCFF20ED(temp_a0_3);
        arg0->unkC = 0;
    }
    temp_a0_4 = arg0->unk10;
    if (temp_a0_4 != 0) {
        scePaf_CCFF20ED(temp_a0_4);
        arg0->unk10 = 0;
    }
    temp_a0_5 = arg0->unk14;
    if (temp_a0_5 != 0) {
        scePaf_CCFF20ED(temp_a0_5);
        arg0->unk14 = 0;
    }
}
#endif

#if FW_VERSION < 350
void func_00014B14(struct Unk_func_00014B14_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;

    temp_v0 = arg0->unk8;
    if (temp_v0 != 0) {
        scePaf_B3D2C3BB(temp_v0);
        arg0->unk8 = 0;
    }
    temp_v0_2 = arg0->unk4;
    if (temp_v0_2 != 0) {
        scePaf_B3D2C3BB(temp_v0_2);
        arg0->unk4 = 0;
    }
    temp_v0_3 = arg0->unkC;
    if (temp_v0_3 != 0) {
        scePaf_B3D2C3BB(temp_v0_3);
        arg0->unkC = 0;
    }
    temp_v0_4 = arg0->unk10;
    if (temp_v0_4 != 0) {
        scePaf_B3D2C3BB(temp_v0_4);
        arg0->unk10 = 0;
    }
}
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00014BC0);
#endif

#if FW_VERSION == 352
void func_00014BC0(struct Unk_func_00014BC0_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;

    temp_a0 = arg0->unk8;
    if (temp_a0 != 0) {
        scePaf_CCFF20ED(temp_a0);
        arg0->unk8 = 0;
    }
    temp_a0_2 = arg0->unk4;
    if (temp_a0_2 != 0) {
        scePaf_CCFF20ED(temp_a0_2);
        arg0->unk4 = 0;
    }
    temp_a0_3 = arg0->unkC;
    if (temp_a0_3 != 0) {
        scePaf_CCFF20ED(temp_a0_3);
        arg0->unkC = 0;
    }
    temp_a0_4 = arg0->unk10;
    if (temp_a0_4 != 0) {
        scePaf_CCFF20ED(temp_a0_4);
        arg0->unk10 = 0;
    }
    temp_a0_5 = arg0->unk14;
    if (temp_a0_5 != 0) {
        scePaf_CCFF20ED(temp_a0_5);
        arg0->unk14 = 0;
    }
}
#endif

#if FW_VERSION < 350
void func_00014BC0(struct Unk_func_00014BC0_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;

    temp_v0 = arg0->unk8;
    if (temp_v0 != 0) {
        scePaf_B3D2C3BB(temp_v0);
        arg0->unk8 = 0;
    }
    temp_v0_2 = arg0->unk4;
    if (temp_v0_2 != 0) {
        scePaf_B3D2C3BB(temp_v0_2);
        arg0->unk4 = 0;
    }
    temp_v0_3 = arg0->unkC;
    if (temp_v0_3 != 0) {
        scePaf_B3D2C3BB(temp_v0_3);
        arg0->unkC = 0;
    }
    temp_v0_4 = arg0->unk10;
    if (temp_v0_4 != 0) {
        scePaf_B3D2C3BB(temp_v0_4);
        arg0->unk10 = 0;
    }
}
#endif

INCLUDE_RODATA("nonmatchings/premo_plugin_014B14", D_0002AAE0);

INCLUDE_RODATA("nonmatchings/premo_plugin_014B14", D_0002AAF0);

INCLUDE_RODATA("nonmatchings/premo_plugin_014B14", D_0002AAF8);

INCLUDE_RODATA("nonmatchings/premo_plugin_014B14", D_0002AB04);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00014C6C);

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00014D6C);
#endif

#if FW_VERSION == 352
s32 func_00014D6C(struct Unk_func_00014D6C_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_s1;

    temp_a0 = arg0->unk0;
    if (temp_a0 != 0) {
        func_000156C8(temp_a0);
        temp_s1 = arg0->unk0;
        if (temp_s1 == 0) {
            arg0->unk0 = 0;
        } else {
            func_00015400(temp_s1);
            scePaf_6261C0A5(temp_s1);
            arg0->unk0 = 0;
        }
    }
    temp_a0_2 = arg0->unk8;
    if (temp_a0_2 != 0) {
        scePaf_CCFF20ED(temp_a0_2);
        arg0->unk8 = 0;
    }
    temp_a0_3 = arg0->unk4;
    if (temp_a0_3 != 0) {
        scePaf_CCFF20ED(temp_a0_3);
        arg0->unk4 = 0;
    }
    temp_a0_4 = arg0->unkC;
    if (temp_a0_4 != 0) {
        scePaf_CCFF20ED(temp_a0_4);
        arg0->unkC = 0;
    }
    temp_a0_5 = arg0->unk10;
    if (temp_a0_5 != 0) {
        scePaf_CCFF20ED(temp_a0_5);
        arg0->unk10 = 0;
    }
    return 0;
}
#endif

#if FW_VERSION < 350
s32 func_00014D6C(struct Unk_func_00014D6C_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_s1;

    temp_a0 = arg0->unk0;
    if (temp_a0 != 0) {
        func_000156C8(temp_a0);
        temp_s1 = arg0->unk0;
        if (temp_s1 == 0) {
            arg0->unk0 = 0;
        } else {
            func_00015400(temp_s1);
            scePaf_4E67BB08(temp_s1);
            arg0->unk0 = 0;
        }
    }
    temp_a0_2 = arg0->unk8;
    if (temp_a0_2 != 0) {
        scePaf_B3D2C3BB(temp_a0_2);
        arg0->unk8 = 0;
    }
    temp_a0_3 = arg0->unk4;
    if (temp_a0_3 != 0) {
        scePaf_B3D2C3BB(temp_a0_3);
        arg0->unk4 = 0;
    }
    temp_a0_4 = arg0->unkC;
    if (temp_a0_4 != 0) {
        scePaf_B3D2C3BB(temp_a0_4);
        arg0->unkC = 0;
    }
    temp_a0_5 = arg0->unk10;
    if (temp_a0_5 != 0) {
        scePaf_B3D2C3BB(temp_a0_5);
        arg0->unk10 = 0;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_0000D910);
#else
INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00014E48);
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00014FC8);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00015004);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00015124);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00015160);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_000151A4);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_000151E0);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_0001521C);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00015250);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_0001528C);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00015354);

void func_000153E4(s32 arg0) {
    func_0001AEDC(arg0 + 8);
}

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00015400);

INCLUDE_RODATA("nonmatchings/premo_plugin_014B14", D_0002AB70);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_0001541C);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_000156C8);

s32 func_00015870(s32 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80108C62;
    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        var_v1 = func_00025AC4(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_000158AC);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00015B80);

void func_00015C70(struct Unk_func_00015C70_0 *arg0) {
    func_00024F1C(arg0->unk38);
}

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00015C8C);

INCLUDE_RODATA("nonmatchings/premo_plugin_014B14", D_0002AB94);

INCLUDE_RODATA("nonmatchings/premo_plugin_014B14", D_0002ABA4);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00015DB4);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00016238);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00016390);

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_000163CC);
#endif

#if FW_VERSION == 352
s32 func_000163CC(struct Unk_func_000163CC_0 *arg0, s32 arg1) {
    struct Unk_func_000163CC_temp_v0 *temp_v0;

    temp_v0 = arg0->unk0;
    arg0->unk44 = arg1;
    if (temp_v0 != NULL) {
        temp_v0->unk58 = arg1;
    }
    return 0;
}
#endif

#if FW_VERSION < 350
s32 func_000163CC(struct Unk_func_000163CC_0 *arg0, s32 arg1) {
    struct Unk_func_000163CC_temp_v0 *temp_v0;

    temp_v0 = arg0->unk0;
    arg0->unk44 = arg1;
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x54) = arg1;
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_000163E4);

s32 func_00016720(struct Unk_func_00016720_0 *arg0, M2C_UNK arg1) {
    struct Unk_vt_func_00016720_temp_a0 **temp_a0;
    struct Unk_vt_func_00016720_temp_a0_2 **temp_a0_2;
    struct Unk_vt_func_00016720_temp_a0_3 **temp_a0_3;
    struct Unk_vt_func_00016720_temp_a0_4 **temp_a0_4;
    struct Unk_vt_func_00016720_temp_a0_5 **temp_a0_5;

    temp_a0 = arg0->unk30;
    (*temp_a0)->unk14(temp_a0);
    temp_a0_2 = arg0->unk28;
    (*temp_a0_2)->unk14(temp_a0_2);
    func_00026218(arg0->unk0);
    func_0001B164(arg1, arg0->unk28, arg0->unk30);
    func_0001B164(arg1, arg0->unk20, arg0->unk28);
    func_0001B004(arg1, arg0->unk28);
    func_0001B004(arg1, arg0->unk30);
    func_0001B004(arg1, arg0->unk20);
    temp_a0_3 = arg0->unk30;
    (*temp_a0_3)->unkC(temp_a0_3);
    temp_a0_4 = arg0->unk28;
    (*temp_a0_4)->unkC(temp_a0_4);
    temp_a0_5 = arg0->unk20;
    (*temp_a0_5)->unkC(temp_a0_5);
    return 0;
}

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_000167FC);

s32 func_00016ADC(struct Unk_func_00016ADC_0 *arg0, s32 arg1) {
    struct Unk_vt_func_00016ADC_temp_a0 **temp_a0;
    struct Unk_vt_func_00016ADC_temp_a0_2 **temp_a0_2;
    struct Unk_vt_func_00016ADC_temp_a0_3 **temp_a0_3;
    struct Unk_vt_func_00016ADC_temp_a0_4 **temp_a0_4;
    struct Unk_vt_func_00016ADC_temp_a0_5 **temp_a0_5;

    func_00026264(arg0->unk0);
    temp_a0 = arg0->unk2C;
    (*temp_a0)->unk14(temp_a0);
    temp_a0_2 = arg0->unk34;
    (*temp_a0_2)->unk14(temp_a0_2);
    func_0001B164(arg1, arg0->unk2C, arg0->unk34);
    func_0001B164(arg1, arg0->unk24, arg0->unk2C);
    func_0001B004(arg1, arg0->unk2C);
    func_0001B004(arg1, arg0->unk34);
    func_0001B004(arg1, arg0->unk24);
    temp_a0_3 = arg0->unk34;
    (*temp_a0_3)->unkC(temp_a0_3);
    temp_a0_4 = arg0->unk2C;
    (*temp_a0_4)->unkC(temp_a0_4);
    temp_a0_5 = arg0->unk24;
    (*temp_a0_5)->unkC(temp_a0_5);
    return 0;
}

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00010484);
#endif

#if FW_VERSION == 352
s32 func_00016BBC(struct Unk_func_00016BBC_0 *arg0) {
    s32 var_a2;

    var_a2 = 0;
    if (arg0->unk20->unkB4 != 1) {
        var_a2 = arg0->unk24->unkB4 != 1;
    }
    return var_a2;
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00016BEC);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00016D1C);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00016E4C);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00016EE0);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00016F74);

INCLUDE_RODATA("nonmatchings/premo_plugin_014B14", D_0002AC88);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00017010);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_000172A4);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00017360);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_0001742C);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_0001757C);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00017660);

s32 func_000176F4(struct Unk_func_000176F4_0 *arg0) {
    void *sp0;
    sceKernelCancelEventFlag(arg0->unk30, 0x38U, &sp0);
    return 0;
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_0001771C);
#else
s32 func_0001771C(void *arg0, s32 arg1, s32 arg2) {
    s32 var_s0;
    void **temp_v0;
    void **temp_v1;

    var_s0 = 0;
    if (arg1 != 1) {
        var_s0 = 0x80070057;
    } else {
        temp_v1 = M2C_FIELD(arg0, void ***, 0x50);
        if (temp_v1 != NULL) {
            temp_v0 = M2C_FIELD(*temp_v1, void **(**)(void **), 0x1C)(temp_v1);
            if (temp_v0 != NULL) {
                var_s0 = M2C_FIELD(*temp_v0, s32 (**)(void **, M2C_UNK, s32), 0x38)(temp_v0, 1, arg2);
            }
        }
    }
    return var_s0;
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_000177BC);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00017878);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_000178A4);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_000178C8);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00017B38);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_000106BC);
#else
INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00017E74);
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00017F2C);
#endif

#if FW_VERSION == 352
s32 func_00017F2C(struct Unk_func_00017F2C_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = arg0->unkA4;
    if (temp_v0 != 0) {
        scePaf_CCFF20ED(temp_v0);
        arg0->unkA4 = 0;
    }
    temp_v0_2 = arg0->unk9C;
    if (temp_v0_2 != 0) {
        scePaf_CCFF20ED(temp_v0_2);
        arg0->unk9C = 0;
    }
    return 0;
}
#endif

#if FW_VERSION < 350
s32 func_00017F2C(struct Unk_func_00017F2C_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = arg0->unk9C;
    if (temp_v0 != 0) {
        scePaf_B3D2C3BB(temp_v0);
        arg0->unk9C = 0;
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x94);
    if (temp_v0_2 != 0) {
        scePaf_B3D2C3BB(temp_v0_2);
        M2C_FIELD(arg0, s32 *, 0x94) = 0;
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00017F88);

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00018058);
#endif

#if FW_VERSION < 350
s32 func_00018058(struct Unk_func_00018058_0 *arg0) {
    s32 temp_a1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x74);
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) + temp_a1);
    return temp_a1;
}
#endif

#if FW_VERSION == 352
s32 func_00018058(struct Unk_func_00018058_0 *arg0) {
    s32 temp_a1;

    temp_a1 = arg0->unk7C;
    arg0->unk7C = 0;
    arg0->unk6C = (s32) (arg0->unk6C + temp_a1);
    return temp_a1;
}
#endif

void func_00018074(struct Unk_func_00018074_0 *arg0) {
    func_00017F88(arg0->unk4);
}

void func_00018090(struct Unk_func_00018090_0 *arg0) {
    func_00018058(arg0->unk4);
}

void func_000180AC(s32 arg0) {
    func_00016EE0(arg0 - 0x38);
}

void func_000180C8(s32 arg0) {
    func_00016F74(arg0 - 0x38);
}

void func_000180E4(s32 arg0) {
    func_000178C8(arg0 - 0x38);
}

void func_00018100(M2C_UNK **arg0) {
    *arg0 = &D_0002AE78;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00018110);
#else
void func_00018110(M2C_UNK **arg0) {
    *arg0 = &D_0002AE78;
    scePaf_6261C0A5((s32) arg0);
}
#endif

void func_00018138(M2C_UNK **arg0) {
    *arg0 = &D_0002AE28;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00018148);
#else
void func_00018148(M2C_UNK **arg0) {
    *arg0 = &D_0002AE28;
    scePaf_6261C0A5((s32) arg0);
}
#endif

void func_00018170(struct Unk_func_00018170_0 *arg0) {
    func_0001B1BC(arg0->unk4);
}

s32 func_0001818C(void) {
    return 0;
}

s32 func_00018194(struct Unk_func_00018194_0 *arg0, s32 arg1) {
    arg0->unk4 = arg1;
    return 0;
}

s32 func_000181A0(struct Unk_func_000181A0_0 *arg0) {
    return arg0->unk28;
}

s32 func_000181A8(s32 arg0) {
    return arg0 + 8;
}

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_000181B0);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00018224);

s32 func_000182A0(struct Unk_func_000182A0_0 *arg0) {
    return arg0->unk4;
}

s32 func_000182A8(struct Unk_func_000182A8_0 *arg0) {
    return arg0->unk8;
}

s32 func_000182B0(struct Unk_func_000182B0_0 *arg0) {
    return arg0->unk1C;
}

s32 func_000182B8(struct Unk_func_000182B8_0 *arg0) {
    return arg0->unkC;
}

s32 func_000182C0(struct Unk_func_000182C0_0 *arg0) {
    return arg0->unk10;
}

s32 func_000182C8(struct Unk_func_000182C8_0 *arg0) {
    return arg0->unk14;
}

s32 func_000182D0(struct Unk_func_000182D0_0 *arg0) {
    return arg0->unk18;
}

s32 func_000182D8(struct Unk_func_000182D8_0 *arg0, s32 arg1) {
    arg0->unk4 = arg1;
    return 0;
}

s32 func_000182E4(struct Unk_func_000182E4_0 *arg0, s32 arg1) {
    arg0->unk8 = arg1;
    return 0;
}

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_000182F0);
#endif

#if FW_VERSION == 352
s32 func_000182F0(struct Unk_func_000182F0_0 *arg0, s32 *arg1) {
    scePaf_3308156F(arg0->unk1C, (s32) arg1, *arg1);
    return 0;
}
#endif

#if FW_VERSION < 350
s32 func_000182F0(struct Unk_func_000182F0_0 *arg0, s32 *arg1) {
    scePaf_F95EA3F1(arg0->unk1C, (u8 *) arg1, *arg1);
    return 0;
}
#endif

s32 func_00018314(struct Unk_func_00018314_0 *arg0, s32 arg1) {
    arg0->unkC = arg1;
    return 0;
}

s32 func_00018320(struct Unk_func_00018320_0 *arg0, s32 arg1) {
    arg0->unk10 = arg1;
    return 0;
}

s32 func_0001832C(struct Unk_func_0001832C_0 *arg0, s32 arg1) {
    arg0->unk14 = arg1;
    return 0;
}

s32 func_00018338(struct Unk_func_00018338_0 *arg0, s32 arg1) {
    arg0->unk18 = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00018344);

s32 func_0001840C(struct Unk_func_0001840C_0 *arg0) {
    return arg0->unk20;
}

s32 func_00018414(struct Unk_func_00018414_0 *arg0) {
    return arg0->unk4;
}

s32 func_0001841C(struct Unk_func_0001841C_0 *arg0) {
    return arg0->unk8;
}

s32 func_00018424(struct Unk_func_00018424_0 *arg0, s32 arg1) {
    arg0->unk8 = arg1;
    return 0;
}

s32 func_00018430(struct Unk_func_00018430_0 *arg0) {
    return arg0->unkC;
}

s32 func_00018438(struct Unk_func_00018438_0 *arg0) {
    return arg0->unk10;
}

s32 func_00018440(struct Unk_func_00018440_0 *arg0, s32 arg1) {
    arg0->unk10 = arg1;
    return 0;
}

void func_0001844C(M2C_UNK **arg0) {
    *arg0 = &D_0002AED8;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_0001845C);
#else
void func_0001845C(M2C_UNK **arg0) {
    *arg0 = &D_0002AED8;
    scePaf_6261C0A5((s32) arg0);
}
#endif

s32 func_00018484(void) {
    return 0x80004001;
}

s32 func_00018490(void) {
    return 0x80004001;
}

void func_0001849C(M2C_UNK **arg0) {
    *arg0 = &D_0002AEF8;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_000184AC);
#else
void func_000184AC(M2C_UNK **arg0) {
    *arg0 = &D_0002AEF8;
    scePaf_6261C0A5((s32) arg0);
}
#endif

s32 func_000184D4(struct Unk_func_000184D4_0 *arg0) {
    return arg0->unk10;
}

s32 func_000184DC(struct Unk_func_000184DC_0 *arg0) {
    return arg0->unk14;
}

s32 func_000184E4(struct Unk_func_000184E4_0 *arg0) {
    return arg0->unk8;
}

s32 func_000184EC(struct Unk_func_000184EC_0 *arg0) {
    return arg0->unkC;
}

s32 func_000184F4(struct Unk_func_000184F4_0 *arg0, s32 arg1) {
    arg0->unkC = arg1;
    return 0;
}

s32 func_00018500(void) {
    return 0;
}

s32 func_00018508(struct Unk_func_00018508_0 *arg0) {
    return arg0->unk4;
}

s32 func_00018510(struct Unk_func_00018510_0 *arg0, s32 arg1) {
    arg0->unk4 = arg1;
    return 0;
}

s32 func_0001851C(void) {
    return 0;
}

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00018524);
#endif

#if FW_VERSION == 352
s32 func_00018524(struct Unk_func_00018524_0 *arg0) {
    return arg0->unk74;
}
#endif

#if FW_VERSION < 350
s32 func_00018524(struct Unk_func_00018524_0 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x6C);
}
#endif

void func_0001852C(M2C_UNK **arg0) {
    *arg0 = &D_0002AEF8;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_0001853C);
#else
void func_0001853C(M2C_UNK **arg0) {
    *arg0 = &D_0002AEF8;
    scePaf_6261C0A5((s32) arg0);
}
#endif

void func_00018564(M2C_UNK **arg0) {
    *arg0 = &D_0002AED8;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00018574);
#else
void func_00018574(M2C_UNK **arg0) {
    *arg0 = &D_0002AED8;
    scePaf_6261C0A5((s32) arg0);
}
#endif

void func_0001859C(M2C_UNK **arg0) {
    *arg0 = &D_0002AE90;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_000185AC);
#else
void func_000185AC(M2C_UNK **arg0) {
    *arg0 = &D_0002AE90;
    scePaf_6261C0A5((s32) arg0);
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_000185D4);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00018640);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_000186AC);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_000186EC);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_0001872C);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00018774);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00018930);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00018A40);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00018AAC);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00018C08);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00018C74);

s32 func_00018DBC(struct Unk_func_00018DBC_0 *arg0) {
    return arg0->unk50;
}

s32 func_00018DC4(struct Unk_func_00018DC4_0 *arg0) {
    return arg0->unk4C;
}

s32 func_00018DCC(struct Unk_func_00018DCC_0 *arg0) {
    return arg0->unk38 - arg0->unk50;
}

s32 func_00018DDC(struct Unk_func_00018DDC_0 *arg0) {
    return arg0->unk40 - arg0->unk4C;
}

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00018DEC);

s32 func_00018E78(struct Unk_func_00018E78_0 *arg0, u32 arg1) {
    s32 var_v1;

    arg0->unk2C = 0;
    if ((arg0->unk0->unk20() < arg1) || (var_v1 = 0, (arg0->unk70 == 0))) {
        var_v1 = func_00021CF0((u8 *)arg0 + 4, arg1);
    }
    return var_v1;
}

void func_00018EE0(s32 arg0) {
    func_00021E28(arg0 + 4);
}

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00018EFC);

INCLUDE_ASM("nonmatchings/premo_plugin_014B14", func_00018F50);

s32 func_00018F94(s32 arg0, s32 arg1, s32 *arg2) {
    s32 var_v1;

    var_v1 = 0x80070057;
    if (arg1 == 1) {
        *arg2 = arg0 + 0x74;
        var_v1 = 0;
    }
    return var_v1;
}
