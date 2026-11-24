#include "common.h"
#include "paf_decls.h"

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0001C97C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016F7AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0001CA78);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016F890);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016F8A4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016F9E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FA10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00024B9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00024E24);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00024E74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_752F182C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_81817B66);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_10C1DB70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_01C2FC36);

void func_000254C0(void) {
    sceKernelWaitSema(*D_001A4E30, 1, NULL);
}

void func_000254EC(void) {
    sceKernelSignalSema((s32) *D_001A4E30, 1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00025514);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000255E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000256E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000257A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00025874);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00025B20);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FAC8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FAE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FAF0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FB04);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FB1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FB3C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FB54);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FB68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_AAE8A6B6);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_CEFBDE33);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002722C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000272A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000272B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00027324);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00027334);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000273A8);

void func_000273B8(void *arg0) {
    s32 temp_v1;
    s32 var_s0;
    s32 var_v0;
    void *var_a1;

    var_a1 = M2C_FIELD(arg0, void **, 0);
    if (var_a1 != NULL) {
        var_s0 = M2C_FIELD(arg0, s32 *, 4) - 1;
        var_v0 = var_s0 * 8;
        if (var_s0 >= 0) {
            do {
                temp_v1 = M2C_FIELD((var_a1 + var_v0), s32 *, 4);
                var_s0 -= 1;
                if (temp_v1 != 0) {
                    scePaf_48B5C1C0(temp_v1);
                    var_a1 = M2C_FIELD(arg0, void **, 0);
                }
                var_v0 = var_s0 * 8;
            } while (var_s0 >= 0);
        }
        scePaf_997D2809(var_a1);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002742C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002743C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002744C);

void func_0002748C(void) {
    func_00027AE4();
}

void func_000274A8(void) {
    func_00027AF4();
}

void func_000274C4(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) >= arg1) {

    } else {
        func_00027B10((s32) arg0, arg1);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000274F8);

void func_00027584(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) >= arg1) {

    } else {
        func_00027C28((s32) arg0, arg1);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000275B8);

void func_00027644(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) >= arg1) {

    } else {
        func_00027D40((s32) arg0, arg1);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00027678);

void func_0002770C(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) >= arg1) {

    } else {
        func_00027E50((s32) arg0, arg1);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00027740);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000277C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00027854);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000278D0);

void func_00027A24(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    temp_v0 = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_00027F68((s32) arg0, temp_v1 - 0xA);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00027A68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00027AE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00027AF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00027B10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00027C28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00027D40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00027E50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00027F68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002802C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000280C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_836A675D);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00028160);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00028190);

s32 scePaf_F0885EDC(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_0016FC7C) {
        var_a2 = scePaf_F2E5FDEB(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_000281D8(void) {
    return &D_0016FC7C;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FC64);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FC68);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FC6C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FC70);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FC74);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FC78);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FC7C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FC88);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FCB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000281E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00028538);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000285D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00028670);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002870C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000287A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00028844);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000288E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002897C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000289CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00028A90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00028AFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00028C24);

s32 func_00028C38(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_0016FD08) {
        var_a2 = scePaf_F2E5FDEB(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_00028C6C(void) {
    return &D_0016FD08;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00028C78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00028EC0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FCC8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FCD0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FD08);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FD14);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FD28);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FD3C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FD44);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FD68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000291A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000292A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002939C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000293EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000294A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000294FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000295A4);

s32 func_000295B8(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_0016FE80) {
        var_a2 = scePaf_F2E5FDEB(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_000295EC(void) {
    return &D_0016FE80;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000295F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00029864);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FDC4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FDD8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FDF8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FE08);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FE50);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FE80);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FE88);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FE9C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FEB0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FEB8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FEDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00029B34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00029CF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00029DF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00029E44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_DD79627E);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_7BBD70F0);

void scePaf_DFFE9ED6(void) {
    s32 temp_v0;

    temp_v0 = D_001A4E34 - 1;
    D_001A4E34 = temp_v0;
    if (temp_v0 == 0) {
        if (D_001A4E48 == 0) {
            scePaf_9948CDB3(D_001A4E44, 0, D_001A4E4C);
        }
        scePaf_8A861692(D_001A4E44);
        D_001A4E44 = 0;
        if (D_001A4E40 != 0) {
            scePaf_545FE2DA(D_001A4E3C);
            D_001A4E40 = 0;
        }
        D_001A4E3C = 0;
        D_001A4E38 = 0;
    }
}

u8 func_0002A23C(void) {
    return D_001A4E48;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002A248);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_9DED6118);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_997D2809);

void func_0002A318(s32 arg0, s32 arg1) {
    func_0014BB0C(D_001A4E44, arg0, arg1);
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FF34);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FF48);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FF68);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FF78);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FFC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002A344);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002A7BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0016FFF4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170000);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170008);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170014);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170024);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0017002C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0017003C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170048);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170050);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0017005C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170068);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170074);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170080);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0017008C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170094);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0017009C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001700A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001700B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001700B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001700C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001700C8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001700D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001700E4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001700EC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001700F8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170100);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170230);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170234);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170238);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0017023C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170240);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170244);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170248);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0017024C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002A90C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002AA74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002ABD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002AD28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002B238);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002B3C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002B504);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002B664);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002B7EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002B968);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002BB10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002BCBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002C304);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002C350);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002C508);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002C63C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002C790);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002C8C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002C93C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002CA24);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_BE5B0791);

void func_0002CB34(s32 arg0, s32 *arg1, M2C_UNK arg2) {
    s32 temp_s0;

    temp_s0 = *arg1;
    func_0002CD9C(arg0, temp_s0 + 0x6C, arg2, func_00031DB0(arg2));
}

void func_0002CB8C(s32 arg0, s32 arg1, s32 arg2) {
    func_0002CD9C(arg0, arg1, arg2, func_00031DB0(arg2));
}

void func_0002CBE0(s32 arg0, s32 arg1, s32 arg2) {
    func_0002CD9C(arg0, arg1, arg2, func_00031DB0(arg2));
}

void func_0002CC34(s32 arg0, s32 *arg1, s32 arg2, s32 arg3) {
    func_0002CD9C(arg0, *arg1 + 0x6C, arg2, arg3);
}

void scePaf_2D08CA09(s32 arg0, s32 *arg1, s32 arg2, s32 arg3) {
    func_0002CD9C(arg0, *arg1 + 0x6C, arg2, arg3);
}

void func_0002CC74(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0002CD9C(arg0, arg1, arg2, arg3);
}

void func_0002CC90(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0002CD9C(arg0, arg1, arg2, arg3);
}

void func_0002CCAC(void) {
    scePaf_E1242646();
}

void func_0002CCC8(void) {
    scePaf_0F3527DD();
}

void func_0002CCE4(void) {
    scePaf_E1242646();
}

void func_0002CD00(void) {
    scePaf_0F3527DD();
}

void func_0002CD1C(void) {
    scePaf_E1242646();
}

void func_0002CD38(void) {
    scePaf_0F3527DD();
}

void func_0002CD54(void) {
    scePaf_E1242646();
}

void func_0002CD70(void) {
    scePaf_0F3527DD();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002CD8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002CD94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002CD9C);

s32 *func_0002CE98(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_0002CF30(arg1, arg2);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002CED0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002CF00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002CF30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002CFF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002D02C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002D1D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002D288);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002D40C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001702B4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001702B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002D478);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002D524);

s32 func_0002D538(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_001702B8) {
        var_a2 = scePaf_F2E5FDEB(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_0002D56C(void) {
    return &D_001702B8;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002D578);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002D5E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002D620);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002D660);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002D810);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002DB58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002DBA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_56F4D69F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002DC70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002DCE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_F2E5FDEB);

M2C_UNK *func_0002DD08(void) {
    return &D_001703B0;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0017032C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170338);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170344);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170380);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001703B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001703C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_6E3E2085);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_6676FAA6);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_AD7A45F9);

s32 scePaf_95C97571(s32 arg0) {
    func_0002EAC8(arg0 + 8);
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_7D9A4824);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_67C7567E);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_F273FE50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002E200);

void func_0002E248(s32 arg0) {
    func_00013BF8(arg0 + 8);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002E264);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002E344);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002E3E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002E484);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002E884);

void scePaf_79E57CAF(void) {
    scePaf_E1242646();
}

void scePaf_548AA4E7(void) {
    scePaf_0F3527DD();
}

void func_0002E988(void) {
    scePaf_E1242646();
}

void func_0002E9A4(void) {
    scePaf_0F3527DD();
}

void func_0002E9C0(void) {
    func_0002EB0C();
}

s32 *func_0002E9DC(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_0002EB64(arg1, arg2);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002EA14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002EAC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002EB0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002EB64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002EBC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002ED58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002EFBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002F0F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002F174);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002F33C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002F390);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002F3E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002F434);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002F508);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002F584);

s32 func_0002F598(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_001704F0) {
        var_a2 = scePaf_F2E5FDEB(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_0002F5CC(void) {
    return &D_001704F0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002F5D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002F640);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002F680);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002F6C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001703D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001703EC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0017040C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0017041C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0017043C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170458);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001704B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001704C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001704F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002F7FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002FAB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002FB08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002FBD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002FC40);

s32 func_0002FC54(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_001705A0) {
        var_a2 = scePaf_F2E5FDEB(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_0002FC88(void) {
    return &D_001705A0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002FC94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002FCE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002FD58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002FD98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002FDD8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170520);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0017052C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170538);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170570);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001705A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0002FF30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003002C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00030128);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000302DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003045C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00030648);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00030890);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00030B08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00030C60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00030EB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000310F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00031234);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00031378);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000314BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00031600);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003170C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00031784);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00031878);

void func_0003191C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 == 0) {

    } else {
        scePaf_0F3527DD(temp_v0);
    }
}

void scePaf_FCD816FA(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = *arg0 - 1;
    *arg0 = temp_v0;
    if (temp_v0 > 0) {

    } else {
        func_0003191C(arg0);
        func_00031CDC(arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_4D5E7984);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00031A20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_9B8CBC5F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00031C1C);

void func_00031CC0(void) {
    scePaf_E1242646();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00031CDC);

void func_00031CF8(void) {
    scePaf_E1242646();
}

void func_00031D14(void) {
    scePaf_0F3527DD();
}

void func_00031D30(void) {
    scePaf_E1242646();
}

void func_00031D4C(void) {
    scePaf_0F3527DD();
}

void func_00031D68(void) {
    scePaf_E1242646();
}

void func_00031D84(void) {
    scePaf_0F3527DD();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00031DA0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00031DA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00031DB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00031DD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00031DFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00031E44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00031EA8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001705E8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001705FC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0017060C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0017061C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170634);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170644);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170654);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0017066C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170688);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170694);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001706A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001706C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001706E4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001706FC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170720);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170818);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170848);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00031F0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00031F3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00031FA4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170850);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170854);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170858);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0017085C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003200C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00032048);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_E1242646);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_0F3527DD);

void func_00032A0C(void) {
    func_000331AC();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_CC3CFABF);

s32 scePaf_05026B26(s32 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        temp_v0_2 = func_000331AC(temp_v0 + 0x10);
        var_v1 = temp_v0_2;
        if (temp_v0_2 != 0) {
            M2C_FIELD(temp_v0_2, s32 *, 4) = arg1;
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_79293604);

s32 scePaf_3342C5F5(s32 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        temp_v0_2 = func_000331AC(temp_v0 + 0x10);
        var_v1 = temp_v0_2;
        if (temp_v0_2 != 0) {
            M2C_FIELD(var_v1, s32 *, 4) = 3;
            M2C_FIELD(var_v1, s32 *, 8) = arg1;
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_AECF91A9);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_EF346632);

s32 scePaf_D6E69FCB(s32 *arg0, M2C_UNK arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s1;

    var_s1 = 0;
    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        temp_v0_2 = func_000331AC(temp_v0 + 0x10);
        var_s1 = temp_v0_2;
        if (temp_v0_2 != 0) {
            temp_v0_3 = func_0003AEB0(*arg0 + 8, arg1);
            M2C_FIELD(var_s1, s32 *, 8) = temp_v0_3;
            if (temp_v0_3 != 0) {
                M2C_FIELD(var_s1, s32 *, 4) = 9;
            }
        }
    }
    return var_s1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_D2C94856);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00032D28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00032ECC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_48B5C1C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000330B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000331AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00033230);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00033348);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_D6F088EF);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_A9CE8FBB);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170890);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001708BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001708E8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170914);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170940);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170944);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170B44);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170B58);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170B64);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170B74);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170B84);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170B8C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170BA0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170BB4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170BC4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170BD4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170BE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170C10);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170C1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170C28);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170C54);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170C80);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170CAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170CD8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170D04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00033468);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00033A88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00033CF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_6BAC756B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_3A844B7B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00034170);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_2AA80564);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00034394);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00034410);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003444C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_39565433);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000346B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_8E757709);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_34C7D69A);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00034960);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_9BADB81F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00034D44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00034EC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_1475F1EB);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_DFD3E855);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_DFB24D02);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_CDB85442);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_55C7628A);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000351A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000352C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00035904);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00035AB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_5148EFE2);

void func_00035FFC(void) {
    scePaf_E1242646();
}

void func_00036018(void) {
    scePaf_0F3527DD();
}

void func_00036034(void) {
    scePaf_E1242646();
}

void func_00036050(void) {
    scePaf_0F3527DD();
}

void scePaf_7D83FB20(void) {
    scePaf_E1242646();
}

void scePaf_D36F3AAA(void) {
    scePaf_0F3527DD();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_DC7F84BA);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000360AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000360B4);

s32 func_000360C8(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_00170D48) {
        var_a2 = scePaf_F2E5FDEB(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_000360FC(void) {
    return &D_00170D48;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00036108);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00036174);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000361B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000361F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003629C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170D48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000366C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000367BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000368B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00036908);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000369A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_14BEF129);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00036B90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_8424D860);

void func_00036F48(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_v0 == 0) {

    } else {
        func_0003AF68(temp_v0, arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00036F7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00036FF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00037070);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000370E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00037284);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000373D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000374B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00037654);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000377A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00037884);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00037A24);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00037B74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00037C54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00037D54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00037EB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00037F98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00038098);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00038268);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00038348);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00038428);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000384C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000385A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00038648);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003872C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170D90);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170DA4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170DC4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170DD4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170E20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000387D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00038870);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00038984);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00038A20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00038B34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00038BD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00038D30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00038E1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00038EC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00039014);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00039174);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000392E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00039408);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003951C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00039630);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00039754);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000398E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00039A38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00039B84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00039C78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00039DD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00039EB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00039F90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003A090);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003A170);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003A250);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003A350);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003A400);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003A4B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003A628);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003A758);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003A810);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003AB98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003ADE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003AE48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003AEB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003AF68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003AF78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003AFCC);

void func_0003B020(void) {
    scePaf_E1242646();
}

void func_0003B03C(void) {
    scePaf_0F3527DD();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003B058);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003B140);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003B228);

s32 func_0003B23C(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_00170F2C) {
        var_a2 = scePaf_F2E5FDEB(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_0003B270(void) {
    return &D_001703B0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003B27C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003B30C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003B3A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003B414);

s32 func_0003B488(void *arg0, s32 arg1, s32 *arg2) {
    void *temp_s1;

    temp_s1 = arg0 + 0x20;
    if (arg1 >= M2C_FIELD(temp_s1, s32 *, 4)) {
        func_000278D0(temp_s1, arg1 + 1);
    }
    if (arg1 >= 0) {
        if (arg1 >= M2C_FIELD(temp_s1, s32 *, 4)) {

        } else {
            scePaf_5148EFE2(M2C_FIELD(arg0, s32 *, 0x20) + (arg1 * 4), M2C_FIELD(arg0, s32 *, 0x18), *arg2);
        }
    }
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003B528);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003B584);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003B630);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003B6E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003B760);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003B844);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003B8A0);

s32 func_0003B8B4(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_00170F78) {
        var_a2 = scePaf_F2E5FDEB(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_0003B8E8(void) {
    return &D_00170F78;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003B8F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003B95C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003B9D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003BA10);

s32 func_0003BA60(void *arg0, s32 arg1, s32 *arg2) {
    void *temp_s1;

    temp_s1 = arg0 + 0x1C;
    if (arg1 >= M2C_FIELD(temp_s1, s32 *, 4)) {
        func_000278D0(temp_s1, arg1 + 1);
    }
    if (arg1 >= 0) {
        if (arg1 >= M2C_FIELD(temp_s1, s32 *, 4)) {

        } else {
            scePaf_5148EFE2(M2C_FIELD(arg0, s32 *, 0x1C) + (arg1 * 4), M2C_FIELD(arg0, s32 *, 0x18), *arg2);
        }
    }
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003BB00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003BB5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003BDD8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170ECC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170EDC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170EEC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170EFC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170F2C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170F48);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170F78);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170F84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003BE4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003BF74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003C070);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003C16C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003C424);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003C914);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003CB54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003CDF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003D0E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003D430);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003D7B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003DEC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003E62C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003E958);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003E9BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003EA84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003EAE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003EB9C);

s32 func_0003EBB0(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_00171190) {
        var_a2 = scePaf_F2E5FDEB(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_0003EBE4(void) {
    return &D_00171190;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003EBF0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170FD0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00170FE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00171004);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00171014);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00171020);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00171028);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00171034);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00171044);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00171050);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0017105C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00171068);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00171078);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00171088);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00171160);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00171190);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001711A0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001711AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003EC9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003ED98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003EE94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003EEE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_D3F5956D);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_FE4D4112);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003F0BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_69CA1A2D);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_BEF9FF15);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_86237EB3);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003F2EC);

s32 scePaf_D6CD39AF(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 1) << 8) | M2C_FIELD(arg0, u8 *, 0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_DAA609BB);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_E32B3558);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003F340);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003F348);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003F374);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_14FF46A6);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003F414);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003F424);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_E3020CA3);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_1FD7E9D5);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_77277BAB);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003F55C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_6A14BB04);

void func_0003F7CC(s32 arg0, s32 arg1, s32 arg2) {
    func_0004051C(arg0, arg1, 0x400, arg2, 0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003F7F0);

void func_0003F8BC(s32 arg0, s32 arg1, s32 arg2) {
    func_0004051C(arg0, arg1, 0x500, arg2, 0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003F8E0);

void func_0003FA44(s32 arg0, s32 arg1, s32 arg2) {
    func_0004051C(arg0, arg1, 0x600, arg2, 0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003FA68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003FB34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003FBFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003FC88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003FD14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_602EB0CE);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001711F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00171208);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00171218);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00171250);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_3763DC72);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0003FF04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_95960A88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_58C69BDA);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0004032C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000403C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00040488);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0004051C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00040670);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00040718);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000408BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00040B2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00040B9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00040CB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00040EB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_E12B5BFD);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_BD46719F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_5F434810);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_7C1B7904);

s32 func_00041424(void *arg0) {
    s32 temp_v0;
    s32 var_a0;

    var_a0 = -0x78;
    if (M2C_FIELD(arg0, s32 *, 0) == 1) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_v0 != -1) {
            sceIoClose(temp_v0);
        }
        M2C_FIELD(arg0, s32 *, 4) = -1;
        var_a0 = 0;
    }
    return var_a0;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_001712D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00041484);

s32 func_00041960(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00041968);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00041A04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00041C54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00041EC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00042054);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00042078);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00042208);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0004222C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000422EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00042360);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000423DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00042458);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_21A183A7);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_8FE88010);

void scePaf_94136997(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_v0;

    temp_v0 = scePaf_B7E6052B(0x10);
    func_00048064(temp_v0, arg0, arg1);
    func_00042800((s32) temp_v0, arg2, arg3);
}

void scePaf_1BD0E905(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_v0;

    temp_v0 = scePaf_B7E6052B(0x24);
    func_0004738C(temp_v0, arg0, arg3, arg4);
    func_00042800((s32) temp_v0, arg1, arg2);
}

void scePaf_50B0C0A1(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = scePaf_B7E6052B(0x10);
    func_00048404(temp_v0, arg0, arg1);
    func_00042800((s32) temp_v0, 0, 6);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00042800);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_F247A0BD);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_3D451DE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_ABEBF18D);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00042C04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00042C70);

s32 scePaf_537D04C6(s32 arg0) {
    s32 **temp_v0;
    s32 var_v0;

    temp_v0 = scePaf_B7E6052B(8);
    func_0004A228(temp_v0);
    var_v0 = 0;
    if (temp_v0 != NULL) {
        var_v0 = func_00042C70(arg0, (s32) temp_v0);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00042D64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00042DF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00042E48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00042EE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_910A6B7B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00042F74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_12C50A9D);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_1F43B8A2);

s32 func_0004303C(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (func_00042F74(arg0, arg1) != 0) {
        M2C_FIELD(arg0, s16 *, 0x74) = (s16) arg1;
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00043080(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (func_00042F74(arg0, arg1) != 0) {
        M2C_FIELD(arg0, s16 *, 0x76) = (s16) arg1;
        var_v1 = 1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_7E304DCF);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_14D80C40);

s32 scePaf_9F60CB01(s32 arg0) {
    s32 **temp_v0;
    s32 var_v0;

    temp_v0 = scePaf_B7E6052B(8);
    func_0004AED4(temp_v0);
    var_v0 = 0;
    if (temp_v0 != NULL) {
        var_v0 = func_00042C70(arg0, (s32) temp_v0);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_91E82C1B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_A25BDAA2);

s32 func_00043458(s32 arg0) {
    D_001A34E4 = arg0;
    return 1;
}

s32 scePaf_D3AB4076(void) {
    return D_001A34E4;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_87E5F9C7);

s32 scePaf_D726DDD3(s32 arg0) {
    s32 **temp_v0;
    s32 var_v0;

    temp_v0 = scePaf_B7E6052B(8);
    func_0004B580(temp_v0);
    var_v0 = 0;
    if (temp_v0 != NULL) {
        var_v0 = func_00042C70(arg0, (s32) temp_v0);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_8A8FE0A1);

s32 func_0004352C(void *arg0) {
    s32 var_v1;

    var_v1 = 1;
    if ((M2C_FIELD(arg0, u8 *, 0x15) != 0) && (M2C_FIELD(arg0, u8 *, 0x29) != 0)) {
        var_v1 = M2C_FIELD(arg0, s32 *, 0) != 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00043554);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000435C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00043608);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000436F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000437E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", scePaf_891B7F7F);

void func_000439FC(M2C_UNK **arg0) {
    func_00044154(arg0);
    *arg0 = &D_00171338;
}

void func_00043A2C(M2C_UNK **arg0) {
    *arg0 = &D_00171338;
    func_0004417C((s32) arg0);
}

void func_00043A54(M2C_UNK **arg0) {
    *arg0 = &D_00171338;
    func_0004417C((s32) arg0);
}

void func_00043A7C(M2C_UNK **arg0) {
    *arg0 = &D_00171338;
    func_0004417C((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00043AB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00043C30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00043CD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00043E58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00043FDC);

s32 func_0004414C(void) {
    return 0;
}

void func_00044154(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0017135C;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void func_00044168(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0017135C;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0004417C);

void func_00044190(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00171380;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void func_000441A4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00171380;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    scePaf_4E67BB08(arg0);
}

s32 func_000441D0(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_v1;

    var_v1 = 0;
    if (func_0004352C(arg1) != 0) {
        M2C_FIELD(arg0, void **, 4) = arg1;
        var_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *, void *, void *, void *, s32, s32, s32), 0x18)(arg0, arg1 + 0x2C, arg1 + 4, arg1 + 0x18, arg4, arg2, arg3);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_0004426C);

void func_00044394(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v0 == 0) {

    } else {
        func_00042E48(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000443C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00044470);

void func_00044678(void) {
}

void func_00044680(M2C_UNK **arg0) {
    *arg0 = &D_00171380;
}

void func_00044690(M2C_UNK **arg0) {
    *arg0 = &D_00171380;
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000446B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00044714);

void func_00044770(M2C_UNK **arg0) {
    *arg0 = &D_001714B0;
    func_0004417C((s32) arg0);
}

void func_00044798(M2C_UNK **arg0) {
    *arg0 = &D_001714B0;
    func_0004417C((s32) arg0);
}

void func_000447C0(M2C_UNK **arg0) {
    *arg0 = &D_001714B0;
    func_0004417C((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000447F8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00171338);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0017135C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00171380);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00044974);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00044BB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00044BFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00044C40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00044C74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00044CDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00044D64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00044DB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00044E28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00044EE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00045234);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00045480);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000454F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_000456AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00045CEC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00171440);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00171444);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_00171448);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_01C97C", D_0017144C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00045DA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00045ED8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00046178);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_01C97C", func_00046418);

