#include "common.h"
#include "savedata_plugin_decls.h"

#if FW_VERSION != 100
void func_000130A0(struct Unk_func_000130A0_0 *arg0) {
    M2C_UNK *temp_v0;
    M2C_UNK *var_v1;
    void *temp_s0;
    struct Unk_func_000130A0_var_v0 *var_v0;

    var_v1 = arg0->unk0;
    var_v0 = M2C_FIELD(var_v1, void **, 4);
    if (var_v0 != var_v1) {
        do {
            temp_s0 = var_v0->unk4;
            scePaf_7EC15225(var_v0);
            var_v1 = arg0->unk0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_v1);
    }
    M2C_FIELD(var_v1, M2C_UNK **, 4) = var_v1;
    arg0->unk4 = 0;
    temp_v0 = arg0->unk0;
    *temp_v0 = temp_v0;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000130FC);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001317C);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000131FC);

#if FW_VERSION == 100
void ***func_00010E54(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    *temp_s0 = M2C_FIELD(temp_v1, void **, 0);
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}
#endif

#if FW_VERSION != 100
void ***func_000132BC(void ***arg0, struct Unk_func_000132BC_1 *arg1, void **arg2) {
    void **temp_s0;
    struct Unk_func_000132BC_temp_v1 *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = temp_v1->unk4;
    *temp_s0 = temp_v1->unk0;
    M2C_FIELD(temp_v1->unk0, void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1);
    *arg0 = temp_s0;
    arg1->unk4 = (s32) (arg1->unk4 - 1);
    return arg0;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00013324);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00013360);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001339C);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000133C4);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000133EC);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00013428);

#if FW_VERSION == 100
s32 func_00011004(void *arg0) {
    scePaf_27F64616(M2C_FIELD(arg0, s32 *, 4));
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00011024(void) {
    func_00018D78();
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00011044);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000110B0);
#endif

#if FW_VERSION == 100
void func_00011110(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x20;
    if (M2C_FIELD(temp_s1, s32 *, 4) == 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    } else {
        scePaf_27F64616(M2C_FIELD(arg0, s32 *, 4));
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
    func_00013680(temp_s1);
}
#endif

#if FW_VERSION == 100
void func_00011160(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg2;
    func_00018DC4((s32) arg0, arg1);
}
#endif

#if FW_VERSION != 100
s32 func_0001346C(struct Unk_func_0001346C_0 *arg0) {
    scePaf_27F64616(arg0->unk4);
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_0001348C(void) {
    func_00018D78();
    return 0;
}
#endif

#if FW_VERSION != 100
void func_000134AC(struct Unk_func_000134AC_0 *arg0) {
    struct Unk_func_000134AC_temp_s1 *temp_s1;

    temp_s1 = (u8 *)arg0 + 0x20;
    if (temp_s1->unk4 == 0) {
        arg0->unk1C = 0;
    } else {
        scePaf_27F64616(arg0->unk4);
        arg0->unk1C = 0;
    }
    func_00013680(temp_s1);
}
#endif

#if FW_VERSION != 100
void func_000134FC(struct Unk_func_000134FC_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk30 = arg2;
    func_00018DC4((s32) arg0, arg1);
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001351C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000111A4);
#endif

#if FW_VERSION == 100
void func_000111EC(void) {
    sceVshCommonGui_C5B53362();
}
#endif

#if FW_VERSION == 100
void func_00011208(void) {
    sceVshCommonGui_A1C3DDD6();
}
#endif

#if FW_VERSION == 100
void func_00011224(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    sceVshCommonGui_607D5C82(arg1, arg2, arg3);
    M2C_FIELD(arg0, s8 *, 0x34) = 0;
}
#endif

#if FW_VERSION == 100
u8 func_0001125C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x34);
}
#endif

#if FW_VERSION != 100
void func_00013540(struct Unk_func_00013540_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    sceVshCommonGui_F4D1E387(arg1, arg2, arg3, arg4, arg5, arg6, 0);
    arg0->unk34 = 1;
}
#endif

#if FW_VERSION != 100
void func_0001358C(void) {
    sceVshCommonGui_C5B53362();
}
#endif

#if FW_VERSION != 100
void func_000135A8(void) {
    sceVshCommonGui_A1C3DDD6();
}
#endif

#if FW_VERSION != 100
void func_000135C4(struct Unk_func_000135C4_0 *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    sceVshCommonGui_607D5C82(arg1, arg2, arg3);
    arg0->unk34 = 0;
}
#endif

#if FW_VERSION != 100
u8 func_000135FC(struct Unk_func_000135FC_0 *arg0) {
    return arg0->unk34;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00013604);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00013680);

#if FW_VERSION == 100
s32 func_00011368(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}
#endif

#if FW_VERSION == 100
s32 func_00011370(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}
#endif

#if FW_VERSION == 100
s32 func_00011378(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION == 100
s32 func_00011380(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}
#endif

#if FW_VERSION == 100
s32 func_00011388(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}
#endif

#if FW_VERSION == 100
s32 func_00011390(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}
#endif

#if FW_VERSION == 100
s32 func_00011398(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}
#endif

#if FW_VERSION != 100
s32 func_00013708(struct Unk_func_00013708_0 *arg0) {
    return arg0->unk4;
}
#endif

#if FW_VERSION != 100
s32 func_00013710(struct Unk_func_00013710_0 *arg0) {
    return arg0->unk8;
}
#endif

#if FW_VERSION != 100
s32 func_00013718(struct Unk_func_00013718_0 *arg0) {
    return arg0->unkC;
}
#endif

#if FW_VERSION != 100
s32 func_00013720(struct Unk_func_00013720_0 *arg0) {
    return arg0->unk10;
}
#endif

#if FW_VERSION != 100
s32 func_00013728(struct Unk_func_00013728_0 *arg0) {
    return arg0->unk14;
}
#endif

#if FW_VERSION != 100
s32 func_00013730(struct Unk_func_00013730_0 *arg0) {
    return arg0->unk18;
}
#endif

#if FW_VERSION != 100
s32 func_00013738(struct Unk_func_00013738_0 *arg0) {
    return arg0->unk1C;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00013740);

#if FW_VERSION == 100
void func_000113C4(void *arg0) {
    scePaf_CAF05F1D(M2C_FIELD(arg0, s32 *, 4));
}
#endif

#if FW_VERSION == 100
void func_000113E0(void *arg0) {
    scePaf_3481F595(M2C_FIELD(arg0, s32 *, 4));
}
#endif

#if FW_VERSION == 100
void func_000113FC(void *arg0) {
    scePaf_DAB59652(M2C_FIELD(arg0, s32 *, 4));
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00011418);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001145C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000114A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001157C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00011658);
#endif

#if FW_VERSION != 100
void func_00013764(struct Unk_func_00013764_0 *arg0) {
    scePaf_CAF05F1D(arg0->unk4);
}
#endif

#if FW_VERSION != 100
void func_00013780(struct Unk_func_00013780_0 *arg0) {
    scePaf_3481F595(arg0->unk4);
}
#endif

#if FW_VERSION != 100
void func_0001379C(struct Unk_func_0001379C_0 *arg0) {
    scePaf_DAB59652(arg0->unk4);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000137B8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00013800);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00013848);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000138C0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00013938);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000139B8);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00013A3C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00011840);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_000226F8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022718);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022738);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00013ABC);
#endif

#if FW_VERSION != 100
s32 func_00013C24(struct Unk_func_00013C24_0 *arg0, struct Unk_func_00013C24_1 *arg1) {
    s32 var_v1;
    u8 temp_a0;
    u8 temp_v0;

    var_v1 = 0;
    if (arg1 != NULL) {
        temp_a0 = arg0->unk4C;
        if ((temp_a0 != 0) && ((temp_v0 = arg1->unkA30, var_v1 = 1, (temp_v0 == 0)) || (temp_a0 >= temp_v0))) {
            var_v1 = 0;
        }
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00013C5C);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00013C6C);
#endif

#if FW_VERSION != 100
void func_00013C88(void) {
}
#endif

#if FW_VERSION != 100
void func_00013C90(struct Unk_func_000008C8_0 *arg0, s8 arg1) {
    arg0->unk4D = arg1;
}
#endif

#if FW_VERSION != 100
s32 func_00013C98(struct Unk_func_00013C98_0 *arg0) {
    return arg0->unk18;
}
#endif

#if FW_VERSION != 100
M2C_UNK *func_00013CA0(void) {
    return &D_00022F1C;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00013CAC);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00013CD8);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00013D04);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00011A84);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00011AD4);
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_000227B8);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_000212C0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022738);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00021330);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00021340);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00011C78);
#endif

#if FW_VERSION == 100
void func_00011D7C(void) {
    IoFileMgrForUser_6D08A871(&D_000227E0);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00013D38);
#endif

#if FW_VERSION != 100
s32 func_00013D78(struct Unk_func_00013D78_0 *arg0) {
    scePaf_6829D7AF((s32) &D_00022F0C, 0, 0x10);
    scePaf_F95EA3F1(&D_00022F0C, arg0, 0x10);
    func_0001FA38(arg0->unk0, arg0->unk8);
    scePaf_6829D7AF((s32) &D_00023028, 0, 0xC);
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00013DEC(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00013DF4);
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_000227E0);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00021364);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00011D9C);
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_000227EC);

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022800);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00011F30);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00014038);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00014358);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_000213EC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_000213F8);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000143D4);

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022838);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001445C);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00014548);
#endif

#if FW_VERSION != 100
s32 func_000145E0(s32 arg0, u32 arg1) {
    return ((s32) (arg0 + 1) / (s32) (arg1 >> 5)) + 1;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00014600);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000146CC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022870);
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_0002287C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00012568);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00012624);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00012694);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00012B50);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00014B24);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00014D58);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00012E90);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00014E54);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00014FB0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00013118);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00015068);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000131E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00013234);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00015094);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000150F8);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00015180);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000151EC);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00015280);

#if FW_VERSION == 100
s32 func_00013528(void) {
    return 0x1330;
}
#endif

#if FW_VERSION == 100
void func_00013530(s32 arg0, s32 arg1) {
    func_0001445C(arg0, (s32) &D_000213EC, arg1);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00013554);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00013630);
#endif

#if FW_VERSION != 100
s32 func_000152B4(void) {
    return 0x1330;
}
#endif

#if FW_VERSION != 100
void func_000152BC(s32 arg0, s32 arg1) {
    func_0001445C(arg0, (s32) &D_000228C8, arg1);
}
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_000228C8);

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_000228D4);

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_000228DC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001378C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000139C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00013B3C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00013E50);
#endif

#if FW_VERSION == 100
s32 func_00013E84(void *arg0, s32 *arg1, s32 *arg2) {
    s32 var_v0;

    var_v0 = 0x80084002;
    if (arg0 != NULL) {
        if (arg2 != NULL) {
            *arg2 = M2C_FIELD(arg0, s32 *, 0x138);
        }
        if (arg1 != NULL) {
            *arg1 = M2C_FIELD(arg0, s32 *, 0x134);
        }
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00013EBC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00013F38);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00021530);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_0002153C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00021558);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00021564);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00021588);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00021598);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_000215A8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_000215C8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_000215E0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_000215E8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00021608);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00014040);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00014174);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000141A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000141D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00014284);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000142E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000143B4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000152E0);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000154C8);

#if FW_VERSION == 100
s32 func_0001466C(void) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceIoOpen(&D_00022908, 3, 0);
    var_v1 = 0;
    if (temp_v0 >= 0) {
        sceIoClose(temp_v0);
        var_v1 = 1;
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00015574);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000155F4);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00015650);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000156D4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00014900);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000157E0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000159A4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00015A60);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00015B18);
#endif

#if FW_VERSION != 100
void func_00015CB8(s32 arg0, s32 arg1) {
    func_00015B18(arg0, arg1, 1);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00015CD4);
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022908);

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022914);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00014ABC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00014C34);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00014C7C);
#endif

#if FW_VERSION == 100
s32 func_00014D28(s32 arg0) {
    return __builtin_allegrex_max(func_00014038(0, 0, arg0, 0, 0), -1);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00014D5C);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00015EAC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00015148);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00015FBC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000160E0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001612C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00016188);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00016294);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022934);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000162E8);
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022954);

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_0002295C);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001646C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00015374);
#endif

#if FW_VERSION == 100
void func_000155D8(s32 *arg0, s32 arg1, s32 arg2) {
    *arg0 = (*arg0 & ~(3 << arg1)) | (arg2 << arg1);
}
#endif

#if FW_VERSION == 100
void func_000155FC(s32 *arg0, s32 arg1) {
    *arg0 &= ~(3 << arg1);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001656C);
#endif

#if FW_VERSION != 100
void func_00016944(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;

    temp_a1 = arg1 * 2;
    *arg0 = (*arg0 & ~(3 << temp_a1)) | (arg2 << temp_a1);
}
#endif

#if FW_VERSION != 100
void func_0001696C(s32 *arg0, s32 arg1) {
    *arg0 &= ~(3 << arg1);
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00016988);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00016998);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000169AC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00015654);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000169C4);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00016C28);

#if FW_VERSION == 100
void func_000157E8(void *arg0) {
    s32 temp_v1;

    if (arg0 != NULL) {
        func_0001C2A0(M2C_FIELD(arg0, s32 *, 8));
        temp_v1 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_v1 != 0) {
            func_00013D04(temp_v1);
            M2C_FIELD(arg0, s32 *, 0) = 0;
        }
        func_00013D04((s32) arg0);
    }
}
#endif

#if FW_VERSION != 100
void func_00016C4C(struct Unk_func_00016C4C_0 *arg0) {
    s32 temp_v1;

    if (arg0 != NULL) {
        func_0001C2A0(arg0->unk8);
        temp_v1 = arg0->unk0;
        if (temp_v1 != 0) {
            func_00013D04(temp_v1);
            arg0->unk0 = 0;
        }
        scePaf_6829D7AF((s32) arg0, 0, 0x10C);
    }
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00016CA4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000158FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00015A58);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00015B2C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00015E20);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00016250);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00016428);
#endif

#if FW_VERSION == 100
void func_00016560(s32 arg0, s8 arg1) {
    M2C_FIELD(((arg0 * 8) + D_00021CB8), s8 *, 6) = arg1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00016578);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00016D6C);
#endif

#if FW_VERSION != 100
s32 func_00016ED4(struct Unk_func_00016ED4_0 *arg0) {
    s32 var_v0;

    var_v0 = 0x80084002;
    if (arg0 != NULL) {
        var_v0 = arg0->unk100;
    }
    return var_v0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00016EEC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00016F60);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00016F9C);
#endif

#if FW_VERSION != 100
s32 func_00016FA8(void) {
    s32 var_a0;

    var_a0 = 0;
    if (D_00023028.unk0 != 0) {
        var_a0 = D_00023028.unk4;
    }
    return var_a0;
}
#endif

#if FW_VERSION != 100
void func_00016FC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg4 != 1) {
        func_00016FFC(arg0, arg1, arg2, arg3);
    } else {
        func_000171DC(arg0, arg1, arg2, arg3);
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00016FFC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000171DC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000174DC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001767C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000177B4);
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_000229A0);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00017A60);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00017C5C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00017D40);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00017E70);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00017FD4);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000180FC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00016840);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00018BAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00016C0C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000181BC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001836C);
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_000229D0);

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_000229DC);

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_000229F0);

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022A08);

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022A18);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001842C);
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022A38);

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022A4C);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001851C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001867C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000186E8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001896C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000189EC);
#endif

#if FW_VERSION != 100
M2C_UNK *func_00018A44(s32 arg0) {
    M2C_UNK *var_v0;

    var_v0 = NULL;
    if (!(arg0 & 0xFF)) {
        var_v0 = &D_00022B18;
    }
    return var_v0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00018A60);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00018AE0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00018BAC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00018C1C);
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022A6C);

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022A74);

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022A84);

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022A94);

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022AA4);

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022AB0);

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022AC4);

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022AD8);

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022AE8);

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022AF4);

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022B00);

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022B0C);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022B18);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022B24);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00018C8C);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00018D20);

#if FW_VERSION == 100
void func_00016D30(void *arg0) {
    scePaf_27F64616(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    func_00013680(arg0 + 0x20);
}
#endif

#if FW_VERSION != 100
void func_00018D40(struct Unk_func_00018D40_0 *arg0) {
    scePaf_27F64616(arg0->unk4);
    arg0->unk1C = 0;
    func_00013680((u8 *)arg0 + 0x20);
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00018D78);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00018DC4);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00018ED0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00016F84);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000170C8);
#endif

#if FW_VERSION == 100
void func_0001716C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 100
void func_0001717C(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) >= arg1) {

    } else {
        func_000190E0((s32) arg0, arg1);
    }
}
#endif

#if FW_VERSION != 100
void func_00018F94(struct Unk_func_00018F94_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}
#endif

#if FW_VERSION != 100
void func_00018FA4(struct Unk_func_00018FA4_0 *arg0, s32 arg1) {
    if (arg0->unk8 >= arg1) {

    } else {
        func_000190E0((s32) arg0, arg1);
    }
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00018FD8);

#if FW_VERSION == 100
void func_0001906C(struct Unk_func_0001906C_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    func_00011150((arg0->unk0 + (arg0->unk4 * 0xC)) - 0xC);
    temp_v1 = arg0->unk4 - 1;
    temp_v0 = arg0->unk8;
    arg0->unk4 = temp_v1;
    if (temp_v1 >= (temp_v0 - 0x14)) {

    } else {
        func_000190E0((s32) arg0, temp_v0 - 0xA);
    }
}
#endif

#if FW_VERSION != 100
void func_0001906C(struct Unk_func_0001906C_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    func_00011150((arg0->unk0 + (arg0->unk4 * 0xC)) - 0xC);
    temp_v1 = arg0->unk4 - 1;
    temp_v0 = arg0->unk8;
    arg0->unk4 = temp_v1;
    if (temp_v1 >= (temp_v0 - 0x14)) {

    } else {
        func_000190E0((s32) arg0, temp_v0 - 0xA);
    }
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000190E0);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00019204);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001922C);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00019268);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000192AC);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00019734);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00019914);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000199C0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00019B74);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00019CFC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00019E6C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001A0E8);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001A8DC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000185F8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001AF5C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001B23C);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001B3A8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00018FC4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001B6EC);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001B984);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001BE28);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001BF30);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001C2A0);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001C38C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001A110);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001C50C);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001C8C4);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001C90C);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001C9F0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001CB40);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001CB40);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001D2A4);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001D30C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001B628);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001D364);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001D4F4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001B9A8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001D58C);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001D754);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001BCB0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001D7AC);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001D824);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001BDEC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001BEF0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001D894);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001D920);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001DAA8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001C3D0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001DC3C);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001DDBC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001C874);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001DFB4);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001E0CC);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001E1E0);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001E6A4);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001EA68);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001EB3C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001DB9C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001DCB8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001DEBC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001EEE0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001EFA8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001F100);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001F204);

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022B58);

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022BA8);

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022BB0);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001F3CC);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001F684);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001F754);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001F830);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001FA38);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001FAAC);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001FB00);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001FB3C);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001FBF8);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001FC8C);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001FD20);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001FD98);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001FE68);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001FEDC);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001FF3C);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0001FFD8);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000200C8);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_000201CC);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_0002033C);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00020510);

INCLUDE_ASM("nonmatchings/savedata_plugin_0130A0", func_00020568);

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022BD8);

INCLUDE_RODATA("nonmatchings/savedata_plugin_0130A0", D_00022BE0);
