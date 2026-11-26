#include "common.h"
#include "update_plugin_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/update_plugin", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/update_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/update_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/update_plugin", module_start);

#if FW_VERSION < 282
s32 module_stop(void) {
    func_0000495C();
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0000015C(s32 arg0) {
    scePaf_97FDA760(arg0, 1, &D_00006298);
}
#endif

#if FW_VERSION == 100
void func_0000015C(s32 arg0) {
    scePaf_C9831AFF("update_plugin_main\n");
    scePaf_97FDA760(arg0, 1, &D_000059F8);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/update_plugin", func_0000019C);

INCLUDE_ASM("nonmatchings/update_plugin", func_0000023C);

INCLUDE_ASM("nonmatchings/update_plugin", func_00000260);

INCLUDE_ASM("nonmatchings/update_plugin", func_00000290);
#endif

#if FW_VERSION >= 282
s32 module_stop(void) {
    func_00006900();
    return 0;
}
#endif

#if FW_VERSION == 282 || FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/update_plugin", func_0000015C);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void func_0000015C(s32 arg0) {
    scePaf_97FDA760(arg0, 1, &D_00007DF8);
}
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/update_plugin", D_000073E0);

INCLUDE_RODATA("nonmatchings/update_plugin", D_000073E4);

INCLUDE_RODATA("nonmatchings/update_plugin", D_000073EC);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007400);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007418);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007424);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/update_plugin", D_0000743C_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/update_plugin", D_0000743C_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/update_plugin", D_0000743C_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/update_plugin", D_00007454);

INCLUDE_RODATA("nonmatchings/update_plugin", D_0000746C);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007480);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007490);

INCLUDE_RODATA("nonmatchings/update_plugin", D_000074A0);

INCLUDE_RODATA("nonmatchings/update_plugin", D_000074AC);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/update_plugin", D_000074BC_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/update_plugin", D_000074BC_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/update_plugin", D_000074BC_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/update_plugin", D_000074DC);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007510);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007528);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007548);

INCLUDE_RODATA("nonmatchings/update_plugin", D_0000754C);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/update_plugin", D_00007650_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/update_plugin", D_00007650_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/update_plugin", D_00007650_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/update_plugin", D_00007658);

INCLUDE_RODATA("nonmatchings/update_plugin", D_0000765C);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007668);

INCLUDE_RODATA("nonmatchings/update_plugin", D_0000766C);

INCLUDE_RODATA("nonmatchings/update_plugin", D_000076A8);

INCLUDE_RODATA("nonmatchings/update_plugin", D_000076C4);

INCLUDE_RODATA("nonmatchings/update_plugin", D_000076DC);

INCLUDE_RODATA("nonmatchings/update_plugin", D_000076EC);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/update_plugin", D_000077A4_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/update_plugin", D_000077A4_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/update_plugin", D_000077A4_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/update_plugin", D_00007280);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007814);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007290);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007294);
#endif

INCLUDE_RODATA("nonmatchings/update_plugin", D_000072C8);

INCLUDE_RODATA("nonmatchings/update_plugin", D_000072E0);

INCLUDE_RODATA("nonmatchings/update_plugin", D_000072F0);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007310);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007328);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007348);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007360);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007380);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007398);

INCLUDE_RODATA("nonmatchings/update_plugin", D_000073B4);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/update_plugin", func_00000180);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_00000210(void) {
    if ((D_000076C8 != 0) && (D_000076C9 != 0)) {
        vsh_475ABD41(D_000076CC);
        D_000076C9 = 0;
    }
}
#endif

#if FW_VERSION == 250
void func_00000214_v250(void) {
    if ((D_000076C8 != 0) && (D_000076C9 != 0)) {
        vsh_475ABD41(D_000076CC);
        D_000076C9 = 0;
    }
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_0000025C(void) {
    if ((D_000076C8 != 0) && (D_000076C9 == 0)) {
        vsh_388428D3(D_000076CC);
        D_000076C9 = 1;
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00000214);

INCLUDE_ASM("nonmatchings/update_plugin", func_0000028C);

INCLUDE_ASM("nonmatchings/update_plugin", func_000002E0);

INCLUDE_ASM("nonmatchings/update_plugin", func_000003C4);

INCLUDE_ASM("nonmatchings/update_plugin", func_0000040C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/update_plugin", func_0000043C);
#endif

#if FW_VERSION >= 350
void func_00000210(void) {
    if ((D_00008448 != 0) && (D_00008449 != 0)) {
        vsh_0E5502FC(D_0000844C);
        D_00008449 = 0;
    }
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00000210(void) {
    if ((D_00007EC8 != 0) && (D_00007EC9 != 0)) {
        vsh_475ABD41(D_00007ECC);
        D_00007EC9 = 0;
    }
}
#endif

#if FW_VERSION >= 350
void func_00000258(void) {
    if ((D_00008448 != 0) && (D_00008449 == 0)) {
        vsh_8C1E8A38(D_0000844C);
        D_00008449 = 1;
    }
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00000258(void) {
    if ((D_00007EC8 != 0) && (D_00007EC9 == 0)) {
        vsh_388428D3(D_00007ECC);
        D_00007EC9 = 1;
    }
}
#endif

#if FW_VERSION >= 282
void func_000002A4(void) {
    struct Unk_func_000002A4_temp_v0 *temp_v0;

    D_00007ED0 = 1;
    temp_v0 = func_00005364();
    if (temp_v0->unk61 == 0) {

    } else {
        sceLibUpdateDL_4F49C9C1();
    }
    sceKernelWaitSema(D_00007EC0, 1, NULL);
    func_00005CA0(temp_v0);
    func_00000210();
}

void func_00000314(void) {
    func_00000258();
    sceKernelSignalSema(D_00007EC0, 1);
}

INCLUDE_ASM("nonmatchings/update_plugin", func_00000340);

INCLUDE_ASM("nonmatchings/update_plugin", func_0000039C);

INCLUDE_ASM("nonmatchings/update_plugin", func_0000049C);

INCLUDE_ASM("nonmatchings/update_plugin", func_000004DC);
#endif

INCLUDE_RODATA("nonmatchings/update_plugin", D_000073F8);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00000498);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/update_plugin", func_0000050C);
#endif

INCLUDE_RODATA("nonmatchings/update_plugin", D_0000741C);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_00006D18);

INCLUDE_RODATA("nonmatchings/update_plugin", D_0000743C);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00006D34);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00006D48);

INCLUDE_RODATA("nonmatchings/update_plugin", D_000053C8);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00006D80);

INCLUDE_RODATA("nonmatchings/update_plugin", D_000076E0);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00006DB0);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00006DB8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/update_plugin", func_00000320);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_00000320(s32 arg0) {
    void *sp0;
    void **temp_v0;

    func_00005364()->unk84 = 0;
    func_00000F5C();
    sceVshCommonGui_6C81492F(&sp0, sceVshCommonGui_764A5495());
    func_000036EC(&sp0);
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_B45ED019());
    func_000036EC(&sp0);
    sceVshCommonGui_441D55D7(1);
    sceVshCommonGui_80271F41();
    scePaf_F47CA1C2(arg0, 0x10001, func_00001DE0, 0);
    temp_v0 = scePaf_72514A05(arg0, "update_network_check_version_text", 0);
    M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK), 0x70)(temp_v0, 0xF, 0x20);
}
#endif

INCLUDE_RODATA("nonmatchings/update_plugin", D_0000742C);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_00005224);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00005248);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_00005B18);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_0000743C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_00007448);

INCLUDE_RODATA("nonmatchings/update_plugin", D_0000745C);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007484);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007494);

INCLUDE_RODATA("nonmatchings/update_plugin", D_000074BC);

INCLUDE_RODATA("nonmatchings/update_plugin", D_000074C4);

INCLUDE_RODATA("nonmatchings/update_plugin", D_000074CC);
#endif

#if FW_VERSION >= 350
void func_0000086C(s32 arg0) {
    void *sp0;
    void **temp_v0;

    func_00005364()->unk84 = 0;
    func_00001714();
    sceVshCommonGui_2EBB5C2B(&sp0, sceVshCommonGui_30FA68C3());
    func_000036EC(&sp0);
    sceVshCommonGui_11C48509(&sp0, sceVshCommonGui_6BC16C05());
    func_000036EC(&sp0);
    sceVshCommonGui_891DD627(1);
    sceVshCommonGui_6F4C9FDB();
    scePaf_08350B98(arg0, 0x10001, func_00002FE4, 0);
    temp_v0 = scePaf_79A4A59D(arg0, "update_network_check_version_text", 0);
    M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK), 0x70)(temp_v0, 0xF, 0x20);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0000086C(s32 arg0) {
    void *sp0;
    struct Unk_vt_func_0000086C_temp_v0 **temp_v0;

    func_00005364()->unk84 = 0;
    func_00001714();
    sceVshCommonGui_6C81492F(&sp0, sceVshCommonGui_764A5495());
    func_000036EC(&sp0);
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_B45ED019());
    func_000036EC(&sp0);
    sceVshCommonGui_441D55D7(1);
    sceVshCommonGui_80271F41();
    scePaf_F47CA1C2(arg0, 0x10001, func_00002FE4, 0);
    temp_v0 = scePaf_72514A05(arg0, "update_network_check_version_text", 0);
    (*temp_v0)->unk70(temp_v0, 0xF, 0x20);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_00007500);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007520);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007544);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007560);
#endif

INCLUDE_RODATA("nonmatchings/update_plugin", D_0000756C);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007584);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/update_plugin", D_00005294);
#endif

INCLUDE_RODATA("nonmatchings/update_plugin", D_000075A0);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/update_plugin", D_00005BB0);

INCLUDE_RODATA("nonmatchings/update_plugin", D_0000753C);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_000075BC);

INCLUDE_RODATA("nonmatchings/update_plugin", D_000075DC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/update_plugin", D_000052F0);
#endif

INCLUDE_RODATA("nonmatchings/update_plugin", D_000075F4);

INCLUDE_RODATA("nonmatchings/update_plugin", D_0000760C);

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/update_plugin", D_00005BB0);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00005BD0);
#endif

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007624);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007648);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_00005C14);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_00007650);
#endif

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007670);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007678);

INCLUDE_RODATA("nonmatchings/update_plugin", D_0000768C);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_00005C70);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/update_plugin", D_00005398);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_000076AC);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/update_plugin", D_000053C8);
#endif

INCLUDE_RODATA("nonmatchings/update_plugin", D_000076B8);

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_000076E0);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_00007704);

INCLUDE_RODATA("nonmatchings/update_plugin", D_0000771C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_0000541C);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00005430);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_00006DE4);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/update_plugin", D_00006E0C);
#endif

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007744);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_00005D38);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/update_plugin", D_00007760);
#endif

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007788);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/update_plugin", D_0000783C);
#endif

INCLUDE_RODATA("nonmatchings/update_plugin", D_000077A4);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/update_plugin", D_00007D48);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_000070AC);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/update_plugin", D_00006E84);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_00006EC0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/update_plugin", D_00005D84);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_000077AC);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_000077E8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/update_plugin", D_000054A8);
#endif

INCLUDE_RODATA("nonmatchings/update_plugin", D_000077F4);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007800);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/update_plugin", D_000054F4);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00005500);

INCLUDE_RODATA("nonmatchings/update_plugin", D_0000551C);
#endif

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007804);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_00007124);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_0000555C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_00006F10);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00006F28);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00006F54);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00006F80);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/update_plugin", D_00006F90);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/update_plugin", D_0000556C);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00005584);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00005588);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_00005594);

INCLUDE_RODATA("nonmatchings/update_plugin", D_000055B4);

INCLUDE_RODATA("nonmatchings/update_plugin", D_000055D0);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_00007824);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_0000783C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_00007850);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007868);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007894);

INCLUDE_RODATA("nonmatchings/update_plugin", D_000078C0);

INCLUDE_RODATA("nonmatchings/update_plugin", D_000078D0);

INCLUDE_RODATA("nonmatchings/update_plugin", D_000078F0);

INCLUDE_RODATA("nonmatchings/update_plugin", D_0000790C);
#endif

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007930);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007954);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007968);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007980);

INCLUDE_RODATA("nonmatchings/update_plugin", D_000079A0);

INCLUDE_RODATA("nonmatchings/update_plugin", D_000079C4);

INCLUDE_RODATA("nonmatchings/update_plugin", D_000079E4);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007A0C);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/update_plugin", D_00005710);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00005754);
#endif

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007A34);

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_00007A50);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007A94);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/update_plugin", D_000079B0);

INCLUDE_RODATA("nonmatchings/update_plugin", D_000079F4);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/update_plugin", D_00007370);

INCLUDE_RODATA("nonmatchings/update_plugin", D_000073B4_v260);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/update_plugin", D_00007350);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007394_v250);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/update_plugin", D_00007128);

INCLUDE_RODATA("nonmatchings/update_plugin", D_0000716C);

INCLUDE_RODATA("nonmatchings/update_plugin", D_000071B0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/update_plugin", D_00005FE0);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00006024);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/update_plugin", D_00006068);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_00007AD8);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007ADC);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007AE8);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_00007AF4);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/update_plugin", D_00005800);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00005828);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00005850);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_00006104);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00006108);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00006114);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_00007248);

INCLUDE_ASM("nonmatchings/update_plugin", func_000005AC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/update_plugin", func_000003D4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00000928);
#endif

INCLUDE_ASM("nonmatchings/update_plugin", func_00000AB4);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00000748);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/update_plugin", func_000006B8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00000C8C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/update_plugin", D_000080A0);
#endif

INCLUDE_ASM("nonmatchings/update_plugin", func_00000EE8);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00000984);
#endif

#if FW_VERSION == 100
void func_000008A4(void) {
    func_000028A8((s32) &func_00002870);
}
#endif

#if FW_VERSION < 282
void func_000008C4(void) {
    func_00005D10(func_00005364());
}
#else
INCLUDE_ASM("nonmatchings/update_plugin", func_00000F18);

void func_00000FF4(void) {
    func_00005D10(func_00005364());
}
#endif

INCLUDE_ASM("nonmatchings/update_plugin", func_00001018);

INCLUDE_ASM("nonmatchings/update_plugin", func_000010B0);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00000C40);

INCLUDE_ASM("nonmatchings/update_plugin", func_00000D8C);

INCLUDE_ASM("nonmatchings/update_plugin", func_00000E3C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/update_plugin", func_00000A78);

INCLUDE_ASM("nonmatchings/update_plugin", func_00000C3C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/update_plugin", func_000011E0);

INCLUDE_ASM("nonmatchings/update_plugin", func_00001328);

INCLUDE_ASM("nonmatchings/update_plugin", func_000013D8);
#endif

INCLUDE_ASM("nonmatchings/update_plugin", func_000015D8);

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_00000F5C(void) {
    func_00005364()->unk40 = 1;
    scePaf_A0ED77C4(0, &func_00001380, 0, -1, -1, &func_00001290);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00000F5C(void) {
    func_00005364()->unk40 = 1;
    D_00006364 = scePaf_A0ED77C4(0, &func_000011A8, 0, -1, -1, &func_00001290);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00001380);
#endif

#if FW_VERSION == 100
void func_00000F5C(void) {
    scePaf_A0ED77C4(0, &func_00000F94, 0, -1, -1, &func_00001040);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/update_plugin", func_000011A8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00001290);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/update_plugin", func_00000F94);

INCLUDE_ASM("nonmatchings/update_plugin", func_00001040);
#endif

#if FW_VERSION >= 350
void func_00001714(void) {
    func_00005364()->unk40 = 1;
    scePaf_3EDD45EF(0, &func_0000175C, 0, -1, -1, &func_00001940);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00001714(void) {
    M2C_FIELD(func_00005364(), s8 *, 0x40) = 1;
    scePaf_A0ED77C4(0, &func_0000175C, 0, -1, -1, &func_00001940);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/update_plugin", func_0000175C);

INCLUDE_ASM("nonmatchings/update_plugin", func_00001940);
#endif

INCLUDE_ASM("nonmatchings/update_plugin", func_00001B1C);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/update_plugin", func_00001BEC);

void func_00001C20(void) {

}

INCLUDE_ASM("nonmatchings/update_plugin", func_00001C28);
#endif

#if FW_VERSION >= 350
void func_00001CA4(void) {
    s32 temp_s0;

    temp_s0 = D_0000843C;
    D_00008564 = 0;
    if (temp_s0 == 0) {
        D_0000843C = 0;
    } else {
        scePaf_8E7F9126(temp_s0);
        scePaf_6261C0A5(temp_s0);
        D_0000843C = 0;
    }
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void func_00001CA4(void) {
    s32 temp_s0;

    temp_s0 = D_0000845C;
    D_00008584 = 0;
    if (temp_s0 == 0) {
        D_0000845C = 0;
    } else {
        scePaf_4612DB4B(temp_s0);
        scePaf_4E67BB08(temp_s0);
        D_0000845C = 0;
    }
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/update_plugin", func_00001CFC);

void func_00001D54(void) {

}

INCLUDE_ASM("nonmatchings/update_plugin", func_00001D5C);

void func_00001DDC(void) {
    D_00008586 = 0;
}

INCLUDE_ASM("nonmatchings/update_plugin", func_00001DE8);

INCLUDE_ASM("nonmatchings/update_plugin", func_00001E64);

INCLUDE_ASM("nonmatchings/update_plugin", func_00001ED0);
#endif

#if FW_VERSION >= 350
void func_00001FD0(s32 arg0) {
    sceVshCommonUtil_21EF453A(&D_00008454, arg0);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void func_00001FD0(s32 arg0) {
    sceVshCommonUtil_8584376D(&D_00008474, arg0);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00001B10);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/update_plugin", func_00001784);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/update_plugin", func_000014C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/update_plugin", func_00001210);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00001404);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00001A40);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/update_plugin", func_0000142C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_0000214C(s32 arg0) {
    sceKernelPowerTick(0);
    func_00001A40(arg0, func_00005364()->unk4C);
}
#endif

#if FW_VERSION == 201
void func_0000214C(s32 arg0) {
    sceKernelPowerTick(0);
    func_00001A40(arg0, M2C_FIELD(func_00005364(), s32 *, 0x50));
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00002100);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0000214C(s32 arg0) {
    sceKernelPowerTick(0);
    func_0000142C(arg0, func_00005364()->unk44);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/update_plugin", func_00001D14);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00001DD8(void) {
    s32 temp_s0;

    temp_s0 = D_000076BC;
    if (temp_s0 != 0) {
        scePaf_4612DB4B(temp_s0);
        scePaf_4E67BB08(temp_s0);
    }
    D_000076BC = 0;
    func_00000180();
    func_00002100();
}
#endif

#if FW_VERSION == 201
void func_00001DD8(void) {
    s32 temp_s0;

    temp_s0 = D_0000751C;
    if (temp_s0 != 0) {
        scePaf_4612DB4B(temp_s0);
        scePaf_4E67BB08(temp_s0);
    }
    D_0000751C = 0;
    func_00005364();
    func_00000180();
    func_00001D14();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00001E3C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/update_plugin", func_00001E88);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00001E88(s32 arg0) {
    struct Unk_ret_func_00005364 *temp_s0;
    void *temp_v0;

    temp_s0 = func_00005364();
    sceVshCommonGui_4704D5BD(0);
    sceVshCommonGui_1CF884A1();
    scePower_DB62C9CF();
    sceKernelPowerUnlock(0);
    func_00005138(temp_s0);
    scePaf_66907719();
    temp_v0 = scePaf_338C3774(arg0, 1);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, M2C_UNK (**)(M2C_UNK *, M2C_UNK), 4)(&func_00001E3C, 0);
    }
}

void func_00001F10(void) {
    sceKernelDelayThread(0x4C4B40);
}
#endif

#if FW_VERSION == 201
void func_00001F10(void) {
    sceKernelPowerLock(0);
    sceKernelDelayThread(0x3D0900);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00001F38);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_000025CC);

INCLUDE_ASM("nonmatchings/update_plugin", func_00002614);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/update_plugin", func_0000217C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_0000217C(void) {
    scePaf_6B1E90C7();
    sceVshCommonGui_80271F41();
    scePaf_A0ED77C4(0, &func_000025CC, 0, -1, -1, &func_00002614);
}
#endif

#if FW_VERSION == 100
void func_0000214C(s32 arg0) {
    sceKernelPowerTick(0);
    func_0000142C(arg0, M2C_FIELD(func_00005364(), s32 *, 0x40));
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_000016A4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_000017B4(s32 arg0) {
    struct Unk_ret_func_00005364 *temp_a0;
    struct Unk_ret_func_00005364 *temp_v0;

    temp_v0 = func_00005364();
    temp_a0 = temp_v0;
    if (arg0 == 0) {
        func_00004B3C((s32) temp_a0, (s32) &D_00005224);
    } else {
        func_00005D10((s32) temp_v0);
    }
}
#endif

#if FW_VERSION < 201
void func_000017B4(s32 arg0) {
    struct Unk_ret_func_00005364 *temp_a0;
    struct Unk_ret_func_00005364 *temp_v0;

    func_00002128();
    temp_v0 = func_00005364();
    temp_a0 = temp_v0;
    if (arg0 == 0) {
        func_00004B3C((s32) temp_a0, (s32) &D_00005224);
    } else {
        func_00005D10((s32) temp_v0);
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00001B90);

INCLUDE_ASM("nonmatchings/update_plugin", func_00001E54);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/update_plugin", D_000080A0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00001EB4);

void func_0000214C(s32 arg0) {
    sceKernelPowerTick(0);
    func_00001EB4(arg0, func_00005364()->unk4C);
}

INCLUDE_ASM("nonmatchings/update_plugin", func_00002188);
#endif

#if FW_VERSION >= 350
void func_000022C0(void) {
    s32 temp_s0;

    temp_s0 = D_0000843C;
    D_00008564 = 1;
    if (temp_s0 != 0) {
        scePaf_8E7F9126(temp_s0);
        scePaf_6261C0A5(temp_s0);
    }
    D_0000843C = 0;
    func_00000180();
    func_00002188();
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void func_000022C0(void) {
    s32 temp_s0;

    temp_s0 = D_0000845C;
    D_00008584 = 1;
    if (temp_s0 != 0) {
        scePaf_4612DB4B(temp_s0);
        scePaf_4E67BB08(temp_s0);
    }
    D_0000845C = 0;
    func_00000180();
    func_00002188();
}
#endif

#if FW_VERSION == 282
void func_000022C0(void) {
    s32 temp_s0;

    temp_s0 = D_00007EBC;
    if (temp_s0 != 0) {
        scePaf_4612DB4B(temp_s0);
        scePaf_4E67BB08(temp_s0);
    }
    D_00007EBC = 0;
    func_00000180();
    func_00002188();
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/update_plugin", func_0000231C);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/update_plugin", func_00002360);
#endif

#if FW_VERSION == 282
void func_00002360(s32 arg0) {
    s32 temp_s0;
    struct Unk_func_00002360_temp_v0 *temp_v0;

    temp_s0 = func_00005364();
    sceVshCommonGui_4704D5BD(0);
    sceVshCommonGui_1CF884A1();
    scePower_DB62C9CF();
    sceKernelPowerUnlock(0);
    func_0000553C((void *) temp_s0);
    scePaf_66907719();
    temp_v0 = scePaf_338C3774(arg0, 1);
    if (temp_v0 != NULL) {
        temp_v0->unk4(&func_0000231C, 0);
    }
}
#endif

#if FW_VERSION >= 282
void func_000023E8(void) {
    sceKernelDelayThread(0x4C4B40);
}

INCLUDE_ASM("nonmatchings/update_plugin", func_00002408);

s32 func_00002654(void) {
    sceKernelWaitSema(D_00007EC0, 1, NULL);
    sceKernelPowerLock(0);
    sceKernelSignalSema(D_00007EC0, 1);
    return 0;
}

INCLUDE_ASM("nonmatchings/update_plugin", func_0000269C);
#endif

#if FW_VERSION >= 350
void func_00002770(void) {
    scePaf_0CFD27E9();
    sceVshCommonGui_6F4C9FDB();
    scePaf_3EDD45EF(0, (s32 *) func_00002654, 0, -1, -1, &func_0000269C);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00002770(void) {
    scePaf_6B1E90C7();
    sceVshCommonGui_80271F41();
    scePaf_A0ED77C4(0, (s32 *) func_00002654, 0, -1, -1, &func_0000269C);
}
#endif

#if FW_VERSION >= 282
void func_000027B8(s32 arg0) {
    s32 temp_a0;

    temp_a0 = func_00005364();
    if (arg0 == 0) {
        D_00007ED0 = 0;
        if (D_00007EC4 != 1) {
            func_00002188();
        } else {
            func_00002770();
        }
    } else {
        func_00005D10(temp_a0);
    }
}

void func_00002824(s32 arg0) {
    s32 temp_a0;
    s32 temp_v0;

    temp_v0 = func_00005364();
    temp_a0 = temp_v0;
    if (arg0 == 0) {
        func_00004B3C(temp_a0, (s32) &D_00007520);
    } else {
        func_00005D10(temp_v0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/update_plugin", func_00002870);

INCLUDE_ASM("nonmatchings/update_plugin", func_000028A8);

#if FW_VERSION < 282
void func_000018C0(s32 arg0) {
    void *temp_v0;

    temp_v0 = scePaf_338C3774(arg0, 1);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, M2C_UNK (**)(M2C_UNK *), 0x10)(&func_000016A4);
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00001C64(s32 arg0) {
    void *temp_v0;

    temp_v0 = scePaf_338C3774(arg0, 1);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, M2C_UNK (**)(M2C_UNK *, M2C_UNK *, M2C_UNK), 0xC)(&D_00005BB0, &func_00000D8C, 0);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_00002440(void) {
    func_00005D10(func_00005364());
}

INCLUDE_ASM("nonmatchings/update_plugin", func_00002464);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/update_plugin", func_0000292C);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void func_0000292C(s32 arg0) {
    void *temp_v0;

    temp_v0 = scePaf_338C3774(arg0, 1);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, M2C_UNK (**)(void (*)(s32)), 0x10)(func_000027B8);
    }
    sceVshCommonUtil_0587F20C(&D_00008474, 4, 0);
}
#endif

#if FW_VERSION == 282
void func_0000292C(s32 arg0) {
    struct Unk_func_0000292C_temp_v0 *temp_v0;

    temp_v0 = scePaf_338C3774(arg0, 1);
    if (temp_v0 != NULL) {
        temp_v0->unk10(func_000027B8);
    }
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/update_plugin", func_00002960);
#endif

#if FW_VERSION == 282
void func_00002960(s32 arg0) {
    struct Unk_func_00002960_temp_v0 *temp_v0;

    temp_v0 = scePaf_338C3774(arg0, 1);
    if (temp_v0 != NULL) {
        temp_v0->unkC(&D_000075BC, &func_00001328, 0);
    }
}
#endif

#if FW_VERSION >= 282
void func_000029A0(void) {
    func_00005D10(func_00005364());
}

INCLUDE_ASM("nonmatchings/update_plugin", func_000029C4);
#endif

INCLUDE_ASM("nonmatchings/update_plugin", func_00002B24);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_000019CC);
#else
INCLUDE_ASM("nonmatchings/update_plugin", func_00002BFC);
#endif

INCLUDE_ASM("nonmatchings/update_plugin", func_00002D84);

INCLUDE_ASM("nonmatchings/update_plugin", func_00002F68);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/update_plugin", func_00001DE0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00001DE0(s32 arg0, void *arg1) {
    if ((u32) (M2C_FIELD(arg1, u8 *, 8) - 5) >= 2U) {

    } else {
        func_00000AB4(arg0, (s32) arg1);
    }
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/update_plugin", func_00002A98);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/update_plugin", func_00001E14);

INCLUDE_ASM("nonmatchings/update_plugin", func_00002128);
#endif

#if FW_VERSION >= 282
void func_00002FE4(s32 arg0, struct Unk_func_00002FE4_1 *arg1) {
    if ((u32) (arg1->unk8 - 5) >= 2U) {

    } else {
        func_00000AB4(arg0, (s32) arg1);
    }
}
#endif

INCLUDE_ASM("nonmatchings/update_plugin", func_0000301C);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00002558);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_0000268C);
#endif

#if FW_VERSION == 150
s32 func_0000268C(void) {
    void *sp0;
    s32 temp_v0;
    s32 var_a1;

    temp_v0 = sceIoDevctl(&D_00006114, 0x02125802, NULL, 0U, &sp0, 4U);
    var_a1 = temp_v0;
    if (temp_v0 == 0) {
        var_a1 = 1;
        if (sp0 != 0x11) {
            var_a1 = (sp0 == 0x41) * 2;
        }
    }
    return var_a1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_000026EC);

INCLUDE_ASM("nonmatchings/update_plugin", func_0000277C);

INCLUDE_ASM("nonmatchings/update_plugin", func_00002808);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00003084);
#endif

#if FW_VERSION == 201
void func_00003084(s32 arg0) {
    struct Unk_ret_func_00005364 *temp_v0;

    temp_v0 = func_00005364();
    if (M2C_FIELD(temp_v0, u8 *, 0x88) != 0) {

    } else {
        scePaf_EAA5AFF6(arg0, 1);
        func_00004B3C((s32) temp_v0, (s32) &D_00007788);
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0000283C(void) {
    scePaf_5FAC9869();
}

void func_00002858(void) {
    scePaf_545FE2DA();
}
#endif

#if FW_VERSION == 152
void func_00002870_v152(s32 arg0) {
    struct Unk_ret_func_00005364 *temp_v0;

    temp_v0 = func_00005364();
    if (temp_v0->pad50[0x20] != 0) {

    } else {
        scePaf_EAA5AFF6(arg0, 1);
        func_00004B3C((s32) temp_v0, (s32) &D_00007788);
    }
}
#endif

#if FW_VERSION == 150
void func_00002874_v150(s32 arg0) {
    struct Unk_ret_func_00005364 *temp_v0;

    temp_v0 = func_00005364();
    if (temp_v0->pad50[0x20] != 0) {

    } else {
        scePaf_EAA5AFF6(arg0, 1);
        func_00004B3C((s32) temp_v0, (s32) &D_00007788);
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000028D4(s32 arg0) {
    if (func_00005364()->unk40 != 0) {

    } else {
        scePaf_EAA5AFF6(arg0, 3);
        func_000028A8((s32) &func_00002870);
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00002204);

void func_0000226C(void) {
    func_00002204(1, 0xFFFF);
}

void func_0000228C(void) {
    func_00002204(0, 0xFFFF);
}
#else
INCLUDE_ASM("nonmatchings/update_plugin", func_00003068);

INCLUDE_ASM("nonmatchings/update_plugin", func_0000319C);

INCLUDE_ASM("nonmatchings/update_plugin", func_000031FC);

INCLUDE_ASM("nonmatchings/update_plugin", func_0000328C);

INCLUDE_ASM("nonmatchings/update_plugin", func_00003318);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/update_plugin", func_00003358);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00003358(s32 arg0) {
    struct Unk_func_00003358_temp_v0 *temp_v0;

    temp_v0 = func_00005364();
    if (temp_v0->unk84 != 0) {

    } else {
        scePaf_EAA5AFF6(arg0, 1);
        func_00004B3C((s32) temp_v0, (s32) &D_00007788);
    }
}
#endif

#if FW_VERSION >= 350
void func_000033B8(s32 arg0) {
    if (func_00005364()->unk40 != 0) {

    } else {
        scePaf_6A82A8C6(arg0, 3);
        func_000028A8((s32) &func_00002870);
    }
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_000033B8(s32 arg0) {
    if (func_00005364()->unk40 != 0) {

    } else {
        scePaf_EAA5AFF6(arg0, 3);
        func_000028A8((s32) &func_00002870);
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00003408);

void func_000034B0(void) {
    func_00003408(1, 0xFFFF);
}

void func_000034D0(void) {
    func_00003408(0, 0xFFFF);
}
#endif

INCLUDE_ASM("nonmatchings/update_plugin", func_000034F0);

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_000023F8(void) {
    func_00003838();
}

INCLUDE_ASM("nonmatchings/update_plugin", func_00002414);
#endif

#if FW_VERSION >= 282
void func_00003520(void) {
    func_000038C8();
}

INCLUDE_ASM("nonmatchings/update_plugin", func_0000353C);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/update_plugin", func_00003608);

INCLUDE_ASM("nonmatchings/update_plugin", func_00003658);
#endif

INCLUDE_ASM("nonmatchings/update_plugin", func_000036EC);

INCLUDE_ASM("nonmatchings/update_plugin", func_0000371C);

INCLUDE_ASM("nonmatchings/update_plugin", func_000037B8);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00003778);

INCLUDE_ASM("nonmatchings/update_plugin", func_00003838);

INCLUDE_ASM("nonmatchings/update_plugin", func_00003854);

INCLUDE_ASM("nonmatchings/update_plugin", func_00003A58);
#endif

#if FW_VERSION < 250
void func_000023F8(void) {
    func_00002730();
}

INCLUDE_ASM("nonmatchings/update_plugin", func_00002414);

INCLUDE_ASM("nonmatchings/update_plugin", func_00003608);

INCLUDE_ASM("nonmatchings/update_plugin", func_00003658);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00003808);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00003BB0);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00003B88);

INCLUDE_ASM("nonmatchings/update_plugin", func_00003C64);

INCLUDE_ASM("nonmatchings/update_plugin", func_00003D9C);

INCLUDE_ASM("nonmatchings/update_plugin", func_00003DF0);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/update_plugin", func_00002730);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/update_plugin", func_000038C8);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/update_plugin", func_00002784);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/update_plugin", func_000038F4);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00003B04);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/update_plugin", func_00002874);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/update_plugin", func_00003C64);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/update_plugin", func_00002920);

INCLUDE_ASM("nonmatchings/update_plugin", func_000029F0);
#endif

#if FW_VERSION < 260
void *func_00002C28(void **arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *var_a0;
    void *var_v0;
    void *var_v1;

    var_a0 = *arg0;
    var_v0 = NULL;
    if (var_a0 != NULL) {
        temp_v0 = M2C_FIELD(var_a0, void **, 4);
        if (temp_v0 != NULL) {
            var_v1 = temp_v0;
            do {
                temp_v0_2 = M2C_FIELD(var_v1, void **, 4);
                var_a0 = var_v1;
                var_v1 = temp_v0_2;
            } while (temp_v0_2 != NULL);
        }
        var_v0 = var_a0;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/update_plugin", func_00002C60);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00003D38);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/update_plugin", D_0000746C_v260);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007470);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/update_plugin", D_0000746C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00004120);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00003BB0);

INCLUDE_ASM("nonmatchings/update_plugin", func_00003C64);

INCLUDE_ASM("nonmatchings/update_plugin", func_00003D40);

INCLUDE_ASM("nonmatchings/update_plugin", func_00003E78);

INCLUDE_ASM("nonmatchings/update_plugin", func_00003ECC);

INCLUDE_ASM("nonmatchings/update_plugin", func_00003F20);

INCLUDE_ASM("nonmatchings/update_plugin", func_00004308);
#endif

INCLUDE_ASM("nonmatchings/update_plugin", func_0000439C);

INCLUDE_ASM("nonmatchings/update_plugin", func_000043D4);

INCLUDE_ASM("nonmatchings/update_plugin", func_00004490);

INCLUDE_ASM("nonmatchings/update_plugin", func_0000454C);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007B94);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007BA8);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007BBC);

INCLUDE_ASM("nonmatchings/update_plugin", func_000046B4);

INCLUDE_ASM("nonmatchings/update_plugin", func_00004714);

INCLUDE_ASM("nonmatchings/update_plugin", func_00004740);

INCLUDE_ASM("nonmatchings/update_plugin", func_0000493C);

INCLUDE_ASM("nonmatchings/update_plugin", func_00004A80);

INCLUDE_ASM("nonmatchings/update_plugin", func_00004AB8);

INCLUDE_ASM("nonmatchings/update_plugin", func_00004B3C);

INCLUDE_ASM("nonmatchings/update_plugin", func_00004BF0);

INCLUDE_ASM("nonmatchings/update_plugin", func_00004C24);

INCLUDE_ASM("nonmatchings/update_plugin", func_00004C94);

INCLUDE_ASM("nonmatchings/update_plugin", func_00004CC4);

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00004BFC(s32 arg0) {
    func_00004D40();
    func_00004EC0(arg0 + 4, 0);
}
#endif

#if FW_VERSION >= 282
void func_00004D0C(s32 arg0) {
    func_00004D40();
    func_00004FD0(arg0 + 4, 0);
}
#endif

INCLUDE_ASM("nonmatchings/update_plugin", func_00004D40);

void func_00004E0C(struct Unk_func_00004E0C_0 *arg0, s32 arg1) {
    if (arg0->unk8 >= arg1) {

    } else {
        func_00005130((s32) arg0, arg1);
    }
}

INCLUDE_ASM("nonmatchings/update_plugin", func_00004E40);

INCLUDE_ASM("nonmatchings/update_plugin", func_00004EC8);

void func_00004F5C(struct Unk_func_00004F5C_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    func_000034F0((arg0->unk0 + (arg0->unk4 * 0xC)) - 0xC);
    temp_v1 = arg0->unk4 - 1;
    temp_v0 = arg0->unk8;
    arg0->unk4 = temp_v1;
    if (temp_v1 >= (temp_v0 - 0x14)) {

    } else {
        func_00005130((s32) arg0, temp_v0 - 0xA);
    }
}

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00004EC0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00004FD0);
#endif

INCLUDE_ASM("nonmatchings/update_plugin", func_00005130);

INCLUDE_ASM("nonmatchings/update_plugin", func_000052DC);

INCLUDE_ASM("nonmatchings/update_plugin", func_00005364);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/update_plugin", func_00003C04);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00003C04(void) {
    s32 temp_s0;

    temp_s0 = D_000076DC;
    if (temp_s0 == 0) {
        D_000076DC = 0;
    } else {
        func_000034F0(temp_s0 + 0x64);
        func_000034F0(temp_s0 + 0x14);
        func_00006170(temp_s0 + 4);
        scePaf_4E67BB08(temp_s0);
        D_000076DC = 0;
    }
}
#endif

#if FW_VERSION == 201
void func_00003C04(void) {
    s32 temp_s0;

    temp_s0 = D_00007538;
    if (temp_s0 == 0) {
        D_00007538 = 0;
    } else {
        func_000034F0(temp_s0 + 0x68);
        func_000034F0(temp_s0 + 0x14);
        func_00006170(temp_s0 + 4);
        scePaf_4E67BB08(temp_s0);
        D_00007538 = 0;
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_000050A0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_000053A4);

void func_00005138(void *arg0) {
    sceVshCommonGui_72E652AA(M2C_FIELD(arg0, s32 *, 0x58));
}
#endif

#if FW_VERSION == 201
void func_00005138(void *arg0) {
    sceVshCommonGui_72E652AA(M2C_FIELD(arg0, s32 *, 0x5C));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00005154);
#endif

#if FW_VERSION == 201
s32 func_00005530(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/update_plugin", func_00005538);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_00007368);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007378);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007394);

INCLUDE_RODATA("nonmatchings/update_plugin", D_000073AC);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/update_plugin", D_000073BC);
#endif

#if FW_VERSION >= 350
void func_000053BC(void) {
    s32 temp_s0;

    temp_s0 = D_00008570;
    if (temp_s0 == 0) {
        D_00008570 = 0;
    } else {
        func_000034F0(temp_s0 + 0x64);
        func_000034F0(temp_s0 + 0x14);
        func_00006170(temp_s0 + 4);
        scePaf_6261C0A5(temp_s0);
        D_00008570 = 0;
    }
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_000053BC(void) {
    s32 temp_s0;

    temp_s0 = D_00007EDC;
    if (temp_s0 == 0) {
        D_00007EDC = 0;
    } else {
        func_000034F0(temp_s0 + 0x64);
        func_000034F0(temp_s0 + 0x14);
        func_00006170(temp_s0 + 4);
        scePaf_4E67BB08(temp_s0);
        D_00007EDC = 0;
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/update_plugin", func_0000541C);

INCLUDE_ASM("nonmatchings/update_plugin", func_000054B4);
#endif

#if FW_VERSION >= 350
void func_0000553C(struct Unk_func_0000553C_0 *arg0) {
    sceVshCommonGui_8F414E35(arg0->unk58);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0000553C(struct Unk_func_0000553C_0 *arg0) {
    sceVshCommonGui_72E652AA(arg0->unk58);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00005558);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007C14);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007C24);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007C40);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007C58);
#endif

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007C68);

INCLUDE_ASM("nonmatchings/update_plugin", func_000058D8);

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00003F14(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x60) != 0) {
        M2C_FIELD(arg0, u8 *, 0x60) = 0U;
        sceIoClose(M2C_FIELD(arg0, s32 *, 0x5C));
    }
}
#endif

#if FW_VERSION == 201
void func_00003F14(void *arg0) {
    sceIoClose(M2C_FIELD(arg0, s32 *, 0x60));
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00003F14(void *arg0) {
    sceIoClose(M2C_FIELD(arg0, s32 *, 0x50));
}
#endif

#if FW_VERSION == 100
void func_00003F14(void *arg0) {
    sceIoClose(M2C_FIELD(arg0, s32 *, 0x4C));
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_00003F30(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x5C);
    if (temp_v0 >= 0) {
        var_v1 = sceIoWrite(temp_v0);
    }
    return var_v1;
}
#endif

#if FW_VERSION == 201
s32 func_00003F30(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x60);
    if (temp_v0 >= 0) {
        var_v1 = sceIoWrite(temp_v0);
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00003F30(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x50);
    if (temp_v0 >= 0) {
        var_v1 = sceIoWrite(temp_v0);
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_00005920(void) {
    scePaf_5FAC9869();
}

void func_0000593C(void) {
    scePaf_545FE2DA();
}
#endif

#if FW_VERSION == 100
s32 func_00003F30(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x4C);
    if (temp_v0 >= 0) {
        var_v1 = sceIoWrite(temp_v0);
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 282
void func_00005B74(struct Unk_func_00005B74_0 *arg0) {
    if (arg0->unk60 != 0) {
        arg0->unk60 = 0U;
        sceIoClose(arg0->unk5C);
    }
}

s32 func_00005BA4(struct Unk_func_00005BA4_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = arg0->unk5C;
    if (temp_v0 >= 0) {
        var_v1 = sceIoWrite(temp_v0);
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 350
void func_00005BD8(void) {
    scePaf_3AC3E06A();
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00005BD8(void) {
    scePaf_5FAC9869();
}
#endif

#if FW_VERSION >= 350
void func_00005BF4(void) {
    scePaf_4729E549();
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00005BF4(void) {
    scePaf_545FE2DA();
}
#endif

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007C84);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/update_plugin", D_00005904);
#endif

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007C88);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00005958);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_000059E8(void *arg0) {
    s32 temp_s1;

    if (M2C_FIELD(arg0, u8 *, 0x61) != 0) {
        M2C_FIELD(arg0, u8 *, 0x61) = 0U;
        sceHttpEnd();
        sceLibUpdateDL_D6A09757();
        temp_s1 = M2C_FIELD(arg0, s32 *, 0x80);
        if (temp_s1 == 0) {
            M2C_FIELD(arg0, s32 *, 0x80) = 0;
        } else {
            scePaf_4612DB4B(temp_s1);
            scePaf_4E67BB08(temp_s1);
            M2C_FIELD(arg0, s32 *, 0x80) = 0;
        }
    }
    return 0;
}
#endif

#if FW_VERSION == 201
s32 func_000059E8(void *arg0) {
    s32 temp_s1;

    if (M2C_FIELD(arg0, u8 *, 0x64) != 0) {
        M2C_FIELD(arg0, u8 *, 0x64) = 0U;
        sceHttpEnd();
        sceLibUpdateDL_D6A09757();
        temp_s1 = M2C_FIELD(arg0, s32 *, 0x84);
        if (temp_s1 == 0) {
            M2C_FIELD(arg0, s32 *, 0x84) = 0;
        } else {
            scePaf_4612DB4B(temp_s1);
            scePaf_4E67BB08(temp_s1);
            M2C_FIELD(arg0, s32 *, 0x84) = 0;
        }
    }
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/update_plugin", func_00005C10);
#endif

#if FW_VERSION >= 350
s32 func_00005CA0(struct Unk_func_00005CA0_0 *arg0) {
    s32 temp_s1;

    if (arg0->unk61 != 0) {
        arg0->unk61 = 0;
        sceLibUpdateDL_D6A09757();
        temp_s1 = arg0->unk80;
        if (temp_s1 == 0) {
            arg0->unk80 = 0;
        } else {
            scePaf_8E7F9126(temp_s1);
            scePaf_6261C0A5(temp_s1);
            arg0->unk80 = 0;
        }
    }
    return 0;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
s32 func_00005CA0(struct Unk_func_00005CA0_0 *arg0) {
    s32 temp_s1;

    if (arg0->unk61 != 0) {
        arg0->unk61 = 0;
        sceLibUpdateDL_D6A09757();
        temp_s1 = arg0->unk80;
        if (temp_s1 == 0) {
            arg0->unk80 = 0;
        } else {
            scePaf_4612DB4B(temp_s1);
            scePaf_4E67BB08(temp_s1);
            arg0->unk80 = 0;
        }
    }
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_00005CA0(struct Unk_func_00005CA0_0 *arg0) {
    s32 temp_s1;

    if (arg0->unk61 != 0) {
        arg0->unk61 = 0U;
        sceHttpEnd();
        sceLibUpdateDL_D6A09757();
        temp_s1 = arg0->unk80;
        if (temp_s1 == 0) {
            arg0->unk80 = 0;
        } else {
            scePaf_4612DB4B(temp_s1);
            scePaf_4E67BB08(temp_s1);
            arg0->unk80 = 0;
        }
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/update_plugin", func_00005D10);

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_00004010(void) {
    s32 var_v1;
    void *temp_v0;

    temp_v0 = scePaf_338C3774(scePaf_D4FAE7D0("system_plugin"), 1);
    var_v1 = 0;
    if (temp_v0 != NULL) {
        var_v1 = M2C_FIELD(temp_v0, s32 (**)(), 0x7C)();
    }
    return var_v1;
}
#endif

#if FW_VERSION == 201
s32 func_00004010(void) {
    s32 var_v1;
    void *temp_v0;

    temp_v0 = scePaf_338C3774(scePaf_D4FAE7D0(&D_000073BC), 1);
    var_v1 = 0;
    if (temp_v0 != NULL) {
        var_v1 = M2C_FIELD(temp_v0, s32 (**)(), 0x78)();
    }
    return var_v1;
}
#endif

#if FW_VERSION < 201
s32 func_00004010(void) {
    s32 var_v1;
    void *temp_v0;

    temp_v0 = scePaf_338C3774(scePaf_D4FAE7D0("system_plugin"), 1);
    var_v1 = 0;
    if (temp_v0 != NULL) {
        var_v1 = M2C_FIELD(temp_v0, s32 (**)(), 0x5C)();
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 350
s32 func_00005DD4(void) {
    s32 var_v1;
    void *temp_v0;

    temp_v0 = scePaf_DCE3D225(scePaf_88784487("system_plugin"), 1);
    var_v1 = 0;
    if (temp_v0 != NULL) {
        var_v1 = M2C_FIELD(temp_v0, s32 (**)(), 0x7C)();
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
s32 func_00005DD4(void) {
    s32 var_v1;
    void *temp_v0;

    temp_v0 = scePaf_338C3774(scePaf_D4FAE7D0("system_plugin"), 1);
    var_v1 = 0;
    if (temp_v0 != NULL) {
        var_v1 = M2C_FIELD(temp_v0, s32 (**)(), 0x7C)();
    }
    return var_v1;
}
#endif

#if FW_VERSION == 282
s32 func_00005DD4(void) {
    s32 var_v1;
    struct Unk_func_00005DD4_temp_v0 *temp_v0;

    temp_v0 = scePaf_338C3774(scePaf_D4FAE7D0("system_plugin"), 1);
    var_v1 = 0;
    if (temp_v0 != NULL) {
        var_v1 = temp_v0->unk7C();
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/update_plugin", func_00005E1C);

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/update_plugin", func_00004184);
#endif

INCLUDE_ASM("nonmatchings/update_plugin", func_00005F34);

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_00005E90(void) {
    s32 temp_s0;

    temp_s0 = func_00005364()->unk44;
    if (temp_s0 == 0) {

    } else {
        scePaf_4612DB4B(temp_s0);
        scePaf_4E67BB08(temp_s0);
    }
}
#endif

#if FW_VERSION < 282
void func_000043A0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION >= 350
void func_00006118(void) {
    s32 temp_s0;

    temp_s0 = func_00005364()->unk44;
    if (temp_s0 == 0) {

    } else {
        scePaf_8E7F9126(temp_s0);
        scePaf_6261C0A5(temp_s0);
    }
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00006118(void) {
    s32 temp_s0;

    temp_s0 = func_00005364()->unk44;
    if (temp_s0 == 0) {

    } else {
        scePaf_4612DB4B(temp_s0);
        scePaf_4E67BB08(temp_s0);
    }
}
#endif

#if FW_VERSION >= 282
void func_00006160(struct Unk_func_00006160_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/update_plugin", func_00006170);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/update_plugin", func_0000442C);
#endif

INCLUDE_ASM("nonmatchings/update_plugin", func_000061EC);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/update_plugin", func_00004C44);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/update_plugin", func_000045D4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/update_plugin", func_00004870);
#endif

INCLUDE_ASM("nonmatchings/update_plugin", func_000062D4);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/update_plugin", func_00006294);

INCLUDE_RODATA("nonmatchings/update_plugin", D_00007C50);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/update_plugin", func_0000632C);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/update_plugin", func_00006900);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/update_plugin", D_00007CF0);
#endif
