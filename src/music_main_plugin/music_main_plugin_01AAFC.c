#include "common.h"
#include "music_main_plugin_decls.h"

void func_0001AAFC(struct Unk_func_0001AAFC_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001AB0C);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001AB4C);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001AC38);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001ACAC);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001ADA4);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001AAD4);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001AAFC_v271);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001AB24);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001AB5C);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001ABDC);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001ABE4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_00099220);
#endif

#if FW_VERSION >= 282
void func_0001ADA4(struct Unk_func_0001ADA4_0 *arg0) {
    func_00049EE0(arg0);
    arg0->unk0 = &D_0009BBD8;
    arg0->unk4 = 2;
}

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

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001AE64);

s32 func_0001AEE4(void) {
    return 0;
}

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BAE8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BB48);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BBA0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BBA8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BBB8);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001AEEC);
#endif

void func_0001AF98(struct Unk_func_0001AF98_0 *arg0) {
    func_00049EE0(arg0);
    arg0->unk0 = &D_0009BC50;
    arg0->unk4 = 1;
}

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

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BBD8);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001B058);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001B120);

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_00009B28);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001B1D4);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001B230);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001B28C);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001B344);

void func_0001B3FC(struct Unk_func_0001B3FC_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;

    temp_v1 = arg0->unk14;
    arg0->unk0 = &D_0009BC68;
    if (temp_v1 != 0) {
        scePaf_B3D2C3BB(temp_v1);
        arg0->unk14 = 0;
    }
    temp_v0 = arg0->unk24;
    if (temp_v0 != 0) {
        scePaf_B3D2C3BB(temp_v0);
        arg0->unk24 = 0;
    }
    temp_v0_2 = arg0->unk18;
    if (temp_v0_2 != 0) {
        scePaf_B3D2C3BB(temp_v0_2);
        arg0->unk18 = 0;
    }
    temp_v0_3 = arg0->unk1C;
    if (temp_v0_3 != 0) {
        scePaf_B3D2C3BB(temp_v0_3);
        arg0->unk1C = 0;
    }
    arg0->unk10 = &D_0009B888;
    D_000A43D4 -= 1;
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001B4BC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001B56C);
#else
s32 func_0001B56C(struct Unk_func_0001B56C_0 *arg0, struct Unk_func_0001B56C_1 *arg1) {
    s32 var_v1;

    var_v1 = 0x8000FFFF;
    if (arg1 != NULL) {
        var_v1 = 0x80108F0E;
        if ((arg1->unk4 ^ 1) == 0) {
            arg0->unkC = arg1;
            var_v1 = 0;
            arg0->unk8 = (s32) arg1->unk8;
        }
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001B5A4);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001B610);

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0000A030);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0000A040);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0000A068);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001B678);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001B6D4);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001B730);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001B778);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001B7C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001B810);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001B838);

s32 func_0001B870(struct Unk_func_0001B870_0 *arg0) {
    return arg0->unk30;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001B878);

s32 func_0001B8B0(struct Unk_func_0001B8B0_0 *arg0) {
    return arg0->unk40;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001B8B8);

s32 func_0001B914(struct Unk_func_0001B914_0 *arg0) {
    return arg0->unk30 + arg0->unk40;
}

s32 func_0001B924(struct Unk_vt_func_0001B924_arg0 **arg0) {
    (*arg0)->unk4C();
    (*arg0)->unk48(arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001B964);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001BA0C);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001BAB4);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001BB5C);

void func_0001BBE0(struct Unk_vt_func_0001BBE0_arg0 **arg0) {
    (*arg0)->unk28();
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

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001BC54);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001BDB8);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001BEB4);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001BBE8);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001BC50);
#endif

#if FW_VERSION >= 282
s32 func_0001BEB4(struct Unk_func_0001BEB4_0 *arg0) {
    func_0001BEF4((s32) arg0, 0, arg0->unk30);
    func_0001BF5C((s32) arg0, 0, arg0->unk40);
    return 0;
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0000A8DC);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0000A904);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0000A92C);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0000AA60);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0000AB94);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001BEF4);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001BF5C);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001BFC4);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001C018);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001C038);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0000ACC0);
#else
INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001C09C);
#endif

void func_0001C17C(struct Unk_func_0001C17C_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001C18C);

void func_0001C1CC(struct Unk_func_0001C1CC_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001C1DC);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001C21C);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001C270);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001C2C4);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001C338);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001C0A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001C274);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001C754);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001C508);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001C518);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001C558);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001C5D4);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001C618);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001C628);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001C668);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001C6E4);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001C728);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001C7F0);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001A3C4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001C3AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001C580);
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001C754);
#endif

#if FW_VERSION >= 282
void func_0001C814(struct Unk_func_0001C814_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001C824);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001C864);

void func_0001C8E0(struct Unk_func_0001C8E0_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = arg0->unk8;
    temp_v0 = arg0->unk4 - 1;
    arg0->unk4 = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_0001CA34((s32) arg0, temp_v1 - 0xA);
    }
}

void func_0001C924(struct Unk_func_0001C924_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001C934);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001C974);

void func_0001C9F0(struct Unk_func_0001C9F0_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = arg0->unk8;
    temp_v0 = arg0->unk4 - 1;
    arg0->unk4 = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_0001CAFC((s32) arg0, temp_v1 - 0xA);
    }
}

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001CA34);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001CAFC);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001CC38);

void func_0001CCAC(struct Unk_func_0001CCAC_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk408;
    arg0->unk0 = &D_0009BD28;
    if (temp_v1 != 0) {
        scePaf_B3D2C3BB(temp_v1);
        arg0->unk408 = 0;
    }
}

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001CCF4);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001CD8C);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001CF1C);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001CF6C);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001CFCC);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001D03C);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001D088);

s32 func_0001D0E0(void) {
    return func_0001CF1C() != 0;
}

void func_0001D100(s32 arg0) {
    func_0001D11C(arg0, arg0 + 4);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001D11C);

s32 func_0001D170(struct Unk_func_0001D170_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 1;
    if (arg0->unk408 == 0) {
        temp_v0 = scePaf_F13EBB78(0x401);
        arg0->unk408 = temp_v0;
        var_v1 = 0;
        if (temp_v0 != 0) {
            scePaf_6829D7AF(temp_v0, 0, 0x401);
            var_v1 = 1;
        }
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001D1D4);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001D21C);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001D2E4);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001D3AC);

void func_0001D4C4(void) {
    func_0002947C();
}

void func_0001D4E0(void) {
    func_00029568();
}

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001D4FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001D604);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001D6A4);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001DA00);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001DAA0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BC50);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BC68);

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009B888);
#endif

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BC80);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BC84);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BC88);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BC90);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_000992E0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BC98);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BCA0);
#endif

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BCA8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BCB0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BCB8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BCC8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BD28);

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BD30);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BD3C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BD48);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BD54);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BD60);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BD70);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BD80);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BD8C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BD98);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BDA4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BDB4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BDC4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BDD4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BDDC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BDE8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BDF4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BE00);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BE0C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BE18);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BE24);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BE30);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BE3C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BE48);
#endif

#if FW_VERSION == 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_000B3928);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_000B3934);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_000B3944);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_000B3954);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_000B3960);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_000B396C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_000B3978);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_000B3988);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_000B3998);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BE50);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BE5C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BE68);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BE74);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BE80);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BE8C);
#endif

#if FW_VERSION == 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_000B39F0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_000B39F8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_000B3A00);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_000B3A0C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_000B3A18);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_000B3A24);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BE98);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BEA4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BEB4);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BEC4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BECC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BED4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BEE0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BEE8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BEF0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BEFC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BF04);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BF10);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BF18);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BF24);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BF2C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BF34);

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BF40);
#endif

INCLUDE_RODATA("nonmatchings/music_main_plugin_01AAFC", D_0009BF48);

INCLUDE_ASM("nonmatchings/music_main_plugin_01AAFC", func_0001DBB8);
