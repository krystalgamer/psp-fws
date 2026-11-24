#include "common.h"
#include "savedata_utility_decls.h"

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017068);

#if FW_VERSION == 100
void ***func_0000FC68(void ***arg0, void *arg1, void **arg2) {
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

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0000FCD0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0000FD0C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0000FD48);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0000FD70);
#endif

#if FW_VERSION != 100
void ***func_000170C4(void ***arg0, struct Unk_func_000170C4_1 *arg1, void **arg2) {
    void **temp_s0;
    struct Unk_func_000170C4_temp_v1 *temp_v1;

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

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001712C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017174);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000171BC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017234);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000172AC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0000FDD4);
#endif

#if FW_VERSION == 100
s32 func_0000FE18(void *arg0) {
    scePaf_27F64616(M2C_FIELD(arg0, s32 *, 4));
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_0000FE38(s32 arg0, s32 arg1) {
    func_00015B7C(arg0, arg1);
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0000FE58);
#endif

#if FW_VERSION == 100
void func_0000FF24(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x20;
    if (M2C_FIELD(temp_s1, s32 *, 4) == 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    } else {
        scePaf_27F64616(M2C_FIELD(arg0, s32 *, 4));
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
    func_000100F4((s32) temp_s1);
}
#endif

#if FW_VERSION == 100
void func_0000FF74(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg2;
    func_00015BC8((s32) arg0, arg1);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0000FF94);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0000FFB8);
#endif

#if FW_VERSION == 100
void func_00010000(void) {
    sceVshCommonGui_C5B53362();
}
#endif

#if FW_VERSION == 100
void func_0001001C(void) {
    sceVshCommonGui_A1C3DDD6();
}
#endif

#if FW_VERSION == 100
void func_00010038(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    sceVshCommonGui_607D5C82(arg1, arg2, arg3);
    M2C_FIELD(arg0, s8 *, 0x34) = 0;
}
#endif

#if FW_VERSION == 100
u8 func_00010070(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x34);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00010078);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000100F4);
#endif

#if FW_VERSION == 100
s32 func_0001017C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}
#endif

#if FW_VERSION == 100
s32 func_00010184(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}
#endif

#if FW_VERSION == 100
s32 func_0001018C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION == 100
s32 func_00010194(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}
#endif

#if FW_VERSION == 100
s32 func_0001019C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}
#endif

#if FW_VERSION == 100
s32 func_000101A4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}
#endif

#if FW_VERSION == 100
s32 func_000101AC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000101B4);
#endif

#if FW_VERSION == 100
void func_000101D8(void *arg0) {
    scePaf_CAF05F1D(M2C_FIELD(arg0, s32 *, 4));
}
#endif

#if FW_VERSION == 100
void func_000101F4(void *arg0) {
    scePaf_3481F595(M2C_FIELD(arg0, s32 *, 4));
}
#endif

#if FW_VERSION == 100
void func_00010210(void *arg0, s32 *arg1) {
    scePaf_DAB59652(M2C_FIELD(arg0, s32 *, 4), arg1);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001022C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00010270);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000102B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00010390);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001046C);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001732C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000173B0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00010654);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000252E0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025300);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017430);
#endif

#if FW_VERSION != 100
s32 func_00017598(struct Unk_func_00000B08_0 *arg0, struct Unk_func_00000C70_1 *arg1) {
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

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000175D0);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000175E0);
#endif

#if FW_VERSION != 100
void func_000175FC(void) {
}
#endif

#if FW_VERSION != 100
void func_00017604(struct Unk_func_00017604_0 *arg0, s8 arg1) {
    arg0->unk4D = arg1;
}
#endif

#if FW_VERSION != 100
s32 func_0001760C(struct Unk_func_0001760C_0 *arg0) {
    return arg0->unk18;
}
#endif

#if FW_VERSION != 100
M2C_UNK *func_00017614(void) {
    return &D_00025B3C;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017620);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001764C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017678);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00010898);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000108E8);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025348);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FC80);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FC98);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FCF0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FD00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00010A8C);
#endif

#if FW_VERSION == 100
void func_00010B90(void) {
    IoFileMgrForUser_6D08A871(&D_00025370);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000176AC);
#endif

#if FW_VERSION != 100
s32 func_000176EC(struct Unk_func_000176EC_0 *arg0) {
    scePaf_6829D7AF((s32) &D_00025B2C, 0, 0x10);
    scePaf_F95EA3F1(&D_00025B2C, arg0, 0x10);
    func_00022CF0(arg0->unk0, arg0->unk8);
    scePaf_6829D7AF((s32) &D_00025C48, 0, 0xC);
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00017760(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017768);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001784C);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025370);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FD24);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00010BB0);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0002537C);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025390);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00010D44);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000179AC);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017CCC);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FDAC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FDB8);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017D48);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000253C8);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017DD0);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017EBC);
#endif

#if FW_VERSION != 100
s32 func_00017F54(s32 arg0, u32 arg1) {
    return ((s32) (arg0 + 1) / (s32) (arg1 >> 5)) + 1;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017F74);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018040);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000181D0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018358);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025400);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0002540C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001137C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00011438);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000114A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000116A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00011964);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018498);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000186CC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00011CA4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000187C8);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018924);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00011F2C);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000189DC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00011FF4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00012048);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018A08);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018A6C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018AF4);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018B60);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018BF4);

#if FW_VERSION == 100
s32 func_0001233C(void) {
    return 0x1330;
}
#endif

#if FW_VERSION == 100
void func_00012344(s32 arg0, s32 arg1) {
    func_00017DD0(arg0, (s32) &D_0001FDAC, arg1);
}
#endif

#if FW_VERSION != 100
s32 func_00018C28(void) {
    return 0x1330;
}
#endif

#if FW_VERSION != 100
void func_00018C30(s32 arg0, s32 arg1) {
    func_00017DD0(arg0, (s32) &D_00025458, arg1);
}
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025458);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025464);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0002546C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00012368);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00012C64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00012CD0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00012D4C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00012E54);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FEF0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FEFC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FF18);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FF24);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FF48);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FF58);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FF68);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FF88);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FFA0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FFA8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FFC8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00012F58);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00012F88);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00012FB8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00012FE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00013098);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000130FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000131C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00013388);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018C54);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018D4C);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018E3C);

#if FW_VERSION == 100
s32 func_00013480(void) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceIoOpen(&D_00025498, 3, 0);
    var_v1 = 0;
    if (temp_v0 >= 0) {
        sceIoClose(temp_v0);
        var_v1 = 1;
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018EE8);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018F68);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018FC4);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019048);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00013714);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019154);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000192E0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019318);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000193D4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001948C);
#endif

#if FW_VERSION != 100
void func_00019610(s32 arg0, s32 arg1) {
    func_0001948C(arg0, arg1, 0);
}
#endif

#if FW_VERSION != 100
void func_0001962C(s32 arg0, s32 arg1) {
    func_0001948C(arg0, arg1, 1);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019648);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025498);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000254A4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000138D0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019820);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019930);
#endif

#if FW_VERSION != 100
void func_00019A20(s32 arg0) {
    if (func_00019820() >= 0) {
        func_00019930(arg0);
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019A54);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019AA0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019AFC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019C08);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000254C4);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0002005C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00013970);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00013A48);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00013A90);
#endif

#if FW_VERSION == 100
s32 func_00013B3C(s32 arg0) {
    return __builtin_allegrex_max(func_000179AC(0, 0, arg0, 0, 0), -1);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00013B70);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00013D7C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00013F5C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019C5C);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000254E4);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000254EC);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019DE0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00014188);
#endif

#if FW_VERSION == 100
void func_000143EC(s32 *arg0, s32 arg1, s32 arg2) {
    *arg0 = (*arg0 & ~(3 << arg1)) | (arg2 << arg1);
}
#endif

#if FW_VERSION == 100
void func_00014410(s32 *arg0, s32 arg1) {
    *arg0 &= ~(3 << arg1);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019EE0);
#endif

#if FW_VERSION != 100
void func_0001A2B8(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;

    temp_a1 = arg1 * 2;
    *arg0 = (*arg0 & ~(3 << temp_a1)) | (arg2 << temp_a1);
}
#endif

#if FW_VERSION != 100
void func_0001A2E0(s32 *arg0, s32 arg1) {
    *arg0 &= ~(3 << arg1);
}
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A2FC);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A30C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A320);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00014468);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A338);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A59C);

#if FW_VERSION == 100
void func_000145FC(void *arg0) {
    s32 temp_v1;

    if (arg0 != NULL) {
        func_00018C48(M2C_FIELD(arg0, s32 *, 8));
        temp_v1 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_v1 != 0) {
            func_00017678(temp_v1);
            M2C_FIELD(arg0, s32 *, 0) = 0;
        }
        func_00017678((s32) arg0);
    }
}
#endif

#if FW_VERSION != 100
void func_0001A5C0(struct Unk_func_0001A5C0_0 *arg0) {
    s32 temp_v1;

    if (arg0 != NULL) {
        func_0001F558(arg0->unk8);
        temp_v1 = arg0->unk0;
        if (temp_v1 != 0) {
            func_00017678(temp_v1);
            arg0->unk0 = 0;
        }
        scePaf_6829D7AF((s32) arg0, 0, 0x10C);
    }
}
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A618);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00014710);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001486C);
#endif

#if FW_VERSION == 100
s32 func_0001492C(void *arg0) {
    s32 var_v0;

    var_v0 = -0x1000;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x100);
    }
    return var_v0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00014940);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00014C34);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00014E0C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00015064);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001523C);
#endif

#if FW_VERSION == 100
void func_00015374(s32 arg0, s8 arg1) {
    M2C_FIELD(((arg0 * 8) + D_000205BC), s8 *, 6) = arg1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001538C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A6E0);
#endif

#if FW_VERSION != 100
s32 func_0001A848(struct Unk_func_0001A848_0 *arg0) {
    s32 var_v0;

    var_v0 = 0x80084002;
    if (arg0 != NULL) {
        var_v0 = arg0->unk100;
    }
    return var_v0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A860);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A8D4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A910);
#endif

#if FW_VERSION != 100
s32 func_0001A91C(void) {
    s32 var_a0;

    var_a0 = 0;
    if (D_00025C48.unk0 != 0) {
        var_a0 = D_00025C48.unk4;
    }
    return var_a0;
}
#endif

#if FW_VERSION != 100
void func_0001A93C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg4 != 1) {
        func_0001A970(arg0, arg1, arg2, arg3);
    } else {
        func_0001AB50(arg0, arg1, arg2, arg3);
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A970);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001AB50);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001AE50);
#endif

#if FW_VERSION != 100
void func_0001AFBC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg4 != 1) {
        func_0001AFF0(arg0, arg1, arg2, arg3);
    } else {
        func_0001B128(arg0, arg1, arg2);
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001AFF0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001B128);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025530);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001B3D4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001B5D0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001B6B4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001B7E4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001B8A4);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001B948);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001BA70);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00015654);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000159B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00015A20);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001BB30);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001BCE0);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025560);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0002556C);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025580);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025598);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000255A8);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001BDA0);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000255C8);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000255DC);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001BE90);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001BFF0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001C05C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001C2E0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001C360);
#endif

#if FW_VERSION != 100
M2C_UNK *func_0001C3B8(s32 arg0) {
    M2C_UNK *var_v0;

    var_v0 = NULL;
    if (!(arg0 & 0xFF)) {
        var_v0 = &D_000256A8;
    }
    return var_v0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001C3D4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001C454);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001C520);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001C564);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001C9EC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001CBCC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001CC78);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001CE2C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001CFB4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001D124);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001D3A0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001DB94);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001E214);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001E4F4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001E660);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001E9A4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001EC3C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001F0E0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001F1E8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001F558);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001F644);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001F7C4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001FB7C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001FBC4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001FCA8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001FDF8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0002055C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000205C4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0002061C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000207AC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00020844);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00020A0C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00020A64);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00020ADC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00020B4C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00020BD8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00020D60);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00020EF4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00021074);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0002126C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00021384);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00021498);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0002195C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00021D20);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00021DF4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00022198);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00022260);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000223B8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000224BC);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000255FC);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025604);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025614);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025624);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025634);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025640);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025654);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025668);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025678);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025684);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025690);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0002569C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00015A90);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00015B24);
#endif

#if FW_VERSION == 100
void func_00015B44(void *arg0) {
    scePaf_27F64616(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    func_000100F4((s32) (arg0 + 0x20));
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00015B7C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00015BC8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00015CD4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00015D98);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00015EDC);
#endif

#if FW_VERSION == 100
void func_00015F80(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 100
void func_00015F90(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) >= arg1) {

    } else {
        func_000160CC((s32) arg0, arg1);
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00015FC4);
#endif

#if FW_VERSION == 100
void func_00016058(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    func_00000464((M2C_FIELD(arg0, s32 *, 0) + (M2C_FIELD(arg0, s32 *, 4) * 0xC)) - 0xC);
    temp_v1 = M2C_FIELD(arg0, s32 *, 4) - 1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 4) = temp_v1;
    if (temp_v1 >= (temp_v0 - 0x14)) {

    } else {
        func_000160CC((s32) arg0, temp_v0 - 0xA);
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000160CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000161F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00016218);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00016254);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00016298);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00016794);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00016A2C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00016AD8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001740C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017930);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017DD8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018198);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000187B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018C48);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018D88);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018F24);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019514);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001955C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019640);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019798);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A37C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A3E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A43C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A6EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A7BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001AA50);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001AAC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001AB90);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001AC00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001AD04);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001AF7C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001B1E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001B438);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001B688);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001B830);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001B960);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001BF48);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001C3C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001C4B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001C9B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001CACC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001CCD0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001CE7C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000202C8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000256A8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000256B4);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000256C0);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000256C8);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00022684);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0002293C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00022A0C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00022AE8);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00022CF0);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00022D64);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00022DB8);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00022DF4);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00022EB0);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00022F44);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00022FD8);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00023050);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00023120);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00023194);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000231F4);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00023290);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00023380);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00023484);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000235F4);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000237C8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001E1FC);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000256F0);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00020358);
#endif
