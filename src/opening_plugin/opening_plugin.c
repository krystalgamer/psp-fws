/* cflags: -Os */
#include "common.h"
#include "opening_plugin_decls.h"

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/opening_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/opening_plugin", module_start);

#if FW_VERSION == 100
s32 module_stop(void) {
    func_0000107C();
    return 0;
}
#endif

#if FW_VERSION != 100
s32 module_stop(void) {
    func_0000107C();
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/opening_plugin", func_0000015C);

INCLUDE_ASM("nonmatchings/opening_plugin", func_000001D0);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000258);

INCLUDE_ASM("nonmatchings/opening_plugin", func_000002AC);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000570);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000630);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000658);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000680);

INCLUDE_ASM("nonmatchings/opening_plugin", func_000006A8);

INCLUDE_ASM("nonmatchings/opening_plugin", func_000006D0);

INCLUDE_ASM("nonmatchings/opening_plugin", func_000006F8);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000720);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001420);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001434);

#if FW_VERSION == 100
void func_0000076C(void) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = scePaf_D4FAE7D0("topmenu_plugin");
    if (temp_v0 != 0) {
        temp_v0_2 = scePaf_338C3774(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(M2C_UNK), 0x18)(0xA);
        }
    }
}
#endif

#if FW_VERSION != 100
void func_00000790(void) {
    s32 temp_v0;
    struct Unk_func_00000790_temp_v0_2 *temp_v0_2;

    temp_v0 = scePaf_D4FAE7D0("topmenu_plugin");
    if (temp_v0 != 0) {
        temp_v0_2 = scePaf_338C3774(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            temp_v0_2->unk10(0xD);
        }
    }
}
#endif

INCLUDE_ASM("nonmatchings/opening_plugin", func_000007D8);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000840);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001468);

#if FW_VERSION != 100
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

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001548);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001558);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001570);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001588);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_000015A0);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_000015B8);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_000015C8);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/opening_plugin", D_000015D8);
#endif

INCLUDE_RODATA("nonmatchings/opening_plugin", D_000015E4);

INCLUDE_RODATA("nonmatchings/opening_plugin", D_000015EC);

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

#if FW_VERSION != 100
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

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/opening_plugin", func_000009D4);
#endif

INCLUDE_ASM("nonmatchings/opening_plugin", func_000009FC);

#if FW_VERSION == 100
void func_000009C0(s32 arg0) {
    D_0000177C = arg0;
}
#endif

#if FW_VERSION != 100
void func_00000A24(s32 arg0) {
    D_000017FC = arg0;
}
#endif

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000A30);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000A90);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000AE0);

#if FW_VERSION == 100
void func_00000D8C(void) {

}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/opening_plugin", func_00000E28);
#endif

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000E84);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000EA8);

#if FW_VERSION == 100
void func_00000DE8(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00000F48();
}
#endif

#if FW_VERSION == 100
void func_00000E08(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_CA79D58B(arg1);
    }
    func_00000F78(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION != 100
void func_00000ED8(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00000F48();
}
#endif

#if FW_VERSION != 100
void func_00000EF8(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_CA79D58B(arg1);
    }
    func_00000F78(arg0, arg1, var_v0);
}
#endif

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000F48);

INCLUDE_ASM("nonmatchings/opening_plugin", func_00000F78);

#if FW_VERSION == 100
void func_00000FFC(M2C_UNK **arg0) {
    *arg0 = &D_00001648;
    scePaf_4E67BB08();
}
#endif

INCLUDE_ASM("nonmatchings/opening_plugin", func_00001024);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001638);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/opening_plugin", D_00001648);
#endif
