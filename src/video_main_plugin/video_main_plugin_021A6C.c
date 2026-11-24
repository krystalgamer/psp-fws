#include "common.h"
#include "video_main_plugin_decls.h"

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00021A6C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00021A7C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00021AE4);

void func_00021B3C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (func_00027E10(arg1) & 1);
    M2C_FIELD(arg0, s32 *, 4) = func_00027E28(arg1 + 2);
}

void func_00021B88(void) {
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00021B90);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00021BF8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00021C60);

void func_00021C80(void) {
}

void func_00021C88(void) {
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00021C90);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00021CD4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00021CF8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00021D9C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00021DA4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00021DD4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00021F54);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00021FC4);

void func_00022078(s32 arg0) {
    s32 temp_a1;
    s32 var_a1;
    s32 var_s0;
    void *temp_s1;

    temp_s1 = arg0 + 0x10C;
    var_s0 = M2C_FIELD(temp_s1, s32 *, 4) - 1;
    if (var_s0 >= 0) {
        var_a1 = var_s0;
        do {
            scePaf_4E67BB08(func_00022F14(temp_s1, var_a1));
            temp_a1 = var_s0;
            var_s0 -= 1;
            func_00022F64(temp_s1, temp_a1);
            var_a1 = var_s0;
        } while (var_s0 >= 0);
    }
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000220DC);

void func_00022220(s32 arg0) {
    func_000230B8(arg0 + 0x10C);
    func_000230E0(arg0 + 0x118);
    func_00023108(arg0 + 0x124);
    func_00026BA8(arg0 + 4);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00022264);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000223C4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00022444);

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

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00022584);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00022638);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000226C4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_0002272C);

s32 func_00022794(s32 arg0, s32 *arg1) {
    *arg1 = scePaf_6C234A6A(arg0 + 0x4C);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000227C4);

void func_000227E4(void) {
}

void func_000227EC(void) {
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000227F4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00022904);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00022930);

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
                scePaf_4E67BB08((s32) *temp_v0);
                scePaf_4E67BB08((s32) temp_v0);
            }
            temp_a1 = var_s1;
            var_s1 -= 1;
            func_000235A4(temp_s2, temp_a1);
            var_a1 = var_s1;
        } while (var_s1 >= 0);
    }
}

void func_00022A8C(s32 arg0) {
    func_00022AEC();
    func_00023674(arg0 + 0x20);
}

void func_00022ABC(s32 arg0) {
    func_00022AEC();
    func_00023674(arg0 + 0x20);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00022AEC);

s32 func_00022B48(void *arg0, u32 arg1) {
    M2C_FIELD(arg0, u32 *, 0x18) = (u32) (arg1 >> 0xB);
    return 0;
}

void func_00022B58(void *arg0) {
    func_00023684(arg0 + 0x20);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}

void func_00022B84(void *arg0) {
    func_00023684(arg0 + 0x20);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00022BB0);

void func_00022DB0(M2C_UNK **arg0) {
    *arg0 = &D_00053518;
}

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_00053218);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_00053220);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_00053258);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_00053280);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00022DC0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00022E90);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00022F14);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00022F64);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00023034);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000230B8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000230D0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000230E0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000230F8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00023108);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00023120);

void func_00023130(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00053518;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00023148);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000231CC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_0002321C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000232EC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000233BC);

void func_00023440(M2C_UNK **arg0) {
    *arg0 = &D_000534D8;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00023450);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00023520);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000235A4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00023674);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00023684);

void func_0002369C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000534D8;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000236B4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00023738);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00023780);

void func_000237C8(M2C_UNK **arg0) {
    *arg0 = &D_00053518;
    scePaf_4E67BB08((s32) arg0);
}

void func_000237F0(M2C_UNK **arg0) {
    *arg0 = &D_00053508;
    scePaf_4E67BB08((s32) arg0);
}

void func_00023818(M2C_UNK **arg0) {
    *arg0 = &D_000534F8;
    scePaf_4E67BB08((s32) arg0);
}

void func_00023840(M2C_UNK **arg0) {
    *arg0 = &D_000534E8;
    scePaf_4E67BB08((s32) arg0);
}

void func_00023868(M2C_UNK **arg0) {
    *arg0 = &D_000534D8;
    scePaf_4E67BB08((s32) arg0);
}

void func_00023890(M2C_UNK **arg0) {
    *arg0 = &D_000534C8;
    scePaf_4E67BB08((s32) arg0);
}

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_000534C8);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_000534D8);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_000534E8);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_000534F8);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_00053508);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_00053518);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000238B8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00023A3C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00023AD0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00023B64);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00023BC8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00023C98);

s32 func_00023D84(void *arg0, void *arg1) {
    s32 temp_a0;
    s32 temp_s2;
    s32 temp_v1;
    s32 var_s3;
    void *temp_v0;

    temp_s2 = arg0 + 0x1C;
    var_s3 = 0;
    func_000250D0(temp_s2);
    temp_v1 = M2C_FIELD(arg0, s32 *, 4);
    temp_a0 = temp_v1 - 1;
    if ((temp_a0 != M2C_FIELD(arg0, s32 *, 0x14)) && ((temp_v1 != 0) || (M2C_FIELD(arg0, s32 *, 0x18) != 1))) {
        M2C_FIELD(arg0, s32 *, 4) = temp_a0;
        var_s3 = 1;
        if (temp_a0 < 0) {
            M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) - 1);
        }
        temp_v0 = (M2C_FIELD(arg0, s32 *, 4) * 0x10) + M2C_FIELD(arg0, s32 *, 0x10);
        M2C_FIELD(temp_v0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
        M2C_FIELD(temp_v0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
        M2C_FIELD(temp_v0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
        M2C_FIELD(temp_v0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
        func_000254D4(M2C_FIELD(arg0, s32 *, 0xC), 1);
    }
    func_000250EC(temp_s2);
    func_0002658C(1);
    return var_s3;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00023E64);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00023F30);

void func_00023F6C(void) {
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00023F74);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00023FD4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00024034);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00024074);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000240B4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000240FC);

void func_0002417C(void) {
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00024184);

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

void func_00024280(M2C_UNK **arg0) {
    *arg0 = &D_000535A0;
    scePaf_4E67BB08((s32) arg0);
}

void func_000242A8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00053668;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

void func_000242C0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00053668;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

void func_000242D8(void *arg0) {
    void *temp_s0;
    void *var_v0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00053668;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        var_v0 = M2C_FIELD(arg0, void **, 8);
        if (var_v0 != NULL) {
            do {
                temp_s0 = M2C_FIELD(var_v0, void **, 8);
                if (var_v0 != NULL) {
                    scePaf_4E67BB08((s32) var_v0);
                }
                var_v0 = temp_s0;
            } while (temp_s0 != NULL);
        }
    }
}

void func_00024330(void *arg0) {
    void *temp_s0;
    void *var_v0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00053668;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        var_v0 = M2C_FIELD(arg0, void **, 8);
        if (var_v0 != NULL) {
            do {
                temp_s0 = M2C_FIELD(var_v0, void **, 8);
                if (var_v0 != NULL) {
                    scePaf_4E67BB08((s32) var_v0);
                }
                var_v0 = temp_s0;
            } while (temp_s0 != NULL);
        }
    }
}

void func_00024388(void *arg0) {
    void *temp_s0;
    void *var_v0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00053668;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        var_v0 = M2C_FIELD(arg0, void **, 8);
        if (var_v0 != NULL) {
            do {
                temp_s0 = M2C_FIELD(var_v0, void **, 8);
                if (var_v0 != NULL) {
                    scePaf_4E67BB08((s32) var_v0);
                }
                var_v0 = temp_s0;
            } while (temp_s0 != NULL);
        }
    }
    scePaf_4E67BB08((s32) arg0);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000243F4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00024484);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_00053548);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_00053558);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_00053560);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_00053580);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_000535A0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000244CC);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_000535D8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000245E4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000247F0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_0002489C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_0002493C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00024998);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00024A54);

void func_00024A80(void) {
}

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_00053668);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00024A88);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00024B64);

s32 func_00024C1C(void *arg0) {
    func_000265F0(M2C_FIELD(arg0, s32 *, 8));
    return 1;
}

s32 func_00024C3C(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00024C44);

void func_00024C64(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000536F0;
    func_00025130((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

void func_00024C9C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000536F0;
    func_00025130((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

void func_00024CD4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000536F0;
    func_00025180((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

void func_00024D0C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000536F0;
    func_00025180((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

void func_00024D44(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000536F0;
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        func_00024B64((s32) arg0);
    }
    func_000251D0((s32) (arg0 + 0xC));
}

void func_00024D90(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000536F0;
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        func_00024B64((s32) arg0);
    }
    func_000251D0((s32) (arg0 + 0xC));
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00024DDC);

void func_00024E54(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00053708;
    func_00025418((s32) (arg0 + 4));
    func_000254D4(M2C_FIELD(arg0, s32 *, 4), 0);
}

void func_00024E94(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00053708;
    func_00025418((s32) (arg0 + 4));
    func_000254D4(M2C_FIELD(arg0, s32 *, 4), 0);
}

void func_00024ED4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00053708;
    func_00025464(arg0 + 4, arg1);
    func_000254D4(M2C_FIELD(arg0, s32 *, 4), 0);
}

void func_00024F14(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00053708;
    func_00025464(arg0 + 4, arg1);
    func_000254D4(M2C_FIELD(arg0, s32 *, 4), 0);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00024F54);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00024F7C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00024FA4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00024FE0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00025020);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00025068);

s32 func_00025088(void *arg0, M2C_UNK arg1) {
    return func_000254FC(M2C_FIELD(arg0, s32 *, 4), ~arg1) == 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000250AC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000250D0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000250EC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00025108);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00025130);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00025158);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00025180);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000251A8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000251D0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000251F8);

void func_00025234(void) {
}

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_000536F0);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_00053708);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_00053718);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_0002523C);

void func_000252A4(s32 arg0) {
    scePaf_C9831AFF("%s\n", arg0);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000252C8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_0002534C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00025418);

s32 func_00025464(s32 *arg0, M2C_UNK arg1) {
    s32 temp_v0;

    temp_v0 = sceKernelCreateEventFlag(arg1, 0x200, 0, 0);
    *arg0 = temp_v0;
    return (temp_v0 >= 0) ? 0 : -5;
}

s32 func_000254AC(void) {
    return (sceKernelDeleteEventFlag() == 0) ? 0 : -5;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000254D4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000254FC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00025524);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00025570);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000255E8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00025630);

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

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00025704);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00025794);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00025854);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00025910);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000259A8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00025B48);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00025C6C);

void func_00025CE8(void) {
    func_00025C6C(1, 0xFFFF);
}

void func_00025D08(void) {
    func_00025C6C(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00025D28);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00025D78);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_0005384C);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_00053874);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00025DFC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00025ECC);

void func_00025F14(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000538B8;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

void func_00025F2C(M2C_UNK **arg0) {
    *arg0 = &D_000538B8;
}

void func_00025F3C(M2C_UNK **arg0) {
    *arg0 = &D_000538B8;
    scePaf_4E67BB08((s32) arg0);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00025F64);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_000538B8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00025FF4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00026058);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_000538F4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00026160);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_00053954);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000261F8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000262C0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00026348);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000263AC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000264F4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_0002658C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000265B8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000265F0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000266F4);

void func_00026770(void) {
    func_000266F4(1, 0xFFFF);
}

void func_00026790(void) {
    func_000266F4(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000267B0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00026800);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_00053AE4);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_00053B0C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00026884);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00026954);

void func_0002699C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00053B58;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

void func_000269B4(M2C_UNK **arg0) {
    *arg0 = &D_00053B58;
}

void func_000269C4(M2C_UNK **arg0) {
    *arg0 = &D_00053B58;
    scePaf_4E67BB08((s32) arg0);
}

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_00053B58);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000269EC);

s32 func_00026A64(s32 *arg0) {
    s32 var_s1;

    var_s1 = 0;
    if (arg0 != NULL) {
        var_s1 = ~func_000286D0(*arg0) == 0;
        func_00027E70((s32) arg0);
    }
    return var_s1;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00026AB0);

void func_00026ACC(s32 *arg0) {
    scePaf_2FA84441(*arg0);
}

void func_00026AE8(s32 *arg0) {
    scePaf_84BD418F(*arg0);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00026B04);

void func_00026B40(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (func_00027E10(arg1) & 1);
    M2C_FIELD(arg0, s32 *, 4) = func_00027E28(arg1 + 2);
}

void func_00026B8C(s32 *arg0, void *arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg1, u8 *, 0) << 8;
    *arg0 = temp_v0;
    *arg0 = temp_v0 | M2C_FIELD(arg1, u8 *, 1);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00026BA8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00026BDC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00026D9C);

s32 func_00026DDC(s32 *arg0, void *arg1) {
    s32 temp_s0;
    void *temp_s2;

    temp_s0 = *arg0;
    temp_s2 = temp_s0 + 0x28;
    scePaf_FF2F98C6(arg1, temp_s0 + 4, 4U);
    M2C_FIELD(arg1, u8 *, 4) = (u8) M2C_FIELD(temp_s2, u8 *, 7);
    scePaf_FF2F98C6(arg1 + 5, temp_s0 + 0x31, M2C_FIELD(temp_s2, u8 *, 8));
    M2C_FIELD((arg1 + M2C_FIELD(temp_s2, u8 *, 8)), s8 *, 5) = 0;
    return 0;
}

s32 func_00026E50(s32 *arg0, void *arg1) {
    scePaf_F95EA3F1(arg1, *arg0 + 4, 4);
    M2C_FIELD(arg1, s8 *, 4) = 0;
    return 0;
}

s32 func_00026E90(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 4);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00026EA0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00026F50);

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

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00027094);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00027164);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000271B0);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_00053B74);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_00053B84);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_00053B94);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000271F0);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", D_00053BA4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000272E0);

s32 func_00027480(s32 *arg0, void *arg1) {
    scePaf_F95EA3F1(arg1, *arg0 + 4, 4);
    M2C_FIELD(arg1, s8 *, 4) = 0;
    return 0;
}

s32 func_000274C0(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        func_00027E70(temp_v0);
        *arg0 = 0;
    }
    return 0;
}

s32 func_00027500(void **arg0, void *arg1) {
    void *temp_s0;

    temp_s0 = *arg0;
    scePaf_F95EA3F1(arg1, temp_s0 + 4, 4);
    M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(temp_s0, u8 *, 0x2E);
    return 0;
}

s32 func_00027548(s32 *arg0, void *arg1) {
    s32 temp_s0;
    void *temp_s0_2;

    temp_s0 = *arg0;
    temp_s0_2 = temp_s0 + func_00027E28(temp_s0 + 8);
    M2C_FIELD(arg1, void **, 0) = temp_s0_2;
    M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(temp_s0_2, u8 *, 0x11);
    return 0;
}

s32 func_00027590(s32 *arg0, void *arg1) {
    s32 temp_s1;

    temp_s1 = *arg0;
    func_00026B40(arg1, temp_s1 + 4);
    func_00026B40(arg1 + 8, temp_s1 + 0xA);
    return 0;
}

s32 func_000275E0(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 4);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000275F0);

s32 func_000276A4(void *arg0, void *arg1) {
    void *temp_a2;

    temp_a2 = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(arg1, s8 *, 0) = (s8) ((u8) M2C_FIELD(temp_a2, u8 *, 0) >> 4);
    M2C_FIELD(arg1, s8 *, 1) = (s8) (M2C_FIELD(temp_a2, u8 *, 0) & 0xF);
    M2C_FIELD(arg1, s8 *, 2) = (s8) ((u8) M2C_FIELD(temp_a2, u8 *, 1) >> 4);
    M2C_FIELD(arg1, s8 *, 3) = (s8) (M2C_FIELD(temp_a2, u8 *, 1) & 1);
    return 0;
}

s32 func_000276E0(void *arg0, void *arg1) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(arg1, s8 *, 0) = (s8) ((u8) M2C_FIELD(temp_s0, u8 *, 0) >> 4);
    scePaf_F95EA3F1(arg1 + 1, (s32) (temp_s0 + 2), 2);
    M2C_FIELD(arg1, u8 *, 3) = (u8) M2C_FIELD(temp_s0, u8 *, 4);
    M2C_FIELD(arg1, s8 *, 4) = (s8) ((u8) M2C_FIELD(temp_s0, u8 *, 5) >> 4);
    M2C_FIELD(arg1, s8 *, 5) = (s8) (M2C_FIELD(temp_s0, u8 *, 5) & 0xF);
    return 0;
}

s32 func_0002774C(void *arg0, void *arg1) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(arg1, s8 *, 0) = (s8) ((u8) M2C_FIELD(temp_s0, u8 *, 0) >> 4);
    scePaf_F95EA3F1(arg1 + 1, (s32) (temp_s0 + 2), 2);
    M2C_FIELD(arg1, s8 *, 3) = (s8) ((u8) M2C_FIELD(temp_s0, u8 *, 5) >> 4);
    M2C_FIELD(arg1, s8 *, 4) = (s8) (M2C_FIELD(temp_s0, u8 *, 5) & 1);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000277B0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_000278B8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_021A6C", func_00027944);

