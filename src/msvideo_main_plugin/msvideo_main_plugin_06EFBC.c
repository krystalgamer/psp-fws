#include "common.h"
#include "msvideo_main_plugin_decls.h"

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_0006EFBC);

s32 func_0006F7EC(void *arg0) {
    s32 var_s1;
    s32 var_s1_2;
    u32 var_s2;
    u32 var_s2_2;

    var_s2 = 0;
    var_s1 = M2C_FIELD(arg0, s32 *, 0xF4);
    if (M2C_FIELD(arg0, u32 *, 0x39C) == 0) {

    } else {
        do {
            func_0007002C(arg0, var_s1);
            var_s2 += 1;
            var_s1 += 0x70;
        } while (var_s2 < (u32) M2C_FIELD(arg0, u32 *, 0x39C));
    }
    var_s1_2 = M2C_FIELD(arg0, s32 *, 0x1B0);
    var_s2_2 = 0;
    if (M2C_FIELD(arg0, u32 *, 0x3A0) != 0) {
        do {
            func_0007004C(arg0, var_s1_2);
            var_s2_2 += 1;
            var_s1_2 += 0x24;
        } while (var_s2_2 < (u32) M2C_FIELD(arg0, u32 *, 0x3A0));
    }
    func_0007013C(arg0 + 0xB4);
    func_0007013C(arg0 + 0x170);
    return 0;
}

s32 func_0006F8A0(void *arg0) {
    func_0006C8EC(M2C_FIELD(arg0, s32 *, 0xA8), M2C_FIELD(arg0, s32 *, 0xAC));
    return 0;
}

s32 func_0006F8C4(void *arg0) {
    func_0006C920(M2C_FIELD(arg0, s32 *, 0xA8));
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_0006F8E4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_0006F9EC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_0006FAA8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_0006FAD4);

void func_0006FB00(void *arg0) {
    func_000722AC(M2C_FIELD(arg0, s32 *, 0xAC));
}

s32 func_0006FB1C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1BC);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_0006FB24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_0006FBA4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_0006FBE8);

void func_0006FC14(void *arg0) {
    func_000722BC(M2C_FIELD(arg0, s32 *, 0xAC));
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_0006FC30);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_0006FCBC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_0006FD48);

s32 func_0006FE08(void *arg0) {
    s32 var_a0;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x244);
    var_a0 = 0;
    if (M2C_FIELD(temp_v1, u8 *, 8) != 0) {
        var_a0 = M2C_FIELD(temp_v1, u8 *, 9) != 0;
    }
    return var_a0;
}

s32 func_0006FE28(void) {
    return ~func_0006FE5C() != 0;
}

s32 func_0006FE4C(void *arg0) {
    return ~M2C_FIELD(arg0, s32 *, 0x23C) != 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_0006FE5C);

s32 func_0006FE64(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x23C);
}

void func_0006FE6C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x238) = arg1;
}

void func_0006FE74(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x23C) = arg1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_0006FE7C);

s32 func_0006FEF8(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (func_00073690(M2C_FIELD(arg0, s32 *, 0xAC), 1, arg1) == 0) {
        var_v1 = 1;
        *arg1 += 1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_0006FF44);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_0006FF8C);

void func_0006FFF4(void *arg0) {
    func_000722F4(M2C_FIELD(arg0, s32 *, 0xAC));
}

void func_00070010(void *arg0) {
    func_0007230C(M2C_FIELD(arg0, s32 *, 0xAC));
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_0007002C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_0007004C);

s32 func_0007006C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x248);
}

s32 func_00070074(void *arg0) {
    return func_00071538(M2C_FIELD(arg0, s32 *, 0xAC)) == 0;
}

s32 func_00070094(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x254) = arg1;
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_000700A0);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_0007013C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_0007020C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_000702D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_000703F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00070564);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_000705EC);

s32 func_0007067C(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00070684);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_000706A8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_000707E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_000708BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00070944);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_000709DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00070E98);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00070F60);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00071538);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00071808);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00071B28);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00071D68);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00071DAC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_000720A0);

void *func_0007229C(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 0x1D4) == 0) ? NULL : (arg0 + 0xD4);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_000722AC);

s32 func_000722B4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_000722BC);

s32 func_000722C4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x84) + M2C_FIELD(arg0, s32 *, 0x2C);
}

s16 func_000722D4(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x64);
}

s16 func_000722DC(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x62);
}

s32 func_000722E4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x68);
}

s32 func_000722EC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x6C);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_000722F4);

u16 func_000722FC(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0xC0);
}

s32 func_00072304(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_0007230C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00072314);

s32 func_00072368(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x78);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00072370);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00072384);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_0007250C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_000725A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00072678);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00072764);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_000727C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_0007285C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00072A84);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00072DBC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00072F6C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00073050);

void func_00073188(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_v1 != -1) {
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (temp_v1 + 1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_000731A8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_000733A8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00073450);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_000734FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00073554);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00073690);

s32 func_000736AC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x88);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_000736B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_000738AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_000738DC);

s32 func_0007390C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x5C) == 1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_0007391C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_0007397C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_0007398C);

s32 func_000739B4(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (((arg0 == NULL) | (arg1 == NULL)) == 0) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x38);
    }
    return var_v1;
}

s32 func_000739DC(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0x84);
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_000739EC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00073A80);

void func_00073ADC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = (s32) (arg0 + 0x96C);
    M2C_FIELD(arg0, s32 *, 0x196C) = 0x1000;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1970) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00073AFC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00073CD0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00073D4C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00073DC8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00073E34);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00073EC4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00073FF4);

s32 func_000740D8(void **arg0) {
    s32 var_v1;
    void *temp_v0;

    var_v1 = 0x80610103;
    if (arg0 != NULL) {
        temp_v0 = *arg0;
        var_v1 = (func_0007446C(M2C_FIELD(temp_v0, s32 *, 0), M2C_FIELD(temp_v0, s32 *, 8)) == 0) ? 0 : 0x80618006;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00074118);

s32 func_00074160(void **arg0) {
    s32 var_v1;
    void *temp_v0;

    var_v1 = 0x80610103;
    if (arg0 != NULL) {
        temp_v0 = *arg0;
        var_v1 = (func_00074498(M2C_FIELD(temp_v0, s32 *, 0), M2C_FIELD(temp_v0, s32 *, 8)) == 0) ? 0 : 0x80618006;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_000741A0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_000742AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00074334);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_000743C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_0007446C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00074498);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_000744DC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", D_000B47F8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", D_000B4850);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", D_000B4854);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_0007452C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_0007484C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_0007486C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_000748A8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_000748E4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_06EFBC", func_00074920);

