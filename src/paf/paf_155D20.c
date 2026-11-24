#include "common.h"
#include "paf_decls.h"

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00155D20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00155DFC);

void func_00155F34(s32 arg0) {
    D_001D7798 = arg0;
    D_001D77A0 = -1;
    D_001D779C = 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00155F54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00155FD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00156060);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015615C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_001562A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_001563B8);

void func_001564A0(void *arg0) {
    s32 temp_v0;

    if ((arg0 == NULL) || (temp_v0 = M2C_FIELD(arg0, s32 *, 0x14) - 1, M2C_FIELD(arg0, s32 *, 0x14) = temp_v0, (temp_v0 != 0))) {

    } else {
        func_00156A00();
        func_0015A118(arg0);
        func_00151E1C(arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_001564F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_001566A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00156A00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00156A74);

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

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00156AE4);

s32 func_00156D54(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 8);
    }
    return var_v0;
}

s32 func_00156D68(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x3C);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00156D7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00156DA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_001570C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_001572EC);

void func_001573F8(void *arg0) {
    s32 temp_v0;

    if ((arg0 == NULL) || (temp_v0 = M2C_FIELD(arg0, s32 *, 4) - 1, M2C_FIELD(arg0, s32 *, 4) = temp_v0, (temp_v0 != 0))) {

    } else {
        func_001576E8();
        func_00151E1C(arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00157444);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00157550);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_001576E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00157718);

void func_001578AC(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0xC) = arg1;
        func_00157950();
    }
}

s32 func_001578CC(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_001578E0);

s32 func_0015792C(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = !(M2C_FIELD(arg0, s32 *, 8) & 1) ? 0 : (arg0 + 0x2C);
    }
    return var_v0;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_155D20", D_001A1FC8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_155D20", D_001A1FCC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_155D20", D_001A1FD0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_155D20", D_001A1FD4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_155D20", D_001A1FD8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_155D20", D_001A1FDC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_155D20", D_001A1FE0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_155D20", D_001A1FF0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_155D20", D_001A200C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_155D20", D_001A2030);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_155D20", D_001A2040);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_155D20", D_001A209C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00157950);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00157A38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00157B30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00157C44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00157D40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00157DE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00157F90);

void func_00158018(void *arg0) {
    s32 temp_v0;

    if ((arg0 == NULL) || (temp_v0 = M2C_FIELD(arg0, s32 *, 0x14) - 1, M2C_FIELD(arg0, s32 *, 0x14) = temp_v0, (temp_v0 != 0))) {

    } else {
        func_001582AC();
        func_0015A118(arg0);
        func_00151E1C(arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015806C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00158158);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_001582AC);

void func_001582DC(void *arg0) {
    if (arg0 != NULL) {
        func_0015B9B0(M2C_FIELD(arg0, s32 *, 0x10));
    }
}

void func_001582FC(void *arg0) {
    s32 temp_s0;

    if (arg0 != NULL) {
        temp_s0 = M2C_FIELD(arg0, s32 *, 0x10);
        func_0015BEC4(temp_s0);
        func_00159C00(func_0015ACAC(temp_s0));
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00158338);

s32 func_00158358(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 8);
    }
    return var_v0;
}

void func_0015836C(void *arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x10);
        if (arg1 != temp_v0) {
            func_0015A5E4(temp_v0);
            M2C_FIELD(arg0, s32 *, 0x10) = func_0015A630(arg1, arg2);
        }
    }
}

s32 func_001583CC(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x10);
    }
    return var_v0;
}

s32 func_001583E0(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = func_0015B334(M2C_FIELD(arg0, s32 *, 0x10));
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00158404);

void func_001584C8(void *arg0) {
    s32 temp_v0;

    if ((arg0 == NULL) || (temp_v0 = M2C_FIELD(arg0, s32 *, 0x14) - 1, M2C_FIELD(arg0, s32 *, 0x14) = temp_v0, (temp_v0 != 0))) {

    } else {
        func_001587E4();
        func_0015A118(arg0);
        func_00151E1C(arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015851C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015862C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_001587E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00158854);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00158A60);

s32 func_00158A80(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 8);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00158A94);

s32 func_00158AAC(s32 arg0) {
    return (arg0 == 0) ? 0 : (arg0 + 0x2C);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00158AB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00158AC8);

void func_00158ADC(void *arg0, s32 arg1) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x18);
        if (arg1 == 0) {
            M2C_FIELD(arg0, s32 *, 0x18) = (s32) (temp_v0 | 1);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x18) = __builtin_allegrex_ins(temp_v0, 0, 0, 1);
    }
}

s32 func_00158B08(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = (M2C_FIELD(arg0, s32 *, 0x18) ^ 1) & 1;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00158B24);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00158B34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00158B48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00158B70);

s32 func_00158B84(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x24);
    }
    return var_v0;
}

s32 func_00158B98(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x28);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00158BAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00158BDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00158C0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00158F78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_001591AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00159390);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015941C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00159454);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_001594B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015952C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00159590);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_001595F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00159658);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_001596BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_155D20", D_001A20FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015977C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00159818);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015986C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00159918);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_001599D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00159A00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00159A6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00159B20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00159B90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00159C00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00159C70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00159D14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00159EA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_00159F98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015A0E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015A118);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015A150);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015A1C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015A1E8);

void func_0015A210(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 4) = 0;
        M2C_FIELD(arg0, s32 *, 0) = 0;
    }
}

void func_0015A228(s32 arg0) {
    func_0015A26C(arg0, 0);
}

void func_0015A244(s32 arg0, void *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != NULL) {
        var_v0 = M2C_FIELD(arg1, s32 *, 4);
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
    void *var_v1;

    if (arg0 != NULL) {
        var_v1 = *arg0;
        if (var_v1 != NULL) {
            do {
                temp_v0 = M2C_FIELD(var_v1, void **, 0);
                M2C_FIELD(var_v1, s32 *, 4) = 0;
                var_v1 = temp_v0;
            } while (temp_v0 != NULL);
        }
        *arg0 = NULL;
    }
}

void func_0015A2D0(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015A2D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015A330);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015A38C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015A3D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015A404);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015A438);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015A46C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015A494);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_155D20", D_001A2120);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015A4BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015A5E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015A630);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015A7B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015A8AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015AB20);

s32 func_0015AC44(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 8);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015AC58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015ACAC);

s32 func_0015ACD0(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x10);
    }
    return var_v0;
}

s32 func_0015ACE4(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x14);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015ACF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015AD70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015ADE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015AE60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015AED8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015B154);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015B334);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015B350);

s32 func_0015B368(s32 arg0) {
    return (arg0 == 0) ? 0 : (arg0 + 0x30);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015B374);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015B384);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015B398);

s32 func_0015B3C8(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = (((u32) M2C_FIELD(arg0, u32 *, 4) >> 7) ^ 1) & 1;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015B3E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015B3F8);

void func_0015B40C(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    }
}

s32 func_0015B41C(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x44);
    }
    return var_v0;
}

void func_0015B430(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x48) = arg1;
    }
}

s32 func_0015B440(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x48);
    }
    return var_v0;
}

void func_0015B454(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x4C) = arg1;
    }
}

s32 func_0015B464(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x4C);
    }
    return var_v0;
}

void func_0015B478(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x4C) = arg1;
    }
}

s32 func_0015B488(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x4C);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015B49C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015B4AC);

s32 func_0015B4C0(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x58);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015B4D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015B508);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015B608);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_155D20", func_0015B688);

