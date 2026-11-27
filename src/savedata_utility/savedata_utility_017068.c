/* lang: c++ */
#include "common.h"
#include "savedata_utility_decls.h"

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017068);

#if FW_VERSION < 282
void ***func_0000FC68(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    *temp_s0 = M2C_FIELD(temp_v1, void **, 0);
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    sce_paf_private_free2(temp_v1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0000FCD0);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0000FD0C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0000FD48);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0000FD70);
#endif

#if FW_VERSION >= 350
void ***func_000170C4(void ***arg0, struct Unk_func_000170C4_1 *arg1, void **arg2) {
    void **temp_s0;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    *temp_s0 = M2C_FIELD(temp_v1, void **, 0);
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    sce_paf_private_free2(temp_v1);
    *arg0 = temp_s0;
    arg1->unk4 -= 1;
    return arg0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void ***func_000170C4(void ***arg0, struct Unk_func_000170C4_1 *arg1, void **arg2) {
    void **temp_s0;
    struct Unk_func_000170C4_temp_v1 *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = temp_v1->unk4;
    *temp_s0 = temp_v1->unk0;
    M2C_FIELD(temp_v1->unk0, void ***, 4) = temp_s0;
    sce_paf_private_free2(temp_v1);
    *arg0 = temp_s0;
    arg1->unk4 = (s32) (arg1->unk4 - 1);
    return arg0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001712C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017174);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000171BC);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017234);
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000172AC);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0000FDD4);

s32 func_0000FE18(void *arg0) {
    _ZN3paf4View12PageCloseAllEv(M2C_FIELD(arg0, s32 *, 4));
    return 0;
}

s32 func_0000FE38(s32 arg0, s32 arg1) {
    func_00015B7C(arg0, arg1);
    return 0;
}
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00011AEC);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0000FE58);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0000FF24);
#endif

#if FW_VERSION < 150 || (FW_VERSION >= 250 && FW_VERSION < 271)
void func_0000FF24(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x20;
    if (M2C_FIELD(temp_s1, s32 *, 4) == 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    } else {
        _ZN3paf4View12PageCloseAllEv(M2C_FIELD(arg0, s32 *, 4));
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
    func_000100F4((s32) temp_s1);
}
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00011BE4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00011BF4);
#endif

#if FW_VERSION < 271
void func_0000FF74(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg2;
    func_00015BC8((s32) arg0, arg1);
}

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0000FF94);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0000FFB8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
void func_0000FFB8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    sceVshCommonGui_F4D1E387(arg1, arg2, arg3, arg4, arg5, arg6, 0);
    M2C_FIELD(arg0, s8 *, 0x34) = 1;
}
#endif

#if FW_VERSION < 271
void func_00010000(void) {
    vsh::OptionMenu::Show();
}

void func_0001001C(void) {
    vsh::OptionMenu::Hide();
}

void func_00010038(void *arg0, paf::View *view, const char *page, const char *name) {
    vsh::OptionMenu::Close(view, page, name);
    M2C_FIELD(arg0, s8 *, 0x34) = 0;
}

u8 func_00010070(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x34);
}

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00010078);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000100F4);

s32 func_0001017C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 func_00010184(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

s32 func_0001018C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_00010194(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 func_0001019C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 func_000101A4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}

s32 func_000101AC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000101B4);
#endif

#if FW_VERSION < 250
void func_000101B4(void *arg0, s32 arg1) {
    _ZN3paf4View8PageOpenEPKcii(M2C_FIELD(arg0, s32 *, 4), arg1, 0, 0);
}
#endif

#if FW_VERSION < 271
void func_000101D8(void *arg0) {
    _ZN3paf4View12PageActivateEPKc(M2C_FIELD(arg0, s32 *, 4));
}

void func_000101F4(void *arg0) {
    _ZN3paf4View9PageCloseEPKc(M2C_FIELD(arg0, s32 *, 4));
}

void func_00010210(void *arg0, s32 *arg1) {
    _ZNK3paf4View8PageRootEPKc(M2C_FIELD(arg0, s32 *, 4), arg1);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000184FC);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018540);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001022C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00010270);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000102B4);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00010390);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001046C);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001732C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000173B0);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000188A0);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025388);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018A4C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00010654);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00011294);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 func_000124D0(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x4D) = 0;
    M2C_FIELD(arg0, s8 *, 0x4E) = 0;
    return 1;
}
#endif

#if FW_VERSION == 250
s32 func_000124D0(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x4D) = 0;
    M2C_FIELD(arg0, s8 *, 0x4F) = 0;
    return 1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
s32 func_000124D0(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x51) = 0;
    M2C_FIELD(arg0, s8 *, 0x53) = 0;
    return 1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000124E0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000252E0);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025300);

__asm__(".globl _ZTV14Class_0001FC80\n_ZTV14Class_0001FC80 = D_00025300 - 8\n");

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017430);

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

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00012504(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x4D) = arg1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
void func_00012504(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x51) = arg1;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018AC0);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000279C8);
#endif

#if FW_VERSION == 271
s32 func_00018BC0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
s32 func_00018BC0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
M2C_UNK *func_00018BC8(void) {
    return &D_00028288;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000175E0);

void func_000175FC(void) {
}

void func_00017604(struct Unk_func_00017604_0 *arg0, s8 arg1) {
    arg0->unk4D = arg1;
}

s32 func_0001760C(struct Unk_func_0001760C_0 *arg0) {
    return arg0->unk18;
}

M2C_UNK *func_00017614(void) {
    return &D_00025B3C;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017620);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001764C);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017674);
#else
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017678);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001769C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00010898);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
void func_00010898(void *arg0) {
    sce_paf_private_memset((s32) &D_00025B2C, 0, 0x10);
    sce_paf_private_memcpy(&D_00025B2C, arg0, 0x10);
    func_0001F664(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 8));
}
#endif

#if FW_VERSION < 150
void func_00010898(void *arg0) {
    sce_paf_private_memset((s32) &D_00025B2C, 0, 0x10);
    sce_paf_private_memcpy(&D_00025B2C, arg0, 0x10);
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018568);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000108E8);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025348);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FC80);

__asm__(".globl _ZTV14Class_0001FC80\n_ZTV14Class_0001FC80 = D_0001FC80 - 8\n");

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FC98);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FCF0);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FD00);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00010A8C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00010B90);
#endif

#if FW_VERSION < 250
void func_00010B90(void) {
    sceIoUnassign(&D_00025370);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_00018CE8(void) {
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000128BC);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000129A0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000176AC);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000176EC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 func_000176EC(struct Unk_func_000176EC_0 *arg0) {
    sce_paf_private_memset((s32) &D_00025B2C, 0, 0x10);
    sce_paf_private_memcpy(&D_00025B2C, arg0, 0x10);
    func_00022CF0(arg0->unk0, arg0->unk8);
    sce_paf_private_memset((s32) &D_00025C48, 0, 0xC);
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 func_00017760(void) {
    return 0;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017754);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001779C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017768);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001784C);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025370);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FD24);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00021E54);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00010BB0);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0002537C);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017818);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017B14);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017768);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001784C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017D60);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025390);

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00010D44);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000179AC);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017CCC);
#endif

#if FW_VERSION >= 103 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017D48);
#endif

#if FW_VERSION == 103
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00020C1C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00021EC4);
#endif

#if FW_VERSION >= 103 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017DD0);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025440);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0002544C);
#endif

#if FW_VERSION < 103
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FDAC);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FDB8);
#endif

#if FW_VERSION < 103 || (FW_VERSION >= 282 && FW_VERSION < 350)
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017D48);
#endif

#if FW_VERSION < 103 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000253C8);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017DD4);
#endif

#if FW_VERSION < 103 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017DD0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017EBC);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017F54);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 func_00017F54(s32 arg0, u32 arg1) {
    return ((s32) (arg0 + 1) / (s32) (arg1 >> 5)) + 1;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017F74);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018040);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000181D0);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018358);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000185F8);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000187C8);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000186CC);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018948);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025400);
#endif

#if FW_VERSION < 271 || (FW_VERSION >= 282 && FW_VERSION < 350)
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0002540C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019428);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001137C);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00011EB8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_000131B8(s32 arg0, u32 arg1) {
    return ((s32) (arg0 + 1) / (s32) (arg1 >> 5)) + 1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
s32 func_000131B8(s32 arg0, u32 arg1) {
    return (((s32) (arg0 + 1) / (s32) (arg1 >> 5)) + 1) * arg1;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000194F8);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000195C4);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019754);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000198DC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000131E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00011438);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000114A8);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000116A8);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00011964);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018498);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000186CC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019D40);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00011CA4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000187C8);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018924);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00011F2C);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000189DC);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00011FF4);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00012048);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018A08);

#if FW_VERSION == 103
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FDAC);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018AEC);
#else
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018A6C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018AF4);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018B60);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018BF4);
#endif

#if FW_VERSION < 282
s32 func_0001233C(void) {
    return 0x1330;
}

void func_00012344(s32 arg0, s32 arg1) {
    func_00017DD0(arg0, (s32) &D_0001FDAC, arg1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FDAC);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000254A4);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00026B08_v260);
#endif

#if FW_VERSION >= 282
s32 func_00018C28(void) {
    return 0x1330;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018C30);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00018C30(s32 arg0, s32 arg1) {
    func_00017DD0(arg0, (s32) &D_00025458, arg1);
}
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025458);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025988);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0002599C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018D38);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018D4C);
#endif

#if FW_VERSION < 260 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025464);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0002546C);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00012DA0);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00013450);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00014018);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00014738);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00012368);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00012C64);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00012CD0);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001AC94);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001ADBC);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00012D4C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00012E54);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FEF0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001AEC4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001AFBC);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001B0B0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FEFC);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FF18);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FF24);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FF48);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FF58);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FF68);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FF88);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FFA0);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FFA8);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0001FFC8);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00012F58);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00012F88);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00012FB8);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00012FE8);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00013CEC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00014CDC);
#endif

#if FW_VERSION < 103
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00013098);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000130FC);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00013B24);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00014064);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00014E38);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00015054);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000131C8);
#endif

#if FW_VERSION < 103
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00013388);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018C54);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018D4C);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018E3C);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025498);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00027BD4);
#endif

#if FW_VERSION < 250
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

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00014124);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019268);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019144);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001B800);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A23C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00015498);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00013714);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019154);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000192E0);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019318);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000193D4);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000197B4);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000197BC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001948C);

void func_00019610(s32 arg0, s32 arg1) {
    func_0001948C(arg0, arg1, 0);
}

void func_0001962C(s32 arg0, s32 arg1) {
    func_0001948C(arg0, arg1, 1);
}

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019648);
#endif

#if FW_VERSION != 271
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025498);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000138D0);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00027BD4);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000254A4);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000199B4);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000138D0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019820);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019930);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019A20);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00019A20(s32 arg0) {
    if (func_00019820() >= 0) {
        func_00019930(arg0);
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019A54);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019AA0);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019CD0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019AFC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019C08);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019E44);

s32 func_00019E68(u8 *arg0, s32 arg1) {
    return (arg1 & *arg0) != 0;
}

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019E78);

void func_00019E90(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;

    temp_a1 = arg1 * 2;
    *arg0 = (*arg0 & ~(3 << temp_a1)) | (arg2 << temp_a1);
}

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019EB8);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019EC8);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019F28);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019FEC);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000254C4);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0002005C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00013970);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00013A48);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00013A90);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001BC10);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001BCC8);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00013B3C);
#endif

#if FW_VERSION < 250
s32 func_00013B3C(s32 arg0) {
    return __builtin_allegrex_max(func_000179AC(0, 0, arg0, 0, 0), -1);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_0001BE68(s32 arg0, s32 arg1) {
    func_0001BCC8(arg0, arg1, 1);
}

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001BE84);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00013B70);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00013D7C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001C16C);

void func_0001C254(s32 arg0) {
    if (func_00013D7C() >= 0) {
        func_0001C16C(arg0);
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00015CEC);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00015D38);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001C330);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001C43C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
void func_0001C490(s32 arg0, s32 arg1, s32 arg2) {
    func_0001C570(arg0, arg0, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001C4B8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000220C8);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019C44);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00013F5C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019C5C);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000254E4);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0002552C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001C570);
#endif

#if FW_VERSION < 250 || (FW_VERSION >= 282 && FW_VERSION < 350)
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000254EC);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019DE0);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019C5C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001C7F0);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00014188);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_000143EC(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;

    temp_a1 = arg1 * 2;
    *arg0 = (*arg0 & ~(3 << temp_a1)) | (arg2 << temp_a1);
}
#endif

#if FW_VERSION < 250
void func_000143EC(s32 *arg0, s32 arg1, s32 arg2) {
    *arg0 = (*arg0 & ~(3 << arg1)) | (arg2 << arg1);
}
#endif

#if FW_VERSION < 282
void func_00014410(s32 *arg0, s32 arg1) {
    *arg0 &= ~(3 << arg1);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019EE0);

void func_0001A2B8(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;

    temp_a1 = arg1 * 2;
    *arg0 = (*arg0 & ~(3 << temp_a1)) | (arg2 << temp_a1);
}

void func_0001A2E0(s32 *arg0, s32 arg1) {
    *arg0 &= ~(3 << arg1);
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A2FC);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A30C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A320);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001CB8C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00014468);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A338);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A59C);
#endif

#if FW_VERSION == 271
void func_000145FC(void *arg0) {
    s32 temp_v1;

    if (arg0 != NULL) {
        func_00018C48(M2C_FIELD(arg0, s32 *, 8));
        temp_v1 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_v1 != 0) {
            func_00017678(temp_v1);
            M2C_FIELD(arg0, s32 *, 0) = 0;
        }
        sce_paf_private_memset((s32) arg0, 0, 0x10C);
    }
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
void func_000145FC(void *arg0) {
    s32 temp_v1;

    if (arg0 != NULL) {
        func_00018C48(M2C_FIELD(arg0, s32 *, 8));
        temp_v1 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_v1 != 0) {
            func_00017678(temp_v1);
            M2C_FIELD(arg0, s32 *, 0) = 0;
        }
        sce_paf_private_memset((s32) arg0, 0, 0x108);
    }
}
#endif

#if FW_VERSION < 250
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

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0001A5C0(struct Unk_func_0001A5C0_0 *arg0) {
    s32 temp_v1;

    if (arg0 != NULL) {
        func_0001F558(arg0->unk8);
        temp_v1 = arg0->unk0;
        if (temp_v1 != 0) {
            func_00017678(temp_v1);
            arg0->unk0 = 0;
        }
        sce_paf_private_memset((s32) arg0, 0, 0x10C);
    }
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A618);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001CECC);

s32 func_0001D034(void *arg0) {
    s32 var_v0;

    var_v0 = 0x80084002;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x100);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001D04C);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00027C60);

void func_0001D0C0(void) {
    if (D_00028394 != 0) {
        func_00017678(D_00028394);
        D_00028394 = 0;
    }
}

s32 func_0001D0FC(void) {
    return D_00028394;
}

s32 func_0001D108(void) {
    s32 var_a0;

    var_a0 = 0;
    if (M2C_FIELD(&D_00028394, s32 *, 0) != 0) {
        var_a0 = M2C_FIELD(&D_00028394, s32 *, 4);
    }
    return var_a0;
}

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001D128);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001D15C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001D33C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001D5FC);

void func_0001D770(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg4 != 1) {
        func_0001D7A4(arg0, arg1, arg2, arg3);
    } else {
        func_0001D8DC(arg0, arg1, arg2);
    }
}

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001D7A4);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001D8DC);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001DB5C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001B5B8);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001C590);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001DCD0);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001DDF8);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001DEB8);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001DF5C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001E12C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001E1EC);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00014710);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001486C);
#endif

#if FW_VERSION < 250
s32 func_0001492C(void *arg0) {
    s32 var_v0;

    var_v0 = -0x1000;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x100);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00014940);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00014C34);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00016CC0);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00014E0C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00015064);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001523C);

void func_00015374(s32 arg0, s8 arg1) {
    M2C_FIELD(((arg0 * 8) + D_000205BC), s8 *, 6) = arg1;
}

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001538C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A6E0);
#endif

#if FW_VERSION >= 282
s32 func_0001A848(struct Unk_func_0001A848_0 *arg0) {
    s32 var_v0;

    var_v0 = 0x80084002;
    if (arg0 != NULL) {
        var_v0 = arg0->unk100;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A860);
#endif

#if FW_VERSION == 282 || FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A8D4);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void func_0001A8D4(void) {
    if (D_00025C48.unk0 != 0) {
        func_00017678(D_00025C48.unk0);
        D_00025C48.unk0 = 0;
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A910);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A91C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 func_0001A91C(void) {
    s32 var_a0;

    var_a0 = 0;
    if (D_00025C48.unk0 != 0) {
        var_a0 = D_00025C48.unk4;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001AA58);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0001A93C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg4 != 1) {
        func_0001A970(arg0, arg1, arg2, arg3);
    } else {
        func_0001AB50(arg0, arg1, arg2, arg3);
    }
}

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A970);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001AB50);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001AE50);

void func_0001AFBC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg4 != 1) {
        func_0001AFF0(arg0, arg1, arg2, arg3);
    } else {
        func_0001B128(arg0, arg1, arg2);
    }
}

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001AFF0);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001B128);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025530);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001AE10);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001AFBC);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001B3D8);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A93C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001B3D4);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001B5D0);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001B6B4);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001B7E4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001B8A4);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001B948);
#endif

#if FW_VERSION < 250 || (FW_VERSION >= 282 && FW_VERSION < 350)
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001BA70);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017538);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00015654);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000159B0);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00015A20);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001BB30);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001BCE0);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025560);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0002556C);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001BB30);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025580);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001C35C);
#else
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025598);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000255A8);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001AFBC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001BDA0);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000255C8);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001BE90);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000256A8);
#endif

#if FW_VERSION >= 351
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025E54);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025E60);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025E6C);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025E78);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025B74);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025B80);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025B8C);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025B98);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00026CD4);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001BE78);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001B0B0);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001CF68);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001CFD4);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001D258);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025684);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0002568C);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0002569C);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000256AC);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000256BC);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000256C8_v271);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000256DC);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000256F0_v271);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025700);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0002570C);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025718);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025724);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025730);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00026DA0);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001D2D8);
#endif

#if FW_VERSION == 271
M2C_UNK *func_0001C3F8(s32 arg0) {
    M2C_UNK *var_v0;

    var_v0 = NULL;
    if ((arg0 & 0xFF) == 0) {
        var_v0 = &D_00025730;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001D330);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001D3B0);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000159B0);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001D4EC);
#endif

#if FW_VERSION < 250 || (FW_VERSION >= 282 && FW_VERSION < 350)
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000255DC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001BE90);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001BFF0);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001C05C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001C2E0);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001C360);
#endif

#if FW_VERSION >= 282
M2C_UNK *func_0001C3B8(s32 arg0) {
    M2C_UNK *var_v0;

    var_v0 = NULL;
    if ((arg0 & 0xFF) == 0) {
        var_v0 = &D_000256A8;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001C3D4);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001C454);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001C520);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001C564);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001C9EC);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001CBCC);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001CC78);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001CE2C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001CFB4);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001D124);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001D3A0);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001DB94);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001E214);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001E4F4);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001E660);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001E9A4);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001EC3C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001F0E0);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001F1E8);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001F558);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001F644);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001F7C4);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001FB7C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001FBC4);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001FCA8);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001FDF8);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0002055C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000205C4);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0002061C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000207AC);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00020844);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00020A0C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00020A64);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00020ADC);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00020B4C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00020BD8);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00020D60);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00020EF4);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00021074);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0002126C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00021384);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00021498);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0002195C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00021D20);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00021DF4);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00022198);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00022260);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000223B8);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000224BC);
#endif

#if FW_VERSION != 271
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000255FC);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025604);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025614);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025624);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025634);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025640);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025654);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025668);
#endif

#if FW_VERSION < 271 || (FW_VERSION >= 282 && FW_VERSION < 350)
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025678);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025684);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00025690);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_0002569C);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_00026DA0);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00015A90);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00015B24);

void func_00015B44(void *arg0) {
    _ZN3paf4View12PageCloseAllEv(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    func_000100F4((s32) (arg0 + 0x20));
}

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00015B7C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00015BC8);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00015CD4);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00015D98);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00015EDC);
#endif

#if FW_VERSION < 271
void func_00015F80(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

void func_00015F90(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) >= arg1) {

    } else {
        func_000160CC((s32) arg0, arg1);
    }
}

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00015FC4);

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

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000160CC);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000161F0);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00016218);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00016254);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00016298);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00016794);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00016A2C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001F270);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001F424);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001F5AC);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001F71C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001F998);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00016AD8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0002080C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00020AEC);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001740C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017930);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00020F9C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00017DD8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018198);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000216D8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000187B0);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018C48);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018D88);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00021DBC);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00018F24);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019514);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001955C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019640);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00019798);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A37C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A3E4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00022C14);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A43C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A6EC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00022E3C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001A7BC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001AA50);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0002305C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001AAC4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001AB90);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00023144);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000231D0);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001AC00);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001AD04);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001AF7C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000234EC);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001B1E4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001B438);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00023864);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001B688);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001B830);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001B960);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001BF48);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001C3C4);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001C4B4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00024790);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00024858);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_000249B0);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001C9B0);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001CACC);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001CCD0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001CE7C);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000202C8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000256A8);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000256B4);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000256C0);

INCLUDE_RODATA("nonmatchings/savedata_utility_017068", D_000256C8);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00022684);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0002293C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00022A0C);

INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_00022AE8);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_017068", func_0001F664);
#endif

#if FW_VERSION >= 282
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
