/* cflags: -Os */
#include "common.h"
#include "opening_plugin_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/opening_plugin", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/opening_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/opening_plugin", module_start);

s32 module_stop(void) {
    func_0000107C();
    return 0;
}

INCLUDE_ASM("nonmatchings/opening_plugin", func_0000015C);

INCLUDE_ASM("nonmatchings/opening_plugin", func_000001D0);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/opening_plugin", D_00003CB8);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00003CBC);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00003CC4);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00003CD0);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00003CE0);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00003CF4);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00003D04);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00003D1C);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00003D30);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00003D50);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00003D6C);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00003D9C);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00003DC0);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00003E6C);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00003E74);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00003E7C);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00003E80);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00003E90);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00003E9C);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_000013D4);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00003ECC);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_000013E0);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_000013E4);
#endif

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000258);

INCLUDE_ASM("nonmatchings/opening_plugin", func_000002AC);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/opening_plugin", D_00003F04);

INCLUDE_ASM("nonmatchings/opening_plugin", func_000005A0);
#endif

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000570);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000630);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000658);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000680);

INCLUDE_ASM("nonmatchings/opening_plugin", func_000006A8);

INCLUDE_ASM("nonmatchings/opening_plugin", func_000006D0);

INCLUDE_ASM("nonmatchings/opening_plugin", func_000006F8);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000720);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/opening_plugin", func_00000888);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001810);
#endif

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001420);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001434);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/opening_plugin", func_0000076C);
#endif

#if FW_VERSION == 260
void func_0000076C(void) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = _ZN3paf4View4FindEPKc("topmenu_plugin");
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(M2C_UNK), 0x10)(0xD);
        }
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
void func_0000076C(void) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = _ZN3paf4View4FindEPKc("topmenu_plugin");
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(M2C_UNK), 0x14)(0xD);
        }
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0000076C(void) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = _ZN3paf4View4FindEPKc("topmenu_plugin");
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(M2C_UNK), 0x1C)(0xC);
        }
    }
}
#endif

#if FW_VERSION == 100
void func_0000076C(void) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = _ZN3paf4View4FindEPKc("topmenu_plugin");
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(M2C_UNK), 0x18)(0xA);
        }
    }
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/opening_plugin", func_00000790);
#endif

#if FW_VERSION == 282
void func_00000790(void) {
    s32 temp_v0;
    struct Unk_func_00000790_temp_v0_2 *temp_v0_2;

    temp_v0 = _ZN3paf4View4FindEPKc("topmenu_plugin");
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            temp_v0_2->unk10(0xD);
        }
    }
}
#endif

INCLUDE_ASM("nonmatchings/opening_plugin", func_000007D8);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000840);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001468);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001510);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001478);
#endif

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001484);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001490);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_000014A4);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_000014B8);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_000014CC);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_000014E0);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_000014F8);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001514);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001528);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/opening_plugin", D_00004050);
#endif

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001548);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001558);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001570);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001588);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_000015A0);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_000015B8);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_000015C8);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001670);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/opening_plugin", D_000015D8);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/opening_plugin", D_000019E4);
#endif

INCLUDE_RODATA("nonmatchings/opening_plugin", D_000015E4);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_000015EC);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001A04);
#endif

INCLUDE_RODATA("nonmatchings/opening_plugin", D_000015F8);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001600);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001608);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001614);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_0000161C);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001628);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001630);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_0000163C);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_0000164C);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001658);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_0000166C);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001734);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001674);
#endif

INCLUDE_RODATA("nonmatchings/opening_plugin", D_0000167C);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/opening_plugin", D_000015F4);
#endif

INCLUDE_RODATA("nonmatchings/opening_plugin", D_0000168C);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001698);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_0000169C);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_000016A0);

INCLUDE_ASM("nonmatchings/opening_plugin", func_0000088C);

INCLUDE_ASM("nonmatchings/opening_plugin", func_000008F0);

INCLUDE_ASM("nonmatchings/opening_plugin", func_0000093C);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000988);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/opening_plugin", func_000009E8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/opening_plugin", func_000009D4);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/opening_plugin", func_00000B48);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/opening_plugin", func_000009FC_v340);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/opening_plugin", func_000009FC_v330);
#endif

#if FW_VERSION == 311
INCLUDE_ASM("nonmatchings/opening_plugin", func_000009FC_v311);
#endif

#if FW_VERSION == 310
INCLUDE_ASM("nonmatchings/opening_plugin", func_000009FC_v310);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/opening_plugin", func_000009FC_v303);
#endif

#if FW_VERSION == 302
INCLUDE_ASM("nonmatchings/opening_plugin", func_000009FC_v302);
#endif

#if FW_VERSION == 301
INCLUDE_ASM("nonmatchings/opening_plugin", func_000009FC_v301);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/opening_plugin", func_000009FC_v300);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/opening_plugin", func_00000A8C);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000B60);
#endif

INCLUDE_ASM("nonmatchings/opening_plugin", func_000009FC);

#if FW_VERSION < 282
void func_000009C0(s32 arg0) {
    D_0000177C = arg0;
}
#else
void func_00000A24(s32 arg0) {
    D_000017FC = arg0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/opening_plugin", func_00000BE0);
#endif

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000A30);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000A90);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000AE0);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/opening_plugin", func_00000E44);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
void func_00000E00(void) {
    scePowerCancelRequest();
    sceKernelPowerUnlock(0);
}
#endif

#if FW_VERSION == 100
void func_00000D8C(void) {

}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/opening_plugin", func_00000E28);
#endif

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/opening_plugin", func_00000E84);
#else
void func_00000E84(s32 arg0) {
    _ZN3paf6Module12SetInterfaceEiPv(arg0, 1, (s32) &D_000017A8);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/opening_plugin", func_000010EC);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/opening_plugin", func_00001194);
#endif

#if FW_VERSION >= 303
void func_00001194(void) {
    func_000010EC(1, 0xFFFF);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/opening_plugin", func_000011B4);
#endif

#if FW_VERSION >= 303
void func_000011B4(void) {
    func_000010EC(0, 0xFFFF);
}
#endif

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000EA8);

#if FW_VERSION < 282
void func_00000DE8(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00000F48();
}

void func_00000E08(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = sce_paf_private_strlen(arg1);
    }
    func_00000F78(arg0, arg1, var_v0);
}
#else
void func_00000ED8(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00000F48();
}
#endif

#if FW_VERSION >= 350
void func_00000EF8(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_C1B0AA0D(arg1);
    }
    func_00000F78(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00000EF8(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = sce_paf_private_strlen(arg1);
    }
    func_00000F78(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/opening_plugin", func_00001274);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/opening_plugin", func_000012EC);
#endif

#if FW_VERSION >= 303
void func_000012EC(void **arg0) {
    void *temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != NULL) {
        M2C_FIELD(temp_a0, s32 *, 4) = (s32) (M2C_FIELD(temp_a0, s32 *, 4) + 1);
    }
}
#endif

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000F48);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000F78);

#if FW_VERSION >= 300 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/opening_plugin", func_000013E8);
#endif

#if FW_VERSION >= 303
void func_000013E8(void **arg0, void *arg1) {
    *arg0 = arg1;
    func_000012EC(arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/opening_plugin", func_000015C0);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00001630);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00001678);

INCLUDE_ASM("nonmatchings/opening_plugin", func_000016DC);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00001798);

INCLUDE_ASM("nonmatchings/opening_plugin", func_000018C0);

void func_00001AB8(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = *arg0;
    if (temp_v0 >= 0) {
        sceAtracReleaseAtracID(temp_v0);
    }
}

INCLUDE_ASM("nonmatchings/opening_plugin", func_00001AE0);

void func_00001B58(s32 *arg0) {
    void *sp0;
    sceAtracGetNextDecodePosition(*arg0, &sp0);
}

INCLUDE_ASM("nonmatchings/opening_plugin", func_00001B78);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00001EE0);

INCLUDE_ASM("nonmatchings/opening_plugin", func_0000202C);

INCLUDE_ASM("nonmatchings/opening_plugin", func_0000208C);

INCLUDE_ASM("nonmatchings/opening_plugin", func_000020F8);

INCLUDE_ASM("nonmatchings/opening_plugin", func_0000212C);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00002390);

INCLUDE_ASM("nonmatchings/opening_plugin", func_0000241C);

INCLUDE_ASM("nonmatchings/opening_plugin", func_0000248C);

INCLUDE_ASM("nonmatchings/opening_plugin", func_000024F4);

INCLUDE_ASM("nonmatchings/opening_plugin", func_0000255C);

INCLUDE_ASM("nonmatchings/opening_plugin", func_000025C4);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00002600);

INCLUDE_ASM("nonmatchings/opening_plugin", func_0000269C);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00002720);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00002778);

INCLUDE_ASM("nonmatchings/opening_plugin", func_000027D8);

INCLUDE_ASM("nonmatchings/opening_plugin", func_0000281C);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00002854);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00002890);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00004204);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_000102E4);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00010308);

INCLUDE_ASM("nonmatchings/opening_plugin", func_000028CC);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00002988);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00002AA0);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00002C88);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00002DC0);

INCLUDE_ASM("nonmatchings/opening_plugin", func_0000306C);

INCLUDE_ASM("nonmatchings/opening_plugin", func_000035DC);
#endif

#if FW_VERSION < 250
void func_00000FFC(M2C_UNK **arg0) {
    *arg0 = &D_00001648;
    _ZdlPv();
}
#endif

INCLUDE_ASM("nonmatchings/opening_plugin", func_00001024);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/opening_plugin", func_0000107C);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001638);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001648);
#endif
