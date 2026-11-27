/* lang: c++ */
/* cflags: -Os */
#include "common.h"
#include "music_plugin_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_plugin", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/music_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/music_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/music_plugin", module_start);

s32 module_stop(void) {
    func_00001BBC();
    return 0;
}

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0000015C);
#else
void func_0000015C(s32 arg0) {
    _ZN3paf6Module12SetInterfaceEiPv(arg0, 1, (s32) &D_00002238);
}
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/music_plugin", D_0000253C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00002540);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00002550);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00002558);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0000256C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00002584);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00002590);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000025A8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000025B4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000025D4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000025E4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000025F0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00002668);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00002670);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00002684);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000026A4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000026B4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000026C4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00002710);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00002004);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00002740);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00002014);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00002018);
#endif

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/music_plugin", D_0000201C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AD18);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00000180);

void func_00000318(void) {
    s32 temp_v0;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_0005AF74);
    if (temp_v0 != 0) {
        _ZN3paf4View6UnloadEPS0_PFvPKcE(temp_v0, 0);
    }
}

INCLUDE_ASM("nonmatchings/music_plugin", func_0000034C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000003AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000041C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000046C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000538);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000058C);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AD38);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AD58);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AD78);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AD9C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005ADBC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005ADE4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AE04);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AE24);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AE48);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AE68);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AE88);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AEA0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AEB8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AED4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AEEC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AF04);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AF24);
#endif

#if FW_VERSION == 103
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DB00);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F6C8);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F060);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AF40);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AF60);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AF74);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00000610);

INCLUDE_ASM("nonmatchings/music_plugin", func_000009D4);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AF88);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AFA0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AFB4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BC80);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BCA0);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00000AA0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BCC0);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00000C6C);

void func_00000EEC(void) {
    _ZN3vsh12BusyIcon_DecEv();
}

void func_00000F08(void) {
    func_00000C6C(0);
}

void func_00000F24(s32 arg0) {
    void *temp_v0;

    _ZN3vsh12BusyIcon_DecEv();
    temp_v0 = _ZNK3paf4View12GetInterfaceEi(arg0, 1);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, M2C_UNK (**)(M2C_UNK *, M2C_UNK), 4)(&func_00000FC8, 0);
    }
}

INCLUDE_ASM("nonmatchings/music_plugin", func_00000F70);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000FC8);

void func_00001000(void) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_0005AF74);
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(), 0xC)();
        }
    }
    func_000009D4();
}

void func_00001050(void) {
    func_0000046C();
}

INCLUDE_ASM("nonmatchings/music_plugin", func_0000106C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AFCC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AFE4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B000);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B01C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B038);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B050);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B06C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_000010D0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000018C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000294);

INCLUDE_ASM("nonmatchings/music_plugin", func_000003D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000005C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000C890);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000748);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000810);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B084);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B094);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B0A8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B0C0);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B0D8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B0F8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B110);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B130);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B14C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B168);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B17C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B190);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B1AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000180);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B8AC);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_00002048);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00000180);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_plugin", func_00000318);
#endif

#if FW_VERSION >= 350
void func_00000318(void) {
    s32 temp_v0;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_0000206C);
    if (temp_v0 != 0) {
        _ZN3paf4View6UnloadEPS0_PFvPKcE(temp_v0, func_00000F04);
    }
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_00000318(void) {
    s32 temp_v0;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_0000206C);
    if (temp_v0 != 0) {
        _ZN3paf4View6UnloadEPS0_PFvPKcE(temp_v0, 0);
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0000034C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000003AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000041C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000046C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000538);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000058C);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0000206C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00000610);
#endif

#if FW_VERSION >= 350
void func_00000A04(s32 arg0) {
    sceVshCommonUtil_0587F20C(&D_00002C10, 0x80, arg0);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void func_00000A04(s32 arg0) {
    sceVshCommonUtil_0587F20C(&D_0000269C, 0x80, arg0);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_plugin", func_00000A2C);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_plugin", func_00000A9C);
#endif

#if FW_VERSION >= 350
void func_00000A54(s32 arg0) {
    sceVshCommonUtil_8584376D(&D_00002C10, arg0);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void func_00000A54(s32 arg0) {
    sceVshCommonUtil_8584376D(&D_0000269C, arg0);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_plugin", func_00000A78);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_plugin", func_000009D4);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_000020AC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B8F0);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_000020B8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000020D0);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_plugin", D_000024D8);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_plugin", D_000027FC);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_000020E0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_plugin", func_00000AA0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_00002154);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00000C6C);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_plugin", func_00000F04);
#endif

#if FW_VERSION >= 350
void func_00000F04(void) {
    s32 temp_v0;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_000027FC);
    if (temp_v0 != 0) {
        _ZN3paf4View6UnloadEPS0_PFvPKcE(temp_v0, NULL);
    }
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_00000F04(void) {
    s32 temp_v0;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_000027FC);
    if (temp_v0 != 0) {
        _ZN3paf4View6UnloadEPS0_PFvPKcE(temp_v0, 0);
    }
}

INCLUDE_ASM("nonmatchings/music_plugin", func_00001000);
#endif

#if FW_VERSION >= 350
void func_00001000(void) {
    s32 temp_v0;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_000027FC);
    if (temp_v0 != 0) {
        _ZN3paf4View6UnloadEPS0_PFvPKcE(temp_v0, func_00000F20);
    }
}
#endif

#if FW_VERSION == 282
void func_00000F04(void) {
    _ZN3vsh12BusyIcon_DecEv();
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_plugin", func_00000F20);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_plugin", func_00001074);
#endif

#if FW_VERSION >= 350
void func_00001074(void) {
    s32 temp_v0;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_000027FC);
    if (temp_v0 != 0) {
        _ZN3paf4View6UnloadEPS0_PFvPKcE(temp_v0, func_00001140);
    }
}
#endif

#if FW_VERSION == 282
void func_00000F20(void) {
    func_00000C6C(0);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_plugin", func_00001140);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001174);
#endif

#if FW_VERSION == 282
void func_00000F3C(s32 arg0) {
    struct Unk_func_00000F3C_temp_v0 *temp_v0;

    _ZN3vsh12BusyIcon_DecEv();
    temp_v0 = _ZNK3paf4View12GetInterfaceEi(arg0, 1);
    if (temp_v0 != NULL) {
        temp_v0->unk4(&func_00000FF8, 0);
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00000F88);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_plugin", func_00001284);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00000FF8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00001030);

void func_00001080(void) {
    func_0000046C();
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_plugin", func_0000135C);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_plugin", D_00002894);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000028C0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000028EC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00002918);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00002924);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0000109C);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_000021DC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000021E8);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B96C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B988);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B9A4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B9C0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B9DC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B9F4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BA0C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BA24);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BA40);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BA5C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BA78);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BA94);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BAB0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BAC8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BAE4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BAFC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BB18);
#endif

#if FW_VERSION == 103
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E708_v103);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E714);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/music_plugin", D_000602E8_v150);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000602F4);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FC80);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FC8C);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_000021EC);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BB70);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BB88);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BBB0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BBD4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BBF4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BC18);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BC3C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BC5C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BC84);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BCA0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BCCC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BCEC);
#endif

#if FW_VERSION == 103
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E8A8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E8C4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E8E0);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/music_plugin", D_00060488);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000604A4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000604C0);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FE20);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FE3C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FE58_v152);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BD10);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BD2C);
#endif

#if FW_VERSION == 103
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E928);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/music_plugin", D_00060508);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FEA0);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BD48);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BD54);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BD60);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BD70);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BD88);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BD9C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BDB8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BDCC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BDE8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BE08);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BE24);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BE3C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BE58);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BE74);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BE7C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BE84);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BE8C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BE94);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BEB4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BED4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BEF4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BF18);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BF2C);
#endif

#if FW_VERSION == 103
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005EB08);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005EB2C);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/music_plugin", D_000606E8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0006070C);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_00060080);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000600A4);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BF50);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BF64);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BF7C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BF94);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BFB0);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_000021F0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000021F4);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BFF4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C008);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C028);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C040);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C060);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C084);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C0A0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C0B4);
#endif

#if FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C0C4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C0DC);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C0F4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C10C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C124);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C140);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C15C);
#endif

#if FW_VERSION == 103
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005ED7C);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/music_plugin", D_00060934);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_000602CC_v152);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C174);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C2B8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C2C8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C2D8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C2F0);
#endif

#if FW_VERSION == 103
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005EF18);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/music_plugin", D_00060AD0_v150);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_00060468);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C310);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C44C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C474);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C498);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C4B8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C4D4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C4F4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C510);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C52C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C548);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C568);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C588);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C5A0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C5B8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C5D0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C5EC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C608);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C624);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C63C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C658);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/music_plugin", D_00060E30);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_000607C8);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C670);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C684);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/music_plugin", D_00060E74);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_0006080C);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_000021F8);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C6A4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C6C0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C6D0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C6E4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C6FC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C714);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C730);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C754);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C76C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C780);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C7BC);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/music_plugin", D_00060F98);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060FB8_v150);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060FD8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060FF8);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_00060930);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060950);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060970);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060990_v152);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C798);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C7A8);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/music_plugin", D_0006103C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061054);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_000609D4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000609EC);
#endif

#if FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C7BC);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C7CC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C7E4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C804);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C820);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C840);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C85C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C874);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C890);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C8AC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C8C0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C8DC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C8F4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C914);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C92C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C94C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C968);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C980);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C994);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C9B0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C9C4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C9D8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C9EC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CA08);

INCLUDE_ASM("nonmatchings/music_plugin", func_000020C4);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_00002900);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000029B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00002840);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00003000);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00003068);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000030DC);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0000314C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000321C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000032EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000033C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00003434);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_000032D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00003398);

INCLUDE_ASM("nonmatchings/music_plugin", func_00003978);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00003168);

INCLUDE_ASM("nonmatchings/music_plugin", func_00003228);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00003164);

INCLUDE_ASM("nonmatchings/music_plugin", func_00003224);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00003600);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0000370C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00003784);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_00004198);

INCLUDE_ASM("nonmatchings/music_plugin", func_00004228);

INCLUDE_ASM("nonmatchings/music_plugin", func_00004318);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0000400C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000409C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000418C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00004008);

INCLUDE_ASM("nonmatchings/music_plugin", func_00004098);

INCLUDE_ASM("nonmatchings/music_plugin", func_00004188);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00003E74);

INCLUDE_ASM("nonmatchings/music_plugin", func_00003E94);

INCLUDE_ASM("nonmatchings/music_plugin", func_00004200);

INCLUDE_ASM("nonmatchings/music_plugin", func_00004408);

INCLUDE_ASM("nonmatchings/music_plugin", func_00004478);

INCLUDE_ASM("nonmatchings/music_plugin", func_000044DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000046B8);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_00004CC4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00004B38);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00004B30);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_000046F8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000047AC);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_0000530C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00005140);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00005134);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000008C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000A8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000BE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000C8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000CF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000D64);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000E00);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000E5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000EB8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000F3C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00004B6C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00004C00);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_000054F4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00005320);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00005314);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00004D80);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00004F9C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000050F0);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_00005B84);

INCLUDE_ASM("nonmatchings/music_plugin", func_00005F54);

INCLUDE_ASM("nonmatchings/music_plugin", func_000060D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000623C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000062F4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_000059B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00005D84);

INCLUDE_ASM("nonmatchings/music_plugin", func_00005F04);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000606C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00006124);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_000059A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00005D78);

INCLUDE_ASM("nonmatchings/music_plugin", func_00005EF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00006060);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00006118);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00000FE0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000011D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0000542C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00005824);

INCLUDE_ASM("nonmatchings/music_plugin", func_00005894);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_000058D8);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_000058D8(s32 *arg0) {
    func_00017104(D_00061E34, *arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00001278);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001358);

INCLUDE_ASM("nonmatchings/music_plugin", func_000013D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000013F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001488);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00005900);

INCLUDE_ASM("nonmatchings/music_plugin", func_000063C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00006450);

INCLUDE_ASM("nonmatchings/music_plugin", func_000064B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00006764);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000680C);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_000073FC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_000071F0);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_000071D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_000068D4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0000717C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00007254);

INCLUDE_ASM("nonmatchings/music_plugin", func_000072C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00007408);

INCLUDE_ASM("nonmatchings/music_plugin", func_000075C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000076D0);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_000084C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000088B0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00008334);

INCLUDE_ASM("nonmatchings/music_plugin", func_00008710);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00008318);

INCLUDE_ASM("nonmatchings/music_plugin", func_000086F4);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000773C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000157C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000015F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000169C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001720);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001764);

INCLUDE_ASM("nonmatchings/music_plugin", func_000017C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_000077B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00007B24);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00007BC8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00007C28);

INCLUDE_ASM("nonmatchings/music_plugin", func_00007D04);

INCLUDE_ASM("nonmatchings/music_plugin", func_00007D44);

INCLUDE_ASM("nonmatchings/music_plugin", func_000082F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00008698);

INCLUDE_ASM("nonmatchings/music_plugin", func_000088B8);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_000099BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00009B04);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00009858);

INCLUDE_ASM("nonmatchings/music_plugin", func_000099A0);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0000982C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00009964);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00008B9C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00008D10);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00009180);

INCLUDE_ASM("nonmatchings/music_plugin", func_000091C0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000097B4);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_0000A6A4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0000A55C);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000A520);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000018DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000019A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000019C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000019FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001B34);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001B54);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001B74);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001C10);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001CB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001D7C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000097F8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0000A78C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0000A750);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000099AC);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00009A0C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00009ABC);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_0000AA1C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0000A90C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0000A8D0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00001100);

INCLUDE_ASM("nonmatchings/music_plugin", func_000011A0);
#endif

#if FW_VERSION == 100
void func_000011A0(void) {
    func_0001C410((void *) D_00061E1C);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_plugin", func_000014CC);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_plugin", func_00000AA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000160C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001658);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001824);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00009B40);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_00009B40(s32 arg0) {
    void **temp_v0;
    void **temp_v0_2;

    temp_v0 = _ZN3paf8PhWidget9FindChildEPKci(arg0, &D_0005C2D8, 0);
    M2C_FIELD(temp_v0, s8 *, 0x1FE) = 1;
    M2C_FIELD(temp_v0, s8 *, 0x1FF) = 1;
    _ZN3paf8PhWidget13UpdateCamerasEv(temp_v0);
    temp_v0_2 = _ZN3paf8PhWidget9FindChildEPKci(arg0, &D_0005C2F0, 0);
    M2C_FIELD(temp_v0_2, s8 *, 0x1FE) = 0;
    M2C_FIELD(temp_v0_2, s8 *, 0x1FF) = 0;
    _ZN3paf8PhWidget13UpdateCamerasEv(temp_v0_2);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00009BA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00009C78);

INCLUDE_ASM("nonmatchings/music_plugin", func_00009CDC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000A24C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000A2F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0000A3A8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0000A42C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000A5E8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000A67C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00001DCC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00001F08);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00001F2C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001F88);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001FE4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0000204C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000020A8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00002040);

INCLUDE_ASM("nonmatchings/music_plugin", func_000020AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002178);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0000A6A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000A9BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000AA40);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000AC70);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000AFB4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0000BF68);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000C1B0);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0000BF28);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000C170);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0000B014);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_0000C210);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0000B134);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0000B288);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0000B288(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) & ~0x490);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0000B29C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000B2E0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00002220);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002248);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0000B304);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0000B3C0);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0000B3C0(void) {
    D_00061E3C = 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0000B3CC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000228C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002354);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000237C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000023A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000023D4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0000B608);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_0000C99C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0000C8D0);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0000C890);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0000B7E8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0000BB6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000BBE4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0000CF44);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000D09C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0000CF0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000D064);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0000BC90);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_0000D180);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0000BDF4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0000C63C);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_0000E5C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0000CC24);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0000D0C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000DAB4);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_0000F2AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000F774);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0000F11C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0000F090);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000F538);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000FCA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000FFD0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000105E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0000DCFC);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0000E1A8);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_0001023C);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/music_plugin", D_00061520);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061524);

INCLUDE_ASM("nonmatchings/music_plugin", func_000100AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00010308);

INCLUDE_ASM("nonmatchings/music_plugin", func_000106BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0000ECC8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0000F150);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_00010A94);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00010E00);

INCLUDE_ASM("nonmatchings/music_plugin", func_00011578);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061570);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061574);

INCLUDE_ASM("nonmatchings/music_plugin", func_000118C4);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00010D14);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060EE8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060EEC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00010F10);

INCLUDE_ASM("nonmatchings/music_plugin", func_000117E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0000F394);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/music_plugin", func_000101A8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000108B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00010C84);

INCLUDE_ASM("nonmatchings/music_plugin", func_000110CC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00011130);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_00011130(void) {
    s32 temp_s0;

    temp_s0 = func_0001C970(D_00061E1C) == 0;
    func_0001C918(D_00061E1C, temp_s0);
    func_00011228(temp_s0);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00011178);

INCLUDE_ASM("nonmatchings/music_plugin", func_00011228);

INCLUDE_ASM("nonmatchings/music_plugin", func_00011290);

INCLUDE_ASM("nonmatchings/music_plugin", func_000113E8);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_00012AE8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00012BFC);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00012B20);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00011558);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00011A74);

INCLUDE_ASM("nonmatchings/music_plugin", func_00011CF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00011D40);

INCLUDE_ASM("nonmatchings/music_plugin", func_00011FE4);
#endif

INCLUDE_ASM("nonmatchings/music_plugin", func_000011C4);

#if FW_VERSION == 103
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F950);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F954);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F958);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F95C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F960);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F964);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F968);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F96C);
#endif

void func_00001250(void) {
    func_000011C4(1, 0xFFFF);
}

void func_00001270(void) {
    func_000011C4(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/music_plugin", func_00001290);

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_plugin", func_000012C0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00012E98);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_00012E98(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00013614((s32) arg0);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00012EB8);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_000144DC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00014414);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00014338);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
void func_000012F0(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = sce_paf_private_wcslen(arg1);
    }
    func_0000150C(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00012F80);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_00012F80(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
    func_00013614((s32) arg0);
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_0001457C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000145E4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_000144B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001451C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_000143D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014440);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00012FA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00012FFC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001307C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000130D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013174);

INCLUDE_ASM("nonmatchings/music_plugin", func_000131D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001322C);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
void func_00001340(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = sce_paf_private_strlen(arg1);
    }
    func_000015C0(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000132D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013334);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013390);

INCLUDE_ASM("nonmatchings/music_plugin", func_000133EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001346C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000134C8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00013548);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_00013548(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00013558);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013598);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013614);
#endif

#if FW_VERSION >= 282
void func_00001390(void) {
    func_0000166C();
}

INCLUDE_ASM("nonmatchings/music_plugin", func_000013AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001478);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0000150C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000015C0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00013794);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013858);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013878);

INCLUDE_ASM("nonmatchings/music_plugin", func_000138B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000138F0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0001392C);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0001392C(void **arg0) {
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
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00013984);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_00013984(void **arg0) {
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
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_000139DC);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_000139DC(void **arg0) {
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
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00013A34);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000025CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002728);

INCLUDE_ASM("nonmatchings/music_plugin", func_000028B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000028E0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00013A50);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013BB0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00013D08);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_0001554C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015580);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00015484);

INCLUDE_ASM("nonmatchings/music_plugin", func_000154B8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00002B40);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000153A8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00002BA8);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_000153DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00013EA0);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_00014020);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_00014020(void *arg0) {
    s32 var_v0;
    void *temp_a0;

    var_v0 = 0;
    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, void **, 8);
        if (temp_a0 != NULL) {
            var_v0 = M2C_FIELD(temp_a0, s32 *, 4);
        }
    }
    return var_v0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001403C);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_00015788);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/music_plugin", D_000615E8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000615EC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000615F0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000615F4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000615F8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000615FC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061600);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061604);

INCLUDE_ASM("nonmatchings/music_plugin", func_000156DC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00002E28);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002E5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002E64);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002E70);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002E7C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002E88);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002E94);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002EA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002EAC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002EB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002EBC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002EC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002ED0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002EDC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002EE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002F1C);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_00060F80);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060F84);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060F88);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060F8C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060F90);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060F94);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060F98);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060F9C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015600);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_000140C0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000140FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001415C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_000849C4);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_000849D0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_000849F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002FE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00003054);

INCLUDE_ASM("nonmatchings/music_plugin", func_000030E4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000141BC);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_000141F0);
#endif

#if FW_VERSION < 150
s32 func_000141F0(s32 arg0) {
    s8 *temp_v0;
    s8 *var_v1;

    temp_v0 = sce_paf_private_strrchr(arg0, 0x2E);
    var_v1 = NULL;
    if (temp_v0 != NULL) {
        var_v1 = temp_v0 + 1;
    }
    return (s32) var_v1;
}
#endif

#if FW_VERSION == 152
s32 func_000141F0(s32 arg0) {
    s8 *temp_v0;

    temp_v0 = sce_paf_private_strrchr(arg0, 0x2E);
    return (temp_v0 == NULL) ? 0 : (temp_v0 + 1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00003140);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0001421C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00014300);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001450C);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0001450C(void) {
    D_00061FBC = _ZN3vsh10FixedAlloc4LockEPKc(_ZN3vsh10FixedAlloc8InstanceEv(), D_00061588);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_00014540);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_00014540(void) {
    _ZN3vsh10FixedAlloc6UnlockEPKc(_ZN3vsh10FixedAlloc8InstanceEv(), D_00061588);
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00015AA8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0001456C);
#endif

#if FW_VERSION < 150
s32 func_0001456C(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_00061FBC != 0) {
        var_v0 = D_00061FBC;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_00014588);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_00014588(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_00061FBC != 0) {
        var_v0 = D_00061FBC + 0x300000;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_000145A8);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_000145A8(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_00061FBC != 0) {
        var_v0 = D_00061FBC + 0x519000;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_000145CC);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_000145CC(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_00061FBC != 0) {
        var_v0 = D_00061FBC + 0x625800;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_00015CB8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00015C0C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00015B1C);
#endif

#if FW_VERSION == 152
s32 func_00015B1C(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_00061FBC != 0) {
        var_v0 = D_00061FBC + 0x725800;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/music_plugin", func_000145F0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001461C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00015C3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015C5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015DE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001602C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015A00);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001616C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00016244);

INCLUDE_ASM("nonmatchings/music_plugin", func_00016290);

INCLUDE_ASM("nonmatchings/music_plugin", func_000162DC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00015B4C);
#endif

#if FW_VERSION == 152
s32 func_00015B4C(void) {
    return Job_isCanceled() != 0;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00015B6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015CF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015F3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015A00);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000039B0);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001607C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00003B28);

INCLUDE_ASM("nonmatchings/music_plugin", func_00003B98);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00016154);

INCLUDE_ASM("nonmatchings/music_plugin", func_000161A0);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000161EC);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00014628);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CD0C);
#endif

#if FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CD1C);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CD2C);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00014634);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014994);

void func_00014CF4(M2C_UNK **arg0) {
    *arg0 = &D_0005CDA0;
    _ZN3paf8PhWidgetD2Ev();
}

void func_00014D1C(M2C_UNK **arg0) {
    *arg0 = &D_0005CDA0;
    _ZN3paf8PhWidgetD2Ev();
}

void func_00014D44(s32 **arg0) {
    *arg0 = &D_0005CDA0;
    _ZN3paf8PhWidgetD2Ev();
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/music_plugin", func_00014D7C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015004);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015070);

INCLUDE_ASM("nonmatchings/music_plugin", func_000150D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015134);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001519C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015488);

s32 func_00015560(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1D4);
}

INCLUDE_ASM("nonmatchings/music_plugin", func_00015568);

s32 func_000155BC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1EC) = arg1;
    return 0;
}

s32 func_000155C8(void) {
    return Job_isCanceled() != 0;
}

INCLUDE_ASM("nonmatchings/music_plugin", func_000155E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015720);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_00017288);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015A00);

INCLUDE_ASM("nonmatchings/music_plugin", func_000173C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000174A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000174EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001592C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015A00);

s32 func_00015A64(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_00017F9C(arg0, arg1 + 0x24, func_00015A00(arg1, arg2, 2, arg3, 0), arg4);
    return arg0;
}

INCLUDE_ASM("nonmatchings/music_plugin", func_00015ACC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015B3C);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00015BAC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CDA0);
#endif

#if FW_VERSION == 103
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FB60);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00015C1C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00016088);

INCLUDE_ASM("nonmatchings/music_plugin", func_00016310);

INCLUDE_ASM("nonmatchings/music_plugin", func_000163DC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000045A8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00016418);

INCLUDE_ASM("nonmatchings/music_plugin", func_000164F0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00016D50);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00016C50);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000165FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00016660);

INCLUDE_ASM("nonmatchings/music_plugin", func_000166C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00016728);

INCLUDE_ASM("nonmatchings/music_plugin", func_00016774);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000049C4);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000167C0);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001680C);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_0001680C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_00016418(arg0, arg1);
    var_v1 = -1;
    if (temp_v0 != 0) {
        var_v1 = func_0001AD94(temp_v0, arg2);
    }
    return var_v1;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00016850);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001689C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000168F8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00004AFC);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_00016CEC);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_00016CEC(s32 arg0, s32 arg1) {
    func_000168F8(arg0, arg1, 0x80040A06);
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_000186B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018794);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00017464);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017544);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00017364);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017444);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00016D0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00016D58);
#endif

#if FW_VERSION >= 103 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00016DC8);
#endif

#if FW_VERSION == 100
void func_00016DC8(s32 arg0, s32 arg1) {
    void *sp0;
    func_000171A8(arg0, arg1, 1);
    func_0001744C(&sp0, arg0, arg1);
    func_000174E0(arg0, &sp0);
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_00018880);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00017630);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00017530);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00016E18);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00016FB8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_000054D0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00017058);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017104);

INCLUDE_ASM("nonmatchings/music_plugin", func_000171A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001727C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000172D0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00005750);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00017304);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00017BCC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017C64);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001744C);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_00018FB0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00017D60);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_000174E0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000175A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000175EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000176EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017768);

INCLUDE_ASM("nonmatchings/music_plugin", func_000177DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000178C0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00005F50);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00017984);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000179E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017A80);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000060F8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00017AEC);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00017B44);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000061C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000622C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000062D0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00017BA8);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_00017BA8(s32 arg0, s32 arg1) {
    func_00016CEC(arg0, arg1);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00017BC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017C30);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_00019894);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00018644);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00018548);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00006410);

INCLUDE_ASM("nonmatchings/music_plugin", func_000065C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00017CA0);

void func_00017CF0(s32 arg0, s32 arg1) {
    func_00017BC4(arg0, arg1, 1);
}

void func_00017D0C(s32 arg0, s32 arg1) {
    func_00017C30(arg0, arg1, 1);
}

INCLUDE_ASM("nonmatchings/music_plugin", func_00017D28);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017D58);

void func_00017D88(s32 arg0, s32 arg1) {
    func_00017BC4(arg0, arg1, 8);
}

void func_00017DA4(s32 arg0, s32 arg1) {
    func_00017C30(arg0, arg1, 8);
}

void func_00017DC0(s32 arg0, s32 arg1) {
    func_00017BC4(arg0, arg1, 0x10);
}

void func_00017DDC(s32 arg0, s32 arg1) {
    func_00017C30(arg0, arg1, 0x10);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00017DF8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00017F3C);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_00017F3C(s32 arg0, s32 arg1, void *arg2, s32 arg3) {
    sceCccUTF16toSJIS(arg2, __builtin_allegrex_min((func_00017DF8(arg0, arg1, arg3) * 2) + 1, arg3), arg0 + 4);
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_00019A88);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019B74);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00018868);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018954);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001876C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018858);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00017F9C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00018084);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001810C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00006928);

INCLUDE_ASM("nonmatchings/music_plugin", func_00006984);

INCLUDE_ASM("nonmatchings/music_plugin", func_000069D4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000181A8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000181E0);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001821C);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0001821C(void **arg0) {
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
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_00018274);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_00018274(s32 arg0) {
    func_00018710(arg0);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_00018290);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_00018290(void) {
    func_0001871C();
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_00019E6C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00018C4C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00014338);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000012F0);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_000012F0(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = sce_paf_private_wcslen(arg1);
    }
    func_00007080(arg0, arg1, var_v0);
}

void func_00001310(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = sce_paf_private_strlen(arg1);
    }
    func_000117CC(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000130D8);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00018B50);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00012F80);

INCLUDE_ASM("nonmatchings/music_plugin", func_00012EB8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_000182AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018340);

void *func_000183B8(void **arg0) {
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

INCLUDE_ASM("nonmatchings/music_plugin", func_000183F0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00018574);

INCLUDE_ASM("nonmatchings/music_plugin", func_000185DC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00006EB8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001865C);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_0001A0F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A12C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00018ED4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018F0C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00018DD8);
#endif

#if FW_VERSION == 152
void func_00018DD8(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_00018A84(arg0);
    if (temp_v0 != 0) {
        func_000191C8(arg0, temp_v0);
    }
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00018E10);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000186A0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00007038);
#endif

#if FW_VERSION == 100
void func_000186D8(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_00018A84(arg0);
    if (temp_v0 != 0) {
        func_00018AD4(arg0, temp_v0);
    }
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00018710);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001871C);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152 || (FW_VERSION >= 260 && FW_VERSION < 282)
s32 func_0001871C(void) {
    return func_00018CB4();
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_0001A220);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018810);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018A84);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A4E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018CB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A7CC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00019000);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018810);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018A84);

INCLUDE_ASM("nonmatchings/music_plugin", func_000192C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018CB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000195AC);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0000137C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001448);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00007080);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00018F04);
#endif

#if FW_VERSION == 152 || FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00018810);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00018A84);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00018810);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000191C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018CB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000194B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00018738);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00018768);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_000187D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018810);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018A84);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018AD4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018CB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018DDC);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00018F50);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_0001AB94);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00019974);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00019878);
#endif

#if FW_VERSION == 152
void *func_00019878(void **arg0) {
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

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00019134);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019174);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00007B28);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_000191B4);
#endif

#if FW_VERSION < 150
void func_000191B4(s32 **arg0) {
    *arg0 = &D_0005CE78;
}
#endif

#if FW_VERSION == 152
void func_000191B4(M2C_UNK **arg0) {
    *arg0 = &D_0005CE78;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000191C4);
#endif

#if FW_VERSION < 150
void func_000191C4(s32 **arg0) {
    *arg0 = &D_0005CE78;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_000191EC);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_000191EC(void *arg0) {
    M2C_FIELD(arg0, s8 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_00019200);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_00019200(void *arg0) {
    M2C_FIELD(arg0, s8 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00019A8C_v150);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019AD0);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00019990);

INCLUDE_ASM("nonmatchings/music_plugin", func_000199D4);
#endif

#if FW_VERSION < 150
void func_00019214(s32 arg0) {
    func_00019308(arg0);
}

void func_00019230(s32 arg0) {
    func_00019308(arg0);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001924C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00007D0C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00019308);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_00019C14);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019ECC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00008164);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00019B18);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CD2C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CE78);

INCLUDE_ASM("nonmatchings/music_plugin", func_00008460);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00019DD0);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0001934C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000195E0);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_00019648);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_00019648(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_00019650);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_00019650(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00019658);

INCLUDE_ASM("nonmatchings/music_plugin", func_000196B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019710);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001974C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019788);

INCLUDE_ASM("nonmatchings/music_plugin", func_000197C8);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_00019800);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_00019800(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x80C);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00019808);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001992C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019948);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019A84);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019A8C);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_00019ADC);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_00019ADC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00019AEC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019B2C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019C18);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019C8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019D84);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_00019DBC);
#endif

#if FW_VERSION < 150
void func_00019DBC(s32 **arg0) {
    *arg0 = &D_0005CF08;
    func_0002C7F0((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_00019DBC(M2C_UNK **arg0) {
    *arg0 = &D_0005CF08;
    func_0002C7F0((s32) arg0);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_00019DE4);
#endif

#if FW_VERSION < 150
void func_00019DE4(s32 **arg0) {
    *arg0 = &D_0005CF08;
    func_0002C7F0((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_00019DE4(M2C_UNK **arg0) {
    *arg0 = &D_0005CF08;
    func_0002C7F0((s32) arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00019E0C);
#endif

#if FW_VERSION < 150
void func_00019E0C(s32 **arg0) {
    *arg0 = &D_0005CF08;
    func_0002C7F0((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CE6C);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CE78);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CE80);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CE88);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CE98);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019E44);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019F0C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0001A87C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00009108);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00009470);

INCLUDE_ASM("nonmatchings/music_plugin", func_000094C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000091FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000095D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00009690);

INCLUDE_ASM("nonmatchings/music_plugin", func_00009750);
#endif

#if FW_VERSION == 152
s32 func_0001A780(s32 arg0) {
    D_00065924 = arg0;
    return 0;
}
#endif

#if FW_VERSION == 150 || FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00019FC0);
#endif

#if FW_VERSION < 150
void func_00019FC0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005CF20;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    sce_paf_private_memset(arg0 + 0x14, 0, 0x41);
}
#endif

#if FW_VERSION == 152
void func_00019FC0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005CF20;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    sce_paf_private_memset(arg0 + 0x14, 0, 0x41);
}
#endif

#if FW_VERSION == 150 || FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0001A004);
#endif

#if FW_VERSION < 150
void func_0001A004(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005CF20;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    sce_paf_private_memset(arg0 + 0x14, 0, 0x41);
}
#endif

#if FW_VERSION == 152
void func_0001A004(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005CF20;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    sce_paf_private_memset(arg0 + 0x14, 0, 0x41);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000091FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000092B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00009364);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0001A048);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A090);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A0D8);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0001A128);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0001AB24);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001AA28);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001A1FC);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_0001A1FC(void *arg0, void *arg1) {
    s32 var_v1;

    var_v1 = 0x8000FFFF;
    if (arg1 != NULL) {
        var_v1 = 0x80070057;
        if ((M2C_FIELD(arg1, s32 *, 4) ^ 1) == 0) {
            M2C_FIELD(arg0, void **, 0xC) = arg1;
            var_v1 = 0;
            M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000095F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00009674);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00009924);

INCLUDE_ASM("nonmatchings/music_plugin", func_00009934);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001A234);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_0001A234(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001A23C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A294);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A2EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A334);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A37C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A3CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A3F0);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001A428);
#endif

#if FW_VERSION < 150
s32 func_0001A428(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x60);
}
#endif

#if FW_VERSION == 152
s32 func_0001A428(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x64);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001A430);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001A468);
#endif

#if FW_VERSION < 150
s32 func_0001A468(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x70);
}
#endif

#if FW_VERSION == 152
s32 func_0001A468(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x74);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001A470);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001A4CC);
#endif

#if FW_VERSION < 150
s32 func_0001A4CC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x60) + M2C_FIELD(arg0, s32 *, 0x70);
}
#endif

#if FW_VERSION == 152
s32 func_0001A4CC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x64) + M2C_FIELD(arg0, s32 *, 0x74);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001A4DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A51C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A5C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A66C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A714);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A798);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A7BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A80C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A970);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001AA6C);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_0001AA6C(s32 arg0) {
    func_0001AA9C(arg0);
    func_0001AC18(arg0);
    return 0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001AA9C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001AC18);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C584);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C6C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C80C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0001B4D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001B61C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001B760);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00009F9C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000A0D0);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001B3DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001B518_v152);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001B654);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000A258);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001AD94);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CF08);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084AD0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084AE8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084AEC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000A2CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000A3B4);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001ADB4);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0001ADB4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001ADC4);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001AE04);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0001AE04(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001AE14);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001AE54);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001AEA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001AEFC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001AF70);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001AFE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001B074);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001B184);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001B214);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001B324);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001B3E4);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001B518);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0001B518(void *arg0, s32 arg1) {
    void *temp_s1;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005CFA0;
    M2C_FIELD(arg0, s32 *, 0x408) = 0;
    temp_s1 = arg0 + 4;
    sce_paf_private_memset(temp_s1, 0, 0x401);
    if (arg1 != 0) {
        func_0001BAB8((s32) arg0, (s32) temp_s1, 0x401, arg1);
    }
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001B58C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001B5D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001B66C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001B800);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001B850);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001B8B0);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001B920);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_0001B920(void) {
    s32 temp_v0;
    s32 var_v0;
    s8 *temp_v0_2;

    temp_v0 = func_0001B850();
    var_v0 = 0;
    if (temp_v0 != 0) {
        temp_v0_2 = sce_paf_private_strrchr(temp_v0, 0x2E);
        if (temp_v0_2 != NULL) {
            *temp_v0_2 = 0;
        }
        var_v0 = temp_v0;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001B96C);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001B9C4);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_0001B9C4(void) {
    return func_0001B800() != 0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001B9E4);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0001B9E4(s32 arg0) {
    func_0001BA00(arg0, arg0 + 4);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001BA00);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001BA54);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001BAB8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001BB04);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001BB90);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D3A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001D3D0);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0000B1C8);
#endif

#if (FW_VERSION >= 103 && FW_VERSION < 152) || FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0001BC1C);
#endif

#if FW_VERSION == 100
void func_0001BC1C(s32 **arg0) {
    *arg0 = &D_0005D078;
    func_0001BCE8();
    func_0001D1B0((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_0001BC1C(M2C_UNK **arg0) {
    *arg0 = &D_00061248;
    func_0001BCE8();
}
#endif

#if FW_VERSION == 150 || FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0001BC54);
#endif

#if FW_VERSION == 100
void func_0001BC54(s32 **arg0) {
    *arg0 = &D_0005D078;
    func_0001BCE8();
    func_0001D1B0((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_0001BC54(M2C_UNK **arg0) {
    *arg0 = &D_00061248;
    func_0001BCE8();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0001BC8C);
#endif

#if FW_VERSION == 100
void func_0001BC8C(s32 **arg0) {
    *arg0 = &D_0005D078;
    func_0001BCE8();
    func_0001D1B0((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001BCCC);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0001BCCC(void) {
    func_0001E6FC();
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001BCE8);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_0001BCE8(void) {
    return func_0001E7E0();
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001BD04);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C4A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C518);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C398);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C408);
#endif

#if FW_VERSION < 150 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0000166C);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0001BE08);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001BFE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C088);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CF08);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BF80);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BFA0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BFA8_v250);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BFAC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BFB8_v250);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_00084AFC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084B04);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084B0C);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_00084B20);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CFA0);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C038_v250);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000B654);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C1A0);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C370);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_0001C370(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 != 0) {
        var_v1 = func_000164F0(M2C_FIELD(arg0, s32 *, 4), temp_v0);
    }
    return var_v1;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C3A4);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C410);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_0001C410(void *arg0) {
    s32 var_v1;

    var_v1 = 0x80040A01;
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        var_v1 = func_0001EB4C(0, 0);
    }
    return var_v1;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_0001DC88);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0001CCDC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001CBC0);
#endif

#if FW_VERSION == 152
s32 func_0001CBC0(void *arg0) {
    s32 var_a2;

    var_a2 = 0x80040A01;
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        var_a2 = 0;
        if (D_0006637C != 3) {
            var_a2 = func_0001EB4C(0, 0);
        }
    }
    return var_a2;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C44C);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_0001C44C(void *arg0) {
    s32 var_v1;

    var_v1 = 0x80040A01;
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        var_v1 = func_0001EBC8();
    }
    return var_v1;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C480);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_0001C480(void *arg0) {
    s32 var_v1;

    var_v1 = 0x80040A01;
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        var_v1 = func_0001EC08();
    }
    return var_v1;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C4B4);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_0001C4B4(void *arg0) {
    s32 var_v1;

    var_v1 = 0x80040A01;
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        var_v1 = func_0001EC48();
    }
    return var_v1;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C4E8);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_0001C4E8(void *arg0) {
    s32 var_v1;

    var_v1 = 0x80040A01;
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        var_v1 = func_0001EC88(0, 0);
    }
    return var_v1;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C524);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C55C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C594);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C5CC);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C604);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_0001C604(void *arg0) {
    s32 var_v1;

    var_v1 = 0x80040A01;
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        var_v1 = func_0001EDBC();
    }
    return var_v1;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C638);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_0001C638(void *arg0) {
    s32 var_v1;

    var_v1 = 0x80040A01;
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        var_v1 = func_0001EDFC();
    }
    return var_v1;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C66C);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0001C66C(s32 arg0) {
    func_0001C7C4(arg0, func_0001C7B4(arg0));
    func_0001EE3C();
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_0001DF30);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001DFE8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0001CF84);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001D054);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001CE68);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001CF38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C6A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C72C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C7B4);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CF08);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CF20);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CF38);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CF3C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CF48);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CFA0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C7C4);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C8A8);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_0001C8A8(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x10) >> 1) & 1;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E1A4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D230);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D114);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C8B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C918);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C970);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C980);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C990);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C9A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C9B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C9C0);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C9D0);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0001C9D0(void) {
    func_0001E9D4();
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C9EC);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D510);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000C40C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000C540);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000C670);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000C740);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D5F0);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001CBE0);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0001CCB0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D718);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D84C);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0001CD80);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0001CE3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001CEF0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001CFA0);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D038);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0001D038(void *arg0, s32 arg1, s32 arg2) {
    func_00016728(M2C_FIELD(arg0, s32 *, 4), func_0001689C(M2C_FIELD(arg0, s32 *, 4), arg1), arg2);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D07C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001D0D4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000C9EC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D144);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D1B0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D1F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001D31C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0001DE68);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000CC28);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001DD30);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D378);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D56C);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_0001EF94);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E108);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E1F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E498);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001DFD0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000CFB4);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E0B8);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E360);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D5F8);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D6A8);
#endif

#if FW_VERSION == 100
s32 func_0001D6A8(void *arg0, s32 arg1) {
    if (((M2C_FIELD(arg0, s32 *, 0x41C) == arg1) | (arg1 == 0)) != 0) {
        M2C_FIELD(arg0, s8 *, 0x15) = 0;
        M2C_FIELD(arg0, s32 *, 0x418) = 0;
        M2C_FIELD(arg0, s32 *, 0x41C) = 0;
    }
    return 0;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F0A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D6D8);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D94C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001DBF0);
#endif

#if FW_VERSION == 103
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D078);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FD84);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0001EB48);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EB94);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EBEC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EC38);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EC84);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001ED5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001ED64);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EEBC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EF74);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EFD8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F0B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F11C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F17C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F2E8_v150);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F2F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F400);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F480);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F4A0);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001EA10);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EA5C);
#endif

#if FW_VERSION == 152
void func_0001EAB4(s32 arg0) {
    func_0002CF18(arg0 + 0x128, 0, 0, 0, 0, 0, 0);
    func_0001EB4C_v152(arg0, 0);
}

void func_0001EB00(s32 arg0) {
    func_0002CF18(arg0 + 0x128, 0, 0, 0, 0, 0, 0);
    func_0001EB4C_v152(arg0, 0);
}

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EB4C_v152);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0001EC24);
#endif

#if FW_VERSION == 152
s32 func_0001EC24(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000D9D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000D9E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000DA40);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000DA4C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001EC2C);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001ED84);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000DCD0);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001EE3C_v152);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EEA0);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001EF80);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000DD98);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000DE48);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001EFE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F044);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F1AC);
#endif

#if FW_VERSION == 152
s32 func_0001F1AC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000E118);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E1B8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0003B2B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E644);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E664);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E728);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E878);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E8A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E900);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E94C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E9EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EA60);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003B868);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EC00);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EC38);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000ECEC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EDA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EE64);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EF10);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0000E284);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000E2BC);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F1B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F2C0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F340);
#endif

#if FW_VERSION == 152
void func_0001F340(void) {
    func_0001F2C0(1, 0xFFFF);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F360);
#endif

#if FW_VERSION == 152
void func_0001F360(void) {
    func_0001F2C0(0, 0xFFFF);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000E344);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E37C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E38C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E3F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E4A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E5A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E6B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E7DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E8F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CBF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EA70);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CC40);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EACC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EB04);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EB44);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EBB8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CDB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CE34);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CE88);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000ED54);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EDC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EE0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CFB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CFF0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EECC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EF04);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EF3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EF64);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EF8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EFC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000F0A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000F2B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000F380);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000F390);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0001DF68);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001DFA4);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001DFEC);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_0001DFEC(s32 arg0) {
    return ((1 << arg0) - 1) & 0xFF;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E000);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E064);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E0C8);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_0001FB84);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E1A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FBCC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F600);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E1A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F648);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F4C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E1A8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F508);
#endif

#if FW_VERSION == 152
void func_0001F508(M2C_UNK **arg0) {
    *arg0 = &D_0005D138;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E12C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E1A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E224);
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E274);
#endif

#if FW_VERSION == 152
void func_0001E274(M2C_UNK **arg0) {
    *arg0 = &D_0005D138;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E2C4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00010284);

INCLUDE_ASM("nonmatchings/music_plugin", func_000102D4);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E318);
#endif

#if FW_VERSION < 150
s32 *func_0001E318(void) {
    return &D_00062058;
}
#endif

#if FW_VERSION == 152
M2C_UNK *func_0001E318(void) {
    return &D_00062058;
}
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D078);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D084);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D0A4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D0C0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D0E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E324);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E368);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E3D0);
#endif

#if FW_VERSION >= 103 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E42C);
#endif

#if FW_VERSION == 100
void func_0001E42C(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x14;
    func_0002DC5C(temp_s1);
    M2C_FIELD(arg0, s8 *, 4) = 0;
    func_0002DA7C(arg0 + 0xC, 1U);
    func_0002DC98(temp_s1);
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_0001FC54);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FC88);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FCC0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FCF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FD60_v103);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FD6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FDE0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FE40);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FEA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FEE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FF04);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FF0C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F6D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F704);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F73C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F774);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F7DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F7E8_v150);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F85C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F8BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F924);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F960);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F980);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F988);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F590);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F5C4);
#endif

#if FW_VERSION == 152
void func_0001F5C4(void) {
    vshIoDevctl(&D_00061254, 0x01E080D4, 0, 0, 0, 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000F634);
#endif

#if FW_VERSION == 152
void func_0001F5FC_v152(void) {
    vshIoDevctl(&D_00061254, 0x01E000D5, 0, 0, 0, 0);
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F634);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F69C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F6A8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000F754);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F71C_v152);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F77C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F7E4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F820);
#endif

#if FW_VERSION == 152
void func_0001F820(void *arg0) {
    M2C_FIELD(arg0, s8 *, 5) = 0;
    func_0001F85C((s32) arg0);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F840);
#endif

#if FW_VERSION == 152
void func_0001F840(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F848);
#endif

#if FW_VERSION == 152
void func_0001F848(void) {

}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E47C);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/music_plugin", func_0001FF20);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FF34);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FFD4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FFDC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FFE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00020024);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F99C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F9B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FA50);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FA58);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FA60);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FAA0);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F85C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F870);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F910);
#endif

#if FW_VERSION == 152
s32 func_0001F910(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F918);
#endif

#if FW_VERSION == 152
s32 func_0001F918(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F920);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F960);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E488);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E554);
#endif

#if FW_VERSION == 150 || FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E5D0);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0001E5D0(void) {
    func_0001E554(1, 0xFFFF);
}
#endif

#if FW_VERSION == 150 || FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E5F0);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0001E5F0(void) {
    func_0001E554(0, 0xFFFF);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000FAE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000FBA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000FC5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000FD18);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000FDD4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000FE98);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000FF14);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000FF54);

INCLUDE_ASM("nonmatchings/music_plugin", func_00010064);

INCLUDE_ASM("nonmatchings/music_plugin", func_000101E0);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E610);
#endif

#if FW_VERSION < 150
s32 func_0001E610(void) {
    return func_0001F144();
}
#endif

#if FW_VERSION == 152
s32 func_0001E610(void) {
    func_0001F144();
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00010298);

INCLUDE_ASM("nonmatchings/music_plugin", func_00010304);

INCLUDE_ASM("nonmatchings/music_plugin", func_00010370);

INCLUDE_ASM("nonmatchings/music_plugin", func_000103DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00010448);

INCLUDE_ASM("nonmatchings/music_plugin", func_000104C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000105DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001081C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00010B6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00010E18);

INCLUDE_ASM("nonmatchings/music_plugin", func_00010FB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000112A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00011488);

INCLUDE_ASM("nonmatchings/music_plugin", func_000114A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000114B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000115EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001167C);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C148);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C150);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C154);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C160);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C16C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C178_v250);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C184);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C188);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C18C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C194);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_00061248);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084C98);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084CA8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084CC8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084CE8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E62C);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E668);
#endif

#if FW_VERSION == 152
s32 func_0001E668(void) {
    return (D_00062094 != 0) ? 0 : 0x5002;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E680);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0001E680(void) {
    if (sceKernelDeleteEventFlag(D_00062090) == 0) {
        D_00062090 = -1;
    }
    if (sceKernelTerminateDeleteThread(D_0006208C) == 0) {
        D_0006208C = -1;
    }
    if (sceKernelDeleteMbx(D_00062088) == 0) {
        D_00062088 = -1;
    }
}
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/music_plugin", D_000618B0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000618BC);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_00061248);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_00061254);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D138);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_00084D10);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084D2C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084D44);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084D68);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084D88);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084DA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00011688);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001173C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001175C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001177C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_000117CC);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00018CB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001668);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001878);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001954);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001A8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001AE0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001188C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000118A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000118B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000118C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000118E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000118F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00011CE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00011DD4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00011E50);

INCLUDE_ASM("nonmatchings/music_plugin", func_00011E70);

INCLUDE_ASM("nonmatchings/music_plugin", func_00011E90);

INCLUDE_ASM("nonmatchings/music_plugin", func_00011F4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00012008);

INCLUDE_ASM("nonmatchings/music_plugin", func_000120A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00012140);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084E00);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_00084E34);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_00084E40);

INCLUDE_ASM("nonmatchings/music_plugin", func_000121F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000124A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000125A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00012724);

INCLUDE_ASM("nonmatchings/music_plugin", func_000127F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000128F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000129D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000129E8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084E9C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F9D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00012B08);

INCLUDE_ASM("nonmatchings/music_plugin", func_00012B78);

INCLUDE_ASM("nonmatchings/music_plugin", func_00012BE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00012C58);

INCLUDE_ASM("nonmatchings/music_plugin", func_00012CF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00012D90);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00013AC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013C88);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00012E34);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013068);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000132EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001333C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013344);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001334C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000133C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013444);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001344C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013454);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013508);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013574);

INCLUDE_ASM("nonmatchings/music_plugin", func_000135B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000135EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013C84);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013CA0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00013CBC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013CC4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00013CCC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013CE8);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00013D04);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013D58);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013DAC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013E40);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013ED4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013F04);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013F34);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013F78);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014004);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014054);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001406C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0001486C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014970);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0001407C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001408C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084EE0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084F60);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001428C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001446C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000144F8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00014ABC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014B04);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00014540_v201);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014588_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000145D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000145F8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00014B98);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0001461C_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00014640);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00014CE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014DD0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00014768);

INCLUDE_ASM("nonmatchings/music_plugin", func_000147D4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00014830);

INCLUDE_ASM("nonmatchings/music_plugin", func_000148A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001491C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014948);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014988);

INCLUDE_ASM("nonmatchings/music_plugin", func_000149C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014A68);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014C68);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C3F0);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_00084FB8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00014DBC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001553C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000157C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015BE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015C44);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015D78);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00015DB8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00015DF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015E20);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E62C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E668);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E680);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084FF8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00085008);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E6FC);
#endif
