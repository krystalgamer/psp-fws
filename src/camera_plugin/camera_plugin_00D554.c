#include "common.h"
#include "camera_plugin_decls.h"

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000D554);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000D5C8);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000D874);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000DBA0);

#if FW_VERSION < 352
s32 func_0000DC84(void) {
    s32 temp_s0;

    temp_s0 = func_0000DBA0();
    D_00166C90 = 0;
    if (D_0016F880 >= 0) {
        sceIoClose(D_0016F880);
        D_0016F880 = -1;
    }
    if (D_00170F9C != 0) {
        func_0000CA68();
        D_00170F9C = 0;
    }
    if (D_00173ABC != 0) {
        scePaf_545FE2DA(D_00173ABC);
        D_00173ABC = 0;
    }
    return temp_s0;
}
#else
s32 func_0000DC84(void) {
    s32 temp_s0;

    temp_s0 = func_0000DBA0();
    D_00166C90 = 0;
    if (D_00170DC0 >= 0) {
        sceIoClose(D_00170DC0);
        D_00170DC0 = -1;
    }
    if (D_00170F9C != 0) {
        func_0000CA68();
        D_00170F9C = 0;
    }
    if (D_00173ABC != 0) {
        scePaf_4729E549(D_00173ABC);
        D_00173ABC = 0;
    }
    return temp_s0;
}
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000DD2C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000DF64);

#if FW_VERSION < 352
void func_0000E198(void) {

}
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000E048);

s32 func_0000E0BC(void) {
    return D_00173B00;
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000E0C8);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000E118);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023740);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023750);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023764);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_0002377C);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023798);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_000237B0);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_000237D0);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000E16C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000E310);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000E454);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000E4C0);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000E500);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000E578);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000E6D4);

void func_0000E7B8(M2C_UNK **arg0) {
    *arg0 = &D_00023B30;
}

void func_0000E7C8(M2C_UNK **arg0) {
    *arg0 = &D_00023B30;
}

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000E7D8);
#else
void func_0000E7D8(M2C_UNK **arg0) {
    *arg0 = &D_00023B30;
    scePaf_4E67BB08();
}
#endif

void func_0000E800(struct Unk_func_0000E800_0 *arg0) {
    arg0->unk30 = 0xA;
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000E80C);

s32 func_0000E834(struct Unk_func_0000E834_0 *arg0) {
    return arg0->unk4;
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000E83C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000E8D4);

s32 func_0000E8FC(struct Unk_func_0000E8FC_0 *arg0) {
    return arg0->unk8;
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000E904);

s32 func_0000E92C(struct Unk_func_0000E92C_0 *arg0) {
    return arg0->unkC;
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000E934);

s32 func_0000E95C(struct Unk_func_0000E95C_0 *arg0) {
    return arg0->unk10;
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000E964);

s32 func_0000E98C(struct Unk_func_0000E98C_0 *arg0) {
    return arg0->unk14;
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000E994);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000E9BC);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023800);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_0002381C);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023838);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023858);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023878);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023898);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_000238B8);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_000238DC);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_000238F8);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023914);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023928);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023944);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000E9C4);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000EA90);

s32 func_0000EAB8(struct Unk_func_0000EAB8_0 *arg0) {
    return arg0->unk1C;
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000EAC0);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000EB28);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000EB8C);

s32 func_0000EB94(struct Unk_func_0000EB94_0 *arg0) {
    return arg0->unk30;
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000EB9C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000EBC4);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000EBCC);

s32 func_0000EBF4(struct Unk_func_0000EBF4_0 *arg0) {
    return arg0->unk20;
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000EBFC);

s32 func_0000EC24(struct Unk_func_0000EC24_0 *arg0) {
    return arg0->unk24;
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000EC2C);

s32 func_0000EC54(struct Unk_func_0000EC54_0 *arg0) {
    return arg0->unk28;
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000EC5C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000ED28);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000ED70);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000EDC8);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000EEEC);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000EF40);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000F14C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000F2A4);
#else
INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000EFEC);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000F130);
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000F284);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000F2F8);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000F390);

#if FW_VERSION < 352
s32 func_0000F5D4(void) {
    return 1;
}

void func_0000F5DC(void) {

}

void func_0000F44C(void) {
    sceVshCommonGui_441D55D7(0);
}
#else
void func_0000F44C(void) {
    sceVshCommonGui_891DD627(0);
}
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000F600);
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000F468);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000F700);
#else
INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000F4C0);
#endif

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023994);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023B30);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023B38);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023B40);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023B44);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000F6CC);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0000FDBC);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001002C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000100F0);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000101D8);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000102E8);

u8 func_00010324(void) {
    return D_00173B04;
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00010330);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000103FC);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001048C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000104CC);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001055C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001059C);

void func_000105F8(struct Unk_func_000105F8_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00010608);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00010830);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00011490);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001162C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00011920);
#else
INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001066C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000116CC);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00011A10);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00011C6C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00012400);
#endif

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023C48);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023C68);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000125C0);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000126E8);

#if FW_VERSION == 352
void func_00012780(M2C_UNK **arg0) {
    *arg0 = &D_00023C80;
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00012790);
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000127B8);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00011C68);
#else
void func_0001281C(void) {
    scePaf_4729E549(D_00174664);
    D_00174664 = 0;
    scePaf_4729E549(D_00174668);
    D_00174668 = 0;
}

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023C80);
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00012860);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00012B10);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00012B60);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00012BF0);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00012EC4);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00012F7C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00013008);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00013130);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001328C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000133E8);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000134F8);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000135F0);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000136E4);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000137E8);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00013B4C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00013F54);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00013FF8);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000140A4);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00014198);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001426C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00014314);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000143F4);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001445C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000147FC);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00014A60);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00014AE4);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00014B68);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00014BEC);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00014C70);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00014D14);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00014DB8);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00014E64);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001433C);
#else
INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00014EF8);
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00014F34);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00014F58);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00014FCC);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00015088);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000150E4);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00015120);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00015228);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000152D8);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000153D4);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00015430);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001548C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00015544);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023D4C);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023D50);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000155FC);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00015724);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000157FC);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000158EC);
#else
void func_000158EC(struct Unk_func_000158EC_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk4;
    arg0->unk0 = &D_00023D78;
    if (temp_v1 != 0) {
        scePaf_CCFF20ED(temp_v1);
        arg0->unk4 = 0;
    }
}
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00015934);
#else
void func_00015934(struct Unk_func_00015934_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk4;
    arg0->unk0 = &D_00023D78;
    if (temp_v1 != 0) {
        scePaf_CCFF20ED(temp_v1);
        arg0->unk4 = 0;
    }
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001597C);
#endif

#if FW_VERSION < 352
void func_0001597C(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00023D78;
    if (temp_v1 != 0) {
        scePaf_B3D2C3BB(temp_v1);
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    scePaf_4E67BB08(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000159CC);

void func_00015A98(void) {
    func_000159CC(1, 0xFFFF);
}

void func_00015AB8(void) {
    func_000159CC(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00015AD8);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00015B4C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00015C5C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00015CD0);

void func_00015DE0(struct Unk_func_00015DE0_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

void func_00015DF0(struct Unk_func_00015DF0_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00015E00);

void func_00015E74(struct Unk_func_00015E74_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = arg0->unk8;
    temp_v0 = arg0->unk4 - 1;
    arg0->unk4 = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_00016198((s32) arg0, temp_v1 - 0xA);
    }
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00015EB8);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00015FA4);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00016018);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000160D8);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00016198);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00016258);

s32 func_00016318(struct Unk_func_00016318_0 *arg0) {
    return arg0->unk4;
}

void func_00016320(M2C_UNK **arg0) {
    *arg0 = &D_00023E20;
    func_000158EC(arg0);
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00016348);

void func_00016380(M2C_UNK **arg0) {
    *arg0 = &D_00023E20;
    func_000158EC(arg0);
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000163A8);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000163E0);
#else
void func_000163E0(s32 **arg0) {
    *arg0 = &D_00023DD8;
    func_000158EC(arg0);
    scePaf_6261C0A5(arg0);
}
#endif

void func_00016418(s32 **arg0) {
    *arg0 = &D_00023DD8;
    func_000158EC(arg0);
}

void func_00016440(M2C_UNK **arg0) {
    *arg0 = &D_00023E20;
    func_000158EC(arg0);
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00016468);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023D78);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023D90);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023DA8);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023DB8);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023DC8);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023DD8);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023DF0);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023E08);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023E20);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000164A0);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001696C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00016AEC);

void func_00016B34(s32 arg0, M2C_UNK arg1) {
    func_00017304(arg1, arg0);
}

void func_00016B58(s32 arg0, s32 arg1) {
    func_00017304(arg1, arg0 + 0xC);
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00016B80);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00016FA4);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00017154);

u16 func_00017190(struct Unk_func_00017190_0 *arg0) {
    return *arg0->unk4;
}

s32 func_0001719C(struct Unk_func_0001719C_0 *arg0) {
    return *arg0->unk4;
}

s32 func_000171A8(struct Unk_func_000171A8_0 *arg0) {
    return *arg0->unk4;
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000171B4);

s32 func_000171F0(struct Unk_func_000171F0_0 *arg0) {
    return arg0->unk4;
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000171F8);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00017278);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00017304);

void func_00017350(void) {
    func_0001752C();
}

void func_0001736C(void) {
    func_00017584();
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00017388);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000173B8);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00017438);

s32 *func_000174F4(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_00017720(arg1, arg2);
    return arg0;
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001752C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00017584);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000175B0);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00017720);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00017778);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000178B0);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00017904);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00016D5C);
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00016FB4);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00017154_v303);
#endif

#if FW_VERSION == 302
INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00017154_v302);
#endif

#if FW_VERSION == 301
INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00017154_v301);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00017154_v300);
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00017250);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001734C);
#endif

#if FW_VERSION == 352
void func_00017968(M2C_UNK **arg0) {
    *arg0 = &D_00023ED0;
}

void func_00017978(M2C_UNK **arg0) {
    *arg0 = &D_00023EF8;
}

void func_00017988(M2C_UNK **arg0) {
    *arg0 = &D_00023EF8;
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00017998);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000179C0);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00017B18);

void func_00017E44(M2C_UNK **arg0) {
    *arg0 = &D_00023EF8;
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00017E54);
#endif

#if FW_VERSION < 310
void func_00017E7C(struct Unk_func_00017E7C_0 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s8 *, 0xA0) = 1;
}
#endif

#if FW_VERSION == 352
void func_00017E7C(struct Unk_func_00017E7C_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
}
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00017E88);
#endif

#if FW_VERSION == 352
void func_00017E88(void) {
}
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001A50C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001A600);
#endif

#if FW_VERSION == 352
s32 func_00017E90(void) {
    return 0x50;
}

s32 func_00017E98(void) {
    return 1;
}

void func_00017EA0(void) {
}

void func_00017EA8(void) {
}

void func_00017EB0(M2C_UNK **arg0) {
    *arg0 = &D_00023F28;
}

void func_00017EC0(M2C_UNK **arg0) {
    *arg0 = &D_00023F28;
}

void func_00017ED0(M2C_UNK **arg0) {
    *arg0 = &D_00023EF8;
}

void func_00017EE0(M2C_UNK **arg0) {
    *arg0 = &D_00023EF8;
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00017EF0);

s32 func_00017F18(void) {
    return 2;
}

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023ED0);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023EF8);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00017F20);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001814C);

void func_00018458(void) {
    sceUsbCamSetContrast(0x80);
}

s32 func_00018474(void) {
    return 0x46;
}

void func_0001847C(M2C_UNK **arg0) {
    *arg0 = &D_00023F58;
}

void func_0001848C(M2C_UNK **arg0) {
    *arg0 = &D_00023F58;
}

void func_0001849C(M2C_UNK **arg0) {
    *arg0 = &D_00023EF8;
}

void func_000184AC(M2C_UNK **arg0) {
    *arg0 = &D_00023EF8;
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000184BC);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000184E4);

void func_0001851C(void) {
}

void func_00018524(void) {
    sceUsbCamSetImageEffectMode(2);
    sceUsbCamSetContrast(0x80);
}

s32 func_00018548(void) {
    return 0x5A;
}

s32 func_00018550(void) {
    return 0;
}

void func_00018558(M2C_UNK **arg0) {
    *arg0 = &D_00023FB8;
}

void func_00018568(M2C_UNK **arg0) {
    *arg0 = &D_00023FB8;
}

void func_00018578(M2C_UNK **arg0) {
    *arg0 = &D_00023EF8;
}

void func_00018588(M2C_UNK **arg0) {
    *arg0 = &D_00023EF8;
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00018598);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023F28);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023F58);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000185C0);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000187E8);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00019888);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000198C0);

void func_000198F8(M2C_UNK **arg0) {
    *arg0 = &D_00024008;
    func_0001AEB0();
}

void func_00019920(M2C_UNK **arg0) {
    *arg0 = &D_00024008;
    func_0001AEB0();
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00019948);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00019980);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023FB8);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000199FC);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00019B34);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00019BC0);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00019C50);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00019CDC);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00019D74);

u8 func_00019DC4(struct Unk_func_00019DC4_0 *arg0) {
    return arg0->unk11;
}

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00023FE8);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00019DCC);

s32 func_00019DD8(struct Unk_func_00019DD8_0 *arg0) {
    return arg0->unk10 ^ 1;
}

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00024008);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00019DE4);
#endif

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00024044);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00024050);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00024068);

#if FW_VERSION == 310
INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00022C74_v310);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00022C88);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000170C0);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00017298);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00017394);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00017490);

void func_00017E7C(struct Unk_func_00017E7C_0 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s8 *, 0x88) = 1;
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00017E88);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001A50C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001A600);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00017540);
#endif

#if FW_VERSION == 310
INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00022CA8);
#endif

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00022AA0);
#endif

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00024148);
#else
INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_0002407C);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00024090);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001A00C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001A17C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001A25C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001A33C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001A424);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001A4BC);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001A4F8);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001A504);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001A50C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001A600);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001A694);
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001A948);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001A974);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001AA08);
#else
void func_0001AA08(s32 **arg0) {
    M2C_FIELD(arg0, s32 **, 0) = &D_00024148;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_00022AE8;
    scePaf_6261C0A5(arg0);
}
#endif

void func_0001AA3C(struct Unk_func_0001AA3C_0 *arg0, s32 arg1) {
    arg0->unk4 = arg1;
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001AA44);

#if FW_VERSION < 352
void func_0001AA64(s32 arg0) {
    scePaf_D24E4016(arg0 + 8);
}
#else
void func_0001AA64(s32 arg0) {
    scePaf_BB8E4390(arg0 + 8);
}
#endif

#if FW_VERSION < 352
void func_0001AA80(s32 arg0) {
    scePaf_1F0E9712(arg0 + 8);
}
#else
void func_0001AA80(s32 arg0) {
    scePaf_79542EEA(arg0 + 8);
}
#endif

#if FW_VERSION < 352
void func_0001AA9C(s32 arg0) {
    scePaf_0CFDBE2F(arg0 + 8);
}
#else
void func_0001AA9C(s32 arg0) {
    scePaf_291EBB2C(arg0 + 8);
}
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001AAB8);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001AAFC);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001AB3C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001AB78);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001ABB8);

void func_0001ABDC(struct Unk_vt_func_0001ABDC_arg0 **arg0) {
    (*arg0)->unk10();
}

void func_0001AC00(struct Unk_vt_func_0001AC00_arg0 **arg0) {
    (*arg0)->unk14();
}

void func_0001AC24(struct Unk_vt_func_0001AC24_arg0 **arg0) {
    (*arg0)->unk18();
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001AC48);

void func_0001AC6C(struct Unk_vt_func_0001AC6C_arg0 **arg0) {
    (*arg0)->unk20();
}

void func_0001AC90(struct Unk_vt_func_0001AC90_arg0 **arg0) {
    (*arg0)->unk24();
}

void func_0001ACB4(struct Unk_vt_func_0001ACB4_arg0 **arg0) {
    (*arg0)->unk28();
}

#if FW_VERSION < 352
void func_0001ACD8(s32 arg0) {
    scePaf_95948FB6(arg0 + 8);
}
#else
void func_0001ACD8(s32 arg0) {
    scePaf_1A314D65(arg0 + 8);
}
#endif

#if FW_VERSION < 352
void func_0001ACF4(s32 arg0) {
    scePaf_ED89C94B(arg0 + 8);
}
#else
void func_0001ACF4(s32 arg0) {
    scePaf_6FAE0AC1(arg0 + 8);
}
#endif

#if FW_VERSION < 352
void func_0001AD10(s32 arg0) {
    scePaf_BA433BEF(arg0 + 8);
}
#else
void func_0001AD10(s32 arg0) {
    scePaf_2A5E7BE9(arg0 + 8);
}
#endif

#if FW_VERSION < 352
void func_0001AD2C(s32 arg0) {
    scePaf_B7865607(arg0 + 8);
}
#else
void func_0001AD2C(s32 arg0) {
    scePaf_7EA9C56C(arg0 + 8);
}
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001AD48);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001AD88);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001ADC8);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001AE08);

void func_0001AE48(void) {
}

s32 func_0001AE50(void) {
    return -1;
}

s32 func_0001AE58(void) {
    return -1;
}

s32 func_0001AE60(void) {
    return -1;
}

s32 func_0001AE68(void) {
    return -1;
}

s32 func_0001AE70(void) {
    return 0;
}

s32 func_0001AE78(void) {
    return 0;
}

s32 func_0001AE80(void) {
    return 1;
}

void func_0001AE88(void) {
}

void func_0001AE90(M2C_UNK **arg0) {
    *arg0 = &D_000241E0;
}

void func_0001AEA0(M2C_UNK **arg0) {
    *arg0 = &D_000241E0;
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001AEB0);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001AEC0);
#else
void func_0001AEC0(M2C_UNK **arg0) {
    *arg0 = &D_000241E0;
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001AED0);
#endif

#if FW_VERSION < 352
void func_0001AED0(M2C_UNK **arg0) {
    *arg0 = &D_00022C20;
    scePaf_4E67BB08();
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00017DB4);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00017F18);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_000241E0);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00022C20);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00018248);

void func_00018258(M2C_UNK **arg0) {
    *arg0 = &D_00022C20;
    scePaf_4E67BB08();
}

void func_00018280(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = arg3;
}

void func_00018290(void) {

}

s32 func_00018298(void) {
    return 0x50;
}

s32 func_000182A0(void) {
    return 1;
}

void func_000182A8(void) {

}

void func_000182B0(void) {

}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000182B8);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000182C8);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000182D8);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000182E8);

void func_000182F8(M2C_UNK **arg0) {
    *arg0 = &D_00022C20;
    scePaf_4E67BB08();
}

s32 func_00018320(void) {
    return 2;
}
#endif

#if FW_VERSION == 310
INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00018510);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00018748);
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00018328);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00018560);
#endif

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00022C50);

INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00022C80);

void func_00018878(void) {
    sceUsbCamSetContrast(0x80);
}

s32 func_00018894(void) {
    return 0x46;
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001889C);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000188AC);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000188BC);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000188CC);

void func_000188DC(M2C_UNK **arg0) {
    *arg0 = &D_00022C20;
    scePaf_4E67BB08();
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00018904);

void func_0001893C(void) {

}

void func_00018944(void) {
    sceUsbCamSetImageEffectMode(2);
    sceUsbCamSetContrast(0x80);
}

s32 func_00018968(void) {
    return 0x5A;
}

s32 func_00018970(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00018978);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00018988);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00018998);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000189A8);

void func_000189B8(M2C_UNK **arg0) {
    *arg0 = &D_00022C20;
    scePaf_4E67BB08();
}
#endif

#if FW_VERSION == 310
INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00018BC8);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00018DF4);
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_000189E0);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_00018C0C);
#endif

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/camera_plugin_00D554", D_00022CE0);
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001AEF8);

INCLUDE_ASM("nonmatchings/camera_plugin_00D554", func_0001B510);

void func_0001BC50(struct Unk_func_0001BC50_0 *arg0, s32 arg1) {
    arg0->unk34 = arg1;
}

s32 func_0001BC58(s32 arg0) {
    return arg0;
}

void func_0001BC60(void) {
    func_0001F524();
}

s32 func_0001BC7C(struct Unk_func_0001BC7C_0 *arg0) {
    return arg0->unk60;
}

s32 func_0001BC84(struct Unk_func_0001BC84_0 *arg0) {
    return arg0->unk30;
}
