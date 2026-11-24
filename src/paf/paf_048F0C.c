#include "common.h"
#include "paf_decls.h"

void func_00048F0C(void *arg0) {
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(temp_v1, s32 *, 0x18) = (s32) (M2C_FIELD(M2C_FIELD(temp_v1, void **, 0x14), s32 *, 4) - M2C_FIELD(temp_v1, s32 *, 4));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00048F28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", scePaf_6DFFCAAE);

s32 scePaf_7796B70B(void **arg0, s32 arg1) {
    void *temp_a0;

    temp_a0 = *arg0;
    M2C_FIELD(temp_a0, s32 *, 0x174) = arg1;
    func_00084A70(temp_a0, temp_a0 + 0x174, 1);
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", scePaf_4EC4EEC6);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00049138);

void func_00049170(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0x24) = 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00049180);

void func_000491C8(void) {
}

void func_000491D0(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000491D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004929C);

void scePaf_02A6AA18(void) {
    func_0004929C();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00049484);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000494A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000494C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000494E4);

void func_00049504(void) {
    func_00049D58();
}

void func_00049520(void) {
    func_00049D58();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004953C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000496E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00049800);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004987C);

s32 func_000498D8(void *arg0, s32 arg1) {
    s32 var_a3;

    var_a3 = 0;
    if ((arg1 >= 0) && (arg1 < (M2C_FIELD(arg0, s32 *, 8) * M2C_FIELD(arg0, s32 *, 0xC)))) {
        var_a3 = M2C_FIELD(arg0, s32 *, 0) + (arg1 * 8);
    }
    return var_a3;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004990C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00049978);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00049AA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00049B9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00049BD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00049CB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00049D58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00049E00);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171564);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171580);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017158C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001715A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001715C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001715E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00049E60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00049EB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00049F68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004A074);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004A108);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004A158);

void func_0004A1F8(M2C_UNK **arg0) {
    func_00044154(arg0);
    *arg0 = &D_00171640;
}

void func_0004A228(M2C_UNK **arg0) {
    func_00044154(arg0);
    *arg0 = &D_00171640;
}

void func_0004A258(M2C_UNK **arg0) {
    *arg0 = &D_00171640;
    func_0004417C((s32) arg0);
}

void func_0004A280(M2C_UNK **arg0) {
    *arg0 = &D_00171640;
    func_0004417C((s32) arg0);
}

void func_0004A2A8(M2C_UNK **arg0) {
    *arg0 = &D_00171640;
    func_0004417C((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004A2E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004A460);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004A588);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004A700);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004A88C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004AA1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004AB6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004AD68);

void func_0004AEA4(M2C_UNK **arg0) {
    func_00044154(arg0);
    *arg0 = &D_00171684;
}

void func_0004AED4(M2C_UNK **arg0) {
    func_00044154(arg0);
    *arg0 = &D_00171684;
}

void func_0004AF04(M2C_UNK **arg0) {
    *arg0 = &D_00171684;
    func_0004417C((s32) arg0);
}

void func_0004AF2C(M2C_UNK **arg0) {
    *arg0 = &D_00171684;
    func_0004417C((s32) arg0);
}

void func_0004AF54(M2C_UNK **arg0) {
    *arg0 = &D_00171684;
    func_0004417C((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004AF8C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171640);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004B090);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004B164);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004B2A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004B440);

void func_0004B550(M2C_UNK **arg0) {
    func_00044154(arg0);
    *arg0 = &D_001716C0;
}

void func_0004B580(M2C_UNK **arg0) {
    func_00044154(arg0);
    *arg0 = &D_001716C0;
}

void func_0004B5B0(M2C_UNK **arg0) {
    *arg0 = &D_001716C0;
    func_0004417C((s32) arg0);
}

void func_0004B5D8(M2C_UNK **arg0) {
    *arg0 = &D_001716C0;
    func_0004417C((s32) arg0);
}

void func_0004B600(M2C_UNK **arg0) {
    *arg0 = &D_001716C0;
    func_0004417C((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004B638);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171684);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004B864);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004BAE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004BC9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004BE58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004C020);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004C1B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004C3F8);

void func_0004C57C(void *arg0, s32 arg1) {
    void *temp_v1;

    M2C_FIELD(arg0, s8 *, 0) = 1;
    temp_v1 = arg0 + 4;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_001ABCF0;
    M2C_FIELD(temp_v1, s32 *, 4) = 0;
    func_00002AE4((s32) temp_v1, arg1);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

void func_0004C5C4(void *arg0, s32 arg1) {
    void *temp_v1;

    M2C_FIELD(arg0, s8 *, 0) = 1;
    temp_v1 = arg0 + 4;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_001ABCF0;
    M2C_FIELD(temp_v1, s32 *, 4) = 0;
    func_00002AE4((s32) temp_v1, arg1);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004C60C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004C76C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004C8CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004C9A4);

void func_0004CA7C(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0) != 0) {
        scePaf_ABBBB335(M2C_FIELD(arg0, s32 *, 4));
    } else {
        func_0014E6A0(M2C_FIELD(arg0, s32 *, 0x10));
    }
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001716C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004CAB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004CB9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004CCB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004CD7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004D040);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004D0A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004D1FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004D368);

s32 func_0004D6CC(void) {
    return 0;
}

s32 func_0004D6D4(void) {
    return 0;
}

s32 func_0004D6DC(void) {
    return 0;
}

s32 func_0004D6E4(void) {
    return 0;
}

s32 func_0004D6EC(void) {
    return 0;
}

s32 func_0004D6F4(void) {
    return 0;
}

s32 func_0004D6FC(void) {
    return 0;
}

s32 func_0004D704(void) {
    return 0;
}

void func_0004D70C(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
}

void func_0004D71C(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
    scePaf_4E67BB08(arg0);
}

s32 func_0004D744(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004D74C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004D764);

void func_0004D77C(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
}

void func_0004D78C(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
}

void func_0004D79C(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171704);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004D7C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004D83C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004D86C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004D890);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004D9BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171754);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004DAF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004DC40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004DE30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004E04C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004E1DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004E2D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004E5CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004E678);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004E6C4);

void func_0004E750(void) {
    func_0004E6C4(1, 0xFFFF);
}

void func_0004E770(void) {
    func_0004E6C4(0, 0xFFFF);
}

s32 func_0004E790(void *arg0, u32 arg1) {
    s32 var_a2;

    var_a2 = 0;
    if ((arg1 >= 0x10U) && (M2C_FIELD(arg0, s32 *, 0) == 0x2E47494D)) {
        if (M2C_FIELD(arg0, s32 *, 4) == 0x312E3030) {
            var_a2 = M2C_FIELD(arg0, s32 *, 8) == 0x505350;
        }
    }
    return var_a2;
}

s32 func_0004E7DC(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004E7E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004E920);

s32 func_0004E948(s32 arg0) {
    return (arg0 & 0xFFFF) == 3;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004E958);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001717B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004E97C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004E9EC);

s32 func_0004EB38(void) {
    return 0;
}

s32 func_0004EB40(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004EB48);

void func_0004ECF4(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
}

void func_0004ED04(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004ED2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004ED78);

void func_0004EDC4(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
}

void func_0004EDD4(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
}

void func_0004EDE4(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
    scePaf_4E67BB08(arg0);
}

void func_0004EE0C(void **arg0) {
    void *temp_a0;

    temp_a0 = *arg0;
    scePaf_9F10613F(temp_a0 + 0x84, M2C_FIELD(temp_a0, s32 *, 0x14));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004EE30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004EE70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004EFA0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004F0F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004F234);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004F270);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004F4A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004F708);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017181C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017185C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171860);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0004FA94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00050264);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000503EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000506EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005073C);

void func_000507E8(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0x24) = 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000507F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00050898);

void func_0005091C(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00050924);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000509F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00050B30);

s32 func_00050C38(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00050C40);

void func_00050DD4(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK (**)(s32, s32, void *, void *, s32, s32, s32), 0x67C)(arg1, arg2, arg0 + 8, arg0 + 0x1D4, M2C_FIELD(arg0, s32 *, 0x66C), M2C_FIELD(arg0, s32 *, 0x674), M2C_FIELD(arg0, s32 *, 0x678));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00050E10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00050EF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00050FD0);

s32 func_00051108(void *arg0) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = scePaf_8F12B63A(arg0 + 0x258);
    if (temp_v0 != 0) {
        func_000506EC(temp_v0);
        var_v0 = 0;
    } else {
        func_0008A928(arg0 + 8, M2C_FIELD(arg0, s32 *, 0x66C), 1);
        var_v0 = 1;
    }
    return var_v0;
}

s32 func_00051160(s32 arg0) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = scePaf_8F12B63A(arg0 + 0x258);
    if (temp_v0 != 0) {
        func_000506EC(temp_v0);
        var_v0 = 0;
    } else {
        jpeg_abort(arg0 + 8);
        var_v0 = 1;
    }
    return var_v0;
}

s32 func_000511B0(void *arg0) {
    s32 temp_v0;

    jpeg_destroy_decompress(arg0 + 8);
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x65C);
    if (temp_v0 != 0) {
        scePaf_83944053(temp_v0);
        M2C_FIELD(arg0, s32 *, 0x65C) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x66C) != 0) {
        M2C_FIELD(arg0, s32 *, 0x66C) = 0;
    }
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00051204);

void func_00051290(void) {
    func_00051204(1, 0xFFFF);
}

void func_000512B0(void) {
    func_00051204(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000512D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000512F4);

void func_00051318(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
}

void func_00051328(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
}

void func_00051338(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
    scePaf_4E67BB08(arg0);
}

s32 func_00051360(s32 arg0, u32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (arg1 >= 8U) {
        var_v1 = func_0009CE3C(arg0, 0, (s32) arg1) == 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000513A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000514C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171880);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000515D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000518A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000519AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00051BA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00051D84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00051F40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00052014);

s32 func_000520E8(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000520F0);

void func_00052230(void *arg0) {
    func_000533A8(M2C_FIELD(arg0, s32 *, 0x10));
}

void func_0005224C(void *arg0) {
    func_000534B4(M2C_FIELD(arg0, s32 *, 0x10));
}

void func_00052268(void *arg0) {
    func_00053500(M2C_FIELD(arg0, s32 *, 0x10));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00052284);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000522D4);

void func_00052360(void) {
    func_000522D4(1, 0xFFFF);
}

void func_00052380(void) {
    func_000522D4(0, 0xFFFF);
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001718F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000523A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000524AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000524D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00052548);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00052628);

void func_000527D4(void *arg0) {
    s32 temp_v0;

    if (M2C_FIELD(arg0, u8 *, 0) == 0) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x20);
        if (temp_v0 == 0) {

        } else {
            scePaf_83944053(temp_v0);
        }
        if (M2C_FIELD(arg0, s32 *, 0x40) != 0) {
            scePaf_545FE2DA(M2C_FIELD(arg0, s32 *, 0x40));
            M2C_FIELD(arg0, s32 *, 0x40) = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x44) = 0;
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
        M2C_FIELD(arg0, s32 *, 0x4C) = 0;
        scePaf_211A764A(arg0 + 4, arg0 + 8, arg0 + 0xC);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00052850);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000528DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00052930);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00052978);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00052A6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00052AF0);

void func_00052B98(void *arg0) {
    func_000A0B78(M2C_FIELD(arg0, s32 *, 4));
}

void func_00052BB4(void *arg0) {
    scePaf_7333E75A(M2C_FIELD(arg0, s32 *, 4));
}

void func_00052BD0(void *arg0) {
    func_000AC6C0(M2C_FIELD(arg0, s32 *, 4));
}

void func_00052BEC(void *arg0) {
    func_000A0B68(M2C_FIELD(arg0, s32 *, 4));
}

void func_00052C08(void *arg0) {
    func_000A15F8(M2C_FIELD(arg0, s32 *, 4));
}

void func_00052C24(void *arg0) {
    func_000A15C8(M2C_FIELD(arg0, s32 *, 4));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00052C40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00052CB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00052DB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00052ED8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000530E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00053280);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000533A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000534B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00053500);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000535C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00053628);

void func_00053690(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
}

void func_000536A0(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
}

void func_000536B0(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000536D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171938);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171944);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005376C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000537E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005385C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000539B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00053B7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00053E40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00054084);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005431C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000544C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00054520);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00054654);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00054730);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00054D78);

void func_00055250(s32 *arg0, s32 arg1, s32 arg2) {
    scePaf_503BA324(arg1, 1, arg2, *arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00055274);

s32 func_000552E0(void) {
    return 0;
}

s32 func_000552E8(s32 *arg0) {
    s32 temp_s1;

    scePaf_2FA84441(*arg0, 0, 2);
    temp_s1 = scePaf_84BD418F(*arg0);
    scePaf_2FA84441(*arg0, 0, 0);
    return temp_s1;
}

void func_00055340(void) {
    func_000553A0();
}

s32 func_0005535C(void) {
    return 0;
}

void func_00055364(void) {
    func_0005544C();
}

s32 func_00055380(void) {
    return 0;
}

s32 func_00055388(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 func_00055390(void) {
    return 0;
}

void func_00055398(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000553A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005544C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00055518);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171954);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171958);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171964);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005567C);

s32 func_00055770(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00055778);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00055928);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00055A60);

s32 func_00055B1C(void) {
    return 1;
}

s32 func_00055B24(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_v0 != 0) {
        scePaf_83944053(temp_v0);
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x44);
    if (temp_v0_2 != 0) {
        func_0006A618(temp_v0_2);
        M2C_FIELD(arg0, s32 *, 0x44) = 0;
    }
    func_00058D4C(M2C_FIELD(arg0, s32 *, 0x14));
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00055B88);

void func_00055C14(void) {
    func_00055B88(1, 0xFFFF);
}

void func_00055C34(void) {
    func_00055B88(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00055C54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00055CA0);

void func_00055CEC(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
}

void func_00055CFC(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
}

void func_00055D0C(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00055D34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00055D74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00055EAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171984);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00055FCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000561E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000563FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000565E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00056708);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000567D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00056908);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00056B7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00056D04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00056E58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00057000);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00057358);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000575B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005765C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00057728);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00057818);

s32 func_00057908(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00057910);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00057B08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00057BC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00057D38);

s32 func_00057E84(void *arg0) {
    return func_00058A64(M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 0x1C)) != 0;
}

s32 func_00057EB0(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00057EB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00057F24);

void func_00057FB0(void) {
    func_00057F24(1, 0xFFFF);
}

void func_00057FD0(void) {
    func_00057F24(0, 0xFFFF);
}

s32 func_00057FF0(s32 arg0, u32 arg1, s32 arg2, u32 arg3) {
    s32 var_a2;
    u32 temp_a0;
    u32 var_a3;

    var_a3 = arg3;
    temp_a0 = arg0 & arg2;
    var_a2 = 0;
    if (arg1 < var_a3) {
        do {
            var_a3 -= arg1;
            var_a2 |= temp_a0 << var_a3;
        } while (arg1 < var_a3);
    }
    if (var_a3 != 0) {
        var_a2 |= temp_a0 >> (arg1 - var_a3);
    }
    return var_a2;
}

void func_00058030(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK (**)(s32, s32, s32, s32, s32, s32, s32, s32), 0x2C)(arg1, arg2, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, s32 *, 0x30));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00058070);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00058090);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000580B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000580D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00058100);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000581E0);

void func_00058420(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x58);
    if (temp_v0 == 0) {

    } else {
        scePaf_545FE2DA(temp_v0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {

    } else {
        scePaf_83944053(M2C_FIELD(arg0, s32 *, 0x10));
    }
}

void func_00058478(s32 arg0, s32 arg1, s32 arg2) {
    scePaf_503BA324(arg1, 1, arg2, arg0);
}

void func_0005849C(s32 arg0, s32 arg1, s32 arg2) {
    scePaf_2FA84441(arg0, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000584B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000584E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000585F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000586C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00058760);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000588B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00058998);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000589D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00058A38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00058A64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00058AC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00058B08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00058B68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00058B90);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171A5C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171A9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00058BB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00058D4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", setByteArray);

void _TIFFsetByteArray(s32 arg0, s32 arg1, s32 arg2) {
    setByteArray(arg0, arg1, arg2, 1);
}

void _TIFFsetString(s32 arg0, M2C_UNK arg1) {
    setByteArray(arg0, arg1, scePaf_CA79D58B(arg1) + 1, 1);
}

void _TIFFsetNString(s32 arg0, s32 arg1, s32 arg2) {
    setByteArray(arg0, arg1, arg2, 1);
}

void _TIFFsetShortArray(s32 arg0, s32 arg1, s32 arg2) {
    setByteArray(arg0, arg1, arg2, 2);
}

void _TIFFsetLongArray(s32 arg0, s32 arg1, s32 arg2) {
    setByteArray(arg0, arg1, arg2, 4);
}

void _TIFFsetFloatArray(s32 arg0, s32 arg1, s32 arg2) {
    setByteArray(arg0, arg1, arg2, 4);
}

void _TIFFsetDoubleArray(s32 arg0, s32 arg1, s32 arg2) {
    setByteArray(arg0, arg1, arg2, 8);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00058F44);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171AA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00059054);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000590E4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171B04);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171B0C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171B10);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171B18);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171B48);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171B54);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171B74);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171BAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171BC8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171BE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171C08);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171C28);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171C50);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171C7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005A680);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005A750);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005A7C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005A844);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005B91C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005B994);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005BA44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005BC44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005BC84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005BD98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005C010);

void func_0005C0BC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0;
    func_0005CB58();
}

s32 func_0005C0E0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 func_0005C0E8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14) == 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005C0F4);

M2C_UNK *_TIFFGetFieldInfo(s32 *arg0) {
    *arg0 = 0xA6;
    return &D_00172674;
}

M2C_UNK *_TIFFGetExifFieldInfo(s32 *arg0) {
    *arg0 = 0x39;
    return &D_00173720;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171E1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171E28);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171E38);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171E44);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171E50);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171E60);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171E6C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171E88);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171E98);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171EA4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171EB0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171EBC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171ECC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171EE0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171EE8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171EF0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171F00);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171F0C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171F1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171F2C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171F3C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171F4C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171F5C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171F68);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171F74);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171F88);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171F94);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171FA0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171FAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171FB8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171FC8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171FDC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00171FF0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172000);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017200C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172020);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172034);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172040);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017204C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172054);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172064);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172070);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172088);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172094);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001720A4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001720B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001720BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001720C8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001720D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001720E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001720E8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001720F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172104);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172110);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172120);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172130);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172140);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172150);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172160);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017216C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017217C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017218C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001721A0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001721B4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001721C8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001721DC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001721E8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001721F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172200);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017220C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172218);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172228);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172238);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172248);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017225C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172274);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172288);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017229C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001722A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001722B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001722C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001722D4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001722E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001722F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001722F8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172314);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172320);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172334);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172348);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172360);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172370);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017237C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172390);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001723A4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001723B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001723C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001723D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001723E4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001723F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172408);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017241C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017242C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017243C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017244C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172460);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172474);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172488);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017249C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001724AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001724BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001724CC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001724E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001724F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172504);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172514);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172528);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017253C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172548);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017255C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172570);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017257C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017258C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017259C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001725B4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001725CC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001725DC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001725F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172604);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172610);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017261C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172630);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172648);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017265C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00172674);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017336C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017337C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173384);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173394);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001733A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001733B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001733D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001733E4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001733F8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017340C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173424);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017343C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173450);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173460);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173470);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173484);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173498);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001734A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001734B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001734C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001734CC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001734D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001734E4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001734F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001734FC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173508);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017351C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173530);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173540);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173550);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173560);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173574);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173580);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017359C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001735B4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001735CC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001735E8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001735F8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173608);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173618);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173624);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173630);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017363C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017364C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017365C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017366C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173680);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173698);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001736AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001736B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001736C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001736D0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001736DC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001736F8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173710);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173720);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", _TIFFSetupFieldInfo);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", tagCompare);

void func_0005C508(void **arg0, void **arg1) {
    scePaf_66FE90D7(M2C_FIELD(*arg0, s32 *, 0x10), M2C_FIELD(*arg1, s32 *, 0x10));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005C530);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005C5EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005C638);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005C66C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005C674);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005C67C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", _TIFFSampleToTagType);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFFindFieldInfo);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFFindFieldInfoByName);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005C940);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005CA98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005CB58);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173C94);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173CBC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173CD4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173CE0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173D00);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173D24);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173D48);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173D70);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173D78);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173DB8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173DF8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173E48);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173E58);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173E64);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173E70);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173E80);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173E88);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173E90);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173EB4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173EE8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173F18);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173F5C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173F7C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173FA4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00173FC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005DCFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", EstimateStripByteCounts);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", MissingRequired);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", CheckDirCount);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFFetchData);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFFetchString);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", cvtRational);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001741DC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00174218);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00174234);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00174260);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00174294);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001742A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001742DC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00174310);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017434C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00174368);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00174378);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017438C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001743AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001743D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFFetchRational);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFFetchFloat);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFFetchByteArray);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFFetchShortArray);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFFetchShortPair);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFFetchLongArray);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFFetchRationalArray);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFFetchFloatArray);

s32 TIFFFetchDoubleArray(void) {
    return TIFFFetchData() != 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFFetchAnyArray);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFFetchNormalTag);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFFetchPerSampleShorts);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFFetchPerSampleLongs);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFFetchPerSampleAnys);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFFetchStripThing);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFFetchRefBlackWhite);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", ChopUpSingleUncompressedStrip);

s32 func_0005FEFC(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_001A5068;
    D_001A5068 = arg0;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005FF0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0005FFE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000600C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00060130);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001743F8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00174414);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00174448);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00174460);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00174488);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001744D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001744E8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00174514);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00174524);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00174554);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00174568);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00174594);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001745C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001745D0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001745F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00174628);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFRGBAImageOK);

void TIFFRGBAImageEnd(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x38);
    if (temp_a0 != 0) {
        func_0006A618(temp_a0);
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x3C);
    if (temp_a0_2 != 0) {
        func_0006A618(temp_a0_2);
        M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    }
    temp_a0_3 = M2C_FIELD(arg0, s32 *, 0x40);
    if (temp_a0_3 != 0) {
        func_0006A618(temp_a0_3);
        M2C_FIELD(arg0, s32 *, 0x40) = 0;
    }
    temp_a0_4 = M2C_FIELD(arg0, s32 *, 0x44);
    if (temp_a0_4 != 0) {
        func_0006A618(temp_a0_4);
        M2C_FIELD(arg0, s32 *, 0x44) = 0;
    }
    temp_a0_5 = M2C_FIELD(arg0, s32 *, 0x48);
    if (temp_a0_5 != 0) {
        func_0006A618(temp_a0_5);
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
    }
    temp_a0_6 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_a0_6 == 0) {

    } else {
        func_0006A618(temp_a0_6);
        func_0006A618(M2C_FIELD(arg0, s32 *, 0x28));
        func_0006A618(M2C_FIELD(arg0, s32 *, 0x2C));
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", isCCITTCompression);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000605C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00060BFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00060C88);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001747A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00060DB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00060F3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00061298);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00174BC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006174C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00061A28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", put8bitcmaptile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", put4bitcmaptile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", put2bitcmaptile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", put1bitcmaptile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", putgreytile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", put16bitbwtile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", put1bitbwtile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", put2bitbwtile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", put4bitbwtile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", putRGBcontig8bittile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", putRGBcontig8bitMaptile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", putRGBAAcontig8bittile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", putRGBUAcontig8bittile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", putRGBcontig16bittile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", putRGBAAcontig16bittile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", putRGBUAcontig16bittile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", putRGBcontig8bitCMYKtile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", putRGBcontig8bitCMYKMaptile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", putRGBseparate8bittile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", putRGBseparate8bitMaptile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", putRGBAAseparate8bittile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", putRGBUAseparate8bittile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", putRGBseparate16bittile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", putRGBAAseparate16bittile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", putRGBUAseparate16bittile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", putcontig8bitCIELab);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", putcontig8bitYCbCr44tile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", putcontig8bitYCbCr42tile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", putcontig8bitYCbCr41tile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", putcontig8bitYCbCr22tile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", putcontig8bitYCbCr21tile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", putcontig8bitYCbCr11tile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", initYCbCrConversion);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", initCIELabConversion);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", makebwmap);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", setupMap);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", checkcmap);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", cvtcmap);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", makecmap);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", buildMap);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", pickTileContigCase);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", pickTileSeparateCase);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFReadRGBAStrip);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFReadRGBATile);

s32 func_00067A5C(void) {
    return 0;
}

void func_00067A64(void) {
}

void func_00067A6C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0xE8) = &D_00175084;
    if (arg1 != 0x4D4D) {
        M2C_FIELD(arg0, M2C_UNK **, 0xE4) = &D_001750EC;
        return;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0xE4) = &D_001750B8;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) | 0x80);
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017507C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00175080);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00175084);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001750B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001750EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00067AAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00067B38);

s32 func_000680B4(s32 *arg0) {
    return *arg0;
}

s32 func_000680BC(s32 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = *arg0;
    *arg0 = arg1;
    return temp_v0;
}

s32 func_000680C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 func_000680D0(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    return temp_v0;
}

s32 func_000680DC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x188);
}

s32 func_000680E4(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x188);
    M2C_FIELD(arg0, s32 *, 0x188) = arg1;
    return temp_v0;
}

s32 func_000680F0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

s32 func_000680F8(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    return temp_v0;
}

s32 func_00068104(void *arg0) {
    return __builtin_allegrex_ext(M2C_FIELD(arg0, s32 *, 0xC), 0xA, 1);
}

s32 func_00068110(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xEC);
}

u16 func_00068118(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0xF0);
}

s32 func_00068120(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xF4);
}

s32 func_00068128(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10C);
}

s32 func_00068130(void *arg0) {
    return __builtin_allegrex_ext(M2C_FIELD(arg0, s32 *, 0xC), 7, 1);
}

s32 func_0006813C(void *arg0) {
    return __builtin_allegrex_ext(M2C_FIELD(arg0, s32 *, 0xC), 0xE, 1);
}

s32 func_00068148(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC) & 1;
}

s32 func_00068154(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0xDC) == 0x4D4D;
}

s32 func_00068164(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18C);
}

s32 func_0006816C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x190);
}

s32 func_00068174(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x194);
}

s32 func_0006817C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x198);
}

s32 func_00068184(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x19C);
}

s32 func_0006818C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x180);
}

s32 func_00068194(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x184);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006819C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000682D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006839C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00068514);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017547C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFFillStrip);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFReadTile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFReadEncodedTile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00068B54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00068D9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00068F88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00069068);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00069134);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00069244);

void func_000692C8(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000692D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000692FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00069334);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00069364);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00069394);

u32 func_000693AC(void *arg0, s32 arg1, u32 arg2, s32 arg3) {
    u32 var_a4;

    var_a4 = arg1 * arg2;
    if (arg2 != 0) {
        if ((var_a4 / arg2) != arg1) {
            func_0005FFE0(M2C_FIELD(arg0, s32 *, 0x188), M2C_FIELD(arg0, s32 *, 0), (s32) "Integer overflow in %s", arg3);
            var_a4 = 0;
        }
    }
    return var_a4;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00069404);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00069488);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00175798);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001757A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000694F8);

void TIFFStripSize(s32 arg0) {
    u32 temp_a1;
    u32 temp_a2;
    void *temp_v0;

    temp_v0 = arg0 + 0x20;
    temp_a2 = M2C_FIELD(temp_v0, u32 *, 0x14);
    temp_a1 = M2C_FIELD(temp_v0, u32 *, 0x3C);
    func_000694F8(arg0, (s32) ((temp_a2 < temp_a1) ? temp_a2 : temp_a1));
}

void TIFFDefaultStripSize(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK (**)(), 0x154)();
}

u32 _TIFFDefaultStripSize(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a1;
    u32 temp_lo;

    var_a1 = arg1;
    if (var_a1 <= 0) {
        temp_v0 = func_000697C4(arg0);
        var_a1 = 0x2000;
        if (temp_v0 != 0) {
            temp_lo = 0x2000U / (u32) temp_v0;
            var_a1 = (s32) ((temp_lo != 0) ? temp_lo : 1U);
        }
    }
    return (u32) var_a1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000697C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFSwabShort);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFSwabLong);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFSwabArrayOfShort);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFSwabArrayOfTriples);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFSwabArrayOfLong);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFSwabDouble);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFSwabArrayOfDouble);

M2C_UNK *TIFFGetBitRevTable(s32 arg0) {
    M2C_UNK *var_v0;

    var_v0 = &D_0017581C;
    if (arg0 == 0) {
        var_v0 = &D_0017591C;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFReverseBits);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", summarize);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017581C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017591C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", multiply);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFComputeTile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFCheckTile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFNumberOfTiles);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFTileRowSize);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFVTileSize);

void TIFFTileSize(void *arg0) {
    TIFFVTileSize((s32) arg0, M2C_FIELD(arg0, s32 *, 0x40));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFDefaultTileSize);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", _TIFFDefaultTileSize);

void func_0006A3CC(void) {
    sceIoRead();
}

void func_0006A3E8(void) {
    sceIoWrite();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006A404);

void func_0006A42C(s32 arg0) {
    sceIoClose(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006A448);

s32 func_0006A4A4(void) {
    return 0;
}

void func_0006A4AC(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006A4B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006A52C);

void func_0006A5FC(void) {
    scePaf_5FAC9869();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006A618);

void func_0006A634(void) {
    scePaf_8FC65EB0();
}

void func_0006A650(void) {
    scePaf_6829D7AF();
}

void func_0006A66C(void) {
    scePaf_F95EA3F1();
}

void func_0006A688(void) {
    scePaf_3FBD9639();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006A6A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006A6B0);

s32 func_0006A6BC(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_001A358C;
    D_001A358C = arg0;
    return temp_v0;
}

s32 func_0006A6CC(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_001A506C;
    D_001A506C = arg0;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006A6DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006A7B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006B064);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006B3D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006B50C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006B6A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006B7CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006B904);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006BB18);

void func_0006BBAC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xF8) = arg1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006BBB4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00175E0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006BC54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006BE8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006C8DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006C954);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006CAE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006CD8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFYCbCrtoRGB);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFYCbCrToRGBInit);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006D370);

void func_0006D3E4(s32 arg0) {
    func_0006D370(arg0, (s32) &D_00175EFC);
}

void func_0006D404(s32 arg0) {
    func_0006D370(arg0, (s32) &D_00175F08);
}

void func_0006D424(s32 arg0) {
    func_0006D370(arg0, (s32) &D_00175F10);
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00175EFC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00175F08);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00175F10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006D444);

void func_0006D4B8(s32 arg0) {
    func_0006D444(arg0, (s32) &D_00175EFC);
}

void func_0006D4D8(s32 arg0) {
    func_0006D444(arg0, (s32) &D_00175F08);
}

void func_0006D4F8(s32 arg0) {
    func_0006D444(arg0, (s32) &D_00175F10);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006D518);

s32 func_0006D544(void) {
    return 1;
}

s32 func_0006D54C(void) {
    return 1;
}

void func_0006D554(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006D55C);

s32 func_0006D618(s32 arg0, s32 arg1) {
    s32 var_v0;
    void *temp_s2;

    temp_s2 = func_0006D680(arg1 & 0xFFFF);
    func_0006D55C(arg0);
    var_v0 = 1;
    if (temp_s2 != NULL) {
        var_v0 = M2C_FIELD(temp_s2, s32 (**)(s32, s32), 8)(arg0, arg1);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006D680);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006D6E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", _TIFFWriteDirectory);

void TIFFWriteDirectory(void *arg0) {
    _TIFFWriteDirectory(arg0, 1);
}

s32 TIFFCheckpointDirectory(void *arg0) {
    s32 temp_s0;

    if (M2C_FIELD(arg0, s32 *, 0xA4) != 0) {

    } else {
        func_0006B3D8();
    }
    temp_s0 = _TIFFWriteDirectory(arg0, 0);
    func_0006BBAC(arg0, M2C_FIELD(arg0, s32 (**)(s32, M2C_UNK, M2C_UNK), 0x194)(M2C_FIELD(arg0, s32 *, 0x188), 0, 2));
    return temp_s0;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176078);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176098);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001760C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001760EC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176118);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFWriteNormalTag);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFSetupShortLong);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFSetupShort);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFWritePerSampleShorts);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFWritePerSampleAnys);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFSetupShortPair);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFWriteShortTable);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFWriteByteArray);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFWriteShortArray);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFWriteLongArray);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFWriteRationalArray);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", TIFFWriteFloatArray);

void TIFFWriteDoubleArray(void) {
    func_0006F340();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006EEA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006F24C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006F308);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006F340);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176378);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176398);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001763B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006F6C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017642C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176430);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176434);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176438);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017643C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176440);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176448);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017644C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176458);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176464);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017646C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176474);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176484);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176490);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017649C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001764AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001764BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001764C8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001764D0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001764E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001764EC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001764F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006F988);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006F9CC);

s32 func_0006F9EC(s32 arg0) {
    s32 temp_v1;
    s32 var_a0;
    void *temp_v0;

    temp_v0 = func_0006D680(arg0 & 0xFFFF);
    var_a0 = 0;
    if (temp_v0 != NULL) {
        temp_v1 = M2C_FIELD(temp_v0, s32 *, 8);
        if (temp_v1 != 0) {
            var_a0 = temp_v1 != (s32) &func_0006F9CC;
        }
    }
    return var_a0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006FA2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006FB00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006FB94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006FBC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006FBFC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017655C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001767EC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176A7C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176A84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006FC58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006FCB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006FD18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006FD9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0006FDFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00070524);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176BE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00071554);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00071884);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00071A2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00071B64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00071EE8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176CC0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176CE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176DE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176EE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176EEC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176F20);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176F28);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176F34);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176F40);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176F50);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176F68);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176F78);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176F88);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176F94);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00176F9C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00177078);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00177088);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017709C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001770AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001770C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001770D4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001770F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00177100);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00177134);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00072118);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000721D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00072384);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000726DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00072814);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000728A4);

void func_00072988(void *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 0x15C);
    temp_v1 = M2C_FIELD(temp_s1, s32 *, 0x4C);
    M2C_FIELD(arg0, s32 *, 0x1B4) = (s32) M2C_FIELD(temp_s1, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x1B0) = (s32) M2C_FIELD(temp_s1, s32 *, 0x34);
    if (temp_v1 == 0) {

    } else {
        func_0006A618(temp_v1);
    }
    if (M2C_FIELD(temp_s1, s32 *, 0x5C) == 0) {

    } else {
        func_0006A618(M2C_FIELD(temp_s1, s32 *, 0x5C));
    }
    temp_v1_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x15C), s32 *, 0x24);
    if (temp_v1_2 != 0) {
        func_0006A618(temp_v1_2);
    }
    func_0006A618((s32) M2C_FIELD(arg0, void **, 0x15C));
    M2C_FIELD(arg0, void **, 0x15C) = NULL;
    func_0006D55C((s32) arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00072A30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00072D70);

void func_0007304C(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00073054);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000731D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00073234);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00073DF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00073E84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00073F34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00073FC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000745B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007460C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00074668);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000747B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00074910);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00074970);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000749B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00074A2C);

s32 func_00074AA0(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        jpeg_set_defaults(arg0);
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00074AE8(s32 arg0, M2C_UNK arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        jpeg_set_colorspace(arg0, arg1);
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00074B40(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        jpeg_set_quality(arg0, arg1, arg2);
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00074BA8(s32 arg0, M2C_UNK arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        func_0008458C(arg0, arg1);
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00074C00(s32 arg0, M2C_UNK arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        func_000849A8(arg0, arg1);
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00074C58(void *arg0, void *arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = -1;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        var_v1 = func_00084A70(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 func_00074CC0(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_v1;

    var_v1 = -1;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        var_v1 = func_00084BA4(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 func_00074D28(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        func_000845E4(arg0);
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00074D70(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        func_00084910(arg0);
        var_v1 = 1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00074DB8);

s32 func_00074E0C(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        func_0008A69C(arg0);
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00074E54(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = -1;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        var_v1 = func_0008A928(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 func_00074EBC(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_v1;

    var_v1 = -1;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        var_v1 = func_0008AA20(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 func_00074F24(s32 arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        var_v1 = func_0008A588(arg0);
    }
    return var_v1;
}

s32 func_00074F6C(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        jpeg_abort(arg0);
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00074FB4(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        jpeg_destroy(arg0);
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00074FFC(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        var_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 (**)(void *, M2C_UNK, M2C_UNK, M2C_UNK), 8)(arg0, arg1, arg2, arg3);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007507C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00075094);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000750E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00075104);

void func_00075134(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x654) = (s32) M2C_FIELD(arg0, s32 *, 0x6D4);
    M2C_FIELD(arg0, s32 *, 0x658) = (s32) M2C_FIELD(arg0, s32 *, 0x6D8);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00075148);

void func_000751DC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x6D8) = (s32) (M2C_FIELD(arg0, s32 *, 0x6D8) - M2C_FIELD(arg0, s32 *, 0x658));
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017714C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017754C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0017F54C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0018F54C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0018F558);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0018F55C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0018F56C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0018F57C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0018F588);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0018F590);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0018F630);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000751F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000752A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000752B8);

void func_00075308(void *arg0, s32 arg1) {
    s32 temp_v0;

    if (arg1 > 0) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x66C);
        if (temp_v0 >= arg1) {
            M2C_FIELD(arg0, s32 *, 0x66C) = (s32) (temp_v0 - arg1);
            M2C_FIELD(arg0, s32 *, 0x668) = (s32) (M2C_FIELD(arg0, s32 *, 0x668) + arg1);
        } else {
            func_000752B8((s32) arg0);
        }
    }
}

void func_00075354(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007535C);

void func_000753AC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x668) = (s32) M2C_FIELD(arg0, s32 *, 0x6D4);
    M2C_FIELD(arg0, s32 *, 0x66C) = (s32) M2C_FIELD(arg0, s32 *, 0x6D8);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000753C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000753F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0018F668);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000754A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00075588);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000759F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00075C2C);

void func_00075E24(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(((arg1 * 4) + arg0), void **, 0x40);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x80) = 0;
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00075E40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00075E68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00075F6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000761EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000764F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000765D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00076828);

void func_0007694C(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x15C);
    M2C_FIELD(arg0, s32 *, 0x1B4) = (s32) M2C_FIELD(temp_s0, s32 *, 0x6C4);
    M2C_FIELD(arg0, s32 *, 0x1B0) = (s32) M2C_FIELD(temp_s0, s32 *, 0x6C8);
    if (temp_s0 != NULL) {
        if (M2C_FIELD(temp_s0, s32 *, 0x1CC) == 0) {

        } else {
            func_00074FB4((s32) temp_s0);
        }
        if (M2C_FIELD(temp_s0, s32 *, 0x6D4) != 0) {
            func_0006A618(M2C_FIELD(temp_s0, s32 *, 0x6D4));
        }
    }
    func_0006A618((s32) M2C_FIELD(arg0, void **, 0x15C));
    M2C_FIELD(arg0, void **, 0x15C) = NULL;
    func_0006D55C((s32) arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000769D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00076D74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00076E28);

void func_00077100(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00077108);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00077178);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007721C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0018F984);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00077348);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00077528);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00077740);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007782C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00077A40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00077ACC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00077B58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00077EA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00077FC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00078304);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00078390);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0018FA88);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0018FA98);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0018FACC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0018FAF8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0018FB08);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0018FB40);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0018FB78);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0018FBC0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0018FBE0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0018FBE8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0018FBF4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0018FC2C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0018FC58);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0018FC88);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0018FC98);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0018FCA8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0018FCD0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0018FCE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007841C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00078484);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00078650);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000786B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00078780);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000787F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000789BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00078A08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00078B00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00078EF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00079080);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00079150);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00079268);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00079358);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000793B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00079498);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00079500);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007956C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000796FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00079850);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00079A28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00079A84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00079B68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00079BD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00079C3C);

void func_00079E14(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00079E1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00079E90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00079EBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00079FC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007A0A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007A1F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007A37C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007A508);

void func_0007A538(void *arg0) {
    s32 temp_v1;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x15C);
    temp_v1 = M2C_FIELD(temp_s0, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x1B4) = (s32) M2C_FIELD(temp_s0, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x1B0) = (s32) M2C_FIELD(temp_s0, s32 *, 0x1C);
    if (temp_v1 != 0) {
        func_0006A618(temp_v1);
    }
    func_0006A618((s32) temp_s0);
    M2C_FIELD(arg0, void **, 0x15C) = NULL;
    func_0006D55C((s32) arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007A5A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007A78C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007A824);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007A968);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0018FEC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007AA60);

void func_0007AB7C(void *arg0) {
    func_0005FFE0(M2C_FIELD(arg0, s32 *, 0x188), M2C_FIELD(arg0, s32 *, 0), (s32) "LZWDecode: Bogus encoding, loop in the code table; scanline %d", M2C_FIELD(arg0, s32 *, 0xEC));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007ABAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0019000C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007B070);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007B4BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007B524);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", LZWEncode);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", LZWPostEncode);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", cl_hash);

void func_0007BABC(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    func_00083940();
    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x15C), s32 *, 0x64);
    if (temp_v0 != 0) {
        func_0006A618(temp_v0);
    }
    temp_v0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x15C), s32 *, 0x80);
    if (temp_v0_2 != 0) {
        func_0006A618(temp_v0_2);
    }
    func_0006A618((s32) M2C_FIELD(arg0, void **, 0x15C));
    M2C_FIELD(arg0, void **, 0x15C) = NULL;
    func_0006D55C((s32) arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007BB30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007BC14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007BE50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007BE6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007BEEC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190178);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190184);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190190);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001901A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001901C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001901D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001901F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190204);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190210);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190220);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190230);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190244);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190254);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190344);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190354);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0019037C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001903B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001903F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007BF20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007BF60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007BF84);

void func_0007BFD4(void *arg0, s32 arg1) {
    s32 temp_v0;

    if (arg1 > 0) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x654);
        if (temp_v0 >= arg1) {
            M2C_FIELD(arg0, s32 *, 0x654) = (s32) (temp_v0 - arg1);
            M2C_FIELD(arg0, s32 *, 0x650) = (s32) (M2C_FIELD(arg0, s32 *, 0x650) + arg1);
        } else {
            func_0007BF84((s32) arg0);
        }
    }
}

void func_0007C020(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007C028);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007C108);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007C21C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007C458);

s32 func_0007C5F0(void) {
    return 1;
}

s32 func_0007C5F8(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007C600);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007C84C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0019042C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007C8C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007D230);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007D2D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007D388);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007DE18);

void func_0007E298(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007E2A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007E30C);

void func_0007E3A8(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x15C);
    if (temp_s0 != NULL) {
        if (scePaf_8F12B63A(temp_s0 + 0x250) != 0) {

        } else {
            jpeg_destroy((s32) temp_s0);
        }
        if (M2C_FIELD(temp_s0, s32 *, 0x6A8) != 0) {
            func_0006A618(M2C_FIELD(temp_s0, s32 *, 0x6A8));
            M2C_FIELD(temp_s0, s32 *, 0x6A8) = 0;
        }
        temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x6E0);
        if (temp_a0 != 0) {
            func_0006A618(temp_a0);
            M2C_FIELD(temp_s0, s32 *, 0x6E0) = 0;
        }
        temp_a0_2 = M2C_FIELD(temp_s0, s32 *, 0x6E8);
        if (temp_a0_2 != 0) {
            func_0006A618(temp_a0_2);
            M2C_FIELD(temp_s0, s32 *, 0x6E8) = 0;
        }
        temp_a0_3 = M2C_FIELD(temp_s0, s32 *, 0x6F0);
        if (temp_a0_3 != 0) {
            func_0006A618(temp_a0_3);
            M2C_FIELD(temp_s0, s32 *, 0x6F0) = 0;
        }
        temp_a0_4 = M2C_FIELD(temp_s0, s32 *, 0x700);
        if (temp_a0_4 != 0) {
            func_0006A618(temp_a0_4);
            M2C_FIELD(temp_s0, s32 *, 0x700) = 0;
        }
        temp_a0_5 = M2C_FIELD(temp_s0, s32 *, 0x6F8);
        if (temp_a0_5 != 0) {
            func_0006A618(temp_a0_5);
            M2C_FIELD(temp_s0, s32 *, 0x6F8) = 0;
        }
        if (!(M2C_FIELD(arg0, s32 *, 0xC) & 0x800)) {
            temp_a0_6 = M2C_FIELD(arg0, s32 *, 0x178);
            if (temp_a0_6 != 0) {
                func_0006A618(temp_a0_6);
                M2C_FIELD(arg0, s32 *, 0x178) = 0;
                M2C_FIELD(arg0, s32 *, 0x17C) = 0;
            }
        }
        func_0006A618((s32) temp_s0);
        M2C_FIELD(arg0, void **, 0x15C) = NULL;
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007E4DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007E7E8);

s32 func_0007E854(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x15C);
    if (temp_v0 == 0) {

    } else {
        func_0006A618(temp_v0);
    }
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007E888);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007EB30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007EBC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007ED68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007EDB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007EFF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007F72C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007F968);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007FAE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007FCDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0007FEE0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190800);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190804);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190808);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0019080C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190810);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190814);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190818);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0019081C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000803B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00080480);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000804AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000805F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190898);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001908A0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001908A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00080624);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190980);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190994);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001909BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001909F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190A18);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190A30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008098C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00080AC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00080AFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008192C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00081BE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00081E60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00082078);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00082140);

void func_00082158(void *arg0) {
    s32 temp_a0;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x15C);
    func_00083940();
    temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x90);
    M2C_FIELD(arg0, s32 *, 0x1B4) = (s32) M2C_FIELD(temp_s0, s32 *, 0x7C);
    M2C_FIELD(arg0, s32 *, 0x1B0) = (s32) M2C_FIELD(temp_s0, s32 *, 0x80);
    if (temp_a0 == 0) {

    } else {
        func_0006A618(temp_a0);
    }
    if (M2C_FIELD(temp_s0, s32 *, 0x94) == 0) {

    } else {
        func_0006A618(M2C_FIELD(temp_s0, s32 *, 0x94));
    }
    if (M2C_FIELD(temp_s0, s32 *, 0x98) == 0) {

    } else {
        func_0006A618(M2C_FIELD(temp_s0, s32 *, 0x98));
    }
    if (M2C_FIELD(temp_s0, s32 *, 0x84) == 0) {

    } else {
        func_0006A618(M2C_FIELD(temp_s0, s32 *, 0x84));
    }
    if (M2C_FIELD(temp_s0, s32 *, 0x88) == 0) {

    } else {
        func_0006A618(M2C_FIELD(temp_s0, s32 *, 0x88));
    }
    if (M2C_FIELD(temp_s0, s32 *, 0x8C) == 0) {

    } else {
        func_0006A618(M2C_FIELD(temp_s0, s32 *, 0x8C));
    }
    if (M2C_FIELD(temp_s0, s32 *, 0x70) & 1) {
        if (M2C_FIELD(arg0, s32 *, 8) != 1) {
            func_000B0DCC(temp_s0 + 0x30);
        } else {
            func_000B3E20(temp_s0 + 0x30);
        }
    }
    if (M2C_FIELD(temp_s0, s32 *, 0x68) != 0) {
        func_0006A618(M2C_FIELD(temp_s0, s32 *, 0x68));
    }
    func_0006A618((s32) temp_s0);
    M2C_FIELD(arg0, void **, 0x15C) = NULL;
    func_0006D55C((s32) arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000822A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000824B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190B18);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190B1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008257C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000826D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000827F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00082964);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00082A80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00082C1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00082D64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00082E74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00083058);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000830D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00083164);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00083328);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00083444);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00083628);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00083698);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00083748);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000837F4);

void func_00083888(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00083890);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00083940);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190CC4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190CD0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190CE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190CF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00083974);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00083C54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00083CC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00083CD8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00083D58);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190D70);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190D78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00083D8C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190DB4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190DC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00083EB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00083F3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00083F70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00084024);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000840EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00084174);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00084268);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190E50);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190E54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00084300);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00084430);

void func_00084554(s32 arg0) {
    jpeg_destroy(arg0);
}

void func_00084570(s32 arg0) {
    jpeg_abort(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008458C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000845E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008485C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000848EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00084910);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000849A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00084A70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00084BA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00084CEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00084DFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00084E5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00084F84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", emit_byte);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", emit_marker);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", emit_2bytes);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", emit_dqt);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", emit_dht);

void emit_dac(void) {
}

void emit_dri(s32 arg0) {
    emit_marker(arg0, 0xDD);
    emit_2bytes(arg0, 4);
    emit_2bytes(arg0, M2C_FIELD(arg0, s32 *, 0xC0));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", emit_sof);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", emit_sos);

void emit_jfif_app0(s32 arg0) {
    emit_marker(arg0, 0xE0);
    emit_2bytes(arg0, 0x10);
    emit_byte(arg0, 0x4AU);
    emit_byte(arg0, 0x46U);
    emit_byte(arg0, 0x49U);
    emit_byte(arg0, 0x46U);
    emit_byte(arg0, 0U);
    emit_byte(arg0, M2C_FIELD(arg0, u8 *, 0xCC));
    emit_byte(arg0, M2C_FIELD(arg0, u8 *, 0xCD));
    emit_byte(arg0, M2C_FIELD(arg0, u8 *, 0xCE));
    emit_2bytes(arg0, (s32) M2C_FIELD(arg0, u16 *, 0xD0));
    emit_2bytes(arg0, (s32) M2C_FIELD(arg0, u16 *, 0xD2));
    emit_byte(arg0, 0U);
    emit_byte(arg0, 0U);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", emit_adobe_app14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", write_marker_header);

void write_marker_byte(void) {
    emit_byte();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", write_file_header);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", write_frame_header);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", write_scan_header);

void write_file_trailer(s32 arg0) {
    emit_marker(arg0, 0xD9);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", write_tables_only);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jinit_marker_writer);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00085CC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00085F54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000864E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008660C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00086824);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00086A6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00086AB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00086B48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jpeg_abort);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jpeg_destroy);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jpeg_alloc_quant_table);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jpeg_alloc_huff_table);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jpeg_add_quant_table);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jpeg_set_linear_quality);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jpeg_quality_scaling);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jpeg_set_quality);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", add_huff_table);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", std_huff_tables);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jpeg_set_defaults);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190E98);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00190F98);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191098);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001910AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001910B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001910CC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001910D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001910EC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191190);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001911A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jpeg_default_colorspace);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jpeg_set_colorspace);

s32 fill_a_scan(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    M2C_FIELD(arg0, s32 *, 0) = 1;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14) = arg2;
    M2C_FIELD(arg0, s32 *, 0x18) = arg3;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg4;
    M2C_FIELD(arg0, s32 *, 0x20) = arg5;
    return arg0 + 0x24;
}

void *fill_scans(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 var_v1;
    void *var_a0;

    var_a0 = arg0;
    var_v1 = 0;
    if (arg1 > 0) {
        do {
            M2C_FIELD(var_a0, s32 *, 4) = var_v1;
            var_v1 += 1;
            M2C_FIELD(var_a0, s32 *, 0) = 1;
            M2C_FIELD(var_a0, s32 *, 0x14) = arg2;
            M2C_FIELD(var_a0, s32 *, 0x18) = arg3;
            M2C_FIELD(var_a0, s32 *, 0x1C) = arg4;
            M2C_FIELD(var_a0, s32 *, 0x20) = arg5;
            var_a0 += 0x24;
        } while (var_v1 < arg1);
    }
    return var_a0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00087674);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", start_pass_phuff);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jcphuff_dump_buffer);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jcphuff_flush_bits);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", emit_buffered_bits);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", emit_eobrun);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jcphuff_emit_restart);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", encode_mcu_DC_first);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", encode_mcu_AC_first);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", encode_mcu_DC_refine);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", encode_mcu_AC_refine);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", finish_pass_phuff);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", finish_pass_gather_phuff);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jinit_phuff_encoder);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jcphuff_emit_bits);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", start_pass_prep);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", expand_bottom_edge);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", pre_process_data);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", pre_process_context);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", create_context_buffer);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jinit_c_prep_controller);

void start_pass_downsample(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", expand_right_edge);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", sep_downsample);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", int_downsample);

void fullsize_downsample(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    func_00095A84(arg2, 0, arg3, 0, M2C_FIELD(arg0, s32 *, 0xE4), M2C_FIELD(arg0, s32 *, 0x1C));
    expand_right_edge(arg3, M2C_FIELD(arg0, s32 *, 0xE4), M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg1, s32 *, 0x1C) * 8);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", h2v1_downsample);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", h2v2_downsample);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", h2v2_smooth_downsample);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", fullsize_smooth_downsample);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jinit_downsampler);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jpeg_CreateDecompress);

void jpeg_destroy_decompress(s32 arg0) {
    jpeg_destroy(arg0);
}

void jpeg_abort_decompress(s32 arg0) {
    jpeg_abort(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", default_decompress_parms);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jpeg_read_header);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008A3BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008A588);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008A69C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008A7F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008A928);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008AA20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008AB50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008ABEC);

void func_0008ACDC(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0x24) = 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008ACEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008ADB8);

void func_0008AE3C(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008AE44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", start_pass_huff_decoder);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jpeg_make_d_derived_tbl);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jpeg_fill_bit_buffer);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jpeg_huff_decode);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", process_restart);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", decode_mcu);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jinit_huff_decoder);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008BD60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008BDA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008C024);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008C224);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008C324);

void func_0008C380(void *arg0) {
    *M2C_FIELD(arg0, M2C_UNK ***, 0x1B0) = &func_0008C394;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008C394);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008C4B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008C518);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008C590);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008C658);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008CAB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008CE6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008D224);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008D580);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008D6F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008D9D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008DAF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008DCB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008DFE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008E0F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008E28C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008E3A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008E66C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008E728);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008E8B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008E8D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008E980);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008EAE0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001912A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001912E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008EBBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008EE8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008EF3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008F1E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008F3D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008F4D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008F52C);

void func_0008F660(void *arg0) {
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x1C0);
    M2C_FIELD(temp_v1, s32 *, 0x24) = 0;
    M2C_FIELD(temp_v1, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 0x70);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008F674);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008F790);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008F7F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008F9A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008FC24);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008FCF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0008FFFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000900A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00090368);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00090630);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009077C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00090C70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00090D28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00090E48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00090EF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00091010);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00091120);

void func_00091208(void *arg0) {
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 0x1C0);
    M2C_FIELD(temp_a1, s32 *, 0x5C) = (s32) M2C_FIELD(arg0, s32 *, 0x134);
    M2C_FIELD(temp_a1, s32 *, 0x60) = (s32) M2C_FIELD(arg0, s32 *, 0x70);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00091220);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00091394);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009139C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000913A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000914A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00091520);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000915E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000916D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009184C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00091B0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00091B40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", emit_message);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", format_message);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", reset_error_mgr);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jpeg_std_error);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", out_of_memory);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", alloc_small);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", alloc_large);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", alloc_sarray);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", alloc_barray);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", request_virt_sarray);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", request_virt_barray);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", realize_virt_arrays);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", do_sarray_io);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", do_barray_io);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", access_virt_sarray);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", access_virt_barray);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", free_pool);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", self_destruct);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00092F40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jpeg_get_small);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jpeg_free_small);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jpeg_get_large);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jpeg_free_large);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jpeg_mem_available);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jpeg_open_backing_store);

s32 jpeg_mem_init(void) {
    return 0;
}

void jpeg_mem_term(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", select_ncolors);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", output_value);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", largest_input_value);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", create_colormap);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", create_colorindex);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", make_odither_array);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", create_odither_tables);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", color_quantize);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", color_quantize3);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", quantize_ord_dither);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", quantize3_ord_dither);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", quantize_fs_dither);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", alloc_fs_workspace);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", start_pass_1_quant);

void finish_pass_1_quant(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", new_color_map_1_quant);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jinit_1pass_quantizer);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00094168);

void *func_000941F8(void *arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_a1;
    s32 var_a2;
    void *var_a0;
    void *var_a3;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = 0;
    var_a3 = NULL;
    if (var_a1 > 0) {
        do {
            temp_v1 = M2C_FIELD(var_a0, s32 *, 0x1C);
            var_a1 -= 1;
            if ((var_a2 < temp_v1) && (M2C_FIELD(var_a0, s32 *, 0x18) > 0)) {
                var_a2 = temp_v1;
                var_a3 = var_a0;
            }
            var_a0 += 0x20;
        } while (var_a1 != 0);
    }
    return var_a3;
}

void *func_00094238(void *arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_a1;
    s32 var_a2;
    void *var_a0;
    void *var_a3;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = 0;
    var_a3 = NULL;
    if (var_a1 > 0) {
        do {
            temp_v1 = M2C_FIELD(var_a0, s32 *, 0x18);
            var_a1 -= 1;
            if (var_a2 < temp_v1) {
                var_a2 = temp_v1;
                var_a3 = var_a0;
            }
            var_a0 += 0x20;
        } while (var_a1 != 0);
    }
    return var_a3;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009426C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009470C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000948E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00094AD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00094BC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00094E08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00094F98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000950C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000951F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00095578);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00095654);

void func_0009568C(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00095694);

void func_0009584C(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C8), s32 *, 0x1C) = 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009585C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00095A44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00095A64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00095A84);

void func_00095AF4(s32 arg0, M2C_UNK arg1, s32 arg2) {
    scePaf_F95EA3F1(arg1, arg0, arg2 << 7);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00095B1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00095B3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00095B8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00095CA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00095F7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00096224);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00096408);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00096524);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000965D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00096708);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000967B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00096920);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009698C);

void func_00096A24(void) {
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191340);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191380);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001913C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001913D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191414);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191434);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0019145C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191478);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191498);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001914B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001914E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191500);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191518);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191530);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191544);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191584);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001915B4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001915D0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001915F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0019162C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191664);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0019167C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0019169C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001916C8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191718);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191734);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191760);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0019177C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001917A4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001917CC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001917F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191808);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191820);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191834);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191848);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191870);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191888);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0019189C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001918C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001918D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191908);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191930);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191954);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191978);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001919A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001919BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001919D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191A18);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191A40);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191A68);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191A7C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191AAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191AC8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191AF0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191B14);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191B40);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191B6C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191B8C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191BBC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191BE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191C0C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191C3C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191C6C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191C98);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191CC8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191CF4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191D18);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191D38);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191D58);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191D90);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191DBC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191DDC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191E00);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191E28);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191E40);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191E54);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191E78);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191E88);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191EC8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191F0C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191F38);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191F64);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191F8C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191FA8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191FD4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00191FF0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192004);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0019201C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0019202C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192054);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0019208C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001920C8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001920F8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0019211C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192144);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192160);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192188);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001921AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001921C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001921E8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192210);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192218);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192254);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192290);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001922B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001922C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001922E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192300);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192320);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0019233C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192358);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0019239C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001923D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192410);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192444);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192458);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192470);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192498);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001924DC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192518);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0019254C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192570);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001925A0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001925BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_001925F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192620);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0019264C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192840);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192848);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192850);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192950);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_0019295C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00096A2C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192ACC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192B4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00096CF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00096F78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00097150);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00097338);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", start_pass_huff);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jpeg_make_c_derived_tbl);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jchuff_dump_buffer);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jchuff_flush_bits);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", encode_one_block);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jchuff_emit_restart);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", encode_mcu_huff);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", finish_pass_huff);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", htest_one_block);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", encode_mcu_gather);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jpeg_gen_optimal_table);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", finish_pass_gather);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jinit_huff_encoder);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jchuff_emit_bits);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000988A4);

void func_000988F4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    func_000988A4();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00098914);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009897C);

s32 func_00098C90(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00098C98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00098EA0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_000990FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00099254);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00099A98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00099C20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00099D54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00099E98);

void func_00099F18(void *arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_00095A84(*arg1, arg2, arg3, 0, arg4, M2C_FIELD(arg0, s32 *, 0x6C));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00099F48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_00099FB4);

void func_0009A120(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009A128);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009A330);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009A5FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009A6C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009A7E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009A940);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009AA5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009AB30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009ABC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009AC98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009AE9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009AED4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192B90);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192C10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009B038);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jpeg_fdct_ifast);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", jpeg_fdct_islow);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009B840);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009BC60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009C0F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009C6F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009CB0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009CDAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192C50);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192C6C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192C74);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192C7C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192C84);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192C8C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192C94);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192C9C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192CA4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192CAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192CBC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192CC4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192CD4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192CDC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192CE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192CEC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192CF4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192D04);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192D0C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192D14);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192D30);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192D4C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192D68);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192D84);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192DA0);

void scePaf_1A1F232F(void *arg0, s32 arg1) {
    if (arg1 < 9) {

    } else {
        scePaf_7894B61F((s32) arg0, (s32) "Too many bytes for PNG signature.");
    }
    M2C_FIELD(arg0, s8 *, 0x4EC) = __builtin_allegrex_max(arg1, 0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009CE3C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192DE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009CEF4);

void func_0009CF74(void) {
    func_0009EA54();
}

void func_0009CF90(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4D0) = crc32(0, 0, 0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009CFC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", scePaf_7AFD6B74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", png_info_init);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009D0FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009D1B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009D648);

M2C_UNK *func_0009D6AC(void) {
    return "\n libpng version 1.2.10 - April 23, 2006\n   Copyright (c) 1998-2006 Glenn Randers-Pehrson\n   Copyright (c) 1996-1997 Andreas Dilger\n   Copyright (c) 1995-1996 Guy Eric Schalnat, Group 42, Inc.\n";
}

M2C_UNK *func_0009D6B8(void) {
    return &D_00192EFC;
}

M2C_UNK *func_0009D6C4(void) {
    return &D_00192EFC;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_048F0C", D_00192EFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009D6D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009D6DC);

void func_0009D75C(s32 arg0) {
    inflateReset(arg0 + 0x434);
}

s32 func_0009D778(void) {
    return 0x27E2;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009D780);

s32 func_0009D798(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", scePaf_7894B61F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009D8A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009D940);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009DA4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009DAA8);

void func_0009DB04(void *arg0) {
    scePaf_9F10613F(arg0, 1);
}

void func_0009DB20(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_048F0C", func_0009DB28);

s32 func_0009DB44(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x408);
    }
    return var_v0;
}

