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

