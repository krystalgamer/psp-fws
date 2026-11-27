/* lang: c++ */
#include "common.h"
#include "video_main_plugin_decls.h"

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000286EC);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000287AC);

s32 func_00028838(u32 arg0, u32 arg1) {
    s32 var_v0;

    var_v0 = -1;
    if (arg1 >= 4U) {

    } else {
        var_v0 = sceIoDclose(arg0);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00028868);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053C10);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053C18);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053D6C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053C24);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000288C8);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000289CC);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00028B20);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00028B70);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00028BC8);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00028C84);

void func_00028D98(struct Unk_func_00028D98_0 *arg0, s32 arg1) {
    arg0->unk330 = arg1;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00028DA0);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00028DB8);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00028DE4);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00028F28);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00027E7C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00029198);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000291E8);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00029208);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000292AC);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00029334);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002807C);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00028170);
#endif

#if FW_VERSION >= 282
void func_00029370(M2C_UNK **arg0) {
    *arg0 = &D_00053D78;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00029380);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00029380(M2C_UNK **arg0) {
    *arg0 = &D_00053D78;
    _ZdlPv((s32) arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000293A8);

s32 func_000293D4(void) {
    return D_00056A84;
}

void func_000293E0(void) {
    func_00029428();
    func_0002948C();
}

void func_00029404(void) {
    func_0002945C();
    func_000294C0();
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00029428);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002945C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002948C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000294C0);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000294F0);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00029650);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002974C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00029830);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00029914);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053C90);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053E18);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053CA0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053D78);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053D80);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00029A00);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00029CE0);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002A044);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002A0F0);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002A130);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002A210);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053E4C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053E54);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053E5C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053E64);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053E6C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053E78);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053E84);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053E90);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053E9C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053EA8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053EB4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053EBC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053EC4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053ECC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053ED4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053F0C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053F18);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053F24);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000540B8);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000538C0);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000535C0);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000523E0);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053F30);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053F68);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053F80);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053FA0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053FC0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053FD8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053FF0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053FF4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053FF8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00053FFC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054000);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054004);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002A244);

void func_0002A348(s32 arg0) {
    func_0002A864();
    func_0002AF30(arg0);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002A374);

void func_0002A634(struct Unk_func_0002A634_0 *arg0, s32 arg1) {
    if (func_0002A6AC() != 0) {
        arg0->unkFC = arg1;
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002A66C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002A6AC);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002A864);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002A8AC);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002AB9C);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002AEE0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0002AEE0(struct Unk_func_0002AEE0_0 *arg0, struct Unk_func_0002AEE0_1 *arg1) {
    if (arg1->unk1C != 2) {

    } else {
        if (arg0->unk1FD != 0) {
            arg0->unk1FE = 0;
            arg0->unk1FD = 0U;
        } else {
            arg0->unk1FD = 1U;
            arg0->unk1FE = 1;
        }
        _ZN3paf8PhWidget13UpdateCamerasEv(arg0);
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002AF30);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002AF8C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002B0E8);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002B1D0);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002B3AC);

void func_0002B4A0(struct Unk_func_0002B4A0_0 *arg0) {
    arg0->unk38 = 0;
    func_0002E2C4(arg0);
    func_0002E0F4((s32) arg0, arg0->unk38);
    arg0->unk44 = 0;
    arg0->unk4C = 0;
    arg0->unk48 = 0;
}

void func_0002B4E0(struct Unk_func_0002B4A0_0 *arg0) {
    arg0->unk38 = 0;
    func_0002E2C4(arg0);
    func_0002E0F4((s32) arg0, arg0->unk38);
    arg0->unk44 = 0;
    arg0->unk4C = 0;
    arg0->unk48 = 0;
}

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054028);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002B520);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002BA78);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002BB1C);

s32 func_0002BBDC(struct Unk_func_0002BBDC_0 *arg0) {
    return arg0->unk50;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002BBE4);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002BCF4);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002BEF8);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002C0A8);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002C234);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002C40C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002C57C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002C600);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002C6B4);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002C804);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002C914);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002C950);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002C98C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002C9C8);

s32 func_0002CA04(struct Unk_func_0002CA04_0 *arg0) {
    if (arg0->unk50 != 1) {
        return arg0->unk3C;
    }
    return arg0->unk40;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002B830);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002CA24);
#endif

#if FW_VERSION >= 350
void func_0002CA84(s32 arg0, s32 arg1) {
    scePaf_3308156F(arg0 + 0x54, arg1, 0x21);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0002CA84(s32 arg0, s32 arg1) {
    sce_paf_private_memcpy(arg0 + 0x54, arg1, 0x21);
}
#endif

#if FW_VERSION >= 282
s32 func_0002CAA4(s32 arg0) {
    return arg0 + 0x54;
}

s32 func_0002CAAC(struct Unk_func_0002CAAC_0 *arg0) {
    return arg0->unk78;
}

s32 func_0002CAB4(struct Unk_func_0002CAB4_0 *arg0, s32 arg1) {
    arg0->unk80 = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002CAC0);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002CAFC);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002CB38);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002CBA0);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002CC6C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002CD38);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002CE30);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002CEAC);

void func_0002CF60(struct Unk_func_0002CF60_0 *arg0) {
    arg0->unk28 = 1;
}

void func_0002CF6C(struct Unk_func_0002CF6C_0 *arg0) {
    arg0->unk28 = 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002CF74);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002D040);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002D0DC);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002D1C0);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002D1FC);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002D2D8);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002D540);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002D754);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002D790);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002D80C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002D8E8);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002D964);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002DA40);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002DBB0);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002DD54);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002DDBC);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002DE80);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002DEE8);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002DFAC);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002E048);

s32 func_0002E08C(struct Unk_func_0002E08C_0 *arg0) {
    return arg0->unk1C;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002E094);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002E0F4);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002E16C);

u8 func_0002E208(struct Unk_func_0002E208_0 *arg0) {
    return arg0->unk20;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002E210);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002E26C);

void func_0002E2C4(struct Unk_func_0002B4A0_0 *arg0) {
    arg0->unk20 = 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002E2CC);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002E31C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002E360);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054258);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_0005425C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_0005427C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054294);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000542AC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000542C4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000542DC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000542F4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_0005430C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054324);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_0005433C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054354);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054368);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054380);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054398);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000543B0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000543CC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000543E4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000543F0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054400);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_0005441C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054438);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054454);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000545D4);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000545F0_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000545F0_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000545F0_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_0005460C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054634);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_0005463C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054470);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054494);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000544B0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000544D0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000544F0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000544F8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054500);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002E3A4);

s32 func_0002E4A0(struct Unk_func_0002E4A0_0 *arg0) {
    s32 var_v0;
    struct Unk_func_0002E4A0_temp_v1 *temp_v1;

    temp_v1 = arg0->unkC;
    var_v0 = 0;
    if (temp_v1 != NULL) {
        var_v0 = temp_v1->unk8;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002E4B8);

u8 func_0002E504(struct Unk_func_0002E504_0 *arg0) {
    return arg0->unk35;
}

u8 func_0002E50C(struct Unk_func_0002E50C_0 *arg0) {
    return arg0->unk37;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002E514);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002E574);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002E7B4);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002E998);

void func_0002EB2C(void) {
    func_000001F8(1);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002D94C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002EB48);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002EC88);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002ECF0);

s32 func_0002ED84(struct Unk_func_0002ED84_0 *arg0) {
    return arg0->unk38;
}

void func_0002ED8C(struct Unk_func_0002ED8C_0 *arg0) {
    s32 temp_a1;

    temp_a1 = arg0->unk38 + 1;
    func_0002E16C((s32) arg0, (temp_a1 >= 3) ? 0 : temp_a1);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002EDB4);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002EEEC);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002EF9C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002F030);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002F12C);

void func_0002F284(void) {
    func_0002DA40();
}

void func_0002F2A0(void) {
    func_0002DBB0();
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002F2BC);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002F36C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002F3C0);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002F3FC);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002F438);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002F560);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002E428);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002F5CC);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002F60C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002F640);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002F6F8);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002F74C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002F790);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002F7D4);
#endif

#if FW_VERSION >= 350
void func_0002F820(s32 arg0) {
    func_00037354(arg0, 0);
    M2C_FIELD(arg0, s8 *, 0x39) = 0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0002F820(s32 arg0) {
    func_00037354(arg0, 0);
}
#endif

#if FW_VERSION >= 282
void func_0002F83C(void) {
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002F844);

s32 func_0002F8BC(void) {
    return D_00081D7C < 1;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002F8CC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0002F8CC(struct Unk_func_0002F8CC_0 *arg0) {
    _ZN3paf4View11ForEachPageEPFbPS0_PvS2_ES2_(arg0->unk4, &func_0002F8F8, (u8 *)arg0 + 0x2C);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002F8F8);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002F954);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0002F954(struct Unk_func_0002F954_0 *arg0) {
    _ZN3paf4View11ForEachPageEPFbPS0_PvS2_ES2_(arg0->unk4, &func_0002F980, (u8 *)arg0 + 0x2C);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002F980);

void func_0002F9E4(void) {
    if ((D_00081D70 == NULL) || (D_00081D70->unk94 == 0)) {
        func_00002180();
    }
}

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054530);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002FA1C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002FC1C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002FC54);

void func_0002FD54(void) {
    s32 temp_v0;

    temp_v0 = D_00081D7C - 1;
    D_00081D7C = temp_v0;
    if (temp_v0 > 0) {

    } else {
        func_0002F60C();
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002FD8C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002FEE0);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0002FF74);
#endif

#if FW_VERSION >= 350
void func_0002FFB0(void **arg0) {
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

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0002FFB0(void **arg0) {
    void *temp_s0;
    struct Unk_func_0002FFB0_var_a0 *var_a0;
    struct Unk_func_0002FFB0_var_v0 *var_v0;

    var_a0 = *arg0;
    var_v0 = var_a0->unk4;
    if (var_v0 != var_a0) {
        do {
            temp_s0 = var_v0->unk4;
            sce_paf_private_free2(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    sce_paf_private_free2(var_a0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00030008);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00030088);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000300E4);

void func_000305D4(struct Unk_func_000305D4_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unkC = arg2;
    arg0->unk0 = &D_00054620;
    arg0->unk8 = arg1;
    arg0->unk4 = 0;
}

void func_000305F0(M2C_UNK **arg0) {
    *arg0 = &D_00054620;
    D_00081D84 = 0;
}

void func_00030608(M2C_UNK **arg0) {
    *arg0 = &D_00054620;
    D_00081D84 = 0;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00030620);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00030620(M2C_UNK **arg0) {
    *arg0 = &D_00054620;
    D_00081D84 = 0;
    _ZdlPv((s32) arg0);
}
#endif

#if FW_VERSION >= 350
void *func_0003064C(s32 arg0, s32 arg1) {
    s32 var_v0;
    struct Unk_func_000305D4_0 *temp_v0;

    var_v0 = D_00081D84;
    if (var_v0 == 0) {
        temp_v0 = scePaf_61A8E8EC(0x10);
        func_000305D4(temp_v0, arg0, arg1);
        D_00081D84 = (s32) temp_v0;
        var_v0 = (s32) temp_v0;
    }
    return (void *) var_v0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void *func_0003064C(s32 arg0, s32 arg1) {
    s32 var_v0;
    void *temp_v0;

    var_v0 = D_00081D84;
    if (var_v0 == 0) {
        temp_v0 = _Znwj(0x10);
        func_000305D4(temp_v0, arg0, arg1);
        D_00081D84 = (s32) temp_v0;
        var_v0 = (s32) temp_v0;
    }
    return (void *) var_v0;
}
#endif

#if FW_VERSION >= 282
s32 func_000306C0(void) {
    return D_00081D84;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000306CC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000545F0);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00030754);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00030874);

void func_000309C0(struct Unk_func_000309C0_0 *arg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = func_000312E8();
    temp_v0 = arg0->unkC;
    if (temp_v0 != 0) {
        if (func_0002CAC0(temp_v0) == 0) {
            func_00031154(0);
            if (func_0002DFAC(arg0->unkC) == 0) {
                func_0002CD38(arg0->unkC);
            } else {
                func_0002CBA0(arg0->unkC);
            }
            func_0002CAFC(arg0->unkC);
        }
    }
    if (temp_s1 != func_000312E8()) {

    } else {
        func_00031320();
    }
}

void func_00030A6C(struct Unk_func_00030A6C_0 *arg0) {
    s32 temp_s1;

    temp_s1 = func_000312E8();
    if (arg0->unkC != 0) {
        func_00031154(0);
        func_0002D790(arg0->unkC, 0);
    }
    if (temp_s1 != func_000312E8()) {

    } else {
        func_00031320();
    }
}

void func_00030AE4(struct Unk_func_00030AE4_0 *arg0) {
    s32 temp_s1;

    temp_s1 = func_000312E8();
    if (arg0->unkC != 0) {
        func_00031154(0);
        func_0002D8E8(arg0->unkC, 0);
    }
    if (temp_s1 != func_000312E8()) {

    } else {
        func_00031320();
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00030B5C);

void func_00030C0C(struct Unk_func_00030C0C_0 *arg0) {
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;

    temp_s1 = func_000312E8();
    temp_v0 = arg0->unkC;
    if (temp_v0 != 0) {
        if (func_0002CAC0(temp_v0) == 0) {
            func_00031154(0);
            temp_v0_2 = func_0002DFAC(arg0->unkC);
            if (temp_v0_2 != 4) {
                if (temp_v0_2 == 5) {
                    func_0002CD38(arg0->unkC);
                }
            } else {
                func_0002CBA0(arg0->unkC);
            }
            func_0002CAFC(arg0->unkC);
        }
    }
    if (temp_s1 != func_000312E8()) {

    } else {
        func_00031320();
    }
}

void func_00030CD0(struct Unk_func_00030CD0_0 *arg0) {
    s32 temp_s1;

    temp_s1 = func_000312E8();
    if (arg0->unkC != 0) {
        func_00031154(0);
        func_0002D2D8(arg0->unkC, 0);
    }
    if (temp_s1 != func_000312E8()) {

    } else {
        func_00031320();
    }
}

void func_00030D48(struct Unk_func_00030D48_0 *arg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = func_000312E8();
    temp_v0 = arg0->unkC;
    if (temp_v0 != 0) {
        if (func_0002CAC0(temp_v0) == 0) {
            func_00031154(0);
            if ((u32) (func_0002DFAC(arg0->unkC) - 2) < 2U) {
                func_0002D754(arg0->unkC);
            }
            func_0002CAFC(arg0->unkC);
        }
    }
    if (temp_s1 != func_000312E8()) {

    } else {
        func_00031320();
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00030DF4);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00030E34);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00030EE0);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00031030);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00031094);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00031108);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00031154);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000311AC);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00031268);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000312E8);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00031320);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00031354);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0003138C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000313D4);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00031474);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000314AC);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000314E8);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0003151C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00031554);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00031614);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054620);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054648);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_0005465C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_0005466C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054680);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054694);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000546A8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000546C4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000546D8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000546EC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054704);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054718);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054730);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054748);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_0005475C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054774);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_0005478C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000547A4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000547BC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000547D4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000547E4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000547FC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054810);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054828);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054840);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_0005485C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054874);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054880);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054888);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000548A4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000548AC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000548C4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000548D0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000548DC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000548F8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054904);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054924);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054930);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054954);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054964);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054980);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054990);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000549AC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000549B8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000549D4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000549DC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000549F4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000549FC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054A14);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054A20);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054A28);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054A40);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054A4C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054A58);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054A78);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054A84);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054AA4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054AAC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054AC4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054AD0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054AD8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054AF4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054B00);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054B08);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054B20);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054B2C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054B38);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054B50);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054B5C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054B64);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054B7C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054B88);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054B94);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054BB0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054BBC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054BD4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054BE4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054BF0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054C08);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00031670);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00031A1C);

s32 func_00031B18(struct Unk_func_00031B18_0 *arg0) {
    struct Unk_func_00031B18_temp_v1 *temp_v1;

    func_000001B8((s32) &func_000324B8, arg0);
    temp_v1 = arg0->unk20;
    if (temp_v1 != NULL) {
        arg0->unk30 = (s32) temp_v1->unk4D8;
    }
    arg0->unk20 = NULL;
    arg0->unk2C = 0;
    arg0->unk34 = 0;
    return 1;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00031B68);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00031ED8);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000320BC);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000320FC);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00032154);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00032318);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000323A4);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00032408);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000324B8);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000324E4);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0003250C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00032534);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00032630);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054E04);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054E08);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054E0C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000327F8);

void func_00032890(void) {
    func_000327F8(1, 0xFFFF);
}

void func_000328B0(M2C_UNK **arg0) {
    *arg0 = &D_00054E28;
    D_00081DF0 = 0;
    func_00036CC0((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000328DC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_000328DC(M2C_UNK **arg0) {
    *arg0 = &D_00054E28;
    D_00081DF0 = 0;
    func_00036CC0((s32) arg0);
    _ZdlPv((s32) arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0003291C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000329A0);

void func_00032A24(struct Unk_func_00032A24_0 *arg0) {
    arg0->unk0 = &D_00054E60;
    sceKernelDeleteSema(arg0->unk44);
    arg0->unk0 = &D_00054E90;
}

void func_00032A64(struct Unk_func_00032A64_0 *arg0) {
    arg0->unk0 = &D_00054E60;
    sceKernelDeleteSema(arg0->unk44);
    arg0->unk0 = &D_00054E90;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00032AA4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00032AA4(struct Unk_func_00032AA4_0 *arg0) {
    arg0->unk0 = &D_00054E60;
    sceKernelDeleteSema(arg0->unk44);
    arg0->unk0 = &D_00054E90;
    _ZdlPv((s32) arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00032AEC);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00032BD0);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00032C4C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00032CC0);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00032D34);

s32 func_00032D98(void) {
    D_00057211 = 1;
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00032DAC);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00032E28);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00032E9C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00032F10);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00032F84);

void func_00032FF8(M2C_UNK **arg0) {
    *arg0 = &D_00054E90;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00033008);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00033008(M2C_UNK **arg0) {
    *arg0 = &D_00054E90;
    _ZdlPv((s32) arg0);
}
#endif

#if FW_VERSION >= 282
s32 func_00033030(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00033038);

s32 func_00033048(void) {
    return 0;
}

s32 func_00033050(void) {
    return 0;
}

s32 func_00033058(void) {
    return 0;
}

s32 func_00033060(void) {
    return 0;
}

s32 func_00033068(void) {
    return 0;
}

s32 func_00033070(void) {
    return 0x1E;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00033078);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000331B0);

void func_00033278(M2C_UNK **arg0) {
    *arg0 = &D_000551F8;
    D_00081E84 = 0;
    func_00036CC0((s32) arg0);
}

void func_000332A4(M2C_UNK **arg0) {
    *arg0 = &D_000551F8;
    D_00081E84 = 0;
    func_00036CC0((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000332D0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_000332D0(M2C_UNK **arg0) {
    *arg0 = &D_000551F8;
    D_00081E84 = 0;
    func_00036CC0((s32) arg0);
    _ZdlPv((s32) arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00033310);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054E28);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054E48);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054E60);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054E90);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054EB8);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00033374);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00033D7C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00033F64);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00034204);

void func_00034258(struct Unk_func_00034258_0 *arg0) {
    arg0->unk94 = 0;
    func_000377F4((s32) arg0, 0);
    func_0003737C((s32) arg0, 0, 0);
    func_000342D8((s32) arg0);
}

void func_0003429C(struct Unk_func_0003429C_0 *arg0) {
    M2C_FIELD(arg0, s8 *, 0x94) = 0;
    func_000377F4((s32) arg0, 0);
    func_00037568((s32) arg0);
    func_000342D8((s32) arg0);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000342D8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054F20);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054F38);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054F44);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054F50);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054F5C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054F70);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054F8C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054FA8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054FC4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054FD4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00054FE8);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000551C4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00055004);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00055014);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_0005502C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_0005503C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00055048);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00055054);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_0005506C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00055084);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_0005509C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000550B8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000550D4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000550E8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000550EC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000550F0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00055104);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00034438);

void func_00034888(struct Unk_func_00034888_0 *arg0) {
    arg0->unk94 = (u8) arg0->unk10;
    func_000377F4((s32) arg0, 1);
    func_0003737C((s32) arg0, 0, 0);
}

void func_000348C8(struct Unk_func_000348C8_0 *arg0) {
    arg0->unk94 = (u8) arg0->unk96;
    func_000377F4((s32) arg0, 1);
    func_00037568((s32) arg0);
}

void func_00034900(struct Unk_func_0003429C_0 *arg0) {
    if (arg0->unk94 != 0) {
        func_0003429C(arg0);
    } else {
        func_000375CC((s32) arg0);
    }
}

void func_00034938(void) {
}

void func_00034940(struct Unk_func_00034940_0 *arg0) {
    arg0->unk96 = 1;
    func_00035988();
}

void func_00034964(struct Unk_func_00034964_0 *arg0) {
    arg0->unk96 = 0;
    func_000377F4((s32) arg0, 0);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00034984);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00034A70);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00034B6C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00034D14);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00055124);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_0005512C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00055134);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00055140);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00055150);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00034D78);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00034E8C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00034FE8);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00035028);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000350EC);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000352AC);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000354F0);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00035614);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00035758);

void func_00035898(s32 arg0) {
    func_00033D7C();
    func_00035ECC(arg0);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000358C4);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00035988);

void func_00035B1C(s32 arg0) {
    func_00033D7C();
    func_00035FA0(arg0);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00035B48);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00035D24);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00035E40);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00035ECC);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00035FA0);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00036098);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0003620C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0003624C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00036288);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000362C4);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000362FC);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00036344);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000363C0);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00036414);

void func_00036468(void) {
    func_000364A0();
}

void func_00036484(void) {
    func_000364A0();
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000364A0);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00036564);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000365B8);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0003660C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00036654);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0003669C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000366E4);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0003672C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00036774);

void func_000367A0(s32 arg0) {
    D_00081E50 = func_00033310(arg0);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000367C4);

void func_00036808(void) {
    if (D_00081E50 != 0) {
        if (D_00081E50->unk10 != 0) {
            func_000348C8((void *) D_00081E50);
        } else {
            func_00034888((void *) D_00081E50);
        }
    }
}

void func_00036850(void) {
    if (D_00081E50 != 0) {
        if (D_00081E50->unk10 != 0) {
            func_0003429C((void *) D_00081E50);
        } else {
            func_00034258((void *) D_00081E50);
        }
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00036898);

void func_000368CC(void) {
    if ((D_00081E50 != 0) && (D_00081E50->unk10 != 0)) {
        func_0003429C((void *) D_00081E50);
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00036908);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0003693C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00036970);

void func_00036AD0(void) {
    func_00036970(1, 0xFFFF);
}

void func_00036AF0(void) {
    func_00036970(0, 0xFFFF);
}

void func_00036B10(M2C_UNK **arg0) {
    *arg0 = &D_00055220;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00036B20);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00036B20(M2C_UNK **arg0) {
    *arg0 = &D_00055220;
    _ZdlPv((s32) arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00036B48);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00036CC0);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00036D94);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00036E68);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00036F4C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00037040);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000370B8);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00037180);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0003728C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00037354);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0003737C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000373F4);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000374AC);

void func_0003751C(s32 arg0) {
    s32 temp_v0;

    if (func_00037660() != 0) {

    } else {
        temp_v0 = func_00037730(arg0);
        if (temp_v0 != 0) {
            func_000374AC(temp_v0);
        }
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00037568);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000375CC);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00037660);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00037730);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000377F4);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00037900);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00037974);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00037A60);

void func_00037AA0(struct Unk_func_00037AA0_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00037AB0);

void func_00037B70(void) {
}

s32 func_00037B78(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00037B80);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00037C64);

void func_00037D48(void) {
    D_00081EA0 = 0;
}

void func_00037D54(void) {
    D_00081EA0 = 0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00037D60);
#endif

#if FW_VERSION >= 350
s32 func_00037D60(s32 arg0, s32 arg1, s32 arg2) {
    scePaf_7620CFFD(arg1, arg0 + 0x48, arg2 - 1);
    M2C_FIELD((arg1 + arg2), s8 *, -1) = 0;
    return 0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00037DAC);
#endif

#if FW_VERSION >= 350
s32 func_00037DAC(s32 arg0, s32 arg1, s32 arg2) {
    scePaf_7620CFFD(arg1, arg0 + 0x4C, arg2 - 1);
    M2C_FIELD((arg1 + arg2), s8 *, -1) = 0;
    return 0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00037DF8);
#endif

#if FW_VERSION >= 350
s32 func_00037DF8(s32 arg0, s32 arg1, s32 arg2) {
    scePaf_7620CFFD(arg1, arg0 + 0x50, arg2 - 1);
    M2C_FIELD((arg1 + arg2), s8 *, -1) = 0;
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 func_00037E44(s32 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        var_v1 = func_0002C804(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00037E7C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00037F3C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00037FC0);

s32 func_00038004(s32 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        var_v1 = func_0002C57C(temp_v0, arg1 & 0xFF);
    }
    return var_v1;
}

s32 func_00038040(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        var_v1 = func_0002BEF8(temp_v0, arg1, arg2 & 0xFF);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0003807C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000380BC);

s32 func_00038138(s32 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        var_v1 = func_0002C6B4(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00038170);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_000551F8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00055220);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00055230);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00055250);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0003824C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00038458);
#endif

#if FW_VERSION >= 350
s32 func_00038524(void) {
    _ZN8PSJSExec16FinalizeExecSyncEv(scePaf_88784487(&D_00055298) + 0xF8);
    return 0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 func_00038524(void) {
    _ZN8PSJSExec16FinalizeExecSyncEv(_ZN3paf4View4FindEPKc(&D_00055298) + 0xF8);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00038554);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000385F4);

void func_00038630(void) {
    func_0002FD8C();
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0003864C);

void func_000386C8(void) {
}

INCLUDE_RODATA("nonmatchings/video_main_plugin_0286EC", D_00055298);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000386D0);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_0003893C);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_000389C8);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00038A10);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00038A84);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00038C00);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00038C68);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00038CD0);

INCLUDE_ASM("nonmatchings/video_main_plugin_0286EC", func_00038D38);

s32 func_00038D88(struct Unk_func_00038D88_0 *arg0, s32 *arg1) {
    struct Unk_func_00038D88_temp_v1 *temp_v1;

    temp_v1 = arg0->unk98;
    *arg1 = temp_v1->unk1954;
    return temp_v1->unk1950;
}
#endif
