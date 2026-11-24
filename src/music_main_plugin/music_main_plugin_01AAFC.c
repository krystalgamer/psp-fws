#include "common.h"
#include "music_main_plugin_decls.h"

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001AAFC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001AB0C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001AB4C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001AC38);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001ACAC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001ADA4);

void func_0001ADDC(M2C_UNK **arg0) {
    *arg0 = &D_0009BBD8;
    func_00049F10((s32) arg0);
}

void func_0001AE04(M2C_UNK **arg0) {
    *arg0 = &D_0009BBD8;
    func_00049F10((s32) arg0);
}

void func_0001AE2C(M2C_UNK **arg0) {
    *arg0 = &D_0009BBD8;
    func_00049F10((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001AE64);

s32 func_0001AEE4(void) {
    return 0;
}

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BAE8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BB48);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BBA0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BBA8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BBB8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001AEEC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001AF98);

void func_0001AFD0(M2C_UNK **arg0) {
    *arg0 = &D_0009BC50;
    func_00049F10((s32) arg0);
}

void func_0001AFF8(M2C_UNK **arg0) {
    *arg0 = &D_0009BC50;
    func_00049F10((s32) arg0);
}

void func_0001B020(M2C_UNK **arg0) {
    *arg0 = &D_0009BC50;
    func_00049F10((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BBD8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001B058);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001B120);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001B1D4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001B230);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001B28C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001B344);

void func_0001B3FC(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0009BC68;
    if (temp_v1 != 0) {
        scePaf_B3D2C3BB(temp_v1);
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
    }
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_v0 != 0) {
        scePaf_B3D2C3BB(temp_v0);
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_v0_2 != 0) {
        scePaf_B3D2C3BB(temp_v0_2);
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
    }
    temp_v0_3 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0_3 != 0) {
        scePaf_B3D2C3BB(temp_v0_3);
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &D_0009B888;
    D_000A43D4 -= 1;
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001B4BC);

s32 func_0001B56C(void *arg0, void *arg1) {
    s32 var_v1;

    var_v1 = 0x8000FFFF;
    if (arg1 != NULL) {
        var_v1 = 0x80108F0E;
        if ((M2C_FIELD(arg1, s32 *, 4) ^ 1) == 0) {
            M2C_FIELD(arg0, void **, 0xC) = arg1;
            var_v1 = 0;
            M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001B5A4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001B610);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001B678);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001B6D4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001B730);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001B778);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001B7C0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001B810);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001B838);

s32 func_0001B870(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001B878);

s32 func_0001B8B0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x40);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001B8B8);

s32 func_0001B914(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30) + M2C_FIELD(arg0, s32 *, 0x40);
}

s32 func_0001B924(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x4C)();
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0x48)(arg0);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001B964);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001BA0C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001BAB4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001BB5C);

void func_0001BBE0(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x28)();
}

void func_0001BC04(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_s1;

    temp_s1 = arg1 & 0xFF;
    if (temp_s1 == 0) {

    } else {
        scePaf_A82E3C19(arg2);
    }
    func_0001BC54(arg0, temp_s1);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001BC54);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001BDB8);

s32 func_0001BEB4(void *arg0) {
    func_0001BEF4((s32) arg0, 0, M2C_FIELD(arg0, s32 *, 0x30));
    func_0001BF5C((s32) arg0, 0, M2C_FIELD(arg0, s32 *, 0x40));
    return 0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001BEF4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001BF5C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001BFC4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001C018);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001C038);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001C09C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001C17C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001C18C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001C1CC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001C1DC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001C21C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001C270);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001C2C4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001C338);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001C3AC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001C580);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001C754);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001C814);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001C824);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001C864);

void func_0001C8E0(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    temp_v0 = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_0001CA34((s32) arg0, temp_v1 - 0xA);
    }
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001C924);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001C934);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001C974);

void func_0001C9F0(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    temp_v0 = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_0001CAFC((s32) arg0, temp_v1 - 0xA);
    }
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001CA34);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001CAFC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001CC38);

void func_0001CCAC(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x408);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0009BD28;
    if (temp_v1 != 0) {
        scePaf_B3D2C3BB(temp_v1);
        M2C_FIELD(arg0, s32 *, 0x408) = 0;
    }
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001CCF4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001CD8C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001CF1C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001CF6C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001CFCC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001D03C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001D088);

s32 func_0001D0E0(void) {
    return func_0001CF1C() != 0;
}

void func_0001D100(s32 arg0) {
    func_0001D11C(arg0, arg0 + 4);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001D11C);

s32 func_0001D170(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 1;
    if (M2C_FIELD(arg0, s32 *, 0x408) == 0) {
        temp_v0 = scePaf_F13EBB78(0x401);
        M2C_FIELD(arg0, s32 *, 0x408) = temp_v0;
        var_v1 = 0;
        if (temp_v0 != 0) {
            scePaf_6829D7AF(temp_v0, 0, 0x401);
            var_v1 = 1;
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001D1D4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001D21C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001D2E4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001D3AC);

void func_0001D4C4(void) {
    func_0002947C();
}

void func_0001D4E0(void) {
    func_00029568();
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001D4FC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001D604);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001D6A4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001DA00);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001DAA0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BC50);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BC68);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BC80);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BC84);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BC88);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BC90);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BC98);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BCA0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BCA8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BCB0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BCB8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BCC8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BD28);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BD30);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BD3C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BD48);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BD54);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BD60);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BD70);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BD80);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BD8C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BD98);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BDA4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BDB4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BDC4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BDD4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BDDC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BDE8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BDF4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BE00);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BE0C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BE18);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BE24);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BE30);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BE3C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BE48);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BE50);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BE5C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BE68);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BE74);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BE80);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BE8C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BE98);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BEA4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BEB4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BEC4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BECC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BED4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BEE0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BEE8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BEF0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BEFC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BF04);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BF10);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BF18);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BF24);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BF2C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BF34);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BF40);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", D_0009BF48);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_01AAFC", func_0001DBB8);

