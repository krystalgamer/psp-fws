#include "common.h"
#include "music_main_plugin_decls.h"

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00011C7C);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00011DFC);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0001203C);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000120FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00012184);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00012224);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000122FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0001236C);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000123DC);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00012454);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000129E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00012C74);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0001293C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00012D40);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00012DDC);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00012E18);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00012E40);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00012F18);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00012FA8);

s32 func_00013024(s32 arg0) {
    s32 var_v1;
    struct Unk_vt_func_00013024_temp_v0 **temp_v0;

    temp_v0 = func_00012E40();
    var_v1 = 0;
    if (func_00013854(arg0, temp_v0, 2) == 0) {
        var_v1 = (*temp_v0)->unk28(temp_v0);
    }
    return var_v1;
}

s32 func_0001308C(s32 arg0) {
    s32 var_v1;
    struct Unk_vt_func_0001308C_temp_v0 **temp_v0;

    temp_v0 = func_00012E40();
    var_v1 = 0;
    if (func_00013854(arg0, temp_v0, 2) == 0) {
        var_v1 = (*temp_v0)->unk20(temp_v0);
    }
    return var_v1;
}

s32 func_000130F4(s32 arg0) {
    s32 var_v1;
    struct Unk_vt_func_000130F4_temp_v0 **temp_v0;

    temp_v0 = func_00012E40();
    var_v1 = 0;
    if (func_00013854(arg0, temp_v0, 2) == 0) {
        var_v1 = (*temp_v0)->unk34(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0001315C);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000131C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00013234);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00013280);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000132CC);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00013310);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0001336C);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00013854);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00013878);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00013958);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000139D4);

s32 func_00013AEC(s32 arg0, s32 arg1, s32 arg2) {
    void *sp0;
    s32 var_s2;

    var_s2 = 0;
    if (arg2 & 0xFF) {
        var_s2 = func_000140F4(arg0, arg1, 1);
    }
    func_00014420(&sp0, arg0, arg1);
    func_000144B8(arg0, &sp0);
    return var_s2;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00013B60);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00013D30);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00013DCC);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00013EF0);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00013F9C);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000140F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000141CC);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00014220);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00014268);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000142D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00014420);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000144B8);

s32 func_00014678(s32 arg0, struct Unk_vt_func_00014678_arg1 **arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (func_00013854(arg0, arg1, 2) == 0) {
        var_v1 = (*arg1)->unk20(arg1);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000146C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000147BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00014838);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000148B4);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00014990);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00014A54);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00014AEC);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00014B8C);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00014BFC);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00014C64);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00014CC4);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00014D2C);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00014DD0);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00014E78);

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00014F10);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000150C4);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0001514C);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00015238);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00015308);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00015390);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0001542C);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00015488);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00009348);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000154D8);

void func_00015514(void **arg0) {
    void *temp_s0;
    struct Unk_func_00015514_var_a0 *var_a0;
    struct Unk_func_00015514_var_v0 *var_v0;

    var_a0 = *arg0;
    var_v0 = var_a0->unk4;
    if (var_v0 != var_a0) {
        do {
            temp_s0 = var_v0->unk4;
            scePaf_7EC15225(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    scePaf_7EC15225(var_a0);
}

void func_0001556C(void) {
    func_00015A38();
}

void func_00015588(void) {
    func_00015A90();
}

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00003414);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00003444);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00008C48);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000155A4);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000153D0);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0000E8D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00008A04);
#endif

#if FW_VERSION >= 282
s32 *func_000157C4(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_00015C9C(arg1, arg2);
    return arg0;
}
#endif

void ***func_000157FC(void ***arg0, struct Unk_func_000157FC_1 *arg1, void **arg2) {
    void **temp_s0;
    struct Unk_func_000157FC_temp_v1 *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = temp_v1->unk4;
    *temp_s0 = temp_v1->unk0;
    M2C_FIELD(temp_v1->unk0, void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1);
    *arg0 = temp_s0;
    arg1->unk4 = (s32) (arg1->unk4 - 1);
    return arg0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00015864);

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000077BC);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000158E4);

void func_00015928(s32 arg0, s32 arg1) {
    struct Unk_func_00015928_temp_v0 *temp_v0;

    temp_v0 = func_00015C9C(arg0, arg1);
    if (temp_v0->unk3D != 0) {

    } else {
        func_00015CF4(arg0, temp_v0);
    }
}

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0001596C);

s32 *func_00015A00(s32 *arg0, s32 arg1, s32 arg2) {
    *arg0 = func_00015C9C(arg1, arg2);
    return arg0;
}

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00007948);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00015A38);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00015A90);

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000079EC);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00015ABC);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00015C9C);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00015CF4);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00015FA0);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000160E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00016220);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000162A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00016468);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000164BC);

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000092A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00008514);
#endif

#if FW_VERSION < 330
void func_00016520(M2C_UNK **arg0) {
    *arg0 = &D_0009B510;
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00016548);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00016564);

void func_00016580(struct Unk_func_00016580_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk10;
    if (temp_v0 != 0) {
        scePaf_B3D2C3BB(temp_v0);
    }
    func_00016ADC(arg0);
    func_00016B20(arg0);
}

void func_000165CC(struct Unk_func_000165CC_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk10;
    if (temp_v0 != 0) {
        scePaf_B3D2C3BB(temp_v0);
    }
    func_00016ADC(arg0);
    func_00016B20(arg0);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0000861C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00016618);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000166D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00016ADC);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00016B20);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00016B64);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B500);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B510);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00016E18);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_00098EC8);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009BBA0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009BBA8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009BBB8);
#endif

#if FW_VERSION < 330
s32 func_00017100(struct Unk_func_00017100_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = arg0->unk8;
    if (temp_v0 != 0) {
        var_v1 = sceIoClose(temp_v0);
    }
    return var_v1;
}

s32 func_00017138(struct Unk_func_00017138_0 *arg0) {
    return arg0->unk10;
}

s32 func_00017140(struct Unk_func_00017140_0 *arg0) {
    return arg0->unkC;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00016D5C);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00016DF8);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00016E94);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00016ED4);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00016F14);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00016F5C);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00017A84);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00017AB4);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00017AD8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_00098F50);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_00098F60);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_00098F70);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_00098FD0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B888);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_00098FEC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_00099000);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009900C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_00099018);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_00099024);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_00099030);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_00099040_v271);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_00099050);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009905C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_00099068);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_00099074);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_00099084);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_00099094);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_000990A4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_000990B0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_000990BC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_000990C8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_000990D4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_000990E0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_000990EC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_000990F8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_00099104);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_00099110);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_00099118);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_00099120);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_00099130);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_00099190);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009BBA0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009BBA8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009BBB8);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00017B74);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00017C30);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00017CD4);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00018258);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00017ECC);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00017F30);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00017F94);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00017FF8);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0001805C);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000181A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00018318);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000183C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000184BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00018870);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00018A28);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00018C30);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00019048);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00019064);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00019080);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00019110);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0001914C);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000191A4);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00019224);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0001927C);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000192A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00019364);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00019374);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0000A068);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000193A4);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000193B4);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000193DC);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000193E4);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000195A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0001975C);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00019800);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000198A4);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00019950);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00019AF4);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00019B24);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00019D10);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00019EB0);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00019FCC);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0001A3C4);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0001A178);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0005188C);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0001A1C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0005190C);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0001A25C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00017148);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000171E4);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00017280);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
void func_00017280(struct Unk_func_00017280_0 *arg0) {
    arg0->unk0 = &D_0009B818;
    func_00018594();
    sceKernelDeleteSema(arg0->unk90);
    func_0001B730((s32) arg0);
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000172C0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
void func_000172C0(struct Unk_func_000172C0_0 *arg0) {
    arg0->unk0 = &D_0009B818;
    func_00018594();
    sceKernelDeleteSema(arg0->unk90);
    func_0001B730((s32) arg0);
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00017300);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
void func_00017300(struct Unk_func_00017300_0 *arg0) {
    arg0->unk0 = &D_0009B818;
    func_00018594();
    sceKernelDeleteSema(arg0->unk90);
    func_0001B730((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00017348);

void func_00017E70(struct Unk_func_00017E70_0 *arg0) {
    func_00018594();
    arg0->unk54 = 0;
    func_0001B810(arg0);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00017EA0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B520);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B52C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B538);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B544);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B550);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B560);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B570);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B57C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B588);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B594);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B5A4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B5B4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B5C4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B5CC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B5D8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B5E4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B5F0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B5FC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B608);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B614);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B620);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B62C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B638);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_000B30B8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_000B30C4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_000B30D4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_000B30E4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_000B30F0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_000B30FC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_000B3108);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_000B3118);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_000B3128);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B640);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B64C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B658);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B664);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B670);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B67C);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_000B3180);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_000B3188);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_000B3190);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_000B319C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_000B31A8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_000B31B4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B688);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B694);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B6A4);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B6B4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B6BC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B6C4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B6D0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B6D8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B6E0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B6EC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B6F4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B700);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B708);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B714);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B71C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B724);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B730);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011C7C", D_0009B770);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00017EC4);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00017F60);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0001801C);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000180C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00018258);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000182B8);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0001831C);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00018380);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000183E4);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0001CB50);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00018448);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00018594);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00018704);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000187B4);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000188A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00018C5C);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00018E14);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0001901C);

void func_00019434(void) {
    func_00019610();
}

void func_00019450(void) {
    func_00019668();
}

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0001946C);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000194FC);

void func_00019538(void **arg0) {
    void *temp_s0;
    struct Unk_func_00019538_var_a0 *var_a0;
    struct Unk_func_00019538_var_v0 *var_v0;

    var_a0 = *arg0;
    var_v0 = var_a0->unk4;
    if (var_v0 != var_a0) {
        do {
            temp_s0 = var_v0->unk4;
            scePaf_7EC15225(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    scePaf_7EC15225(var_a0);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00019590);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00019610);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00019668);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00019694);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00019750);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_00019750(M2C_UNK **arg0) {
    *arg0 = &D_0009B888;
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00019760);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_00019760(M2C_UNK **arg0) {
    *arg0 = &D_0009B888;
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0001BAD8);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0001BB64);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0001BBF0);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0001BC28);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
s32 func_00019788(struct Unk_func_00019788_0 *arg0) {
    return arg0->unkC;
}

void func_00019790(M2C_UNK **arg0) {
    *arg0 = &D_0009B878;
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000197A0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_000197A0(M2C_UNK **arg0) {
    *arg0 = &D_0009B878;
    scePaf_4E67BB08(arg0);
}

s32 func_000197C8(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_000197D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_0001995C);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00019AE8);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00019B8C);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00019C30);

INCLUDE_ASM("nonmatchings/music_main_plugin_011C7C", func_00019CDC);
#endif
