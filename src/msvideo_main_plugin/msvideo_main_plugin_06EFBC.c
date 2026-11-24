#include "common.h"
#include "msvideo_main_plugin_decls.h"

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_0006EFBC);

s32 func_0006F7EC(struct Unk_func_0006F7EC_0 *arg0) {
    s32 var_s1;
    s32 var_s1_2;
    u32 var_s2;
    u32 var_s2_2;

    var_s2 = 0;
    var_s1 = arg0->unkF4;
    if (arg0->unk39C == 0) {

    } else {
        do {
            func_0007002C(arg0, var_s1);
            var_s2 += 1;
            var_s1 += 0x70;
        } while (var_s2 < (u32) arg0->unk39C);
    }
    var_s1_2 = arg0->unk1B0;
    var_s2_2 = 0;
    if (arg0->unk3A0 != 0) {
        do {
            func_0007004C(arg0, var_s1_2);
            var_s2_2 += 1;
            var_s1_2 += 0x24;
        } while (var_s2_2 < (u32) arg0->unk3A0);
    }
    func_0007013C((u8 *)arg0 + 0xB4);
    func_0007013C((u8 *)arg0 + 0x170);
    return 0;
}

s32 func_0006F8A0(struct Unk_func_0006F8A0_0 *arg0) {
    func_0006C8EC(arg0->unkA8, arg0->unkAC);
    return 0;
}

s32 func_0006F8C4(struct Unk_func_0006F8C4_0 *arg0) {
    func_0006C920(arg0->unkA8);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_0006F8E4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_0006F9EC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_0006FAA8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_0006FAD4);

void func_0006FB00(struct Unk_func_0006FB00_0 *arg0) {
    func_000722AC(arg0->unkAC);
}

s32 func_0006FB1C(struct Unk_func_0006FB1C_0 *arg0) {
    return arg0->unk1BC;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_0006FB24);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_0006FBA4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_0006FBE8);

void func_0006FC14(struct Unk_func_0006FC14_0 *arg0) {
    func_000722BC(arg0->unkAC);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_0006FC30);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_0006FCBC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_0006FD48);

s32 func_0006FE08(struct Unk_func_0006FE08_0 *arg0) {
    s32 var_a0;
    struct Unk_func_0006FE08_temp_v1 *temp_v1;

    temp_v1 = arg0->unk244;
    var_a0 = 0;
    if (temp_v1->unk8 != 0) {
        var_a0 = temp_v1->unk9 != 0;
    }
    return var_a0;
}

s32 func_0006FE28(void) {
    return ~func_0006FE5C() != 0;
}

s32 func_0006FE4C(struct Unk_func_0006FE4C_0 *arg0) {
    return ~arg0->unk23C != 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_0006FE5C);

s32 func_0006FE64(struct Unk_func_0006FE64_0 *arg0) {
    return arg0->unk23C;
}

void func_0006FE6C(struct Unk_func_0006FE6C_0 *arg0, s32 arg1) {
    arg0->unk238 = arg1;
}

void func_0006FE74(struct Unk_func_0006FE74_0 *arg0, s32 arg1) {
    arg0->unk23C = arg1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_0006FE7C);

s32 func_0006FEF8(struct Unk_func_0006FEF8_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (func_00073690(arg0->unkAC, 1, arg1) == 0) {
        var_v1 = 1;
        *arg1 += 1;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_0006FF44);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_0006FF8C);

void func_0006FFF4(struct Unk_func_0006FFF4_0 *arg0) {
    func_000722F4(arg0->unkAC);
}

void func_00070010(struct Unk_func_00070010_0 *arg0) {
    func_0007230C(arg0->unkAC);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_0007002C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_0007004C);

s32 func_0007006C(struct Unk_func_0007006C_0 *arg0) {
    return arg0->unk248;
}

s32 func_00070074(struct Unk_func_00070074_0 *arg0) {
    return func_00071538(arg0->unkAC) == 0;
}

s32 func_00070094(struct Unk_func_00070094_0 *arg0, s32 arg1) {
    arg0->unk254 = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_000700A0);

void func_000700B0(s32 arg0) {
    func_0006D1D8(arg0 - 0xA4);
}

void func_000700CC(s32 arg0) {
    func_0006D1D8(arg0 - 0x68);
}

void func_000700E8(s32 arg0) {
    func_0006D4A4(arg0 - 0xA4);
}

void func_00070104(s32 arg0) {
    func_0006D4A4(arg0 - 0x68);
}

void func_00070120(s32 arg0) {
    func_0006DB48(arg0 - 0x68);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_0007013C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_0007020C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_000702D0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_000703F8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00070564);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_000705EC);

s32 func_0007067C(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00070684);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_000706A8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_000707E0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_000708BC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00070944);

s32 func_00070998(s32 *arg0) {
    s32 var_v0;

    var_v0 = 1;
    if (arg0 != NULL) {
        func_00073A80();
        scePaf_4729E549(arg0);
        var_v0 = 0;
    }
    return var_v0;
}

void func_000709D4(void) {
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_000709DC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00070E98);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00070F60);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00071538);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00071808);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00071B28);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00071D68);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00071DAC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_000720A0);

void *func_0007229C(struct Unk_func_0007229C_0 *arg0) {
    return (arg0->unk1D4 == 0) ? NULL : ((u8 *)arg0 + 0xD4);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_000722AC);

s32 func_000722B4(struct Unk_func_000722B4_0 *arg0) {
    return arg0->unk8;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_000722BC);

s32 func_000722C4(struct Unk_func_000722C4_0 *arg0) {
    return arg0->unk84 + arg0->unk2C;
}

s16 func_000722D4(struct Unk_func_000722D4_0 *arg0) {
    return arg0->unk64;
}

s16 func_000722DC(struct Unk_func_000722DC_0 *arg0) {
    return arg0->unk62;
}

s32 func_000722E4(struct Unk_func_000722E4_0 *arg0) {
    return arg0->unk68;
}

s32 func_000722EC(struct Unk_func_000722EC_0 *arg0) {
    return arg0->unk6C;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_000722F4);

u16 func_000722FC(struct Unk_func_000722FC_0 *arg0) {
    return arg0->unkC0;
}

s32 func_00072304(struct Unk_func_00072304_0 *arg0) {
    return arg0->unk24;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_0007230C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00072314);

s32 func_00072368(struct Unk_func_00072368_0 *arg0) {
    return arg0->unk78;
}

s32 func_00072370(struct Unk_func_00072370_0 *arg0) {
    s32 cmp_tmp = (u32) arg0->unk40 < (u32) arg0->unk38;
    return cmp_tmp == 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00072384);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_0007250C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_000725A4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00072678);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00072764);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_000727C4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_0007285C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00072A84);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00072DBC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00072F6C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00073050);

void func_00073188(struct Unk_func_00073188_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk14;
    if (temp_v1 != -1) {
        arg0->unk14 = (s32) (temp_v1 + 1);
        return;
    }
    arg0->unk14 = 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_000731A8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_000733A8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00073450);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_000734FC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00073554);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00073690);

s32 func_000736AC(struct Unk_func_000736AC_0 *arg0) {
    return arg0->unk88;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_000736B4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_000738AC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_000738DC);

s32 func_0007390C(struct Unk_func_0007390C_0 *arg0) {
    return arg0->unk5C == 1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_0007391C);

s32 func_0007397C(struct Unk_func_0007397C_0 *arg0, u32 arg1) {
    s32 cmp_tmp = arg1 < (u32) arg0->unk40;
    return cmp_tmp == 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_0007398C);

s32 func_000739B4(struct Unk_func_000739B4_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (((arg0 == NULL) | (arg1 == NULL)) == 0) {
        var_v1 = 0;
        *arg1 = arg0->unk38;
    }
    return var_v1;
}

s32 func_000739DC(struct Unk_func_000739DC_0 *arg0, s32 *arg1) {
    *arg1 = arg0->unk84;
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_000739EC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00073A80);

void func_00073ADC(struct Unk_func_00073ADC_0 *arg0) {
    arg0->unk8 = (s32) ((u8 *)arg0 + 0x96C);
    arg0->unk196C = 0x1000;
    arg0->unk4 = 0;
    arg0->unk1970 = 0;
    arg0->unk0 = 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00073AFC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00073CD0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00073D4C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00073DC8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00073E34);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00073EC4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00073FF4);

s32 func_000740D8(void **arg0) {
    s32 var_v1;
    struct Unk_func_000740D8_temp_v0 *temp_v0;

    var_v1 = 0x80610103;
    if (arg0 != NULL) {
        temp_v0 = *arg0;
        var_v1 = (func_0007446C(temp_v0->unk0, temp_v0->unk8) == 0) ? 0 : 0x80618006;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00074118);

s32 func_00074160(void **arg0) {
    s32 var_v1;
    struct Unk_func_00074160_temp_v0 *temp_v0;

    var_v1 = 0x80610103;
    if (arg0 != NULL) {
        temp_v0 = *arg0;
        var_v1 = (func_00074498(temp_v0->unk0, temp_v0->unk8) == 0) ? 0 : 0x80618006;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_000741A0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_000742AC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00074334);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_000743C8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_0007446C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00074498);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_000744DC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_06EFBC", D_000B47F8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_06EFBC", D_000B4850);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_06EFBC", D_000B4854);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_0007452C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_0007484C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_0007486C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_000748A8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_000748E4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_06EFBC", func_00074920);

