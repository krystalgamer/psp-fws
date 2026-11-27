/* lang: c++ */
/* cflags: -Os */
#include "common.h"
#include "sysconf_plugin_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", module_start);

#if FW_VERSION < 282
s32 module_stop(void) {
    func_0000EF58();
    return 0;
}
#else
s32 module_stop(void) {
    func_00017BD4();
    return 0;
}
#endif

void func_0000015C(void) {
    func_0000091C();
}

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB40_v352);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB44_v352);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB54_v352);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB5C_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB40_v351);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB44_v351);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB54_v351);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB5C_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB40_v350);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB44_v350);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB54_v350);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB5C_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB70);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB88);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB94);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001ABA0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001ABAC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001ABB8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001ABC8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001ABDC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001ABF0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AC00);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AC10);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AC28);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AC40);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AC54);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AC74);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AC90);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001ACD4);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001ACD8_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001ACD8_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001ACD8_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AEBC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AED0);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AEE0_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AEE0_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AEE0_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AEE8);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AEFC_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AEFC_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AEFC_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AF00);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AF18);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AF24);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AF28);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AF6C);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AFCC_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AFCC_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AFCC_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AFF4);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B0C4_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B0C4_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B0C4_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B0DC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B0E4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B0F8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B17C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B40C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00018D9C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B460);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00018DD0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00018DD4);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000178);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000001D8);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000214);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000001CC);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000218);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000274);

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_00000340(s32 arg0) {
    func_00017694((s32) &D_0001F31C, arg0);
    return 0;
}

void func_00000368(s32 arg0) {
    D_00014F1C = arg0;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000340_v271);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000048C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000054C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000005EC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000610);

void func_0000073C(void) {
    func_00000610(1, 0xFFFF);
}

void func_0000075C_v271(void) {
    func_00000610(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000077C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000007EC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000824);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000006F4);

void func_000008C0(void **arg0, void *arg1) {
    *arg0 = arg1;
    func_00000824(arg0);
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000075C);
#endif

#if FW_VERSION >= 282
s32 func_0000030C(s32 arg0) {
    func_00017694((s32) &D_0001F31C, arg0);
    return 0;
}

void func_00000334(s32 arg0) {
    D_0001F354 = arg0;
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000368);
#endif

#if FW_VERSION >= 350
void func_00000368(s32 arg0) {
    sceVshCommonUtil_21EF453A(&D_00021D24, arg0);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
void func_00000368(s32 arg0) {
    sce_paf_private_printf(&D_0001A160, &D_0001A14C, "PrepareUnload");
    sceVshCommonUtil_8584376D(&D_00020874, arg0);
}

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A14C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A160);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000003B4);
#endif

#if FW_VERSION >= 330
void func_000004DC(s32 arg0) {
    D_00021380 = arg0;
}

void func_000004E8(void) {

}

void func_000004F0(void) {

}

void func_000004F8(void) {

}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000340);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000048C);
#endif

#if FW_VERSION >= 310
void func_0000070C(void) {
    func_0000A96C();
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000740);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000054C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000005EC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000610);

void func_0000073C(void) {
    func_00000610(1, 0xFFFF);
}

void func_0000075C(void) {
    func_00000610(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000077C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000007AC);

void func_00000824(void **arg0) {
    struct Unk_func_00000824_temp_a0 *temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != NULL) {
        temp_a0->unk4 = (s32) (temp_a0->unk4 + 1);
    }
}
#endif

#if FW_VERSION >= 310
void func_000008C0(void **arg0, void *arg1) {
    *arg0 = arg1;
    func_00000824(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000844);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
void func_000008C0(void **arg0, void *arg1) {
    *arg0 = arg1;
    func_00000824(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000008E0);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00018E24);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00018E30);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00018E48);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00018E60);

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0000FD5C);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00018E7C);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0000FD84);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00018E90);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00018EA8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00018EC0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00018EDC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00018EF4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00018F0C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00018F28);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00018F40);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00018F58);

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0000FE80);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00018F74);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0000FEA8);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00018F88);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00018FA0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00018FB8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00018FD4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00018FEC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019004);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019020);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019034);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001904C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019064);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019074);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0000FFC0);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019088);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000190A0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000190B8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000190D4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000190EC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019104);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00011214);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012E4C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00017A38);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00017A4C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00017A64);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00017A80);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00017AA0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00017AC0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00017AE0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00017B00);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00017B24);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00017B44);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00017B68);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00017B8C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00017BB4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00017BD8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00017BFC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00017C20);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00017C48);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00017C70);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00017C98);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00017CBC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00017CE0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00017D08);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00017D2C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012E78);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012E90);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012EA8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012EC4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012ED8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012EEC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012F04);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012F1C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012F38);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012F50);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012F68);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012F84);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019120);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019144);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019170);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019184);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001919C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000191B4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000191D0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000191EC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001920C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019228);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019248);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019268);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019288);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000192A8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000192CC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000192EC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019310);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019330);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019354);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019378);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000193A0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000193C0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000193E0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019404);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019428);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001944C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019464);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001947C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019498);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000194AC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000194C4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000194DC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000194F8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019510);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019528);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019544);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019564);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019580);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001959C);

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000100C4);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000195BC);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000100F4);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000195D4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000195F0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001960C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001962C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019648);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019664);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019684);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000101E4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00010208);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000196A8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000196CC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000196F0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019714);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019730);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001974C);

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000102F4);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001976C);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00010324);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019784);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000197A0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000197BC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000197DC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000197F8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019814);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019834);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001984C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019864);

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001043C);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019880);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00010464);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019894);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000198AC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000198C4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000198E0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000198F8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019910);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001992C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019948);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019964);

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001056C);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019984);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001059C);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001999C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000199B8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000199D4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000199F4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019A10);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019A2C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019A4C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019A74);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019A9C);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00014EC8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00014EE4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00014F00);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00018420);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00014F1C_v250);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00014F3C);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019848);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001985C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019874);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001988C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000198A0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000198B8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000198D0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000198EC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019904);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001991C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019AC4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019AE0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019AFC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019B18);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019B38);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019B50);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019B64);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019B7C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019B94);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019BA8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019BC0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019BD8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019BF4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019C0C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019C24);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C594);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C5AC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C5C8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C5E4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C5FC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C618);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C634);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C654);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C670);
#endif

#if FW_VERSION == 311
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C68C_v311);
#endif

#if FW_VERSION == 310
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C68C_v310);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019C40);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019C54);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019C6C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019C84);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019CA0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019CB8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019CD0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019CF0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019D08);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00011990);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019D24);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019D44);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019D68);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019D8C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019DB0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019DD4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019DF0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019E08);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019B18);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000108A0);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000108BC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000108C8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000108D4);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000108E4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000108EC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000031C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000374);

s32 func_000003CC(s32 arg0) {
    func_00017694((s32) &D_0001F31C, arg0);
    return 0;
}

void func_000003F4(s32 arg0) {
    D_00014F1C = arg0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000428);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000400);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000004C0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000580);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000005C0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00000580(void) {
    func_0000E680((s32) &D_0001F31C);
}
#endif

#if FW_VERSION == 100
void func_00000580(void) {
    func_0000E680((s32) &D_0001F31C);
    sceUsbStop(&D_000108D4, 0U, NULL);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000005EC);
#endif

#if FW_VERSION < 201
void func_000005EC(s32 arg0) {
    _ZN3paf6Module12SetInterfaceEiPv(arg0, 1, (s32) &D_00012708);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000005D8);

void func_00000684(void) {
    func_000005D8(1, 0xFFFF);
}

void func_000006A4(void) {
    func_000005D8(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000077C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000007EC);

void func_00000864(void **arg0) {
    void *temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != NULL) {
        M2C_FIELD(temp_a0, s32 *, 4) = (s32) (M2C_FIELD(temp_a0, s32 *, 4) + 1);
    }
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000006F4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
void func_00000900(void **arg0, void *arg1) {
    *arg0 = arg1;
    func_00000864(arg0);
}
#endif

#if FW_VERSION == 150 || FW_VERSION == 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000075C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
void func_0000075C(void) {
    func_00000A94();
    _ZN3vsh12RemoveConfigEi(0xF);
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
void func_0000075C(void) {
    func_00000A94();
    _ZN3vsh12RemoveConfigEi(3);
}
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00010910);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00010928);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00010940);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00010958);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00010974);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000770);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019E20);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A510);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000091C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000A34);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000A94);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000AE8);

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000A60);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_00000A60(s32 arg0) {
    vsh_53120F49(D_00018214, arg0);
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
void func_00000A60(s32 arg0) {
    sceVshCommonUtil_53120F49(D_00014F20, arg0);
}
#endif

#if FW_VERSION >= 350
void func_00000B24(s32 arg0) {
    vsh_125B1B72(D_00021E34, arg0);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00000B24(s32 arg0) {
    vsh_53120F49(D_0001F394, arg0);
}
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000B48);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000B94);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000C84);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
void func_00000DE4(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000DEC);

void func_00000E78(void) {
    _ZN3vsh26ShowButtonNavigation_EnterEb(0);
    _ZN3vsh25ShowButtonNavigation_BackEb(0);
    func_00017A18((struct Unk_func_00017A18_0 *) &D_0001F31C);
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000EA8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000EF8);

void func_00001028(void) {
    func_0000FDF8();
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001044);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001110);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
void func_00001110(void) {
    func_0000EAF0((s32) &D_0001F31C, D_00015974, 0x100, 0);
    _ZN3vsh12BusyIcon_DecEv();
    InputDevice_PspPad_Unlock();
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001869C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000186A8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000186AC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001178);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001150);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000117C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001208);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000122C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000012AC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000012E4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001310);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000133C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000014A0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000AC4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000B78);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000C74);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001010);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000106C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000DD8);
#endif

#if FW_VERSION >= 350
void func_00000E64(void) {
    sceVshCommonGui_F5A16B4D(0);
    sceVshCommonGui_891DD627(0);
    func_00017A18((struct Unk_func_00017A18_0 *) &D_0001F31C);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00000E64(void) {
    _ZN3vsh26ShowButtonNavigation_EnterEb(0);
    _ZN3vsh25ShowButtonNavigation_BackEb(0);
    func_00017A18((Unk_func_00017A18_0*) &D_0001F31C);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000E94);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000EE4);

void func_00001008(void) {
    func_0001604C();
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001024);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000010E0);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000013F8);
#endif

#if FW_VERSION < 260 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A53C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000137BC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000137E0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00013808);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001380C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00013818);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001514);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000018D4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001838);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001934);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001A14);

void func_00001A90(void) {
    func_00001A14(1, 0xFFFF);
}

void func_00001AB0(void) {
    func_00001A14(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001AD0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_00001954(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = sce_paf_private_wcslen(arg1);
    }
    func_000019A4(arg0, arg1, var_v0);
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000019A4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_00001C54(M2C_UNK **arg0) {
    *arg0 = &D_000187C8;
}

void func_00001C64(M2C_UNK **arg0) {
    *arg0 = &D_000187C8;
    _ZdlPv(arg0);
}

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000187C8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001386C);

s32 func_00001A58(void) {
    vsh_4A619A1D();
    vsh_2695A5B8(0);
    sceUsbStart(&D_0001386C, 0U, NULL);
    D_00018244 = sceKernelCreateEventFlag("SceVshUsbBoot", 0U, 0U, NULL);
    sceUsbStart(&D_0001A690, 0U, NULL);
    sceUsbstorBootRegisterNotify(D_00018244);
    sceUsbstorBootSetCapacity(0x800000);
    sceUsbActivate(0x1C8U);
    return 0;
}

s32 func_00001AE4(void) {
    sceUsbDeactivate();
    sceUsbstorBootUnregisterNotify(D_00018244);
    sceUsbStop(&D_0001A690, 0U, NULL);
    sceKernelDeleteEventFlag(D_00018244);
    sceUsbStop(&D_0001386C, 0U, NULL);
    vsh_2695A5B8(1);
    vsh_3E00F3B4();
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A548);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A54C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001130);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000121C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000012A8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000012CC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000134C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001384);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000013B0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001508);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A618);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001590);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000188C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000019AC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000019CC);

void func_00001A48(void) {
    func_000019CC(1, 0xFFFF);
}

void func_00001A68(void) {
    func_000019CC(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001A88);
#endif

#if FW_VERSION >= 350
void func_00001B08(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_5E4447F6(arg1);
    }
    func_00001B58(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00001B08(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = sce_paf_private_wcslen(arg1);
    }
    func_00001B58(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001B58);

void func_00001C0C(M2C_UNK **arg0) {
    *arg0 = &D_0001A668;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001C1C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00001C1C(M2C_UNK **arg0) {
    *arg0 = &D_0001A668;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A668);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A670);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001C44);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
s32 func_00001C44(void) {
    vsh_4A619A1D();
    vsh_2695A5B8(0);
    sceUsbStart(&D_0001A670, 0U, NULL);
    D_0001F3DC = sceKernelCreateEventFlag("SceVshUsbBoot", 0U, 0U, NULL);
    sceUsbStart(&D_0001A690, 0U, NULL);
    sceUsbstorBootRegisterNotify(D_0001F3DC);
    sceUsbstorBootSetCapacity(0x800000);
    sceUsbActivate(0x1C8U);
    return 0;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001CD0);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
s32 func_00001CD0(void) {
    sceUsbDeactivate();
    sceVshBridge_C62E0B0D(D_000214E4);
    sceUsbstorBootUnregisterNotify(D_000214E4);
    sceUsbStop(&D_0001A690, 0U, NULL);
    sceKernelDeleteEventFlag(D_000214E4);
    sceUsbStop(&D_0001A670, 0U, NULL);
    vsh_2695A5B8(1);
    vsh_3E00F3B4();
    return 0;
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
s32 func_00001CD0(void) {
    sceUsbDeactivate();
    vshUsbstorMsUnregisterEventFlag(D_000222E0);
    sceUsbstorBootUnregisterNotify(D_000222E0);
    sceUsbStop(&D_0001A690, 0U, NULL);
    sceKernelDeleteEventFlag(D_000222E0);
    sceUsbStop(&D_0001A670, 0U, NULL);
    vsh_2695A5B8(1);
    vsh_3E00F3B4();
    return 0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
s32 func_00001CD0(void) {
    sceUsbDeactivate();
    sceUsbstorBootUnregisterNotify(D_0001F3DC);
    sceUsbStop(&D_0001A690, 0U, NULL);
    sceKernelDeleteEventFlag(D_0001F3DC);
    sceUsbStop(&D_0001A670, 0U, NULL);
    vsh_2695A5B8(1);
    vsh_3E00F3B4();
    return 0;
}
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A690);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00011B34);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A6A0);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00011B54);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00010A0C);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A6B0);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A6BC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A6E4);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000138E8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001390C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00013924);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A6EC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A710);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A728);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001D21C);
#endif

#if FW_VERSION >= 340
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C73C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00010A90);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00010A9C);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A73C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A744);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00010ABC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A750);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A758);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A76C);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001CEB8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001CED8);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A784);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A7A0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A7BC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A7E0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A804);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A818);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A520);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000AC4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A830);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001D324);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001D34C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001D40);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001DF0);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001C90);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000B64);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00000BC0);
#endif

#if FW_VERSION == 100
void func_00000C00(void) {

}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001E90);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001FFC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00002058);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000021C4);

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00000C34(void) {
    sceKernelPowerTick(1);
}
#endif

#if FW_VERSION == 100
void func_00000C34(void) {
    sceKernelPowerTick(0);
}
#endif

#if FW_VERSION >= 282
void func_000021F8(void) {
    sceKernelPowerTick(1);
}
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00002214);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00002780);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000283C);

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000030B4);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00003100);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000031D8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00003290);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00003380);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00002A80);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00002B7C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001710);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001994);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000016C8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001AEC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00002CE8);
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000035EC);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 340
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000035CC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00002DE4);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00002F34);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00001C9C);
#else
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00002FFC);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00003708);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00003BA8);
#endif

#if FW_VERSION < 201
void func_00002294(void) {

}
#endif

#if FW_VERSION < 282
void func_0000229C(void) {
    func_00002454();
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000336C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000022B8);
#endif

#if FW_VERSION >= 282
void func_000037C4(void) {
    func_00003990();
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000037E0);
#endif

#if FW_VERSION >= 350
void func_000038AC(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_C1B0AA0D(arg1);
    }
    func_00003BCC(arg0, arg1, var_v0);
}
#else
void func_000038AC(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = sce_paf_private_strlen(arg1);
    }
    func_00003BCC(arg0, arg1, var_v0);
}
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000038FC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00002454);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00003538);
#else
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00003990);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000024A8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000039BC);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00003BCC);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00003A6C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00003B48);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00003C80);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00003CD4);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00002598);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00003894);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00002644);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00002714);
#endif

#if FW_VERSION < 260
void *func_0000294C(void **arg0) {
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
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00002984);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00003C78);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00003D54);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00003E8C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00003EE0);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A88C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A890);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A894);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A898);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A89C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A8A0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A8A4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A8A8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A8AC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A8B0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A8B4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A8B8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A8BC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A8C0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A8C4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A8C8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A8CC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A8D0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A8D4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A8D8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A8DC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A8E0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A8E4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A8E8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A8EC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A8F0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A8F4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A8F8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A8FC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A900);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A904);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A908);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A90C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A910);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A914);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A918);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A91C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A920);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A924);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A928);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A92C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A930);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A934);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A938);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A93C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A940);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A944);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A948);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A94C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A950);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A954);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A958);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A95C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A960);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A964);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A968);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A96C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A970);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A974);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A978);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A97C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A980);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A984);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A988);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A98C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A990);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A994);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A998);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A99C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A9A0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A9A4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A9A8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A9AC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A9B0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A9B4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A9B8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A9BC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A9C0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A9C4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A9C8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A9CC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A9D0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A9D4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A9D8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A9DC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A9E0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A9E4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A9E8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A9EC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A9F0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A9F4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A9F8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A9FC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA00);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA04);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA08);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA0C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA10);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA14);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA18);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA1C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA20);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA24);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA28);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA2C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA30);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA34);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA38);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA3C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA40);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA44);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA48);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA4C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA50);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA54);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA58);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA5C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA60);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA64);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA68);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA6C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA70);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA74);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA78);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA7C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA80);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA84);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA88);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA8C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA90);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA94);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA98);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AA9C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AAA0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AAA4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AAA8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AAAC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AAB0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AAB4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AAB8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AABC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AAC0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AAC4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AAC8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AACC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AAD0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AAD4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AAD8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AADC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AAE0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AAE4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AAE8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AAEC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AAF0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AAF4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AAF8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AAFC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB00);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB04);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB08);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB0C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB10);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB14);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB18);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB1C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB20);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB24);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB28);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB2C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB30);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB34);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB38);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB3C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB40);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB44);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB48);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB4C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB50);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB54);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB58);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB5C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB60);

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00010ECC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00010EE8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00010F08);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00010F28);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AB64);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00003F34);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004248);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00002F14);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004280);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00002FEC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000042E8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000031C8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00003278);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000044E4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000033D0);
#endif

#if FW_VERSION < 260
void func_000034E4(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000034EC);
#endif

#if FW_VERSION < 201
void func_000034EC(s32 arg0) {
    _ZN3paf9PhHandler11SetCallBackEiPFvPNS_8PhWidgetEPNS_7PhEventEPvES5_(arg0, 0x10001, (s32) func_000034E4, 0);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00003518);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004738);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000035A4);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00003624);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000047DC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004814);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000036A4);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000370C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000377C);
#endif

#if FW_VERSION < 201
void func_0000377C(s32 arg0) {
    _ZN3paf9PhHandler11SetCallBackEiPFvPNS_8PhWidgetEPNS_7PhEventEPvES5_(arg0, 0x10001, (s32) func_000034E4, 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000486C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000037A8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00003834);
#endif

#if FW_VERSION < 201
void func_00003888(void) {

}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004360);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000044B4);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004678);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000471C);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004D80);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001ACD8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001ACDC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001ACF8);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004698);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000481C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000048A8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000048CC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000494C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004984);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000049B0);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004B24);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004A78_v260);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000110F4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004988);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004C18);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004D34);

void func_00004DB0(void) {
    func_00004D34(1, 0xFFFF);
}

void func_00004DD0(void) {
    func_00004D34(0, 0xFFFF);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004AD4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004B30);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004B80);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004BB4);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004C04);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004A7C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00003890);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00003970);

void func_00003A0C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = sce_paf_private_wcslen(arg1);
    }
    func_00003A5C(arg0, arg1, var_v0);
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00003A5C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00003B10);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001110C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00011128);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00011144);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00011160);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000159DC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000159F8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004ACC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000050D8);

void func_00005464(void) {
    void *sp0;
    _ZN3vsh31SetButtonNavigationString_EnterEPKw(&sp0, _ZN3vsh15GetString_EnterEv());
    func_00000B48(&sp0);
    _ZN3vsh30SetButtonNavigationString_BackEPKw(&sp0, _ZN3vsh14GetString_BackEv());
    func_00000B48(&sp0);
    _ZN3vsh26ShowButtonNavigation_EnterEb(1);
    _ZN3vsh25ShowButtonNavigation_BackEb(1);
    InputDevice_PspPad_Unlock();
}
#endif

#if FW_VERSION == 260
void func_0000502C_v260(void) {
    InputDevice_PspPad_Unlock();
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00005048);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00015A28);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00015A44);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00015A5C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00015A6C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00015A8C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00015A9C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00015AB0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00015AC0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00015AEC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00015AF4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00015B04);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00015B30);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00015B3C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00015B64);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00015B88);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001117C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00011188);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001902C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019040);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001ACA0);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019064_v260);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019080);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000190A4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000190C4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000190E0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019100);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019124);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019140);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019158);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019178);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019194);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000191B4);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00015BB0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AEC8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00015BE0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00015BEC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00015BFC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00015C14);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00015C2C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00015C44);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00015C5C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000162E4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000162EC);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00015C84);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00015C8C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00015C9C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00015CC4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00015CC8);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AE8C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AE90);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AE94);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004C14);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004C9C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00005008);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000504C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00005168);

void func_00005280(void) {
    D_00019F98 = 0;
}

void func_0000528C(void) {
    InputDevice_PspPad_Unlock();
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000052A8);

void func_0000530C(void) {
    func_00004ACC(0);
}

void func_00005328(void) {
    D_00019F98 = _ZN3paf4View4FindEPKc(&D_00015A8C);
    InputDevice_PspPad_Unlock();
    _ZN3vsh12BusyIcon_DecEv();
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000535C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00005408);

s32 func_00005494(s32 arg0) {
    void *sp0;
    s32 var_s0;
    s32 var_s1;

    var_s0 = arg0;
    var_s1 = 0;
    _ZN3vsh9PowerLockC1Ei(&sp0, 0);
    if (var_s0 > 0) {
        do {
            var_s0 -= 1;
            var_s1 = sceKernelDelayThread(0xF4240U);
        } while (var_s0 != 0);
    }
    _ZN3vsh9PowerLockD1Ev(&sp0);
    return var_s1;
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000054F8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000056E4);

void func_00005734(void) {
    s32 temp_v0;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_00015A9C);
    if (temp_v0 != 0) {
        _ZN3paf4View6UnloadEPS0_PFvPKcE(temp_v0, &func_0000576C);
    }
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000576C);

s32 func_000057C0(void) {
    void *temp_s0;

    temp_s0 = D_000181AC;
    if (temp_s0 != NULL) {
        M2C_FIELD(temp_s0, M2C_UNK (**)(M2C_UNK), 0xA4)(1);
        M2C_FIELD(temp_s0, M2C_UNK (**)(M2C_UNK), 0xBC)(1);
        M2C_FIELD(temp_s0, M2C_UNK (**)(M2C_UNK), 0xC8)(1);
    }
    return 0;
}

s32 func_00005814(void) {
    void *temp_s0;

    temp_s0 = D_000181AC;
    if (temp_s0 != NULL) {
        M2C_FIELD(temp_s0, M2C_UNK (**)(), 0xCC)();
        M2C_FIELD(temp_s0, M2C_UNK (**)(), 0xC0)();
        M2C_FIELD(temp_s0, M2C_UNK (**)(), 0xA8)();
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00005868);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00005974);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000059EC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00005B18);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00005B8C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00003B10);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00003BD8);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000054FC);
#endif

#if FW_VERSION < 260
void func_0000407C(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004084);
#endif

#if FW_VERSION < 201
void func_00004084(s32 arg0) {
    _ZN3paf9PhHandler11SetCallBackEiPFvPNS_8PhWidgetEPNS_7PhEventEPvES5_(arg0, 0x10001, (s32) func_0000407C, 0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000048E4);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004AB4);

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_000050E8(void) {
    func_00016A7C(D_0001F3F4, 0);
    func_00016DD4(0);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000413C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004B40);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004B64);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00005194);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000051E0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004244);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004BE4);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004C1C);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004C48);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004128);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00004128(s32 arg0) {
    _ZN3paf9PhHandler11SetCallBackEiPFvPNS_8PhWidgetEPNS_7PhEventEPvES5_(arg0, 0x10001, (s32) func_0000407C, 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00005238);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004154);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004360);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000043B4(void) {

}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004D10);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AEC8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000549C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00005958);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004334);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000443C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004648);

void func_000046F4(void) {

}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000046FC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004D64);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004EB0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004FCC);

void func_00005048(void) {
    func_00004FCC(1, 0xFFFF);
}

void func_00005068(void) {
    func_00004FCC(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00005088);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000050D8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000510C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000515C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AEE0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AEFC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00005190);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000052C4);
#endif

#if FW_VERSION >= 350
void func_00005650(void) {
    void *sp0;
    sceVshCommonGui_2EBB5C2B(&sp0, sceVshCommonGui_30FA68C3());
    func_00000B48(&sp0);
    sceVshCommonGui_11C48509(&sp0, sceVshCommonGui_EC899EBE());
    func_00000B48(&sp0);
    sceVshCommonGui_F5A16B4D(1);
    sceVshCommonGui_891DD627(1);
    scePaf_648CA0C5();
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00005650(void) {
    void *sp0;
    _ZN3vsh31SetButtonNavigationString_EnterEPKw(&sp0, _ZN3vsh15GetString_EnterEv());
    func_00000B48(&sp0);
    _ZN3vsh30SetButtonNavigationString_BackEPKw(&sp0, _ZN3vsh14GetString_BackEv());
    func_00000B48(&sp0);
    _ZN3vsh26ShowButtonNavigation_EnterEb(1);
    _ZN3vsh25ShowButtonNavigation_BackEb(1);
    InputDevice_PspPad_Unlock();
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000056B4);
#endif

#if FW_VERSION >= 350
void func_000056B4(void) {
    scePaf_8B38372A(M2C_VFIELD(&D_0001F31C, s32, 4), &D_0001AEE0);
    scePaf_39E62C88(M2C_VFIELD(&D_0001F31C, s32, 4), &D_0001AEFC, 0, 0);
    scePaf_A013540A(M2C_VFIELD(&D_0001F31C, s32, 4), &D_0001AEFC);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AF74);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AF78);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AF8C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AFB0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AFCC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AFF0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B010);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B02C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B04C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B070);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B08C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B0A4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B0C4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B0E0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B100);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B124);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B130);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B13C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B14C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B164);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B180);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B188);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B194);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B198);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B19C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B1A0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B1A4);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00005718);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00005890);
#endif

#if FW_VERSION >= 350
void func_00006064(void) {
    sceVshCommonUtil_DA88D006(&D_00021D24, 0x100, 0);
    func_0000A81C((s32) &func_00006098);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void func_00006064(void) {
    sceVshCommonUtil_9E42444E(&D_00020874, 0x100, 0);
    func_0000A81C((s32) &func_00006098);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006098);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00005B68);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00005D30);

void func_00005DBC(void) {
    func_00016A7C(D_0001F418, 0);
    func_00016DD4(0);
}
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00005DE8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00005E68);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00005EB4);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00005EE0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000060CC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006120);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006658);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006688);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004A78);
#else
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000066F8);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000067BC);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000660C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006BAC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000703C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007084);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006748);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000068C8);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000067BC_v260);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000714C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007220);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007478);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000751C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00005B00);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000484C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004B44);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004BA0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004C3C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004D08);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004D68);
#endif

#if FW_VERSION == 271
void func_00004E4C(s32 arg0) {
    func_000068C8(1, 0xFFFF);
}
#endif

#if FW_VERSION == 260
void func_00004E4C(s32 arg0) {
    func_000067BC_v260(1, 0xFFFF);
}
#endif

#if FW_VERSION < 260
void func_00004E4C(s32 arg0) {
    _ZNK3paf8PhWidget8GetChildEi(arg0, 1);
}
#endif

#if FW_VERSION == 271
void func_00006858(void) {
    func_000068C8(0, 0xFFFF);
}
#endif

#if FW_VERSION == 260
void func_00006858(void) {
    func_000067BC_v260(0, 0xFFFF);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000067F8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006914);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000695C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006A40);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007658);

void func_000076D4(void) {
    func_00007658(1, 0xFFFF);
}

void func_000076F4(void) {
    func_00007658(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007714);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007848);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007894);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007AE4);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007C3C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001DD30);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007C9C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007DCC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007E58);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007E7C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007EFC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007F34);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007F60);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000800C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001DE10);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008060);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008370);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006AB4);

void func_00006B30(void) {
    func_00006AB4(1, 0xFFFF);
}

void func_00006B50(void) {
    func_00006AB4(0, 0xFFFF);
}
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B1B4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B1D0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B1EC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B20C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B228);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006878);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006948);

s32 func_00006A10(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x1D0);
        if (temp_v0 != 0) {
            var_v1 = _ZNK3paf8PhWidget8GetChildEi(temp_v0, 1);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012364);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012380);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000123A0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000123BC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000123D8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000123F4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012410);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001242C);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00011260);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00011284);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006B70);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006C38);
#endif

#if FW_VERSION >= 350
s32 func_00006CFC(struct Unk_func_00006CFC_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    if (arg0 != NULL) {
        temp_v0 = arg0->unk1D0;
        if (temp_v0 != 0) {
            var_v1 = scePaf_503585A4(temp_v0, 1);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 func_00006CFC(struct Unk_func_00006CFC_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    if (arg0 != NULL) {
        temp_v0 = arg0->unk1D0;
        if (temp_v0 != 0) {
            var_v1 = _ZNK3paf8PhWidget8GetChildEi(temp_v0, 1);
        }
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006D38);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00005014);
#else
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006EDC);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006F58);
#else
void func_00006F58(void *arg0) {
    scePaf_8B38372A(D_00021C70, M2C_FIELD(M2C_FIELD(arg0, void **, 0x1D0), s32 **, 4));
    scePaf_648CA0C5();
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006C74);
#endif

#if FW_VERSION < 260
s32 func_000050A0(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000050A8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00005198);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_000052A4(void) {
    InputDevice_PspPad_Unlock();
    _ZN3vsh12BusyIcon_DecEv();
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006D98);
#endif

#if FW_VERSION < 250
void func_000052A4(void) {
    InputDevice_PspPad_Unlock();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004E3C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000052C0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006F88);
#endif

#if FW_VERSION >= 350
void func_00007088(void) {
    scePaf_648CA0C5();
    sceVshCommonGui_E4ED451E();
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00007088(void) {
    InputDevice_PspPad_Unlock();
    _ZN3vsh12BusyIcon_DecEv();
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000070AC);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007228);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000502C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001249C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000124B4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000124B8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000124DC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000072D8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B2B4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B2CC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B2D0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B2F4);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B320);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001252C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012558);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001257C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B344);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B370);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B394);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B3C0);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000063D8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000053D0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007384);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007744);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B4C8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B4DC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000077BC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B5B0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B5BC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B5D0);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000114C8);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B5D4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B5E4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B608);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00014468);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000127D0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B614);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B638);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B654);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B658);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B65C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B660);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B664);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B668);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B66C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007E28);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00005D50);
#else
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007F0C);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000082D0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008430);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006264);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000064BC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000086AC);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000088C8);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000085D0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006544);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000893C);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008AEC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008BC4);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006808);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006890);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00004BA0);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008A34);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008A90);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008AE0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008B68);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008EC8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008F0C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009028);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000067E0);

void func_0000680C(void) {

}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006814);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006898);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_000069F8(void) {
    D_0001E0EC = 0;
}
#endif

#if FW_VERSION < 260
void func_000069F8(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006A00);
#endif

#if FW_VERSION < 201
void func_00006A00(s32 arg0) {
    _ZN3paf9PhHandler11SetCallBackEiPFvPNS_8PhWidgetEPNS_7PhEventEPvES5_(arg0, 0x10001, (s32) func_000069F8, 0);
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009168);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009184);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000091F8);

void func_0000930C(void) {
    D_0001E0EC = _ZN3paf4View4FindEPKc(&D_00019820);
    InputDevice_PspPad_Unlock();
    _ZN3vsh12BusyIcon_DecEv();
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009340);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000093E4);

s32 func_00009478(s32 arg0) {
    void *sp0;
    s32 var_s0;
    s32 var_s1;

    var_s0 = arg0;
    var_s1 = 0;
    _ZN3vsh9PowerLockC1Ei(&sp0, 0);
    if (var_s0 > 0) {
        do {
            var_s0 -= 1;
            var_s1 = sceKernelDelayThread(0xF4240U);
        } while (var_s0 != 0);
    }
    _ZN3vsh9PowerLockD1Ev(&sp0);
    return var_s1;
}

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019820);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019830);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019844);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000094DC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000096C8);

void func_00009718(void) {
    s32 temp_v0;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_00019830);
    if (temp_v0 != 0) {
        _ZN3paf4View6UnloadEPS0_PFvPKcE(temp_v0, &func_00009750);
    }
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009750);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000097A4);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009814);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B470);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019880_v260);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019888);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019898);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B4B4);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000198C4_v260);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009884);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000099A0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009A18);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009C14);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009E6C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009F10);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009F5C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006814);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006898);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A128);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008BF8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008CA0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008D44);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008DE0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008E3C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008E90);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008F18);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009278);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000092BC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000093D8);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009AC0);
#endif

#if FW_VERSION == 282
void func_000094F0(void) {
    D_0001F55C = 0;
}
#endif

#if FW_VERSION >= 282
void func_000094FC(void) {
    func_00008DE0(0);
}

void func_00009518(void) {
    func_00008DE0(0);
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009534);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000095A8);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009CC4);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009D3C);
#endif

#if FW_VERSION == 282
void func_000096BC(void) {
    D_0001F55C = _ZN3paf4View4FindEPKc(&D_0001B720);
    InputDevice_PspPad_Unlock();
    _ZN3vsh12BusyIcon_DecEv();
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000096F0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009794);
#endif

#if FW_VERSION >= 350
s32 func_00009828(s32 arg0) {
    void *sp0;
    s32 var_s0;
    s32 var_s1;

    var_s0 = arg0;
    var_s1 = 0;
    sceVshCommonUtil_094B0219(&sp0, 0);
    if (var_s0 > 0) {
        do {
            var_s0 -= 1;
            var_s1 = sceKernelDelayThread(0xF4240U);
        } while (var_s0 != 0);
    }
    sceVshCommonUtil_D24DD449(&sp0);
    return var_s1;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 func_00009828(s32 arg0) {
    void *sp0;
    s32 var_s0;
    s32 var_s1;

    var_s0 = arg0;
    var_s1 = 0;
    _ZN3vsh9PowerLockC1Ei(&sp0, 0);
    if (var_s0 > 0) {
        do {
            var_s0 -= 1;
            var_s1 = sceKernelDelayThread(0xF4240U);
        } while (var_s0 != 0);
    }
    _ZN3vsh9PowerLockD1Ev(&sp0);
    return var_s1;
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B720);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B730);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B744);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000988C);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A124);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A1A8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009A78);

void func_00009AC8(void) {
    s32 temp_v0;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_0001B730);
    if (temp_v0 != 0) {
        _ZN3paf4View6UnloadEPS0_PFvPKcE(temp_v0, &func_00009B00);
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009B00);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009B54);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009BC4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B780);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B788);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B798);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B7C4);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009C34);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009D78);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009DF0);
#endif

#if FW_VERSION >= 350
void func_0000A7F4(s32 arg0) {
    sceVshCommonUtil_F6567B66(&D_00022044, 0x1000, arg0);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void func_0000A7F4(s32 arg0) {
    sceVshCommonUtil_0587F20C(&D_00020B70, 0x1000, arg0);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A81C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A868);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A96C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A068);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A2C0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A364);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A3B0);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000ADCC);

void func_0000AE48(void) {
    func_0000ADCC(1, 0xFFFF);
}

void func_0000AE68(void) {
    func_0000ADCC(0, 0xFFFF);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A3CC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A47C);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B038);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A57C);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A608);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008104);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006AB8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A694);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A6B8);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000081A8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000081E0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006BB8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A738);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A770);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A79C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006C90);
#endif

#if FW_VERSION < 201
void func_00006C90(s32 arg0) {
    _ZN3paf9PhHandler11SetCallBackEiPFvPNS_8PhWidgetEPNS_7PhEventEPvES5_(arg0, 0x10001, (s32) func_000069F8, 0);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006CBC);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A848);

#if FW_VERSION < 201
void func_00006D7C(void) {

}
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001156C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001158C);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B938);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008340);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008460);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A590);

void func_0000A60C(void) {
    func_0000A590(1, 0xFFFF);
}

void func_0000A62C(void) {
    func_0000A590(0, 0xFFFF);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006D84);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00006E44);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A89C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A9B4);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A9E4);

void func_0000AA60(void) {
    func_0000A9E4(1, 0xFFFF);
}

void func_0000AA80(void) {
    func_0000A9E4(0, 0xFFFF);
}
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000AAA0);

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000AA38);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000731C);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B66C_v271);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B670);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B67C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B688);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B6A0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B6BC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000AF94);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B97C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B980);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B98C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B998);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B9B0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001B9CC);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B080);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B0A8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B0D0);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A4EC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008AEC_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008B3C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008B70);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008BC0);
#endif

#if FW_VERSION < 201
void func_00007438(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_000074D0((s32) arg0);
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007458);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000074D0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000074F0);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000AE44);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B0F8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B148);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B17C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B1CC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B200);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B2B4);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000C018);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BA14);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BA18);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BA1C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BA20);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00011678);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000116AC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000116DC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00011704);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BA24);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007578);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000078BC);
#endif

#if FW_VERSION < 260
void func_000079C4(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000079CC);
#endif

#if FW_VERSION < 201
void func_000079CC(s32 arg0) {
    _ZN3paf9PhHandler11SetCallBackEiPFvPNS_8PhWidgetEPNS_7PhEventEPvES5_(arg0, 0x10001, (s32) func_000079C4, 0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B4FC);
#endif

#if FW_VERSION < 260 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B634);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A9B4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008FCC_v201);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007A84);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B6C0);
#endif

#if FW_VERSION < 260 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B6E4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009070);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000090A8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007B84);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007BEC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B764);
#endif

#if (FW_VERSION >= 201 && FW_VERSION < 260) || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B79C);
#endif

#if FW_VERSION < 201
void func_0000B79C(s32 arg0) {
    _ZN3paf9PhHandler11SetCallBackEiPFvPNS_8PhWidgetEPNS_7PhEventEPvES5_(arg0, 0x10001, (s32) func_000079C4, 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009100);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007E80);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007C88);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B7C8);
#endif

#if FW_VERSION < 260 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B98C);
#endif

#if FW_VERSION < 201
void func_00007EB4(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012930);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012934);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012938);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001293C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012940);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012974);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000129A4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000129CC);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B08C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B1C4);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B250);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B274);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B2F4);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B32C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B358);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B51C);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BB84);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009334);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009604);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B82C);

void func_0000B8A8(void) {
    func_0000B82C(1, 0xFFFF);
}

void func_0000B8C8(void) {
    func_0000B82C(0, 0xFFFF);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009630);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000966C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000096C4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007EBC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007F68);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00007FD8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000097F0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000098A8);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00016338);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00016348);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B9E0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000BC6C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000BC9C);

void func_0000BD18(void) {
    func_0000BC9C(1, 0xFFFF);
}

void func_0000BD38(void) {
    func_0000BC9C(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000BD58);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000BD94);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000BDEC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000BE28);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000BEDC);
#endif

#if FW_VERSION < 260 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BB9C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BBAC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000080C8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008508);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008338);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BBBC);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012A58);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BBDC);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000117C4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00014740);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000BB48);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009988);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BBD0);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BBDC);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001E86C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001E87C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008418);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BBE4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BC20);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000BFB8);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BC3C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000C280);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BC58);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000C354);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000C49C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000C970);

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BE84);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BD2C);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00014860);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001486C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001487C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001488C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001489C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000148B0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000148C0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000148D0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000148E0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000148F8);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BD34);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BD40);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BD50);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BD64);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BD74);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BD84);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BD94);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BDAC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BDC4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BDD0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BDE0);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BDEC);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001491C);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BDF8);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BE10);

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00011980);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BE38);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00011980);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BE54);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00011980);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BE84);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019F58);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019F6C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019F88);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019FA8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019FD0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00019FF4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A018);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A030);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001666C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BE78);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BE84);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BE90);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BEA0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BEB8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BED4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BEF8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BF18);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BF38);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BF50);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BF60);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BF70);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BF94);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BFAC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BFCC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BFE0);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00011A24);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BFE4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BFF4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C018);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00014A6C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C024);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C048);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A14C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C06C);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C090);

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001DF3C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001DF54);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001E8E0);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001E188);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001DF84);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001ED50);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001D4B0);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BD98);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A190);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00016798);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00014AD4);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012D3C);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012CFC);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012D6C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00011ACC);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C0B0);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C0D8);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001E910);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001ED80);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001D4E0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00014AF8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00014B0C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012D8C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012DA4);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00011AEC);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C0DC);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C0F0);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012DF4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012E08);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012E1C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012E30);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012E44);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00014BAC);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BE8C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BEA4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BEBC);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A280);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00014BC0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012E58);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012E7C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C104);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C118);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C12C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C140);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C154);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C168);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C17C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C190);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C1A4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C1BC);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001EA58);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001D618);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C1D4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C204);
#endif

#if FW_VERSION == 311
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001EF18_v311);
#endif

#if FW_VERSION == 310
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001EF18_v310);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001D66C);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C228);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BF30);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BF4C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001BF78);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A2EC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A308);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A324);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A340);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A35C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A374);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A390);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A3B0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A3D4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A3F0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A40C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A42C);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C100);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C124);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A448);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A460);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A47C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A494);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A4B0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00014C2C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00014C48);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00014C74);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00014CA0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00014CBC);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C248);

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C264);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C290);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001EB40);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001E3E4);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001E1E0);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001EFC4);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001D718);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001D724);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C2BC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C2D8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C2F4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C310);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C32C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C344);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C360);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001D814);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001D830);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001D840);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C380);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C3A4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C3C0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C3DC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C3FC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C418);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C43C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C45C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C474);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C490);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C4A8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C4C4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C4E0);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C4FC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C524);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C54C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C56C);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012F4C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C590);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C5BC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C5DC);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001EEF4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001EF20);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001E798);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001E7C4);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001E594);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001E5C0);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001F378);
#endif

#if FW_VERSION == 311
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001F3A4_v311);
#endif

#if FW_VERSION == 310
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001F3A4_v310);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001DAD8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001DB04);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C2E0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C308);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C330);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A658);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A67C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A6A0_v260);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A6B0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A6D0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A6E8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A710);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A720);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C3C8);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A744_v260);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A75C);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A784_v260);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A7A4);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C420);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A7C4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A7D8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A7F0);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C490);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C4B4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C4D8);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A818_v260);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A820);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A848);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A870);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C54C_v271);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C570);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C598);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C5B8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C5D0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C5F4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C620);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C644);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C658);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C684);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C69C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C6BC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C6DC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C70C);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A898_v260);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A8C0_v260);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A8D8_v260);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A900_v260);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A928_v260);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A93C_v260);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A954_v260);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001A974_v260);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001639C);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00016A7C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00016A9C);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00014DB8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00014DD8);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012F84);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012FA0);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012F44);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012F60);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012FB4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012FD0);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C5F8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C620);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C648);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00011C1C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C658);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C674);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C68C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C6B0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C6C0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C6E0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C6F8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C71C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C738);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C754);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C768);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C780);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C7A8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C7CC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C7F0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C7F8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C81C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C840);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C864);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C888);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C8B0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C8D0);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C8E8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C90C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C938);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C95C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C970);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C99C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C9B4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C9D4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C9F4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001CA24);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001CA50);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000C994);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000CA48);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000CB08);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A504);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000CB48);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000CBBC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000CC1C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000CCB0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000CD40);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000CE0C);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000C1C0);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000093CC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009420);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008F64);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00008FCC);
#else
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000CE6C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000CF80);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D09C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009264);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000CF10);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D090);

s32 func_0000D194(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x1D0);
        if (temp_v0 != 0) {
            var_v1 = _ZNK3paf8PhWidget8GetChildEi(temp_v0, 1);
        }
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D1D0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D2E0);

void func_0000D3F4(void) {
    InputDevice_PspPad_Unlock();
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D410);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D468);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D50C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D55C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_0000C6E0(void) {
    Job_Start(0, func_0000C718, 0, -1, -1, func_00009408);
}

s32 func_0000C718(void) {
    sceKernelPowerLock(0);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00009408(void) {
    vsh_8F76CA2A();
}
#endif

#if FW_VERSION == 100
void func_00009408(void) {
    vsh_7485813E(8);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D1C4);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D380);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D500);
#endif

#if FW_VERSION >= 350
s32 func_0000D604(struct Unk_func_0000D604_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    if (arg0 != NULL) {
        temp_v0 = arg0->unk1D0;
        if (temp_v0 != 0) {
            var_v1 = scePaf_503585A4(temp_v0, 1);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 func_0000D604(struct Unk_func_0000D604_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    if (arg0 != NULL) {
        temp_v0 = arg0->unk1D0;
        if (temp_v0 != 0) {
            var_v1 = _ZNK3paf8PhWidget8GetChildEi(temp_v0, 1);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D640);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D750);
#endif

#if FW_VERSION >= 350
void func_0000D864(void) {
    scePaf_648CA0C5();
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0000D864(void) {
    InputDevice_PspPad_Unlock();
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D880);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D8D8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D97C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D9CC);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000DA24);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0000DA24(void) {
    Job_Start(0, func_0000DA5C, 0, -1, -1, func_0000DA7C);
}
#endif

#if FW_VERSION >= 282
s32 func_0000DA5C(void) {
    sceKernelPowerLock(0);
    return 0;
}
#endif

#if FW_VERSION >= 350
void func_0000DA7C(void) {
    vsh_8419AC80();
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0000DA7C(void) {
    vsh_8F76CA2A();
}
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000DA98);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000C798);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
void func_00009974(void) {
    _ZN3paf5SleepEi(0x1F4);
    func_0000075C();
}
#endif

#if FW_VERSION == 100
s32 func_00009458(void) {
    void *sp0;
    s32 temp_s0;

    _ZN3paf5SleepEi(0x1F4);
    _ZN3vsh9PowerLockC1Ev(&sp0);
    temp_s0 = func_00000770();
    _ZN3vsh9PowerLockD1Ev(&sp0);
    return temp_s0;
}
#endif

#if FW_VERSION >= 350
s32 func_0000DAEC(void) {
    void *sp0;
    s32 temp_s0;

    sceVshCommonUtil_094B0219(&sp0, 1);
    scePaf_82CF97B0(0x1F4);
    temp_s0 = func_000008E0();
    sceVshCommonUtil_D24DD449(&sp0);
    return temp_s0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 func_0000DAEC(void) {
    void *sp0;
    s32 temp_s0;

    _ZN3vsh9PowerLockC1Ei(&sp0, 1);
    _ZN3paf5SleepEi(0x1F4);
    temp_s0 = func_000008E0();
    _ZN3vsh9PowerLockD1Ev(&sp0);
    return temp_s0;
}
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000DB34);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000DC60);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000973C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000DAD4);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000098E0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00009A78(void) {
    InputDevice_PspPad_Unlock();
    _ZN3vsh12BusyIcon_DecEv();
}
#endif

#if FW_VERSION < 250
void func_00009A78(void) {
    InputDevice_PspPad_Unlock();
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009A94);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000BAB4);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000BD34);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A4EC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A250);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A9D4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000AB24);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000AD14);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00009FB8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A250);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A360);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A3F8);
#else
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000DD88);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000DF44);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000E0D4);
#endif

#if FW_VERSION == 282
void func_0000E0D4(void) {
    InputDevice_PspPad_Unlock();
    _ZN3vsh12BusyIcon_DecEv();
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000E0F8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000E8C0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000EB20);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000ECB8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000EEA8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000EF2C);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000F1B8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A548);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A658);
#endif

#if FW_VERSION < 260
void func_0000A748(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000C3EC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000AFB8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A750);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000F22C);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000F450);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000C6D4);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000F2C0);

void func_0000F64C(void) {
    void *sp0;
    _ZN3vsh31SetButtonNavigationString_EnterEPKw(&sp0, _ZN3vsh15GetString_EnterEv());
    func_00000B48(&sp0);
    _ZN3vsh30SetButtonNavigationString_BackEPKw(&sp0, _ZN3vsh14GetString_BackEv());
    func_00000B48(&sp0);
    _ZN3vsh26ShowButtonNavigation_EnterEb(1);
    _ZN3vsh25ShowButtonNavigation_BackEb(1);
    InputDevice_PspPad_Unlock();
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000F6B0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
void func_0000E02C(void) {
    InputDevice_PspPad_Unlock();
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000F064_v260);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A92C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000A9F0);
#endif

#if FW_VERSION < 201
void func_0000A9F0(s32 arg0) {
    _ZN3paf9PhHandler11SetCallBackEiPFvPNS_8PhWidgetEPNS_7PhEventEPvES5_(arg0, 0x10001, (s32) func_0000A748, 0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000F510);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000F56C);
#endif

#if FW_VERSION >= 350
void func_0000F8F8(void) {
    void *sp0;
    sceVshCommonGui_2EBB5C2B(&sp0, sceVshCommonGui_30FA68C3());
    func_00000B48(&sp0);
    sceVshCommonGui_11C48509(&sp0, sceVshCommonGui_EC899EBE());
    func_00000B48(&sp0);
    sceVshCommonGui_F5A16B4D(1);
    sceVshCommonGui_891DD627(1);
    scePaf_648CA0C5();
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0000F8F8(void) {
    void *sp0;
    _ZN3vsh31SetButtonNavigationString_EnterEPKw(&sp0, _ZN3vsh15GetString_EnterEv());
    func_00000B48(&sp0);
    _ZN3vsh30SetButtonNavigationString_BackEPKw(&sp0, _ZN3vsh14GetString_BackEv());
    func_00000B48(&sp0);
    _ZN3vsh26ShowButtonNavigation_EnterEb(1);
    _ZN3vsh25ShowButtonNavigation_BackEb(1);
    InputDevice_PspPad_Unlock();
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00010584);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00010980);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00011024);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000110A0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000110F0);

void func_00011128(void) {
    func_000110A0();
}

void func_00011144(void) {
    func_000110F0();
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00011160);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000F95C);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000FC68);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000C7E4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000AAA8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000FCF4);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000FD18);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000C888);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000C8C0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000C8EC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D728);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000ABA8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B440);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000AC10);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000ACD8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000BD98);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000FD98);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000FDD0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000FDFC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000108D0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00010AC0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00010D4C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000110EC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0001116C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000111EC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00011264);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000117FC);
#endif

#if FW_VERSION >= 350
void func_000117FC(void) {
    scePaf_39E62C88(M2C_VFIELD(&D_0001F31C, s32, 4), &D_0001BEA0, 0, 0);
    scePaf_A013540A(M2C_VFIELD(&D_0001F31C, s32, 4), &D_0001BEA0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00011850);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000118B0);

void func_00011A60(void) {
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00011A68);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00012670);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00012700);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000128B0);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000128F8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B5C0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000DBA4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00010B10);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000DF60);
#endif

#if FW_VERSION < 201
void func_0000B74C(void) {

}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B754);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00012958);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00012A08);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000C170);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000E14C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00010C88);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00011220);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00011274);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000112D4);

void func_00011484(void) {

}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000117BC);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0001148C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00011A78);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00011B08);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00011CB8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00011D00);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00011D60);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00011E10);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00011E84);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00011ED4);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00011F84);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00012160);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0001232C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00012374);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000123C4);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00012F00);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00012508);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00012620);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000127D0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00012818);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000B870);
#else
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00012A7C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00012ACC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00012B7C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00012DD4);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00012FA0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00012FE8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013038);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000131AC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013348);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000134F8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013540);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013590);

void func_00013774(void) {
    func_00013590(1, 0xFFFF);
}

void func_00013794(void) {
    func_00013590(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000137B4);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013880);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000138C0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013910);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013944);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000139F4);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00014CA0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001CBC0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013B74);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013C00);
#else
void func_00013C8C(void) {
    func_0000B870(1, 0xFFFF);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013C8C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013CB0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013D30);
#else
void func_00013D68(void) {
    func_0000B870(0, 0xFFFF);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000C410);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000E488);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013614);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013664);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013698);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013748);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C8A8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000138C8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013954);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000139E0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013A04);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013A84);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013ABC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013AE8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013C1C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C8FC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013C70);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013E14);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013E44);

void func_00013EC0(void) {
    func_00013E44(1, 0xFFFF);
}

void func_00013EE0(void) {
    func_00013E44(0, 0xFFFF);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000E4C8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000E528);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001C914);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013D68);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000BA30);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00011CC8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00014EC0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00014240);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_0000FF64(void) {
    _ZN3vsh26ShowButtonNavigation_EnterEb(0);
    _ZN3vsh25ShowButtonNavigation_BackEb(0);
    func_00017A18((struct Unk_func_00017A18_0 *) &D_0001F31C);
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000FF94);
#endif

#if FW_VERSION < 250
void func_0000BB8C(void) {
    _ZN3vsh26ShowButtonNavigation_EnterEb(0);
    _ZN3vsh25ShowButtonNavigation_BackEb(0);
    _ZN3paf4View9PlaySoundEPKc(D_0001F31C.unk8, &D_0001CC14);
    func_00017A18((struct Unk_func_00017A18_0 *) &D_0001F31C);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013D94);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013EC8);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001CC14);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013F1C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000140C0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000140F0);

void func_0001416C(void) {
    func_000140F0(1, 0xFFFF);
}

void func_0001418C(void) {
    func_000140F0(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000141AC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0001420C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001CC2C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00014240);
#endif

#if FW_VERSION >= 350
void func_00014338(void) {
    sceVshCommonGui_F5A16B4D(0);
    sceVshCommonGui_891DD627(0);
    func_00017A18((struct Unk_func_00017A18_0 *) &D_0001F31C);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00014338(void) {
    _ZN3vsh26ShowButtonNavigation_EnterEb(0);
    _ZN3vsh25ShowButtonNavigation_BackEb(0);
    func_00017A18((Unk_func_00017A18_0*) &D_0001F31C);
}
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00014368);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001CC74);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00011D18);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001CC80);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001CC8C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000144FC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0001467C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000BF88);
#else
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000146EC);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00014798);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001CCE4);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000C060);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000ECE8);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001ABF8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013540);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000C220);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000C4EC);
#endif

#if FW_VERSION < 260
void func_0000C5B8(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000C5C0);
#endif

#if FW_VERSION < 201
void func_0000C5C0(s32 arg0) {
    _ZN3paf9PhHandler11SetCallBackEiPFvPNS_8PhWidgetEPNS_7PhEventEPvES5_(arg0, 0x10001, (s32) func_0000C5B8, 0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001CCF0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000147FC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000149C0);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00015D40);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00014B8C);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00014CBC);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000EF88);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000C678);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00014D48);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00014D6C);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000F02C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000F064);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000C778);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000C7E0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00014DEC);
#endif

#if (FW_VERSION >= 201 && FW_VERSION < 260) || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00014E24);
#endif

#if FW_VERSION < 201
void func_00014E24(s32 arg0) {
    _ZN3paf9PhHandler11SetCallBackEiPFvPNS_8PhWidgetEPNS_7PhEventEPvES5_(arg0, 0x10001, (s32) func_0000C5B8, 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000F0BC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000C87C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00014E50);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00014F90);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000F25C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000F42C);
#endif

#if FW_VERSION < 201
void func_0000C9FC(void) {

}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000CA04);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000CAB0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00014FE4);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0001518C);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000151BC);

#if FW_VERSION < 201
void func_0000CB74(void) {

}

void func_0000CB7C(void) {

}
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00015210);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00015278);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000152B4);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013CC8);

void func_00013D44(void) {
    func_00013CC8(1, 0xFFFF);
}

void func_00013D64(void) {
    func_00013CC8(0, 0xFFFF);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000CC88);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000CD10);
#endif

#if FW_VERSION < 260
void func_0000CE70(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_0000F7C0(void) {
    _ZN3paf4View9PlaySoundEPKc(D_0001F31C.unk8, &D_00015040);
    func_00017A18((struct Unk_func_00017A18_0 *) &D_0001F31C);
    InputDevice_PspPad_Unlock();
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001640C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AD38);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00015040);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00013FD0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000CE78);
#endif

#if FW_VERSION < 201
void func_0000CE78(s32 arg0) {
    _ZN3paf9PhHandler11SetCallBackEiPFvPNS_8PhWidgetEPNS_7PhEventEPvES5_(arg0, 0x10001, (s32) func_0000CE70, 0);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000CEA4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000F8BC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000CF30);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000CFB0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000F960);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000F998);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D030);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D098);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D108);
#endif

#if FW_VERSION < 201
void func_0000D108(s32 arg0) {
    _ZN3paf9PhHandler11SetCallBackEiPFvPNS_8PhWidgetEPNS_7PhEventEPvES5_(arg0, 0x10001, (s32) func_0000CE70, 0);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D134);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D1A0);
#endif

#if FW_VERSION < 201
void func_0000D1F4(void) {

}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00015314);

void func_00015390(void) {
    func_00015314(1, 0xFFFF);
}

void func_000153B0(void) {
    func_00015314(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000153D0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00015484);
#endif

#if FW_VERSION >= 350
void func_000155D8(void) {
    scePaf_6428A1DE(D_0001F31C.unk8, &D_0001CE90);
    func_00017A18((struct Unk_func_00017A18_0 *) &D_0001F31C);
    scePaf_648CA0C5();
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_000155D8(void) {
    _ZN3paf4View9PlaySoundEPKc(D_0001F31C.unk8, &D_0001CE90);
    func_00017A18((Unk_func_00017A18_0*) &D_0001F31C);
    InputDevice_PspPad_Unlock();
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00016864);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001CE5C);
#endif

#if FW_VERSION < 260 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001CE8C);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00011DFC);
#endif

#if FW_VERSION < 260 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001CE90);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00011E20);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00011E4C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00015040);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0001561C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00015708);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00015794);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000157B8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00015838);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00015870);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0001589C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00015948);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001CF48);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000FAF8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D1FC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D34C);

void func_0000D3BC(void) {
    D_000155F8 = 0;
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D3C8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0001599C);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00015C5C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00014640);

void func_000146BC(void) {
    func_00014640(1, 0xFFFF);
}

void func_000146DC(void) {
    func_00014640(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000146FC);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00014744);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0001478C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000147C8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00014804);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00014844);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00014894);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00014910);

void func_0001494C(void **arg0) {
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

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000149A4);
#endif

#if FW_VERSION < 201
void func_00015C5C(void) {
    func_0000D3BC();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_0000FDF8(void) {
    D_00018854 = 0;
    _ZN3vsh26ShowButtonNavigation_EnterEb(0);
    return _ZN3vsh25ShowButtonNavigation_BackEb(0);
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000FE24);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001AE10);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000116D4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000FE6C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D430);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00013238);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00013248);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00013264);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001327C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00013294);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000132B4);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000132A8);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00013268);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_000132D8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000E0C0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00015C8C);

void func_00015D08(void) {
    func_00015C8C(1, 0xFFFF);
}

void func_00015D28(void) {
    func_00015C8C(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00015D48);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00015D90);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00015DD8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00015E14);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00015E50);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00015E90);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00015EE0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00015F5C);
#endif

#if FW_VERSION >= 350
void func_00015F98(void **arg0) {
    void *temp_s0;
    void *var_a0;
    void *var_v0;

    var_a0 = *arg0;
    var_v0 = M2C_FIELD(var_a0, void **, 4);
    if (var_v0 != var_a0) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            scePaf_F5001144(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    scePaf_F5001144(var_a0);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00015F98(void **arg0) {
    void *temp_s0;
    struct Unk_func_00015F98_var_a0 *var_a0;
    struct Unk_func_00015F98_var_v0 *var_v0;

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

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00015FF0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0001604C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00016078);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001CF60);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000160C4);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000162B8);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00014CA8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D660);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D738);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000E410);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00016310);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00016484);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001D03C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001D050);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001D068);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001D07C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001D088);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001816C);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00018178);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001D0AC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00018144);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001D098);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001D0A4);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001D0AC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001EDA0);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000164D4);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00014FB0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00010338);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00010414);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D89C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000D960);

void func_0000DA94(s32 arg0) {
    _ZNK3paf8PhWidget8GetChildEi(arg0, 1);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000DAB0);
#else
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00016618);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00016728);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00016A7C);

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0000DED0(void) {
    func_00000A94();
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000EBEC);
#endif

#if FW_VERSION == 100
void func_0000DED0(void) {
    InputDevice_PspPad_Lock();
    func_00000A94();
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000DEF4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00016BEC(s32 arg0) {
    InputDevice_PspPad_Lock();
    _ZN3vsh12BusyIcon_IncEv();
    Job_Start(0, (s32 (*)()) func_0000DED0, arg0, -1, -1, func_0000EBEC);
}
#endif

#if FW_VERSION == 100
void func_00016BEC(s32 arg0) {
    _ZN3vsh12BusyIcon_IncEv();
    Job_Start(0, (s32 (*)()) func_0000DED0, arg0, -1, -1, func_0000DEF4);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000DFD8);

void func_0000E038(void) {
    func_0000DFD8(0);
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000E054);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000E098);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000E0B4);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000E0F8);
#endif

#if FW_VERSION >= 282
void func_00016B5C(void) {
    func_00000A94();
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00016B78);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00016BEC);
#endif

#if FW_VERSION == 282
void func_00016BEC(s32 arg0) {
    InputDevice_PspPad_Lock();
    _ZN3vsh12BusyIcon_IncEv();
    Job_Start(0, (s32 (*)()) func_00016B5C, arg0, -1, -1, func_00016B78);
}
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00016C3C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00016CD0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00016CFC);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00010B98);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000E228);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00016D2C);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00016DD4);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00016EF0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00016F78);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000F284);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000111C0);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00011210);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00015D70);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0000F560(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_0000F5F8((s32) arg0);
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000F580);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000F5F8);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00015F18);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00015F54);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000E57C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000E5D8);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_00012030);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00017078);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00017354);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000173A4);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000173D8);

void func_000174C8(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00017560();
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000174E8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00017560);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00017580);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000175BC);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000175F8);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000E680);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000E6A4);
#endif

#if FW_VERSION < 201
void func_0000E6A4(void *arg0) {
    _ZN3paf4View8PageOpenEPKcii(M2C_FIELD(arg0, s32 *, 4), &D_0001EE04, 0, 0);
}
#endif

#if FW_VERSION >= 350
void func_00017644(struct Unk_func_00017644_0 *arg0) {
    arg0->unk30 = -1;
    vsh_1122D59B();
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00017644(struct Unk_func_00017644_0 *arg0) {
    arg0->unk30 = -1;
    _ZN11PageManager4ExitEv();
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00017668);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00017668(struct Unk_func_00017668_0 *arg0) {
    _ZN3paf4View8PageOpenEPKcii(arg0->unk4, &D_0001EE04, 0, 0);
}
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00017694);

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_0000E700(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    _ZN11PageManager5ClearEv(arg0);
}
#endif

#if FW_VERSION < 260
void func_0000E700(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    func_00003BCC((s32) (arg0 + 0x34), 0, 0);
    _ZN11PageManager5ClearEv(arg0);
}
#endif

#if FW_VERSION >= 350
void func_000176C4(struct Unk_func_000176C4_0 *arg0) {
    arg0->unk30 = -1;
    arg0->unk34 = 0;
    vsh_C7D1D06C();
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_000176C4(struct Unk_func_000176C4_0 *arg0) {
    arg0->unk30 = -1;
    arg0->unk34 = 0;
    _ZN11PageManager5ClearEv(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000176EC);

INCLUDE_RODATA("nonmatchings/sysconf_plugin", D_0001EE04);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00017728);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000177D0);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000161E8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000E898);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000E938);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000E9EC);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000EAB4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000EAF0);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 func_00017A18(struct Unk_func_00017A18_0 *arg0) {
    s32 temp_s1;
    s32 var_v0;

    var_v0 = -1;
    temp_s1 = arg0->unk34;
    if (temp_s1 != 0) {
        _ZN3vsh10OptionMenu5CloseEPN3paf4ViewEPKcS5_(arg0->unk4, temp_s1, func_00017728());
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 260
s32 func_00017A18(struct Unk_func_00017A18_0 *arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
        _ZN3vsh10OptionMenu5CloseEPN3paf4ViewEPKcS5_(arg0->unk4, arg0->unk34, func_00017728());
        var_v1 = 0;
    }
    return var_v1;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000EC2C);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000ECF0);
#endif

#if FW_VERSION < 282
s32 func_0000EDB4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 func_0000EDBC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

s32 func_0000EDC4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_0000EDCC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 func_0000EDD4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 func_0000EDDC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}

s32 func_0000EDE4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}

void func_0000EDEC(void *arg0, s32 *arg1) {
    _ZN3paf4View8PageOpenEPKcii(M2C_FIELD(arg0, s32 *, 4), arg1, 0, 0);
}
#else
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00017840);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_000178A8);

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00017924);
#endif

#if FW_VERSION >= 350
s32 func_00017A18(struct Unk_func_00017A18_0 *arg0) {
    s32 temp_s1;
    s32 var_v0;

    var_v0 = -1;
    temp_s1 = arg0->unk34;
    if (temp_s1 != 0) {
        sceVshCommonGui_3BE24617(arg0->unk4, temp_s1, func_00017728());
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 func_00017A18(struct Unk_func_00017A18_0 *arg0) {
    s32 temp_s1;
    s32 var_v0;

    var_v0 = -1;
    temp_s1 = arg0->unk34;
    if (temp_s1 != 0) {
        _ZN3vsh10OptionMenu5CloseEPN3paf4ViewEPKcS5_(arg0->unk4, temp_s1, func_00017728());
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 282
s32 func_00017A68(struct Unk_func_00017A68_0 *arg0) {
    return arg0->unk4;
}

s32 func_00017A70(struct Unk_func_00017A70_0 *arg0) {
    return arg0->unk8;
}

s32 func_00017A78(struct Unk_func_00017A78_0 *arg0) {
    return arg0->unkC;
}

s32 func_00017A80(struct Unk_func_00017A80_0 *arg0) {
    return arg0->unk10;
}

s32 func_00017A88(struct Unk_func_00017A88_0 *arg0) {
    return arg0->unk14;
}

s32 func_00017A90(struct Unk_func_00017A90_0 *arg0) {
    return arg0->unk18;
}

s32 func_00017A98(struct Unk_func_00017A98_0 *arg0) {
    return arg0->unk1C;
}
#endif

#if FW_VERSION >= 350
void func_00017AA0(struct Unk_func_00017AA0_0 *arg0, s32 *arg1) {
    scePaf_39E62C88(arg0->unk4, arg1, 0, 0);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00017AA0(struct Unk_func_00017AA0_0 *arg0, s32 *arg1) {
    _ZN3paf4View8PageOpenEPKcii(arg0->unk4, arg1, 0, 0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00017AC4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00017AC4(struct Unk_func_00017AC4_0 *arg0) {
    _ZN3paf4View12PageActivateEPKc(arg0->unk4);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00017AE0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00017AE0(struct Unk_func_00017AE0_0 *arg0) {
    _ZN3paf4View9PageCloseEPKc(arg0->unk4);
}
#endif

#if FW_VERSION >= 350
void func_00017AFC(struct Unk_func_00017AFC_0 *arg0) {
    scePaf_CD216C47(arg0->unk4);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00017AFC(struct Unk_func_00017AFC_0 *arg0) {
    _ZNK3paf4View8PageRootEPKc(arg0->unk4);
}
#endif

#if FW_VERSION < 282
void func_00017B18(void *arg0) {
    _ZN3paf4View12PageActivateEPKc(M2C_FIELD(arg0, s32 *, 4));
}
#else
INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00017B18);
#endif

#if FW_VERSION < 282
void func_0000EE2C(void *arg0) {
    _ZN3paf4View9PageCloseEPKc(M2C_FIELD(arg0, s32 *, 4));
}

void func_0000EE48(void *arg0) {
    _ZNK3paf4View8PageRootEPKc(M2C_FIELD(arg0, s32 *, 4));
}

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_0000EE64);
#endif

INCLUDE_ASM("nonmatchings/sysconf_plugin", func_00017B40);
