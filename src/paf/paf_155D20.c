#include "common.h"
#include "paf_decls.h"

INCLUDE_ASM("nonmatchings/paf_155D20", func_00155D20);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00155DFC);

void func_00155F34(s32 arg0) {
    D_001D7798 = arg0;
    D_001D77A0 = -1;
    D_001D779C = 0;
}

INCLUDE_ASM("nonmatchings/paf_155D20", func_00155F54);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00155FD0);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00156060);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015615C);

INCLUDE_ASM("nonmatchings/paf_155D20", func_001562A4);

INCLUDE_ASM("nonmatchings/paf_155D20", func_001563B8);

void func_001564A0(struct Unk_func_001564A0_0 *arg0) {
    s32 temp_v0;

    if ((arg0 == NULL) || (temp_v0 = arg0->unk14 - 1, arg0->unk14 = temp_v0, (temp_v0 != 0))) {

    } else {
        func_00156A00();
        func_0015A118(arg0);
        func_00151E1C(arg0);
    }
}

INCLUDE_ASM("nonmatchings/paf_155D20", func_001564F4);

INCLUDE_ASM("nonmatchings/paf_155D20", func_001566A4);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00156A00);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00156A74);

s32 func_00156A94(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 var_a5;

    var_a5 = 0;
    if ((arg0 != NULL) && (arg2 < M2C_FIELD(arg0, s32 *, 0x3C))) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 8);
        var_a5 = func_00157718(M2C_FIELD(((arg2 * 4) + arg0), s32 *, 0x1C), (temp_v0 != 0) ? temp_v0 : arg1, (s32) arg0, arg3);
    }
    return var_a5;
}

INCLUDE_ASM("nonmatchings/paf_155D20", func_00156AE4);

s32 func_00156D54(struct Unk_func_00156D54_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk8;
    }
    return var_v0;
}

s32 func_00156D68(struct Unk_func_00156D68_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk3C;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/paf_155D20", func_00156D7C);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00156DA8);

INCLUDE_ASM("nonmatchings/paf_155D20", func_001570C0);

INCLUDE_ASM("nonmatchings/paf_155D20", func_001572EC);

void func_001573F8(struct Unk_func_001573F8_0 *arg0) {
    s32 temp_v0;

    if ((arg0 == NULL) || (temp_v0 = arg0->unk4 - 1, arg0->unk4 = temp_v0, (temp_v0 != 0))) {

    } else {
        func_001576E8();
        func_00151E1C(arg0);
    }
}

INCLUDE_ASM("nonmatchings/paf_155D20", func_00157444);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00157550);

INCLUDE_ASM("nonmatchings/paf_155D20", func_001576E8);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00157718);

void func_001578AC(struct Unk_func_001578AC_0 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        arg0->unkC = arg1;
        func_00157950();
    }
}

s32 func_001578CC(struct Unk_func_001578CC_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unkC;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/paf_155D20", func_001578E0);

s32 func_0015792C(struct Unk_func_0015792C_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = !(arg0->unk8 & 1) ? 0 : ((u8 *)arg0 + 0x2C);
    }
    return var_v0;
}

INCLUDE_RODATA("nonmatchings/paf_155D20", D_001A1FC8);

INCLUDE_RODATA("nonmatchings/paf_155D20", D_001A1FCC);

INCLUDE_RODATA("nonmatchings/paf_155D20", D_001A1FD0);

INCLUDE_RODATA("nonmatchings/paf_155D20", D_001A1FD4);

INCLUDE_RODATA("nonmatchings/paf_155D20", D_001A1FD8);

INCLUDE_RODATA("nonmatchings/paf_155D20", D_001A1FDC);

INCLUDE_RODATA("nonmatchings/paf_155D20", D_001A1FE0);

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/paf_155D20", D_001A1C00);

INCLUDE_RODATA("nonmatchings/paf_155D20", D_001A1C1C_v280);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/paf_155D20", D_001A0A70);

INCLUDE_RODATA("nonmatchings/paf_155D20", D_001A0A8C);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/paf_155D20", D_0019FAA0);

INCLUDE_RODATA("nonmatchings/paf_155D20", D_0019FABC);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/paf_155D20", D_0019BF20);

INCLUDE_RODATA("nonmatchings/paf_155D20", D_0019BF3C);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/paf_155D20", D_0019A3E0);

INCLUDE_RODATA("nonmatchings/paf_155D20", D_0019A3FC);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/paf_155D20", D_00196320);

INCLUDE_RODATA("nonmatchings/paf_155D20", D_0019633C);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_155D20", D_001959E0);

INCLUDE_RODATA("nonmatchings/paf_155D20", D_001959FC);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/paf_155D20", D_001248F0);

INCLUDE_RODATA("nonmatchings/paf_155D20", D_0012490C);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/paf_155D20", D_001220F0);

INCLUDE_RODATA("nonmatchings/paf_155D20", D_0012210C);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/paf_155D20", D_00123F70);

INCLUDE_RODATA("nonmatchings/paf_155D20", D_00123F8C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_155D20", D_00136620);

INCLUDE_RODATA("nonmatchings/paf_155D20", D_0013663C);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_155D20", D_001A1FF0);

INCLUDE_RODATA("nonmatchings/paf_155D20", D_001A200C);
#endif

INCLUDE_RODATA("nonmatchings/paf_155D20", D_001A2030);

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/paf_155D20", D_001A1C50);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/paf_155D20", D_001A0AC0);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/paf_155D20", D_0019FAF0);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/paf_155D20", D_0019BF70);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/paf_155D20", D_0019A430);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/paf_155D20", D_00196370);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_155D20", D_00195A30);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/paf_155D20", D_00124940);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/paf_155D20", D_00122140);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/paf_155D20", D_00123FC0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_155D20", D_00136670);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_155D20", D_001A2040);
#endif

INCLUDE_RODATA("nonmatchings/paf_155D20", D_001A209C);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00157950);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00157A38);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00157B30);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00157C44);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00157D40);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00157DE4);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00157F90);

void func_00158018(struct Unk_func_00158018_0 *arg0) {
    s32 temp_v0;

    if ((arg0 == NULL) || (temp_v0 = arg0->unk14 - 1, arg0->unk14 = temp_v0, (temp_v0 != 0))) {

    } else {
        func_001582AC();
        func_0015A118(arg0);
        func_00151E1C(arg0);
    }
}

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015806C);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00158158);

INCLUDE_ASM("nonmatchings/paf_155D20", func_001582AC);

void func_001582DC(struct Unk_func_001582DC_0 *arg0) {
    if (arg0 != NULL) {
        func_0015B9B0(arg0->unk10);
    }
}

void func_001582FC(struct Unk_func_001582FC_0 *arg0) {
    s32 temp_s0;

    if (arg0 != NULL) {
        temp_s0 = arg0->unk10;
        func_0015BEC4(temp_s0);
        func_00159C00(func_0015ACAC(temp_s0));
    }
}

INCLUDE_ASM("nonmatchings/paf_155D20", func_00158338);

s32 func_00158358(struct Unk_func_00158358_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk8;
    }
    return var_v0;
}

void func_0015836C(struct Unk_func_0015836C_0 *arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = arg0->unk10;
        if (arg1 != temp_v0) {
            func_0015A5E4(temp_v0);
            arg0->unk10 = func_0015A630(arg1, arg2);
        }
    }
}

s32 func_001583CC(struct Unk_func_001583CC_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk10;
    }
    return var_v0;
}

s32 func_001583E0(struct Unk_func_001583E0_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = func_0015B334(arg0->unk10);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/paf_155D20", func_00158404);

void func_001584C8(struct Unk_func_001584C8_0 *arg0) {
    s32 temp_v0;

    if ((arg0 == NULL) || (temp_v0 = arg0->unk14 - 1, arg0->unk14 = temp_v0, (temp_v0 != 0))) {

    } else {
        func_001587E4();
        func_0015A118(arg0);
        func_00151E1C(arg0);
    }
}

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015851C);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015862C);

INCLUDE_ASM("nonmatchings/paf_155D20", func_001587E4);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00158854);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00158A60);

s32 func_00158A80(struct Unk_func_00158A80_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk8;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/paf_155D20", func_00158A94);

s32 func_00158AAC(s32 arg0) {
    return (arg0 == 0) ? 0 : (arg0 + 0x2C);
}

INCLUDE_ASM("nonmatchings/paf_155D20", func_00158AB8);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00158AC8);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_155D20", func_00158ADC);
#else
void func_00158ADC(struct Unk_func_00158ADC_0 *arg0, s32 arg1) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = arg0->unk18;
        if (arg1 == 0) {
            arg0->unk18 = (s32) (temp_v0 | 1);
            return;
        }
        arg0->unk18 = __builtin_allegrex_ins(temp_v0, 0, 0, 1);
    }
}
#endif

s32 func_00158B08(struct Unk_func_00158B08_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = (arg0->unk18 ^ 1) & 1;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/paf_155D20", func_00158B24);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00158B34);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00158B48);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00158B70);

s32 func_00158B84(struct Unk_func_00158B84_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk24;
    }
    return var_v0;
}

s32 func_00158B98(struct Unk_func_00158B98_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk28;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/paf_155D20", func_00158BAC);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00158BDC);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00158C0C);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00158F78);

INCLUDE_ASM("nonmatchings/paf_155D20", func_001591AC);

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/paf_155D20", D_001A1D0C);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/paf_155D20", D_001A0B7C);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/paf_155D20", D_0019FBAC);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/paf_155D20", D_0019C02C);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/paf_155D20", D_0019A4EC);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/paf_155D20", D_0019642C);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_155D20", D_00195AEC);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/paf_155D20", D_001249FC);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/paf_155D20", D_001221FC);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/paf_155D20", D_0012407C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_155D20", D_0013672C);
#endif

INCLUDE_ASM("nonmatchings/paf_155D20", func_00159390);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015941C);

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/paf_155D20", func_00159454);
#else
s32 func_00159454(void *arg0, s32 arg1) {
    s32 var_a3;
    void *temp_a2;
    void *var_a0;
    void *var_v0;

    var_a3 = 0;
    temp_a2 = arg0 + M2C_FIELD(arg0, s32 *, 4);
    var_v0 = temp_a2;
    if (M2C_FIELD(arg0, s16 *, 0) >= 0) {
        var_v0 = arg0 + M2C_FIELD(arg0, s32 *, 8);
    }
    var_a0 = var_v0;
    if ((u32) var_v0 < (u32) temp_a2) {
        do {
            if ((arg1 == 0) || ((M2C_FIELD(var_a0, u16 *, 0) & 0xFFFF7FFF) == arg1)) {
                var_a3 += 1;
            }
            var_a0 += M2C_FIELD(var_a0, s32 *, 4);
        } while ((u32) var_a0 < (u32) temp_a2);
    }
    return var_a3;
}
#endif

INCLUDE_ASM("nonmatchings/paf_155D20", func_001594B8);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015952C);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00159590);

INCLUDE_ASM("nonmatchings/paf_155D20", func_001595F4);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00159658);

INCLUDE_ASM("nonmatchings/paf_155D20", func_001596BC);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_155D20", D_001A20FC);
#endif

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015977C);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00159818);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015986C);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00159918);

INCLUDE_ASM("nonmatchings/paf_155D20", func_001599D4);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00159A00);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00159A6C);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00159B20);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00159B90);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00159C00);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00159C70);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00159D14);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00159EA8);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00159F98);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015A0E4);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015A118);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015A150);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015A1C8);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015A1E8);

void func_0015A210(struct Unk_func_0015A210_0 *arg0) {
    if (arg0 != NULL) {
        arg0->unk4 = 0;
        arg0->unk0 = 0;
    }
}

void func_0015A228(s32 arg0) {
    func_0015A26C(arg0, 0);
}

void func_0015A244(s32 arg0, struct Unk_func_0015A244_1 *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != NULL) {
        var_v0 = arg1->unk4;
    }
    func_0015A26C(arg0, var_v0);
}

void func_0015A26C(s32 arg0, M2C_UNK arg1) {
    func_0015A2D8(arg1, arg0);
}

void func_0015A290(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = 0;
    }
}

void func_0015A2A0(void **arg0) {
    void *temp_v0;
    struct Unk_func_0015A2A0_var_v1 *var_v1;

    if (arg0 != NULL) {
        var_v1 = *arg0;
        if (var_v1 != NULL) {
            do {
                temp_v0 = var_v1->unk0;
                var_v1->unk4 = 0;
                var_v1 = temp_v0;
            } while (temp_v0 != NULL);
        }
        *arg0 = NULL;
    }
}

void func_0015A2D0(void) {
}

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015A2D8);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015A330);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015A38C);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015A3D0);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015A404);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015A438);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015A46C);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015A494);

INCLUDE_RODATA("nonmatchings/paf_155D20", D_001A2120);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015A4BC);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015A5E4);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015A630);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015A7B0);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015A8AC);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015AB20);

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_155D20", func_001025B0);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00117FE0);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015ACAC);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015AC44);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00102650);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/paf_155D20", func_0015B9B0);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015BEC4);

s32 func_00117814(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x2C);
    }
    return var_v0;
}
#endif

#if FW_VERSION < 152 || FW_VERSION == 282
s32 func_0015AC44(struct Unk_func_0015AC44_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk8;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_155D20", func_0015AC58);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015ACAC);
#endif

#if FW_VERSION < 152
s32 func_0015ACD0(struct Unk_func_0015ACD0_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    }
    return var_v0;
}
#endif

#if FW_VERSION == 282
s32 func_0015ACD0(struct Unk_func_0015ACD0_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk10;
    }
    return var_v0;
}

s32 func_0015ACE4(struct Unk_func_0015ACE4_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk14;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015ACF8);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015AD70);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_155D20", func_00117940);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_155D20", func_001027CC);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/paf_155D20", func_001179C0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_155D20", func_00117A40);
#else
INCLUDE_ASM("nonmatchings/paf_155D20", func_0015ADE8);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015AE60);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015AED8);
#endif

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015B154);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015B334);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015B350);

#if FW_VERSION < 151 || (FW_VERSION >= 152 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/paf_155D20", func_00117ED0);
#endif

#if FW_VERSION == 151
s32 func_00117ED0(s32 arg0) {
    return (arg0 == 0) ? 0 : (arg0 + 0x1C);
}
#endif

#if FW_VERSION == 282
s32 func_0015B368(s32 arg0) {
    return (arg0 == 0) ? 0 : (arg0 + 0x30);
}
#endif

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015B374);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015B384);

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_155D20", func_00102D04);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00102D34);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_155D20", func_0015B398);

s32 func_0015B3C8(struct Unk_func_0015B3C8_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = (((u32) arg0->unk4 >> 7) ^ 1) & 1;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015B3E8);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015B3F8);

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_155D20", func_0015B40C);
#endif

#if FW_VERSION < 152
void func_0015B40C(struct Unk_func_0015B40C_0 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    }
}
#endif

#if FW_VERSION == 282
void func_0015B40C(struct Unk_func_0015B40C_0 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        arg0->unk44 = arg1;
    }
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_155D20", func_0015B41C);
#endif

#if FW_VERSION < 152
s32 func_0015B41C(struct Unk_func_0015B41C_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x30);
    }
    return var_v0;
}
#endif

#if FW_VERSION == 282
s32 func_0015B41C(struct Unk_func_0015B41C_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk44;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_155D20", func_0015B430);
#endif

#if FW_VERSION < 152
void func_0015B430(struct Unk_func_0015B430_0 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x34) = arg1;
    }
}
#endif

#if FW_VERSION == 282
void func_0015B430(struct Unk_func_0015B430_0 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        arg0->unk48 = arg1;
    }
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_155D20", func_0015B440);
#endif

#if FW_VERSION < 152
s32 func_0015B440(struct Unk_func_0015B440_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x34);
    }
    return var_v0;
}
#endif

#if FW_VERSION == 282
s32 func_0015B440(struct Unk_func_0015B440_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk48;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_155D20", func_0015B454);
#endif

#if FW_VERSION < 152
void func_0015B454(struct Unk_func_0015B454_0 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x38) = arg1;
    }
}
#endif

#if FW_VERSION == 282
void func_0015B454(struct Unk_func_0015B454_0 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        arg0->unk4C = arg1;
    }
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_155D20", func_0015B464);
#endif

#if FW_VERSION < 152
s32 func_0015B464(struct Unk_func_0015B464_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x38);
    }
    return var_v0;
}
#endif

#if FW_VERSION == 282
s32 func_0015B464(struct Unk_func_0015B464_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk4C;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_155D20", func_0015B478);
#endif

#if FW_VERSION < 152
void func_0015B478(struct Unk_func_0015B478_0 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x38) = arg1;
    }
}
#endif

#if FW_VERSION == 282
void func_0015B478(struct Unk_func_0015B478_0 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        arg0->unk4C = arg1;
    }
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_155D20", func_0015B488);
#endif

#if FW_VERSION < 152
s32 func_0015B488(struct Unk_func_0015B488_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x38);
    }
    return var_v0;
}
#endif

#if FW_VERSION == 282
s32 func_0015B488(struct Unk_func_0015B488_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk4C;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015B49C);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015B4AC);

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_155D20", func_00102E2C);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00102E40);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00102E74);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00102F74);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00102FF4);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_155D20", func_00152F30);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/paf_155D20", func_0010308C_v152);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_155D20", func_001030A8);

INCLUDE_ASM("nonmatchings/paf_155D20", func_001030B4);

INCLUDE_ASM("nonmatchings/paf_155D20", func_001030C4);

INCLUDE_ASM("nonmatchings/paf_155D20", func_001030D0);

INCLUDE_ASM("nonmatchings/paf_155D20", func_001030E8);

INCLUDE_ASM("nonmatchings/paf_155D20", func_001030F4);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0010310C);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00103118);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00103130);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_155D20", func_00152FE0);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/paf_155D20", func_0010313C_v152);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_155D20", func_0015B9B0);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00103480);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0010362C);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_155D20", func_001536C4);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/paf_155D20", func_00103820_v152);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_155D20", func_00103828);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015BEC4);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0010385C);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00103C3C);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/paf_155D20", func_00117FE0);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015ACAC);

INCLUDE_ASM("nonmatchings/paf_155D20", func_00118054);
#endif

#if FW_VERSION == 282
s32 func_0015B4C0(struct Unk_func_0015B4C0_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk58;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015B4D4);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015B508);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015B608);

INCLUDE_ASM("nonmatchings/paf_155D20", func_0015B688);
#endif
