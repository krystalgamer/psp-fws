/* lang: c++ */
#include "common.h"
#include "video_main_plugin_decls.h"

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00021A6C);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00021A7C);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00021AE4);

void func_00021B3C(struct Unk_func_00021B3C_0 *arg0, s32 arg1) {
    arg0->unk0 = (s32) (func_00027E10(arg1) & 1);
    arg0->unk4 = func_00027E28(arg1 + 2);
}

#if FW_VERSION == 271
void func_00036AEC(s32 *arg0, void *arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg1, u8 *, 0) << 8;
    *arg0 = temp_v0;
    *arg0 = temp_v0 | M2C_FIELD(arg1, u8 *, 1);
}
#endif

void func_00021B88(void) {
}

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00021B90);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00021BF8);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00021C60);

void func_00021C80(void) {
}

void func_00021C88(void) {
}

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00021C90);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00021CD4);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00021CF8);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00021D9C);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00021DA4);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00021DD4);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00021F54);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00021FC4);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00022078);
#else
void func_00022078(s32 arg0) {
    s32 temp_a1;
    s32 var_a1;
    s32 var_s0;
    struct Unk_func_00022078_temp_s1 *temp_s1;

    temp_s1 = arg0 + 0x10C;
    var_s0 = temp_s1->unk4 - 1;
    if (var_s0 >= 0) {
        var_a1 = var_s0;
        do {
            _ZdlPv(func_00022F14(temp_s1, var_a1));
            temp_a1 = var_s0;
            var_s0 -= 1;
            func_00022F64(temp_s1, temp_a1);
            var_a1 = var_s0;
        } while (var_s0 >= 0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000220DC);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053B6C);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053B74_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053B74_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053B74_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_000534C8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_000534D8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_000534E8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_000534F8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053508);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053518);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053BE8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053558);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053580);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_000535A0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053668);
#endif

void func_00022220(s32 arg0) {
    func_000230B8(arg0 + 0x10C);
    func_000230E0(arg0 + 0x118);
    func_00023108(arg0 + 0x124);
    func_00026BA8(arg0 + 4);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00022264);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000223C4);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00022444);

void func_000224C4(s32 arg0) {
    func_00026D9C(arg0 + 4);
    func_000223C4(arg0);
    func_00022444(arg0);
    func_00022078(arg0);
}

void func_00022504(s32 arg0) {
    func_000224C4(arg0);
    func_00023120(arg0 + 0x124);
    func_000230F8(arg0 + 0x118);
    func_000230D0(arg0 + 0x10C);
}

void func_00022544(s32 arg0) {
    func_000224C4(arg0);
    func_00023120(arg0 + 0x124);
    func_000230F8(arg0 + 0x118);
    func_000230D0(arg0 + 0x10C);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00022584);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00022638);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000226C4);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_0002272C);

#if FW_VERSION >= 350
s32 func_00022794(s32 arg0, s32 *arg1) {
    *arg1 = scePaf_746499C1(arg0 + 0x4C);
    return 0;
}
#else
s32 func_00022794(s32 arg0, s32 *arg1) {
    *arg1 = sce_paf_private_atoi(arg0 + 0x4C);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000227C4);

void func_000227E4(void) {
}

void func_000227EC(void) {
}

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000227F4);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00022904);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00022930);

#if FW_VERSION >= 350
void func_00022A04(s32 arg0) {
    s32 temp_a1;
    s32 var_a1;
    s32 var_s1;
    void **temp_v0;
    void *temp_s2;

    temp_s2 = arg0 + 0x20;
    var_s1 = M2C_FIELD(temp_s2, s32 *, 4) - 1;
    if (var_s1 >= 0) {
        var_a1 = var_s1;
        do {
            temp_v0 = func_00020BF8(temp_s2, var_a1);
            if (temp_v0 != NULL) {
                func_00027E70(M2C_FIELD(*temp_v0, s32 *, 4));
                scePaf_6261C0A5(*temp_v0);
                scePaf_6261C0A5(temp_v0);
            }
            temp_a1 = var_s1;
            var_s1 -= 1;
            func_000235A4(temp_s2, temp_a1);
            var_a1 = var_s1;
        } while (var_s1 >= 0);
    }
}
#else
void func_00022A04(s32 arg0) {
    s32 temp_a1;
    s32 var_a1;
    s32 var_s1;
    struct Unk_vt_func_00022A04_temp_v0 **temp_v0;
    struct Unk_func_00022A04_temp_s2 *temp_s2;

    temp_s2 = arg0 + 0x20;
    var_s1 = temp_s2->unk4 - 1;
    if (var_s1 >= 0) {
        var_a1 = var_s1;
        do {
            temp_v0 = func_00020BF8(temp_s2, var_a1);
            if (temp_v0 != NULL) {
                func_00027E70((*temp_v0)->unk4);
                _ZdlPv((s32) *temp_v0);
                _ZdlPv((s32) temp_v0);
            }
            temp_a1 = var_s1;
            var_s1 -= 1;
            func_000235A4(temp_s2, temp_a1);
            var_a1 = var_s1;
        } while (var_s1 >= 0);
    }
}
#endif

void func_00022A8C(s32 arg0) {
    func_00022AEC();
    func_00023674(arg0 + 0x20);
}

void func_00022ABC(s32 arg0) {
    func_00022AEC();
    func_00023674(arg0 + 0x20);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00022AEC);

s32 func_00022B48(struct Unk_func_00022B48_0 *arg0, u32 arg1) {
    arg0->unk18 = (u32) (arg1 >> 0xB);
    return 0;
}

void func_00022B58(struct Unk_func_00022B58_0 *arg0) {
    func_00023684((u8 *)arg0 + 0x20);
    arg0->unk1C = 0;
}

void func_00022B84(struct Unk_func_00022B84_0 *arg0) {
    func_00023684((u8 *)arg0 + 0x20);
    arg0->unk1C = 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00022BB0);

void func_00022DB0(M2C_UNK **arg0) {
    *arg0 = &D_00053518;
}

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053218);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053220);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053258);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053280);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00022DC0);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00022E90);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000224D0);
#else
INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00022F14);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00022F64);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00023034);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000230B8);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000230D0);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000230E0);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000230F8);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00023108);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00023120);

void func_00023130(struct Unk_func_00023130_0 *arg0) {
    arg0->unk0 = &D_00053518;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00023148);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00022744);
#else
INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000231CC);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_0002321C);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000232EC);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000233BC);

void func_00023440(M2C_UNK **arg0) {
    *arg0 = &D_000534D8;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00023450);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00023520);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000235A4);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00023674);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00023684);

void func_0002369C(struct Unk_func_0002369C_0 *arg0) {
    arg0->unk0 = &D_000534D8;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000236B4);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00023738);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00023780);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000237C8);
#else
void func_000237C8(M2C_UNK **arg0) {
    *arg0 = &D_00053518;
    _ZdlPv((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000237F0);
#else
void func_000237F0(M2C_UNK **arg0) {
    *arg0 = &D_00053508;
    _ZdlPv((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00023818);
#else
void func_00023818(M2C_UNK **arg0) {
    *arg0 = &D_000534F8;
    _ZdlPv((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00023840);
#else
void func_00023840(M2C_UNK **arg0) {
    *arg0 = &D_000534E8;
    _ZdlPv((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00023868);
#else
void func_00023868(M2C_UNK **arg0) {
    *arg0 = &D_000534D8;
    _ZdlPv((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00023890);
#else
void func_00023890(M2C_UNK **arg0) {
    *arg0 = &D_000534C8;
    _ZdlPv((s32) arg0);
}

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_000534C8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_000534D8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_000534E8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_000534F8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053508);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053518);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000238B8);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00023A3C);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00023AD0);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00023B64);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00023BC8);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00023C98);

s32 func_00023D84(struct Unk_func_00023D84_0 *arg0, struct Unk_func_00023D84_1 *arg1) {
    s32 temp_a0;
    s32 temp_s2;
    s32 temp_v1;
    s32 var_s3;
    struct Unk_func_00023D84_temp_v0 *temp_v0;

    temp_s2 = (u8 *)arg0 + 0x1C;
    var_s3 = 0;
    func_000250D0(temp_s2);
    temp_v1 = arg0->unk4;
    temp_a0 = temp_v1 - 1;
    if ((temp_a0 != arg0->unk14) && ((temp_v1 != 0) || (arg0->unk18 != 1))) {
        arg0->unk4 = temp_a0;
        var_s3 = 1;
        if (temp_a0 < 0) {
            arg0->unk4 = (s32) (arg0->unk18 - 1);
        }
        temp_v0 = (arg0->unk4 * 0x10) + arg0->unk10;
        temp_v0->unk0 = (s32) arg1->unk0;
        temp_v0->unk4 = (s32) arg1->unk4;
        temp_v0->unk8 = (s32) arg1->unk8;
        temp_v0->unkC = (s32) arg1->unkC;
        func_000254D4(arg0->unkC, 1);
    }
    func_000250EC(temp_s2);
    func_0002658C(1);
    return var_s3;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00023E64);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00023F30);

#if FW_VERSION < 350
void func_00023F6C(void) {
}
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00023F74);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00023FD4);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00024034);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00024074);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000240B4);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000240FC);

void func_0002417C(void) {
}

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00024184);

void func_0002420C(void) {
}

void func_00024214(s32 arg0, M2C_UNK arg1, s32 arg2) {
    func_0002493C(arg1, arg0, arg2 & 0xFFFF);
}

void func_0002423C(s32 arg0, M2C_UNK arg1) {
    func_00024998(arg1, arg0);
}

void func_00024260(M2C_UNK **arg0) {
    *arg0 = &D_000535A0;
}

void func_00024270(M2C_UNK **arg0) {
    *arg0 = &D_000535A0;
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00024280);
#else
void func_00024280(M2C_UNK **arg0) {
    *arg0 = &D_000535A0;
    _ZdlPv((s32) arg0);
}
#endif

void func_000242A8(struct Unk_func_000242A8_0 *arg0) {
    arg0->unk0 = &D_00053668;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

void func_000242C0(struct Unk_func_000242C0_0 *arg0) {
    arg0->unk0 = &D_00053668;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000242D8);
#else
void func_000242D8(struct Unk_func_000242D8_0 *arg0) {
    void *temp_s0;
    struct Unk_func_000242D8_var_v0 *var_v0;

    arg0->unk0 = &D_00053668;
    if (arg0->unk4 != 0) {
        var_v0 = arg0->unk8;
        if (var_v0 != NULL) {
            do {
                temp_s0 = var_v0->unk8;
                if (var_v0 != NULL) {
                    _ZdlPv((s32) var_v0);
                }
                var_v0 = temp_s0;
            } while (temp_s0 != NULL);
        }
    }
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00024330);
#else
void func_00024330(struct Unk_func_00024330_0 *arg0) {
    void *temp_s0;
    struct Unk_func_00024330_var_v0 *var_v0;

    arg0->unk0 = &D_00053668;
    if (arg0->unk4 != 0) {
        var_v0 = arg0->unk8;
        if (var_v0 != NULL) {
            do {
                temp_s0 = var_v0->unk8;
                if (var_v0 != NULL) {
                    _ZdlPv((s32) var_v0);
                }
                var_v0 = temp_s0;
            } while (temp_s0 != NULL);
        }
    }
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00024388);
#else
void func_00024388(struct Unk_func_00024388_0 *arg0) {
    void *temp_s0;
    struct Unk_func_00024388_var_v0 *var_v0;

    arg0->unk0 = &D_00053668;
    if (arg0->unk4 != 0) {
        var_v0 = arg0->unk8;
        if (var_v0 != NULL) {
            do {
                temp_s0 = var_v0->unk8;
                if (var_v0 != NULL) {
                    _ZdlPv((s32) var_v0);
                }
                var_v0 = temp_s0;
            } while (temp_s0 != NULL);
        }
    }
    _ZdlPv((s32) arg0);
}
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000243F4);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00024484);

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053548);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053558);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053560);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053580);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_000535A0);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000244CC);

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_000535D8);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000245E4);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000247F0);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_0002489C);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_0002493C);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00024998);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00024A54);

void func_00024A80(void) {
}

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053668);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00024A88);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00024B64);

s32 func_00024C1C(struct Unk_func_00024C1C_0 *arg0) {
    func_000265F0(arg0->unk8);
    return 1;
}

s32 func_00024C3C(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00024C44);

void func_00024C64(struct Unk_func_00024C64_0 *arg0) {
    arg0->unk0 = &D_000536F0;
    func_00025130((s32) ((u8 *)arg0 + 0xC));
    arg0->unk8 = 0;
}

void func_00024C9C(struct Unk_func_00024C9C_0 *arg0) {
    arg0->unk0 = &D_000536F0;
    func_00025130((s32) ((u8 *)arg0 + 0xC));
    arg0->unk8 = 0;
}

void func_00024CD4(struct Unk_func_00024CD4_0 *arg0) {
    arg0->unk0 = &D_000536F0;
    func_00025180((s32) ((u8 *)arg0 + 0xC));
    arg0->unk8 = 0;
}

void func_00024D0C(struct Unk_func_00024D0C_0 *arg0) {
    arg0->unk0 = &D_000536F0;
    func_00025180((s32) ((u8 *)arg0 + 0xC));
    arg0->unk8 = 0;
}

void func_00024D44(struct Unk_func_00024D44_0 *arg0) {
    arg0->unk0 = &D_000536F0;
    if (arg0->unk8 != 0) {
        func_00024B64((s32) arg0);
    }
    func_000251D0((s32) ((u8 *)arg0 + 0xC));
}

void func_00024D90(struct Unk_func_00024D90_0 *arg0) {
    arg0->unk0 = &D_000536F0;
    if (arg0->unk8 != 0) {
        func_00024B64((s32) arg0);
    }
    func_000251D0((s32) ((u8 *)arg0 + 0xC));
}

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00024DDC);

void func_00024E54(struct Unk_func_00024E54_0 *arg0) {
    arg0->unk0 = &D_00053708;
    func_00025418((s32) (&arg0->unk4));
    func_000254D4(arg0->unk4, 0);
}

void func_00024E94(struct Unk_func_00024E94_0 *arg0) {
    arg0->unk0 = &D_00053708;
    func_00025418((s32) (&arg0->unk4));
    func_000254D4(arg0->unk4, 0);
}

void func_00024ED4(struct Unk_func_00024ED4_0 *arg0, s32 arg1) {
    arg0->unk0 = &D_00053708;
    func_00025464(&arg0->unk4, arg1);
    func_000254D4(arg0->unk4, 0);
}

void func_00024F14(struct Unk_func_00024F14_0 *arg0, s32 arg1) {
    arg0->unk0 = &D_00053708;
    func_00025464(&arg0->unk4, arg1);
    func_000254D4(arg0->unk4, 0);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00024F54);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00024F7C);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00024FA4);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00024FE0);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00025020);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00025068);

s32 func_00025088(struct Unk_func_00025088_0 *arg0, M2C_UNK arg1) {
    return func_000254FC(arg0->unk4, ~arg1) == 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000250AC);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000250D0);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000250EC);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00025108);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00025130);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00025158);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00025180);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000251A8);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000251D0);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000251F8);

void func_00025234(void) {
}

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_000536F0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053708);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053718);

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_0002523C);

void func_000252A4(s32 arg0) {
    sce_paf_private_printf("%s\n", arg0);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000252C8);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_0002534C);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00025418);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00051D68);
#endif

s32 func_00025464(s32 *arg0, M2C_UNK arg1) {
    s32 temp_v0;

    temp_v0 = sceKernelCreateEventFlag(arg1, 0x200, 0, 0);
    *arg0 = temp_v0;
    return (temp_v0 >= 0) ? 0 : -5;
}

s32 func_000254AC(void) {
    return (sceKernelDeleteEventFlag() == 0) ? 0 : -5;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000254D4);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000254FC);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00025524);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00025570);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000255E8);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00025630);

#if FW_VERSION < 350
void func_000256DC(void) {
}

void func_000256E4(void) {
}

s32 func_000256EC(void) {
    return -9;
}

s32 func_000256F4(void) {
    return -9;
}

void func_000256FC(void) {
}
#endif

#if FW_VERSION >= 300
s32 func_00024770(s32 arg0, s32 *arg1) {
    s32 temp_v0;

    temp_v0 = sceKernelCreateSema(&D_00051D68, 0U, arg0, arg0, NULL);
    *arg1 = temp_v0;
    return (temp_v0 >= 0) ? 0 : -5;
}

s32 func_000247C0(s32 arg0, s32 arg1, s32 *arg2) {
    s32 temp_v0;

    temp_v0 = sceKernelCreateSema(&D_00051D68, 0U, arg0, arg1, NULL);
    *arg2 = temp_v0;
    return (temp_v0 >= 0) ? 0 : -5;
}

s32 func_00025910(s32 arg0) {
    return (sceKernelDeleteSema(arg0) == 0) ? 0 : -5;
}

s32 func_000259A8(s32 arg0) {
    return (sceKernelWaitSema(arg0, 1, NULL) == 0) ? 0 : -5;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00024868);

s32 func_000248B0(s32 arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceKernelPollSema(arg0, 1);
    var_v1 = -0x32;
    if (temp_v0 != 0x800201AD) {
        var_v1 = (temp_v0 == 0) ? 0 : -5;
    }
    return var_v1;
}

s32 func_00025B48(s32 arg0) {
    return (sceKernelSignalSema(arg0, 1) == 0) ? 0 : -5;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00024914);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00025704);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00024B94);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000249EC);
#endif

#if FW_VERSION >= 311
INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00024B24);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00052F88);
#endif

#if FW_VERSION == 310
INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00024B24);
#endif

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00051DA8_v303);
#endif

#if FW_VERSION == 302
INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00051DA8_v302);
#endif

#if FW_VERSION == 301
INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00051DA8_v301);
#endif

#if FW_VERSION == 300
INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00051DA8_v300);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00024A50);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00026160);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00051E08);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000261F8);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000262C0);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00026348);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000263AC);
#endif

#if FW_VERSION >= 350
s32 func_00024F44(void) {
    sceKernelDelayThread(1U);
    return 0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00024EEC);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_0002658C);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000265B8);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000265F0);
#else
INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00025794);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00025854);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00025910);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000259A8);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00025B48);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00025C6C);

void func_00025CE8(void) {
    func_00025C6C(1, 0xFFFF);
}

void func_00025D08(void) {
    func_00025C6C(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00025D28);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00025D78);

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_0005384C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053874);
#endif

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00025DFC);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00025ECC);

void func_00025F14(struct Unk_func_00025F14_0 *arg0) {
    arg0->unk0 = &D_000538B8;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

void func_00025F2C(M2C_UNK **arg0) {
    *arg0 = &D_000538B8;
}

void func_00025F3C(M2C_UNK **arg0) {
    *arg0 = &D_000538B8;
    _ZdlPv((s32) arg0);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00025F64);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_000538B8);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00025FF4);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00026058);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_000538F4);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00026160);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053954);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000261F8);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000262C0);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00026348);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000263AC);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000264F4);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_0002658C);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000265B8);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000265F0);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000266F4);

void func_00026770(void) {
    func_000266F4(1, 0xFFFF);
}

void func_00026790(void) {
    func_000266F4(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000267B0);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00026800);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053AE4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053B0C);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00026884);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00026954);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00025F14);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00025F2C);
#else
void func_0002699C(struct Unk_func_0002699C_0 *arg0) {
    arg0->unk0 = &D_00053B58;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

void func_000269B4(M2C_UNK **arg0) {
    *arg0 = &D_00053B58;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000269C4);
#else
void func_000269C4(M2C_UNK **arg0) {
    *arg0 = &D_00053B58;
    _ZdlPv((s32) arg0);
}
#endif

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053B58);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000269EC);

s32 func_00026A64(s32 *arg0) {
    s32 var_s1;

    var_s1 = 0;
    if (arg0 != NULL) {
        var_s1 = ~func_000286D0(*arg0) == 0;
        func_00027E70((s32) arg0);
    }
    return var_s1;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00026AB0);

#if FW_VERSION >= 350
void func_00026ACC(s32 *arg0) {
    scePaf_62231A8B(*arg0);
}
#else
void func_00026ACC(s32 *arg0) {
    sce_paf_private_fseek(*arg0);
}
#endif

#if FW_VERSION >= 350
void func_00026AE8(s32 *arg0) {
    scePaf_DA0209EF(*arg0);
}
#else
void func_00026AE8(s32 *arg0) {
    sce_paf_private_ftell(*arg0);
}
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00026B04);

void func_00026B40(struct Unk_func_00026B40_0 *arg0, s32 arg1) {
    arg0->unk0 = (s32) (func_00027E10(arg1) & 1);
    arg0->unk4 = func_00027E28(arg1 + 2);
}

void func_00026B8C(s32 *arg0, struct Unk_func_00026B8C_1 *arg1) {
    s32 temp_v0;

    temp_v0 = arg1->unk0 << 8;
    *arg0 = temp_v0;
    *arg0 = temp_v0 | arg1->unk1;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00026BA8);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00026BDC);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00026D9C);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00026DDC);
#else
s32 func_00026DDC(s32 *arg0, struct Unk_func_00026DDC_1 *arg1) {
    s32 temp_s0;
    struct Unk_func_00026DDC_temp_s2 *temp_s2;

    temp_s0 = *arg0;
    temp_s2 = temp_s0 + 0x28;
    sce_paf_private_strncpy(arg1, temp_s0 + 4, 4U);
    arg1->unk4 = (u8) temp_s2->unk7;
    sce_paf_private_strncpy((u8 *)arg1 + 5, temp_s0 + 0x31, temp_s2->unk8);
    M2C_FIELD(((u8 *)arg1 + temp_s2->unk8), s8 *, 5) = 0;
    return 0;
}
#endif

#if FW_VERSION >= 350
s32 func_00026E50(s32 *arg0, struct Unk_func_00026E50_1 *arg1) {
    scePaf_3308156F(arg1, *arg0 + 4, 4);
    arg1->unk4 = 0;
    return 0;
}
#else
s32 func_00026E50(s32 *arg0, struct Unk_func_00026E50_1 *arg1) {
    sce_paf_private_memcpy(arg1, *arg0 + 4, 4);
    arg1->unk4 = 0;
    return 0;
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_0002595C);
#endif

s32 func_00026E90(struct Unk_func_00026E90_0 *arg0, s32 *arg1) {
    *arg1 = arg0->unk4;
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00026EA0);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00026F50);

s32 func_00027004(s32 *arg0) {
    s32 temp_s0;

    temp_s0 = *arg0;
    return func_00027E10(temp_s0 + 4) + temp_s0;
}

s32 func_00027030(s32 *arg0) {
    s32 temp_s0;

    temp_s0 = *arg0;
    return func_00027E10(temp_s0 + 6) + temp_s0;
}

s32 func_0002705C(s32 *arg0, s32 *arg1) {
    *arg1 = func_00027E10(func_00027004(arg0) + 6);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00027094);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00027164);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000271B0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053B74);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053B84);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053B94);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000271F0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_021A6C", D_00053BA4);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000272E0);

#if FW_VERSION >= 350
s32 func_00027480(s32 *arg0, struct Unk_func_00027480_1 *arg1) {
    scePaf_3308156F((struct Unk_func_00026E50_1 *) arg1, *arg0 + 4, 4);
    arg1->unk4 = 0;
    return 0;
}
#else
s32 func_00027480(s32 *arg0, struct Unk_func_00027480_1 *arg1) {
    sce_paf_private_memcpy(arg1, *arg0 + 4, 4);
    arg1->unk4 = 0;
    return 0;
}
#endif

s32 func_000274C0(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        func_00027E70(temp_v0);
        *arg0 = 0;
    }
    return 0;
}

#if FW_VERSION >= 350
s32 func_00027500(void **arg0, struct Unk_func_00027500_1 *arg1) {
    void *temp_s0;

    temp_s0 = *arg0;
    scePaf_3308156F((struct Unk_func_00026E50_1 *) arg1, (s32) (temp_s0 + 4), 4);
    arg1->unk4 = (s32) M2C_FIELD(temp_s0, u8 *, 0x2E);
    return 0;
}
#else
s32 func_00027500(void **arg0, struct Unk_func_00027500_1 *arg1) {
    struct Unk_func_00027500_temp_s0 *temp_s0;

    temp_s0 = *arg0;
    sce_paf_private_memcpy(arg1, (u8 *)temp_s0 + 4, 4);
    arg1->unk4 = (s32) temp_s0->unk2E;
    return 0;
}
#endif

s32 func_00027548(s32 *arg0, struct Unk_func_00027548_1 *arg1) {
    s32 temp_s0;
    struct Unk_func_00027548_temp_s0_2 *temp_s0_2;

    temp_s0 = *arg0;
    temp_s0_2 = temp_s0 + func_00027E28(temp_s0 + 8);
    arg1->unk0 = temp_s0_2;
    arg1->unk4 = (s32) temp_s0_2->unk11;
    return 0;
}

s32 func_00027590(s32 *arg0, void *arg1) {
    s32 temp_s1;

    temp_s1 = *arg0;
    func_00026B40(arg1, temp_s1 + 4);
    func_00026B40(arg1 + 8, temp_s1 + 0xA);
    return 0;
}

s32 func_000275E0(struct Unk_func_000275E0_0 *arg0, s32 *arg1) {
    *arg1 = arg0->unk4;
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000275F0);

s32 func_000276A4(struct Unk_func_000276A4_0 *arg0, struct Unk_func_000276A4_1 *arg1) {
    struct Unk_func_000276A4_temp_a2 *temp_a2;

    temp_a2 = arg0->unk8;
    arg1->unk0 = (s8) ((u8) temp_a2->unk0 >> 4);
    arg1->unk1 = (s8) (temp_a2->unk0 & 0xF);
    arg1->unk2 = (s8) ((u8) temp_a2->unk1 >> 4);
    arg1->unk3 = (s8) (temp_a2->unk1 & 1);
    return 0;
}

#if FW_VERSION >= 350
s32 func_000276E0(struct Unk_func_000276E0_0 *arg0, struct Unk_func_000276E0_1 *arg1) {
    struct Unk_func_000276E0_temp_s0 *temp_s0;

    temp_s0 = arg0->unk8;
    arg1->unk0 = (s8) ((u8) temp_s0->unk0 >> 4);
    scePaf_3308156F((struct Unk_func_00026E50_1 *) arg1->pad1, (s32) &temp_s0->pad1[1], 2);
    arg1->unk3 = temp_s0->unk4;
    arg1->unk4 = (s8) ((u8) temp_s0->unk5 >> 4);
    arg1->unk5 = temp_s0->unk5 & 0xF;
    return 0;
}
#else
s32 func_000276E0(struct Unk_func_000276E0_0 *arg0, struct Unk_func_000276E0_1 *arg1) {
    struct Unk_func_000276E0_temp_s0 *temp_s0;

    temp_s0 = arg0->unk8;
    arg1->unk0 = (s8) ((u8) temp_s0->unk0 >> 4);
    sce_paf_private_memcpy((u8 *)arg1 + 1, (s32) ((u8 *)temp_s0 + 2), 2);
    arg1->unk3 = (u8) temp_s0->unk4;
    arg1->unk4 = (s8) ((u8) temp_s0->unk5 >> 4);
    arg1->unk5 = (s8) (temp_s0->unk5 & 0xF);
    return 0;
}
#endif

#if FW_VERSION >= 350
s32 func_0002774C(struct Unk_func_0002774C_0 *arg0, struct Unk_func_0002774C_1 *arg1) {
    struct Unk_func_0002774C_temp_s0 *temp_s0;

    temp_s0 = arg0->unk8;
    arg1->unk0 = (s8) ((u8) temp_s0->unk0 >> 4);
    scePaf_3308156F((struct Unk_func_00026E50_1 *) arg1->pad1, (s32) &temp_s0->pad1[1], 2);
    arg1->unk3 = (s8) ((u8) temp_s0->unk5 >> 4);
    arg1->unk4 = temp_s0->unk5 & 1;
    return 0;
}
#else
s32 func_0002774C(struct Unk_func_0002774C_0 *arg0, struct Unk_func_0002774C_1 *arg1) {
    struct Unk_func_0002774C_temp_s0 *temp_s0;

    temp_s0 = arg0->unk8;
    arg1->unk0 = (s8) ((u8) temp_s0->unk0 >> 4);
    sce_paf_private_memcpy((u8 *)arg1 + 1, (s32) ((u8 *)temp_s0 + 2), 2);
    arg1->unk3 = (s8) ((u8) temp_s0->unk5 >> 4);
    arg1->unk4 = (s8) (temp_s0->unk5 & 1);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000277B0);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_000278B8);

INCLUDE_ASM("nonmatchings/video_main_plugin_021A6C", func_00027944);
