/* lang: c++ */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "lftv_middleware_decls.h"

s32 func_00023ABC(struct Unk_func_00023ABC_0 *arg0, s32 arg1) {
    s32 var_a2;
    u32 temp_v0;
    u32 temp_v1;

    temp_v1 = arg0->unk4;
    var_a2 = 0;
    if (temp_v1 != 0) {
        temp_v0 = arg0->unk8 + arg1;
        if (temp_v1 >= temp_v0) {
            arg0->unk8 = temp_v0;
            var_a2 = 1;
        }
    }
    return var_a2;
}

s32 func_00023AEC(struct Unk_func_00023AEC_0 *arg0, u32 arg1) {
    s32 var_a2;
    u32 temp_t0;

    var_a2 = 0;
    if (arg0->unk4 != 0) {
        temp_t0 = arg0->unk8;
        if (temp_t0 >= arg1) {
            arg0->unk8 = (u32) (temp_t0 - arg1);
            var_a2 = 1;
        }
    }
    return var_a2;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00023B18);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00023B40);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00023B84);

s32 func_00023BDC(struct Unk_func_00023BDC_0 *arg0) {
    return arg0->unk14;
}

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_000239C0);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00023A60);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_0003FD58);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_0003FDE8);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00023BE4);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00023C84);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00023D24);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00023DB4);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00023E44);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00023EDC);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00023F80);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00024094);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_000240BC);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_000240E8);
#else
void func_000240E8(struct Unk_func_000240E8_0 *arg0, s32 arg1) {
    if (arg0->unk30 == 1) {
        arg0->unk2C = arg1;
        arg0->unk30 = 0U;
    }
}
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00024108);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00024240);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00024310);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_000243D0);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_0002421C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00040594);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00024440);
#endif

void func_00024540(struct Unk_func_00024540_0 *arg0) {
    arg0->unkC = 0;
}

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00024324);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00024548);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00024554);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_0002458C);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00024648);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_0002465C);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00024664);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_000246C4);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_000247A4);

void func_0002482C(M2C_UNK **arg0) {
    *arg0 = &D_000556B8;
    func_00023D24((s32) arg0);
}

void func_00024854(M2C_UNK **arg0) {
    *arg0 = &D_000556B8;
    func_00023D24((s32) arg0);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_0002487C);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_000248B4);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00024B8C);

s32 func_00024DBC(struct Unk_func_00024DBC_0 *arg0) {
    return arg0->unk4 + 8;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00024DC8);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00024E44);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00024EC8);

void func_00024F4C(M2C_UNK **arg0) {
    *arg0 = &D_000556E8;
    func_00023D24((s32) arg0);
}

void func_00024F74(M2C_UNK **arg0) {
    *arg0 = &D_000556E8;
    func_00023D24((s32) arg0);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00024F9C);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00024FD4);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_000252F0);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00025524);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_000256F0);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_0002573C);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00025788);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00025830);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_000258D8);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00025988);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00025A2C);

u8 func_00025A4C(struct Unk_func_00025A4C_0 *arg0) {
    return arg0->unkC;
}

void func_00025A54(struct Unk_func_00025A54_0 *arg0) {
    arg0->unkC = 1;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00025A60);

u8 func_00025B48(struct Unk_func_00025B48_0 *arg0) {
    return arg0->unkD;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00025B50);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00025CEC);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00025D70);

void func_00025E54(struct Unk_func_00025E54_0 *arg0, s32 arg1) {
    s32 temp_a4;
    u8 temp_a3;

    temp_a3 = arg0->unk14;
    if (temp_a3 == 1) {
        temp_a4 = arg0->unk10;
        if ((temp_a4 + 1) != arg1) {
            if ((temp_a4 != 0xFFFF) & (~temp_a4 != 0)) {
                arg0->unkC = temp_a3;
            } else if (arg1 != 0) {
                arg0->unkC = temp_a3;
            }
        }
    }
    arg0->unk10 = arg1;
    arg0->unk14 = 1U;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00025EAC);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00025EC0);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00025EC8);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00025F44);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00025FCC);

void func_00025FFC(M2C_UNK **arg0) {
    *arg0 = &D_00055750;
    func_00025788((s32) arg0);
}

void func_00026024(M2C_UNK **arg0) {
    *arg0 = &D_00055750;
    func_00025788((s32) arg0);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_0002604C);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00026084);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_000261CC);

void func_000261FC(M2C_UNK **arg0) {
    *arg0 = &D_00055780;
    func_00025788((s32) arg0);
}

void func_00026224(M2C_UNK **arg0) {
    *arg0 = &D_00055780;
    func_00025788((s32) arg0);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_0002624C);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00026284);

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_000263B8);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00026524);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_0002656C);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_000265B4);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_0002664C);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00026680);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_000266C0);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00026700);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00026750);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_000267E0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055558);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055580);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055590);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_000555A8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_000555AC);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_000555C0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_000555D0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_000555E0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055600);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055604);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055628);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055640);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055650);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00054FC4);
#endif

#if FW_VERSION >= 303
INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_0005565C);
#endif

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055668);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055690);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055694);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055698);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_0005569C);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055010);
#endif

#if FW_VERSION >= 303
INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_000556A8);
#endif

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_000556B8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_000556E8);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055078);
#endif

#if FW_VERSION >= 303
INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055710);
#endif

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_0005571C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055728);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055750);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055780);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_000557A0);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_000268B8);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00026B40);

#if FW_VERSION >= 311
INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00026D1C);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00026D24);
#endif

s32 func_00026B6C(void) {
    return 1;
}

s32 func_00026B74(void) {
    return 1;
}

s32 func_00026B7C(void) {
    return 1;
}

s32 func_00026B84(void) {
    return 1;
}

s32 func_00026B8C(void) {
    return 1;
}

s32 func_00026B94(void) {
    return 1;
}

s32 func_00026B9C(void) {
    return 1;
}

#if FW_VERSION < 311
s32 func_00026BA4(void) {
    return 1;
}

s32 func_00026BAC(void) {
    return 1;
}
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00026BB4);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00026E7C);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055280);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055290);
#endif

#if FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055938);
#endif

s32 func_00026F40(void) {
    return 1;
}

s32 func_00026F48(void) {
    return 1;
}

s32 func_00026F50(void) {
    return 1;
}

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00026B7C_v282);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00026BC8);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00026C14);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00026C8C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00042E98);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00042ED8);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00042F18);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00042F5C);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00026F58);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00026FA4);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00026FF0);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00027068);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_000270E0);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00026DA0);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00026DB0);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00026DD8);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00026DE8);
#endif

#if FW_VERSION >= 303
void func_0002717C(M2C_UNK **arg0) {
    *arg0 = &D_00055928;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_0002718C);

void func_000271B4(M2C_UNK **arg0) {
    *arg0 = &D_00055928;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_000271C4);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_000271EC);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_000272D8);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_000273FC);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00023B4C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_000432BC);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00027464);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_000274F0);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_0002768C);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_000242F0);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00043A88);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00027C14);
#endif

void func_00027C98(M2C_UNK **arg0) {
    *arg0 = &D_00055948;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00027CA8);

INCLUDE_ASM("nonmatchings/lftv_middleware_023ABC", func_00027CD0);

void func_00027CF8(M2C_UNK **arg0) {
    *arg0 = &D_00055948;
}

#if FW_VERSION >= 303
INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055918);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055928);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055938);
#endif

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055948);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055950);

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_0007BFD4);
#endif

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055964);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_0005596C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055974);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055988);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055998);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_000559A4);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_000559B0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_000559BC);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00050800);
#endif

#if FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_0007C03C);
#endif

#if FW_VERSION < 271 || FW_VERSION >= 303
INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_000559C0);
#endif

#if FW_VERSION >= 303
INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_000559D4);
#endif

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_000559DC);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_000559E4);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_000559FC);

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_0007C080);
#endif

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055A04);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055A08);

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055A0C);

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_0007C0C8);
#endif

INCLUDE_RODATA("nonmatchings/lftv_middleware_023ABC", D_00055A1C);
