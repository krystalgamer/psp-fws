/* cflags: -Os */
#include "common.h"
#include "auth_plugin_decls.h"

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/auth_plugin", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/auth_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/auth_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/auth_plugin", module_start);

#if FW_VERSION < 282
s32 module_stop(void) {
    func_000018E0();
    return 0;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/auth_plugin", func_0000015C_v271);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/auth_plugin", func_0000015C_v260);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/auth_plugin", func_00000194);

INCLUDE_ASM("nonmatchings/auth_plugin", func_00000328);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/auth_plugin", func_0000015C_v250);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/auth_plugin", func_0000015C_v201);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/auth_plugin", func_0000015C);

INCLUDE_ASM("nonmatchings/auth_plugin", func_00000238);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/auth_plugin", func_000005F8);

INCLUDE_ASM("nonmatchings/auth_plugin", func_00000954);

void func_0000098C(void) {
    func_0000015C(1);
    if (D_000032D8 != NULL) {
        M2C_FIELD(D_000032D8, s32 *, 0x1C) = 1;
    }
}

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002A34);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002A38);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002A3C);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002A40);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002A44);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002A48);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002A4C);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002A50);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002A54);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002A58);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002A5C);
#endif

#if FW_VERSION >= 282
s32 module_stop(void) {
    func_000026B0();
    return 0;
}

INCLUDE_ASM("nonmatchings/auth_plugin", func_0000015C);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/auth_plugin", D_000028D8);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_000028DC);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_000028F0);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002908);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002910);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002930);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_000029B0);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_000029D8);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_000029E8);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_000029F8);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002A20);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002A70);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002A80_v350);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002A80);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002A84);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/auth_plugin", func_00000194);

INCLUDE_ASM("nonmatchings/auth_plugin", func_00000328);

INCLUDE_ASM("nonmatchings/auth_plugin", func_000004B0);
#endif

#if FW_VERSION == 350
void func_00000574(void) {
    func_0000222C((s32) &D_00002C88, (s32) &D_00002AEC);
    func_0000222C((s32) &D_00002C94, (s32) &D_00002AEC);
    scePaf_8B38372A(D_00002C7C, &D_00002AE0);
    scePaf_39E62C88(D_00002C7C, &D_00002AE0, 0, 0);
    scePaf_A013540A(D_00002C7C, &D_00002AE0);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00000574(void) {
    func_0000222C((s32) &D_00002C88, (s32) &D_00002AEC);
    func_0000222C((s32) &D_00002C94, (s32) &D_00002AEC);
    scePaf_3481F595(D_00002C7C, &D_00002AE0);
    scePaf_F609FA81(D_00002C7C, &D_00002AE0, 0, 0);
    scePaf_CAF05F1D(D_00002C7C, &D_00002AE0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/auth_plugin", func_000005F8);

INCLUDE_ASM("nonmatchings/auth_plugin", func_00000954);

void func_0000098C(void) {
    func_000004B0(1);
    if (D_00002D50 != NULL) {
        D_00002D50->unk1C = 1;
    }
}

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002AB4);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002AB8);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002ABC);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002AC0);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002AC4);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002AC8);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002ACC);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002AD0);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002AD4);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002AD8);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002ADC);
#endif

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002AE0);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002AEC);

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002FC8);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002FD8);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002FE8);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/auth_plugin", func_000009BC);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001C88);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001C94);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/auth_plugin", D_0000301C);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00003028);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001C9C);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001CAC);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001CC0);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001CD8);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001CF4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/auth_plugin", D_000030A8);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_000030AC);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_000030C8);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001D18);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001D1C);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001D38);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001D54);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001D70);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001D84);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001D94);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001DA8);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001DBC);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001DD0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00003144);

INCLUDE_ASM("nonmatchings/auth_plugin", func_000002F8);

INCLUDE_ASM("nonmatchings/auth_plugin", func_00000654);
#endif

#if FW_VERSION == 250
void func_00000670(void) {
    func_0000015C(1);
    if (D_000032D8 != NULL) {
        M2C_FIELD(D_000032D8, s32 *, 0x1C) = 1;
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/auth_plugin", func_0000068C);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/auth_plugin", func_00000B3C);

INCLUDE_ASM("nonmatchings/auth_plugin", func_00000D38);

INCLUDE_ASM("nonmatchings/auth_plugin", func_00000F40);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/auth_plugin", func_00000810);

INCLUDE_ASM("nonmatchings/auth_plugin", func_00000CC8);

INCLUDE_ASM("nonmatchings/auth_plugin", func_0000118C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/auth_plugin", func_0000045C);

void func_000005B0(void) {

}

void func_000005B8(void) {

}

INCLUDE_ASM("nonmatchings/auth_plugin", func_000005C0);

INCLUDE_ASM("nonmatchings/auth_plugin", func_00000758);
#endif

INCLUDE_ASM("nonmatchings/auth_plugin", func_00001034);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/auth_plugin", func_0000140C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/auth_plugin", func_00001098);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/auth_plugin", func_00001D54);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_00001CFC(void) {
    s32 var_a0;

    var_a0 = 0;
    if (D_000032D8 != NULL) {
        var_a0 = M2C_FIELD(D_000032D8, s32 *, 0x30);
    }
    func_00001DF4(var_a0, 0, 0, 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/auth_plugin", func_00001448);
#endif

#if FW_VERSION == 201
void func_00002364(void) {
    scePaf_49CE42F7(D_00001E90, &D_00001D38);
    func_0000015C(1);
    if (D_000032D8 != NULL) {
        M2C_FIELD(D_000032D8, s32 *, 0x1C) = 1;
    }
}

INCLUDE_ASM("nonmatchings/auth_plugin", func_000023A8);

INCLUDE_ASM("nonmatchings/auth_plugin", func_00002444);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00002444(void) {
    func_0000015C(2);
    if (D_000032D8 != NULL) {
        M2C_FIELD(D_000032D8, s32 *, 0x1C) = 2;
    }
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/auth_plugin", func_00000924);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/auth_plugin", func_0000105C);

INCLUDE_ASM("nonmatchings/auth_plugin", func_000010C4);

INCLUDE_ASM("nonmatchings/auth_plugin", func_00001D54);

void func_00001D7C(void) {
    s32 var_a0;

    var_a0 = 0;
    if (D_00002D50 != NULL) {
        var_a0 = D_00002D50->unk30;
    }
    func_00001DF4(var_a0, 0, 0, 0);
}

void func_00001DB8(void) {
    func_000004B0(2);
    if (D_00002D50 != NULL) {
        D_00002D50->unk1C = 2;
    }
}
#endif

#if FW_VERSION < 201
void func_00001DE8(void) {

}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/auth_plugin", func_00001DE8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/auth_plugin", func_00001168);
#endif

#if FW_VERSION < 201
void func_00001168(void) {

}

INCLUDE_ASM("nonmatchings/auth_plugin", func_00001170);
#endif

INCLUDE_ASM("nonmatchings/auth_plugin", func_00001DF4);

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002B5C);
#endif

#if FW_VERSION < 260
void func_0000127C(void) {
    func_0000015C(2);
}
#endif

INCLUDE_ASM("nonmatchings/auth_plugin", func_00001EBC);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/auth_plugin", func_000025F4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/auth_plugin", func_00002664);
#endif

#if FW_VERSION < 201
void func_00001340(void) {

}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/auth_plugin", func_00001348);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/auth_plugin", func_00001F64);

INCLUDE_ASM("nonmatchings/auth_plugin", func_00001FCC);
#endif

INCLUDE_ASM("nonmatchings/auth_plugin", func_00002058);

INCLUDE_ASM("nonmatchings/auth_plugin", func_0000207C);

#if FW_VERSION < 282
void func_00001454(void) {
    func_0000207C(1, 0xFFFF);
}

void func_00001474(void) {
    func_0000207C(0, 0xFFFF);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/auth_plugin", func_00001858);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/auth_plugin", func_0000289C);
#endif

#if FW_VERSION < 282
void func_00001494(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_CA79D58B(arg1);
    }
    func_000024D8(arg0, arg1, var_v0);
}
#else
void func_0000218C(void) {
    func_0000207C(1, 0xFFFF);
}

void func_000021AC(void) {
    func_0000207C(0, 0xFFFF);
}
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/auth_plugin", func_000021CC);
#endif

#if FW_VERSION >= 310
void func_000023A4(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00002638();
}
#endif

#if FW_VERSION < 282
void func_00001514(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_FD4C9F47(arg1);
    }
    func_00002584(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/auth_plugin", func_00001550);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/auth_plugin", func_00001564);
#endif

#if FW_VERSION < 282
void func_000021FC(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00002638();
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/auth_plugin", func_00002A64);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/auth_plugin", func_000021FC);
#endif

#if FW_VERSION == 350
void func_0000222C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_C1B0AA0D(arg1);
    }
    func_000024D8(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0000222C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_CA79D58B(arg1);
    }
    func_000024D8(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION == 350
void func_0000227C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_5E4447F6(arg1);
    }
    func_00002584(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0000227C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_FD4C9F47(arg1);
    }
    func_00002584(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/auth_plugin", func_000022CC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
void func_000023A4(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00002638();
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/auth_plugin", func_000023C4);
#endif

INCLUDE_ASM("nonmatchings/auth_plugin", func_00002460);

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/auth_plugin", func_00002638);
#endif

INCLUDE_ASM("nonmatchings/auth_plugin", func_000024D8);

INCLUDE_ASM("nonmatchings/auth_plugin", func_00002584);

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/auth_plugin", func_00002638);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/auth_plugin", func_00001858);
#endif

INCLUDE_ASM("nonmatchings/auth_plugin", func_00002658);

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/auth_plugin", func_000026B0);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002C00_v271);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002C00);
#endif

#if FW_VERSION >= 271
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002C10);
#endif
