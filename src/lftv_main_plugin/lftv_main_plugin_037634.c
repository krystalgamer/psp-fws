/* lang: c++ */
#include "common.h"
#include "lftv_main_plugin_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00037634);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00037634(M2C_UNK **arg0) {
    *arg0 = &D_0005BF60;
    func_0004AC3C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
void func_0003766C(M2C_UNK **arg0) {
    *arg0 = &D_0005BF60;
    func_0004AC3C((s32) arg0);
}
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00037694);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000376D4);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002AAD4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002AB28);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002AB9C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002AC10);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002AC84);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00036E30);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002AE30);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002AEF0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002AFB0);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002D014);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002D058);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002D098);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002D13C);
#endif

#if FW_VERSION == 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002D0DC_v270);
#endif

#if FW_VERSION >= 282
void func_00037728(void) {
    func_00037744();
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00037744);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00037770);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000377F0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000378AC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000378E4);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003794C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000379B4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00037A40);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00037ACC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00037B60);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00037BC0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00037C54);

#if FW_VERSION < 282
void func_0002B424(s32 arg0, s32 arg1, s32 arg2) {
    func_00004FFC((arg0 + (arg1 * 0xC)) - 0x14, arg2);
}

void func_0002B454(s32 arg0, s32 arg1, s32 arg2) {
    func_00004FFC(arg0 + (arg1 * 0xC) + 0x10, arg2);
}
#else
void func_00037C98(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_00004FFC(arg0 + (func_000378AC(arg1) * 0xC) + 4, arg2);
}

void func_00037CEC(s32 arg0, s32 arg1, s32 arg2) {
    func_00004FFC(arg0 + (func_000378AC(arg1) * 0xC) + 0x28, arg2);
}
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00037D40);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00037D80);

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039A64);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039AB8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039B0C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039B4C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00037DC0);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039D80);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002B51C);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00037EF8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003896C);
#else
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00037FEC);

s32 func_00038018(void) {
    return D_0005EBD4;
}

s32 func_00038024(void) {
    return D_0005EBD4;
}

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005BF10);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005BF30);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005BF60);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005BF88);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005BF98);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_00044068);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_000440B8_v271);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_00044078_v270);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005BFA0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005BFB0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005BFB8);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002B784);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002B7D0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002B81C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002B8B0);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005BFC8);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002B8B0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002BA58);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002BAFC);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002DD94);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_00044230);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002DFC8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002E17C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002E28C);
#endif

#if FW_VERSION < 282
void func_0002BCF8(void) {

}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002E2BC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002E2F4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002E398);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002E3E4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002E4E8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002E5BC);

s32 func_00016AB8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1D4);
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00016AC0);

s32 func_00016B14(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1EC) = arg1;
    return 0;
}
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002BD00);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002BCBC);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_00044C14);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_00044C28);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_00044C38);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_00044D08);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002BCC4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002BE78);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002BFB0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002BFD8);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002C010);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_00044D18);
#endif

#if FW_VERSION < 270
void func_0002BF30(void) {

}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002BF38);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002C024);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002C070);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002C324);

void func_0002C3B8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002C3C8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002C454);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002C570);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00038030);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000381E8);

Class_0005C018::~Class_0005C018() {
}
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000383A0);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002C698);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000383C8);

s32 func_0002C710(void) {
    return D_0004814C;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002C71C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002C75C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002C84C);

void func_0002C98C(M2C_UNK **arg0) {
    *arg0 = &D_0005C300;
    _ZN3paf9PhHandler11KillTimerCBEi((s32) arg0, 0x01000009);
    _ZN3paf9PhHandler11KillTimerCBEi((s32) arg0, 0x0100000A);
    _ZN3paf8PhWidgetD2Ev(arg0);
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000383F0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002CA34);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002CABC);

void func_0002CDC0(void *arg0, s32 arg1) {
    if (arg1 != 4) {
        M2C_FIELD(arg0, s32 *, 0x334) = arg1;
        func_0002CABC((s32) arg0);
    }
}
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002CDE4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002CE88);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002CED4);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002C2CC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002C3A0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00038428);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000385C8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000387B8);
#endif

#if FW_VERSION == 250 || FW_VERSION >= 282
void func_000388CC(M2C_UNK **arg0) {
    *arg0 = &D_0005C0F0;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000388DC);
#endif

#if FW_VERSION == 250 || (FW_VERSION >= 282 && FW_VERSION < 350)
void func_000388DC(M2C_UNK **arg0) {
    *arg0 = &D_0005C0F0;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
s32 func_00038904(Class_0005C018 *arg0) {
    return arg0->unk1D4;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003890C);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005F2D0);

__asm__(".globl _ZTV14Class_0005C018\n_ZTV14Class_0005C018 = D_0005F2D0 - 8\n");
#endif

#if FW_VERSION >= 282
s32 func_00038960(Class_0005C018 *arg0, s32 arg1) {
    arg0->unk1EC = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003896C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C018);

__asm__(".globl _ZTV14Class_0005C018\n_ZTV14Class_0005C018 = D_0005C018 - 8\n");
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C0F0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C0F8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000389B8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00038A04);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000396EC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00038A50);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00038A9C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C16C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00038B30);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00038D0C);

s32 func_00038DB0(void) {
    return D_0005F8F4;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00038DBC);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039B54);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C1C4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00038E6C);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039E98);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039EB8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000390E8);
#endif

#if FW_VERSION >= 282
s32 func_000391A4(void) {
    s32 var_v1;
    struct Unk_func_000391A4_temp_v0 *temp_v0;

    temp_v0 = func_00038A04(1);
    var_v1 = 1;
    if (temp_v0 != NULL) {
        var_v1 = temp_v0->unk14();
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039FC4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000391DC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039218);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039238);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003A27C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003A29C);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003A4BC);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003A340_v303);
#endif

#if FW_VERSION == 302
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003A340_v302);
#endif

#if FW_VERSION == 301
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003A340_v301);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003A340_v300);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003A38C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C2C8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003946C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039620);

void func_00039730(struct Unk_func_00039730_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk364 = arg1;
    arg0->unk368 = arg2;
    arg0->unk36C = arg2;
    func_00039758();
}

void func_00039758(void) {
}

void func_00039760(struct Unk_func_00039760_0 *arg0, s32 arg1) {
    if (arg1 != 4) {
        arg0->unk334 = arg1;
        func_00039758();
        arg0->unk338 = 1;
    }
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039798);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003983C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039888);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003998C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039A60);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003C480);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003C4A8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039B00);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00039B00(M2C_UNK **arg0) {
    *arg0 = &D_0005C300;
    _ZN3paf8PhWidgetD2Ev(arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039B28);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00039B28(M2C_UNK **arg0) {
    *arg0 = &D_0005C300;
    _ZN3paf8PhWidgetD2Ev(arg0);
    _ZdlPv(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039B60);

s32 func_00039B8C(void) {
    return D_0005EBDC;
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039B98);
#else
void func_00039B98(s32 arg0) {
    sce_paf_private_memset(arg0, 0, 0x20);
    sce_paf_private_memset(arg0 + 0x20, 0, 0x20);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039BD8);
#else
void func_00039BD8(s32 arg0) {
    sce_paf_private_memset(arg0, 0, 0x20);
    sce_paf_private_memset(arg0 + 0x20, 0, 0x20);
}
#endif

void func_00039C18(void) {
}

void func_00039C20(void) {
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039C28);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039C4C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039C70);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039C94);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039CB4);
#else
void func_00039CB4(void) {
    func_00004914((Unk_func_00004914_0*) &D_0005F028);
}
#endif

#if FW_VERSION < 282
s32 func_0002D184(void) {
    return M2C_FIELD(M2C_FIELD(D_000482D0, void **, 0xC), s32 *, 0x3C);
}
#else
void func_00039CD4(void) {
    func_00004AB8((Unk_func_00004AB8_0*) &D_0005F028);
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039CF4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039D14);
#else
void func_00039D14(void) {
    func_00004AD0((Unk_func_00004AD0_0*) &D_0005F028);
}
#endif

#if FW_VERSION < 282
s32 func_0002D1C0(void) {
    return M2C_FIELD(M2C_FIELD(D_000482D0, void **, 0xC), s32 *, 0x48);
}
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039D34);

#if FW_VERSION < 282
void func_00039D54(void) {
    func_000257D4((s32) D_000482D0);
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039D74);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002C678);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002C6A4);
#endif

#if FW_VERSION >= 282
void func_00039D54(void) {
    func_0000461C((s32) &D_0005F028);
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039D74);
#endif

#if FW_VERSION == 250
s32 func_00039D74(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_a1;

    temp_a1 = (arg1 * 4) + arg0;
    M2C_FIELD(temp_a1, s32 *, 0) = arg2;
    M2C_FIELD(temp_a1, s32 *, 0x20) = arg3;
    return 0;
}

s32 func_0002D234(s32 arg0, s32 arg1) {
    void *temp_a1;

    temp_a1 = (arg1 * 4) + arg0;
    M2C_FIELD(temp_a1, s32 *, 0) = 0;
    M2C_FIELD(temp_a1, s32 *, 0x20) = 0;
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039DA0);

void func_00039DCC(void *arg0) {
    s32 var_v0;
    void *var_a0;

    var_a0 = arg0;
    var_v0 = 7;
    do {
        var_v0 -= 1;
        M2C_FIELD(var_a0, s32 *, 0) = 0;
        M2C_FIELD(var_a0, s32 *, 0x20) = 0;
        var_a0 += 4;
    } while (var_v0 >= 0);
}
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00039DEC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003A340);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003A838);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003A89C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003A944);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003A9C8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003AB20);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003AD20);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003AD5C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003AE00);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003AF88);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003B110);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003B124);

M2C_UNK *func_0003B158(void) {
    return &D_0005C4B8;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003B164);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003B268);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003B558);

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C2F0);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005F5C0);
#else
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C300);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C0F0);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C3D0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C3EC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C3FC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C40C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C424);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C440);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C458);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C470);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C490);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C4B0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C4B8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003B6B4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003B764);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003B84C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003B934);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003BB04);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003BBEC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003BCD4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003BEA4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003BF2C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003BFD8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003C158);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003C2D8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003C440);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003C4EC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003C5A4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003C6E8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003C834);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003C978);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003CAC4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003CBF8);

void func_0003CD34(void) {
    func_0003CD50();
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003CD50);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002F3E8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002FF40);

void *func_00030008(void **arg0) {
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

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00030040);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00030098);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000300D8);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002F5B8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0002F60C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00030118);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00030174);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003CD7C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003CE74);
#endif

void func_0003CF38(void) {
}

#if FW_VERSION < 282
void func_000301D8(void) {

}

s32 func_000301E0(void) {
    return D_00049100;
}
#else
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003CF40);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003CF8C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003CFD8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003D00C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003D088);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003D0D0);

s32 func_0003D0E8(struct Unk_func_0003D0E8_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = -1;
    if (func_0003D088() != 0) {
        if (arg1 != 2) {
            if (arg1 == 4) {
                var_v1 = arg0->unk24;
            }
        } else {
            var_v1 = arg0->unk1C;
        }
    }
    return var_v1;
}

s32 func_0003D140(struct Unk_func_0003D140_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = -1;
    if (func_0003D088() != 0) {
        if (arg1 != 2) {
            if (arg1 == 4) {
                var_v1 = arg0->unk28;
            }
        } else {
            var_v1 = arg0->unk20;
        }
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003D198);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003D1FC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003D240);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003D284);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003D2CC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003D324);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003D544);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003D5A8);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C664);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C680);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C6A8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C6D0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C6F8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C720);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C74C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C76C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C790);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C7B4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C7DC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C804);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0005C8D0);

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003F4FC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003F5A4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003F7C4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003F828);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003FC38);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00031988);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00031A9C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00031B60);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00031BBC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00031C6C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00031CCC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00031D8C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00031D98);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_00044900);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_000448C0);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00031E2C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00031EB4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00031F04);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00031F44);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00030E2C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003203C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000320D0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00032104);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000310E0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000321F4);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000301EC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_00045390);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_000453A0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_000453B4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_000453D0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_000453EC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0004540C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000303A8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000304F8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00030588);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003D8F8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003D9A8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003DAA8);
#endif

#if FW_VERSION == 250 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003DB00);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003061C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000306C0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00030794);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00030800);

s32 func_00030888(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 == 0) {

    } else {
        func_00033F64(temp_v0);
    }
    M2C_FIELD(arg0, s8 *, 4) = 1;
    return 0;
}

s32 func_000308D0(void *arg0) {
    s32 var_v0;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 8);
    var_v0 = 0x8000FFFF;
    if (temp_v1 != NULL) {
        var_v0 = M2C_FIELD(temp_v1, s32 *, 8);
    }
    return var_v0;
}

u8 func_000308EC(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 4);
}

s32 func_000308F4(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 != 0) {
        func_00033EC4(temp_v0);
        func_00033C24();
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    return 0;
}
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003093C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000309C0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_000455FC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00030A60);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_0004562C);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_00044C10);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_00045640);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00030B44);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00030BC8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00030CDC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00030E2C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_00045710);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00030F4C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00030FD8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003103C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_00045774);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000310E0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00031184);
#endif

#if FW_VERSION < 282
void func_000312C4(s32 arg0) {
    func_000310E0(arg0, sceVshLftvMw_21257ACD());
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000312F4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00031334);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000314A4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003157C);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00032458);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000324A4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00032514);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00032564);
#endif

#if FW_VERSION == 250
s32 func_0003157C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x144) > 0;
}
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00031588);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_000458A4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00031644);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_000458CC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003172C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000317EC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_00045950);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000318BC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00031968);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003266C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00032764);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000327D4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000327F8);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00031988);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_000459C8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00031B38);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00031C30);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00031C94);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00031CFC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00031D54);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00031DBC);
#endif

#if FW_VERSION == 250
s32 func_00031DBC(void *arg0, s32 arg1, s32 arg2) {
    if (arg1 != 0xB) {

    } else if ((arg2 != 0) & (arg2 != 2)) {
        M2C_FIELD(arg0, s8 *, 0x140) = 1;
        func_00031E08((s32) arg0);
    }
    return 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00031E08);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00032974);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003DB40);
#else
s32 func_0003DB40(s32 arg0) {
    func_00031E08(arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00031E6C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_00045140);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_00045154);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000314AC);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00032EC8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00032F10);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00032F50);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00032F80);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_00045184);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_00045194);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_037634", D_000451AC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00031534);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000315C0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00031644_v260);
#endif

#if FW_VERSION < 282
void func_000323BC(s8 *arg0) {
    *arg0 = 0;
}
#else
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003DB80);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003DC2C);
#endif

void func_0003DCD8(void) {
}

void func_0003DCE0(void) {
}

s32 func_0003DCE8(void) {
    return D_0005F940;
}

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00032FAC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003309C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00033164);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_000331C8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_00033228);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003DCF4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003DE08);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003DECC);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003DF28);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
s32 func_0003DF28(struct Unk_func_0003DF28_0 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (arg0->unk1E0 != 0) {
        var_v1 = -1;
        if (func_0003E73C() >= 0) {
            arg0->unk1E0 = 0U;
            var_v1 = 0;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003DF74);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003DFD4);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003E020);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
s32 func_0003E020(struct Unk_func_0003E020_0 *arg0, s32 arg1) {
    arg0->unk168 = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003E02C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003E0C0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003E100);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003E150);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003E1F0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_037634", func_0003E270);
#endif
